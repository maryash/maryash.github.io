---
layout: myDefault 
title: CODING STYLE
---

<!-- saved from url=(0093)http://higheredbcs.wiley.com/legacy/college/horstmann/1119400422/codes/coding_guidelines.html -->
<style>  
table {
    border-collapse: collapse;
}
table, td, th {
    text-align: left;
    padding: 8px;
    padding-bottom: 6px;
    border: 1px solid #dee1e4;
}
tr:nth-child(even) {background-color: #fafafa;}
tr:nth-child(odd) {background-color: #ffffff;}
hr.style-six {
    border: 0;
    height: 0;
    border-top: 1px solid rgba(0, 0, 0, 0.1);
    border-bottom: 1px solid rgba(255, 255, 255, 0.3);
}
a:link {
    text-decoration: none;
}
a:visited {
    text-decoration: none;
    color: blue;
}
a:hover {
    text-decoration: none;
}
a:active {
    text-decoration: none;
}
</style>
--- 

[<span style="font-family:Arial; font-size:28.9px">CSCI 135 / 136 &nbsp; Analysis & Design I</span><br/>
<span style="line-height:0.1; font-family:Arial; font-size:24px">Hunter College &nbsp; City University of New York</span>](2018_fall.html)   
  
<h1>
  <font color="#003366" face="Times, TimesNewRoman, serif">C++ Language Coding Guidelines</font>
</h1>

<p><b>Note:</b> These coding guidelines are a part of the books <i>Big C++, Third Edition,</i> and <i>Brief C++, Third Edition,</i> by Cay S. Horstmann, copyright © 2018, by John Wiley &amp; Sons. All Rights
Reserved.</p>
<p>This style guide may be freely distributed to students in any class that
uses <i>Big C++</i> or <i>Brief C++</i> as a required text. The
style guide may be modified for such use, provided that the modifications are
clearly marked.</p>

<h2>
  <font color="#003366" face="Times, TimesNewRoman, serif">Introduction</font>
</h2>


<p>
   This coding style guide is a simplified version of one that has been used with good success both in industrial practice and for college courses. It lays down rules that you must follow for your programming assignments.
</p>


<p>
   A style guide is a set of mandatory requirements for layout and formatting. Uniform style makes it easier for you to read code from your instructor and classmates. You will really appreciate the consistency if you do a team project. It is also easier for your instructor and your grader to grasp the essence of your programs quickly.
</p>


<p>
   A style guide makes you a more productive programmer because it <i>reduces gratuitous choice</i>. If you don't have to make choices about trivial matters, you can spend your energy on the solution of real problems.
</p>


<p>
   In these guidelines a number of constructs are plainly outlawed. That doesn't mean that programmers using them are evil or incompetent. It does mean that the constructs are of marginal utility and can be expressed just as well or even better with other language constructs.
</p>


<p>
   If you have already programmed in C or C++, you may be initially uncomfortable about giving up some fond habits. However, it is a sign of professionalism to set aside personal preferences in minor matters and to compromise for the benefit of your group.
</p>


<p>
   These guidelines are necessarily somewhat long and dull. They also mention features that you may not yet have seen in the class. Here are the most important highlights:
</p>

<ol type="1">
  <li value="1"> Tabs are set every three spaces. 
  </li><li value="2"> Variable and function names are lowercase.
  </li><li value="3"> Constant names are uppercase. Class names start with an uppercase letter.
  </li><li value="4"> There are spaces after reserved words and between binary operators.
  </li><li value="5"> Braces must line up.
  </li><li value="6"> No magic numbers may be used.
  </li><li value="7"> Every function must have a comment.
  </li><li value="8"> At most 30 lines of code may be used per function.
  </li><li value="9"> No <tt>goto</tt>, <tt>continue</tt>, or <tt>break</tt> is allowed.
  </li><li value="10"> At most two global variables may be used per file.
</li></ol>

<p>
   <i>A note to the instructor:</i> Of course, many programmers and organizations have strong feelings about coding style. If this style guide is incompatible with your own preferences or with local custom, please feel free to modify it. 
</p>


<h2>
   <font color="#003366" face="Times, TimesNewRoman, serif">Source Files</font>
</h2>


<p>
   Each program is a collection of one or more files or modules. The executable program is obtained by compiling and linking these files. Organize the material in each file as follows:
</p>

<ul>
  <li> Header comments
  </li><li> <tt>#include</tt> statements
  </li><li> Constants
  </li><li> Classes
  </li><li> Functions
</li></ul>

<p>
   It is common to start each file with a comment block.  Here is a typical format:
</p>

<pre> /**
    @file invoice.cpp
    @author Jenny Koo
    @date 2022-01-24
    @version 3.14 
 */</pre>

<p>
   You may also want to include a copyright notice, such as
</p>

<pre> /* Copyright 2022 Jenny Koo */</pre>

<p>
   A valid copyright notice consists of 
</p>

<ul>
  <li> the copyright symbol © or the word "Copyright" or the abbreviation "Copr."
  </li><li> the year of first publication of the work
  </li><li> the name of the owner of the copyright
</li></ul>

<p>
   (Note: To save space, this header comment has been omitted from the programs in this book as well as the programs on disk so that the actual line numbers match those that are printed in the book.)
</p>


<p>
   Next, list all included header files.
</p>

<pre> #include &lt;iostream&gt; 
 #include "question.h"</pre>

<p>
   Do not embed absolute path names, such as
</p>

<pre> #include "c:\me\my_homework\widgets.h"  // Don't !!!</pre>

<p>
   After the header files, list constants that are needed throughout the program file.
</p>

<pre> const int GRID_SIZE = 20; 
 const double CLOCK_RADIUS = 5;</pre>

<p>
   Then supply the definitions of all classes.
</p>

<pre> class Product 
 { 
    . . .
 };</pre>

<p>
   Order the class definitions so that a class is defined before it is used in another class. 
</p>


<p>
   Finally, list all functions of the modules, including member functions of classes and nonmember functions. Order the nonmember functions so that a function is defined before it is called. As a consequence, the <tt>main</tt> function will be the last function in your file. 
</p>


<h2>
   <font color="#003366" face="Times, TimesNewRoman, serif">Functions</font>
</h2>


<p>
   Supply a comment of the following form for every function.
</p>

<pre> /**
    <i>Explanation.</i>    
    @param <i>parameter variable</i><sub>1</sub><i> explanation</i>    
    @param <i>parameter variable</i><sub>2</sub><i> explanation</i>    
    ...    
    @return <i>explanation</i> 
 */</pre>

<p>
   The introductory explanation is required for all functions except <tt>main</tt>. It should start with an uppercase letter and end with a period. Some documentation tools extract the first sentence of the explanation into a summary table. Thus, if you provide an explanation that consists of multiple sentences, formulate the explanation such that the first sentence is a concise explanation of the function's purpose. 
</p>


<p>
   Omit the <tt>@param</tt> comment if the function takes no parameters. Omit the <tt>@return</tt> comment for <tt>void</tt> functions.  Here is a typical example.
</p>

<pre> /**    
    Converts calendar date into Julian day. This algorithm is from Press     
    et al., <i>Numerical Recipes in C</i>, 2nd ed., Cambridge University Press, 1992.    
    @param year  the year of the date to be converted    
    @param month the month of the date to be converted    
    @param day the day of the date to be converted    
    @return the Julian day number that begins at noon of the given   
    calendar date 
 */
 
 long dat2jul(int year, int month, int day) 
 { 
    ... 
 }</pre>

<p>
   Parameter names must be explicit, especially if they are integers or Boolean.
</p>

<pre> Employee remove(int d, double s); // Huh?  
 Employee remove(int department, double severance_pay); // OK </pre>

<p>
   Of course, for very generic functions, short names may be very appropriate.
</p>


<p>
   Do not write <tt>void</tt> functions that return exactly one answer through a reference. Instead, make the result into a return value.
</p>

<pre> void find(vector&lt;Employee&gt; c, bool&amp; found); // Don't!
 bool find(vector&lt;Employee&gt; c); // OK </pre>

<p>
   Of course, if the function computes more than one value, some or all results can be returned through reference parameters.
</p>


<p>
   Functions must have at most 30 lines of code. (Comments, blank lines, and lines containing only braces are not included in this count.) Functions that consist of one long   <tt>if/else/else</tt> statement sequence may be longer, provided each branch is 10 lines or less. This rule forces you to break up complex computations into separate functions.
</p>


<h2>
   <font color="#003366" face="Times, TimesNewRoman, serif">Local Variables </font>
</h2>


<p>
   Do not define all local variables at the beginning of a block. Define each variable just before it is used for the first time.
</p>


<p>
   Every variable must be either explicitly initialized when defined or set in the immediately following statement (for example, through a <tt>&gt;&gt;</tt> instruction).
</p>

<pre> int pennies = 0;</pre>

<p>
   or
</p>

<pre> int pennies; 
 cin &gt;&gt; pennies;</pre>

<p>
   Move variables to the innermost block in which they are needed.
</p>

<pre> while (. . .) 
 { 
    double xnew = (xold + a / xold) / 2;    
    . . . 
 }</pre>

<p>
   Do not define two variables in one statement:
</p>

<pre> int dimes = 0, nickels = 0; // Don't</pre>

<p>
   When defining a pointer variable, place the <tt>*</tt> with the type, not the variable:
</p>

<pre> Link* p; // OK </pre>

<p>
   not
</p>

<pre> Link *p; // Don't </pre>
 
<p>
Use <tt>auto</tt> only with types that are complex and not very informative, such as iterators. For example, prefer</p>
<pre>unordered_map&lt;string, double&gt; scores = . . .;
auto pos = scores.find("Harry");</pre>

<p>
over</p>

<pre>unordered_map&lt;string, double&gt;::iterator pos = scores.find("Harry");</pre>


<h2>
   <font color="#003366" face="Times, TimesNewRoman, serif">Constants </font>
</h2>


<p>
   In C++, do not use <tt>#define</tt> to define constants:
</p>

<pre> #define CLOCK_RADIUS 5 // Don't </pre>

<p>
   Use <tt>const</tt> instead:
</p>

<pre> const double CLOCK_RADIUS = 5; // The radius of the clock face</pre>

<p>
   You may not use magic numbers in your code. (A magic number is an integer constant embedded in code without a constant definition.) Any number except 0, 1, or 2 is considered magic:
</p>

<pre> if (p.get_x() &lt; 10) // Don't </pre>

<p>
   Use a <tt>const</tt> variable instead:
</p>

<pre> const double WINDOW_XMAX = 10; 
 if (p.get_x() &lt; WINDOW_XMAX) // OK </pre>

<p>
   Even the most reasonable cosmic constant is going to change one day. You think there are 365 days per year? Your customers on Mars are going to be pretty unhappy about your silly prejudice. 
</p>
 <p>
 Make a constant
</p>

<pre> const int DAYS_PER_YEAR = 365;</pre>

<p>
   so that you can easily produce a Martian version without trying to find all the 365's, 364's, 366's, 367's, and so on in your code.
</p>


<h2>
   <font color="#003366" face="Times, TimesNewRoman, serif">Classes </font>
</h2>


<p>
   Lay out the items of a class as follows:
</p>

<pre> class <i>ClassName</i> 
 { 
 public: 
    <i>constructors</i> 
    <i>mutators</i>   
    <i>accessors</i> 
 private: 
    <i>data</i> 
 };</pre>

<p>
   All data fields of classes must be private. 
</p>


<h2>
   <font color="#003366" face="Times, TimesNewRoman, serif">Control Flow </font>
</h2>


<h3>
   <font color="#003366" face="Times, TimesNewRoman, serif">The <tt>for</tt> Statement </font>
</h3>


<p>
   Use <tt>for</tt> loops only when a variable runs from somewhere to somewhere else with some constant increment/decrement.
</p>

<pre> for (int i = 0; i &lt; a.size(); i++) 
 { 
    cout &lt;&lt; a[i] &lt;&lt; endl; 
 }</pre>

<p>
   Do not use the <tt>for</tt> loop for weird constructs such as
</p>

<pre> for (xnew = a / 2; count &lt; ITERATIONS; cout &lt;&lt; xnew) // Don't
 { 
    xold = xnew;    
    xnew = xold + a / xold;    
    count++; 
 }</pre>

<p>
   Make such a loop into a <tt>while</tt> loop, so the sequence of instructions is much clearer.
</p>

<pre> xnew = a / 2; 
 while (count &lt; ITERATIONS) // OK
 { 
    xold = xnew;    
    xnew = xold + a / xold;    
    count++;    
    cout &lt;&lt; xnew; 
 }</pre>
 
<p>
Consider using the range-based <tt>for</tt> loop when traversing a container such as a <tt>vector</tt> or <tt>list</tt>:</p>

<pre>vector&lt;int&gt; values = . . .;
for (int v : values)
{
   cout &lt;&lt; v &lt;&lt; " ";
}</pre>



<h3>
   <font color="#003366" face="Times, TimesNewRoman, serif">Nonlinear Control Flow </font>
</h3>


<p>
   Don't use the <tt>switch</tt> statement. Use <tt>if/else</tt> instead.
</p>


<p>
   Do not use the <tt>break</tt>, <tt>continue</tt>, or <tt>goto</tt> statement. Use a <tt>bool</tt> variable to control the execution flow.
</p>


<h2>
   <font color="#003366" face="Times, TimesNewRoman, serif">Lexical Issues </font>
</h2>


<h3>
  <font color="#003366" face="Times, TimesNewRoman, serif">Naming Conventions </font>
</h3>


<p>
   The following rules specify when to use upper- and lowercase letters in identifier names.
</p>

<ol type="1">
  <li value="1"> All variable and function names and all data fields of classes are in lowercase, sometimes with an underscore in the middle. For example, <tt>first_player</tt>.
  </li><li value="2"> All constants are in uppercase, with an occasional underscore. For example,  <tt>CLOCK_RADIUS</tt>. 
  </li><li value="3"> All class names start with uppercase and are followed by lowercase letters, with an occasional uppercase letter in the middle. For example, <tt>BankTeller</tt>. 
</li></ol>

<p>
   Names must be reasonably long and descriptive. Use <tt>first_player</tt> instead of <tt>fp</tt>. No drppng f vwls. Local variables that are fairly routine can be short (<tt>ch</tt>, <tt>i</tt>) as long as they are really just boring holders for an input character, a loop counter, and so on. Also, do not use <tt>ctr</tt>, <tt>c</tt>, <tt>cntr</tt>, <tt>cnt</tt>, <tt>c2</tt> for five counter variables in your function. Surely each of these variables has a specific purpose and can be named to remind the reader of it (for example, <tt>ccurrent, cnext, cprevious, cnew, cresult</tt>).
</p>


<h3>
   <font color="#003366" face="Times, TimesNewRoman, serif">Indentation and White Space </font>
</h3>


<p>
   Use tab stops every three columns. Save your file so that it contains no tabs at all. That means you will need to change the tab stop setting in your editor! In the editor, make sure to select "3 spaces per tab stop" and "save all tabs as spaces". Every programming editor has these settings. If yours doesn't, don't use tabs at all but type the correct number of spaces to achieve indentation. 
</p>


<p>
   Use blank lines freely to separate logically distinct parts of a function.
</p>


<p>
   Use a blank space around every binary operator:
</p>

<pre> x1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a); // Good 
 x1=(-b-sqrt(b*b-4*a*c))/(2*a); // Bad</pre>

<p>
   Leave a blank space after (and not before) each comma, semicolon, and reserved word, but not after a function name.
</p>

<pre> if (x == 0) ...  
 f(a, b[i]);</pre>

<p>
   Every line must fit on 80 columns. If you must break a statement, add an indentation level for the continuation:
</p>

<pre> a[n] = ................................................... 
    + .................;</pre>


<h3>
   <font color="#003366" face="Times, TimesNewRoman, serif">Braces </font>
</h3>


<p>
   Opening and closing braces must line up, either horizontally or vertically.
</p>

<pre> while (i &lt; n) { cout &lt;&lt; a[i] &lt;&lt; endl; i++; } // OK </pre>

<pre> while (i &lt; n) 
 { 
    cout &lt;&lt; a[i] &lt;&lt; endl;     
    i++; 
 } // OK </pre>

<p>
   Some programmers don't line up vertical braces but place the <tt>{</tt> <i>behind</i> the <tt>while</tt>:
</p>

<pre> while (i &lt; n) { // Don't  
    cout &lt;&lt; a[i] &lt;&lt; endl;    
    i++; 
 }</pre>

<p>
  This style saves a line, but it is difficult to match the braces.
</p>
<p>
  Always use braces with <tt>if</tt>, <tt>while</tt>, <tt>do</tt>, and <tt>for</tt> statements, even if the body is only a single statement.
</p>
<pre> if (floor &gt; 13)
 {
    floor--;
 }
 if (floor &gt; 13)
    floor--;   // Don't
    </pre>

<h3>
   <font color="#003366" face="Times, TimesNewRoman, serif">Unstable Layout </font>
</h3>


<p>
   Some programmers take great pride in lining up certain columns in their code:
</p>

<pre> class Employee 
 { 
    . . . 
 private: 
   string  name;      
      int  age;   
   double  hourly_wage;     
 };</pre>

<p>
   This is undeniably neat, and we recommend it if your editor does it for you, but <i>don't</i> do it manually. The layout is not <i>stable</i> under change. A data type that is longer than the preallotted number of columns requires that you move <i>all</i> entries around.
</p>


<p>
   Some programmers like to format multiline comments so that every line starts with <tt>**</tt>:
</p>

<pre> /* This is a comment 
 ** that extends over 
 ** three source lines 
 */</pre>

<p>
   Again, this is neat if your editor has a command to add and remove the asterisks, and if you know that all programmers who will maintain your code also have such an editor. Otherwise, it can be a powerful method of <i>discouraging</i> programmers from editing the comment. If you have to choose between pretty comments and comments that reflect the current facts of the program, facts win over beauty.
</p>



<img title="Click me to read" src="chrome-extension://hdeikpphnbclpacdjdjjkpmbcacopnog/images/icon48.png" style="height: 30px; width: 30px; background-color: rgb(255, 255, 0); display: block; position: fixed; z-index: 999999; visibility: hidden;">
