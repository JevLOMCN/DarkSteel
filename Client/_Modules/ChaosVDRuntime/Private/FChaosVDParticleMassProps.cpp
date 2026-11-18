// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c89e0

UScriptStruct * __cdecl FChaosVDParticleMassProps::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleMassProps.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDParticleMassProps.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleMassProps,(UObject *)pUVar1,
                         L"ChaosVDParticleMassProps");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDParticleMassProps.OuterSingleton;
}

// Serialize @ 1436dfa40

bool __thiscall
FChaosVDParticleMassProps::Serialize(FChaosVDParticleMassProps *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&this->MCenterOfMass);
    UE::Math::operator<<(param_1,&this->MRotationOfMass);
    UE::Math::operator<<(param_1,&this->MI);
    UE::Math::operator<<(param_1,&this->MInvI);
    ::operator<<(param_1,&this->MM);
    ::operator<<(param_1,&this->MInvM);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

