warning: in the working copy of 'src/main/java/br/com/petz/clientepet/ClientePetApplication.java', LF will be replaced by CRLF the next time Git touches it
[1mdiff --git a/src/main/java/br/com/petz/clientepet/ClientePetApplication.java b/src/main/java/br/com/petz/clientepet/ClientePetApplication.java[m
[1mindex 8d0f259..ce97689 100644[m
[1m--- a/src/main/java/br/com/petz/clientepet/ClientePetApplication.java[m
[1m+++ b/src/main/java/br/com/petz/clientepet/ClientePetApplication.java[m
[36m@@ -2,10 +2,20 @@[m [mpackage br.com.petz.clientepet;[m
 [m
 import org.springframework.boot.SpringApplication;[m
 import org.springframework.boot.autoconfigure.SpringBootApplication;[m
[32m+[m[32mimport org.springframework.web.bind.annotation.GetMapping;[m
[32m+[m[32mimport org.springframework.web.bind.annotation.RequestMapping;[m
[32m+[m[32mimport org.springframework.web.bind.annotation.RestController;[m
 [m
 @SpringBootApplication[m
[32m+[m[32m@RestController[m
[32m+[m[32m@RequestMapping("/")[m
 public class ClientePetApplication {[m
 [m
[32m+[m	[32m@GetMapping[m[41m	[m
[32m+[m	[32mpublic String getHomeTeste() {[m
[32m+[m		[32mreturn "Cliente Pet - API Home";[m
[32m+[m	[32m}[m
[32m+[m[41m	[m
 	public static void main(String[] args) {[m
 		SpringApplication.run(ClientePetApplication.class, args);[m
 	}[m
