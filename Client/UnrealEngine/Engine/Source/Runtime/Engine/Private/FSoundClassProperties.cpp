// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FSoundClassProperties @ 14761db20

FSoundClassProperties * __thiscall
FSoundClassProperties::FSoundClassProperties
          (FSoundClassProperties *this,FSoundClassProperties *param_1)

{
  USoundSubmix *pUVar1;
  byte bVar2;
  
  this->Volume = param_1->Volume;
  this->Pitch = param_1->Pitch;
  this->LowPassFilterFrequency = param_1->LowPassFilterFrequency;
  this->AttenuationDistanceScale = param_1->AttenuationDistanceScale;
  this->LFEBleed = param_1->LFEBleed;
  this->VoiceCenterChannelVolume = param_1->VoiceCenterChannelVolume;
  this->RadioFilterVolume = param_1->RadioFilterVolume;
  this->RadioFilterVolumeThreshold = param_1->RadioFilterVolumeThreshold;
  bVar2 = (this->bApplyEffects ^ param_1->bApplyEffects) & 1 ^ this->field_0x20;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 2 ^ bVar2;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 4 ^ bVar2;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 8 ^ bVar2;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 0x10 ^ bVar2;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 0x20 ^ bVar2;
  this->field_0x20 = bVar2;
  this->field_0x20 = (bVar2 ^ param_1->field_0x20) & 0x40 ^ bVar2;
  this->Default2DReverbSendAmount = param_1->Default2DReverbSendAmount;
  FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
            (&(this->ModulationSettings).VolumeModulationDestination,
             &(param_1->ModulationSettings).VolumeModulationDestination);
  FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
            (&(this->ModulationSettings).PitchModulationDestination,
             &(param_1->ModulationSettings).PitchModulationDestination);
  FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
            (&(this->ModulationSettings).HighpassModulationDestination,
             &(param_1->ModulationSettings).HighpassModulationDestination);
  FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
            (&(this->ModulationSettings).LowpassModulationDestination,
             &(param_1->ModulationSettings).LowpassModulationDestination);
  (this->OutputTarget).Value = (param_1->OutputTarget).Value;
  this->LoadingBehavior = param_1->LoadingBehavior;
  pUVar1 = (param_1->DefaultSubmix).field0_0x0.DebugPtr;
  (this->DefaultSubmix).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// FSoundClassProperties @ 14761dc80

FSoundClassProperties * __thiscall
FSoundClassProperties::FSoundClassProperties
          (FSoundClassProperties *this,FSoundClassProperties *param_1)

{
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar1;
  float fVar2;
  USoundSubmix *pUVar3;
  byte bVar4;
  
  this->Volume = param_1->Volume;
  this->Pitch = param_1->Pitch;
  this->LowPassFilterFrequency = param_1->LowPassFilterFrequency;
  this->AttenuationDistanceScale = param_1->AttenuationDistanceScale;
  this->LFEBleed = param_1->LFEBleed;
  this->VoiceCenterChannelVolume = param_1->VoiceCenterChannelVolume;
  this->RadioFilterVolume = param_1->RadioFilterVolume;
  this->RadioFilterVolumeThreshold = param_1->RadioFilterVolumeThreshold;
  bVar4 = (this->bApplyEffects ^ param_1->bApplyEffects) & 1 ^ this->field_0x20;
  this->field_0x20 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x20) & 2 ^ bVar4;
  this->field_0x20 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x20) & 4 ^ bVar4;
  this->field_0x20 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x20) & 8 ^ bVar4;
  this->field_0x20 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x20) & 0x10 ^ bVar4;
  this->field_0x20 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x20) & 0x20 ^ bVar4;
  pTVar1 = &(this->ModulationSettings).VolumeModulationDestination.Modulators;
  this->field_0x20 = bVar4;
  this->field_0x20 = (bVar4 ^ param_1->field_0x20) & 0x40 ^ bVar4;
  this->Default2DReverbSendAmount = param_1->Default2DReverbSendAmount;
  fVar2 = (param_1->ModulationSettings).VolumeModulationDestination.Value;
  *(undefined8 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x20 = 0;
  (this->ModulationSettings).VolumeModulationDestination.Value = fVar2;
  *(undefined4 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x34 = 0;
  (this->ModulationSettings).VolumeModulationDestination.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ModulationSettings).VolumeModulationDestination.Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar1,&(param_1->ModulationSettings).VolumeModulationDestination.Modulators);
  fVar2 = (param_1->ModulationSettings).PitchModulationDestination.Value;
  pTVar1 = &(this->ModulationSettings).PitchModulationDestination.Modulators;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x20 = 0;
  (this->ModulationSettings).PitchModulationDestination.Value = fVar2;
  *(undefined4 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x34 = 0;
  (this->ModulationSettings).PitchModulationDestination.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ModulationSettings).PitchModulationDestination.Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar1,&(param_1->ModulationSettings).PitchModulationDestination.Modulators);
  fVar2 = (param_1->ModulationSettings).HighpassModulationDestination.Value;
  pTVar1 = &(this->ModulationSettings).HighpassModulationDestination.Modulators;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x20 = 0;
  (this->ModulationSettings).HighpassModulationDestination.Value = fVar2;
  *(undefined4 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x34 = 0;
  (this->ModulationSettings).HighpassModulationDestination.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ModulationSettings).HighpassModulationDestination.Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar1,&(param_1->ModulationSettings).HighpassModulationDestination.Modulators);
  fVar2 = (param_1->ModulationSettings).LowpassModulationDestination.Value;
  pTVar1 = &(this->ModulationSettings).LowpassModulationDestination.Modulators;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x20 = 0;
  (this->ModulationSettings).LowpassModulationDestination.Value = fVar2;
  *(undefined4 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x34 = 0;
  (this->ModulationSettings).LowpassModulationDestination.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ModulationSettings).LowpassModulationDestination.Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar1,&(param_1->ModulationSettings).LowpassModulationDestination.Modulators);
  (this->OutputTarget).Value = (param_1->OutputTarget).Value;
  this->LoadingBehavior = param_1->LoadingBehavior;
  pUVar3 = (param_1->DefaultSubmix).field0_0x0.DebugPtr;
  (this->DefaultSubmix).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return this;
}

// StaticStruct @ 14867bbf0

UScriptStruct * __cdecl FSoundClassProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundClassProperties.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundClassProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassProperties,(UObject *)pUVar1,
                         L"SoundClassProperties");
  }
  return Z_Registration_Info_UScriptStruct_FSoundClassProperties.OuterSingleton;
}

// FSoundClassProperties @ 148695370

FSoundClassProperties * __thiscall
FSoundClassProperties::FSoundClassProperties(FSoundClassProperties *this)

{
  undefined1 *puVar1;
  
  this->bApplyEffects = '\0';
  this->bApplyAmbientVolumes = '\0';
  this->bCenterChannelOnly = '\0';
  this->bIsMusic = '\0';
  this->bIsUISound = '\0';
  this->bAlwaysPlay = '\0';
  this->bReverb = '\x01';
  this->VoiceCenterChannelVolume = 0.0;
  this->RadioFilterVolume = 0.0;
  this->RadioFilterVolumeThreshold = 0.0;
  this->Default2DReverbSendAmount = 0.0;
  this->Volume = 1.0;
  this->Pitch = 1.0;
  this->LowPassFilterFrequency = 20000.0;
  this->AttenuationDistanceScale = 1.0;
  this->LFEBleed = 0.0;
  FSoundModulationDefaultSettings::FSoundModulationDefaultSettings(&this->ModulationSettings);
  this->OutputTarget = '\0';
  this->LoadingBehavior = Inherited;
  (this->DefaultSubmix).field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  return this;
}

// operator= @ 14869cdd0

FSoundClassProperties * __thiscall
FSoundClassProperties::operator=(FSoundClassProperties *this,FSoundClassProperties *param_1)

{
  USoundSubmix *pUVar1;
  byte bVar2;
  
  this->Volume = param_1->Volume;
  this->Pitch = param_1->Pitch;
  this->LowPassFilterFrequency = param_1->LowPassFilterFrequency;
  this->AttenuationDistanceScale = param_1->AttenuationDistanceScale;
  this->LFEBleed = param_1->LFEBleed;
  this->VoiceCenterChannelVolume = param_1->VoiceCenterChannelVolume;
  this->RadioFilterVolume = param_1->RadioFilterVolume;
  this->RadioFilterVolumeThreshold = param_1->RadioFilterVolumeThreshold;
  bVar2 = (this->bApplyEffects ^ param_1->bApplyEffects) & 1 ^ this->field_0x20;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 2 ^ bVar2;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 4 ^ bVar2;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 8 ^ bVar2;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 0x10 ^ bVar2;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 0x20 ^ bVar2;
  this->field_0x20 = bVar2;
  this->field_0x20 = (bVar2 ^ param_1->field_0x20) & 0x40 ^ bVar2;
  this->Default2DReverbSendAmount = param_1->Default2DReverbSendAmount;
  FSoundModulationDefaultSettings::operator=(&this->ModulationSettings,&param_1->ModulationSettings)
  ;
  (this->OutputTarget).Value = (param_1->OutputTarget).Value;
  this->LoadingBehavior = param_1->LoadingBehavior;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->DefaultSubmix).field0_0x0.DebugPtr, pUVar1 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DefaultSubmix).field0_0x0 = (param_1->DefaultSubmix).field0_0x0;
  return this;
}

