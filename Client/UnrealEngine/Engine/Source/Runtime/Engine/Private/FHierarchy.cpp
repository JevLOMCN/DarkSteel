// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FHierarchy @ 1475a4940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHierarchy * __thiscall
FReferenceSkeletonLocals::FHierarchy::FHierarchy(FHierarchy *this,FReferenceSkeleton *param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  FHierarchy *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_138 [32];
  longlong local_e8;
  <lambda_1> local_e0;
  TTransform<double> local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar17 = 0;
  piVar1 = &(this->Elements).ArrayMax;
  piVar2 = &(this->Transforms).ArrayMax;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  *piVar1 = 0;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = 0;
  *piVar2 = 0;
  uVar13 = (param_1->RawRefBoneInfo).ArrayNum;
  lVar15 = (longlong)(int)uVar13;
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar13,(ForAnyElementType *)this,0,piVar1);
    if (*piVar2 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar13,&(this->Transforms).AllocatorInstance,(this->Transforms).ArrayNum,
                 piVar2);
    }
    local_68.MaxBits = 0x80;
    uVar12 = uVar13 + 0x1f >> 5;
    local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.NumBits = uVar13;
    if (uVar13 + 0x1f >> 5 != 0) {
      if (4 < uVar12) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_68.AllocatorInstance,0,uVar12,4);
        local_68.MaxBits = uVar12 << 5;
      }
      FVar9 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_68.AllocatorInstance.SecondaryData;
      }
      memset((void *)FVar9,0,(ulonglong)uVar12 << 2);
      uVar12 = local_68.NumBits & 0x8000001f;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
      }
      if (uVar12 != 0) {
        FVar9 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar9 = local_68.AllocatorInstance.SecondaryData;
        }
        puVar3 = (uint *)((longlong)FVar9 +
                         (longlong)
                         ((int)(local_68.NumBits + (local_68.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)uVar12 & 0x1f);
      }
    }
    local_e0.__this = this;
    if ((int)uVar13 < 1) {
      local_e0.TransformCached = &local_68;
    }
    else {
      lVar16 = 0;
      local_e8 = lVar15;
      do {
        iVar8 = (this->Elements).ArrayNum;
        if (iVar8 == (this->Elements).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)this,&(this->Elements).ArrayMax);
        }
        lVar11 = (longlong)iVar8 * 0x20;
        (this->Elements).ArrayNum = iVar8 + 1;
        pFVar4 = (this->Elements).AllocatorInstance.Data;
        *(uint *)(pFVar4 + lVar11) = uVar17;
        *(undefined8 *)(pFVar4 + lVar11 + 8) = 0;
        *(undefined8 *)(pFVar4 + lVar11 + 0x10) = 0;
        *(undefined8 *)(pFVar4 + lVar11 + 0x18) = 0;
        uVar13 = 0;
        if ((int)uVar17 < (param_1->RawRefBonePose).ArrayNum) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FHierarchy *)(*pcVar5)();
          return pFVar10;
        }
        pFVar4 = (this->Transforms).AllocatorInstance.Data;
        pFVar14 = (param_1->RawRefBonePose).AllocatorInstance.Data + lVar16;
        if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + (longlong)*piVar2 * 0x60)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FHierarchy *)(*pcVar5)();
          return pFVar10;
        }
        iVar8 = (this->Transforms).ArrayNum;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1060,&(this->Transforms).AllocatorInstance,piVar2);
        }
        uVar17 = uVar17 + 1;
        (this->Transforms).ArrayNum = iVar8 + 1;
        lVar16 = lVar16 + 0x60;
        uVar6 = *(undefined8 *)(pFVar14 + 8);
        pFVar4 = (this->Transforms).AllocatorInstance.Data;
        lVar11 = (longlong)iVar8 * 0x60;
        local_e8 = local_e8 + -1;
        *(undefined8 *)(pFVar4 + lVar11) = *(undefined8 *)pFVar14;
        *(undefined8 *)(pFVar4 + lVar11 + 8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar14 + 0x18);
        *(undefined8 *)(pFVar4 + lVar11 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
        *(undefined8 *)(pFVar4 + lVar11 + 0x10 + 8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar14 + 0x28);
        *(undefined8 *)(pFVar4 + lVar11 + 0x20) = *(undefined8 *)(pFVar14 + 0x20);
        *(undefined8 *)(pFVar4 + lVar11 + 0x20 + 8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar14 + 0x38);
        *(undefined8 *)(pFVar4 + lVar11 + 0x30) = *(undefined8 *)(pFVar14 + 0x30);
        *(undefined8 *)(pFVar4 + lVar11 + 0x30 + 8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar14 + 0x48);
        *(undefined8 *)(pFVar4 + lVar11 + 0x40) = *(undefined8 *)(pFVar14 + 0x40);
        *(undefined8 *)(pFVar4 + lVar11 + 0x40 + 8) = uVar6;
        uVar6 = *(undefined8 *)(pFVar14 + 0x58);
        uVar13 = 0;
        *(undefined8 *)(pFVar4 + lVar11 + 0x50) = *(undefined8 *)(pFVar14 + 0x50);
        *(undefined8 *)(pFVar4 + lVar11 + 0x50 + 8) = uVar6;
      } while (local_e8 != 0);
      local_e0.TransformCached = &local_68;
      lVar16 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar13 < (param_1->RawRefBoneInfo).ArrayNum) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FHierarchy *)(*pcVar5)();
          return pFVar10;
        }
        SetParent(this,uVar13,
                  *(int *)((param_1->RawRefBoneInfo).AllocatorInstance.Data + lVar16 + 8));
        uVar17 = 0;
        if ((int)uVar13 < (this->Elements).ArrayNum) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FHierarchy *)(*pcVar5)();
          return pFVar10;
        }
        `FReferenceSkeletonLocals::FHierarchy::FHierarchy'::__l5::<lambda_1>::
        operator()<_FReferenceSkeletonLocals::FHierarchy::FHierarchy_::__l5::<lambda_1>_&>
                  (&local_e0,&local_c8,
                   (FElement *)
                   ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20),
                   &local_e0);
        uVar13 = uVar13 + 1;
        lVar16 = lVar16 + 0xc;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
  }
  return this;
}

// GetNewToOldIndexes @ 1475d5e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes
          (FHierarchy *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FElement *pFVar10;
  uint uVar11;
  FElement *pFVar12;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [8];
  <lambda_1> local_60;
  TBitArray<FDefaultBitArrayAllocator> local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar8 = (this->Elements).ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  local_48.NumBits = (this->Elements).ArrayNum;
  local_48.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_48.MaxBits = 0x80;
  uVar8 = local_48.NumBits + 0x1fU >> 5;
  if (local_48.NumBits + 0x1fU >> 5 != 0) {
    if (4 < uVar8) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_48.AllocatorInstance,0,uVar8,4);
      local_48.MaxBits = uVar8 << 5;
    }
    FVar7 = (ForElementType<unsigned_int>)&local_48;
    if (local_48.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar7 = local_48.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar7,0,(ulonglong)uVar8 << 2);
    uVar8 = local_48.NumBits & 0x8000001f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    if (uVar8 != 0) {
      FVar7 = (ForElementType<unsigned_int>)&local_48;
      if (local_48.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_48.AllocatorInstance.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar7 +
                       (longlong)((int)(local_48.NumBits + (local_48.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar8 & 0x1f);
    }
  }
  pFVar4 = (this->Elements).AllocatorInstance.Data;
  local_60.Visited = &local_48;
  iVar3 = (this->Elements).ArrayNum;
  pFVar9 = pFVar4;
  do {
    local_60.__this = this;
    local_60.OutMapping = param_1;
    if (pFVar9 == pFVar4 + (longlong)iVar3 * 0x20) {
LAB_1475d5faf:
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6566475078224052570>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\ReferenceSkeleton.cpp"
                         ,0x15a,"FirstRoot != INDEX_NONE");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_1475d5fdc:
      iVar3 = (this->Elements).ArrayNum;
      pFVar10 = (FElement *)(this->Elements).AllocatorInstance.Data;
      pFVar12 = pFVar10 + iVar3;
      while( true ) {
        if ((this->Elements).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FReferenceSkeletonLocals::FElement,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_68);
        }
        if (pFVar10 == pFVar12) break;
        `FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes'::__l2::<lambda_1>::
        operator()<_FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes_::__l2::<lambda_1>_&>
                  (&local_60,pFVar10,&local_60);
        pFVar10 = pFVar10 + 1;
      }
      if (local_48.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
      }
      return;
    }
    if (*(longlong *)(pFVar9 + 8) == 0) {
      uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar4 >> 5);
      if (uVar8 != 0xffffffff) {
        uVar11 = 0;
        if ((int)uVar8 < iVar3) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        `FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes'::__l2::<lambda_1>::
        operator()<_FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes_::__l2::<lambda_1>_&>
                  (&local_60,
                   (FElement *)
                   ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20),&local_60
                  );
        goto LAB_1475d5fdc;
      }
      goto LAB_1475d5faf;
    }
    pFVar9 = pFVar9 + 0x20;
  } while( true );
}

// SetParent @ 1475fc1c0

void __thiscall
FReferenceSkeletonLocals::FHierarchy::SetParent(FHierarchy *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  
  if (((param_1 < 0) || ((this->Elements).ArrayNum <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Elements.IsValidIndex(InChildIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\ReferenceSkeleton.cpp"
                         ,0x11a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_2 < -1) || ((this->Elements).ArrayNum <= param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InParentIndex >= INDEX_NONE && InParentIndex < Elements.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\ReferenceSkeleton.cpp"
                         ,0x11b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar12 = (this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x20;
  lVar2 = *(longlong *)(pFVar12 + 8);
  local_48 = pFVar12;
  if (lVar2 != 0) {
    local_58 = pFVar12;
    if (((*(FScriptContainerElement ***)(lVar2 + 0x10) <= &local_58) &&
        (&local_58 < *(FScriptContainerElement ***)(lVar2 + 0x10) + *(int *)(lVar2 + 0x1c))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)(lVar2 + 0x18);
    if (iVar6 != 0) {
      iVar13 = 0;
      plVar3 = *(longlong **)(lVar2 + 0x10);
      bVar5 = (FScriptContainerElement *)*plVar3 != local_58;
      lVar9 = 0;
      pFVar12 = local_58;
      iVar10 = 0;
      do {
        iVar11 = iVar10;
        do {
          lVar9 = lVar9 + 1;
          iVar11 = iVar11 + 1;
          if (iVar6 <= lVar9) break;
        } while (bVar5 == ((FScriptContainerElement *)plVar3[lVar9] != pFVar12));
        if (bVar5 != false) {
          if (iVar13 != iVar10) {
            memmove(plVar3 + iVar13,plVar3 + iVar10,(longlong)(iVar11 - iVar10) << 3);
            pFVar12 = local_58;
          }
          iVar13 = iVar13 + (iVar11 - iVar10);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar10 = iVar11;
      } while (lVar9 < iVar6);
      *(int *)(lVar2 + 0x18) = iVar13;
      pFVar12 = local_48;
    }
    *(undefined8 *)(pFVar12 + 8) = 0;
  }
  if ((-1 < param_2) && (param_2 < (this->Elements).ArrayNum)) {
    if ((param_2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = (this->Elements).AllocatorInstance.Data + (longlong)param_2 * 0x20;
    pFVar1 = pFVar8 + 0x10;
    *(FScriptContainerElement **)(pFVar12 + 8) = pFVar8;
    local_50 = pFVar12;
    if (((*(FScriptContainerElement **)&pFVar1->field_0x0 <= (FScriptContainerElement *)&local_50)
        && ((FScriptContainerElement *)&local_50 <
            *(FScriptContainerElement **)&pFVar1->field_0x0 + (longlong)*(int *)(pFVar8 + 0x1c) * 8)
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)(pFVar8 + 0x18);
    if (iVar6 == *(int *)(pFVar8 + 0x1c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar1,(int *)(pFVar8 + 0x1c));
    }
    *(int *)(pFVar8 + 0x18) = iVar6 + 1;
    *(FScriptContainerElement **)
     (*(FScriptContainerElement **)&pFVar1->field_0x0 + (longlong)iVar6 * 8) = local_50;
  }
  return;
}

// AddClass @ 148b24930

FHierarchyNode * __thiscall FHierarchy::AddClass(FHierarchy *this,UClass *param_1)

{
  int iVar1;
  longlong *plVar2;
  FHierarchyNode *pFVar3;
  FHierarchyNode *pFVar4;
  undefined1 *puVar5;
  uint uVar6;
  UClass *local_res8;
  UClass *local_res10;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  local_res8 = param_1;
  if (*(int *)&(this->Nodes).field_0x8 != *(int *)&(this->Nodes).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Nodes).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Nodes).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->Nodes).field_0x48 - 1U & uVar6) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xd8 + *(longlong *)&this->Nodes);
        if ((UClass *)*plVar2 == param_1) {
          if (plVar2 != (longlong *)0x0) {
            pFVar3 = (FHierarchyNode *)(plVar2 + 1);
            goto LAB_148b249e0;
          }
          break;
        }
        iVar1 = (int)plVar2[0x1a];
      } while (iVar1 != -1);
    }
  }
  pFVar3 = TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
           ::EmplaceByHash<UObject_*>
                     ((TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
                       *)&this->Nodes,uVar6,(UObject **)&local_res8);
LAB_148b249e0:
  if ((pFVar3->This == (UObject *)0x0) && (param_1 != (UClass *)0x0)) {
    pFVar3->This = (UObject *)param_1;
    pFVar3->Parent = (UObject *)param_1->_padding_;
    pFVar4 = AddClass(this,(UClass *)param_1->_padding_);
    local_res10 = param_1;
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
              (&pFVar4->Children,(UObject **)&local_res8,(bool *)&local_res10);
  }
  return pFVar3;
}

// AddFlat @ 148b24c00

FHierarchyNode * __thiscall FHierarchy::AddFlat(FHierarchy *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  FHierarchyNode *pFVar3;
  FHierarchyNode *pFVar4;
  undefined1 *puVar5;
  uint uVar6;
  UObject *local_res8;
  UObject *local_res10;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  local_res10 = param_1;
  if (*(int *)&(this->Nodes).field_0x8 != *(int *)&(this->Nodes).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Nodes).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Nodes).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->Nodes).field_0x48 - 1U & uVar6) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xd8 + *(longlong *)&this->Nodes);
        if ((UObject *)*plVar2 == param_1) {
          if (plVar2 != (longlong *)0x0) {
            pFVar3 = (FHierarchyNode *)(plVar2 + 1);
            goto LAB_148b24cb5;
          }
          break;
        }
        iVar1 = (int)plVar2[0x1a];
      } while (iVar1 != -1);
    }
  }
  pFVar3 = TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
           ::EmplaceByHash<UObject_*_const_&>
                     ((TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
                       *)&this->Nodes,uVar6,&local_res10);
LAB_148b24cb5:
  if ((pFVar3->This == (UObject *)0x0) && (local_res10 != (UObject *)0x0)) {
    pFVar3->This = local_res10;
    pFVar3->Parent = (UObject *)0x0;
    pFVar4 = AddFlat(this,(UObject *)0x0);
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              (&pFVar4->Children,&local_res8,(bool *)&local_res10);
  }
  return pFVar3;
}

// AddOuter @ 148b251d0

FHierarchyNode * __thiscall FHierarchy::AddOuter(FHierarchy *this,UObject *param_1)

{
  UObject *pUVar1;
  int iVar2;
  longlong *plVar3;
  FHierarchyNode *pFVar4;
  FHierarchyNode *pFVar5;
  undefined1 *puVar6;
  uint uVar7;
  UObject *local_res8;
  UObject *local_res10;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  local_res10 = param_1;
  if (*(int *)&(this->Nodes).field_0x8 != *(int *)&(this->Nodes).field_0x34) {
    puVar6 = *(undefined1 **)&(this->Nodes).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Nodes).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->Nodes).field_0x48 - 1U & uVar7) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar2 * 0xd8 + *(longlong *)&this->Nodes);
        if ((UObject *)*plVar3 == param_1) {
          if (plVar3 != (longlong *)0x0) {
            pFVar4 = (FHierarchyNode *)(plVar3 + 1);
            goto LAB_148b25285;
          }
          break;
        }
        iVar2 = (int)plVar3[0x1a];
      } while (iVar2 != -1);
    }
  }
  pFVar4 = TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
           ::EmplaceByHash<UObject_*_const_&>
                     ((TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
                       *)&this->Nodes,uVar7,&local_res10);
LAB_148b25285:
  if ((pFVar4->This == (UObject *)0x0) && (local_res10 != (UObject *)0x0)) {
    pFVar4->This = local_res10;
    pUVar1 = *(UObject **)&local_res10->field_0x20;
    pFVar4->Parent = pUVar1;
    pFVar5 = AddOuter(this,pUVar1);
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              (&pFVar5->Children,&local_res8,(bool *)&local_res10);
  }
  return pFVar4;
}

// Compute @ 148b2bac0

FHierarchyNode * __thiscall
FHierarchy::Compute(FHierarchy *this,UObject *param_1,
                   TMap<UObject_*,UE::FSubItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UE::FSubItem,0>_>
                   *param_2,bool param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FHierarchyNode *pFVar6;
  TTuple<UObject_*,UE::FSubItem> *pTVar7;
  ulong64 uVar8;
  FHierarchyNode *pFVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar16;
  uint *puVar17;
  uint local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 local_78;
  undefined4 local_54;
  undefined4 local_34;
  ulonglong uVar15;
  
  pFVar6 = TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
           ::FindChecked((TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
                          *)&this->Nodes,param_1);
  if (pFVar6->Inc < 0) {
    uVar13 = 0;
    uVar12 = 0;
    iVar10 = 1;
    pFVar6->ExcCount = 1;
    uVar14 = 0;
    pFVar6->Exc = 0;
    local_78 = 1;
    uVar11 = uVar13;
    if (param_1 != (UObject *)0x0) {
      pTVar7 = TSet<TTuple<UObject_*,UE::FSubItem>,TDefaultMapHashableKeyFuncs<UObject_*,UE::FSubItem,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<UObject_*,UE::FSubItem>,TDefaultMapHashableKeyFuncs<UObject_*,UE::FSubItem,0>,FDefaultSetAllocator>
                       *)param_2,param_1);
      if ((pTVar7 == (TTuple<UObject_*,UE::FSubItem> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FHierarchyNode *)(*pcVar2)();
        return pFVar6;
      }
      pFVar6->Exc = pFVar6->Exc + *(longlong *)&pTVar7->field_0x18;
      uVar8 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)&pTVar7->field_0x28);
      uVar11 = pFVar6->Exc + uVar8;
      pFVar6->Exc = uVar11;
      if (param_3) {
        iVar10 = *(int *)&(pFVar6->Items).Elements.field_0x8 -
                 *(int *)&(pFVar6->Items).Elements.field_0x34;
      }
      else {
        iVar10 = *(int *)&(pFVar6->Children).Elements.field_0x8 -
                 *(int *)&(pFVar6->Children).Elements.field_0x34;
      }
      iVar10 = pFVar6->ExcCount + iVar10;
      pFVar6->ExcCount = iVar10;
    }
    TStack_d0.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar6->Children).Elements.field_0x10;
    pFVar6->Inc = uVar11;
    pFVar6->IncCount = iVar10;
    local_res8 = 1;
    uVar5 = *(uint *)&(pFVar6->Children).Elements.field_0x28;
    TStack_a0.BaseBitIndex = 0;
    uVar11 = uVar13;
    if (uVar5 != 0) {
      puVar17 = *(uint **)&(pFVar6->Children).Elements.field_0x20;
      uVar11 = (ulonglong)uVar5;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)TStack_d0.Array;
      }
      uVar4 = *puVar17;
      uVar15 = uVar13;
      uVar16 = uVar13;
      TStack_a0.BaseBitIndex = uVar12;
      while (uVar4 == 0) {
        iVar10 = (int)uVar15;
        TStack_a0.BaseBitIndex = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)(uint)TStack_a0.BaseBitIndex;
        uVar14 = iVar10 + 1;
        uVar15 = (ulonglong)uVar14;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_148b2bc4e;
        uVar4 = puVar17[(longlong)iVar10 + 1];
      }
      local_res8 = -uVar4 & uVar4;
      uVar11 = (ulonglong)local_res8 * 2 + 1;
      lVar1 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar4 = (TStack_a0.BaseBitIndex - 1U) + (int)lVar1;
      if ((int)uVar5 < (int)uVar4) {
        uVar4 = uVar5;
      }
      uVar11 = (ulonglong)uVar4;
    }
LAB_148b2bc4e:
    TStack_a0._padding_ = CONCAT44(local_res8,uVar14);
    TStack_d0.CurrentBitIndex = (int)uVar11;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    TStack_a0._28_4_ = local_54;
    TStack_d0._padding_ = TStack_a0._padding_;
    TStack_d0.BaseBitIndex = TStack_a0.BaseBitIndex;
    TStack_d0._28_4_ = local_54;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    local_a8 = &pFVar6->Children;
    TStack_a0.Array = TStack_d0.Array;
    TStack_a0.CurrentBitIndex = TStack_d0.CurrentBitIndex;
    if (TStack_d0.CurrentBitIndex < (int)uVar5) {
      do {
        pFVar9 = Compute(this,*(UObject **)
                               (*(longlong *)&(pFVar6->Children).Elements +
                               (longlong)(int)uVar11 * 0x10),param_2,param_3);
        pFVar6->Inc = pFVar6->Inc + pFVar9->Inc;
        if (!param_3) {
          pFVar6->IncCount = pFVar6->IncCount + pFVar9->IncCount;
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
        uVar11 = (ulonglong)(uint)TStack_d0.CurrentBitIndex;
      } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
    }
    local_a8 = &pFVar6->Items;
    uVar14 = *(uint *)&(pFVar6->Items).Elements.field_0x28;
    TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar6->Items).Elements.field_0x10;
    uVar11 = uVar13;
    TStack_d0.BaseBitIndex = uVar12;
    if (uVar14 == 0) {
LAB_148b2bd7c:
      uVar5 = (uint)local_78;
    }
    else {
      puVar17 = *(uint **)&(pFVar6->Items).Elements.field_0x20;
      uVar11 = (ulonglong)uVar14;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)TStack_d0.Array;
      }
      uVar5 = *puVar17;
      uVar15 = uVar13;
      while (uVar5 == 0) {
        iVar10 = (int)uVar13;
        TStack_d0.BaseBitIndex = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)(uint)TStack_d0.BaseBitIndex;
        uVar12 = iVar10 + 1;
        uVar13 = (ulonglong)uVar12;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
        goto LAB_148b2bd7c;
        uVar5 = puVar17[(longlong)iVar10 + 1];
      }
      uVar5 = -uVar5 & uVar5;
      uVar13 = (ulonglong)uVar5 * 2 + 1;
      lVar1 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar4 = (TStack_d0.BaseBitIndex - 1U) + (int)lVar1;
      if ((int)uVar14 < (int)uVar4) {
        uVar4 = uVar14;
      }
      uVar11 = (ulonglong)uVar4;
    }
    TStack_d0._padding_ = CONCAT44(uVar5,uVar12);
    TStack_a0.CurrentBitIndex = (int)uVar11;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    TStack_d0._28_4_ = local_34;
    TStack_a0._padding_ = TStack_d0._padding_;
    TStack_a0.BaseBitIndex = TStack_d0.BaseBitIndex;
    TStack_a0._28_4_ = local_34;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    TStack_a0.Array = TStack_d0.Array;
    TStack_d0.CurrentBitIndex = TStack_a0.CurrentBitIndex;
    if (TStack_a0.CurrentBitIndex < (int)uVar14) {
      do {
        pFVar9 = Compute(this,*(UObject **)
                               (*(longlong *)&local_a8->Elements + (longlong)(int)uVar11 * 0x10),
                         param_2,param_3);
        pFVar6->Inc = pFVar6->Inc + pFVar9->Inc;
        if (param_3) {
          pFVar6->IncCount = pFVar6->IncCount + pFVar9->IncCount;
        }
        TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
        uVar11 = (ulonglong)(uint)TStack_a0.CurrentBitIndex;
      } while (TStack_a0.CurrentBitIndex < (TStack_a0.Array)->NumBits);
    }
  }
  return pFVar6;
}

// Log @ 148b68330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHierarchy::Log(FHierarchy *this,UObject *param_1,UClass *param_2,bool param_3,int param_4,
               bool param_5)

{
  UObjectBaseUtility *this_00;
  bool bVar1;
  FHierarchyNode *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar1 = false;
  bVar7 = false;
  pFVar2 = TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
           ::FindChecked((TMapBase<UObject_*,FHierarchyNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>_>
                          *)&this->Nodes,param_1);
  if (((param_5) && (pFVar2->Inc < this->Limit)) && (pFVar2->Exc < this->Limit)) {
    return false;
  }
  this_00 = (UObjectBaseUtility *)pFVar2->This;
  if (((*(int *)&(pFVar2->Children).Elements.field_0x8 -
       *(int *)&(pFVar2->Children).Elements.field_0x34) -
      *(int *)&(pFVar2->Items).Elements.field_0x34) + *(int *)&(pFVar2->Items).Elements.field_0x8 ==
      0) {
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pFVar3 = UObjectBaseUtility::GetFullName(this_00,&local_58,(UObject *)0x0,None);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar7 = true;
      }
      else {
        bVar7 = true;
      }
    }
    if ((ulonglong)pFVar2->Inc >> 10 < 10000) {
      pwVar5 = L"%4lldK";
    }
    else if ((ulonglong)pFVar2->Inc >> 0x14 < 10000) {
      pwVar5 = L"%4lldM";
    }
    else {
      pwVar5 = L"%4lldG";
    }
    ::FString::PrintfImpl(&local_68,pwVar5);
    ::FString::PrintfImpl(&local_78,L"%s        %5d %s");
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((bVar7) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogEngine._0_1_) {
      TCString<wchar_t>::Spc(param_4 * 2);
      UE::Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_FHierarchy::Log(UObject*___ptr64,UClass*___ptr64,bool,int,bool)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogEngine);
    }
    goto LAB_148b6875b;
  }
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pFVar3 = UObjectBaseUtility::GetFullName(this_00,&local_48,(UObject *)0x0,None);
    if ((pFVar3->Data).ArrayNum == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
  }
  pwVar5 = L"%4lldK";
  if ((ulonglong)pFVar2->Exc >> 10 < 10000) {
    pwVar4 = L"%4lldK";
  }
  else if ((ulonglong)pFVar2->Exc >> 0x14 < 10000) {
    pwVar4 = L"%4lldM";
  }
  else {
    pwVar4 = L"%4lldG";
  }
  ::FString::PrintfImpl(&local_58,pwVar4);
  if (9999 < (ulonglong)pFVar2->Inc >> 10) {
    if ((ulonglong)pFVar2->Inc >> 0x14 < 10000) {
      pwVar5 = L"%4lldM";
    }
    else {
      pwVar5 = L"%4lldG";
    }
  }
  ::FString::PrintfImpl(&local_68,pwVar5);
  ::FString::PrintfImpl(&local_78,L"%s %sx %5d %s");
  FVar6.Data = local_78.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogEngine._0_1_) {
    TCString<wchar_t>::Spc(param_4 * 2);
    UE::Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_FHierarchy::Log(UObject*___ptr64,UClass*___ptr64,bool,int,bool)___ptr64'
                ::__l29::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  if (((param_3) &&
      (*(int *)&(pFVar2->Children).Elements.field_0x8 !=
       *(int *)&(pFVar2->Children).Elements.field_0x34)) && (4 < (byte)LogEngine._0_1_)) {
    TCString<wchar_t>::Spc(param_4 * 2 + 2);
    UE::Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_FHierarchy::Log(UObject*___ptr64,UClass*___ptr64,bool,int,bool)___ptr64'
                ::__l50::LOG_Static,(FLogCategoryBase *)&LogEngine);
    LogSet(this,&pFVar2->Children,param_2,param_3,param_4 + 2);
LAB_148b6870a:
    if ((*(int *)&(pFVar2->Items).Elements.field_0x8 != *(int *)&(pFVar2->Items).Elements.field_0x34
        ) && (4 < (byte)LogEngine._0_1_)) {
      TCString<wchar_t>::Spc(param_4 * 2 + 2);
      UE::Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_FHierarchy::Log(UObject*___ptr64,UClass*___ptr64,bool,int,bool)___ptr64'
                  ::__l71::LOG_Static,(FLogCategoryBase *)&LogEngine);
    }
  }
  else {
    LogSet(this,&pFVar2->Children,param_2,param_3,param_4 + 2);
    if (param_3) goto LAB_148b6870a;
  }
  LogSet(this,&pFVar2->Items,param_2,param_3,param_4);
LAB_148b6875b:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return true;
}

// LogSet @ 148b68c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHierarchy::LogSet(FHierarchy *this,
                  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1,
                  UClass *param_2,bool param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStackY_198 [32];
  TArray<FHierarchyNode,TSizedDefaultAllocator<32>_> local_168;
  FString local_158;
  FString local_140;
  undefined8 local_128;
  undefined8 uStack_120;
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_118;
  void *local_d8;
  undefined4 local_d0;
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c8;
  void *local_88;
  undefined4 local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar10 = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  SortSet(this,param_1,&local_168);
  iVar7 = local_168.ArrayNum;
  if (0 < local_168.ArrayNum) {
    uVar13 = uVar10;
    do {
      uVar9 = (uint)uVar10;
      uVar5 = 0;
      if ((int)uVar9 < iVar7) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_168.ArrayNum;
      }
      iVar2 = (int)param_2->_padding_;
      lVar11 = *(longlong *)&(*(UObject **)(local_168.AllocatorInstance.Data + uVar13))->field_0x10;
      if ((iVar2 <= *(int *)(lVar11 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar2 * 8) ==
          &param_2->_padding_)) {
        bVar4 = Log(this,*(UObject **)(local_168.AllocatorInstance.Data + uVar13),param_2,param_3,
                    param_4 + 1,(int)(uVar9 + 1) < iVar7);
        iVar7 = local_168.ArrayNum;
        if (!bVar4) {
          if ((int)uVar9 < local_168.ArrayNum) {
            local_118._0_8_ = 0;
            local_128 = 0;
            uStack_120 = 0;
            local_118._8_8_ = 0;
            local_118._32_8_ = 0;
            local_118._40_4_ = 0;
            local_118._52_4_ = 0;
            local_d8 = (void *)0x0;
            local_d0 = 0;
            local_c8._0_8_ = 0;
            local_c8._8_8_ = 0;
            local_c8._32_8_ = 0;
            local_c8._40_4_ = 0;
            local_c8._52_4_ = 0;
            local_88 = (void *)0x0;
            local_70 = 0;
            local_78 = 0;
            local_68 = 0;
            lVar11 = (longlong)(int)uVar9 * 200;
            local_118._44_4_ = 0x80;
            local_118._48_4_ = 0xffffffff;
            local_c8._44_4_ = 0x80;
            local_c8._48_4_ = 0xffffffff;
            do {
              uVar9 = (uint)uVar10;
              uVar12 = ~uVar9 >> 0x1f;
              uVar5 = 0;
              if ((int)uVar9 < iVar7) {
                uVar5 = uVar12;
              }
              if (uVar5 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar7 = local_168.ArrayNum;
              }
              local_70 = local_70 + *(longlong *)(local_168.AllocatorInstance.Data + lVar11 + 0xb8);
              uVar6 = 0;
              uVar5 = uVar6;
              if ((int)uVar9 < iVar7) {
                uVar5 = uVar12;
              }
              if (uVar5 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar7 = local_168.ArrayNum;
              }
              local_78 = local_78 + *(longlong *)(local_168.AllocatorInstance.Data + lVar11 + 0xb0);
              uVar5 = uVar6;
              if ((int)uVar9 < iVar7) {
                uVar5 = uVar12;
              }
              if (uVar5 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar7 = local_168.ArrayNum;
              }
              iVar2 = local_68._4_4_ + *(int *)(local_168.AllocatorInstance.Data + lVar11 + 0xc4);
              if ((int)uVar9 < iVar7) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              local_68._4_4_ = iVar2;
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar7 = local_168.ArrayNum;
              }
              uVar10 = (ulonglong)(uVar9 + 1);
              lVar1 = lVar11 + 0xc0;
              lVar11 = lVar11 + 200;
              local_68 = CONCAT44(local_68._4_4_,
                                  (int)local_68 + *(int *)(local_168.AllocatorInstance.Data + lVar1)
                                 );
            } while ((int)(uVar9 + 1) < iVar7);
            if (local_78 >> 10 < 10000) {
              pwVar8 = L"%4lldK";
            }
            else if (local_78 >> 0x14 < 10000) {
              pwVar8 = L"%4lldM";
            }
            else {
              pwVar8 = L"%4lldG";
            }
            ::FString::PrintfImpl(&local_158,pwVar8);
            ::FString::PrintfImpl(&local_140,L"%s        %5d %s (%d)");
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
            if (4 < (byte)LogEngine._0_1_) {
              iVar7 = param_4 * 2 + 2;
              if (((iVar7 < 0) || (0xff < iVar7)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                     ,0x272,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              UE::Logging::Private::BasicLog<5>
                        (&`public:_void___cdecl_FHierarchy::LogSet(TSet<UObject*___ptr64,DefaultKeyFuncs<UObject*___ptr64,0>,FDefaultSetAllocator>_const&___ptr64,UClass*___ptr64,bool,int)___ptr64'
                          ::__l16::LOG_Static,(FLogCategoryBase *)&LogEngine);
            }
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            local_80 = 0;
            if (local_88 != (void *)0x0) {
              FMemory::Free(local_88);
            }
            TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_c8);
            local_d0 = 0;
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
            TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_118);
            iVar7 = local_168.ArrayNum;
          }
          break;
        }
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar13 = uVar13 + 200;
    } while ((int)(uVar9 + 1) < iVar7);
  }
  DestructItems<FHierarchyNode,int>((FHierarchyNode *)local_168.AllocatorInstance.Data,iVar7);
  if ((FHierarchyNode *)local_168.AllocatorInstance.Data != (FHierarchyNode *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return;
}

// SortSet @ 148b78450

void __thiscall
FHierarchy::SortSet(FHierarchy *this,
                   TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1,
                   TArray<FHierarchyNode,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  FHierarchyNode *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong *puVar12;
  FHierarchyNode *pFVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  FIdentityFunctor local_res10 [8];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  uVar11 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<FHierarchyNode,int>
            ((FHierarchyNode *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,uVar11,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar8 = *(int *)&(param_1->Elements).field_0x28;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  iVar14 = 0;
  iVar15 = 0;
  uVar11 = 1;
  TStack_50.CurrentBitIndex = 0;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_50.Array;
    }
    uVar3 = *puVar16;
    while (uVar3 == 0) {
      lVar9 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      TStack_50.CurrentBitIndex = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148b78542;
      uVar3 = puVar16[lVar9 + 1];
    }
    uVar11 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = (int)lVar9 + -1 + iVar15;
    if (iVar8 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar8;
    }
  }
LAB_148b78542:
  TStack_50._padding_ = CONCAT44(uVar11,iVar14);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar15;
  if (TStack_50.CurrentBitIndex < *(int *)&(param_1->Elements).field_0x28) {
    do {
      uVar2 = *(ulonglong *)
               (*(longlong *)&param_1->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
      uVar11 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      if (*(int *)&(this->Nodes).field_0x8 != *(int *)&(this->Nodes).field_0x34) {
        puVar4 = *(undefined1 **)&(this->Nodes).field_0x40;
        puVar10 = &(this->Nodes).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar10 = puVar4;
        }
        iVar8 = *(int *)(puVar10 +
                        (ulonglong)
                        (*(int *)&(this->Nodes).field_0x48 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
        if (iVar8 != -1) {
          do {
            puVar12 = (ulonglong *)((longlong)iVar8 * 0xd8 + *(longlong *)&this->Nodes);
            if (*puVar12 == uVar2) {
              if (puVar12 == (ulonglong *)0x0) goto LAB_148b78653;
              goto LAB_148b78679;
            }
            iVar8 = (int)puVar12[0x1a];
          } while (iVar8 != -1);
        }
      }
      puVar12 = (ulonglong *)0x0;
LAB_148b78653:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_148b78679:
      pFVar5 = (FHierarchyNode *)(param_2->AllocatorInstance).Data;
      pFVar13 = (FHierarchyNode *)(puVar12 + 1);
      if (((pFVar5 <= pFVar13) && (pFVar13 < pFVar5 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8c8,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar8 + 1;
      FHierarchyNode::FHierarchyNode
                ((FHierarchyNode *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 200),
                 pFVar13);
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  AlgoImpl::
  IntroSortInternal<FHierarchyNode,int,FIdentityFunctor,TDereferenceWrapper<FHierarchyNode,TLess<void>_>_>
            ((FHierarchyNode *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_res10[0],
             (TLess<void> *)local_res10);
  return;
}

