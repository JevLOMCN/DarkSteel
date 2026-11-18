// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 6

// BlockHashes @ 1445b5200

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TArrayView<unsigned_int_const_,int> * __thiscall
UE::IoStore::FOnDemandChunkInfo::BlockHashes
          (FOnDemandChunkInfo *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  FOnDemandContainer *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TArrayView<unsigned_int_const_,int> *pTVar7;
  
  if ((this->SharedContainer).Object == (FOnDemandContainer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pFVar3 = (this->SharedContainer).Object;
  if ((pFVar3->BlockHashes).ArrayNum == 0) {
    __return_storage_ptr__->DataPtr = (uint *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  uVar1 = this->Entry->BlockCount;
  if (pFVar3 == (FOnDemandContainer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar5)();
      return pTVar7;
    }
  }
  uVar2 = this->Entry->BlockOffset;
  pFVar4 = (((this->SharedContainer).Object)->BlockHashes).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = uVar1;
  __return_storage_ptr__->DataPtr = (uint *)(pFVar4 + (ulonglong)uVar2 * 4);
  if ((int)uVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar5)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// BlockSize @ 1445b5300

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

uint __thiscall UE::IoStore::FOnDemandChunkInfo::BlockSize(FOnDemandChunkInfo *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->SharedContainer).Object != (FOnDemandContainer *)0x0) {
    return ((this->SharedContainer).Object)->BlockSize;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return ((this->SharedContainer).Object)->BlockSize;
}

// Blocks @ 1445b5360

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TArrayView<unsigned_int_const_,int> * __thiscall
UE::IoStore::FOnDemandChunkInfo::Blocks
          (FOnDemandChunkInfo *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__)

{
  uint uVar1;
  FOnDemandChunkEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<unsigned_int_const_,int> *pTVar5;
  
  uVar1 = this->Entry->BlockCount;
  if ((this->SharedContainer).Object == (FOnDemandContainer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_int_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = this->Entry;
  __return_storage_ptr__->ArrayNum = uVar1;
  __return_storage_ptr__->DataPtr =
       (uint *)((((this->SharedContainer).Object)->BlockSizes).AllocatorInstance.Data +
               (ulonglong)pFVar2->BlockOffset * 4);
  if ((int)uVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_int_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// CompressionFormat @ 1445bd240

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FName __thiscall UE::IoStore::FOnDemandChunkInfo::CompressionFormat(FOnDemandChunkInfo *this)

{
  byte bVar1;
  FOnDemandContainer *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName FVar5;
  FName in_RDX;
  
  if ((this->SharedContainer).Object == (FOnDemandContainer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FName)(*pcVar3)();
      return FVar5;
    }
  }
  pFVar2 = (this->SharedContainer).Object;
  bVar1 = this->Entry->CompressionFormatIndex;
  if ((pFVar2->CompressionFormats).ArrayNum <= (int)(uint)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FName)(*pcVar3)();
      return FVar5;
    }
  }
  *(undefined8 *)in_RDX =
       *(undefined8 *)((pFVar2->CompressionFormats).AllocatorInstance.Data + (ulonglong)bVar1 * 8);
  return in_RDX;
}

// Find @ 1445cd590

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandChunkInfo * __cdecl
UE::IoStore::FOnDemandChunkInfo::Find
          (FOnDemandChunkInfo *__return_storage_ptr__,
          TSharedPtr<UE::IoStore::FOnDemandContainer,1> *param_1,FIoChunkId *param_2)

{
  FOnDemandContainer *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FOnDemandChunkInfo *pFVar6;
  FOnDemandChunkEntry *pFVar7;
  
  if (param_1->Object == (FOnDemandContainer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.h"
                       ,0x125,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FOnDemandChunkInfo *)(*pcVar3)();
      return pFVar6;
    }
    if ((param_1->Object == (FOnDemandContainer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FOnDemandChunkInfo *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar1 = param_1->Object;
  iVar5 = FOnDemandContainer::FindChunkEntryIndex(pFVar1,param_2);
  if (iVar5 != -1) {
    pFVar7 = TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
                       (&pFVar1->ChunkEntries,iVar5);
    if (pFVar7 != (FOnDemandChunkEntry *)0x0) {
      pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
      pFVar1 = param_1->Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        (__return_storage_ptr__->SharedContainer).Object = pFVar1;
        (__return_storage_ptr__->SharedContainer).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        __return_storage_ptr__->Entry = pFVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        (__return_storage_ptr__->SharedContainer).Object = pFVar1;
        (__return_storage_ptr__->SharedContainer).SharedReferenceCount.ReferenceController = pTVar2;
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        __return_storage_ptr__->Entry = pFVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      goto LAB_1445cd67e;
    }
  }
  (__return_storage_ptr__->SharedContainer).Object = (FOnDemandContainer *)0x0;
  (__return_storage_ptr__->SharedContainer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Entry = &FOnDemandChunkEntry::Null;
LAB_1445cd67e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetUrl @ 1445d90a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandChunkInfo::GetUrl(FOnDemandChunkInfo *this,TStringBuilderBase<char> *param_1)

{
  FOnDemandContainer *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  TStringBuilderBase<char> *pTVar5;
  char *pcVar6;
  int iVar7;
  ulong64 uVar8;
  undefined1 auStack_e8 [32];
  FOnDemandChunkEntry *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TStringView<char> local_b8;
  TStringView<char> local_a8;
  TStringView<char> local_98;
  TArrayView<unsigned_char_const_,int> local_88;
  TStringBuilderBase<char> local_78;
  char local_58 [41];
  char local_2f [7];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_78.Base = local_58;
  uStack_c0 = 0x14;
  local_78.CurPos = local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  local_78.End = local_2f;
  local_c8 = this->Entry;
  local_88._12_4_ = uStack_bc;
  local_88.ArrayNum = 0x14;
  local_88.DataPtr = (uchar *)local_c8;
  String::BytesToHexLower(&local_88,&local_78);
  param_1->CurPos = param_1->Base;
  if (param_1->End < param_1->Base + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  pvVar4 = FGenericPlatformString::Memcpy(param_1->CurPos,&s__,1);
  param_1->CurPos = (char *)((longlong)pvVar4 + 1);
  if ((this->SharedContainer).Object == (FOnDemandContainer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SharedContainer).Object;
  local_b8.DataPtr = (char *)(pFVar1->ChunksDirectory).Data.AllocatorInstance.Data;
  iVar7 = (pFVar1->ChunksDirectory).Data.ArrayNum;
  local_b8.Size = iVar7 + -1;
  if (iVar7 == 0) {
    local_b8.Size = 0;
  }
  pTVar5 = operator<<<char,TStringView<char>_>(param_1,&local_b8);
  if (pTVar5->End < pTVar5->CurPos + 1) {
    TStringBuilderBase<char>::Extend(pTVar5,1);
  }
  pvVar4 = FGenericPlatformString::Memcpy(pTVar5->CurPos,&s__,1);
  pTVar5->CurPos = (char *)((longlong)pvVar4 + 1);
  iVar7 = (int)local_78.CurPos - (int)local_78.Base;
  if (2 < (int)local_78.CurPos - (int)local_78.Base) {
    iVar7 = 2;
  }
  local_a8.DataPtr = local_78.Base;
  local_a8.Size = 0;
  if (0 < iVar7) {
    local_a8.Size = iVar7;
  }
  pTVar5 = operator<<<char,TStringView<char>_>(pTVar5,&local_a8);
  pcVar6 = pTVar5->CurPos;
  if (pTVar5->End < pcVar6 + 1) {
    TStringBuilderBase<char>::Extend(pTVar5,1);
    pcVar6 = pTVar5->CurPos;
  }
  pvVar4 = FGenericPlatformString::Memcpy(pcVar6,&s__,1);
  pcVar6 = local_78.Base;
  pTVar5->CurPos = (char *)((longlong)pvVar4 + 1);
  iVar7 = (int)local_78.CurPos - (int)local_78.Base;
  uVar8 = (ulong64)iVar7;
  if (pTVar5->End < (char *)((longlong)pvVar4 + 1) + uVar8) {
    TStringBuilderBase<char>::Extend(pTVar5,uVar8);
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(pTVar5->CurPos,pcVar6,uVar8);
    pTVar5->CurPos = (char *)((longlong)pvVar4 + uVar8);
  }
  local_98.Size = 8;
  local_98.DataPtr = ".iochunk";
  operator<<<char,TStringView<char>_>(pTVar5,&local_98);
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_78);
  return;
}

