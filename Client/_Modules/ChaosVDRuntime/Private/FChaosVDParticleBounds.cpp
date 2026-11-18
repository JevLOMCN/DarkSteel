// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c85e0

UScriptStruct * __cdecl FChaosVDParticleBounds::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleBounds.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDParticleBounds.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleBounds,(UObject *)pUVar1,
                         L"ChaosVDParticleBounds");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDParticleBounds.OuterSingleton;
}

// Serialize @ 1436def90

bool __thiscall FChaosVDParticleBounds::Serialize(FChaosVDParticleBounds *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&this->MMin);
    UE::Math::operator<<(param_1,&this->MMax);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

