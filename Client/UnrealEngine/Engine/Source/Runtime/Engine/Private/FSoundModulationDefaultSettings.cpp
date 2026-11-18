// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 148676b30

UScriptStruct * __cdecl FSoundModulationDefaultSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundModulationDefaultSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundModulationDefaultSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings,(UObject *)pUVar1
                         ,L"SoundModulationDefaultSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSoundModulationDefaultSettings.OuterSingleton;
}

// FSoundModulationDefaultSettings @ 1486956c0

FSoundModulationDefaultSettings * __thiscall
FSoundModulationDefaultSettings::FSoundModulationDefaultSettings
          (FSoundModulationDefaultSettings *this)

{
  *(undefined8 *)&(this->VolumeModulationDestination).Modulators.Elements = 0;
  *(undefined8 *)&(this->VolumeModulationDestination).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VolumeModulationDestination).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VolumeModulationDestination).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VolumeModulationDestination).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VolumeModulationDestination).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->VolumeModulationDestination).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->VolumeModulationDestination).Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->VolumeModulationDestination).Modulators.HashSize = 0;
  *(undefined8 *)&(this->PitchModulationDestination).Modulators.Elements = 0;
  *(undefined8 *)&(this->PitchModulationDestination).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PitchModulationDestination).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PitchModulationDestination).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PitchModulationDestination).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PitchModulationDestination).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PitchModulationDestination).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->PitchModulationDestination).Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->PitchModulationDestination).Modulators.HashSize = 0;
  *(undefined8 *)&(this->HighpassModulationDestination).Modulators.Elements = 0;
  *(undefined8 *)&(this->HighpassModulationDestination).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HighpassModulationDestination).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HighpassModulationDestination).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HighpassModulationDestination).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HighpassModulationDestination).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->HighpassModulationDestination).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->HighpassModulationDestination).Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->HighpassModulationDestination).Modulators.HashSize = 0;
  *(undefined8 *)&(this->LowpassModulationDestination).Modulators.Elements = 0;
  *(undefined8 *)&(this->LowpassModulationDestination).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LowpassModulationDestination).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LowpassModulationDestination).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LowpassModulationDestination).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LowpassModulationDestination).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LowpassModulationDestination).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->LowpassModulationDestination).Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->LowpassModulationDestination).Modulators.HashSize = 0;
  (this->VolumeModulationDestination).Value = 0.0;
  (this->PitchModulationDestination).Value = 0.0;
  (this->HighpassModulationDestination).Value = 20.0;
  (this->LowpassModulationDestination).Value = 20000.0;
  return this;
}

// operator= @ 14869cee0

FSoundModulationDefaultSettings * __thiscall
FSoundModulationDefaultSettings::operator=
          (FSoundModulationDefaultSettings *this,FSoundModulationDefaultSettings *param_1)

{
  (this->VolumeModulationDestination).Value = (param_1->VolumeModulationDestination).Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->VolumeModulationDestination).Modulators,
              &(param_1->VolumeModulationDestination).Modulators);
  (this->PitchModulationDestination).Value = (param_1->PitchModulationDestination).Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->PitchModulationDestination).Modulators,
              &(param_1->PitchModulationDestination).Modulators);
  (this->HighpassModulationDestination).Value = (param_1->HighpassModulationDestination).Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->HighpassModulationDestination).Modulators,
              &(param_1->HighpassModulationDestination).Modulators);
  (this->LowpassModulationDestination).Value = (param_1->LowpassModulationDestination).Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->LowpassModulationDestination).Modulators,
              &(param_1->LowpassModulationDestination).Modulators);
  return this;
}

// GetSettingsForDestination @ 1486c72f0

FSoundModulationDestinationSettings * __thiscall
FSoundModulationDefaultSettings::GetSettingsForDestination
          (FSoundModulationDefaultSettings *this,
          FSoundModulationDestinationSettings *__return_storage_ptr__,EModulationDestination param_1
          )

{
  float fVar1;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar2;
  
  if (param_1 == Volume) {
    fVar1 = (this->VolumeModulationDestination).Value;
    pTVar2 = &(this->VolumeModulationDestination).Modulators;
  }
  else if (param_1 == Pitch) {
    fVar1 = (this->PitchModulationDestination).Value;
    pTVar2 = &(this->PitchModulationDestination).Modulators;
  }
  else if (param_1 == Lowpass) {
    fVar1 = (this->LowpassModulationDestination).Value;
    pTVar2 = &(this->LowpassModulationDestination).Modulators;
  }
  else {
    if (param_1 != Highpass) {
      __return_storage_ptr__->Value = 0.0;
      __return_storage_ptr__->_padding_ = 0;
      *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements = 0;
      *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements.field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements.field_0x10 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements.field_0x18 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements.field_0x20 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements.field_0x28 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements.field_0x30 = 0;
      (__return_storage_ptr__->Modulators).Hash.InlineData[0] = '\0';
      (__return_storage_ptr__->Modulators).Hash.InlineData[1] = '\0';
      (__return_storage_ptr__->Modulators).Hash.InlineData[2] = '\0';
      (__return_storage_ptr__->Modulators).Hash.InlineData[3] = '\0';
      (__return_storage_ptr__->Modulators).Hash._padding_ = 0;
      (__return_storage_ptr__->Modulators).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      *(undefined8 *)&(__return_storage_ptr__->Modulators).HashSize = 0;
      __return_storage_ptr__->Value = 1.0;
      *(undefined4 *)&(__return_storage_ptr__->Modulators).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->Modulators).Elements.field_0x30 = 0xffffffff;
      return __return_storage_ptr__;
    }
    fVar1 = (this->HighpassModulationDestination).Value;
    pTVar2 = &(this->HighpassModulationDestination).Modulators;
  }
  __return_storage_ptr__->Value = fVar1;
  *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Modulators).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Modulators).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Modulators).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Modulators).Elements.field_0x34 = 0;
  (__return_storage_ptr__->Modulators).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->Modulators).HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&__return_storage_ptr__->Modulators,pTVar2);
  return __return_storage_ptr__;
}

