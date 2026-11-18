// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436cafb0

UScriptStruct * __cdecl FChaosVDCharacterGroundConstraintSettingsDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper
                         ,(UObject *)pUVar1,L"ChaosVDCharacterGroundConstraintSettingsDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintSettingsDataWrapper.
         OuterSingleton;
}

// Serialize @ 1436db360

bool __thiscall
FChaosVDCharacterGroundConstraintSettingsDataWrapper::Serialize
          (FChaosVDCharacterGroundConstraintSettingsDataWrapper *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&this->VerticalAxis);
    ::operator<<(param_1,&this->TargetHeight);
    ::operator<<(param_1,&this->RadialForceLimit);
    ::operator<<(param_1,&this->FrictionForceLimit);
    ::operator<<(param_1,&this->TwistTorqueLimit);
    ::operator<<(param_1,&this->SwingTorqueLimit);
    ::operator<<(param_1,&this->CosMaxWalkableSlopeAngle);
    ::operator<<(param_1,&this->DampingFactor);
    ::operator<<(param_1,&this->AssumedOnGroundHeight);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

