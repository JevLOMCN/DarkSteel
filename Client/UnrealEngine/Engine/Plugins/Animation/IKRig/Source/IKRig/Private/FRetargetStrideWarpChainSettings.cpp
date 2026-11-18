// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14df04d80

UScriptStruct * __cdecl FRetargetStrideWarpChainSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRetargetStrideWarpChainSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetStrideWarpChainSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetStrideWarpChainSettings,
                         (UObject *)pUVar1,L"RetargetStrideWarpChainSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRetargetStrideWarpChainSettings.OuterSingleton;
}

// operator== @ 14df1f370

bool __thiscall
FRetargetStrideWarpChainSettings::operator==
          (FRetargetStrideWarpChainSettings *this,FRetargetStrideWarpChainSettings *param_1)

{
  return this->EnableStrideWarping == param_1->EnableStrideWarping;
}

