// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 6

// ~FOnDemandContainer @ 1445a8af0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandContainer::~FOnDemandContainer(FOnDemandContainer *this)

{
  int iVar1;
  char *pcVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  
  pcVar2 = (this->RelativeUrl).Url.Chars;
  if (pcVar2 != (char *)0x0) {
    piVar4 = (int *)(pcVar2 + -8);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar4);
    }
  }
  DestructItems<UE::IoStore::FOnDemandChunkEntryReferences,int>
            ((FOnDemandChunkEntryReferences *)(this->ChunkEntryReferences).AllocatorInstance.Data,
             (this->ChunkEntryReferences).ArrayNum);
  pFVar3 = (this->ChunkEntryReferences).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  operator_delete__((this->ChunkEntryData).Ptr);
  DestructItems<UE::IoStore::FOnDemandTagSet,int>
            ((FOnDemandTagSet *)(this->TagSets).AllocatorInstance.Data,(this->TagSets).ArrayNum);
  pFVar3 = (this->TagSets).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BlockHashes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BlockSizes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CompressionFormats).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ChunksDirectory).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->MountId).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->EncryptionKeyGuid).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostGroup).Impl.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Header).SharedReferenceCount.ReferenceController);
  return;
}

// FindChunkEntryIndex @ 1445cd760

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

int __thiscall
UE::IoStore::FOnDemandContainer::FindChunkEntryIndex(FOnDemandContainer *this,FIoChunkId *param_1)

{
  int iVar1;
  int iVar2;
  FIoChunkId *pFVar3;
  longlong lVar4;
  FIdentityFunctor local_res8;
  
  iVar1 = AlgoImpl::LowerBoundInternal<FIoChunkId,int,FIoChunkId,FIdentityFunctor,TLess<void>_>
                    ((this->ChunkIds).DataPtr,(this->ChunkIds).ArrayNum,param_1,local_res8,
                     (TLess<void>)local_res8);
  if (iVar1 < (this->ChunkIds).ArrayNum) {
    pFVar3 = TArrayView<FIoChunkId,int>::operator[](&this->ChunkIds,iVar1);
    lVar4 = *(longlong *)pFVar3->Id - *(longlong *)param_1->Id;
    if (lVar4 == 0) {
      lVar4 = (ulonglong)*(uint *)(pFVar3->Id + 8) - (ulonglong)*(uint *)(param_1->Id + 8);
    }
    iVar2 = -1;
    if (lVar4 == 0) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  return -1;
}

// FindOrAddChunkEntryReferences @ 1445cd8a0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandChunkEntryReferences * __thiscall
UE::IoStore::FOnDemandContainer::FindOrAddChunkEntryReferences
          (FOnDemandContainer *this,FOnDemandInternalContentHandle *param_1)

{
  int *piVar1;
  TArray<UE::IoStore::FOnDemandChunkEntryReferences,TSizedDefaultAllocator<32>_> *pTVar2;
  FOnDemandChunkEntryReferences *pFVar3;
  int iVar4;
  FOnDemandChunkEntryReferences *pFVar5;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->ChunkEntryReferences;
  iVar4 = (this->ChunkEntryReferences).ArrayNum;
  pFVar5 = (FOnDemandChunkEntryReferences *)(pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar5 + iVar4;
  while( true ) {
    if ((this->ChunkEntryReferences).ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::IoStore::FOnDemandChunkEntryReferences,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar3) break;
    if ((FOnDemandInternalContentHandle *)pFVar5->ContentHandleId == param_1) {
      return pFVar5;
    }
    pFVar5 = pFVar5 + 1;
  }
  iVar4 = (this->ChunkEntryReferences).ArrayNum;
  piVar1 = &(this->ChunkEntryReferences).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ChunkEntryReferences).ArrayNum = iVar4 + 1;
  pFVar3 = (FOnDemandChunkEntryReferences *)
           ((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 0x28);
  DefaultConstructItems<UE::IoStore::FOnDemandChunkEntryReferences,int>(pFVar3,1);
  pFVar3->ContentHandleId = (ulong64)param_1;
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
            (&pFVar3->Indices,(this->ChunkEntries).ArrayNum,false);
  return pFVar3;
}

// GetReferencedChunkEntries @ 1445d6e90

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TBitArray<FDefaultBitArrayAllocator> * __thiscall
UE::IoStore::FOnDemandContainer::GetReferencedChunkEntries
          (FOnDemandContainer *this,TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  <lambda_1> local_res10 [8];
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  __return_storage_ptr__->NumBits = 0;
  __return_storage_ptr__->MaxBits = 0x80;
  iVar2 = (this->ChunkEntryReferences).ArrayNum;
  pFVar6 = (this->ChunkEntryReferences).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->ChunkEntryReferences).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::IoStore::FOnDemandChunkEntryReferences_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (*(int *)(pFVar6 + 0x20) != (this->ChunkEntries).ArrayNum) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Refs.Indices.Num() == ChunkEntries.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.h"
                         ,0xb4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar3)();
        return pTVar5;
      }
    }
    Core::Private::
    BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseOR<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar6 + 8),__return_storage_ptr__,MaxSize,
               local_res10);
    pFVar6 = pFVar6 + 0x28;
  }
  return __return_storage_ptr__;
}

// GetTestUrl @ 1445d8bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FAnsiString * __thiscall
UE::IoStore::FOnDemandContainer::GetTestUrl
          (FOnDemandContainer *this,FAnsiString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  TStringBuilderBase<char> *this_00;
  char *pcVar3;
  int iVar4;
  ulong64 uVar5;
  int iVar6;
  undefined1 auStack_1d8 [32];
  TArrayView<unsigned_char_const_,int> local_1b8;
  TStringBuilderBase<char> local_1a8;
  uchar local_188 [41];
  char local_15f [7];
  TStringBuilderBase<char> local_158;
  char local_138 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if ((this->ChunkEntries).ArrayNum == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    local_1a8.Base = (char *)local_188;
    local_1a8.CurPos = (char *)local_188;
    local_1a8.End = local_15f;
    local_1a8.bIsDynamic = false;
    local_1a8.bIsExternal = false;
    local_1b8.DataPtr =
         (uchar *)TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
                            (&this->ChunkEntries,0);
    local_1b8.ArrayNum = 0x14;
    String::BytesToHexLower(&local_1b8,&local_1a8);
    local_158.Base = local_138;
    local_158.bIsDynamic = false;
    local_158.bIsExternal = false;
    local_158.CurPos = local_138;
    local_158.End = (char *)local_38;
    pvVar2 = FGenericPlatformString::Memcpy(local_138,&s__,1);
    pFVar1 = (this->ChunksDirectory).Data.AllocatorInstance.Data;
    local_158.CurPos = (char *)((longlong)pvVar2 + 1);
    iVar4 = (this->ChunksDirectory).Data.ArrayNum;
    iVar6 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    uVar5 = (ulong64)iVar6;
    if (local_158.End < local_158.CurPos + uVar5) {
      TStringBuilderBase<char>::Extend(&local_158,uVar5);
    }
    if (iVar6 != 0) {
      pvVar2 = FGenericPlatformString::Memcpy(local_158.CurPos,pFVar1,uVar5);
      local_158.CurPos = (char *)((longlong)pvVar2 + uVar5);
    }
    if (local_158.End < local_158.CurPos + 1) {
      TStringBuilderBase<char>::Extend(&local_158,1);
    }
    pvVar2 = FGenericPlatformString::Memcpy(local_158.CurPos,&s__,1);
    local_158.CurPos = (char *)((longlong)pvVar2 + 1);
    iVar6 = (int)local_1a8.CurPos - (int)local_1a8.Base;
    if (2 < (int)local_1a8.CurPos - (int)local_1a8.Base) {
      iVar6 = 2;
    }
    local_1b8.DataPtr = (uchar *)local_1a8.Base;
    iVar4 = 0;
    if (0 < iVar6) {
      iVar4 = iVar6;
    }
    local_1b8.ArrayNum = iVar4;
    this_00 = operator<<<char,TStringView<char>_>(&local_158,(TStringView<char> *)&local_1b8);
    pcVar3 = this_00->CurPos;
    if (this_00->End < pcVar3 + 1) {
      TStringBuilderBase<char>::Extend(this_00,1);
      pcVar3 = this_00->CurPos;
    }
    pvVar2 = FGenericPlatformString::Memcpy(pcVar3,&s__,1);
    pcVar3 = local_1a8.Base;
    this_00->CurPos = (char *)((longlong)pvVar2 + 1);
    iVar6 = (int)local_1a8.CurPos - (int)local_1a8.Base;
    uVar5 = (ulong64)iVar6;
    if (this_00->End < (char *)((longlong)pvVar2 + 1) + uVar5) {
      TStringBuilderBase<char>::Extend(this_00,uVar5);
    }
    if (iVar6 != 0) {
      pvVar2 = FGenericPlatformString::Memcpy(this_00->CurPos,pcVar3,uVar5);
      this_00->CurPos = (char *)((longlong)pvVar2 + uVar5);
    }
    local_1b8.ArrayNum = 8;
    local_1b8.DataPtr = ".iochunk";
    operator<<<char,TStringView<char>_>(this_00,(TStringView<char> *)&local_1b8);
    if (local_158.End < local_158.CurPos + 1) {
      TStringBuilderBase<char>::Extend(&local_158,1);
    }
    *local_158.CurPos = '\0';
    FAnsiString::FAnsiString(__return_storage_ptr__,local_158.Base);
    TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_158);
    TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_1a8);
  }
  return __return_storage_ptr__;
}

// UniqueName @ 14460a870

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FString * __thiscall
UE::IoStore::FOnDemandContainer::UniqueName
          (FOnDemandContainer *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%.*s-%.*s");
  return __return_storage_ptr__;
}

