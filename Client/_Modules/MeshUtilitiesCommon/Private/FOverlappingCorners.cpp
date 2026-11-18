// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshUtilitiesCommon
// Functions: 6

// FOverlappingCorners @ 144351890

FOverlappingCorners * __thiscall
FOverlappingCorners::FOverlappingCorners(FOverlappingCorners *this,IMeshView *param_1,float param_2)

{
  int iVar1;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  float fVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  FOverlappingCorners *pFVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  longlong lVar24;
  uint uVar25;
  int *piVar26;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  longlong local_c8;
  longlong local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined1 local_98 [16];
  ForAnyElementType local_88;
  int local_80;
  int local_7c [17];
  
  pTVar2 = &this->Arrays;
  pTVar3 = &this->Sets;
  piVar4 = &(this->IndexBelongsTo).ArrayMax;
  (this->IndexBelongsTo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexBelongsTo).ArrayNum = 0;
  (this->EmptyArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmptyArray).ArrayNum = 0;
  (this->EmptyArray).ArrayMax = 0;
  (this->Arrays).ArrayMax = 0;
  (this->Sets).ArrayMax = 0;
  *piVar4 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Arrays).ArrayNum = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Sets).ArrayNum = 0;
  this->bFinishedAdding = false;
  uVar14 = (**(code **)((longlong)*param_1 + 8))(param_1);
  local_7c[0] = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar14,&local_88,0,local_7c);
    fVar11 = __real_3ebd70a4;
    fVar10 = __real_3ea8f5c3;
    fVar9 = __real_3e99999a;
    iVar21 = 0;
    do {
      puVar16 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x10))(param_1,local_98,iVar21);
      if (local_80 == local_7c[0]) {
        local_80 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_88,local_7c);
      }
      iVar1 = local_80 + 1;
      local_a8 = *puVar16;
      fVar5 = *(float *)(puVar16 + 1);
      *(int *)(local_88.Data + (longlong)local_80 * 8 + 4) = iVar21;
      iVar21 = iVar21 + 1;
      *(float *)&local_88.Data[(longlong)local_80 * 8].field_0x0 =
           (float)((ulonglong)local_a8 >> 0x20) * fVar10 + (float)local_a8 * fVar9 + fVar5 * fVar11;
      local_80 = iVar1;
    } while (iVar21 < (int)uVar14);
  }
  piVar26 = &(this->Arrays).ArrayMax;
  piVar23 = &(this->Sets).ArrayMax;
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndZ,FCompareIndexAndZ>_>
            ((FIndexAndZ *)local_88.Data,local_80,local_res8,(FCompareIndexAndZ *)local_res10);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2->AllocatorInstance).Data;
  iVar21 = (this->Arrays).ArrayNum;
  if (*piVar26 < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar6,iVar21);
    (this->Arrays).ArrayNum = 0;
    if (*piVar26 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar26);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar6,iVar21);
    (this->Arrays).ArrayNum = 0;
  }
  pTVar7 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pTVar3->AllocatorInstance).Data
  ;
  iVar21 = (this->Sets).ArrayNum;
  if (*piVar23 < 0) {
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>(pTVar7,iVar21);
    (this->Sets).ArrayNum = 0;
    if (*piVar23 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&pTVar3->AllocatorInstance,0,piVar23);
    }
  }
  else {
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>(pTVar7,iVar21);
    (this->Sets).ArrayNum = 0;
  }
  this->bFinishedAdding = false;
  piVar23 = &(this->IndexBelongsTo).ArrayNum;
  *piVar23 = 0;
  if (*piVar4 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,(ForAnyElementType *)this,0,piVar4);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar14,(ForAnyElementType *)this,piVar23,piVar4);
  memset((this->IndexBelongsTo).AllocatorInstance.Data,0xff,(longlong)(int)uVar14 << 2);
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (0 < local_80) {
    local_c8 = 0;
    local_c0 = 1;
    iVar21 = local_80;
    uVar20 = 0;
    do {
      uVar18 = uVar20 + 1;
      if ((int)uVar18 < iVar21) {
        uVar25 = ~uVar20 >> 0x1f;
        lVar24 = local_c0;
        uVar19 = uVar18;
        do {
          uVar22 = ~uVar19 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar19 < iVar21) {
            uVar15 = uVar22;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar21 = local_80, bVar13)) {
            pcVar8 = (code *)swi(3);
            pFVar17 = (FOverlappingCorners *)(*pcVar8)();
            return pFVar17;
          }
          FVar12.Data = local_88.Data;
          uVar15 = 0;
          if ((int)uVar20 < iVar21) {
            uVar15 = uVar25;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar21 = local_80, bVar13)) {
            pcVar8 = (code *)swi(3);
            pFVar17 = (FOverlappingCorners *)(*pcVar8)();
            return pFVar17;
          }
          if (param_2 < (float)((uint)(*(float *)&FVar12.Data[lVar24 * 8].field_0x0 -
                                      *(float *)(local_88.Data + local_c8)) & uVar14)) break;
          pcVar8 = *(code **)((longlong)*param_1 + 0x10);
          uVar15 = 0;
          if ((int)uVar20 < iVar21) {
            uVar15 = uVar25;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            pFVar17 = (FOverlappingCorners *)(*pcVar8)();
            return pFVar17;
          }
          (*pcVar8)(param_1,&local_b8,*(undefined4 *)(local_88.Data + local_c8 + 4));
          pcVar8 = *(code **)((longlong)*param_1 + 0x10);
          uVar15 = 0;
          if ((int)uVar19 < local_80) {
            uVar15 = uVar22;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            pFVar17 = (FOverlappingCorners *)(*pcVar8)();
            return pFVar17;
          }
          (*pcVar8)(param_1,&local_a8,*(undefined4 *)(local_88.Data + lVar24 * 8 + 4));
          if ((((float)((uint)(local_b8 - (float)local_a8) & uVar14) <= param_2) &&
              ((float)((uint)(local_b4 - local_a8._4_4_) & uVar14) <= param_2)) &&
             ((float)((uint)(local_b0 - local_a0) & uVar14) <= param_2)) {
            uVar15 = 0;
            if ((int)uVar19 < local_80) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              pFVar17 = (FOverlappingCorners *)(*pcVar8)();
              return pFVar17;
            }
            iVar21 = *(int *)(local_88.Data + lVar24 * 8 + 4);
            uVar15 = 0;
            if ((int)uVar20 < local_80) {
              uVar15 = uVar25;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              pFVar17 = (FOverlappingCorners *)(*pcVar8)();
              return pFVar17;
            }
            Add(this,*(int *)(local_88.Data + local_c8 + 4),iVar21);
          }
          uVar19 = uVar19 + 1;
          lVar24 = lVar24 + 1;
          iVar21 = local_80;
        } while ((int)uVar19 < local_80);
      }
      local_c0 = local_c0 + 1;
      local_c8 = local_c8 + 8;
      uVar20 = uVar18;
    } while ((int)uVar18 < iVar21);
  }
  FinishAdding(this);
  if ((FIndexAndZ *)local_88.Data != (FIndexAndZ *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return this;
}

// FOverlappingCorners @ 144351e70

FOverlappingCorners * __thiscall
FOverlappingCorners::FOverlappingCorners
          (FOverlappingCorners *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  IMeshView local_28;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_20;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_18;
  
  local_28 = (IMeshView)&___7FOverlappingCornersArrayMeshView__6B_;
  local_20 = param_1;
  local_18 = param_2;
  FOverlappingCorners(this,&local_28,param_3);
  return this;
}

// Add @ 144352760

void __thiscall FOverlappingCorners::Add(FOverlappingCorners *this,int param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  int local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20;
  int local_48;
  int local_44 [3];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  if ((param_1 == param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Key != Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\OverlappingCorners.cpp"
                         ,0x56,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->bFinishedAdding != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFinishedAdding == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\OverlappingCorners.cpp"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar10 = (longlong)(int)local_res10[0];
  uVar7 = 0;
  if ((int)local_res10[0] < (this->IndexBelongsTo).ArrayNum) {
    uVar7 = ~local_res10[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)((this->IndexBelongsTo).AllocatorInstance.Data + lVar10 * 4);
  if (uVar7 == 0xffffffff) {
    iVar6 = (this->Arrays).ArrayNum;
    piVar1 = &(this->Arrays).ArrayMax;
    iVar5 = iVar6;
    if (iVar6 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Arrays).AllocatorInstance,piVar1);
      (this->Arrays).ArrayNum = iVar5;
    }
    pFVar11 = (this->Arrays).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    (this->Arrays).ArrayNum = iVar5 + 1;
    pFVar8 = pFVar11 + 0xc;
    *(undefined8 *)&pFVar11->field_0x0 = 0;
    *(undefined8 *)&pFVar11[8].field_0x0 = 0;
    iVar5 = *(int *)pFVar8;
    if (iVar5 < 6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,(ForAnyElementType *)pFVar11,*(int *)&pFVar11[8].field_0x0,(int *)pFVar8);
      iVar5 = *(int *)pFVar8;
    }
    if (((*(uint **)&pFVar11->field_0x0 <= local_res10) &&
        (local_res10 < *(uint **)&pFVar11->field_0x0 + iVar5)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = *(int *)&pFVar11[8].field_0x0;
    if (iVar5 == *(int *)(pFVar11 + 0xc)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar11,(int *)pFVar8);
      *(int *)&pFVar11[8].field_0x0 = iVar5;
    }
    *(int *)&pFVar11[8].field_0x0 = iVar5 + 1;
    *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar5 * 4) = local_res10[0];
    if (((*(uint **)&pFVar11->field_0x0 <= local_res18) &&
        (local_res18 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = *(int *)&pFVar11[8].field_0x0;
    if (iVar5 == *(int *)(pFVar11 + 0xc)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar11,(int *)pFVar8);
    }
    *(int *)&pFVar11[8].field_0x0 = iVar5 + 1;
    *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar5 * 4) = local_res18[0];
    lVar10 = (longlong)(int)local_res10[0];
    uVar7 = 0;
    if ((int)local_res10[0] < (this->IndexBelongsTo).ArrayNum) {
      uVar7 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(int *)((this->IndexBelongsTo).AllocatorInstance.Data + lVar10 * 4) = iVar6;
    lVar10 = (longlong)(int)local_res18[0];
    uVar7 = 0;
    if ((int)local_res18[0] < (this->IndexBelongsTo).ArrayNum) {
      uVar7 = ~local_res18[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(int *)((this->IndexBelongsTo).AllocatorInstance.Data + lVar10 * 4) = iVar6;
  }
  else {
    lVar10 = (longlong)(int)local_res18[0];
    uVar9 = 0;
    if ((int)local_res18[0] < (this->IndexBelongsTo).ArrayNum) {
      uVar9 = ~local_res18[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)((this->IndexBelongsTo).AllocatorInstance.Data + lVar10 * 4) = uVar7;
    uVar9 = 0;
    if ((int)uVar7 < (this->Arrays).ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)
              ((this->Arrays).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10);
    if (this_00->ArrayNum == 1) {
      uVar7 = *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 4 + -4);
      uVar9 = 0;
      if ((int)uVar7 < (this->Sets).ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 ((this->Sets).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x50),local_res8,
                 (bool *)local_res18);
    }
    else {
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (this_00,(int *)local_res18);
      if (0xc < this_00->ArrayNum) {
        iVar6 = (this->Sets).ArrayNum;
        piVar1 = &(this->Sets).ArrayMax;
        local_48 = iVar6;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&(this->Sets).AllocatorInstance,piVar1);
          (this->Sets).ArrayNum = iVar6;
        }
        (this->Sets).ArrayNum = iVar6 + 1;
        this_01 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                  ((this->Sets).AllocatorInstance.Data + (longlong)iVar6 * 0x50);
        DefaultConstructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>(this_01,1);
        iVar6 = this_00->ArrayNum;
        pFVar8 = (this_00->AllocatorInstance).Data;
        if ((iVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = *(int *)&(this_01->Elements).field_0x8 - *(int *)&(this_01->Elements).field_0x34;
        uVar9 = uVar7 + iVar6;
        if (uVar7 < uVar9) {
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,uVar9);
          if (uVar9 < 4) {
            iVar5 = 1;
          }
          else {
            uVar2 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
            lVar10 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            local_res20 = (undefined4)lVar10;
            iVar5 = 1 << ((byte)lVar10 & 0x1f);
          }
          if ((this_01->HashSize == 0) || (this_01->HashSize < iVar5)) {
            this_01->HashSize = iVar5;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_01);
          }
        }
        pFVar11 = pFVar8 + (longlong)iVar6 * 4;
        for (; pFVar8 != pFVar11; pFVar8 = pFVar8 + 4) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (this_01,local_44,(bool *)pFVar8);
        }
        iVar6 = this_00->ArrayMax;
        piVar1 = &this_00->ArrayMax;
        this_00->ArrayNum = 0;
        if (iVar6 < 1) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,(ForAnyElementType *)this_00,0,piVar1);
          iVar6 = *piVar1;
        }
        pFVar8 = (this_00->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar8 + (longlong)iVar6 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = this_00->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)this_00,piVar1);
        }
        this_00->ArrayNum = iVar6 + 1;
        *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_48;
      }
    }
  }
  return;
}

// FinishAdding @ 144359110

void __thiscall FOverlappingCorners::FinishAdding(FOverlappingCorners *this)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_e8;
  uint local_e4;
  int local_e0;
  int local_dc;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  if ((this->bFinishedAdding != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFinishedAdding == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\OverlappingCorners.cpp"
                         ,0x85,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_e4 = (this->Arrays).ArrayNum;
  uVar5 = (ulonglong)(int)local_e4;
  pFVar10 = (this->Arrays).AllocatorInstance.Data;
  local_res8 = SUB81(this,0);
  pFVar9 = pFVar10 + uVar5 * 0x10;
  local_d0 = pFVar9;
  do {
    uVar11 = 0;
    if ((this->Arrays).ArrayNum != (int)uVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar9) {
      DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 (this->Sets).AllocatorInstance.Data,(this->Sets).ArrayNum);
      (this->Sets).ArrayNum = 0;
      if ((this->Sets).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,&(this->Sets).AllocatorInstance,0,&(this->Sets).ArrayMax);
      }
      this->bFinishedAdding = true;
      return;
    }
    if (*(int *)&pFVar10[8].field_0x0 == 1) {
      uVar6 = *(uint *)(*(longlong *)&pFVar10->field_0x0 +
                       (longlong)*(int *)&pFVar10[8].field_0x0 * 4 + -4);
      uVar14 = uVar11;
      if ((int)uVar6 < (this->Sets).ArrayNum) {
        uVar14 = ~uVar6 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar13 = (this->Sets).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x50;
      uVar6 = *(int *)(pFVar13 + 8) - *(int *)(pFVar13 + 0x34);
      local_d8 = pFVar13;
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      iVar8 = *(int *)(pFVar10 + 0xc);
      *(undefined4 *)&pFVar10[8].field_0x0 = 0;
      if (iVar8 < (int)uVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar6,(ForAnyElementType *)pFVar10,0,(int *)(pFVar10 + 0xc));
      }
      uVar6 = *(uint *)(pFVar13 + 0x28);
      local_b8 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar13 + 0x10);
      uStack_bc = 1;
      uStack_ac = uVar11;
      local_a8 = uVar11;
      if (uVar6 != 0) {
        pTVar12 = local_b8;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar13 + 0x20) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar13 + 0x20);
        }
        uVar14 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
        uVar11 = 0;
        local_a8 = 0;
        while (uVar14 == 0) {
          lVar7 = (longlong)(int)uVar11;
          local_a8 = local_a8 + 0x20;
          uVar11 = uVar11 + 1;
          uStack_ac = uVar6;
          if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
          goto LAB_1443592d1;
          uVar14 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar7 * 4 + 4);
        }
        uStack_bc = -uVar14 & uVar14;
        uVar5 = (ulonglong)uStack_bc * 2 + 1;
        lVar7 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_e0 = (int)lVar7;
        uStack_ac = (local_a8 - 1) + local_e0;
        if ((int)uVar6 < (int)uStack_ac) {
          uStack_ac = uVar6;
        }
      }
LAB_1443592d1:
      uVar6 = *(uint *)(pFVar13 + 0x28);
      uStack_a4 = local_4c;
      iStack_a0 = *(int *)(pFVar13 + 8) - *(int *)(pFVar13 + 0x34);
      uVar14 = uVar6 & 0xffffffe0;
      TStack_90._padding_ = CONCAT44(uStack_bc,uVar11);
      uStack_b0 = 0xffffffff;
      TStack_90.CurrentBitIndex = uStack_ac;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar8 = (int)uVar6 >> 5;
      TStack_90._28_4_ = local_4c;
      TStack_90.BaseBitIndex = local_a8;
      uStack_70 = CONCAT44(uStack_9c,iStack_a0);
      local_c8 = pFVar13;
      uStack_c0 = uVar11;
      local_98 = pFVar13;
      TStack_90.Array = local_b8;
      if (((int)uVar6 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar2 = local_d8;
      uVar11 = *(uint *)(pFVar13 + 0x28);
      if (uVar6 != uVar11) {
        pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar13 + 0x10);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar13 + 0x20) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar13 + 0x20);
        }
        uVar6 = -1 << ((byte)uVar6 & 0x1f) &
                *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
        while (uVar6 == 0) {
          lVar7 = (longlong)iVar8;
          uVar14 = uVar14 + 0x20;
          iVar8 = iVar8 + 1;
          uVar6 = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_1443593f0;
          uVar6 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar7 * 4 + 4);
        }
        uVar5 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_dc = (int)lVar7;
        uVar6 = local_dc + -1 + uVar14;
        if ((int)uVar11 < (int)uVar6) {
          uVar6 = uVar11;
        }
      }
LAB_1443593f0:
      while( true ) {
        pFVar3 = local_98;
        if (*(int *)(local_98 + 8) - *(int *)(local_98 + 0x34) != (int)uStack_70) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_90.CurrentBitIndex == uVar6) &&
            (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar13 + 0x10))) &&
           (pFVar9 = local_d0, pFVar3 == pFVar2)) break;
        local_e8 = *(undefined4 *)(*(longlong *)pFVar3 + (longlong)TStack_90.CurrentBitIndex * 0xc);
        if (((*(undefined4 **)&pFVar10->field_0x0 <= &local_e8) &&
            (&local_e8 < *(undefined4 **)&pFVar10->field_0x0 + *(int *)(pFVar10 + 0xc))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar8 = *(int *)&pFVar10[8].field_0x0;
        if (iVar8 == *(int *)(pFVar10 + 0xc)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 0xc));
        }
        *(int *)&pFVar10[8].field_0x0 = iVar8 + 1;
        *(undefined4 *)(*(longlong *)&pFVar10->field_0x0 + (longlong)iVar8 * 4) = local_e8;
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              (*(int **)&pFVar10->field_0x0,*(int *)&pFVar10[8].field_0x0,local_res8,
               (TLess<void> *)local_res20);
    uVar5 = (ulonglong)local_e4;
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// GetAllocatedSize @ 144359ca0

uint __thiscall FOverlappingCorners::GetAllocatedSize(FOverlappingCorners *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  undefined1 local_res8 [8];
  
  iVar3 = (this->Sets).ArrayMax;
  iVar11 = (this->Arrays).ArrayNum;
  pFVar8 = (this->Arrays).AllocatorInstance.Data;
  iVar10 = 0;
  iVar4 = (this->IndexBelongsTo).ArrayMax;
  iVar5 = (this->Arrays).ArrayMax;
  pFVar9 = pFVar8 + (longlong)iVar11 * 0x10;
  while( true ) {
    if ((this->Arrays).ArrayNum != iVar11) {
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    pFVar1 = pFVar8 + 0xc;
    pFVar8 = pFVar8 + 0x10;
    iVar10 = iVar10 + *(int *)pFVar1 * 4;
  }
  iVar6 = (this->Sets).ArrayNum;
  iVar11 = 0;
  pFVar8 = (this->Sets).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar6 * 0x50;
  while( true ) {
    if ((this->Sets).ArrayNum != iVar6) {
      `TCheckedPointerIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    pFVar1 = pFVar8 + 0xc;
    pFVar2 = pFVar8 + 0x2c;
    iVar7 = *(uint *)(pFVar8 + 0x48) * 4;
    if (*(uint *)(pFVar8 + 0x48) < 2) {
      iVar7 = 0;
    }
    pFVar8 = pFVar8 + 0x50;
    iVar11 = iVar7 + iVar11 + ((*(int *)pFVar2 + 0x1fU >> 5) + *(int *)pFVar1 * 3) * 4;
  }
  return iVar11 + iVar10 + (iVar4 + (iVar3 * 5 + iVar5) * 4) * 4;
}

// Init @ 14435a1c0

void __thiscall FOverlappingCorners::Init(FOverlappingCorners *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  
  piVar1 = &(this->Arrays).ArrayMax;
  pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this->Arrays).AllocatorInstance.Data;
  iVar3 = (this->Arrays).ArrayNum;
  if ((this->Arrays).ArrayMax < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar3);
    (this->Arrays).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Arrays).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar3);
    (this->Arrays).ArrayNum = 0;
  }
  piVar1 = &(this->Sets).ArrayMax;
  pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
           (this->Sets).AllocatorInstance.Data;
  iVar3 = (this->Sets).ArrayNum;
  if ((this->Sets).ArrayMax < 0) {
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>(pTVar5,iVar3);
    (this->Sets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->Sets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>(pTVar5,iVar3);
    (this->Sets).ArrayNum = 0;
  }
  this->bFinishedAdding = false;
  if (-1 < param_1) {
    piVar1 = &(this->IndexBelongsTo).ArrayMax;
    piVar2 = &(this->IndexBelongsTo).ArrayNum;
    *piVar2 = 0;
    if ((this->IndexBelongsTo).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,(ForAnyElementType *)this,piVar2,piVar1);
    memset((this->IndexBelongsTo).AllocatorInstance.Data,0xff,(longlong)param_1 << 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

