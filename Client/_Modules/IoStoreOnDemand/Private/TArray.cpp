// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 16

// HeapPop<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)> @ 14459b510

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_>::
HeapPop<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
          (TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_> *this,
          FHttpRequest **param_1,_func___cdecl_bool_FHttpRequest_ptr_FHttpRequest_ptr *param_2,
          EAllowShrinking param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((this->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_1 = *(FHttpRequest **)(this->AllocatorInstance).Data;
  if ((this->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar8 = this->ArrayNum + -1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove(pFVar1,pFVar1 + (longlong)(this->ArrayNum - iVar8) * 8,(longlong)iVar8 << 3);
  }
  iVar8 = this->ArrayNum + -1;
  this->ArrayNum = iVar8;
  if (param_3 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar8,&this->ArrayMax);
  }
  iVar8 = this->ArrayNum;
  pFVar1 = (this->AllocatorInstance).Data;
  iVar7 = 0;
  if (1 < iVar8) {
    do {
      iVar4 = iVar7 * 2;
      iVar6 = iVar4 + 1;
      if (iVar4 + 2 < iVar8) {
        bVar5 = (*param_2)(*(FHttpRequest **)(pFVar1 + (longlong)iVar6 * 8),
                           *(FHttpRequest **)(pFVar1 + (longlong)iVar4 * 8 + 0x10));
        if (bVar5) {
          iVar6 = iVar4;
        }
        iVar6 = iVar6 + 1;
      }
      bVar5 = (*param_2)(*(FHttpRequest **)(pFVar1 + (longlong)iVar6 * 8),
                         *(FHttpRequest **)(pFVar1 + (longlong)iVar7 * 8));
      if (!bVar5) {
        return;
      }
      uVar2 = *(undefined8 *)(pFVar1 + (longlong)iVar7 * 8);
      *(undefined8 *)(pFVar1 + (longlong)iVar7 * 8) = *(undefined8 *)(pFVar1 + (longlong)iVar6 * 8);
      *(undefined8 *)(pFVar1 + (longlong)iVar6 * 8) = uVar2;
      iVar7 = iVar6;
    } while (iVar6 * 2 + 1 < iVar8);
  }
  return;
}

// HeapPush<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)> @ 14459b690

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_>::
HeapPush<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
          (TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_> *this,
          FHttpRequest **param_1,_func___cdecl_bool_FHttpRequest_ptr_FHttpRequest_ptr *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  pFVar2 = (this->AllocatorInstance).Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)this->ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar6 + 1;
  *(FHttpRequest **)((this->AllocatorInstance).Data + (longlong)iVar6 * 8) = *param_1;
  pFVar2 = (this->AllocatorInstance).Data;
  iVar6 = this->ArrayNum + -1;
  if (0 < iVar6) {
    do {
      iVar7 = (iVar6 + -1) / 2;
      pFVar1 = pFVar2 + (longlong)iVar6 * 8;
      bVar5 = (*param_2)(*(FHttpRequest **)pFVar1,*(FHttpRequest **)(pFVar2 + (longlong)iVar7 * 8));
      if (!bVar5) {
        return iVar6;
      }
      uVar3 = *(undefined8 *)pFVar1;
      *(undefined8 *)pFVar1 = *(undefined8 *)(pFVar2 + (longlong)iVar7 * 8);
      *(undefined8 *)(pFVar2 + (longlong)iVar7 * 8) = uVar3;
      iVar6 = iVar7;
    } while (0 < iVar7);
    return iVar7;
  }
  return iVar6;
}

// HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)> @ 14459b7b0

int __thiscall
TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
          (TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>
           *this,FRequest **param_1,_func___cdecl_bool_FRequest_ptr_FRequest_ptr *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  pFVar2 = (this->AllocatorInstance).Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)this->ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar6 + 1;
  *(FRequest **)((this->AllocatorInstance).Data + (longlong)iVar6 * 8) = *param_1;
  pFVar2 = (this->AllocatorInstance).Data;
  iVar6 = this->ArrayNum + -1;
  if (0 < iVar6) {
    do {
      iVar7 = (iVar6 + -1) / 2;
      pFVar1 = pFVar2 + (longlong)iVar6 * 8;
      bVar5 = (*param_2)(*(FRequest **)pFVar1,*(FRequest **)(pFVar2 + (longlong)iVar7 * 8));
      if (!bVar5) {
        return iVar6;
      }
      uVar3 = *(undefined8 *)pFVar1;
      *(undefined8 *)pFVar1 = *(undefined8 *)(pFVar2 + (longlong)iVar7 * 8);
      *(undefined8 *)(pFVar2 + (longlong)iVar7 * 8) = uVar3;
      iVar6 = iVar7;
    } while (0 < iVar7);
    return iVar7;
  }
  return iVar6;
}

// HeapRemoveAt<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)> @ 14459b8d0

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_>::
HeapRemoveAt<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
          (TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_> *this,
          int param_1,_func___cdecl_bool_FHttpRequest_ptr_FHttpRequest_ptr *param_2,
          EAllowShrinking param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = 0;
  if (param_1 + 1 <= this->ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar11 = this->ArrayNum + ~param_1;
  if (1 < iVar11) {
    iVar11 = 1;
  }
  if (iVar11 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 8,pFVar2 + (longlong)(this->ArrayNum - iVar11) * 8,
            (longlong)iVar11 << 3);
  }
  iVar11 = this->ArrayNum + -1;
  this->ArrayNum = iVar11;
  if (param_3 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar11,&this->ArrayMax);
  }
  iVar11 = this->ArrayNum;
  pFVar2 = (this->AllocatorInstance).Data;
  iVar6 = param_1;
  while (iVar6 * 2 + 1 < iVar11) {
    iVar5 = iVar6 * 2;
    iVar9 = iVar5 + 1;
    if (iVar5 + 2 < iVar11) {
      bVar7 = (*param_2)(*(FHttpRequest **)(pFVar2 + (longlong)iVar9 * 8),
                         *(FHttpRequest **)(pFVar2 + (longlong)iVar5 * 8 + 0x10));
      if (bVar7) {
        iVar9 = iVar5;
      }
      iVar9 = iVar9 + 1;
    }
    bVar7 = (*param_2)(*(FHttpRequest **)(pFVar2 + (longlong)iVar9 * 8),
                       *(FHttpRequest **)(pFVar2 + (longlong)iVar6 * 8));
    if (!bVar7) break;
    uVar3 = *(undefined8 *)(pFVar2 + (longlong)iVar6 * 8);
    *(undefined8 *)(pFVar2 + (longlong)iVar6 * 8) = *(undefined8 *)(pFVar2 + (longlong)iVar9 * 8);
    *(undefined8 *)(pFVar2 + (longlong)iVar9 * 8) = uVar3;
    iVar6 = iVar9;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  uVar10 = this->ArrayNum - 1;
  if (param_1 < (int)uVar10) {
    uVar10 = param_1;
  }
  while( true ) {
    if ((int)uVar10 < 1) {
      return;
    }
    uVar8 = (int)(uVar10 - 1) / 2;
    pFVar1 = pFVar2 + (ulonglong)uVar10 * 8;
    bVar7 = (*param_2)(*(FHttpRequest **)pFVar1,
                       *(FHttpRequest **)(pFVar2 + (longlong)(int)uVar8 * 8));
    if (!bVar7) break;
    uVar3 = *(undefined8 *)pFVar1;
    *(undefined8 *)pFVar1 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar8 * 8);
    *(undefined8 *)(pFVar2 + (longlong)(int)uVar8 * 8) = uVar3;
    uVar10 = uVar8;
  }
  return;
}

// AddZeroed_GetRef @ 1445b3650

FEntry * __thiscall
TArray<UE::IoStore::FCasJournal::FEntry,TSizedDefaultAllocator<32>_>::AddZeroed_GetRef
          (TArray<UE::IoStore::FCasJournal::FEntry,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar3 + 1;
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)iVar3 * 0x18;
  *(undefined8 *)pFVar1 = 0;
  *(undefined8 *)(pFVar1 + 8) = 0;
  pFVar2 = pFVar2 + (longlong)iVar3 * 0x18;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  return (FEntry *)pFVar2;
}

// Empty @ 1445c9af0

void __thiscall
TArray<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TSizedDefaultAllocator<32>_> *this
          ,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1445c9b40

void __thiscall
TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Pop @ 1445e9d80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FItem * __thiscall
TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_>::Pop
          (TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_> *this,
          FItem *__return_storage_ptr__,EAllowShrinking param_1)

{
  int *piVar1;
  int iVar2;
  ulong64 uVar3;
  BufCore *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FItem *pFVar7;
  FScriptContainerElement *pFVar8;
  
  if (this->ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = this->ArrayNum;
  pFVar8 = (this->AllocatorInstance).Data;
  uVar3 = *(ulong64 *)(pFVar8 + (longlong)iVar6 * 0x10 + -0x10);
  (__return_storage_ptr__->Data).CorePtr.Reference = (BufCore *)0x0;
  __return_storage_ptr__->Key = uVar3;
  (__return_storage_ptr__->Data).CorePtr.Reference =
       *(BufCore **)&pFVar8[(longlong)iVar6 * 0x10 + -8].field_0x0;
  *(undefined8 *)(pFVar8 + (longlong)iVar6 * 0x10 + -8) = 0;
  iVar6 = this->ArrayNum;
  pFVar8 = (this->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  this_00 = *(BufCore **)(pFVar8 + -8);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  iVar6 = this->ArrayNum - iVar6;
  if (iVar6 != 0) {
    memmove(pFVar8 + -0x10,pFVar8,(longlong)iVar6 << 4);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return __return_storage_ptr__;
}

// RemoveAtImpl @ 1445f5fd0

void __thiscall
TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FItem *_Dst;
  
  _Dst = (FItem *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1445f6050

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1445f60d0

void __thiscall
TArray<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
  *_Dst;
  ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
  FVar1;
  int iVar2;
  ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
  FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
           )this;
  if (FVar1 != (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                )0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
          *)((longlong)FVar3 + (longlong)param_1 * 8);
  DestructItems<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>,int>
            (_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 1445f6150

void __thiscall
TArray<UE::IoStore::FOnDemandChunkEntryReferences,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<UE::IoStore::FOnDemandChunkEntryReferences,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (*(void **)(pFVar1 + (longlong)param_1 * 0x28 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + (longlong)param_1 * 0x28 + 0x18));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x28,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x28,
            (longlong)iVar2 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 1445f61e0

void __thiscall
TArray<UE::IoStore::FMultiEndpointHttpClient::FRequest,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<UE::IoStore::FMultiEndpointHttpClient::FRequest,TSizedDefaultAllocator<32>_>
                 *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRequest *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (FRequest *)(pFVar1 + (longlong)param_1 * 0xc0);
  DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0xc0,(longlong)iVar2 * 0xc0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 1445f6280

void __thiscall
TArray<TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  TDefaultDelete<UE::IoStore::JournaledCache::FCache>::operator()
            ((TDefaultDelete<UE::IoStore::JournaledCache::FCache> *)(pFVar1 + (longlong)param_1 * 8)
             ,*(FCache **)(pFVar1 + (longlong)param_1 * 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove((TDefaultDelete<UE::IoStore::JournaledCache::FCache> *)(pFVar1 + (longlong)param_1 * 8),
            pFVar1 + (longlong)(this->ArrayNum - iVar2) * 8,(longlong)iVar2 << 3);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSingleSwap @ 1445f6970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
RemoveSingleSwap(TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>
                 *this,FRequest **param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar7 = pFVar1;
    do {
      if (*(FRequest **)pFVar7 == *param_1) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar5 = 0;
        if ((int)(uVar6 + 1) <= this->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar4 = this->ArrayNum + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar6 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar4) * 8,
                  (longlong)iVar4 << 3);
        }
        iVar4 = this->ArrayNum + -1;
        this->ArrayNum = iVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
        }
        return 1;
      }
      pFVar7 = pFVar7 + 8;
    } while (pFVar7 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return 0;
}

// SetNumZeroed @ 1445ff290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::IoStore::FCasJournal::FEntry,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<UE::IoStore::FCasJournal::FEntry,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x18,0,
           (longlong)(param_1 - iVar5) * 0x18);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x18,(longlong)iVar5 * 0x18);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

