// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148676ff0

UScriptStruct * __cdecl FSoundAttenuationPluginSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundAttenuationPluginSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundAttenuationPluginSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings,(UObject *)pUVar1
                         ,L"SoundAttenuationPluginSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSoundAttenuationPluginSettings.OuterSingleton;
}

// FSoundAttenuationPluginSettings @ 148694ac0

FSoundAttenuationPluginSettings * __thiscall
FSoundAttenuationPluginSettings::FSoundAttenuationPluginSettings
          (FSoundAttenuationPluginSettings *this,FSoundAttenuationPluginSettings *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UOcclusionPluginSourceSettingsBase>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UReverbPluginSourceSettingsBase>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  piVar1 = &(this->SpatializationPluginSettingsArray).ArrayMax;
  (this->SpatializationPluginSettingsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->SpatializationPluginSettingsArray).ArrayNum;
  pFVar6 = (param_1->SpatializationPluginSettingsArray).AllocatorInstance.Data;
  (this->SpatializationPluginSettingsArray).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    ConstructItems<TObjectPtr<USpatializationPluginSourceSettingsBase>,TObjectPtr<USpatializationPluginSourceSettingsBase>,int>
              ((this->SpatializationPluginSettingsArray).AllocatorInstance.Data,
               (TObjectPtr<USpatializationPluginSourceSettingsBase> *)pFVar6,iVar5);
  }
  pTVar2 = &this->OcclusionPluginSettingsArray;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OcclusionPluginSettingsArray).ArrayMax;
  iVar5 = (param_1->OcclusionPluginSettingsArray).ArrayNum;
  pFVar6 = (param_1->OcclusionPluginSettingsArray).AllocatorInstance.Data;
  (this->OcclusionPluginSettingsArray).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TObjectPtr<UOcclusionPluginSourceSettingsBase>,TObjectPtr<UOcclusionPluginSourceSettingsBase>,int>
              ((pTVar2->AllocatorInstance).Data,
               (TObjectPtr<UOcclusionPluginSourceSettingsBase> *)pFVar6,iVar5);
  }
  pTVar3 = &this->ReverbPluginSettingsArray;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ReverbPluginSettingsArray).ArrayMax;
  iVar5 = (param_1->ReverbPluginSettingsArray).ArrayNum;
  pFVar6 = (param_1->ReverbPluginSettingsArray).AllocatorInstance.Data;
  (this->ReverbPluginSettingsArray).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TObjectPtr<UReverbPluginSourceSettingsBase>,TObjectPtr<UReverbPluginSourceSettingsBase>,int>
              ((pTVar3->AllocatorInstance).Data,
               (TObjectPtr<UReverbPluginSourceSettingsBase> *)pFVar6,iVar5);
  }
  pTVar4 = &this->SourceDataOverridePluginSettingsArray;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SourceDataOverridePluginSettingsArray).ArrayMax;
  iVar5 = (param_1->SourceDataOverridePluginSettingsArray).ArrayNum;
  pFVar6 = (param_1->SourceDataOverridePluginSettingsArray).AllocatorInstance.Data;
  (this->SourceDataOverridePluginSettingsArray).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,int>
              ((pTVar4->AllocatorInstance).Data,
               (TObjectPtr<USourceDataOverridePluginSourceSettingsBase> *)pFVar6,iVar5);
  }
  return this;
}

// AddStructReferencedObjects @ 1486a5ff0

void __thiscall
FSoundAttenuationPluginSettings::AddStructReferencedObjects
          (FSoundAttenuationPluginSettings *this,FReferenceCollector *param_1)

{
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)this);
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)
                     &this->OcclusionPluginSettingsArray);
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)
                     &this->ReverbPluginSettingsArray);
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)
                     &this->SourceDataOverridePluginSettingsArray);
  return;
}

