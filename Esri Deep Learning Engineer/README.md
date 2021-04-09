## Technical Phone Interview
----
     
1. What does the error graph indicate when training error is less then validation error?    
Ans.  
   - The model is over-fitting the training data.

2. How can you prevent over-fitting?   
Ans. 
   - By regularization we can prevent over-fitting.
   
3. What are dropouts?  
Ans.
   - Dropout are a type of regularization.
   - Dropouts help in preventing over-fitting.
   - Dropouts randomly skip the signal passing from the neurons.
   - Because of random skipping it helps in avoiding the weights to explode.
   
4. What is batch-normalization?  
Ans.
   - batch-normalization is a normalization of the batch data being processed.
   - If the data in it's raw format is normalized to get good results then same is the idea to normalize the data in the intermediary layers. 
   
5. Importance of residual networks?  
Ans.
   - Residual Networks avoid over-fitting.
   - Even with increasing the layers the Residual Networks avoid over-fitting.
   
6. What is one hot encoding?  
Ans.
	- Transforming the data from raw to a vector which has only one value "1" and all other values "0" is called one hot encoding.

	
7. Explain GAN?  
Ans.
    - GAN is a special neural networks.
	- It has two networks. One is the Generator network and other is the Discriminator network.
	- Generator tries to fool the Discriminator.
	- Discriminator tries to avoid fooling by Generator.
	- Both the network together achieve equilibrium where Discriminator network learns the distribution of the real data and produces data that is similar to that distribution. 
	
8. What all networks have you implemented?
