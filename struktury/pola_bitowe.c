//Pola bitowe
struct {
       unsigned int is_keyword : 1;
       unsigned int is_extern : 1;
       unsigned int is_static : 1;
} flags;

//definuje zmienn¹ flags, zawieraj¹c¹ trzy jednobitowe pola
//odwo³ania jak do struktury
flags.is_keyword
flags.is_extern = flags.is_static = 1;
flags.is_extern = flags.is_static = 0;
//warunek
if (flags.is_extern == 0 && flags.is_static == 0) ... 
