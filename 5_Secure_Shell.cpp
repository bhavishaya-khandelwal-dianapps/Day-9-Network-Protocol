//todo -- Secure Shell(SSH) :-
//? The SECURE SHELL protocol allows users to securely access and manage remote computers over an unsecured network. 
//* SSH operates on a client-server model, where the client and server communicate through a secure channel to prevent unauthorized access and protect DATA INTEGRIY. 

//todo -- The SSH protocol has 3 different layers :
//? 1. Transport Layer :- Ensures secure communication between the server and the client by handling encryption, decryption, and data integrity checks. 
//* It also manages data compression and caching to improve performance and security. 


//? 2. Authentication Layer :- Authenticates the client to the server. It supports multiple authentication methods, including passwords, public keys, ans more sophisticated methods like certificates. 


//? 3. Connection Layer :- After successful authentication, this layer manages the communication channels. 
//* It handles multiple sessions within a single SSH connection and facilitates secure file transfers, remote command execution, and port forwarding. 



//todo -- What does SSH Do...?? 
//? SSH can use various authentication methods to verify client's identity and establish a secure connection with the server. These include public keys, passwords, host keys, and even security questions.
//* Once the connection is set up, SSH encrypts the data transmitted between the client and server. This process ensures the information remains confidential and hard to intercept. 




//todo -- How does SSH work....??
//? The process SSH used to establish a connection between a client and a server involves the following steps: 
//* 1. Establishing a connection 
//* 2. Exchanging of keys 
//* 3. Client Authentication 
//* 4. Data Transmission 




//todo -- How to use SSH......???
//? To connect to an SSH server, you must use an SSH client. Most Unix-based operating systems have an SSH client preinstalled and accessible via the terminal.
//* To connect to a remote host using the terminal, issue the ssh command followed by the username and the server address or hostname : 
//?         ssh [username]@[server_ip_or_hostname]



//todo -- Difference between Telnet and SSH 
//? 1. Encryption :- SSH used strong encryption algorithms to ensure all transmitted data remains confidential and protected from unauthorized access.
//* Telnet trasnmit data in plain text format making it vulnerable to network security threats.


//? 2. Authentication :- Telnet only supports basic password and username authentication, which does not provide sufficient protection. 
//* SSH supports several authentication methods, such as password, public key, and host authentication.


//? 3. File Transfer :- SSH allows users to transfer files using the SFTP and SCP protocols. These protocols are integrated with SSH to provide encrypted file transfer cababilities, which Telnet lacks. 




//todo -- Difference between SSH and SSL/TLS 
//? Secure Socket Layer(SSL) and SSH are cryptographic protocols, but they are not interchangeable and have different functions :- 
    //* 1. Use Cases :- SSH clients are used to manage servers, transfer files, and create secure communication tunnels. 
    //? SSL/TLS is primarily used to encrypt data transmitted over the internet, such as web transactions and emails, and to protect data in web browsers using HTTPS.


    //* 2. User groups :- IT professionals use SSH for secure remote access. 
    //? In contrast, SSL/TLS is used broadly in web applications, including ecommerce, online banking, and any scenario requiring encrypted data exchange between a web browser and server. 


//todo -- Difference between SSH and SFTP :- 
//? Secure File Transfer Protocol(SFTP) and SSH are related, but they serve distinct purposes :
    //* 1. Scope :- SSH is a broader protocol that establishes a secure channel to remote systems. 
    //? SFTP operates over SSH to facilitate secure file transfers. SSH can function independently of SFTP, but SFTP framework requires the SSH framework to operate. 


    //* 2. Application :- SSH is used for secure remote access, command execution, and tunneling. 
    //? SFTP specifically focuses on secure file transfers and provides features like file access, transfer, and management over a secure SSH connection.



//todo -- Features of SSH -> 
//? Encryption 
//? Authentication 
//? Data Integrity 
//? Tunneling 
//? Provides confidentiality 
//? Provides high security as it encrypts all messages of communication 
//? Allow remote login 




//todo -- Techniques used in SSH :- 
//? There are 3 major techniques used in SSH
//* 1. Symmetric Cryptography :- Same key is used for encryption and decrypting the msg, a unique single shared key is kept between the sender and receiver.
//? For Ex :- AES(Advance Encryption Standard) and DES(Data Encryption Standard)


//? 2. Asymmetric Cryptography :- In Asymmetric key cryptography the key used for encrypting is different from the key used for decrypting the message.
//* For ex:- RSA(Rivest, Shamir, Adleman) and Digital Signature ALgorithm 


//* 3. Hashing :- Hashing is a procedure used in cryptography which convert variable length string to a fixed length string, this fixed length value is called hash value which is generated by hash function. 