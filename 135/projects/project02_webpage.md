---  
layout: myDefault  
title: PROJECT 2  
---  

# Project 2. Protein Synthesis


![](https://www.acpsd.net/cms/lib/SC02209457/Centricity/Domain/5698/central%20dogma.png){: .centered }


## Introduction
The goal of this project is to write a program that mimics the process of protein synthesis in eukaryotic cells. The first half focuses on **transcription** and **translation**. The second half introduces the concept of **mutation** and **reverse engineering**.


## Background Information
All living organism store their genetic information in chains of nucleic acid. All eukaryotes (i. e. Organisms whose cells contain membrane-bound organelles, or “little organs”) use **d**eoxyribo**n**ucleic **a**cid, or **DNA**, as the “hard drive” where information is stored. DNA is composed of four distinct nucleobases: **a**denine, **t**hymine, **c**ytosine, and **g**uanine, which are abbreviated by their first letter  (**A**, **T**, **C**, **G**). A chain of nucleobases form a **DNA strand**. Although one strand is enough to store information, each eukaryotic cell contains two complementary copies that bind to each other to form a double helix. The rules of base pairing are as follows: A and T pair together, C and G pair together.

![](https://study.com/cimages/multimages/16/complementary-base-pairing.jpg){: .centered}

**Fun Fact:** *The human genome contains roughly 2.9 billion base pairs. If unwound in a straight line, this would amount to about 2 m in length. Thanks to ingenious folding techniques, our cells are able to store DNA in their nucleus, which is only 6 microns across (1 micron is a millionth of a meter). As if this weren’t impressive enough, remember that each cell contains two strand of DNA!*


##Task A: Transcription
Each gene codes for a protein, and transcription is the first step of gene expression. Most protein synthesis occurs in organelles known as ribosomes, which are located outside of the nucleus where DNA is stored. To relay information to a ribosome, the cell makes a copy of the relevant gene from DNA and sends that copy out of the nucleus. The copy is called a **m**essenger **r**ibonucleic **a**cid, or **mRNA**. Like DNA, mRNA is made of nucleobases, except it does not contain **t**hymine **[T]**, but **u**racil **[U]** instead.

Your task is to write a program called `transcriptase.cpp` that reads a text file called `dna.txt` that contains one DNA strand per line, and outputs to the console (terminal) the corresponding mRNA strands. Each output line must contain exactly one mRNA strand.

Recall that to read from a file, the following code snipet can be used:
```
ifstream fin("dna.txt");
    if (fin.fail()) {
        cerr << "File cannot be read, opened, or does not exist.\n";
        exit(1);
    }
    string strand;
    while(getline(fin, strand)) {
        cout << strand << endl;
    }
	fin.clos();
```

The best way to do this is in two steps. First create a function that gives the complement of a base, and then write another function that uses it iteratively over a whole strand.
For example, we could have `char DNAbase_to_mRNAbase(char);` to return the complement of a base and `string DNA_to_mRNA(string);` that uses it for each base in the strand.


##Task B: Translation
![](https://upload.wikimedia.org/wikipedia/commons/thumb/0/0f/Peptide_syn.png/350px-Peptide_syn.png){: .centered}
While a nucleotide is the basic unit of information, three nucleotides, or codon, is the basic unit of storage. The reason for this is that each gene codes for a protein, and all proteins are made from 20 amino acids. Recall that there are 4 different bases that make up dna. Thus, three bases can encode for 4x4x4 = 64 different symbols. Two base pairs can only encode for 4x4 = 16 symbols, which is not enough.
![](http://session.masteringgenetics.com/problemAsset/1479555/6/MG_1479555_001.jpg){: .centered}
For this task, you will need the following dictionary file: codon.tsv. 
It contains 64 lines, each with two columns. In the first column are the codons, and in the second are the corresponding amino acid.
Your task is to write a program called `Translatase.cpp` that given strands of DNA, outputs to the console the corresponding amino-acid chain. Below is a sample run of the program:

##Task C: Mutation   hfh
Many factors, such as environmental condition, random chance, errors in handling, can result in a change, or mutation, in the DNA sequence. These changes can be benign to catastrophic depending on the type of mutation it is. There are four kinds of mutations.
**Substitution:** a base pair is replaced with another (e. g. aac -> agc).
**Insertion:** a new base pair is added somewhere in the DNA strand.
**Deletion:** a base pair is removed from the sequence.
**Frameshift:** any of the above mutation, or combination thereof, that causes codons to be parsed incorrectly.

##Task D: Reverse Engineering

