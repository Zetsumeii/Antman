# Antman

By Théophile Combes and Marius Marolleau.
For this project I code everything, Marius was working on the "navy" project.

# DESCRIPTION

This project is one of the hardest we had in first year, first semester.

For this project we have to code a file compression program, and a decompression one. The program needs to be able to compress image, text, and HTML page (big text).

I implemented the huffman algorithm in C, with linkedlist and minheap. I also discover binary manipulation in order to compress the file.

# USAGE

./antman/antman [filename] [filetype] > [filename_output]

There is 3 options for the file type, 1 for text, 2 for image, and 3 for HTML, but my program use the same algortihm regardless of the file type so you can put 1, 2 or 3 it's the same.

./giantman/giantman [filename] [filetype] > [filename_output]

For the file type it's the same thing above.
