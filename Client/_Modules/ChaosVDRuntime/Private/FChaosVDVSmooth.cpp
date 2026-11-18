// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c9760

UScriptStruct * __cdecl FChaosVDVSmooth::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDVSmooth.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDVSmooth.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDVSmooth,(UObject *)pUVar1,
                         L"ChaosVDVSmooth");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDVSmooth.OuterSingleton;
}

// Serialize @ 1436e07d0

bool __thiscall FChaosVDVSmooth::Serialize(FChaosVDVSmooth *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&this->MV);
    UE::Math::operator<<(param_1,&this->MW);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

