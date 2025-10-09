#include "ErdosNumber.hpp"
#include <iostream>
using namespace std;

int main() {

    ErdosNumber a;

//     vector<string> b = a.calculateNumbers({"ERDOS"});

//     cout << "Expecting: {ERDOS 0 }, recieved: {";
//     for (int i = 0; i < b.size(); i++){
//         cout << b[i] << ", ";
//     }
//     cout << "}\n";

//     b = a.calculateNumbers({"KLEITMAN LANDER", "ERDOS KLEITMAN"});

//     cout << "Expecting: {ERDOS 0, KLEITMAN 1, LANDER 2 }, recieved: {";
//     for (int i = 0; i < b.size(); i++){
//         cout << b[i] << ", ";
//     }
//     cout << "}\n";

//     b = a.calculateNumbers({"ERDOS A", "A B", "B AA C"});

//     cout << "Expecting: {A 1, AA 3, B 2, C 3, ERDOS 0 }, recieved: {";
//     for (int i = 0; i < b.size(); i++){
//         cout << b[i] << ", ";
//     }
//     cout << "}\n";

//     b = a.calculateNumbers({"ERDOS B", "A B C", "B A E", "D F"});

//     cout << "Expecting: {A 2, B 1, C 2, D, E 2, ERDOS 0, F }, recieved: {";
//     for (int i = 0; i < b.size(); i++){
//         cout << b[i] << ", ";
//     }
//     cout << "}\n";

//     b = a.calculateNumbers({"ERDOS KLEITMAN", "CHUNG GODDARD KLEITMAN WAYNE", "WAYNE GODDARD KLEITMAN", 
//  "ALON KLEITMAN", "DEAN GODDARD WAYNE KLEITMAN STURTEVANT"});

//     cout << "Expecting: {ALON 2,CHUNG 2,DEAN 2,ERDOS 0,GODDARD 2,KLEITMAN 1,STURTEVANT 2,WAYNE 2 }, recieved: {";
//     for (int i = 0; i < b.size(); i++){
//         cout << b[i] << ", ";
//     }
//     cout << "}\n";

    // vector<string> b = a.calculateNumbers({"ERDOS Q W E R T Y U I O P A S D F G H J K L Z X", "AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", 
    //     "AQ AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH", "BH BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY", 
    //     "BY BZ CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP", "CA CP CQ CR CS CT CU CV CW CX CY CZ QQ Q WW"});
    // cout << "Expecting: {A 1, AA 6, AB 6, AC 6, AD 6, AE 6, AF 6, AG 6, AH 6, AI 6, AJ 6, AK 6, AL 6, AM 6, AN 6, AO 6, AP 6, AQ 5, AS 5, AT 5, AU 5, AV 5, AW 5, AX 5, AY 5, AZ 5, BA 5, BB 5, BC 5, BD 5, BE 5, BF 5, BG 5, BH 4, BJ 4, BK 4, BL 4, BM 4, BN 4, BO 4, BP 4, BQ 4, BR 4, BS 4, BT 4, BU 4, BV 4, BW 4, BX 4, BY 3, BZ 3, CA 2, CB 3, CC 3, CD 3, CE 3, CF 3, CG 3, CH 3, CI 3, CJ 3, CK 3, CL 3, CM 3, CN 3, CO 3, CP 2, CQ 2, CR 2, CS 2, CT 2, CU 2, CV 2, CW 2, CX 2, CY 2, CZ 2, D 1, E 1, ERDOS 0, F 1, G 1, H 1, I 1, J 1, K 1, L 1, O 1, P 1, Q 1, QQ 2, R 1, S 1, T 1, U 1, W 1, WW 2, X 1, Y 1, Z 1}, recieved: \n{";
    // for (int i = 0; i < b.size(); i++){
    //     cout << b[i] << ", ";
    // }
    // cout << "}\n";

    // vector<string> b = a.calculateNumbers({"ERDOS Q", "Q W", "W E", "E R", "R T", "T Y", "Y U", "U I", "I O", "O P", "P A", "A S", "S D", "D F", "F G", "G H", "H J", "J K", "K L", "L Z", "Z X", "X C", "C V", "V B", "B N", "N M", "M QW", "QW QE", "QE QR", "QR QT", "QT QY", "QY QU", "QU QI", "QI QO", "QO QP", "QP QA", "QA QS", "QS QD", "QD QF", "QF QG", "QG QH", "QH QJ", "QJ QK", "QK QL", "QL QZ", "QZ QX", "QX QC", "QC QV", "QV QB", "QB QN"});
    // cout << " Expecting: {A 11, B 24, C 22, D 13, E 3, ERDOS 0, F 14, G 15, H 16, I 8, J 17, K 18, L 19, M 26, N 25, O 9, P 10, Q 1, QA 36, QB 49, QC 47, QD 38, QE 28, QF 39, QG 40, QH 41, QI 33, QJ 42, QK 43, QL 44, QN 50, QO 34, QP 35, QR 29, QS 37, QT 30, QU 32, QV 48, QW 27, QX 46, QY 31, QZ 45, R 4, S 12, T 5, U 7, V 23, W 2, X 21, Y 6, Z 20,}, recieved:\n{";
    // for (int i = 0; i < b.size(); i++){
    //     cout << b[i] << ", ";
    // }
    // cout << "}\n";

    vector<string> b = a.calculateNumbers({"JBGL YZRDPWRXZ TITDUEUTEV OTUNEYSHGJ REPDK PGN", "DL JFFYUOOAD XGN AGERJ HMPJGZSYLK", 
        "KDQ YTNXNJO FNUIW UCSXVIRS GOXEYSG XUHIUB GYENEB", "HMPJGZSYLK YZRDPWRXZ VQ", 
        "GWSIH GWFQ GKQSTCX PGN HMPJGZSYLK", "WJSJHJMU HLWFEDMDJN AICDM OWQIHOZWA", 
        "DZTDQAIYRD UCSXVIRS HHCJL LEDLN JBGL OJPTQNV RF", "GOXEYSG WJSJHJMU DS JFFYUOOAD", 
        "ZJW WALMZWHJO REPDK RDLEGYR HLWFEDMDJN AGERJ LKJZ", "MSP FZVTKQLW OTUNEYSHGJ DZTDQAIYRD", 
        "GKBYHH SH ZTJSQQMWQ WJSJHJMU HHCJL SKTB", "WWYG ZJW OWQIHOZWA OCFLTDUVSQ GKBYHH", 
        "RXRVLXV DS MOD OCFLTDUVSQ PQCYYURX", "HLWFEDMDJN QKZTVSHNZG NHWONQBEW", "HLWFEDMDJN OTUNEYSHGJ NHWONQBEW UZLWGBTAO", 
        "OJPTQNV JYAWYBZ ERDOS JBGL PGN", "ZTJSQQMWQ EDHSYPG JYAWYBZ GYENEB", "RNEIRXBZVC DL UZLWGBTAO OJPTQNV GOXEYSG JIG XGN", 
        "UCSXVIRS GKBYHH KDQ COSENI SF PQCYYURX PGN ZDR", "DZTDQAIYRD JMH GKQSTCX LMELIXMM", "GWFQ HLWFEDMDJN GJYXHQGA PGN SHMXQTMDPK", 
        "ERDOS OWQIHOZWA RNEIRXBZVC MSP ZDR TJFOFOG JYAWYBZ", "DZTDQAIYRD ABBSY ZJW AZGMTN OWQIHOZWA MSP WWYG", 
        "WYXPX GOJOQUUZDC MOD OWQIHOZWA SLHKUXU REPDK MSP", "HHCJL FRN KDQ WJSJHJMU RF GOJOQUUZDC", 
        "REPDK WAAFQ GOXEYSG HLWFEDMDJN BECEBCVXVY JMH", "YTNXNJO RXRVLXV TITDUEUTEV MOD REPDK QKZTVSHNZG", 
        "GKQSTCX QKZTVSHNZG BJET UFNJ", "GKBYHH EDHSYPG AICDM REPDK DL AGERJ GOXEYSG MOD", "RXRVLXV YTNXNJO JIG SKTB COSENI EDHSYPG NHWONQBEW", 
        "EDHSYPG FA OJPTQNV TJFOFOG SLHKUXU MSP YTNXNJO"});
    cout << "Expecting : {ABBSY 2, AGERJ 3, AICDM 2, AZGMTN 2, BECEBCVXVY 3, BJET 3, COSENI 2, DL 2, DS 3, DZTDQAIYRD 2, EDHSYPG 2, ERDOS 0, FA 2, FNUIW 3, FRN 3, FZVTKQLW 2, GJYXHQGA 2, GKBYHH 2, GKQSTCX 2, GOJOQUUZDC 2, GOXEYSG 2, GWFQ 2, GWSIH 2, GYENEB 2, HHCJL 2, HLWFEDMDJN 2, HMPJGZSYLK 2, JBGL 1, JFFYUOOAD 3, JIG 2, JMH 3, JYAWYBZ 1, KDQ 2, LEDLN 2, LKJZ 3, LMELIXMM 3, MOD 2, MSP 1, NHWONQBEW 3, OCFLTDUVSQ 2, OJPTQNV 1, OTUNEYSHGJ 2, OWQIHOZWA 1, PGN 1, PQCYYURX 2, QKZTVSHNZG 3, RDLEGYR 3, REPDK 2, RF 2, RNEIRXBZVC 1, RXRVLXV 3, SF 2, SH 3, SHMXQTMDPK 2, SKTB 3, SLHKUXU 2, TITDUEUTEV 2, TJFOFOG 1, UCSXVIRS 2, UFNJ 3, UZLWGBTAO 2, VQ 3, WAAFQ 3, WALMZWHJO 3, WJSJHJMU 2, WWYG 2, WYXPX 2, XGN 2, XUHIUB 3, YTNXNJO 2, YZRDPWRXZ 2, ZDR 1, ZJW 2, ZTJSQQMWQ 2,}, recieved: \n{";
     for (int i = 0; i < b.size(); i++){
        cout << b[i] << ", ";
    }
    cout << "}\n";

    return 0;
}