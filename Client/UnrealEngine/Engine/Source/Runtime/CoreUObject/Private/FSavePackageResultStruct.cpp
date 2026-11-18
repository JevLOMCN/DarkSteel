// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FSavePackageResultStruct @ 14212c0f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FSavePackageResultStruct * __thiscall
FSavePackageResultStruct::FSavePackageResultStruct
          (FSavePackageResultStruct *this,FSavePackageResultStruct *param_1)

{
  this->Result = param_1->Result;
  this->TotalFileSize = param_1->TotalFileSize;
  *(undefined8 *)&this->CookedHash = *(undefined8 *)&param_1->CookedHash;
  *(undefined8 *)&(this->CookedHash).field_0x8 = *(undefined8 *)&(param_1->CookedHash).field_0x8;
  *(undefined8 *)&(param_1->CookedHash).field_0x8 = 0;
  *(undefined8 *)&param_1->CookedHash = 0;
  this->SerializedPackageFlags = param_1->SerializedPackageFlags;
  (this->LinkerSave).Ptr = (param_1->LinkerSave).Ptr;
  (param_1->LinkerSave).Ptr = (FLinkerSave *)0x0;
  (this->SavedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedAssets).AllocatorInstance.Data = (param_1->SavedAssets).AllocatorInstance.Data;
  (param_1->SavedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedAssets).ArrayNum = (param_1->SavedAssets).ArrayNum;
  (this->SavedAssets).ArrayMax = (param_1->SavedAssets).ArrayMax;
  (param_1->SavedAssets).ArrayNum = 0;
  (param_1->SavedAssets).ArrayMax = 0;
  (this->ImportPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportPackages).AllocatorInstance.Data = (param_1->ImportPackages).AllocatorInstance.Data;
  (param_1->ImportPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportPackages).ArrayNum = (param_1->ImportPackages).ArrayNum;
  (this->ImportPackages).ArrayMax = (param_1->ImportPackages).ArrayMax;
  (param_1->ImportPackages).ArrayNum = 0;
  (param_1->ImportPackages).ArrayMax = 0;
  (this->SoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).AllocatorInstance.Data =
       (param_1->SoftPackageReferences).AllocatorInstance.Data;
  (param_1->SoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).ArrayNum = (param_1->SoftPackageReferences).ArrayNum;
  (this->SoftPackageReferences).ArrayMax = (param_1->SoftPackageReferences).ArrayMax;
  (param_1->SoftPackageReferences).ArrayNum = 0;
  (param_1->SoftPackageReferences).ArrayMax = 0;
  (this->UntrackedSoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UntrackedSoftPackageReferences).AllocatorInstance.Data =
       (param_1->UntrackedSoftPackageReferences).AllocatorInstance.Data;
  (param_1->UntrackedSoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UntrackedSoftPackageReferences).ArrayNum =
       (param_1->UntrackedSoftPackageReferences).ArrayNum;
  (this->UntrackedSoftPackageReferences).ArrayMax =
       (param_1->UntrackedSoftPackageReferences).ArrayMax;
  (param_1->UntrackedSoftPackageReferences).ArrayNum = 0;
  (param_1->UntrackedSoftPackageReferences).ArrayMax = 0;
  return this;
}

// FSavePackageResultStruct @ 14212c1c0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FSavePackageResultStruct * __thiscall
FSavePackageResultStruct::FSavePackageResultStruct
          (FSavePackageResultStruct *this,ESavePackageResult param_1)

{
  this->Result = param_1;
  this->TotalFileSize = 0;
  *(undefined8 *)&this->CookedHash = 0;
  *(undefined8 *)&(this->CookedHash).field_0x8 = 0;
  this->SerializedPackageFlags = 0;
  (this->LinkerSave).Ptr = (FLinkerSave *)0x0;
  (this->SavedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedAssets).ArrayNum = 0;
  (this->SavedAssets).ArrayMax = 0;
  (this->ImportPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportPackages).ArrayNum = 0;
  (this->ImportPackages).ArrayMax = 0;
  (this->SoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).ArrayNum = 0;
  (this->SoftPackageReferences).ArrayMax = 0;
  (this->UntrackedSoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UntrackedSoftPackageReferences).ArrayNum = 0;
  (this->UntrackedSoftPackageReferences).ArrayMax = 0;
  return this;
}

// FSavePackageResultStruct @ 14212c210

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FSavePackageResultStruct * __thiscall
FSavePackageResultStruct::FSavePackageResultStruct
          (FSavePackageResultStruct *this,ESavePackageResult param_1,long64 param_2)

{
  this->Result = param_1;
  *(undefined8 *)&this->CookedHash = 0;
  *(undefined8 *)&(this->CookedHash).field_0x8 = 0;
  this->SerializedPackageFlags = 0;
  (this->LinkerSave).Ptr = (FLinkerSave *)0x0;
  (this->SavedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedAssets).ArrayNum = 0;
  (this->SavedAssets).ArrayMax = 0;
  (this->ImportPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportPackages).ArrayNum = 0;
  (this->ImportPackages).ArrayMax = 0;
  (this->SoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).ArrayNum = 0;
  (this->SoftPackageReferences).ArrayMax = 0;
  (this->UntrackedSoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UntrackedSoftPackageReferences).ArrayNum = 0;
  (this->UntrackedSoftPackageReferences).ArrayMax = 0;
  this->TotalFileSize = param_2;
  return this;
}

// FSavePackageResultStruct @ 14212c260

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FSavePackageResultStruct * __thiscall
FSavePackageResultStruct::FSavePackageResultStruct
          (FSavePackageResultStruct *this,ESavePackageResult param_1,long64 param_2,uint param_3)

{
  this->Result = param_1;
  *(undefined8 *)&this->CookedHash = 0;
  *(undefined8 *)&(this->CookedHash).field_0x8 = 0;
  (this->LinkerSave).Ptr = (FLinkerSave *)0x0;
  (this->SavedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedAssets).ArrayNum = 0;
  (this->SavedAssets).ArrayMax = 0;
  (this->ImportPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportPackages).ArrayNum = 0;
  (this->ImportPackages).ArrayMax = 0;
  (this->SoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).ArrayNum = 0;
  (this->SoftPackageReferences).ArrayMax = 0;
  (this->UntrackedSoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UntrackedSoftPackageReferences).ArrayNum = 0;
  (this->UntrackedSoftPackageReferences).ArrayMax = 0;
  this->TotalFileSize = param_2;
  this->SerializedPackageFlags = param_3;
  return this;
}

// FSavePackageResultStruct @ 14212c2b0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FSavePackageResultStruct * __thiscall
FSavePackageResultStruct::FSavePackageResultStruct
          (FSavePackageResultStruct *this,ESavePackageResult param_1,long64 param_2,uint param_3,
          TPimplPtr<FLinkerSave,0> param_4)

{
  longlong lVar1;
  
  this->Result = param_1;
  this->TotalFileSize = param_2;
  *(undefined8 *)&this->CookedHash = 0;
  *(undefined8 *)&(this->CookedHash).field_0x8 = 0;
  this->SerializedPackageFlags = param_3;
  (this->LinkerSave).Ptr = (FLinkerSave *)0x0;
  (this->SavedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedAssets).ArrayNum = 0;
  (this->SavedAssets).ArrayMax = 0;
  (this->ImportPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportPackages).ArrayNum = 0;
  (this->ImportPackages).ArrayMax = 0;
  (this->SoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).ArrayNum = 0;
  (this->SoftPackageReferences).ArrayMax = 0;
  (this->UntrackedSoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UntrackedSoftPackageReferences).ArrayNum = 0;
  (this->UntrackedSoftPackageReferences).ArrayMax = 0;
  lVar1 = (param_4.Ptr)->_padding_;
  if (lVar1 != 0) {
    (param_4.Ptr)->_padding_ = 0;
    (**(code **)(lVar1 + -0x10))();
  }
  lVar1 = (param_4.Ptr)->_padding_;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  return this;
}

// FSavePackageResultStruct @ 14212c340

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FSavePackageResultStruct * __thiscall
FSavePackageResultStruct::FSavePackageResultStruct(FSavePackageResultStruct *this)

{
  this->Result = Error;
  this->TotalFileSize = 0;
  *(undefined8 *)&this->CookedHash = 0;
  *(undefined8 *)&(this->CookedHash).field_0x8 = 0;
  this->SerializedPackageFlags = 0;
  (this->LinkerSave).Ptr = (FLinkerSave *)0x0;
  (this->SavedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedAssets).ArrayNum = 0;
  (this->SavedAssets).ArrayMax = 0;
  (this->ImportPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportPackages).ArrayNum = 0;
  (this->ImportPackages).ArrayMax = 0;
  (this->SoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).ArrayNum = 0;
  (this->SoftPackageReferences).ArrayMax = 0;
  (this->UntrackedSoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UntrackedSoftPackageReferences).ArrayNum = 0;
  (this->UntrackedSoftPackageReferences).ArrayMax = 0;
  return this;
}

// ~FSavePackageResultStruct @ 14212ca10

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FSavePackageResultStruct::~FSavePackageResultStruct(FSavePackageResultStruct *this)

{
  FScriptContainerElement *pFVar1;
  FLinkerSave *pFVar2;
  
  pFVar1 = (this->UntrackedSoftPackageReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SoftPackageReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImportPackages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAssetData,int>
            ((FAssetData *)(this->SavedAssets).AllocatorInstance.Data,(this->SavedAssets).ArrayNum);
  pFVar1 = (this->SavedAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->LinkerSave).Ptr;
  if (pFVar2 != (FLinkerSave *)0x0) {
    (*(code *)pFVar2[-1].MemoryMappingAlignment)(&pFVar2[-1].MemoryMappingAlignment);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->CookedHash).field_0x8);
  return;
}

// operator= @ 14212ccd0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FSavePackageResultStruct * __thiscall
FSavePackageResultStruct::operator=
          (FSavePackageResultStruct *this,FSavePackageResultStruct *param_1)

{
  TPimplPtr<FLinkerSave,0> *pTVar1;
  TPimplPtr<FLinkerSave,0> *pTVar2;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  FLinkerSave *pFVar6;
  FScriptContainerElement *pFVar7;
  TFuture<FMD5Hash> *pTVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  
  this->Result = param_1->Result;
  this->TotalFileSize = param_1->TotalFileSize;
  pTVar8 = &param_1->CookedHash;
  if (&this->CookedHash != pTVar8) {
    *(undefined8 *)&this->CookedHash = *(undefined8 *)pTVar8;
    *(undefined8 *)pTVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->CookedHash).field_0x8,
               (FSharedReferencer<1> *)&(param_1->CookedHash).field_0x8);
  }
  pTVar1 = &param_1->LinkerSave;
  pTVar2 = &this->LinkerSave;
  this->SerializedPackageFlags = param_1->SerializedPackageFlags;
  if (pTVar1 != pTVar2) {
    pFVar6 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar1->Ptr;
    pTVar1->Ptr = (FLinkerSave *)0x0;
    if (pFVar6 != (FLinkerSave *)0x0) {
      (*(code *)pFVar6[-1].MemoryMappingAlignment)(&pFVar6[-1].MemoryMappingAlignment);
    }
  }
  pTVar3 = &param_1->SavedAssets;
  pTVar4 = &this->SavedAssets;
  if (pTVar4 != pTVar3) {
    DestructItems<FAssetData,int>
              ((FAssetData *)(pTVar4->AllocatorInstance).Data,(this->SavedAssets).ArrayNum);
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SavedAssets).ArrayNum = (param_1->SavedAssets).ArrayNum;
    (this->SavedAssets).ArrayMax = (param_1->SavedAssets).ArrayMax;
    (param_1->SavedAssets).ArrayNum = 0;
    (param_1->SavedAssets).ArrayMax = 0;
  }
  pTVar5 = &param_1->ImportPackages;
  pTVar9 = &this->ImportPackages;
  if (pTVar9 != pTVar5) {
    pFVar7 = (pTVar9->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar9->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ImportPackages).ArrayNum = (param_1->ImportPackages).ArrayNum;
    (this->ImportPackages).ArrayMax = (param_1->ImportPackages).ArrayMax;
    (param_1->ImportPackages).ArrayNum = 0;
    (param_1->ImportPackages).ArrayMax = 0;
  }
  pTVar5 = &param_1->SoftPackageReferences;
  pTVar9 = &this->SoftPackageReferences;
  if (pTVar9 != pTVar5) {
    pFVar7 = (pTVar9->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar9->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SoftPackageReferences).ArrayNum = (param_1->SoftPackageReferences).ArrayNum;
    (this->SoftPackageReferences).ArrayMax = (param_1->SoftPackageReferences).ArrayMax;
    (param_1->SoftPackageReferences).ArrayNum = 0;
    (param_1->SoftPackageReferences).ArrayMax = 0;
  }
  pTVar9 = &param_1->UntrackedSoftPackageReferences;
  pTVar5 = &this->UntrackedSoftPackageReferences;
  if (pTVar5 != pTVar9) {
    pFVar7 = (pTVar5->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UntrackedSoftPackageReferences).ArrayNum =
         (param_1->UntrackedSoftPackageReferences).ArrayNum;
    (this->UntrackedSoftPackageReferences).ArrayMax =
         (param_1->UntrackedSoftPackageReferences).ArrayMax;
    (param_1->UntrackedSoftPackageReferences).ArrayNum = 0;
    (param_1->UntrackedSoftPackageReferences).ArrayMax = 0;
  }
  return this;
}

