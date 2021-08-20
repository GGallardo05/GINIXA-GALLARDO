#include <stdio.h>
#include <string.h>

//determinar el horóscopo, y predecir el futuro de un usuario basado en la fecha de nacimiento, nombre y sexo. 
//Esta aplicación deberá determinar tu signo zodiacal, y predecir cómo será el futuro, cómo estará de salud, qué pasará con las relaciones, 
//cuáles son tu número y color de la suerte. Estas predicciones y cálculos se basarán en la configuración astrológica que ocurrió al
// momento de la fecha de nacimiento provista por el usuario.
int main()
{
    int dia, mes, nom, sex;
    char categoria[7];
    
    printf("introduzca su nombre: ");
    scanf("%s", &nom);
    printf("\n introduzca su sexo: ");
    scanf("%s", &sex);
    printf("\n introduzca su fecha de nacimiento: " );
    scanf("%d", &dia);
    scanf("%d", &mes);
    
    if((dia>=22&&mes==12)||(dia<=20&&mes==1)){
        printf ("Capricornio\n");
        printf("\n Color de la suerte: Negro.");
        printf("\n Numero de la suerte: 25, 37, 28, 46, 43, 10");
        printf("\n Relaciones: Los Capricornio son frios, metodicos y competitivos. Les cuesta bastante exteriorizar sus sentimientos y cuando lo hacen es casi siempre en un sentido mas intelectual que emocional. Encuentran la estabilidad en personas tranquilas, pacientes y confiables, como aquellas nacidas bajo los signos de Piscis o Escorpio.  ");
        printf("\n Salud: El esqueleto en su conjunto es el principal punto debil de este signo, aunque hay zonas especialmente conflictivas, como las rodillas y los ligamentos de los tobillos. ");
}
    else if((dia>=21&&mes==1)||(dia<=19&&mes==2)){
        printf ("Acuario\n");
        printf("\n Color de la suerte: Negro.");
        printf("\n Numero de la suerte: 25, 37, 28, 46, 43, 10");
        printf("\n Relaciones: Abiertos, dispuestos a encontrar nuevas aventuras, risueños y comunicativos. Los Acuario suelen ser un iman para signos de fuego y aire, aunque estos ultimos encajan mas en sus relaciones de amistad que en aquellas sentimentales.");
        printf("\n Salud: El signo mas elegante del zodiaco tambien puede presumir de tobillos debiles y de viajar mas con su mente que con sus piernas lo que se traduce en varices y una mala circulacion en su tren inferior. ");
}
    else if((dia>=20&&mes==2)||(dia<=20&&mes==3)){
        printf ("Piscis\n");
        printf("\n Color de la suerte: Violeta.");
        printf("\n Numero de la suerte: 25, 37, 28, 46, 43, 10");
        printf("\n Relaciones: Los Piscis son fantasiosos e imaginativos. Les encanta imaginar nuevos universos y son muy artisticos. En el plano sentimental trataran de buscar a alguien romantico y dulce que sepa como mantener su mundo a flote, pero con dosis de realidad. Tauro y Capricornio son perfectos para ello.");
        printf("\n Salud: El signo con el peor sistema inmunitario de todo el zodiaco. Es dificil que un Piscis se libre de padecer mil achaques que no son graves, pero si molestos.");
}
      else if((dia>=21&&mes==3)||(dia<=20&&mes==4)){
        printf ("Aries\n");
        printf("\n Color de la suerte: Rojo.");
        printf("\n Numero de la suerte: 22, 7, 16, 18, 45, 15.");
        printf("\n Relaciones: Las personas nacidas en Aries son lideres con un fuerte caracter y personalidad. Es dificil encontrar personas que sean capaces de seguir su ritmo y se adapten a sus constantes necesidades y cambios. En el amor, Geminis y Acuario, signos de aire, suelen ser los que mejor consiguen avivar el fuego de Aries, aunque tambien son bastante compatibles con Sagitario y Leo, por compartir elemento. Con Escorpio y Libra, asi como con Virgo podra llevarse muy bien y aunque entre ellos exista quimica lo mas seguro es que pronto acabe en amistad.");
        printf("\n Salud:  Los puntos debiles de la salud se le suben a la cabeza, concretamente son propensos a sufrir problemas que afectan o se generan en esta zona de su anatomia, desde migrañas a ansiedad o depresion. Y es que por lo visto tanta pasion y emocion le ponen a la vida los nacidos en este signo que el estres acaba pasando factura en forma de dolores de cabeza y, lo sentimos, caida del pelo.");
}
     else if((dia>=21&&mes==4)||(dia<=21&&mes==5)){
        printf ("Tauro\n");
        printf("\n Color de la suerte: Verde.");
        printf("\n Numero de la suerte: 49, 36, 45, 31, 5, 10");
        printf("\n Relaciones: La pasion y sensualidad de Tauro se traducira en relaciones muy intensas si a su lado tiene a un Capricornio o a un Virgo, que como ellos, son signos de Tierra. No obstante, a los Tauro les encanta la calma y sentirse en paz con las personas que se rodea; la fidelidad es otro de los aspectos mas importantes que buscan en una relacion. En este sentido, los signos que mejor pueden encajar con ellos son Piscis y Cancer.");
        printf("\n Salud: Visitan al medico a menudo por dos problemas que se repiten una y otra vez: los dolores de garganta y las otitis. La garganta de un Tauro es su mayor debilidad y su mayor fortaleza porque aunque se lo haga pasar mal de vez en cuando tambien les puede proporcionar grandes alegrias: la combinacion de buena garganta y buen oido convierte a este signo en cuna de grandes musicos y cantantes. Eso si, tienen que recordar que su garganta no es solo el refugio de sus cuerdas vocales: hay que vigilar esa tiroides para que tampoco de problemas. ");
}
    else if((dia>=22&&mes==5)||(dia<=21&&mes==6)){
        printf ("\n Geminis");
        printf("\n Color de la suerte: Violeta.");
        printf("\n Numero de la suerte: 49, 36, 45, 31, 5, 10");
        printf("\n Relaciones: La dualidad de los gemelos otorgara mucha diversion a Geminis en el terreno sentimental, siempre y cuando sepa encontrar a alguien capaz de seguirle el ritmo y adaptarse a su juego. La explosion y el deseo estallara con signos como Aries o Leo, aunque juntos tambien protagonizaran fuertes discusiones y necesitaran aprender a encontrar el equilibrio. Con Acuario y con libra podra establecer estables relaciones, aunque casi siempre de amistad.");
        printf("\n Salud:  Es casi cualquier cosa que pueda suponer un ataque a los pulmones. Desgraciadamente las malas noticias no acaban ahi y si el equilibrio entre el gemelo positivo y el negativo no está bien balanceado y el malo toma el poder, las contracturas, la ansiedad y el insomnio pueden arruinar el bienestar de los nacidos bajo este signo.  ");
}
     else if((dia>=21&&mes==6)||(dia<=23&&mes==7)){
        printf ("Cancer\n");
        printf("\n Color de la suerte: Blanco.");
        printf("\n Numero de la suerte: 14, 32, 47, 12, 43, 4");
        printf("\n Relaciones: Emocionales, cariñosos, familiares, la forma de ser de Cancer encaja bastante bien con Virgo y Tauro, aunque los 'cangrejos' suelen congeniar tambien con Capricornios y con Escorpio o Piscis, con quienes podria llegar a tener exitosas relaciones de pareja.");
        printf("\n Salud: Es un signo emocional,  son propensos a padecer obesidad y, rizando aun mas el rizo, a todo tipo de problemas digestivos que ademas se agravan cuando se come en exceso, cosa que este signo hace cuando esta triste, estresado, enfadado, decepcionado… ");
}
     else if((dia>=24&&mes==7)||(dia<=23&&mes==8)){
        printf ("Leo\n");
        printf("\n Color de la suerte: Amarillo.");
        printf("\n Numero de la suerte: 14, 32, 47, 12, 43, 4");
        printf("\n Relaciones: El fuerte caracter de Leo lo animara a entablar relaciones con signos que sean capaces de animar su dia a dia y sacarle de la rutina. Leales y nobles, buscan en sus parejas crear vinculos fuertes. Con Libra suele haber buen entendimiento, pues ambos son capaces de encontrar el equilibrio en la balanza. Sagitario, Aries y Geminis son tambien signos de alta compatibilidad.");
        printf("\n Salud: Es todo corazon para lo bueno y para lo malo. Pero ese corazon leonino hay que cuidarlo y no solo con buenos sentimientos sino tambien con decisiones saludables. La presion arterial de los Leo puede ser mas alta de lo recomendable y sus latidos irregulares. ");
}
     else if((dia>=24&&mes==8)||(dia<=23&&mes==9)){
        printf ("Virgo\n");
        printf("\n Color de la suerte: Azul.");
        printf("\n Numero de la suerte: 14, 32, 47, 12, 43, 4");
        printf("\n Relaciones: A Virgo le cuesta abrirse, por tanto necesita encontrar a personas en las que confiar y sentirse seguro. Escorpio y Cancer son los mejores signos en este sentido. Con Acuario y Geminis podria llegar a divertirse mucho, sin embargo, tambien tendran fuertes discusiones.");
        printf("\n Salud: El intestino de este signo es el mas vulnerable de todo el zodiaco y puede sufrir todo tipo de enfermedades digestivas. Nuestro consejo es que empiece a mimar desde hoy mismo la salud de su microbiota intestinal.");
}
        
     else if((dia>=24&&mes==9)||(dia<=23&&mes==10)){
        printf ("Libra\n");
        printf("\n Color de la suerte: Verde.");
        printf("\n Numero de la suerte: 14, 32, 47, 12, 43, 4");
        printf("\n Relaciones: Relacionarse con las personas es una de sus especialidades. Extrovertidos, comunicativos y sociables, trataran de buscar en sus parejas dinamismo y diversion. Les cuesta estar en una relacion seria y suelen rehuir del compromiso, pero cuando encuentran a ese alguien especial intentan mantenerlo a su lado. Sagitario y Leo son bastante compatibles con las personas Libra, lo mismo que los signos de Aire, como Geminis y Acuario.");
        printf("\n Salud: La piel de los Libra es hermosa… y muy complicada de mantener.  El acne y todo tipo de problemas dermatologicos pueden hacer presa en ella, hecho que ha convertido a los Libra en usuarios habituales de los servicios de dermatologia y la compra de cosmeticos. Por si fuera poco los nacidos en este signo tampoco escapan a los desordenes del intestino.");
}
     else if((dia>=24&&mes==10)||(dia<=22&&mes==11)){
        printf ("Escorpio\n");
        printf("\n Color de la suerte: Rojo.");
        printf("\n Numero de la suerte: 4, 54, 18, 23, 31, 11");
        printf("\n Relaciones: Temperamentales y pasionales, los Escorpio tienen personalidades absorbentes y son bastante carismaticos. Cancer, Virgo, Libra, Capricornio y Piscis son los signos del zodiaco en los que encontrara mayor probabilidad de exito a la hora de encontrar pareja.");
        printf("\n Salud: Escorpio es victima de sus hormonas que le pueden llevar del celibato al frenesi y vuelta al celibato. Esta susceptibilidad a los vaivenes hormonales puede convertir el ciclo menstrual de las Escorpio en una pesadilla y en fuente de problemas en momentos clave de la vida ginecologica femenina: embarazo y menopausia sobre todo. ");     
}
    else{
        printf ("Sagitario\n");
        printf("\n Color de la suerte: Azul.");
        printf("\n Numero de la suerte:4, 54, 18, 23, 31, 11");
        printf("\n Relaciones: Aventureros, optimistas y con ganas de exprimir al maximo cada segundo de la vida. Los Sagitario encajan muy bien con Acuario y Libra. Tambien se llevara bien con Aries y Leo, aunque en menor medida. Con Geminis establecera relaciones explosivas, pero la volatilidad de ambos podria llegar a cansar a Sagitario.");
        printf("\n Salud: Su espiritu aventurero suele poner en riesgo caderas, piernas y nervios y, desgraciadamente, el conjunto se complica con unos ojos bastante debiles. Eso y conseguir el teléfono de un buen fisioterapeuta.");
}
  
    return 0;
}
    
