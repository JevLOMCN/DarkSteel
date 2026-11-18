// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c88a0

UScriptStruct * __cdecl FChaosVDParticleDynamics::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleDynamics,(UObject *)pUVar1,
                         L"ChaosVDParticleDynamics");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamics.OuterSingleton;
}

// Serialize @ 1436df9c0

bool __thiscall
FChaosVDParticleDynamics::Serialize(FChaosVDParticleDynamics *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&this->MAcceleration);
    UE::Math::operator<<(param_1,&this->MAngularAcceleration);
    UE::Math::operator<<(param_1,&this->MAngularImpulseVelocity);
    UE::Math::operator<<(param_1,&this->MLinearImpulseVelocity);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

