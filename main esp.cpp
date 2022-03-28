 
 void findAndReplaceAll(std::string &data, const std::string& toSearch, const std::string& replaceStr)
{
    if (!data.empty()) {
        size_t pos = data.find(toSearch);
        while (pos != std::string::npos) {
            data.replace(pos, toSearch.size(), replaceStr);
            pos = data.find(toSearch, pos + replaceStr.size());
        }
    }
}

static void *Player_GetWeaponOnHand(void* _this) {
	void *(*_Player_GetWeaponOnHand)(void *_this) = (void (*)(void *))getRealOffset(0x9F8220); 
	return _Player_GetWeaponOnHand(_this);
}

static monoString* Weapon_get_name(void *_this) {
	monoString *(*_Weapon_get_name)(void * _this) = (monoString (*)(void *))getRealOffset(0x1AE9C84);
	return _Weapon_get_name(_this);
}



 void *Weapon = Player_GetWeaponOnHand(pJogadores);	
										  if(Weapon != NULL) {
											 monoString *WeaponName = Weapon_get_name(Weapon);
											 if(WeaponName != NULL) {
										   																		 
												 int nick_Len = WeaponName->getLength();
												 std::string name2;
												 for(int i = 0; i < nick_Len; i++) 
												 {
													 char data = get_Chars(WeaponName, i);
													 name2 += isascii(data) ? data : '?';										   										   
									             }																											  
												 
												 std::string nickname9;
												 nickname9 += "";
												 nickname9 += name2;
												 nickname9 += "";
												 nickname9 += "";
												 
												 if(!nickname9.empty())
                                                      findAndReplaceAll(nickname9, "TXT_ITEM_", "");
                                                       findAndReplaceAll(nickname9, "T_25_U_", "");
                                                       findAndReplaceAll(nickname9, "T_22_C_BLT_NAME", "BARRET");
                                                       findAndReplaceAll(nickname9, "T_27_U_KORD", "KORD");
                                                       findAndReplaceAll(nickname9, "T_18_U_WEAPON_M1887_NAME", "M1187");
                                                       findAndReplaceAll(nickname9, "T_22_U_GOLD_MP5_N", "MP5");
                                                       findAndReplaceAll(nickname9, "TXT_OB11_HQW_ITEM_P90", "P90");
                                                       findAndReplaceAll(nickname9, "T_22_U_GOLD_98K_N", "KAR98-Z");
                                                       findAndReplaceAll(nickname9, "T_22_U_GOLD_AWM_N", "AWM-Y");
                                                       findAndReplaceAll(nickname9, "T_21_U_WEAPON_THOMPSON_NAME", "THOMPSON");
                                                       findAndReplaceAll(nickname9, "CHANGUO", "PANELA");
                                                       findAndReplaceAll(nickname9, "BASEBALLPOLE", "BASTAO");
                                                       findAndReplaceAll(nickname9, "T_14_G_ITEM_", "");
                                                       findAndReplaceAll(nickname9, "SICKLE", "FOIÇE");
                                                       findAndReplaceAll(nickname9, "T_26_U_GOLD_FAMAS_N", "FAMAS-X");
                                                       findAndReplaceAll(nickname9, "TXT_OB10_HQW_ITEM_", "");
                                                       findAndReplaceAll(nickname9, "T_12_Q_ITEM_", "");
                                                       findAndReplaceAll(nickname9, "T_15_Q_ITEM_", "");
                                                       findAndReplaceAll(nickname9, "T_17_Q_SUPERHEAT", "PLASMA");
                                                       findAndReplaceAll(nickname9, "T_23_U_", "");
                                                       findAndReplaceAll(nickname9, "T_24_U_", "");
                                                       findAndReplaceAll(nickname9, "EAGLE", "DESERT");
                                                       findAndReplaceAll(nickname9, "FIST", "PUNHO");
                                                       findAndReplaceAll(nickname9, "T_24_U_M21A5", "CARAPINA");
                                                       findAndReplaceAll(nickname9, "T_22_U_GOLD_M60_N", "M60-Y");
                                                       findAndReplaceAll(nickname9, "T_22_U_GOLD_VSS_N", "VSS-X");
                                                       findAndReplaceAll(nickname9, "T_22_U_GOLD_M14_N", "M14-Y");
                                                       findAndReplaceAll(nickname9, "T_22_U_GOLD_HEAT_N", "PLASMA-Y");
                                                       findAndReplaceAll(nickname9, "T_20_U_SHIELD_GUN_NAME", "ARMAS DE ESCUDO");

                                                      if(!nickname9.empty())
														  
														  if(EZ.esparmas) { 
												 esp.DrawText2(EZ.TextColor, 0.6f,nickname9.c_str(),Vector2(PlayerRect.x +(PlayerRect.width /2),PlayerRect.y -12.0f),EZ.TextSize);
											  }
										   }								    
									   }				   