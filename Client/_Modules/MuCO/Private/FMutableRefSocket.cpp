// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab96e90

UScriptStruct * __cdecl FMutableRefSocket::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableRefSocket.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableRefSocket.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefSocket,(UObject *)pUVar1,
                         L"MutableRefSocket");
  }
  return Z_Registration_Info_UScriptStruct_FMutableRefSocket.OuterSingleton;
}

// operator== @ 14abc1770

bool __thiscall FMutableRefSocket::operator==(FMutableRefSocket *this,FMutableRefSocket *param_1)

{
  if (((((this->SocketName == param_1->SocketName) && (this->BoneName == param_1->BoneName)) &&
       ((param_1->RelativeLocation).field0_0x0._s_0.X == (this->RelativeLocation).field0_0x0._s_0.X)
       ) && ((((param_1->RelativeLocation).field0_0x0._s_0.Y ==
               (this->RelativeLocation).field0_0x0._s_0.Y &&
              ((param_1->RelativeLocation).field0_0x0._s_0.Z ==
               (this->RelativeLocation).field0_0x0._s_0.Z)) &&
             (((param_1->RelativeRotation).Pitch == (this->RelativeRotation).Pitch &&
              (((param_1->RelativeRotation).Yaw == (this->RelativeRotation).Yaw &&
               ((param_1->RelativeRotation).Roll == (this->RelativeRotation).Roll)))))))) &&
     (((param_1->RelativeScale).field0_0x0._s_0.X == (this->RelativeScale).field0_0x0._s_0.X &&
      (((((param_1->RelativeScale).field0_0x0._s_0.Y == (this->RelativeScale).field0_0x0._s_0.Y &&
         ((param_1->RelativeScale).field0_0x0._s_0.Z == (this->RelativeScale).field0_0x0._s_0.Z)) &&
        (this->bForceAlwaysAnimated == param_1->bForceAlwaysAnimated)) &&
       (this->Priority == param_1->Priority)))))) {
    return true;
  }
  return false;
}

