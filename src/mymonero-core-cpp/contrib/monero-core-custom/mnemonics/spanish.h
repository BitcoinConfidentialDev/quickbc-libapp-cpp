// Word list originally created by dabura667 and released under The MIT License (MIT)
//
// The MIT License (MIT)
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
// Code surrounding the word list is Copyright (c) 2014-2018, The Monero Project
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/*!
 * \file spanish.h
 * 
 * \brief Spanish word list and map.
 */

#ifndef SPANISH_H
#define SPANISH_H

#include <vector>
#include <unordered_map>
#include "language_base.h"
#include <string>

/*!
 * \namespace Language
 * \brief Mnemonic language related namespace.
 */
namespace Language
{
  class Spanish: public Base
  {
  public:
    Spanish(): Base("Español", "Spanish", {}, 4)
    {
      static constexpr const char * const words[NWORDS] =
      {
        "ábaco",
        "abdomen",
        "abeja",
        "abierto",
        "abogado",
        "abono",
        "aborto",
        "abrazo",
        "abrir",
        "abuelo",
        "abuso",
        "acabar",
        "academia",
        "acceso",
        "acción",
        "aceite",
        "acelga",
        "acento",
        "aceptar",
        "ácido",
        "aclarar",
        "acné",
        "acoger",
        "acoso",
        "activo",
        "acto",
        "actriz",
        "actuar",
        "acudir",
        "acuerdo",
        "acusar",
        "adicto",
        "admitir",
        "adoptar",
        "adorno",
        "aduana",
        "adulto",
        "aéreo",
        "afectar",
        "afición",
        "afinar",
        "afirmar",
        "ágil",
        "agitar",
        "agonía",
        "agosto",
        "agotar",
        "agregar",
        "agrio",
        "agua",
        "agudo",
        "águila",
        "aguja",
        "ahogo",
        "ahorro",
        "aire",
        "aislar",
        "ajedrez",
        "ajeno",
        "ajuste",
        "alacrán",
        "alambre",
        "alarma",
        "alba",
        "álbum",
        "alcalde",
        "aldea",
        "alegre",
        "alejar",
        "alerta",
        "aleta",
        "alfiler",
        "alga",
        "algodón",
        "aliado",
        "aliento",
        "alivio",
        "alma",
        "almeja",
        "almíbar",
        "altar",
        "alteza",
        "altivo",
        "alto",
        "altura",
        "alumno",
        "alzar",
        "amable",
        "amante",
        "amapola",
        "amargo",
        "amasar",
        "ámbar",
        "ámbito",
        "ameno",
        "amigo",
        "amistad",
        "amor",
        "amparo",
        "amplio",
        "ancho",
        "anciano",
        "ancla",
        "andar",
        "andén",
        "anemia",
        "ángulo",
        "anillo",
        "ánimo",
        "anís",
        "anotar",
        "antena",
        "antiguo",
        "antojo",
        "anual",
        "anular",
        "anuncio",
        "añadir",
        "añejo",
        "año",
        "apagar",
        "aparato",
        "apetito",
        "apio",
        "aplicar",
        "apodo",
        "aporte",
        "apoyo",
        "aprender",
        "aprobar",
        "apuesta",
        "apuro",
        "arado",
        "araña",
        "arar",
        "árbitro",
        "árbol",
        "arbusto",
        "archivo",
        "arco",
        "arder",
        "ardilla",
        "arduo",
        "área",
        "árido",
        "aries",
        "armonía",
        "arnés",
        "aroma",
        "arpa",
        "arpón",
        "arreglo",
        "arroz",
        "arruga",
        "arte",
        "artista",
        "asa",
        "asado",
        "asalto",
        "ascenso",
        "asegurar",
        "aseo",
        "asesor",
        "asiento",
        "asilo",
        "asistir",
        "asno",
        "asombro",
        "áspero",
        "astilla",
        "astro",
        "astuto",
        "asumir",
        "asunto",
        "atajo",
        "ataque",
        "atar",
        "atento",
        "ateo",
        "ático",
        "atleta",
        "átomo",
        "atraer",
        "atroz",
        "atún",
        "audaz",
        "audio",
        "auge",
        "aula",
        "aumento",
        "ausente",
        "autor",
        "aval",
        "avance",
        "avaro",
        "ave",
        "avellana",
        "avena",
        "avestruz",
        "avión",
        "aviso",
        "ayer",
        "ayuda",
        "ayuno",
        "azafrán",
        "azar",
        "azote",
        "azúcar",
        "azufre",
        "azul",
        "baba",
        "babor",
        "bache",
        "bahía",
        "baile",
        "bajar",
        "balanza",
        "balcón",
        "balde",
        "bambú",
        "banco",
        "banda",
        "baño",
        "barba",
        "barco",
        "barniz",
        "barro",
        "báscula",
        "bastón",
        "basura",
        "batalla",
        "batería",
        "batir",
        "batuta",
        "baúl",
        "bazar",
        "bebé",
        "bebida",
        "bello",
        "besar",
        "beso",
        "bestia",
        "bicho",
        "bien",
        "bingo",
        "blanco",
        "bloque",
        "blusa",
        "boa",
        "bobina",
        "bobo",
        "boca",
        "bocina",
        "boda",
        "bodega",
        "boina",
        "bola",
        "bolero",
        "bolsa",
        "bomba",
        "bondad",
        "bonito",
        "bono",
        "bonsái",
        "borde",
        "borrar",
        "bosque",
        "bote",
        "botín",
        "bóveda",
        "bozal",
        "bravo",
        "brazo",
        "brecha",
        "breve",
        "brillo",
        "brinco",
        "brisa",
        "broca",
        "broma",
        "bronce",
        "brote",
        "bruja",
        "brusco",
        "bruto",
        "buceo",
        "bucle",
        "bueno",
        "buey",
        "bufanda",
        "bufón",
        "búho",
        "buitre",
        "bulto",
        "burbuja",
        "burla",
        "burro",
        "buscar",
        "butaca",
        "buzón",
        "caballo",
        "cabeza",
        "cabina",
        "cabra",
        "cacao",
        "cadáver",
        "cadena",
        "caer",
        "café",
        "caída",
        "caimán",
        "caja",
        "cajón",
        "cal",
        "calamar",
        "calcio",
        "caldo",
        "calidad",
        "calle",
        "calma",
        "calor",
        "calvo",
        "cama",
        "cambio",
        "camello",
        "camino",
        "campo",
        "cáncer",
        "candil",
        "canela",
        "canguro",
        "canica",
        "canto",
        "caña",
        "cañón",
        "caoba",
        "caos",
        "capaz",
        "capitán",
        "capote",
        "captar",
        "capucha",
        "cara",
        "carbón",
        "cárcel",
        "careta",
        "carga",
        "cariño",
        "carne",
        "carpeta",
        "carro",
        "carta",
        "casa",
        "casco",
        "casero",
        "caspa",
        "castor",
        "catorce",
        "catre",
        "caudal",
        "causa",
        "cazo",
        "cebolla",
        "ceder",
        "cedro",
        "celda",
        "célebre",
        "celoso",
        "célula",
        "cemento",
        "ceniza",
        "centro",
        "cerca",
        "cerdo",
        "cereza",
        "cero",
        "cerrar",
        "certeza",
        "césped",
        "cetro",
        "chacal",
        "chaleco",
        "champú",
        "chancla",
        "chapa",
        "charla",
        "chico",
        "chiste",
        "chivo",
        "choque",
        "choza",
        "chuleta",
        "chupar",
        "ciclón",
        "ciego",
        "cielo",
        "cien",
        "cierto",
        "cifra",
        "cigarro",
        "cima",
        "cinco",
        "cine",
        "cinta",
        "ciprés",
        "circo",
        "ciruela",
        "cisne",
        "cita",
        "ciudad",
        "clamor",
        "clan",
        "claro",
        "clase",
        "clave",
        "cliente",
        "clima",
        "clínica",
        "cobre",
        "cocción",
        "cochino",
        "cocina",
        "coco",
        "código",
        "codo",
        "cofre",
        "coger",
        "cohete",
        "cojín",
        "cojo",
        "cola",
        "colcha",
        "colegio",
        "colgar",
        "colina",
        "collar",
        "colmo",
        "columna",
        "combate",
        "comer",
        "comida",
        "cómodo",
        "compra",
        "conde",
        "conejo",
        "conga",
        "conocer",
        "consejo",
        "contar",
        "copa",
        "copia",
        "corazón",
        "corbata",
        "corcho",
        "cordón",
        "corona",
        "correr",
        "coser",
        "cosmos",
        "costa",
        "cráneo",
        "cráter",
        "crear",
        "crecer",
        "creído",
        "crema",
        "cría",
        "crimen",
        "cripta",
        "crisis",
        "cromo",
        "crónica",
        "croqueta",
        "crudo",
        "cruz",
        "cuadro",
        "cuarto",
        "cuatro",
        "cubo",
        "cubrir",
        "cuchara",
        "cuello",
        "cuento",
        "cuerda",
        "cuesta",
        "cueva",
        "cuidar",
        "culebra",
        "culpa",
        "culto",
        "cumbre",
        "cumplir",
        "cuna",
        "cuneta",
        "cuota",
        "cupón",
        "cúpula",
        "curar",
        "curioso",
        "curso",
        "curva",
        "cutis",
        "dama",
        "danza",
        "dar",
        "dardo",
        "dátil",
        "deber",
        "débil",
        "década",
        "decir",
        "dedo",
        "defensa",
        "definir",
        "dejar",
        "delfín",
        "delgado",
        "delito",
        "demora",
        "denso",
        "dental",
        "deporte",
        "derecho",
        "derrota",
        "desayuno",
        "deseo",
        "desfile",
        "desnudo",
        "destino",
        "desvío",
        "detalle",
        "detener",
        "deuda",
        "día",
        "diablo",
        "diadema",
        "diamante",
        "diana",
        "diario",
        "dibujo",
        "dictar",
        "diente",
        "dieta",
        "diez",
        "difícil",
        "digno",
        "dilema",
        "diluir",
        "dinero",
        "directo",
        "dirigir",
        "disco",
        "diseño",
        "disfraz",
        "diva",
        "divino",
        "doble",
        "doce",
        "dolor",
        "domingo",
        "don",
        "donar",
        "dorado",
        "dormir",
        "dorso",
        "dos",
        "dosis",
        "dragón",
        "droga",
        "ducha",
        "duda",
        "duelo",
        "dueño",
        "dulce",
        "dúo",
        "duque",
        "durar",
        "dureza",
        "duro",
        "ébano",
        "ebrio",
        "echar",
        "eco",
        "ecuador",
        "edad",
        "edición",
        "edificio",
        "editor",
        "educar",
        "efecto",
        "eficaz",
        "eje",
        "ejemplo",
        "elefante",
        "elegir",
        "elemento",
        "elevar",
        "elipse",
        "élite",
        "elixir",
        "elogio",
        "eludir",
        "embudo",
        "emitir",
        "emoción",
        "empate",
        "empeño",
        "empleo",
        "empresa",
        "enano",
        "encargo",
        "enchufe",
        "encía",
        "enemigo",
        "enero",
        "enfado",
        "enfermo",
        "engaño",
        "enigma",
        "enlace",
        "enorme",
        "enredo",
        "ensayo",
        "enseñar",
        "entero",
        "entrar",
        "envase",
        "envío",
        "época",
        "equipo",
        "erizo",
        "escala",
        "escena",
        "escolar",
        "escribir",
        "escudo",
        "esencia",
        "esfera",
        "esfuerzo",
        "espada",
        "espejo",
        "espía",
        "esposa",
        "espuma",
        "esquí",
        "estar",
        "este",
        "estilo",
        "estufa",
        "etapa",
        "eterno",
        "ética",
        "etnia",
        "evadir",
        "evaluar",
        "evento",
        "evitar",
        "exacto",
        "examen",
        "exceso",
        "excusa",
        "exento",
        "exigir",
        "exilio",
        "existir",
        "éxito",
        "experto",
        "explicar",
        "exponer",
        "extremo",
        "fábrica",
        "fábula",
        "fachada",
        "fácil",
        "factor",
        "faena",
        "faja",
        "falda",
        "fallo",
        "falso",
        "faltar",
        "fama",
        "familia",
        "famoso",
        "faraón",
        "farmacia",
        "farol",
        "farsa",
        "fase",
        "fatiga",
        "fauna",
        "favor",
        "fax",
        "febrero",
        "fecha",
        "feliz",
        "feo",
        "feria",
        "feroz",
        "fértil",
        "fervor",
        "festín",
        "fiable",
        "fianza",
        "fiar",
        "fibra",
        "ficción",
        "ficha",
        "fideo",
        "fiebre",
        "fiel",
        "fiera",
        "fiesta",
        "figura",
        "fijar",
        "fijo",
        "fila",
        "filete",
        "filial",
        "filtro",
        "fin",
        "finca",
        "fingir",
        "finito",
        "firma",
        "flaco",
        "flauta",
        "flecha",
        "flor",
        "flota",
        "fluir",
        "flujo",
        "flúor",
        "fobia",
        "foca",
        "fogata",
        "fogón",
        "folio",
        "folleto",
        "fondo",
        "forma",
        "forro",
        "fortuna",
        "forzar",
        "fosa",
        "foto",
        "fracaso",
        "frágil",
        "franja",
        "frase",
        "fraude",
        "freír",
        "freno",
        "fresa",
        "frío",
        "frito",
        "fruta",
        "fuego",
        "fuente",
        "fuerza",
        "fuga",
        "fumar",
        "función",
        "funda",
        "furgón",
        "furia",
        "fusil",
        "fútbol",
        "futuro",
        "gacela",
        "gafas",
        "gaita",
        "gajo",
        "gala",
        "galería",
        "gallo",
        "gamba",
        "ganar",
        "gancho",
        "ganga",
        "ganso",
        "garaje",
        "garza",
        "gasolina",
        "gastar",
        "gato",
        "gavilán",
        "gemelo",
        "gemir",
        "gen",
        "género",
        "genio",
        "gente",
        "geranio",
        "gerente",
        "germen",
        "gesto",
        "gigante",
        "gimnasio",
        "girar",
        "giro",
        "glaciar",
        "globo",
        "gloria",
        "gol",
        "golfo",
        "goloso",
        "golpe",
        "goma",
        "gordo",
        "gorila",
        "gorra",
        "gota",
        "goteo",
        "gozar",
        "grada",
        "gráfico",
        "grano",
        "grasa",
        "gratis",
        "grave",
        "grieta",
        "grillo",
        "gripe",
        "gris",
        "grito",
        "grosor",
        "grúa",
        "grueso",
        "grumo",
        "grupo",
        "guante",
        "guapo",
        "guardia",
        "guerra",
        "guía",
        "guiño",
        "guion",
        "guiso",
        "guitarra",
        "gusano",
        "gustar",
        "haber",
        "hábil",
        "hablar",
        "hacer",
        "hacha",
        "hada",
        "hallar",
        "hamaca",
        "harina",
        "haz",
        "hazaña",
        "hebilla",
        "hebra",
        "hecho",
        "helado",
        "helio",
        "hembra",
        "herir",
        "hermano",
        "héroe",
        "hervir",
        "hielo",
        "hierro",
        "hígado",
        "higiene",
        "hijo",
        "himno",
        "historia",
        "hocico",
        "hogar",
        "hoguera",
        "hoja",
        "hombre",
        "hongo",
        "honor",
        "honra",
        "hora",
        "hormiga",
        "horno",
        "hostil",
        "hoyo",
        "hueco",
        "huelga",
        "huerta",
        "hueso",
        "huevo",
        "huida",
        "huir",
        "humano",
        "húmedo",
        "humilde",
        "humo",
        "hundir",
        "huracán",
        "hurto",
        "icono",
        "ideal",
        "idioma",
        "ídolo",
        "iglesia",
        "iglú",
        "igual",
        "ilegal",
        "ilusión",
        "imagen",
        "imán",
        "imitar",
        "impar",
        "imperio",
        "imponer",
        "impulso",
        "incapaz",
        "índice",
        "inerte",
        "infiel",
        "informe",
        "ingenio",
        "inicio",
        "inmenso",
        "inmune",
        "innato",
        "insecto",
        "instante",
        "interés",
        "íntimo",
        "intuir",
        "inútil",
        "invierno",
        "ira",
        "iris",
        "ironía",
        "isla",
        "islote",
        "jabalí",
        "jabón",
        "jamón",
        "jarabe",
        "jardín",
        "jarra",
        "jaula",
        "jazmín",
        "jefe",
        "jeringa",
        "jinete",
        "jornada",
        "joroba",
        "joven",
        "joya",
        "juerga",
        "jueves",
        "juez",
        "jugador",
        "jugo",
        "juguete",
        "juicio",
        "junco",
        "jungla",
        "junio",
        "juntar",
        "júpiter",
        "jurar",
        "justo",
        "juvenil",
        "juzgar",
        "kilo",
        "koala",
        "labio",
        "lacio",
        "lacra",
        "lado",
        "ladrón",
        "lagarto",
        "lágrima",
        "laguna",
        "laico",
        "lamer",
        "lámina",
        "lámpara",
        "lana",
        "lancha",
        "langosta",
        "lanza",
        "lápiz",
        "largo",
        "larva",
        "lástima",
        "lata",
        "látex",
        "latir",
        "laurel",
        "lavar",
        "lazo",
        "leal",
        "lección",
        "leche",
        "lector",
        "leer",
        "legión",
        "legumbre",
        "lejano",
        "lengua",
        "lento",
        "leña",
        "león",
        "leopardo",
        "lesión",
        "letal",
        "letra",
        "leve",
        "leyenda",
        "libertad",
        "libro",
        "licor",
        "líder",
        "lidiar",
        "lienzo",
        "liga",
        "ligero",
        "lima",
        "límite",
        "limón",
        "limpio",
        "lince",
        "lindo",
        "línea",
        "lingote",
        "lino",
        "linterna",
        "líquido",
        "liso",
        "lista",
        "litera",
        "litio",
        "litro",
        "llaga",
        "llama",
        "llanto",
        "llave",
        "llegar",
        "llenar",
        "llevar",
        "llorar",
        "llover",
        "lluvia",
        "lobo",
        "loción",
        "loco",
        "locura",
        "lógica",
        "logro",
        "lombriz",
        "lomo",
        "lonja",
        "lote",
        "lucha",
        "lucir",
        "lugar",
        "lujo",
        "luna",
        "lunes",
        "lupa",
        "lustro",
        "luto",
        "luz",
        "maceta",
        "macho",
        "madera",
        "madre",
        "maduro",
        "maestro",
        "mafia",
        "magia",
        "mago",
        "maíz",
        "maldad",
        "maleta",
        "malla",
        "malo",
        "mamá",
        "mambo",
        "mamut",
        "manco",
        "mando",
        "manejar",
        "manga",
        "maniquí",
        "manjar",
        "mano",
        "manso",
        "manta",
        "mañana",
        "mapa",
        "máquina",
        "mar",
        "marco",
        "marea",
        "marfil",
        "margen",
        "marido",
        "mármol",
        "marrón",
        "martes",
        "marzo",
        "masa",
        "máscara",
        "masivo",
        "matar",
        "materia",
        "matiz",
        "matriz",
        "máximo",
        "mayor",
        "mazorca",
        "mecha",
        "medalla",
        "medio",
        "médula",
        "mejilla",
        "mejor",
        "melena",
        "melón",
        "memoria",
        "menor",
        "mensaje",
        "mente",
        "menú",
        "mercado",
        "merengue",
        "mérito",
        "mes",
        "mesón",
        "meta",
        "meter",
        "método",
        "metro",
        "mezcla",
        "miedo",
        "miel",
        "miembro",
        "miga",
        "mil",
        "milagro",
        "militar",
        "millón",
        "mimo",
        "mina",
        "minero",
        "mínimo",
        "minuto",
        "miope",
        "mirar",
        "misa",
        "miseria",
        "misil",
        "mismo",
        "mitad",
        "mito",
        "mochila",
        "moción",
        "moda",
        "modelo",
        "moho",
        "mojar",
        "molde",
        "moler",
        "molino",
        "momento",
        "momia",
        "monarca",
        "moneda",
        "monja",
        "monto",
        "moño",
        "morada",
        "morder",
        "moreno",
        "morir",
        "morro",
        "morsa",
        "mortal",
        "mosca",
        "mostrar",
        "motivo",
        "mover",
        "móvil",
        "mozo",
        "mucho",
        "mudar",
        "mueble",
        "muela",
        "muerte",
        "muestra",
        "mugre",
        "mujer",
        "mula",
        "muleta",
        "multa",
        "mundo",
        "muñeca",
        "mural",
        "muro",
        "músculo",
        "museo",
        "musgo",
        "música",
        "muslo",
        "nácar",
        "nación",
        "nadar",
        "naipe",
        "naranja",
        "nariz",
        "narrar",
        "nasal",
        "natal",
        "nativo",
        "natural",
        "náusea",
        "naval",
        "nave",
        "navidad",
        "necio",
        "néctar",
        "negar",
        "negocio",
        "negro",
        "neón",
        "nervio",
        "neto",
        "neutro",
        "nevar",
        "nevera",
        "nicho",
        "nido",
        "niebla",
        "nieto",
        "niñez",
        "niño",
        "nítido",
        "nivel",
        "nobleza",
        "noche",
        "nómina",
        "noria",
        "norma",
        "norte",
        "nota",
        "noticia",
        "novato",
        "novela",
        "novio",
        "nube",
        "nuca",
        "núcleo",
        "nudillo",
        "nudo",
        "nuera",
        "nueve",
        "nuez",
        "nulo",
        "número",
        "nutria",
        "oasis",
        "obeso",
        "obispo",
        "objeto",
        "obra",
        "obrero",
        "observar",
        "obtener",
        "obvio",
        "oca",
        "ocaso",
        "océano",
        "ochenta",
        "ocho",
        "ocio",
        "ocre",
        "octavo",
        "octubre",
        "oculto",
        "ocupar",
        "ocurrir",
        "odiar",
        "odio",
        "odisea",
        "oeste",
        "ofensa",
        "oferta",
        "oficio",
        "ofrecer",
        "ogro",
        "oído",
        "oír",
        "ojo",
        "ola",
        "oleada",
        "olfato",
        "olivo",
        "olla",
        "olmo",
        "olor",
        "olvido",
        "ombligo",
        "onda",
        "onza",
        "opaco",
        "opción",
        "ópera",
        "opinar",
        "oponer",
        "optar",
        "óptica",
        "opuesto",
        "oración",
        "orador",
        "oral",
        "órbita",
        "orca",
        "orden",
        "oreja",
        "órgano",
        "orgía",
        "orgullo",
        "oriente",
        "origen",
        "orilla",
        "oro",
        "orquesta",
        "oruga",
        "osadía",
        "oscuro",
        "osezno",
        "oso",
        "ostra",
        "otoño",
        "otro",
        "oveja",
        "óvulo",
        "óxido",
        "oxígeno",
        "oyente",
        "ozono",
        "pacto",
        "padre",
        "paella",
        "página",
        "pago",
        "país",
        "pájaro",
        "palabra",
        "palco",
        "paleta",
        "pálido",
        "palma",
        "paloma",
        "palpar",
        "pan",
        "panal",
        "pánico",
        "pantera",
        "pañuelo",
        "papá",
        "papel",
        "papilla",
        "paquete",
        "parar",
        "parcela",
        "pared",
        "parir",
        "paro",
        "párpado",
        "parque",
        "párrafo",
        "parte",
        "pasar",
        "paseo",
        "pasión",
        "paso",
        "pasta",
        "pata",
        "patio",
        "patria",
        "pausa",
        "pauta",
        "pavo",
        "payaso",
        "peatón",
        "pecado",
        "pecera",
        "pecho",
        "pedal",
        "pedir",
        "pegar",
        "peine",
        "pelar",
        "peldaño",
        "pelea",
        "peligro",
        "pellejo",
        "pelo",
        "peluca",
        "pena",
        "pensar",
        "peñón",
        "peón",
        "peor",
        "pepino",
        "pequeño",
        "pera",
        "percha",
        "perder",
        "pereza",
        "perfil",
        "perico",
        "perla",
        "permiso",
        "perro",
        "persona",
        "pesa",
        "pesca",
        "pésimo",
        "pestaña",
        "pétalo",
        "petróleo",
        "pez",
        "pezuña",
        "picar",
        "pichón",
        "pie",
        "piedra",
        "pierna",
        "pieza",
        "pijama",
        "pilar",
        "piloto",
        "pimienta",
        "pino",
        "pintor",
        "pinza",
        "piña",
        "piojo",
        "pipa",
        "pirata",
        "pisar",
        "piscina",
        "piso",
        "pista",
        "pitón",
        "pizca",
        "placa",
        "plan",
        "plata",
        "playa",
        "plaza",
        "pleito",
        "pleno",
        "plomo",
        "pluma",
        "plural",
        "pobre",
        "poco",
        "poder",
        "podio",
        "poema",
        "poesía",
        "poeta",
        "polen",
        "policía",
        "pollo",
        "polvo",
        "pomada",
        "pomelo",
        "pomo",
        "pompa",
        "poner",
        "porción",
        "portal",
        "posada",
        "poseer",
        "posible",
        "poste",
        "potencia",
        "potro",
        "pozo",
        "prado",
        "precoz",
        "pregunta",
        "premio",
        "prensa",
        "preso",
        "previo",
        "primo",
        "príncipe",
        "prisión",
        "privar",
        "proa",
        "probar",
        "proceso",
        "producto",
        "proeza",
        "profesor",
        "programa",
        "prole",
        "promesa",
        "pronto",
        "propio",
        "próximo",
        "prueba",
        "público",
        "puchero",
        "pudor",
        "pueblo",
        "puerta",
        "puesto",
        "pulga",
        "pulir",
        "pulmón",
        "pulpo",
        "pulso",
        "puma",
        "punto",
        "puñal",
        "puño",
        "pupa",
        "pupila",
        "puré",
        "quedar",
        "queja",
        "quemar",
        "querer",
        "queso",
        "quieto",
        "química",
        "quince",
        "quitar",
        "rábano",
        "rabia",
        "rabo",
        "ración",
        "radical",
        "raíz",
        "rama",
        "rampa",
        "rancho",
        "rango",
        "rapaz",
        "rápido",
        "rapto",
        "rasgo",
        "raspa",
        "rato",
        "rayo",
        "raza",
        "razón",
        "reacción",
        "realidad",
        "rebaño",
        "rebote",
        "recaer",
        "receta",
        "rechazo",
        "recoger",
        "recreo",
        "recto",
        "recurso",
        "red",
        "redondo",
        "reducir",
        "reflejo",
        "reforma",
        "refrán",
        "refugio",
        "regalo",
        "regir",
        "regla",
        "regreso",
        "rehén",
        "reino",
        "reír",
        "reja",
        "relato",
        "relevo",
        "relieve",
        "relleno",
        "reloj",
        "remar",
        "remedio",
        "remo",
        "rencor",
        "rendir",
        "renta",
        "reparto",
        "repetir",
        "reposo",
        "reptil",
        "res",
        "rescate",
        "resina",
        "respeto",
        "resto",
        "resumen",
        "retiro",
        "retorno",
        "retrato",
        "reunir",
        "revés",
        "revista",
        "rey",
        "rezar",
        "rico",
        "riego",
        "rienda",
        "riesgo",
        "rifa",
        "rígido",
        "rigor",
        "rincón",
        "riñón",
        "río",
        "riqueza",
        "risa",
        "ritmo",
        "rito"
      };
      set_words(words);
      populate_maps(ALLOW_SHORT_WORDS);
    }
  };
}

#endif
