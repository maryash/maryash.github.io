---
layout: myDefault
title: STYLE GUIDE
---

**[CSCI 39500 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; DATABASE DESIGN &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; HUNTER COLLEGE &nbsp; CUNY](index.html)** &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; [**SYLLABUS**](syllabus.html){:target="_blank"} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; [**GRADESCOPE**](https://www.gradescope.com/courses/1184869 "Entry Code YBV46G"){:target="_blank"}

**Database Naming Convention Style Guide**
This guide establishes the standards for naming database objects to ensure consistency, readability, and maintainability across the schema.

**1. Tables**
&nbsp; &nbsp; &nbsp; &nbsp; **Case Style: PascalCase** (UpperCamelCase).  
&nbsp; &nbsp; &nbsp; &nbsp; **Plurality:** Tables should always be **Singular** (e.g., `User` not `Users`), as they represent a single entity definition.  
&nbsp; &nbsp; &nbsp; &nbsp; **Rule:** Capitalize the first letter of each word. Do not use underscores.

Bad | Good 
 --- | --- 
`user_profiles` | `UserProfile` 
`INVOICE_ITEMS` | `InvoiceItem`
`auditlogs` | `AuditLog` 

**2. Columns (Fields)**
&nbsp; &nbsp; &nbsp; &nbsp; **Case Style:** **snake_case** (all lowercase with underscores).  
&nbsp; &nbsp; &nbsp; &nbsp; **Prefix Rule:** Every standard field must be prefixed with the **snake_case version** of the table name.  
&nbsp; &nbsp; &nbsp; &nbsp; **Separator:** Use an underscore `_` to separate the prefix from the field descriptor.
  
**Standard Columns**
&nbsp; &nbsp; &nbsp; &nbsp; **Format:** `[table_name]_[field_name]`
**Example: Table** `User`

Field Concept | Bad | Good 
 --- | --- | --- 
First Name | `first_name` | `user_first_name`
Email Address | `email` | `user_email`
Is Active | `isActive` | `user_is_active`

**Primary Keys**
**Format:** `[table_name]_id`
&nbsp;&nbsp;&nbsp;&nbsp; The Primary Key (PK) follows the standard column naming rule.
**Example: Table** `Customer`
&nbsp; &nbsp; &nbsp; &nbsp; **PK:** `customer_id`
  
**3. Foreign Keys**
&nbsp; &nbsp; &nbsp; &nbsp; **Rule:** Foreign Keys (FK) are the **exception** to the prefix rule.  
&nbsp; &nbsp; &nbsp; &nbsp; **Convention:** An FK column must have the **exact same name** as the Primary Key it refers to.  
&nbsp; &nbsp; &nbsp; &nbsp; **Purpose:** This makes joins intuitive (`ON TableA.key = TableB.key`).

**Example Relationship:**
A `Customer` places an `Order`.
**Parent Table:** `Customer`
&nbsp; &nbsp; &nbsp; &nbsp; PK: `customer_id`
**Child Table:** `Order`
&nbsp; &nbsp; &nbsp; &nbsp; FK: `customer_id` (Does **not** become `order_customer_id`)

**4. Schema Example**
Here is how these rules look in practice with a relational schema for an e-commerce context.
  
**Table:** `Customer`

Column Name        | Type    | Notes       
 --- | --- | --- 
`customer_id`        | `INT`     | ***Primary Key*** 
`customer_full_name` | `VARCHAR` | Prefixed    
`customer_email`     | `VARCHAR` | Prefixed    
  
**Table:** `Product`

column Name   | Type    | Notes       
 --- | --- | --- 
`product_id`    | `INT`     | ***Primary Key*** 
`product_sku`   | `VARCHAR` | Prefixed    
`product_price` | `DECIMAL` | Prefixed 
  
**Table:** `Order`

column Name          | Type     | Notes                                        
 --- | --- | --- 
`order_id`    | `INT` | ***Primary Key***&nbsp;&nbsp;&nbsp;&nbsp;                                
`customer_id`          | `INT` | ***Foreign Key*** (Refers to Customer.customer_id) 
`order_date`  | `DATETIME` | Prefixed                                     
`order_total` | `DECIMAL` | Prefixed 
  
**Table:** `OrderItem`

column Name         | Type | Notes                                                   
 --- | --- | --- 
`order_item_id`       | `INT` | ***Primary Key***&nbsp;&nbsp;&nbsp;&nbsp;                                           
`customer_order_id`   | `INT` | ***Foreign Key*** (Refers to CustomerOrder.customer_order_id) 
`product_id`          | `INT` | ***Foreign Key*** (Refers to Product.product_id)              
`order_item_quantity` | `INT` | Prefixed                                                

**5. SQL Implementation**
Here is a SQL snippet demonstrating these conventions:
```sql
CREATE TABLE Customer (
    customer_id INT PRIMARY KEY,
    customer_name VARCHAR(100),
    customer_joined_at DATE
);

CREATE TABLE OrderInvoice (
    order_invoice_id INT PRIMARY KEY,
    customer_id INT, -- Foreign Key matches Source PK Name exactly
    order_invoice_amount DECIMAL(10, 2),
    order_invoice_status VARCHAR(50),
    CONSTRAINT fk_customer 
      FOREIGN KEY (customer_id) 
      REFERENCES Customer(customer_id)
);
```
