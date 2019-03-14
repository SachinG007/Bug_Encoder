# Bug_Encoder

I solved the issue by dividing the number of similar elements with number of dissimilar elements. Hence if one of the sequence is very large, there is a high possibility of large number of matches with a smaller sequence, but at the same time non similar elements will also be large. Hence, solving our purpose. Also, this ensures that the metric remains between 0 and 1.
