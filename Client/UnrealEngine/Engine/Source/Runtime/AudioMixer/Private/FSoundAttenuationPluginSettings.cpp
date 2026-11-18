// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// operator= @ 146541ca0

FSoundAttenuationPluginSettings * __thiscall
FSoundAttenuationPluginSettings::operator=
          (FSoundAttenuationPluginSettings *this,FSoundAttenuationPluginSettings *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UOcclusionPluginSourceSettingsBase>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UReverbPluginSourceSettingsBase>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  if (this != param_1) {
    iVar5 = (param_1->SpatializationPluginSettingsArray).ArrayNum;
    piVar1 = &(this->SpatializationPluginSettingsArray).ArrayMax;
    pFVar6 = (param_1->SpatializationPluginSettingsArray).AllocatorInstance.Data;
    (this->SpatializationPluginSettingsArray).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,*piVar1,(ForAnyElementType *)this,iVar5,piVar1);
      ConstructItems<TObjectPtr<USpatializationPluginSourceSettingsBase>,TObjectPtr<USpatializationPluginSourceSettingsBase>,int>
                ((this->SpatializationPluginSettingsArray).AllocatorInstance.Data,
                 (TObjectPtr<USpatializationPluginSourceSettingsBase> *)pFVar6,iVar5);
    }
  }
  pTVar2 = &this->OcclusionPluginSettingsArray;
  if (pTVar2 != &param_1->OcclusionPluginSettingsArray) {
    iVar5 = (param_1->OcclusionPluginSettingsArray).ArrayNum;
    piVar1 = &(this->OcclusionPluginSettingsArray).ArrayMax;
    pFVar6 = (param_1->OcclusionPluginSettingsArray).AllocatorInstance.Data;
    (this->OcclusionPluginSettingsArray).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
      ConstructItems<TObjectPtr<UOcclusionPluginSourceSettingsBase>,TObjectPtr<UOcclusionPluginSourceSettingsBase>,int>
                ((pTVar2->AllocatorInstance).Data,
                 (TObjectPtr<UOcclusionPluginSourceSettingsBase> *)pFVar6,iVar5);
    }
  }
  pTVar3 = &this->ReverbPluginSettingsArray;
  if (pTVar3 != &param_1->ReverbPluginSettingsArray) {
    iVar5 = (param_1->ReverbPluginSettingsArray).ArrayNum;
    piVar1 = &(this->ReverbPluginSettingsArray).ArrayMax;
    pFVar6 = (param_1->ReverbPluginSettingsArray).AllocatorInstance.Data;
    (this->ReverbPluginSettingsArray).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,*piVar1,&pTVar3->AllocatorInstance,iVar5,piVar1);
      ConstructItems<TObjectPtr<UReverbPluginSourceSettingsBase>,TObjectPtr<UReverbPluginSourceSettingsBase>,int>
                ((pTVar3->AllocatorInstance).Data,
                 (TObjectPtr<UReverbPluginSourceSettingsBase> *)pFVar6,iVar5);
    }
  }
  pTVar4 = &this->SourceDataOverridePluginSettingsArray;
  if (pTVar4 != &param_1->SourceDataOverridePluginSettingsArray) {
    iVar5 = (param_1->SourceDataOverridePluginSettingsArray).ArrayNum;
    piVar1 = &(this->SourceDataOverridePluginSettingsArray).ArrayMax;
    pFVar6 = (param_1->SourceDataOverridePluginSettingsArray).AllocatorInstance.Data;
    (this->SourceDataOverridePluginSettingsArray).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,*piVar1,&pTVar4->AllocatorInstance,iVar5,piVar1);
      ConstructItems<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,int>
                ((pTVar4->AllocatorInstance).Data,
                 (TObjectPtr<USourceDataOverridePluginSourceSettingsBase> *)pFVar6,iVar5);
    }
  }
  return this;
}

