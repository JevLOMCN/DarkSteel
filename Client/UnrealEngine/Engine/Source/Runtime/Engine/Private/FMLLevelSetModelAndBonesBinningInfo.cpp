// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1472eb240

UScriptStruct * __cdecl FMLLevelSetModelAndBonesBinningInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMLLevelSetModelAndBonesBinningInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMLLevelSetModelAndBonesBinningInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMLLevelSetModelAndBonesBinningInfo,
                         (UObject *)pUVar1,L"MLLevelSetModelAndBonesBinningInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMLLevelSetModelAndBonesBinningInfo.OuterSingleton;
}

// FMLLevelSetModelAndBonesBinningInfo @ 1472f16f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMLLevelSetModelAndBonesBinningInfo * __thiscall
FMLLevelSetModelAndBonesBinningInfo::FMLLevelSetModelAndBonesBinningInfo
          (FMLLevelSetModelAndBonesBinningInfo *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMLLevelSetModelAndBonesBinningInfo__6B_;
  ::FString::FString(&this->ParentBoneName,"");
  ::FString::FString(&this->ActiveBoneNames,"");
  ::FString::FString(&this->MLModelInferenceInfoDataTablePath,"");
  ::FString::FString(&this->MLModelInferenceInfoDataTableIndex,"");
  ::FString::FString(&this->MLModelInferenceForIncorrectZoneInfoDataTableIndex,"");
  pTVar1 = &this->DebugGridResolution;
  (this->NumberOfRotationComponentsPerBone).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumberOfRotationComponentsPerBone).ArrayNum = 0;
  (this->NumberOfRotationComponentsPerBone).ArrayMax = 0;
  this->SignedDistanceScaling = -1.0;
  (this->RotationComponentIndexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationComponentIndexes).ArrayNum = 0;
  (this->RotationComponentIndexes).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DebugGridResolution).ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&pTVar1->AllocatorInstance,3,&(this->DebugGridResolution).ArrayMax);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)pFVar2 = 0x3200000032;
  *(undefined4 *)(pFVar2 + 8) = 0x32;
  (this->ReferenceBoneRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceBoneRotations).ArrayNum = 0;
  (this->ReferenceBoneRotations).ArrayMax = 0;
  (this->ReferenceBoneTranslations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceBoneTranslations).ArrayNum = 0;
  (this->ReferenceBoneTranslations).ArrayMax = 0;
  (this->TrainingGridOrigin).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridOrigin).ArrayNum = 0;
  (this->TrainingGridOrigin).ArrayMax = 0;
  (this->TrainingGridAxisX).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridAxisX).ArrayNum = 0;
  (this->TrainingGridAxisX).ArrayMax = 0;
  (this->TrainingGridAxisY).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridAxisY).ArrayNum = 0;
  (this->TrainingGridAxisY).ArrayMax = 0;
  (this->TrainingGridAxisZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridAxisZ).ArrayNum = 0;
  (this->TrainingGridAxisZ).ArrayMax = 0;
  return this;
}

// ~FMLLevelSetModelAndBonesBinningInfo @ 1472f2040

void __thiscall
FMLLevelSetModelAndBonesBinningInfo::~FMLLevelSetModelAndBonesBinningInfo
          (FMLLevelSetModelAndBonesBinningInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TrainingGridAxisZ).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrainingGridAxisY).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrainingGridAxisX).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrainingGridOrigin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferenceBoneTranslations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferenceBoneRotations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugGridResolution).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RotationComponentIndexes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NumberOfRotationComponentsPerBone).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MLModelInferenceForIncorrectZoneInfoDataTableIndex).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MLModelInferenceInfoDataTableIndex).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MLModelInferenceInfoDataTablePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveBoneNames).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentBoneName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

