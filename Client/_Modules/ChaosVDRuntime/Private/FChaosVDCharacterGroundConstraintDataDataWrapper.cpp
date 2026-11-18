// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436cb0d0

UScriptStruct * __cdecl FChaosVDCharacterGroundConstraintDataDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper,
                         (UObject *)pUVar1,L"ChaosVDCharacterGroundConstraintDataDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintDataDataWrapper.
         OuterSingleton;
}

// Serialize @ 1436db2d0

bool __thiscall
FChaosVDCharacterGroundConstraintDataDataWrapper::Serialize
          (FChaosVDCharacterGroundConstraintDataDataWrapper *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&this->GroundNormal);
    UE::Math::operator<<(param_1,&this->TargetDeltaPosition);
    ::operator<<(param_1,&this->TargetDeltaFacing);
    ::operator<<(param_1,&this->GroundDistance);
    ::operator<<(param_1,&this->CosMaxWalkableSlopeAngle);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

