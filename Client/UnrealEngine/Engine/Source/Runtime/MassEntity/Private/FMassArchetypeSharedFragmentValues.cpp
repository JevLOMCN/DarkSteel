// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 11

// Add_GetRef @ 1471f0890

FConstSharedStruct * __thiscall
FMassArchetypeSharedFragmentValues::Add_GetRef
          (FMassArchetypeSharedFragmentValues *this,FConstSharedStruct *__return_storage_ptr__,
          FConstSharedStruct *param_1)

{
  int *piVar1;
  int iVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FConstSharedStruct *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res18;
  FConstSharedStruct local_28;
  UScriptStruct **local_18;
  FConstSharedStruct *local_10;
  
  pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->StructMemoryPtr).Object;
  if ((((pTVar3 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
       (lVar10 = (longlong)*(short *)((longlong)pTVar3->DebugPtr + 0x5c),
       (-lVar10 & (longlong)pTVar3 + lVar10 + 7) == 0)) ||
      ((TObjectPtr<UScriptStruct_const_>_u_0)pTVar3->DebugPtr ==
       (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Fragment.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                         ,0x80,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FConstSharedStruct *)(*pcVar5)();
    return pFVar8;
  }
  pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->StructMemoryPtr).Object;
  local_res18.DebugPtr = (UScriptStruct *)0x0;
  if (pTVar3 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    local_res18 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar3->DebugPtr;
  }
  bVar6 = ContainsType(this,(UScriptStruct *)local_res18);
  if (bVar6) {
    GetConstSharedFragmentStruct(this,&local_28,local_res18.DebugPtr);
    local_18 = (UScriptStruct **)&local_res18;
    local_10 = &local_28;
    `FMassArchetypeSharedFragmentValues::Add_GetRef'::__l12::<lambda_1>::operator()(&local_18);
    (__return_storage_ptr__->StructMemoryPtr).Object = local_28.StructMemoryPtr.Object;
    (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
         local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController;
    local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_28.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    if ((local_res18.DebugPtr == (UScriptStruct *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                           ,0x8b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FConstSharedStruct *)(*pcVar5)();
      return pFVar8;
    }
    TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)&this->ConstSharedFragmentBitSet,local_res18.DebugPtr);
    pFVar9 = (this->ConstSharedFragments).AllocatorInstance.Data;
    if (((pFVar9 <= param_1) &&
        (param_1 < pFVar9 + (longlong)(this->ConstSharedFragments).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FConstSharedStruct *)(*pcVar5)();
      return pFVar8;
    }
    iVar7 = (this->ConstSharedFragments).ArrayNum;
    piVar1 = &(this->ConstSharedFragments).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ConstSharedFragments).AllocatorInstance,piVar1);
    }
    (this->ConstSharedFragments).ArrayNum = iVar7 + 1;
    pFVar9 = (this->ConstSharedFragments).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(FStructSharedMemory **)pFVar9 = (param_1->StructMemoryPtr).Object;
    pTVar4 = (param_1->StructMemoryPtr).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar7 = (this->SharedFragments).ArrayNum;
    iVar2 = (this->ConstSharedFragments).ArrayNum;
    this->HashCache = 0xffffffff;
    this->bSorted = iVar7 + iVar2 < 2;
    (__return_storage_ptr__->StructMemoryPtr).Object = *(FStructSharedMemory **)pFVar9;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
    (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// Add_GetRef @ 1471f0ab0

FSharedStruct * __thiscall
FMassArchetypeSharedFragmentValues::Add_GetRef
          (FMassArchetypeSharedFragmentValues *this,FSharedStruct *__return_storage_ptr__,
          FSharedStruct *param_1)

{
  int *piVar1;
  int iVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FSharedStruct *pFVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res18 [2];
  FStructSharedMemory *local_38;
  TReferenceControllerBase<1> *local_30;
  UScriptStruct **local_28;
  undefined8 *local_20;
  
  pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->StructMemoryPtr).Object;
  if ((((pTVar3 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
       (lVar14 = (longlong)*(short *)((longlong)pTVar3->DebugPtr + 0x5c),
       (-lVar14 & (longlong)pTVar3 + lVar14 + 7) == 0)) ||
      ((TObjectPtr<UScriptStruct_const_>_u_0)pTVar3->DebugPtr ==
       (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Fragment.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                         ,0x94,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSharedStruct *)(*pcVar5)();
    return pFVar9;
  }
  pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->StructMemoryPtr).Object;
  local_res18[0].DebugPtr = (UScriptStruct *)0x0;
  if (pTVar3 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    local_res18[0].DebugPtr = pTVar3->DebugPtr;
  }
  bVar6 = ContainsType(this,(UScriptStruct *)local_res18[0]);
  if (bVar6) {
    pFVar11 = (this->SharedFragments).AllocatorInstance.Data;
    iVar8 = (this->SharedFragments).ArrayNum;
    for (pFVar13 = pFVar11; pFVar13 != pFVar11 + (longlong)iVar8 * 0x10; pFVar13 = pFVar13 + 0x10) {
      TVar10.DebugPtr = (UScriptStruct *)0x0;
      if (*(TObjectPtr<UScriptStruct_const_>_u_0 **)pFVar13 !=
          (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
        TVar10.DebugPtr = (*(TObjectPtr<UScriptStruct_const_>_u_0 **)pFVar13)->DebugPtr;
      }
      if (TVar10.DebugPtr == local_res18[0].DebugPtr) {
        uVar12 = (uint)((longlong)pFVar13 - (longlong)pFVar11 >> 4);
        if (uVar12 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar12 < iVar8) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FSharedStruct *)(*pcVar5)();
            return pFVar9;
          }
          pFVar11 = (this->SharedFragments).AllocatorInstance.Data;
          local_30 = *(TReferenceControllerBase<1> **)(pFVar11 + (longlong)(int)uVar12 * 0x10 + 8);
          local_38 = *(FStructSharedMemory **)(pFVar11 + (longlong)(int)uVar12 * 0x10);
          if (local_30 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
            UNLOCK();
          }
          goto LAB_1471f0b8c;
        }
        break;
      }
    }
    local_38 = (FStructSharedMemory *)0x0;
    local_30 = (TReferenceControllerBase<1> *)0x0;
LAB_1471f0b8c:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_28 = (UScriptStruct **)local_res18;
    local_20 = &local_38;
    `FMassArchetypeSharedFragmentValues::Add_GetRef'::__l12::<lambda_1>::operator()(&local_28);
    (__return_storage_ptr__->StructMemoryPtr).Object = local_38;
    (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController = local_30;
    local_30 = (TReferenceControllerBase<1> *)0x0;
    local_38 = (FStructSharedMemory *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    if ((local_res18[0].DebugPtr == (UScriptStruct *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                           ,0x9f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FSharedStruct *)(*pcVar5)();
      return pFVar9;
    }
    TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)&this->SharedFragmentBitSet,local_res18[0].DebugPtr);
    pFVar11 = (this->SharedFragments).AllocatorInstance.Data;
    if (((pFVar11 <= param_1) &&
        (param_1 < pFVar11 + (longlong)(this->SharedFragments).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FSharedStruct *)(*pcVar5)();
      return pFVar9;
    }
    iVar8 = (this->SharedFragments).ArrayNum;
    piVar1 = &(this->SharedFragments).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->SharedFragments).AllocatorInstance,piVar1);
    }
    (this->SharedFragments).ArrayNum = iVar8 + 1;
    pFVar11 = (this->SharedFragments).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(FStructSharedMemory **)pFVar11 = (param_1->StructMemoryPtr).Object;
    pTVar4 = (param_1->StructMemoryPtr).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar8 = (this->SharedFragments).ArrayNum;
    iVar2 = (this->ConstSharedFragments).ArrayNum;
    this->HashCache = 0xffffffff;
    this->bSorted = iVar8 + iVar2 < 2;
    (__return_storage_ptr__->StructMemoryPtr).Object = *(FStructSharedMemory **)pFVar11;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
    (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// Append @ 1471f1580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FMassArchetypeSharedFragmentValues::Append
          (FMassArchetypeSharedFragmentValues *this,FMassArchetypeSharedFragmentValues *param_1)

{
  int *piVar1;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_00;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_01;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  UStruct *pUVar9;
  uint uVar10;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar11;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar12;
  FScriptContainerElement *pFVar13;
  ForElementType<unsigned_int> FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  UStruct *pUVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_118 [32];
  undefined1 local_c8;
  undefined1 local_c7;
  <lambda_1> local_c6;
  <lambda_1> local_c5 [5];
  FMassArchetypeSharedFragmentValues *local_c0;
  UStruct *local_b0;
  UStruct *local_a8;
  longlong local_a0;
  TReferenceControllerBase<1> *pTStack_98;
  longlong local_90;
  TReferenceControllerBase<1> *pTStack_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar6 = (param_1->SharedFragments).ArrayNum;
  iVar18 = 0;
  pFVar16 = (param_1->SharedFragments).AllocatorInstance.Data;
  pFVar19 = pFVar16 + (longlong)iVar6 * 0x10;
  local_c0 = param_1;
  while( true ) {
    if ((local_c0->SharedFragments).ArrayNum != iVar6) {
      local_c8 = 0;
      `TCheckedPointerIterator<FSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_c8);
    }
    if (pFVar16 == pFVar19) break;
    pUVar17 = (UStruct *)0x0;
    if (((*(longlong **)pFVar16 == (longlong *)0x0) ||
        (pUVar17 = (UStruct *)**(longlong **)pFVar16, pUVar17 == (UStruct *)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                           ,0x11e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pUVar9 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    if (pUVar9 == (UStruct *)0x0) {
LAB_1471f1654:
      local_b0 = pUVar17;
      bVar5 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              ::Contains'::__l6::<lambda_1>::operator()(&local_b0);
      if (bVar5) goto LAB_1471f1669;
LAB_1471f1794:
      pFVar13 = (this->SharedFragments).AllocatorInstance.Data;
      if (((pFVar13 <= pFVar16) &&
          (pFVar16 < pFVar13 + (longlong)(this->SharedFragments).ArrayMax * 0x10)) &&
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
      iVar7 = (this->SharedFragments).ArrayNum;
      piVar1 = &(this->SharedFragments).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->SharedFragments).AllocatorInstance,piVar1);
        (this->SharedFragments).ArrayNum = iVar7;
      }
      (this->SharedFragments).ArrayNum = iVar7 + 1;
      pFVar13 = (this->SharedFragments).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      *(longlong *)pFVar13 = *(longlong *)pFVar16;
      lVar2 = *(longlong *)(pFVar16 + 8);
      *(longlong *)(pFVar13 + 8) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pFVar16 = pFVar16 + 0x10;
      iVar18 = iVar18 + 1;
    }
    else {
      iVar7 = (int)pUVar9->_padding_;
      if (((int)pUVar17->_padding_ < iVar7) ||
         ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar7 * 8) !=
          &pUVar9->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_1471f1654;
LAB_1471f1669:
      iVar7 = FStructTracker::FindStructTypeIndex
                        (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,pUVar17);
      if ((iVar7 == -1) ||
         (bVar5 = FStructTypeBitSet::FConstBitSetContainer::Contains
                            ((FConstBitSetContainer *)&this->SharedFragmentBitSet,iVar7), !bVar5))
      goto LAB_1471f1794;
      pFVar13 = (this->SharedFragments).AllocatorInstance.Data;
      for (pFVar15 = pFVar13; pFVar15 != pFVar13 + (longlong)(this->SharedFragments).ArrayNum * 0x10
          ; pFVar15 = pFVar15 + 0x10) {
        pUVar9 = (UStruct *)0x0;
        if (*(longlong **)pFVar15 != (longlong *)0x0) {
          pUVar9 = (UStruct *)**(longlong **)pFVar15;
        }
        if (pUVar9 == pUVar17) {
          uVar10 = (uint)((longlong)pFVar15 - (longlong)pFVar13 >> 4);
          if (uVar10 == 0xffffffff) goto LAB_1471f16ce;
          goto LAB_1471f1706;
        }
      }
      uVar10 = 0xffffffff;
LAB_1471f16ce:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                         ,0x122,L"Mismatch between shared fragment bitset and stored values");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
LAB_1471f1706:
      uVar8 = 0;
      if ((int)uVar10 < (this->SharedFragments).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      lVar2 = *(longlong *)(pFVar16 + 8);
      lVar3 = *(longlong *)pFVar16;
      pFVar13 = (this->SharedFragments).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      local_a0 = *(longlong *)pFVar13;
      pTStack_98 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
      *(longlong *)pFVar13 = lVar3;
      *(longlong *)(pFVar13 + 8) = lVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_98);
      pFVar16 = pFVar16 + 0x10;
      iVar18 = iVar18 + 1;
    }
  }
  iVar6 = (local_c0->ConstSharedFragments).ArrayNum;
  pFVar16 = (local_c0->ConstSharedFragments).AllocatorInstance.Data;
  pFVar19 = pFVar16 + (longlong)iVar6 * 0x10;
LAB_1471f1868:
  do {
    if ((local_c0->ConstSharedFragments).ArrayNum != iVar6) {
      local_c7 = 0;
      `TCheckedPointerIterator<FConstSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_c7);
    }
    if (pFVar16 == pFVar19) {
      pTVar11 = &local_c0->SharedFragmentBitSet;
      this_00 = &this->SharedFragmentBitSet;
      if ((this_00 == pTVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("&A != &B",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x52d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_80.MaxBits = 0x80;
      local_80.NumBits = 0;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)pTVar11,&local_80,MaxSize,&local_c6);
      if ((TBitArray<FDefaultBitArrayAllocator> *)this_00 != &local_80) {
        iVar6 = *(int *)&(this->SharedFragmentBitSet).field_0x1c;
        *(undefined4 *)&(this->SharedFragmentBitSet).field_0x18 = 0;
        uVar10 = local_80.NumBits + 0x1fU & 0xffffffe0;
        if ((iVar6 < (int)uVar10) || (0x80 < iVar6)) {
          uVar8 = 0x80;
          if (0x80 < (int)uVar10) {
            uVar8 = uVar10;
          }
          *(uint *)&(this->SharedFragmentBitSet).field_0x1c = uVar8;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
        }
        *(int *)&(this->SharedFragmentBitSet).field_0x18 = local_80.NumBits;
        if (local_80.NumBits != 0) {
          pTVar11 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      **)&(this->SharedFragmentBitSet).field_0x10;
          FVar14 = (ForElementType<unsigned_int>)&local_80;
          if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_80.AllocatorInstance.SecondaryData;
          }
          if (pTVar11 ==
              (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               *)0x0) {
            pTVar11 = this_00;
          }
          memcpy(pTVar11,(void *)FVar14,(ulonglong)(local_80.NumBits + 0x1fU >> 5) << 2);
        }
      }
      if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
      }
      this_01 = &this->ConstSharedFragmentBitSet;
      pTVar12 = &local_c0->ConstSharedFragmentBitSet;
      if ((this_01 == pTVar12) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("&A != &B",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x52d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_60.NumBits = 0;
      local_60.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)pTVar12,&local_60,MaxSize,local_c5);
      if ((TBitArray<FDefaultBitArrayAllocator> *)this_01 != &local_60) {
        iVar6 = *(int *)&(this->ConstSharedFragmentBitSet).field_0x1c;
        *(undefined4 *)&(this->ConstSharedFragmentBitSet).field_0x18 = 0;
        uVar10 = local_60.NumBits + 0x1fU & 0xffffffe0;
        if ((iVar6 < (int)uVar10) || (0x80 < iVar6)) {
          uVar8 = 0x80;
          if (0x80 < (int)uVar10) {
            uVar8 = uVar10;
          }
          *(uint *)&(this->ConstSharedFragmentBitSet).field_0x1c = uVar8;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)this_01,0);
        }
        *(int *)&(this->ConstSharedFragmentBitSet).field_0x18 = local_60.NumBits;
        if (local_60.NumBits != 0) {
          pTVar12 = *(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      **)&(this->ConstSharedFragmentBitSet).field_0x10;
          FVar14 = (ForElementType<unsigned_int>)&local_60;
          if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_60.AllocatorInstance.SecondaryData;
          }
          if (pTVar12 ==
              (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               *)0x0) {
            pTVar12 = this_01;
          }
          memcpy(pTVar12,(void *)FVar14,(ulonglong)(local_60.NumBits + 0x1fU >> 5) << 2);
        }
      }
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
      }
      iVar6 = (this->SharedFragments).ArrayNum;
      iVar7 = (this->ConstSharedFragments).ArrayNum;
      this->HashCache = 0xffffffff;
      this->bSorted = iVar6 + iVar7 < 2;
      return iVar18;
    }
    pUVar17 = (UStruct *)0x0;
    if (((*(longlong **)pFVar16 == (longlong *)0x0) ||
        (pUVar17 = (UStruct *)**(longlong **)pFVar16, pUVar17 == (UStruct *)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                           ,0x130,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pUVar9 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    if (pUVar9 == (UStruct *)0x0) {
LAB_1471f18ec:
      local_a8 = pUVar17;
      bVar5 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              ::Contains'::__l6::<lambda_1>::operator()(&local_a8);
      if (bVar5) goto LAB_1471f1901;
    }
    else {
      iVar7 = (int)pUVar9->_padding_;
      if (((int)pUVar17->_padding_ < iVar7) ||
         ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar7 * 8) !=
          &pUVar9->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_1471f18ec;
LAB_1471f1901:
      iVar7 = FStructTracker::FindStructTypeIndex
                        (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,pUVar17)
      ;
      if ((iVar7 != -1) &&
         (bVar5 = FStructTypeBitSet::FConstBitSetContainer::Contains
                            ((FConstBitSetContainer *)&this->ConstSharedFragmentBitSet,iVar7), bVar5
         )) {
        pFVar13 = (this->ConstSharedFragments).AllocatorInstance.Data;
        for (pFVar15 = pFVar13;
            pFVar15 != pFVar13 + (longlong)(this->ConstSharedFragments).ArrayNum * 0x10;
            pFVar15 = pFVar15 + 0x10) {
          pUVar9 = (UStruct *)0x0;
          if (*(longlong **)pFVar15 != (longlong *)0x0) {
            pUVar9 = (UStruct *)**(longlong **)pFVar15;
          }
          if (pUVar9 == pUVar17) {
            uVar10 = (uint)((longlong)pFVar15 - (longlong)pFVar13 >> 4);
            if (uVar10 == 0xffffffff) goto LAB_1471f1961;
            goto LAB_1471f1999;
          }
        }
        uVar10 = 0xffffffff;
LAB_1471f1961:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FragmentIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                           ,0x134,L"Mismatch between const shared fragment bitset and stored values"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
LAB_1471f1999:
        uVar8 = 0;
        if ((int)uVar10 < (this->ConstSharedFragments).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        lVar2 = *(longlong *)(pFVar16 + 8);
        lVar3 = *(longlong *)pFVar16;
        pFVar13 = (this->ConstSharedFragments).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10
        ;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        local_90 = *(longlong *)pFVar13;
        pTStack_88 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
        *(longlong *)pFVar13 = lVar3;
        *(longlong *)(pFVar13 + 8) = lVar2;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_88);
        pFVar16 = pFVar16 + 0x10;
        iVar18 = iVar18 + 1;
        goto LAB_1471f1868;
      }
    }
    pFVar13 = (this->ConstSharedFragments).AllocatorInstance.Data;
    if ((pFVar13 <= pFVar16) &&
       ((pFVar16 < pFVar13 + (longlong)(this->ConstSharedFragments).ArrayMax * 0x10 &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    iVar7 = (this->ConstSharedFragments).ArrayNum;
    piVar1 = &(this->ConstSharedFragments).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ConstSharedFragments).AllocatorInstance,piVar1);
      (this->ConstSharedFragments).ArrayNum = iVar7;
    }
    (this->ConstSharedFragments).ArrayNum = iVar7 + 1;
    pFVar13 = (this->ConstSharedFragments).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(longlong *)pFVar13 = *(longlong *)pFVar16;
    lVar2 = *(longlong *)(pFVar16 + 8);
    *(longlong *)(pFVar13 + 8) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pFVar16 = pFVar16 + 0x10;
    iVar18 = iVar18 + 1;
  } while( true );
}

// CalculateHash @ 1472004d0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FMassArchetypeSharedFragmentValues::CalculateHash(FMassArchetypeSharedFragmentValues *this)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  if (this->bSorted != false) {
    pFVar5 = (this->ConstSharedFragments).AllocatorInstance.Data;
    iVar1 = (this->ConstSharedFragments).ArrayNum;
    uVar7 = 0;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ConstSharedFragments).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FConstSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      plVar2 = *(longlong **)pFVar5;
      uVar4 = 0;
      if (plVar2 != (longlong *)0x0) {
        uVar4 = (longlong)plVar2 + (longlong)*(short *)(*plVar2 + 0x5c) + 7 &
                -(longlong)*(short *)(*plVar2 + 0x5c);
      }
      uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar3 = uVar3 >> 0x10 ^ uVar3;
      uVar7 = uVar7 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
      pFVar5 = pFVar5 + 0x10;
    }
    iVar1 = (this->SharedFragments).ArrayNum;
    pFVar5 = (this->SharedFragments).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->SharedFragments).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      plVar2 = *(longlong **)pFVar5;
      uVar4 = 0;
      if (plVar2 != (longlong *)0x0) {
        uVar4 = (longlong)plVar2 + (longlong)*(short *)(*plVar2 + 0x5c) + 7 &
                -(longlong)*(short *)(*plVar2 + 0x5c);
      }
      uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar3 = uVar3 >> 0x10 ^ uVar3;
      uVar7 = uVar7 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
      pFVar5 = pFVar5 + 0x10;
    }
    return uVar7;
  }
  if (UE::AITestSuite::TestsInProgress < 1) {
    ``FMassArchetypeSharedFragmentValues::CalculateHash'::__l3::<lambda_1>::operator()'::__l16::
    <lambda_1>::operator()(local_res8);
  }
  else if (2 < (byte)LogTestableEnsures._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Expecting_the_c_151578908,
               (FLogCategoryBase *)&LogTestableEnsures);
    return 0;
  }
  return 0;
}

// HasSameValues @ 14722af80

bool __thiscall
FMassArchetypeSharedFragmentValues::HasSameValues
          (FMassArchetypeSharedFragmentValues *this,FMassArchetypeSharedFragmentValues *param_1)

{
  TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  
  bVar6 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->SharedFragmentBitSet,
                     (TBitArray<FDefaultBitArrayAllocator> *)&param_1->SharedFragmentBitSet,false);
  if ((!bVar6) ||
     (bVar6 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                        ((TBitArray<FDefaultBitArrayAllocator> *)&this->ConstSharedFragmentBitSet,
                         (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ConstSharedFragmentBitSet
                         ,false), !bVar6)) {
    return false;
  }
  bVar6 = UE::Mass::Private::ArraysHaveSameContents<FSharedStruct,1>
                    (&this->SharedFragments,&param_1->SharedFragments);
  if (bVar6) {
    pTVar1 = &param_1->ConstSharedFragments;
    iVar8 = UE::Mass::Private::CountInvalid<FConstSharedStruct>(&this->ConstSharedFragments);
    iVar9 = UE::Mass::Private::CountInvalid<FConstSharedStruct>(pTVar1);
    iVar2 = (this->ConstSharedFragments).ArrayNum;
    if (iVar2 - iVar8 == (param_1->ConstSharedFragments).ArrayNum - iVar9) {
      pFVar14 = (this->ConstSharedFragments).AllocatorInstance.Data;
      pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
      do {
        if ((this->ConstSharedFragments).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FConstSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar14 == pFVar13) {
          return true;
        }
        if ((*(longlong **)&pFVar14->field_0x0 != (longlong *)0x0) &&
           (lVar3 = **(longlong **)&pFVar14->field_0x0, lVar3 != 0)) {
          pFVar4 = (pTVar1->AllocatorInstance).Data;
          iVar8 = (param_1->ConstSharedFragments).ArrayNum;
          pFVar12 = pFVar4;
          while( true ) {
            if (pFVar12 == pFVar4 + (longlong)iVar8 * 0x10) {
              return false;
            }
            if ((*(longlong **)pFVar12 != (longlong *)0x0) && (**(longlong **)pFVar12 == lVar3))
            break;
            pFVar12 = pFVar12 + 0x10;
          }
          uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 4);
          if (uVar11 == 0xffffffff) {
            return false;
          }
          uVar10 = 0;
          if ((int)uVar11 < iVar8) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          bVar6 = FConstSharedStruct::CompareStructValues<FConstSharedStruct>
                            ((FConstSharedStruct *)
                             ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10),
                             (FConstSharedStruct *)pFVar14,0);
          if (!bVar6) {
            return false;
          }
        }
        pFVar14 = pFVar14 + 0x10;
      } while( true );
    }
  }
  return false;
}

// Remove @ 1472444e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FMassArchetypeSharedFragmentValues::Remove
          (FMassArchetypeSharedFragmentValues *this,
          TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  UStruct *pUVar9;
  UClass *pUVar10;
  UStruct *pUVar11;
  longlong lVar12;
  ForElementType<unsigned_int> _Dst;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  undefined1 auStackY_e8 [32];
  <lambda_1> local_b8 [16];
  FBitSetContainer *local_a8;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8 = (FBitSetContainer *)&this->ConstSharedFragmentBitSet;
  iVar6 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)local_a8,
             (TBitArray<FDefaultBitArrayAllocator> *)param_1,&local_68,MinSize,local_b8);
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.MaxBits = 0x80;
  local_88.NumBits = 0;
  uVar5 = local_68.NumBits + 0x1fU & 0xffffffe0;
  if (0x80 < (int)uVar5) {
    local_88.MaxBits = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  local_88.NumBits = local_68.NumBits;
  if (local_68.NumBits != 0) {
    FVar8 = (ForElementType<unsigned_int>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar8 = local_68.AllocatorInstance.SecondaryData;
    }
    _Dst = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      _Dst = local_88.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)_Dst,(void *)FVar8,(ulonglong)(local_68.NumBits + 0x1fU >> 5) << 2);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  iVar16 = 0;
  iVar19 = 0;
  uVar5 = 1;
  iVar20 = iVar19;
  iVar17 = iVar16;
  if (0 < local_88.NumBits) {
    FVar8 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar8 = local_88.AllocatorInstance.SecondaryData;
    }
    iVar20 = 0;
    iVar17 = 0;
    if ((*(byte *)FVar8 & 1) == 0) {
      do {
        uVar14 = uVar5 * 2;
        iVar19 = iVar19 + 1;
        iVar20 = iVar16 + 1;
        uVar5 = 1;
        if (uVar14 != 0) {
          iVar20 = iVar16;
          uVar5 = uVar14;
        }
        iVar16 = iVar20;
        if (local_88.NumBits <= iVar19) goto LAB_147244932;
        FVar8 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_88.AllocatorInstance.SecondaryData;
        }
        iVar20 = iVar19;
        iVar17 = iVar16;
      } while ((*(uint *)((longlong)FVar8 + (longlong)iVar16 * 4) & uVar5) == 0);
    }
  }
  if (iVar20 < local_88.NumBits) {
    do {
      pUVar9 = FStructTracker::GetStructType
                         (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,iVar20)
      ;
      if (pUVar9 == (UStruct *)0x0) {
LAB_14724468a:
        pUVar9 = (UStruct *)0x0;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                           ,0x16b,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      else {
        pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar16 = (int)pUVar10->_padding_;
        if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar16) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
            &pUVar10->_padding_)) goto LAB_14724468a;
      }
      pFVar13 = (this->ConstSharedFragments).AllocatorInstance.Data;
      iVar16 = (this->ConstSharedFragments).ArrayNum;
      for (pFVar15 = pFVar13; pFVar15 != pFVar13 + (longlong)iVar16 * 0x10; pFVar15 = pFVar15 + 0x10
          ) {
        pUVar11 = (UStruct *)0x0;
        if (*(undefined8 **)pFVar15 != (undefined8 *)0x0) {
          pUVar11 = (UStruct *)**(undefined8 **)pFVar15;
        }
        if (pUVar11 == pUVar9) {
          uVar14 = (uint)((longlong)pFVar15 - (longlong)pFVar13 >> 4);
          if (uVar14 != 0xffffffff) {
            uVar7 = 0;
            if ((int)uVar14 < iVar16) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            pFVar13 = (this->ConstSharedFragments).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 0x10;
            local_98 = 0;
            FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (pFVar13 != (FScriptContainerElement *)&local_98) {
              *(undefined8 *)pFVar13 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(pFVar13 + 8),&FStack_90);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_90.ReferenceController);
            iVar6 = iVar6 + 1;
          }
          break;
        }
      }
      do {
        uVar14 = uVar5 * 2;
        iVar20 = iVar20 + 1;
        iVar16 = iVar17 + 1;
        uVar5 = 1;
        if (uVar14 != 0) {
          iVar16 = iVar17;
          uVar5 = uVar14;
        }
        iVar17 = iVar16;
        if (local_88.NumBits <= iVar20) goto LAB_1472447ce;
        FVar8 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_88.AllocatorInstance.SecondaryData;
        }
      } while ((*(uint *)((longlong)FVar8 + (longlong)iVar17 * 4) & uVar5) == 0);
    } while (iVar20 < local_88.NumBits);
LAB_1472447ce:
    if (iVar6 != 0) {
      iVar20 = (this->ConstSharedFragments).ArrayNum;
      bVar3 = false;
      uVar5 = 0;
      if (0 < iVar20) {
        lVar18 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar5 < iVar20) {
            uVar14 = ~uVar5 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          plVar1 = *(longlong **)((this->ConstSharedFragments).AllocatorInstance.Data + lVar18);
          if (((plVar1 == (longlong *)0x0) ||
              (lVar12 = (longlong)*(short *)(*plVar1 + 0x5c),
              (~(lVar12 - 1U) & (longlong)plVar1 + lVar12 + 7) == 0)) || (*plVar1 == 0)) {
            bVar3 = true;
            uVar14 = 0;
            if ((int)uVar5 < (this->ConstSharedFragments).ArrayNum) {
              uVar14 = ~uVar5 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (&this->ConstSharedFragments,uVar5);
          }
          else {
            uVar5 = uVar5 + 1;
            lVar18 = lVar18 + 0x10;
          }
          iVar20 = (this->ConstSharedFragments).ArrayNum;
        } while ((int)uVar5 < iVar20);
        if (bVar3) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(this->ConstSharedFragments).AllocatorInstance,iVar20,
                     &(this->ConstSharedFragments).ArrayMax);
        }
      }
      FStructTypeBitSet::FBitSetContainer::operator-=(local_a8,&local_88);
      iVar20 = (this->SharedFragments).ArrayNum;
      iVar17 = (this->ConstSharedFragments).ArrayNum;
      this->HashCache = 0xffffffff;
      this->bSorted = iVar20 + iVar17 < 2;
    }
  }
LAB_147244932:
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  return iVar6;
}

// Remove @ 147244980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FMassArchetypeSharedFragmentValues::Remove
          (FMassArchetypeSharedFragmentValues *this,
          TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  UStruct *pUVar9;
  UClass *pUVar10;
  UStruct *pUVar11;
  longlong lVar12;
  ForElementType<unsigned_int> _Dst;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  undefined1 auStackY_e8 [32];
  <lambda_1> local_b8 [16];
  FBitSetContainer *local_a8;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8 = (FBitSetContainer *)&this->SharedFragmentBitSet;
  iVar6 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)local_a8,
             (TBitArray<FDefaultBitArrayAllocator> *)param_1,&local_68,MinSize,local_b8);
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.MaxBits = 0x80;
  local_88.NumBits = 0;
  uVar5 = local_68.NumBits + 0x1fU & 0xffffffe0;
  if (0x80 < (int)uVar5) {
    local_88.MaxBits = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  local_88.NumBits = local_68.NumBits;
  if (local_68.NumBits != 0) {
    FVar8 = (ForElementType<unsigned_int>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar8 = local_68.AllocatorInstance.SecondaryData;
    }
    _Dst = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      _Dst = local_88.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)_Dst,(void *)FVar8,(ulonglong)(local_68.NumBits + 0x1fU >> 5) << 2);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  iVar16 = 0;
  iVar19 = 0;
  uVar5 = 1;
  iVar20 = iVar19;
  iVar17 = iVar16;
  if (0 < local_88.NumBits) {
    FVar8 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar8 = local_88.AllocatorInstance.SecondaryData;
    }
    iVar20 = 0;
    iVar17 = 0;
    if ((*(byte *)FVar8 & 1) == 0) {
      do {
        uVar14 = uVar5 * 2;
        iVar19 = iVar19 + 1;
        iVar20 = iVar16 + 1;
        uVar5 = 1;
        if (uVar14 != 0) {
          iVar20 = iVar16;
          uVar5 = uVar14;
        }
        iVar16 = iVar20;
        if (local_88.NumBits <= iVar19) goto LAB_147244dd2;
        FVar8 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_88.AllocatorInstance.SecondaryData;
        }
        iVar20 = iVar19;
        iVar17 = iVar16;
      } while ((*(uint *)((longlong)FVar8 + (longlong)iVar16 * 4) & uVar5) == 0);
    }
  }
  if (iVar20 < local_88.NumBits) {
    do {
      pUVar9 = FStructTracker::GetStructType
                         (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,iVar20);
      if (pUVar9 == (UStruct *)0x0) {
LAB_147244b2a:
        pUVar9 = (UStruct *)0x0;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                           ,0x14e,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      else {
        pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar16 = (int)pUVar10->_padding_;
        if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar16) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
            &pUVar10->_padding_)) goto LAB_147244b2a;
      }
      pFVar13 = (this->SharedFragments).AllocatorInstance.Data;
      iVar16 = (this->SharedFragments).ArrayNum;
      for (pFVar15 = pFVar13; pFVar15 != pFVar13 + (longlong)iVar16 * 0x10; pFVar15 = pFVar15 + 0x10
          ) {
        pUVar11 = (UStruct *)0x0;
        if (*(undefined8 **)pFVar15 != (undefined8 *)0x0) {
          pUVar11 = (UStruct *)**(undefined8 **)pFVar15;
        }
        if (pUVar11 == pUVar9) {
          uVar14 = (uint)((longlong)pFVar15 - (longlong)pFVar13 >> 4);
          if (uVar14 != 0xffffffff) {
            uVar7 = 0;
            if ((int)uVar14 < iVar16) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            pFVar13 = (this->SharedFragments).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10;
            local_98 = 0;
            FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (pFVar13 != (FScriptContainerElement *)&local_98) {
              *(undefined8 *)pFVar13 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(pFVar13 + 8),&FStack_90);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_90.ReferenceController);
            iVar6 = iVar6 + 1;
          }
          break;
        }
      }
      do {
        uVar14 = uVar5 * 2;
        iVar20 = iVar20 + 1;
        iVar16 = iVar17 + 1;
        uVar5 = 1;
        if (uVar14 != 0) {
          iVar16 = iVar17;
          uVar5 = uVar14;
        }
        iVar17 = iVar16;
        if (local_88.NumBits <= iVar20) goto LAB_147244c6e;
        FVar8 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_88.AllocatorInstance.SecondaryData;
        }
      } while ((*(uint *)((longlong)FVar8 + (longlong)iVar17 * 4) & uVar5) == 0);
    } while (iVar20 < local_88.NumBits);
LAB_147244c6e:
    if (iVar6 != 0) {
      iVar20 = (this->SharedFragments).ArrayNum;
      bVar3 = false;
      uVar5 = 0;
      if (0 < iVar20) {
        lVar18 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar5 < iVar20) {
            uVar14 = ~uVar5 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          plVar1 = *(longlong **)((this->SharedFragments).AllocatorInstance.Data + lVar18);
          if (((plVar1 == (longlong *)0x0) ||
              (lVar12 = (longlong)*(short *)(*plVar1 + 0x5c),
              (~(lVar12 - 1U) & (longlong)plVar1 + lVar12 + 7) == 0)) || (*plVar1 == 0)) {
            bVar3 = true;
            uVar14 = 0;
            if ((int)uVar5 < (this->SharedFragments).ArrayNum) {
              uVar14 = ~uVar5 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
            TArray<FSharedStruct,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (&this->SharedFragments,uVar5);
          }
          else {
            uVar5 = uVar5 + 1;
            lVar18 = lVar18 + 0x10;
          }
          iVar20 = (this->SharedFragments).ArrayNum;
        } while ((int)uVar5 < iVar20);
        if (bVar3) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(this->SharedFragments).AllocatorInstance,iVar20,
                     &(this->SharedFragments).ArrayMax);
        }
      }
      FStructTypeBitSet::FBitSetContainer::operator-=(local_a8,&local_88);
      iVar20 = (this->SharedFragments).ArrayNum;
      iVar17 = (this->ConstSharedFragments).ArrayNum;
      this->HashCache = 0xffffffff;
      this->bSorted = iVar20 + iVar17 < 2;
    }
  }
LAB_147244dd2:
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  return iVar6;
}

// ReplaceSharedFragments @ 1472484c0

void __thiscall
FMassArchetypeSharedFragmentValues::ReplaceSharedFragments
          (FMassArchetypeSharedFragmentValues *this,TArrayView<FSharedStruct_const_,int> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FStructSharedMemory *pFVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  UScriptStruct *pUVar10;
  FScriptContainerElement *pFVar11;
  FSharedStruct *pFVar12;
  FScriptContainerElement *pFVar13;
  FSharedStruct *pFVar14;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_res10;
  longlong *local_res18 [2];
  
  pFVar12 = param_1->DataPtr;
  iVar1 = (this->SharedFragments).ArrayNum;
  iVar2 = (this->ConstSharedFragments).ArrayNum;
  iVar3 = param_1->ArrayNum;
  this->HashCache = 0xffffffff;
  pFVar14 = pFVar12 + iVar3;
  this->bSorted = iVar1 + iVar2 < 2;
  if (pFVar12 != pFVar14) {
    do {
      pTVar4 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar12->StructMemoryPtr).Object;
      if (pTVar4 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
        local_res10.DebugPtr = (UScriptStruct *)0x0;
LAB_14724852c:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewFragScriptStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                           ,0xac,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        local_res10 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar4->DebugPtr;
        if (local_res10 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0) goto LAB_14724852c;
      }
      iVar1 = (this->SharedFragments).ArrayNum;
      pFVar11 = (this->SharedFragments).AllocatorInstance.Data;
      pFVar13 = pFVar11 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->SharedFragments).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FSharedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar11 == pFVar13) {
          local_res18[0] = (longlong *)&local_res10;
          `FMassArchetypeSharedFragmentValues::ReplaceSharedFragments'::__l6::<lambda_1>::operator()
                    (local_res18);
          goto LAB_1472485e0;
        }
        pUVar10 = (UScriptStruct *)0x0;
        if (*(longlong **)pFVar11 != (longlong *)0x0) {
          pUVar10 = (UScriptStruct *)**(longlong **)pFVar11;
        }
        if (pUVar10 == local_res10.DebugPtr) break;
        pFVar11 = pFVar11 + 0x10;
      }
      pTVar5 = (pFVar12->StructMemoryPtr).SharedReferenceCount.ReferenceController;
      pFVar6 = (pFVar12->StructMemoryPtr).Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      *(FStructSharedMemory **)pFVar11 = pFVar6;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_1472485e0:
      pFVar12 = pFVar12 + 1;
    } while (pFVar12 != pFVar14);
  }
  return;
}

// operator() @ 1505048e0

bool __thiscall
`FMassArchetypeSharedFragmentValues::ReplaceSharedFragments'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7596402398944297144>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7596402398944297144>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150504970;
    }
  }
  bVar2 = false;
LAB_150504970:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505054c0

bool __thiscall
`FMassArchetypeSharedFragmentValues::Add_GetRef'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  FName local_res10;
  FString local_18;
  
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7596402398944297095>);
  if (bVar3) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar2 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7596402398944297095>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1505055ad;
    }
  }
  bVar3 = false;
LAB_1505055ad:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 1505055e0

bool __thiscall
`FMassArchetypeSharedFragmentValues::Add_GetRef'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  FName local_res10;
  FString local_18;
  
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7596402398944297115>);
  if (bVar3) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar2 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7596402398944297115>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1505056cd;
    }
  }
  bVar3 = false;
LAB_1505056cd:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  return false;
}

