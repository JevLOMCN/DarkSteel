// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// FGroomCacheProcessor @ 14dfedd90

FGroomCacheProcessor * __thiscall
FGroomCacheProcessor::FGroomCacheProcessor
          (FGroomCacheProcessor *this,EGroomCacheType param_1,EGroomCacheAttributes param_2)

{
  this->Attributes = param_2;
  (this->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).ArrayNum = 0;
  (this->Chunks).ArrayMax = 0;
  this->Type = param_1;
  return this;
}

// AddGroomSample @ 14dff7d90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FGroomCacheProcessor::AddGroomSample
          (FGroomCacheProcessor *this,
          TArray<FGroomCacheInputData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  void *_Dst;
  TArray<FGroomCacheInputData,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined7 uVar4;
  size_t _Size;
  FScriptContainerElement *pFVar5;
  FBulkData *this_00;
  void *local_e8;
  undefined8 local_e0;
  FGroomCacheAnimationData local_d8;
  FArchiveState local_b8;
  undefined8 local_28;
  void **local_20;
  undefined8 local_18;
  
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  pTVar3 = param_1;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_20 = &local_e8;
  uVar4 = (undefined7)((ulonglong)pTVar3 >> 8);
  local_18 = 0;
  FArchiveState::SetIsSaving(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,CONCAT71(uVar4,1));
  local_b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FGroomCacheAnimationData::FGroomCacheAnimationData
            (&local_d8,param_1,0,this->Type,this->Attributes);
  FGroomCacheAnimationData::Serialize(&local_d8,(FArchive *)&local_b8);
  iVar2 = (this->Chunks).ArrayNum;
  piVar1 = &(this->Chunks).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Chunks).ArrayNum = iVar2 + 1;
  pFVar5 = (this->Chunks).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  DefaultConstructItems<FGroomCacheChunk,int>(pFVar5,1);
  _Size = (size_t)(int)local_e0;
  *(int *)pFVar5 = (int)local_e0;
  *(int *)(pFVar5 + 4) = (this->Chunks).ArrayNum + -1;
  this_00 = (FBulkData *)(pFVar5 + 8);
  FBulkData::Lock(this_00,2);
  _Dst = FBulkData::Realloc(this_00,_Size,1);
  memcpy(_Dst,local_e8,_Size);
  FBulkData::Unlock(this_00);
  DestructItems<FGroomCacheGroupData,int>
            ((FGroomCacheGroupData *)local_d8.GroupsData.AllocatorInstance.Data,
             local_d8.GroupsData.ArrayNum);
  if ((FGroomCacheGroupData *)local_d8.GroupsData.AllocatorInstance.Data !=
      (FGroomCacheGroupData *)0x0) {
    FMemory::Free(local_d8.GroupsData.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_b8);
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}

// TransferChunks @ 14e02ab30

void __thiscall
FGroomCacheProcessor::TransferChunks(FGroomCacheProcessor *this,UGroomCache *param_1)

{
  TArray<FGroomCacheChunk,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = &param_1->Chunks;
  if ((FGroomCacheProcessor *)pTVar1 != this) {
    DestructItems<FGroomCacheChunk,int>
              ((FGroomCacheChunk *)(pTVar1->AllocatorInstance).Data,(param_1->Chunks).ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (this->Chunks).AllocatorInstance.Data;
    (this->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Chunks).ArrayNum = (this->Chunks).ArrayNum;
    (param_1->Chunks).ArrayMax = (this->Chunks).ArrayMax;
    (this->Chunks).ArrayNum = 0;
    (this->Chunks).ArrayMax = 0;
  }
  return;
}

