---
layout: myDefault
title: CSCI 395 MAIN PAGE
---

### **Database Naming Convention Style Guide**

This guide establishes the standards for naming database objects to ensure consistency, readability, and maintainability across the schema.

### **1\. Tables**

*   **Case Style:** **PascalCase** (UpperCamelCase).
    
*   **Plurality:** Tables should generally be **Singular** (e.g., User not Users), as they represent a single entity definition, though Plural is acceptable if consistently applied.
    
*   **Rule:** Capitalize the first letter of each word. Do not use underscores.
    

**BadGood**user\_profilesUserProfileINVOICE\_ITEMSInvoiceItemauditlogsAuditLog

### **2\. Columns (Fields)**

*   **Case Style:** **snake\_case** (all lowercase with underscores).
    
*   **Prefix Rule:** Every standard field must be prefixed with the **snake\_case version** of the table name.
    
*   **Separator:** Use an underscore \_ to separate the prefix from the field descriptor.
    

#### **Standard Columns**

*   **Format:** \[table\_name\]\_\[field\_name\]
    

**Example: Table UserProfile**

**Field ConceptBadGood**First Namefirst\_nameuser\_profile\_first\_nameEmail Addressemailuser\_profile\_emailIs ActiveisActiveuser\_profile\_is\_active

#### **Primary Keys**

*   **Format:** \[table\_name\]\_id
    
*   The Primary Key (PK) follows the standard column naming rule.
    

**Example: Table Customer**

*   **PK:** customer\_id
    

### **3\. Foreign Keys**

*   **Rule:** Foreign Keys (FK) are the **exception** to the prefix rule.
    
*   **Convention:** An FK column must have the **exact same name** as the Primary Key it refers to.
    
*   **Purpose:** This makes joins intuitive (ON TableA.key = TableB.key).
    

**Example Relationship:**

A Customer places an Order.

1.  **Parent Table:** Customer
    
    *   PK: customer\_id
        
2.  **Child Table:** Order
    
    *   FK: customer\_id (Does **not** become order\_customer\_id)
        

### **4\. Schema Example**

Here is how these rules look in practice with a relational schema for an e-commerce context.

#### **Table: Customer**

**Column NameTypeNotes**customer\_idINT**Primary Key**customer\_full\_nameVARCHARPrefixedcustomer\_emailVARCHARPrefixed

#### **Table: Product**

**Column NameTypeNotes**product\_idINT**Primary Key**product\_skuVARCHARPrefixedproduct\_priceDECIMALPrefixed

#### **Table: CustomerOrder**

**Column NameTypeNotes**customer\_order\_idINT**Primary Key**customer\_idINT**Foreign Key** (Refers to Customer.customer\_id)customer\_order\_dateDATETIMEPrefixedcustomer\_order\_totalDECIMALPrefixed

#### **Table: OrderItem**

**Column NameTypeNotes**order\_item\_idINT**Primary Key**customer\_order\_idINT**Foreign Key** (Refers to CustomerOrder.customer\_order\_id)product\_idINT**Foreign Key** (Refers to Product.product\_id)order\_item\_quantityINTPrefixed

### **5\. SQL Implementation**

Here is a SQL snippet demonstrating these conventions:

SQL

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   CREATE TABLE Customer (      customer_id INT PRIMARY KEY,      customer_name VARCHAR(100),      customer_joined_at DATE  );  CREATE TABLE OrderInvoice (      order_invoice_id INT PRIMARY KEY,      customer_id INT, -- Foreign Key matches Source PK Name exactly      order_invoice_amount DECIMAL(10, 2),      order_invoice_status VARCHAR(50),      CONSTRAINT fk_customer         FOREIGN KEY (customer_id)         REFERENCES Customer(customer_id)  );   `
