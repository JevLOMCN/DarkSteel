// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c8460

UScriptStruct * __cdecl FChaosVDParticleVelocities::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleVelocities.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDParticleVelocities.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleVelocities,(UObject *)pUVar1,
                         L"ChaosVDParticleVelocities");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDParticleVelocities.OuterSingleton;
}

// Serialize @ 1436dfed0

bool __thiscall
FChaosVDParticleVelocities::Serialize(FChaosVDParticleVelocities *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&this->MV);
    UE::Math::operator<<(param_1,&this->MW);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

