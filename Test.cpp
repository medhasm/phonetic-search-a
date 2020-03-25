/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
   
}
TEST_CASE("Test replacement of p and f") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
}

TEST_CASE("Test replacement of p and b and f") {
    string text = "xxx happy yyy";
    CHECK(find(text, "hafby") == string("happy"));
    CHECK(find(text, "habfy") == string("happy"));
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));

}
TEST_CASE("Test replacement randomly") {
    string text = "dont worry be happy";
    CHECK(find(text, "worry") == string("worry"));
    CHECK(find(text, "vorry") == string("worry"));
    CHECK(find(text, "wurry") == string("worry"));
    CHECK(find(text, "worri") == string("worry"));
    CHECK(find(text, "worri") == string("worry"));
    CHECK(find(text, "vurry") == string("worry"));
    CHECK(find(text, "vorri") == string("worry"));
    CHECK(find(text, "vurri") == string("worry"));
    CHECK(find(text, "wurri") == string("worry"));
    CHECK(find(text, "be") == string("be"));
    CHECK(find(text, "fe") == string("be"));
    CHECK(find(text, "pe") == string("be"));
    CHECK(find(text, "dont") == string("dont"));
    CHECK(find(text, "dunt") == string("dont"));
    CHECK(find(text, "dond") == string("dont"));
    CHECK(find(text, "dund") == string("dont"));
}

TEST_CASE("Test replacement uper case lower case") {
    string text = "dont worry be happy";
    CHECK(find(text, "Dont") == string("dont"));
    CHECK(find(text, "dOnt") == string("dont"));
    CHECK(find(text, "doNt") == string("dont"));
    CHECK(find(text, "donT") == string("dont"));
    CHECK(find(text, "DONT") == string("dont"));
    CHECK(find(text, "Worry") == string("worry"));
    CHECK(find(text, "wOrry") == string("worry"));
    CHECK(find(text, "woRry") == string("worry"));
    CHECK(find(text, "worRy") == string("worry"));
    CHECK(find(text, "worrY") == string("worry"));
    CHECK(find(text, "WORRY") == string("worry"));
    CHECK(find(text, "Be") == string("be"));
    CHECK(find(text, "bE") == string("be"));
    CHECK(find(text, "BE") == string("be"));
}
   

TEST_CASE("Test replacement randomly 2") {
    string text = "lucifer morningstar";
    CHECK(find(text, "lucifer") == string("lucifer"));
    CHECK(find(text, "locifer") == string("lucifer"));
    CHECK(find(text, "lukifer") == string("lucifer"));
    CHECK(find(text, "luqifer") == string("lucifer"));
    CHECK(find(text, "lucyfer") == string("lucifer"));
    CHECK(find(text, "luciber") == string("lucifer"));
    CHECK(find(text, "luciper") == string("lucifer"));
    CHECK(find(text, "lucifer") == string("lucifer"));
    CHECK(find(text, "lokifer") == string("lucifer"));
    CHECK(find(text, "loqifer") == string("lucifer"));
    CHECK(find(text, "lokyfer") == string("lucifer"));
    CHECK(find(text, "loqyfer") == string("lucifer"));
    CHECK(find(text, "lukyfer") == string("lucifer"));
    CHECK(find(text, "luqyfer") == string("lucifer"));
    CHECK(find(text, "locyfer") == string("lucifer"));
    CHECK(find(text, "lociber") == string("lucifer"));
    CHECK(find(text, "lociper") == string("lucifer"));  
    CHECK(find(text, "lokyber") == string("lucifer"));
   CHECK(find(text, "lokyper") == string("lucifer"));
    CHECK(find(text, "lokiber") == string("lucifer"));
   CHECK(find(text, "lokiper") == string("lucifer"));
    CHECK(find(text, "loqyber") == string("lucifer"));
   CHECK(find(text, "loqyper") == string("lucifer"));
    CHECK(find(text, "loqiber") == string("lucifer"));
   CHECK(find(text, "loqiper") == string("lucifer"));
   CHECK(find(text, "morningstar") == string("morningstar"));
   CHECK(find(text, "murningstar") == string("morningstar"));
   CHECK(find(text, "mornyngstar") == string("morningstar"));
   CHECK(find(text, "morninjstar") == string("morningstar"));
   CHECK(find(text, "morningztar") == string("morningstar"));
   CHECK(find(text, "murnyngstar") == string("morningstar"));
   CHECK(find(text, "murninjstar") == string("morningstar"));
   CHECK(find(text, "murningztar") == string("morningstar"));
   CHECK(find(text, "murnynjstar") == string("morningstar"));
   CHECK(find(text, "murnynjztar") == string("morningstar"));
   CHECK(find(text, "mornynjstar") == string("morningstar"));
   CHECK(find(text, "mornyngztar") == string("morningstar"));
   CHECK(find(text, "mornynjztar") == string("morningstar"));
   CHECK(find(text, "morninjztar") == string("morningstar"));
}
TEST_CASE("Test upper case lower case randomly 2") {
    string text = "lucifer morningstar";
    CHECK(find(text, "Lucifer") == string("lucifer"));
    CHECK(find(text, "lUcifer") == string("lucifer"));
    CHECK(find(text, "luCifer") == string("lucifer"));
    CHECK(find(text, "lucIfer") == string("lucifer"));
    CHECK(find(text, "luciFer") == string("lucifer"));
    CHECK(find(text, "lucifEr") == string("lucifer"));
    CHECK(find(text, "lucifeR") == string("lucifer"));
    CHECK(find(text, "LUCIFER") == string("lucifer"));
    CHECK(find(text, "Morningstar") == string("morningstar"));
    CHECK(find(text, "mOrningstar") == string("morningstar"));
    CHECK(find(text, "moRningstar") == string("morningstar"));
    CHECK(find(text, "morNingstar") == string("morningstar"));
    CHECK(find(text, "mornIngstar") == string("morningstar"));
    CHECK(find(text, "morniNgstar") == string("morningstar"));
    CHECK(find(text, "morninGstar") == string("morningstar"));
    CHECK(find(text, "morningStar") == string("morningstar"));
    CHECK(find(text, "morningsTar") == string("morningstar"));
    CHECK(find(text, "morningstAr") == string("morningstar"));
    CHECK(find(text, "morningstaR") == string("morningstar"));
    CHECK(find(text, "MORNINGSTAR") == string("morningstar"));



}











