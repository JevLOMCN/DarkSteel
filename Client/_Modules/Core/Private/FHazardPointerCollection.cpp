// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Grow<1> @ 14150e0c0

FHazardRecord * __thiscall FHazardPointerCollection::Grow<1>(FHazardPointerCollection *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FHazardPointerCollection::FHazardRecordChunk_*,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<unsigned_int> aVar3;
  longlong lVar4;
  atomic<FHazardPointerCollection::FHazardRecordChunk_*> aVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int iVar8;
  FHazardRecord *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  atomic<FHazardPointerCollection::FHazardRecordChunk_*> aVar12;
  FHazardRecordChunk *pFVar13;
  bool bVar14;
  FHazardRecordChunk *local_28 [2];
  
  aVar3 = this->TotalNumHazardRecords;
  lpCriticalSection = &this->HazardRecordBlocksCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->TotalNumHazardRecords == aVar3) {
    aVar12 = (this->Head).Next;
    aVar5 = (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)this;
    while (aVar12 != (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)0x0) {
      aVar5 = *(atomic<FHazardPointerCollection::FHazardRecordChunk_*> *)((longlong)aVar5 + 0x1000);
      aVar12 = *(atomic<FHazardPointerCollection::FHazardRecordChunk_*> *)((longlong)aVar5 + 0x1000)
      ;
    }
    pFVar13 = FMemory::Malloc(0x1080,0x80);
    local_28[0] = (FHazardRecordChunk *)0x0;
    if (pFVar13 != (FHazardRecordChunk *)0x0) {
      memset(pFVar13,0,0x1080);
      local_28[0] = FHazardRecordChunk::FHazardRecordChunk(pFVar13);
    }
    local_28[0]->Records[0].Hazard = (atomic<unsigned___int64>)0x0;
    if ((*(longlong *)((longlong)aVar5 + 0x1000) != 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("lst->Next.load(std::memory_order_acquire) == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\Containers\\HazardPointer.cpp"
                            ,0x29,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FHazardRecord *)(*pcVar7)();
      return pFVar9;
    }
    *(FHazardRecordChunk **)((longlong)aVar5 + 0x1000) = local_28[0];
    LOCK();
    this->TotalNumHazardRecords = (atomic<unsigned_int>)((int)this->TotalNumHazardRecords + 0x20);
    UNLOCK();
    pTVar2 = &this->HazardRecordBlocks;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 <
         pFVar6 + (longlong)(this->HazardRecordBlocks).ArrayMax * 8)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FHazardRecord *)(*pcVar7)();
      return pFVar9;
    }
    iVar8 = (this->HazardRecordBlocks).ArrayNum;
    piVar1 = &(this->HazardRecordBlocks).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    (this->HazardRecordBlocks).ArrayNum = iVar8 + 1;
    *(FHazardRecordChunk **)(pFVar6 + (longlong)iVar8 * 8) = local_28[0];
    pFVar13 = local_28[0];
  }
  else {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(uint *)(lVar4 + 0xbc) & 1) == 0) {
      *(uint *)(lVar4 + 0xbc) = *(uint *)(lVar4 + 0xbc) | 1;
      LOCK();
      UNLOCK();
      uVar10 = ((uint)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<1>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                      ::__l2::counter >> 0x10 ^
               (uint)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<1>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                     ::__l2::counter) * 0x45d9f3b;
      uVar10 = (uVar10 >> 0x10 ^ uVar10) * 0x45d9f3b;
      `public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<1>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
      ::__l2::counter =
           (atomic<unsigned_int>)
           ((int)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<1>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                 ::__l2::counter + 1);
      *(uint *)(lVar4 + 0xb8) = uVar10 >> 0x10 ^ uVar10;
    }
    aVar12 = (this->Head).Next;
    if (aVar12 != (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)0x0) {
      uVar11 = 0;
      do {
        pFVar13 = (FHazardRecordChunk *)
                  ((ulonglong)(*(int *)(lVar4 + 0xb8) + (int)uVar11 & 0x1f) * 0x80 +
                  (longlong)aVar12);
        LOCK();
        bVar14 = pFVar13->Records[0].Hazard == (atomic<unsigned___int64>)0xffffffffffffffff;
        if (bVar14) {
          pFVar13->Records[0].Hazard = (atomic<unsigned___int64>)0x0;
        }
        UNLOCK();
        if (bVar14) goto LAB_14150e32a;
        uVar11 = uVar11 + 1;
      } while ((uVar11 < 0x20) ||
              (aVar12 = *(atomic<FHazardPointerCollection::FHazardRecordChunk_*> *)
                         ((longlong)aVar12 + 0x1000), uVar11 = 0,
              aVar12 != (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)0x0));
    }
    pFVar13 = (FHazardRecordChunk *)Grow<1>(this);
  }
LAB_14150e32a:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar13->Records;
}

// Grow<0> @ 14150e360

FHazardRecord * __thiscall FHazardPointerCollection::Grow<0>(FHazardPointerCollection *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FHazardPointerCollection::FHazardRecordChunk_*,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<unsigned_int> aVar3;
  longlong lVar4;
  atomic<FHazardPointerCollection::FHazardRecordChunk_*> aVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int iVar8;
  FHazardRecord *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  atomic<FHazardPointerCollection::FHazardRecordChunk_*> aVar12;
  FHazardRecordChunk *pFVar13;
  bool bVar14;
  FHazardRecordChunk *local_28 [2];
  
  aVar3 = this->TotalNumHazardRecords;
  lpCriticalSection = &this->HazardRecordBlocksCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->TotalNumHazardRecords == aVar3) {
    aVar12 = (this->Head).Next;
    aVar5 = (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)this;
    while (aVar12 != (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)0x0) {
      aVar5 = *(atomic<FHazardPointerCollection::FHazardRecordChunk_*> *)((longlong)aVar5 + 0x1000);
      aVar12 = *(atomic<FHazardPointerCollection::FHazardRecordChunk_*> *)((longlong)aVar5 + 0x1000)
      ;
    }
    pFVar13 = FMemory::Malloc(0x1080,0x80);
    local_28[0] = (FHazardRecordChunk *)0x0;
    if (pFVar13 != (FHazardRecordChunk *)0x0) {
      memset(pFVar13,0,0x1080);
      local_28[0] = FHazardRecordChunk::FHazardRecordChunk(pFVar13);
    }
    local_28[0]->Records[0].Hazard = (atomic<unsigned___int64>)0x0;
    if ((*(longlong *)((longlong)aVar5 + 0x1000) != 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("lst->Next.load(std::memory_order_acquire) == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\Containers\\HazardPointer.cpp"
                            ,0x29,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FHazardRecord *)(*pcVar7)();
      return pFVar9;
    }
    *(FHazardRecordChunk **)((longlong)aVar5 + 0x1000) = local_28[0];
    LOCK();
    this->TotalNumHazardRecords = (atomic<unsigned_int>)((int)this->TotalNumHazardRecords + 0x20);
    UNLOCK();
    pTVar2 = &this->HazardRecordBlocks;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 <
         pFVar6 + (longlong)(this->HazardRecordBlocks).ArrayMax * 8)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FHazardRecord *)(*pcVar7)();
      return pFVar9;
    }
    iVar8 = (this->HazardRecordBlocks).ArrayNum;
    piVar1 = &(this->HazardRecordBlocks).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    (this->HazardRecordBlocks).ArrayNum = iVar8 + 1;
    *(FHazardRecordChunk **)(pFVar6 + (longlong)iVar8 * 8) = local_28[0];
    pFVar13 = local_28[0];
  }
  else {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(uint *)(lVar4 + 0x74) & 1) == 0) {
      *(uint *)(lVar4 + 0x74) = *(uint *)(lVar4 + 0x74) | 1;
      LOCK();
      UNLOCK();
      uVar10 = ((uint)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<0>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                      ::__l2::counter >> 0x10 ^
               (uint)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<0>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                     ::__l2::counter) * 0x45d9f3b;
      uVar10 = (uVar10 >> 0x10 ^ uVar10) * 0x45d9f3b;
      `public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<0>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
      ::__l2::counter =
           (atomic<unsigned_int>)
           ((int)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<0>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                 ::__l2::counter + 1);
      *(uint *)(lVar4 + 0x70) = uVar10 >> 0x10 ^ uVar10;
    }
    uVar11 = 0;
    aVar12 = (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)this;
    do {
      pFVar13 = (FHazardRecordChunk *)
                ((ulonglong)(*(int *)(lVar4 + 0x70) + (int)uVar11 & 0x1f) * 0x80 + (longlong)aVar12)
      ;
      LOCK();
      bVar14 = pFVar13->Records[0].Hazard == (atomic<unsigned___int64>)0xffffffffffffffff;
      if (bVar14) {
        pFVar13->Records[0].Hazard = (atomic<unsigned___int64>)0x0;
      }
      UNLOCK();
      if (bVar14) goto LAB_14150e5ca;
      uVar11 = uVar11 + 1;
    } while ((uVar11 < 0x20) ||
            (aVar12 = *(atomic<FHazardPointerCollection::FHazardRecordChunk_*> *)
                       ((longlong)aVar12 + 0x1000), uVar11 = 0,
            aVar12 != (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)0x0));
    pFVar13 = (FHazardRecordChunk *)Grow<0>(this);
  }
LAB_14150e5ca:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar13->Records;
}

// ~FHazardPointerCollection @ 141589ba0

void __thiscall FHazardPointerCollection::~FHazardPointerCollection(FHazardPointerCollection *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->AllTlsVariables).AllocatorInstance.Data;
  iVar2 = (this->AllTlsVariables).ArrayNum;
  pFVar5 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AllTlsVariables).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHazardPointerCollection::FTlsData_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar5) break;
    pFVar4 = *(ForAnyElementType **)pFVar7;
    if (pFVar4 != (ForAnyElementType *)0x0) {
      iVar3 = *(int *)&pFVar4[1].Data;
      pFVar6 = pFVar4->Data;
      pFVar8 = pFVar6 + (longlong)iVar3 * 0x10;
      while( true ) {
        if (*(int *)&pFVar4[1].Data != iVar3) {
          `TCheckedPointerIterator<HazardPointer_Impl::FHazardDeleter,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar8) break;
        (*(code *)**(undefined8 **)pFVar6)(pFVar6);
        pFVar6 = pFVar6 + 0x10;
      }
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      *(undefined4 *)&pFVar4[1].Data = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,pFVar4,0,piVar1);
      }
      if (pFVar4->Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4->Data);
      }
      ::operator_delete(pFVar4,0x18);
    }
    pFVar7 = pFVar7 + 8;
  }
  TlsFree(this->CollectablesTlsSlot);
  pFVar7 = (this->HazardRecordBlocks).AllocatorInstance.Data;
  iVar2 = (this->HazardRecordBlocks).ArrayNum;
  pFVar5 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->HazardRecordBlocks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHazardPointerCollection::FHazardRecordChunk_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar5) break;
    FMemory::Free(*(void **)pFVar7);
    pFVar7 = pFVar7 + 8;
  }
  pFVar5 = (this->HazardRecordBlocks).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->AllTlsVariables).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HazardRecordBlocksCS);
                    /* WARNING: Could not recover jumptable at 0x000141589d0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AllTlsVariablesCS);
  return;
}

// Collect @ 1415b0920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FHazardPointerCollection::Collect
          (FHazardPointerCollection *this,
          TArray<HazardPointer_Impl::FHazardDeleter,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  atomic<FHazardPointerCollection::FHazardRecordChunk_*> aVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForElementType<void_*> FVar17;
  ForElementType<void_*> FVar18;
  undefined1 auStack_6c8 [32];
  ForElementType<void_*> local_6a8;
  ForElementType<void_*> local_6a0;
  longlong local_698;
  longlong local_690;
  undefined8 local_688;
  FIdentityFunctor local_678 [8];
  void *local_670;
  TArray<void_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> local_668;
  ForElementType<HazardPointer_Impl::FHazardDeleter> local_458;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_6c8;
  uVar11 = 0;
  local_668.AllocatorInstance.SecondaryData = (ForElementType<void_*>)0x0;
  local_668.ArrayNum = 0;
  local_668.ArrayMax = 0x40;
  do {
    lVar16 = 0x20;
    aVar14 = (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)this;
    do {
      local_670 = *(void **)aVar14;
      if ((longlong)local_670 - 1U < 0xfffffffffffffffe) {
        FVar18 = (ForElementType<void_*>)&local_668;
        if (local_668.AllocatorInstance.SecondaryData != (ForElementType<void_*>)0x0) {
          FVar18 = local_668.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_670) {
          FVar18 = (ForElementType<void_*>)&local_668;
          if (local_668.AllocatorInstance.SecondaryData != (ForElementType<void_*>)0x0) {
            FVar18 = local_668.AllocatorInstance.SecondaryData;
          }
          if ((FScriptContainerElement *)&local_670 <
              (FScriptContainerElement *)((longlong)FVar18 + (longlong)local_668.ArrayMax * 8)) {
            local_690 = (longlong)local_668.ArrayNum;
            local_688 = 8;
            local_6a8 = (ForElementType<void_*>)&local_670;
            local_6a0 = (ForElementType<void_*>)&local_668;
            if (local_668.AllocatorInstance.SecondaryData != (ForElementType<void_*>)0x0) {
              local_6a0 = local_668.AllocatorInstance.SecondaryData;
            }
            local_698 = (longlong)local_668.ArrayMax;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        if (local_668.ArrayNum == local_668.ArrayMax) {
          local_668.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                         (0x808,&local_668.AllocatorInstance,&local_668.ArrayMax);
        }
        lVar10 = (longlong)local_668.ArrayNum;
        FVar18 = (ForElementType<void_*>)&local_668;
        if (local_668.AllocatorInstance.SecondaryData != (ForElementType<void_*>)0x0) {
          FVar18 = local_668.AllocatorInstance.SecondaryData;
        }
        local_668.ArrayNum = local_668.ArrayNum + 1;
        *(void **)((longlong)FVar18 + lVar10 * 8) = local_670;
      }
      aVar14 = (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)((longlong)aVar14 + 0x80);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    this = *(FHazardPointerCollection **)((longlong)this + 0x1000);
  } while ((atomic<FHazardPointerCollection::FHazardRecordChunk_*>)this !=
           (atomic<FHazardPointerCollection::FHazardRecordChunk_*>)0x0);
  if (1 < local_668.ArrayNum) {
    FVar18 = (ForElementType<void_*>)&local_668;
    if (local_668.AllocatorInstance.SecondaryData != (ForElementType<void_*>)0x0) {
      FVar18 = local_668.AllocatorInstance.SecondaryData;
    }
    AlgoImpl::IntroSortInternal<void_*,int,FIdentityFunctor,TLess<void_*>_>
              ((void **)FVar18,local_668.ArrayNum,local_678[0],(TLess<void_*>)local_678[0]);
  }
  iVar9 = param_1->ArrayNum;
  local_50 = 0;
  local_458.SecondaryData = (ForElementType<HazardPointer_Impl::FHazardDeleter>)0x0;
  local_4c = 0x40;
  uVar15 = uVar11;
  if (0 < iVar9) {
    do {
      uVar13 = (uint)uVar11;
      uVar7 = 0;
      uVar8 = uVar7;
      if ((int)uVar13 < iVar9) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_6a0 = (ForElementType<void_*>)(longlong)iVar9;
        local_6a8 = (ForElementType<void_*>)(longlong)(int)uVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar18 = (ForElementType<void_*>)((longlong)(param_1->AllocatorInstance).Data + uVar15);
      uVar8 = BinarySearch(&local_668,*(void **)((longlong)FVar18 + 8));
      if (uVar8 == 0xffffffff) {
        FVar17 = (ForElementType<void_*>)&local_458;
        if (local_458.SecondaryData != (ForElementType<HazardPointer_Impl::FHazardDeleter>)0x0) {
          FVar17 = (ForElementType<void_*>)local_458.SecondaryData;
        }
        if ((ulonglong)FVar17 <= (ulonglong)FVar18) {
          FVar17 = (ForElementType<void_*>)&local_458;
          if (local_458.SecondaryData != (ForElementType<HazardPointer_Impl::FHazardDeleter>)0x0) {
            FVar17 = (ForElementType<void_*>)local_458.SecondaryData;
          }
          if ((ulonglong)FVar18 < (ulonglong)((longlong)(int)local_4c * 0x10 + (longlong)FVar17)) {
            local_690 = (longlong)(int)local_50;
            local_688 = 0x10;
            local_6a0 = (ForElementType<void_*>)&local_458;
            if (local_458.SecondaryData != (ForElementType<HazardPointer_Impl::FHazardDeleter>)0x0)
            {
              local_6a0 = (ForElementType<void_*>)local_458.SecondaryData;
            }
            local_6a8 = FVar18;
            local_698 = (longlong)(int)local_4c;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        uVar8 = local_50;
        if (local_50 == local_4c) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<HazardPointer_Impl::FHazardDeleter>_>
                            (0x810,&local_458,(int *)&local_4c);
        }
        local_50 = uVar8 + 1;
        FVar17 = (ForElementType<void_*>)&local_458;
        if (local_458.SecondaryData != (ForElementType<HazardPointer_Impl::FHazardDeleter>)0x0) {
          FVar17 = (ForElementType<void_*>)local_458.SecondaryData;
        }
        *(undefined ***)((longlong)FVar17 + (longlong)(int)uVar8 * 0x10) =
             &___7FHazardDeleter_HazardPointer_Impl__6B_;
        pvVar4 = *(void **)((longlong)FVar18 + 8);
        pFVar1 = (FScriptContainerElement *)((longlong)FVar17 + (longlong)(int)uVar8 * 0x10);
        *(void **)pFVar1 = *(void **)FVar18;
        *(void **)(pFVar1 + 8) = pvVar4;
        iVar9 = param_1->ArrayNum;
        uVar12 = iVar9 - 1;
        uVar8 = uVar7;
        if ((int)uVar12 < iVar9) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_6a8 = (ForElementType<void_*>)(longlong)(int)uVar12;
          local_6a0 = (ForElementType<void_*>)(longlong)iVar9;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FVar18 = (ForElementType<void_*>)(longlong)param_1->ArrayNum;
        pFVar1 = (param_1->AllocatorInstance).Data;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_6a8 = (ForElementType<void_*>)(longlong)(int)uVar13;
          local_6a0 = FVar18;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar5 = *(undefined8 *)(pFVar1 + (longlong)FVar18 * 0x10 + -8);
        pFVar2 = (param_1->AllocatorInstance).Data + uVar15;
        *(undefined8 *)pFVar2 = *(undefined8 *)(pFVar1 + (longlong)FVar18 * 0x10 + -0x10);
        *(undefined8 *)(pFVar2 + 8) = uVar5;
        if (param_1->ArrayNum < 1) {
          local_6a8 = (ForElementType<void_*>)0x0;
          local_6a0 = (ForElementType<void_*>)(longlong)param_1->ArrayNum;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        uVar13 = uVar13 - 1;
        uVar15 = uVar15 - 0x10;
      }
      iVar9 = param_1->ArrayNum;
      uVar11 = (ulonglong)(uVar13 + 1);
      uVar15 = uVar15 + 0x10;
    } while ((int)(uVar13 + 1) < iVar9);
    uVar11 = (ulonglong)local_50;
  }
  iVar9 = (int)uVar11;
  FVar18 = (ForElementType<void_*>)&local_458;
  if (local_458.SecondaryData != (ForElementType<HazardPointer_Impl::FHazardDeleter>)0x0) {
    FVar18 = (ForElementType<void_*>)local_458.SecondaryData;
  }
  FVar17 = (ForElementType<void_*>)((longlong)iVar9 * 0x10 + (longlong)FVar18);
  while( true ) {
    if ((int)uVar11 != iVar9) {
      `TCheckedPointerIterator<HazardPointer_Impl::FHazardDeleter,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_678);
    }
    if (FVar18 == FVar17) break;
    (*(code *)**(undefined8 **)FVar18)(FVar18);
    uVar11 = (ulonglong)local_50;
    FVar18 = (ForElementType<void_*>)((longlong)FVar18 + 0x10);
  }
  if (local_458.SecondaryData != (ForElementType<HazardPointer_Impl::FHazardDeleter>)0x0) {
    FMemory::Free((void *)local_458.SecondaryData);
  }
  if (local_668.AllocatorInstance.SecondaryData != (ForElementType<void_*>)0x0) {
    FMemory::Free((void *)local_668.AllocatorInstance.SecondaryData);
  }
  return;
}

// Delete @ 1415bcc50

void __thiscall
FHazardPointerCollection::Delete(FHazardPointerCollection *this,FHazardDeleter *param_1,int param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FHazardPointerCollection::FTlsData_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FHazardDeleter *pFVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  TArray<HazardPointer_Impl::FHazardDeleter,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<HazardPointer_Impl::FHazardDeleter,TSizedDefaultAllocator<32>_> *local_18 [2];
  
  local_18[0] = TlsGetValue(this->CollectablesTlsSlot);
  if (local_18[0] == (TArray<HazardPointer_Impl::FHazardDeleter,TSizedDefaultAllocator<32>_> *)0x0)
  {
    lpCriticalSection = &this->AllTlsVariablesCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar9 = ::operator_new(0x18);
    local_18[0] = (TArray<HazardPointer_Impl::FHazardDeleter,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar9 != (TArray<HazardPointer_Impl::FHazardDeleter,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
      pTVar9[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18[0] = pTVar9;
    }
    pTVar2 = &this->AllTlsVariables;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         pFVar3 + (longlong)(this->AllTlsVariables).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->AllTlsVariables).ArrayNum;
    piVar1 = &(this->AllTlsVariables).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->AllTlsVariables).ArrayNum = iVar8 + 1;
    *(TArray<HazardPointer_Impl::FHazardDeleter,TSizedDefaultAllocator<32>_> **)
     ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
    TlsSetValue(this->CollectablesTlsSlot,local_18[0]);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pTVar9 = local_18[0];
  pFVar4 = (FHazardDeleter *)(local_18[0]->AllocatorInstance).Data;
  if (((pFVar4 <= param_1) && (param_1 < pFVar4 + local_18[0]->ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = pTVar9->ArrayNum;
  if (iVar8 == pTVar9->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
  }
  pTVar9->ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar9->AllocatorInstance).Data;
  *(undefined ***)(pFVar3 + (longlong)iVar8 * 0x10) = &___7FHazardDeleter_HazardPointer_Impl__6B_;
  pvVar6 = param_1->Pointer;
  pFVar3 = pFVar3 + (longlong)iVar8 * 0x10;
  *(longlong *)pFVar3 = param_1->_padding_;
  *(void **)(pFVar3 + 8) = pvVar6;
  if (param_2 < 1) {
    param_2 = (uint)((int)this->TotalNumHazardRecords * 5) >> 2;
  }
  if ((__real_3ff0000000000000 <
       (double)FApp::GameTime - (double)local_18[0][1].AllocatorInstance.Data) ||
     (param_2 <= local_18[0]->ArrayNum)) {
    local_18[0][1].AllocatorInstance.Data = (FScriptContainerElement *)FApp::GameTime;
    Collect(this,local_18[0]);
  }
  return;
}

