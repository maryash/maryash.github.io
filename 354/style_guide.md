---
layout: myDefault
title: CSCI 395 MAIN PAGE
---

### **Database Naming Convention Style Guide**

This guide establishes the standards for naming database objects to ensure consistency, readability, and maintainability across the schema.

### **1\. Tables**

*   **Case Style:** **PascalCase** (UpperCamelCase).
    
*   **Plurality:** Tables should always be **Singular** (e.g., `User` not `Users`), as they represent a single entity definition.
    
*   **Rule:** Capitalize the first letter of each word. Do not use underscores.
    

Bad | Good 
 --- | --- 
user_profiles | UserProfile 
INVOICE_ITEMS | InvoiceItem
auditlogs | AuditLog 

### **2\. Columns (Fields)**

*   **Case Style:** **snake_case** (all lowercase with underscores).
    
*   **Prefix Rule:** Every standard field must be prefixed with the **snake_case version** of the table name.
    
*   **Separator:** Use an underscore `_` to separate the prefix from the field descriptor.
    

#### **Standard Columns**

*   **Format:** `[table_name]_[field_name]`
    

**Example: Table** `UserProfile`

Field Concept | Bad | Good 
 --- | --- | --- 
First Name | first_name | user_profile_first_name
Email Address | email | user_profile_email
Is Active | isActive | user_profile_is_active

#### **Primary Keys**

*   **Format:** `[table_name]_id`
    
*   The Primary Key (PK) follows the standard column naming rule.
    

**Example: Table** `Customer`

*   **PK:** customer_id
    

### **3\. Foreign Keys**

*   **Rule:** Foreign Keys (FK) are the **exception** to the prefix rule.
    
*   **Convention:** An FK column must have the **exact same name** as the Primary Key it refers to.
    
*   **Purpose:** This makes joins intuitive (ON TableA.key = TableB.key).
    

**Example Relationship:**

A Customer places an Order.

1.  **Parent Table:** Customer
    
    *   PK: customer_id
        
2.  **Child Table:** Order
    
    *   FK: customer_id (Does **not** become order_customer_id)
        

### **4\. Schema Example**

Here is how these rules look in practice with a relational schema for an e-commerce context.

#### **Table:** `Customer`
Column Name        | Type    | Notes       
 --- | --- | --- 
customer_id        | INT     | **Primary Key** 
customer_full_name | VARCHAR | Prefixed    
customer_email     | VARCHAR | Prefixed    

#### **Table:** `Product`
column Name   | Type    | Notes       
 --- | --- | --- 
product_id    | INT     | **Primary Key** 
product_sku   | VARCHAR | Prefixed    
product_price | DECIMAL | Prefixed 

#### **Table:** `CustomerOrder`
column Name          | Type     | Notes                                        
 --- | --- | --- 
customer_order_id    | INT | **Primary Key**                                  
customer_id          | INT | **Foreign Key** (Refers to Customer.customer_id) 
customer_order_date  | DATETIME | Prefixed                                     
customer_order_total | DECIMAL | Prefixed 

#### **Table:** `OrderItem`
column Name         | Type | Notes                                                   
 --- | --- | --- 
order_item_id       | INT | **Primary Key**                                             
customer_order_id   | INT | **Foreign Key** (Refers to CustomerOrder.customer_order_id) 
product_id          | INT | **Foreign Key** (Refers to Product.product_id)              
order_item_quantity | INT | Prefixed                                                

### **5\. SQL Implementation**
Here is a SQL snippet demonstrating these conventions:
``` SQL
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
