// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 33

// operator() @ 1440163d0

void __thiscall
`FGeometryCollectionConvexUtility::CopyChildConvexes'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  void *_Src;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  int local_res10 [2];
  uint local_38 [2];
  ForAnyElementType local_30;
  int local_28;
  int local_24 [3];
  
  plVar1 = *(longlong **)((longlong)this + 0x20);
  uVar8 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar11 = *plVar1;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = *(int *)(lVar11 + 8 + (longlong)param_1 * 0x10);
  lVar10 = (longlong)local_28;
  _Src = *(void **)(lVar11 + (longlong)param_1 * 0x10);
  if (local_28 == 0) {
    local_24[0] = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_28,0,&local_30,local_28,local_24);
    memcpy(local_30.Data,_Src,lVar10 << 2);
    iVar6 = local_28;
  }
  bVar4 = false;
  if (iVar6 == 0) {
    iVar5 = 0;
    if (((local_30.Data <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 < local_30.Data + (longlong)local_24[0] * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), iVar5 = local_28, bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar5 == local_24[0]) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_30,local_24);
    }
    iVar6 = iVar5 + 1;
    *(int *)(local_30.Data + (longlong)iVar5 * 4) = local_res10[0];
    bVar4 = iVar6 == 0;
    local_28 = iVar6;
  }
  if (!bVar4 && -1 < iVar6) {
    if ((iVar6 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar6 = local_28, bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    do {
      iVar9 = iVar6 + -1;
      uVar8 = *(uint *)(local_30.Data + (longlong)iVar9 * 4);
      iVar5 = (iVar6 - iVar9) + -1;
      if (iVar5 != 0) {
        memmove(local_30.Data + (longlong)iVar9 * 4,local_30.Data + (longlong)iVar9 * 4 + 4,
                (longlong)iVar5 << 2);
        iVar6 = local_28;
      }
      local_28 = iVar6 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_30,local_28,local_24);
      lVar11 = **(longlong **)this;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar11 + 0x1b8)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      local_38[0] = uVar8;
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
      if (*(int *)(*(longlong *)(lVar11 + 0x1b0) + (longlong)(int)uVar8 * 4) ==
          *(int *)((longlong)this + 0x18)) {
LAB_1440167f0:
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
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
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_38[0];
      }
      else {
        uVar8 = 0;
        if (*(char *)((longlong)this + 8) == '\0') {
          lVar10 = (longlong)(int)local_38[0];
          lVar11 = **(longlong **)((longlong)this + 0x10);
          uVar7 = uVar8;
          if ((int)local_38[0] < *(int *)(lVar11 + 0x18)) {
            uVar7 = ~local_38[0] >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar11 = *(longlong *)(lVar11 + 0x10);
          if (0 < *(int *)(lVar10 * 0x50 + 8 + lVar11) - *(int *)(lVar10 * 0x50 + 0x34 + lVar11))
          goto LAB_1440167f0;
        }
        lVar11 = (longlong)(int)local_38[0];
        plVar1 = *(longlong **)((longlong)this + 0x20);
        uVar7 = uVar8;
        if ((int)local_38[0] < (int)plVar1[1]) {
          uVar7 = ~local_38[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (0 < *(int *)(*plVar1 + 8 + lVar11 * 0x10)) {
          lVar11 = (longlong)(int)local_38[0];
          plVar1 = *(longlong **)((longlong)this + 0x20);
          if ((int)local_38[0] < (int)plVar1[1]) {
            uVar8 = ~local_38[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar12 = (ForAnyElementType *)(*plVar1 + lVar11 * 0x10);
          if ((&local_30 == pFVar12) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = *(int *)&pFVar12[1].Data;
          if (iVar6 != 0) {
            iVar5 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,iVar6,&local_30,&local_28,local_24);
            memcpy(local_30.Data + (longlong)iVar5 * 4,pFVar12->Data,(longlong)iVar6 << 2);
          }
        }
      }
      iVar6 = local_28;
    } while (0 < local_28);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return;
}

// operator() @ 144016a30

TRefCountPtr<Chaos::FConvex> __thiscall
`FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::__l2::<lambda_1>::operator()
          (void *this,FConvex *param_1,TTransform<double> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  TRefCountPtr<Chaos::FConvex> TVar12;
  FConvex *pFVar13;
  int iVar14;
  undefined8 *puVar15;
  double *in_R9;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_res10 [8];
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_70 [5];
  
  fVar16 = (float)in_R9[2];
  fVar17 = (float)in_R9[3];
  iVar2 = *(int *)((param_2->Translation).ZW.m128d_f64 + 1);
  puVar15 = (undefined8 *)(param_2->Translation).ZW.m128d_f64[0];
  iVar14 = 0;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  puVar1 = (undefined8 *)((longlong)puVar15 + (longlong)iVar2 * 0xc);
  fVar24 = (float)*in_R9;
  fVar25 = (float)in_R9[1];
  dVar4 = in_R9[4];
  dVar5 = in_R9[5];
  dVar6 = in_R9[8];
  dVar7 = in_R9[9];
  dVar8 = in_R9[6];
  dVar9 = in_R9[10];
  while( true ) {
    if (*(int *)((param_2->Translation).ZW.m128d_f64 + 1) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<float,3>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
      iVar14 = local_70[0].ArrayNum;
    }
    if (puVar15 == puVar1) break;
    fVar21 = (float)*puVar15 * (float)dVar6;
    fVar22 = (float)((ulonglong)*puVar15 >> 0x20) * (float)dVar7;
    fVar23 = *(float *)(puVar15 + 1) * (float)dVar9;
    fVar18 = fVar22 * fVar24 - fVar21 * fVar25;
    fVar19 = fVar23 * fVar25 - fVar22 * fVar16;
    fVar20 = fVar21 * fVar16 - fVar23 * fVar24;
    fVar19 = fVar19 + fVar19;
    fVar20 = fVar20 + fVar20;
    fVar18 = fVar18 + fVar18;
    local_88 = CONCAT44(fVar17 * fVar20 + fVar22 + (fVar19 * fVar16 - fVar24 * fVar18) +
                        (float)dVar5,
                        fVar17 * fVar19 + fVar21 + (fVar18 * fVar25 - fVar16 * fVar20) +
                        (float)dVar4);
    local_80 = fVar17 * fVar18 + fVar23 + (fVar20 * fVar24 - fVar25 * fVar19) + (float)dVar8;
    iVar11 = iVar14;
    local_7c = local_88;
    local_74 = local_80;
    if ((local_70[0].AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
       ((FScriptContainerElement *)&local_88 <
        local_70[0].AllocatorInstance.Data + (longlong)local_70[0].ArrayMax * 0xc)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        TVar12.Reference = (FConvex *)(*pcVar3)();
        return (TRefCountPtr<Chaos::FConvex>)TVar12.Reference;
      }
      iVar11 = local_70[0].ArrayNum;
    }
    if (iVar11 == local_70[0].ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&local_70[0].AllocatorInstance,&local_70[0].ArrayMax);
    }
    iVar14 = iVar11 + 1;
    local_70[0].ArrayNum = iVar14;
    puVar15 = (undefined8 *)((longlong)puVar15 + 0xc);
    *(undefined8 *)(local_70[0].AllocatorInstance.Data + (longlong)iVar11 * 0xc) = local_88;
    *(float *)(local_70[0].AllocatorInstance.Data + (longlong)iVar11 * 0xc + 8) = local_80;
  }
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 == (FConvex *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    pFVar13 = Chaos::FConvex::FConvex(pFVar13,local_70,__real_3f1a36e2e0000000,Default);
    param_1->_padding_ = (longlong)pFVar13;
    if (pFVar13 != (FConvex *)0x0) {
      LOCK();
      *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
      UNLOCK();
    }
  }
  if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  return (TRefCountPtr<Chaos::FConvex>)param_1;
}

// operator() @ 14401d360

void __thiscall
`FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::__l2::<lambda_2>::operator()
          (void *this,TArray<TRefCountPtr<Chaos::FConvex>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 local_res10 [8];
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  *local_res18;
  int local_res20;
  int local_f0 [2];
  longlong local_e8;
  int local_e0;
  int local_dc;
  int local_d8 [2];
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_res18 = param_2;
  iVar8 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x60))();
  local_res20 = iVar8;
  FManagedArrayCollection::Resize
            (*(FManagedArrayCollection **)this,param_1->ArrayNum + iVar8,
             FTransformCollection::ConvexGroup);
  iVar10 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar10) {
    lVar14 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar12 < iVar10) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar9 = *(longlong *)((longlong)this + 8);
      pFVar16 = (param_1->AllocatorInstance).Data + lVar14;
      uVar15 = 0;
      if ((int)(uVar12 + iVar8) < *(int *)(lVar9 + 0x18)) {
        uVar15 = ~(uVar12 + iVar8) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = (FScriptContainerElement *)
                ((longlong)iVar8 * 8 + lVar14 + *(longlong *)(lVar9 + 0x10));
      if (pFVar11 != pFVar16) {
        puVar5 = *(undefined8 **)pFVar11;
        *(longlong *)pFVar11 = *(longlong *)pFVar16;
        *(longlong *)pFVar16 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar5 + 1);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar10 == 1) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
      }
      iVar10 = param_1->ArrayNum;
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 8;
      param_2 = local_res18;
    } while ((int)uVar12 < iVar10);
  }
  iVar10 = param_2->ArrayNum;
  uVar12 = 0;
  if (0 < iVar10) {
    local_e8 = 0;
    do {
      lVar14 = local_e8;
      uVar15 = 0;
      if ((int)uVar12 < iVar10) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iStack_c0 = 0;
      pFVar16 = (param_2->AllocatorInstance).Data + lVar14;
      iVar10 = *(int *)(pFVar16 + 0x28);
      pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar16 + 0x10);
      local_a8 = 0;
      uStack_bc = 1;
      iStack_ac = 0;
      if (iVar10 != 0) {
        pTVar17 = pTVar2;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar16 + 0x20) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar16 + 0x20);
        }
        uVar15 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
        while (uVar15 == 0) {
          lVar14 = (longlong)iStack_c0;
          local_a8 = local_a8 + 0x20;
          iStack_c0 = iStack_c0 + 1;
          iStack_ac = iVar10;
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
          goto LAB_14401d5ce;
          uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        }
        uStack_bc = -uVar15 & uVar15;
        uVar3 = (ulonglong)uStack_bc * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_e0 = (int)lVar14;
        iStack_ac = local_a8 + -1 + local_e0;
        if (iVar10 < iStack_ac) {
          iStack_ac = iVar10;
        }
      }
LAB_14401d5ce:
      uVar15 = *(uint *)(pFVar16 + 0x28);
      uStack_a4 = local_4c;
      iStack_a0 = *(int *)(pFVar16 + 8) - *(int *)(pFVar16 + 0x34);
      uVar13 = uVar15 & 0xffffffe0;
      TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
      uStack_b0 = 0xffffffff;
      TStack_90.CurrentBitIndex = iStack_ac;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar8 = (int)uVar15 >> 5;
      TStack_90._28_4_ = local_4c;
      TStack_90.BaseBitIndex = local_a8;
      uStack_70 = CONCAT44(uStack_9c,iStack_a0);
      local_d0 = pFVar16;
      local_c8 = pFVar16;
      local_b8 = pTVar2;
      local_98 = pFVar16;
      TStack_90.Array = pTVar2;
      if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = local_d0;
      uVar4 = *(uint *)(pFVar16 + 0x28);
      lVar14 = local_e8;
      if (uVar15 != uVar4) {
        pTVar17 = pTVar2;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar16 + 0x20) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar16 + 0x20);
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) &
                 *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
        while (uVar15 == 0) {
          lVar9 = (longlong)iVar8;
          uVar13 = uVar13 + 0x20;
          iVar8 = iVar8 + 1;
          uVar15 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_14401d6e0;
          uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar9 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_dc = (int)lVar9;
        uVar15 = local_dc + -1 + uVar13;
        if ((int)uVar4 < (int)uVar15) {
          uVar15 = uVar4;
        }
      }
LAB_14401d6e0:
      while( true ) {
        pFVar16 = local_98;
        if (*(int *)(local_98 + 8) - *(int *)(local_98 + 0x34) != (int)uStack_70) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_90.CurrentBitIndex == uVar15) && (TStack_90.Array == pTVar2)) &&
           (pFVar16 == pFVar11)) break;
        iVar10 = *(int *)(*(longlong *)pFVar16 + (longlong)TStack_90.CurrentBitIndex * 0xc);
        lVar9 = *(longlong *)((longlong)this + 0x10);
        uVar13 = 0;
        if ((int)uVar12 < *(int *)(lVar9 + 0x18)) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar14 = local_e8;
        local_f0[0] = local_res20 + iVar10;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   (*(longlong *)(lVar9 + 0x10) + local_e8),local_d8,(bool *)local_f0);
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
      local_e8 = lVar14 + 0x50;
      uVar12 = uVar12 + 1;
      iVar10 = local_res18->ArrayNum;
      param_2 = local_res18;
    } while ((int)uVar12 < iVar10);
  }
  return;
}

// operator() @ 14401dbe0

void __thiscall
`FGeometryCollectionConvexUtility::SetVolumeAttributes'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x78) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x18)) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  }
  uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x10) + (longlong)param_1 * 4);
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0x18)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar5 * 4) == 1) {
    plVar2 = *(longlong **)((longlong)this + 0x20);
    uVar6 = 0;
    if ((int)uVar5 < (int)plVar2[1]) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    dVar7 = ::`anonymous_namespace'::ComputeGeometryVolume
                      ((FManagedArrayCollection *)**(undefined8 **)((longlong)this + 0x18),param_1,
                       (TTransform<double> *)((longlong)(int)uVar5 * 0x60 + *plVar2),
                       __real_3ff0000000000000);
    plVar2 = *(longlong **)((longlong)this + 0x10);
    uVar5 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
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
    }
    *(float *)(*plVar2 + (longlong)param_1 * 4) = (float)dVar7;
  }
  return;
}

// operator() @ 14401ecd0

void __thiscall
`FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::__l58::<lambda_3>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  FConvex *pFVar2;
  int iVar3;
  void *this_00;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TRefCountPtr<Chaos::FConvex> TVar9;
  uint uVar10;
  undefined8 *local_res8;
  
  this_00 = *(void **)((longlong)this + 8);
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < *(int *)(*(longlong *)((longlong)this + 0x10) + 8)) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  plVar4 = *(longlong **)((longlong)this + 0x10);
  uVar8 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TVar9 = GenerateLeafConvexHulls'::__l2::<lambda_1>::operator()
                    (this_00,(FConvex *)&local_res8,
                     *(TTransform<double> **)((longlong)param_1 * 0x70 + *plVar4));
  plVar4 = *(longlong **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar2 = (FConvex *)(*plVar4 + (longlong)param_1 * 8);
  if (pFVar2 != TVar9.Reference) {
    puVar5 = (undefined8 *)pFVar2->_padding_;
    pFVar2->_padding_ = (TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (*(int *)((longlong)local_res8 + 0xc) == 0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// operator() @ 14401f5d0

TVector<double> * __thiscall
`FGeometryCollectionConvexUtility::MergeHullsOnTransforms'::__l22::<lambda_4>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  TVector<float,3> *pTVar8;
  
  plVar3 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pTVar8 = Chaos::FConvex::GetVertex(*(FConvex **)(*plVar3 + (longlong)param_1 * 8),param_2);
  fVar1 = *(float *)&pTVar8->field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)pTVar8;
  fVar2 = *(float *)&pTVar8->field_0x8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
  return __return_storage_ptr__;
}

// operator() @ 1440205f0

TVector<double> * __thiscall
`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l65
::<lambda_9>::operator()(void *this,TVector<double> *__return_storage_ptr__,int param_1,int param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  TVector<double> *pTVar19;
  TVector<float,3> *pTVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  plVar6 = *(longlong **)this;
  uVar18 = 0;
  if (param_1 < (int)plVar6[1]) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TVector<double> *)(*pcVar8)();
      return pTVar19;
    }
  }
  lVar21 = (longlong)param_1 * 0x70;
  pTVar20 = Chaos::FConvex::GetVertex(*(FConvex **)(*plVar6 + lVar21),param_2);
  plVar6 = *(longlong **)this;
  fVar2 = *(float *)pTVar20;
  fVar3 = *(float *)&pTVar20->field_0x4;
  fVar4 = *(float *)&pTVar20->field_0x8;
  uVar18 = 0;
  if (param_1 < (int)plVar6[1]) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TVector<double> *)(*pcVar8)();
      return pTVar19;
    }
  }
  lVar7 = *plVar6;
  auVar5 = *(undefined1 (*) [16])(lVar7 + 0x20 + lVar21);
  pdVar1 = (double *)(lVar7 + 0x60 + lVar21);
  dVar13 = (double)fVar4 * *pdVar1;
  dVar14 = pdVar1[1] * 0.0;
  pdVar1 = (double *)(lVar7 + 0x50 + lVar21);
  dVar15 = *(double *)(lVar7 + lVar21 + 0x28);
  dVar11 = *pdVar1 * (double)fVar2;
  dVar12 = pdVar1[1] * (double)fVar3;
  uVar29 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar22 = *(undefined1 (*) [16])(lVar7 + 0x10 + lVar21);
  auVar24 = blendpd(auVar22,auVar5,2);
  auVar30._8_4_ = SUB84(dVar12,0);
  auVar30._0_8_ = dVar11;
  auVar30._12_4_ = uVar29;
  dVar10 = auVar5._0_8_;
  auVar31._0_8_ = auVar30._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar11;
  auVar31._8_8_ = dVar13 * auVar22._8_8_ - dVar10 * dVar12;
  auVar32._8_4_ = SUB84(dVar12,0);
  auVar32._0_8_ = dVar11;
  auVar32._12_4_ = uVar29;
  auVar22._8_4_ = SUB84(dVar14,0);
  auVar22._0_8_ = dVar13;
  auVar22._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  auVar22 = blendpd(auVar32,auVar22,2);
  auVar23._0_8_ = auVar22._0_8_ * dVar10 - auVar24._0_8_ * dVar13;
  auVar23._8_8_ = auVar22._8_8_ * auVar5._8_8_ - auVar24._8_8_ * dVar14;
  auVar22 = *(undefined1 (*) [16])(lVar7 + 0x10 + lVar21);
  auVar32 = blendpd(auVar31,auVar23,2);
  auVar33._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar33._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  dVar14 = auVar31._8_8_ + auVar31._8_8_;
  dVar9 = auVar23._0_8_ + auVar23._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar27._8_4_ = SUB84(dVar9,0);
  auVar27._0_8_ = dVar14;
  auVar27._12_4_ = uVar29;
  auVar25._8_4_ = SUB84(dVar9,0);
  auVar25._0_8_ = dVar14;
  auVar25._12_4_ = uVar29;
  auVar32 = blendpd(auVar25,auVar33,2);
  auVar28._0_8_ = auVar27._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar14;
  auVar28._8_8_ = auVar33._0_8_ * auVar22._8_8_ - dVar10 * dVar9;
  auVar24._8_4_ = SUB84(auVar28._8_8_,0);
  auVar24._0_8_ = auVar28._0_8_;
  auVar24._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
  auVar22 = blendpd(auVar22,auVar5,2);
  dVar16 = *(double *)(lVar7 + 0x40 + lVar21);
  auVar26._0_8_ = auVar32._0_8_ * dVar10 - auVar22._0_8_ * auVar33._0_8_;
  auVar26._8_8_ = auVar32._8_8_ * auVar5._8_8_ - auVar22._8_8_ * auVar33._8_8_;
  auVar22 = blendpd(auVar28,auVar26,2);
  pdVar1 = (double *)(lVar7 + 0x30 + lVar21);
  dVar10 = dVar9 * dVar15 + dVar12 + auVar26._0_8_ + pdVar1[1];
  auVar5._8_4_ = SUB84(dVar10,0);
  auVar5._0_8_ = dVar14 * dVar15 + dVar11 + auVar24._8_8_ + *pdVar1;
  auVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar33._0_8_ * dVar15 + dVar13 + auVar22._0_8_ + dVar16;
  return __return_storage_ptr__;
}

// ComputeLeafHulls @ 144029c40

FConvexHulls * __cdecl
FGeometryCollectionConvexUtility::ComputeLeafHulls
          (FConvexHulls *__return_storage_ptr__,FGeometryCollection *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,double param_3,
          double param_4,TFunction<bool___cdecl(int)> *param_5,FConvexDecompositionSettings *param_6
          ,TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_>
           *param_7,
          TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
          *param_8,TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                   *param_9)

{
  FName FVar1;
  bool bVar2;
  FConvexHulls *pFVar3;
  FName *pFVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  code *pcVar7;
  TManagedArray<int> ***pppTVar8;
  TManagedArray<int> **local_d8;
  TManagedArray<int> *local_d0;
  TManagedArray<int> **local_c8;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  *local_c0;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  *local_b8;
  TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_> *local_b0
  ;
  FConvexDecompositionSettings *local_a8;
  code *local_a0;
  TManagedArray<int> ***local_98;
  FName local_90;
  FName local_88 [2];
  TFunction<bool___cdecl(int)> local_78;
  
  local_a8 = param_6;
  local_b0 = param_7;
  local_b8 = param_8;
  local_c0 = param_9;
  if (param_1 == (FGeometryCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryCollection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                       ,0x6c7,L"");
    if (bVar2) {
      pcVar7 = (code *)swi(3);
      pFVar3 = (FConvexHulls *)(*pcVar7)();
      return pFVar3;
    }
  }
  if (__real_4058f9999999999a <= param_4) {
    param_4 = __real_4058f9999999999a;
  }
  (__return_storage_ptr__->Hulls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Hulls).ArrayNum = 0;
  (__return_storage_ptr__->Hulls).ArrayMax = 0;
  (__return_storage_ptr__->TransformToHullsIndices).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TransformToHullsIndices).ArrayNum = 0;
  (__return_storage_ptr__->TransformToHullsIndices).ArrayMax = 0;
  (__return_storage_ptr__->Pivots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Pivots).ArrayNum = 0;
  (__return_storage_ptr__->Pivots).ArrayMax = 0;
  __return_storage_ptr__->OverlapRemovalShrinkPercent = param_4;
  FVar1 = FTransformCollection::TransformGroup;
  pFVar4 = ::FName::FName(&local_90,"HasCustomConvex");
  bVar2 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar4,FVar1);
  FVar1 = FTransformCollection::TransformGroup;
  if (bVar2) {
    pFVar4 = ::FName::FName(local_88,"HasCustomConvex");
    local_d0 = FManagedArrayCollection::ModifyAttribute<int>
                         ((FManagedArrayCollection *)param_1,*pFVar4,FVar1);
    if (local_d0 != (TManagedArray<int> *)0x0) {
      pcVar7 = UE::Core::Private::Function::
               TFunctionRefCaller<`FGeometryCollectionConvexUtility::ComputeLeafHulls'::__l2::<lambda_2>,bool,int>
               ::Call;
      pppTVar8 = &local_c8;
      goto LAB_144029d6e;
    }
  }
  else {
    local_d0 = (TManagedArray<int> *)0x0;
  }
  pcVar7 = UE::Core::Private::Function::
           TFunctionRefCaller<`FGeometryCollectionConvexUtility::ComputeLeafHulls'::__l2::<lambda_1>,bool,int>
           ::Call;
  pppTVar8 = &local_d8;
LAB_144029d6e:
  local_c8 = &local_d0;
  local_78._0_8_ = *(undefined8 *)param_5;
  local_78._40_8_ = 0;
  if (local_78._0_8_ != 0) {
    puVar5 = (undefined8 *)&param_5->field_0x10;
    if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_5->field_0x28;
    }
    (**(code **)*puVar5)(puVar5,&local_78.field_0x10);
  }
  local_a0 = pcVar7;
  local_98 = pppTVar8;
  ::`anonymous_namespace'::HullsFromGeometry
            (param_1,param_2,(TFunctionRef<bool___cdecl(int)> *)&local_a0,
             &__return_storage_ptr__->Hulls,&__return_storage_ptr__->Pivots,
             &__return_storage_ptr__->TransformToHullsIndices,&param_1->SimulationType,1,param_3,
             __return_storage_ptr__->OverlapRemovalShrinkPercent,&local_78,local_a8,local_b0,
             local_b8,local_c0);
  if (*(longlong *)param_5 != 0) {
    plVar6 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return __return_storage_ptr__;
}

// ConvertImplicitToConvexArray @ 14402bbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FGeometryCollectionConvexUtility::ConvertImplicitToConvexArray
          (FImplicitObject *param_1,TTransform<double> *param_2,
          TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  uint uVar15;
  __m128 _Var16;
  TVector<float,3> *pTVar17;
  byte bVar18;
  byte bVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  FConvex *pFVar23;
  TMatrix<double> *this;
  TQuat<double> *pTVar24;
  FConvex *pFVar25;
  longlong lVar26;
  undefined8 *puVar27;
  TVector<float,3> *pTVar28;
  FScriptContainerElement *pFVar29;
  ForAnyElementType FVar30;
  undefined8 *puVar31;
  FScriptContainerElement *pFVar32;
  float *pfVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  undefined1 auStackY_4c8 [32];
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_478;
  undefined1 local_468 [8];
  undefined8 uStack_460;
  TRefCountPtr<Chaos::FConvex> local_458;
  undefined1 local_450 [4];
  float local_44c;
  float fStack_448;
  float local_444;
  float local_440;
  float fStack_43c;
  float local_438;
  float local_434;
  float fStack_430;
  float local_42c;
  float local_428;
  float fStack_424;
  float local_420;
  float local_41c;
  float fStack_418;
  float local_414;
  float local_410;
  float fStack_40c;
  float local_408;
  float local_404;
  float fStack_400;
  float local_3fc;
  float local_3f8;
  float fStack_3f4;
  float local_3f0;
  float local_3ec;
  float fStack_3e8;
  float local_3e4;
  undefined1 local_3d8 [12];
  int iStack_3cc;
  undefined8 local_3c8;
  float local_3c0;
  TVector<double>_u_0 local_3b8;
  FScriptContainerElement local_3a0 [8];
  FScriptContainerElement local_398 [8];
  FScriptContainerElement local_390 [40];
  TQuat<double> local_368;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  bVar18 = Chaos::FImplicitObject::GetType(param_1);
  bVar19 = Chaos::FImplicitObject::GetType(param_1);
  bVar19 = bVar19 & 0x1f;
  if ((char)bVar18 < '\0') {
    ConvertScaledImplicitToConvexArray(param_1,param_2,(bVar18 & 0x40) != 0,param_3);
    return;
  }
  if ((bVar18 & 0x40) != 0) {
    ConvertInstancedImplicitToConvexArray(param_1,param_2,param_3);
    return;
  }
  if (bVar19 == 4) {
    auVar37 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar38 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar39 = (param_2->Rotation).ZW.m128d_f64[1];
    if (param_1->Type != '\x04') {
      param_1 = (FImplicitObject *)0x0;
    }
    dVar4 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)&param_1[2].Margin;
    dVar5 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)&param_1[2].Type;
    uVar50 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)param_1[3]._padding_ * (param_2->Scale3D).ZW.m128d_f64[0];
    dVar7 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
    dVar10 = *(double *)&param_1[1].Margin;
    dVar11 = *(double *)&param_1[1].Type;
    auVar55._8_4_ = SUB84(dVar5,0);
    auVar55._0_8_ = dVar4;
    auVar55._12_4_ = uVar50;
    dVar12 = (double)param_1[2]._padding_;
    dVar13 = (double)param_1[2]._padding_;
    local_468 = auVar38._0_8_;
    dVar41 = auVar38._8_8_;
    dVar34 = auVar37._0_8_;
    local_3d8._0_8_ = auVar37._8_8_;
    auVar35 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar36 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar40 = auVar36._0_8_;
    auVar43 = blendpd(auVar35,auVar36,2);
    auVar56._0_8_ = auVar55._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar4;
    auVar56._8_8_ = dVar6 * auVar35._8_8_ - dVar40 * dVar5;
    auVar57._8_4_ = SUB84(dVar5,0);
    auVar57._0_8_ = dVar4;
    auVar57._12_4_ = uVar50;
    auVar35._8_4_ = SUB84(dVar7,0);
    auVar35._0_8_ = dVar6;
    auVar35._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar35 = blendpd(auVar57,auVar35,2);
    auVar45._0_8_ = auVar35._0_8_ * dVar40 - auVar43._0_8_ * dVar6;
    auVar45._8_8_ = auVar35._8_8_ * auVar36._8_8_ - auVar43._8_8_ * dVar7;
    auVar35 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar57 = blendpd(auVar56,auVar45,2);
    dVar7 = auVar56._8_8_ + auVar56._8_8_;
    dVar8 = auVar45._0_8_ + auVar45._0_8_;
    uVar50 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar58._0_8_ = auVar57._0_8_ + auVar57._0_8_;
    auVar58._8_8_ = auVar57._8_8_ + auVar57._8_8_;
    auVar47._8_4_ = SUB84(dVar8,0);
    auVar47._0_8_ = dVar7;
    auVar47._12_4_ = uVar50;
    auVar44._8_4_ = SUB84(dVar8,0);
    auVar44._0_8_ = dVar7;
    auVar44._12_4_ = uVar50;
    auVar45 = blendpd(auVar44,auVar58,2);
    auVar57 = blendpd(auVar35,auVar36,2);
    auVar48._0_8_ = auVar47._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar7;
    auVar48._8_8_ = auVar58._0_8_ * auVar35._8_8_ - dVar40 * dVar8;
    auVar46._0_8_ = auVar45._0_8_ * dVar40 - auVar57._0_8_ * auVar58._0_8_;
    auVar46._8_8_ = auVar45._8_8_ * auVar36._8_8_ - auVar57._8_8_ * auVar58._8_8_;
    auVar36._8_4_ = SUB84(auVar48._8_8_,0);
    auVar36._0_8_ = auVar48._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
    auVar43._8_4_ = auVar37._0_4_;
    auVar43._0_8_ = dVar34;
    auVar43._12_4_ = auVar37._4_4_;
    local_288.Translation.XY.m128d_f64[0] =
         dVar7 * dVar39 + dVar4 + auVar36._8_8_ + (param_2->Translation).XY.m128d_f64[0];
    dVar4 = dVar8 * dVar39 + dVar5 + auVar46._0_8_ + (param_2->Translation).XY.m128d_f64[1];
    auVar35 = blendpd(auVar48,auVar46,2);
    auVar37._8_4_ = auVar38._8_4_;
    auVar37._0_8_ = dVar41;
    auVar37._12_4_ = auVar38._12_4_;
    local_288.Translation.ZW.m128d_f64[0] =
         auVar58._0_8_ * dVar39 + dVar6 + auVar35._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
    dVar39 = (double)local_468 * dVar10 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_288.Rotation.XY.m128d_f64[0] =
         dVar34 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar41 * dVar10 +
         (double)local_3d8._0_8_ * dVar12 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         (double)local_468 * dVar11 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_288.Rotation.XY.m128d_f64[1] =
         auVar43._8_8_ * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
         auVar37._8_8_ * dVar11 +
         (double)local_3d8._0_8_ * dVar13 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar39;
    auVar9._4_8_ = dVar39;
    auVar9._0_4_ = (int)((ulonglong)local_288.Translation.XY.m128d_f64[0] >> 0x20);
    auVar38._0_8_ = auVar9._0_8_ << 0x20;
    auVar38._8_4_ = SUB84(dVar4,0);
    auVar38._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_288.Translation.XY.m128d_f64[1] = auVar38._8_8_;
    local_288.Translation.ZW.m128d_f64[1] = 0.0;
    local_288.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_288.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_288.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_288.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    dVar39 = dVar34 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar41 * dVar13 +
             (double)local_3d8._0_8_ * dVar11 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             (double)local_468 * dVar12 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_288.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar39,0);
    local_288.Rotation.ZW.m128d_f64[0] =
         dVar34 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar41 * dVar12 +
         (double)local_3d8._0_8_ * dVar10 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         (double)local_468 * dVar13 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_288.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar39 >> 0x20);
    if ((FImplicitObject *)param_1[1]._padding_ == (FImplicitObject *)0x0) {
      return;
    }
    uStack_460 = (FScriptContainerElement *)local_468;
    unique0x100034e6 = (FScriptContainerElement *)local_3d8._0_8_;
    ConvertImplicitToConvexArray((FImplicitObject *)param_1[1]._padding_,&local_288,param_3);
    return;
  }
  if (bVar19 == 5) {
    if (param_1->Type != '\x05') {
      param_1 = (FImplicitObject *)0x0;
    }
    puVar31 = (undefined8 *)param_1[1]._padding_;
    iVar21 = (int)param_1[1]._padding_;
    puVar27 = puVar31 + iVar21;
    while( true ) {
      if ((int)param_1[1]._padding_ != iVar21) {
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_450);
      }
      if (puVar31 == puVar27) break;
      if ((FImplicitObject *)*puVar31 != (FImplicitObject *)0x0) {
        ConvertImplicitToConvexArray((FImplicitObject *)*puVar31,param_2,param_3);
      }
      puVar31 = puVar31 + 1;
    }
    return;
  }
  if (bVar19 == 0xf) {
    return;
  }
  if (bVar19 == 0) {
    if (param_1->Type != '\0') {
      param_1 = (FImplicitObject *)0x0;
    }
    if (param_1 == (FImplicitObject *)0x0) {
      return;
    }
    local_1c8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_1c8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_1c8.Translation.XY.m128d_f64[1] = (double)*(float *)((longlong)&param_1[1]._padding_ + 4);
    local_3d8._0_8_ = (FScriptContainerElement *)0x0;
    local_3d8._8_4_ = 0x2a;
    local_1c8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_1c8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    local_1c8.Translation.XY.m128d_f64[0] = (double)*(float *)&param_1[1]._padding_;
    local_1c8.Translation.ZW.m128d_f64[0] = (double)*(float *)&param_1[1]._padding_;
    local_1c8.Scale3D.XY.m128d_f64[0] = (double)param_1->Margin;
    local_1c8.Translation.ZW.m128d_f64[1] = 0.0;
    local_1c8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_1c8.Scale3D.XY.m128d_f64[1] = local_1c8.Scale3D.XY.m128d_f64[0];
    local_1c8.Scale3D.ZW.m128d_f64[0] = local_1c8.Scale3D.XY.m128d_f64[0];
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x2a,0,(ForAnyElementType *)local_3d8,0x2a,&iStack_3cc);
    lVar26 = 3;
    pTVar17 = IcoSphere_Subdiv1;
    pFVar32 = (FScriptContainerElement *)local_3d8._0_8_;
    do {
      pFVar29 = pFVar32;
      pTVar28 = pTVar17;
      uVar14 = *(undefined8 *)&pTVar28->field_0x8;
      *(undefined8 *)pFVar29 = *(undefined8 *)pTVar28;
      *(undefined8 *)(pFVar29 + 8) = uVar14;
      uVar14 = *(undefined8 *)(pTVar28 + 2);
      *(undefined8 *)(pFVar29 + 0x10) = *(undefined8 *)&pTVar28[1].field_0x4;
      *(undefined8 *)(pFVar29 + 0x18) = uVar14;
      uVar14 = *(undefined8 *)&pTVar28[3].field_0x4;
      *(undefined8 *)(pFVar29 + 0x20) = *(undefined8 *)&pTVar28[2].field_0x8;
      *(undefined8 *)(pFVar29 + 0x28) = uVar14;
      uVar14 = *(undefined8 *)&pTVar28[4].field_0x8;
      *(undefined8 *)(pFVar29 + 0x30) = *(undefined8 *)(pTVar28 + 4);
      *(undefined8 *)(pFVar29 + 0x38) = uVar14;
      uVar14 = *(undefined8 *)(pTVar28 + 6);
      *(undefined8 *)(pFVar29 + 0x40) = *(undefined8 *)&pTVar28[5].field_0x4;
      *(undefined8 *)(pFVar29 + 0x48) = uVar14;
      uVar14 = *(undefined8 *)&pTVar28[7].field_0x4;
      *(undefined8 *)(pFVar29 + 0x50) = *(undefined8 *)&pTVar28[6].field_0x8;
      *(undefined8 *)(pFVar29 + 0x58) = uVar14;
      uVar14 = *(undefined8 *)&pTVar28[8].field_0x8;
      *(undefined8 *)(pFVar29 + 0x60) = *(undefined8 *)(pTVar28 + 8);
      *(undefined8 *)(pFVar29 + 0x68) = uVar14;
      uVar14 = *(undefined8 *)(pTVar28 + 10);
      *(undefined8 *)(pFVar29 + 0x70) = *(undefined8 *)&pTVar28[9].field_0x4;
      *(undefined8 *)(pFVar29 + 0x78) = uVar14;
      lVar26 = lVar26 + -1;
      pTVar17 = (TVector<float,3> *)&pTVar28[10].field_0x8;
      pFVar32 = pFVar29 + 0x80;
    } while (lVar26 != 0);
    uVar14 = *(undefined8 *)&pTVar28[0xb].field_0x4;
    *(undefined8 *)(pFVar29 + 0x80) = *(undefined8 *)&pTVar28[10].field_0x8;
    *(undefined8 *)(pFVar29 + 0x88) = uVar14;
    uVar14 = *(undefined8 *)&pTVar28[0xc].field_0x8;
    *(undefined8 *)(pFVar29 + 0x90) = *(undefined8 *)(pTVar28 + 0xc);
    *(undefined8 *)(pFVar29 + 0x98) = uVar14;
    uVar14 = *(undefined8 *)(pTVar28 + 0xe);
    *(undefined8 *)(pFVar29 + 0xa0) = *(undefined8 *)&pTVar28[0xd].field_0x4;
    *(undefined8 *)(pFVar29 + 0xa8) = uVar14;
    uVar14 = *(undefined8 *)&pTVar28[0xf].field_0x4;
    *(undefined8 *)(pFVar29 + 0xb0) = *(undefined8 *)&pTVar28[0xe].field_0x8;
    *(undefined8 *)(pFVar29 + 0xb8) = uVar14;
    uVar14 = *(undefined8 *)&pTVar28[0x10].field_0x8;
    *(undefined8 *)(pFVar29 + 0xc0) = *(undefined8 *)(pTVar28 + 0x10);
    *(undefined8 *)(pFVar29 + 200) = uVar14;
    uVar14 = *(undefined8 *)(pTVar28 + 0x12);
    *(undefined8 *)(pFVar29 + 0xd0) = *(undefined8 *)&pTVar28[0x11].field_0x4;
    *(undefined8 *)(pFVar29 + 0xd8) = uVar14;
    uVar14 = *(undefined8 *)&pTVar28[0x13].field_0x4;
    *(undefined8 *)(pFVar29 + 0xe0) = *(undefined8 *)&pTVar28[0x12].field_0x8;
    *(undefined8 *)(pFVar29 + 0xe8) = uVar14;
    *(undefined8 *)(pFVar29 + 0xf0) = *(undefined8 *)(pTVar28 + 0x14);
    iVar21 = param_3->ArrayNum;
    if (iVar21 == param_3->ArrayMax) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar21 + 1;
    pFVar32 = (param_3->AllocatorInstance).Data + (longlong)iVar21 * 0x70;
    *(FConvex **)&pFVar32[8].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x10].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x18].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x20].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x28].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x30].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x38].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x40].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x48].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x50].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x58].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x60].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32[0x68].field_0x0 = (FConvex *)0x0;
    *(FConvex **)&pFVar32->field_0x0 = (FConvex *)0x0;
    _Var16 = GlobalVectorConstants::Float0001;
    fVar49 = GlobalVectorConstants::Float0001.m128_f32[1];
    *(FConvex **)&pFVar32[0x10].field_0x0 =
         (FConvex *)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(FConvex **)&pFVar32[0x18].field_0x0 = (FConvex *)(double)fVar49;
    *(FConvex **)&pFVar32[0x20].field_0x0 = (FConvex *)(double)_Var16.m128_f32[2];
    *(FConvex **)&pFVar32[0x28].field_0x0 = (FConvex *)(double)_Var16.m128_f32[3];
    _Var16 = GlobalVectorConstants::FloatZero;
    fVar49 = GlobalVectorConstants::FloatZero.m128_f32[1];
    *(FConvex **)&pFVar32[0x30].field_0x0 =
         (FConvex *)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(FConvex **)&pFVar32[0x38].field_0x0 = (FConvex *)(double)fVar49;
    *(FConvex **)&pFVar32[0x40].field_0x0 = (FConvex *)(double)_Var16.m128_f32[2];
    *(FConvex **)&pFVar32[0x48].field_0x0 = (FConvex *)(double)_Var16.m128_f32[3];
    _Var16 = GlobalVectorConstants::Float1110;
    fVar49 = GlobalVectorConstants::Float1110.m128_f32[1];
    *(FConvex **)&pFVar32[0x50].field_0x0 =
         (FConvex *)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(FConvex **)&pFVar32[0x58].field_0x0 = (FConvex *)(double)fVar49;
    *(FConvex **)&pFVar32[0x60].field_0x0 = (FConvex *)(double)_Var16.m128_f32[2];
    *(FConvex **)&pFVar32[0x68].field_0x0 = (FConvex *)(double)_Var16.m128_f32[3];
    pFVar23 = ::operator_new(0xb0);
    if (pFVar23 == (FConvex *)0x0) {
      local_458.Reference = (FConvex *)0x0;
    }
    else {
      local_458.Reference =
           Chaos::FConvex::FConvex
                     (pFVar23,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                              local_3d8,0.0,Default);
      if (local_458.Reference != (FConvex *)0x0) {
        LOCK();
        *(int *)&(local_458.Reference)->_padding_ = (int)(local_458.Reference)->_padding_ + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<Chaos::FConvex>::operator=((TRefCountPtr<Chaos::FConvex> *)pFVar32,&local_458);
    if (local_458.Reference != (FConvex *)0x0) {
      LOCK();
      plVar2 = &(local_458.Reference)->_padding_;
      lVar26 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar26 == 1) && (*(int *)((longlong)&(local_458.Reference)->_padding_ + 4) == 0)) {
        (**(code **)(local_458.Reference)->_padding_)();
      }
    }
    local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_2e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_2e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_2e8,&local_1c8,param_2);
    *(double *)&pFVar32[0x10].field_0x0 = local_2e8.Rotation.XY.m128d_f64[0];
    *(double *)&pFVar32[0x18].field_0x0 = local_2e8.Rotation.XY.m128d_f64[1];
    *(double *)&pFVar32[0x20].field_0x0 = local_2e8.Rotation.ZW.m128d_f64[0];
    *(double *)&pFVar32[0x28].field_0x0 = local_2e8.Rotation.ZW.m128d_f64[1];
    *(double *)&pFVar32[0x30].field_0x0 = local_2e8.Translation.XY.m128d_f64[0];
    *(double *)&pFVar32[0x38].field_0x0 = local_2e8.Translation.XY.m128d_f64[1];
    *(double *)&pFVar32[0x40].field_0x0 = local_2e8.Translation.ZW.m128d_f64[0];
    *(double *)&pFVar32[0x48].field_0x0 = local_2e8.Translation.ZW.m128d_f64[1];
    *(double *)&pFVar32[0x50].field_0x0 = local_2e8.Scale3D.XY.m128d_f64[0];
    *(double *)&pFVar32[0x58].field_0x0 = local_2e8.Scale3D.XY.m128d_f64[1];
    *(double *)&pFVar32[0x60].field_0x0 = local_2e8.Scale3D.ZW.m128d_f64[0];
    *(double *)&pFVar32[0x68].field_0x0 = local_2e8.Scale3D.ZW.m128d_f64[1];
    FVar30.Data = (FScriptContainerElement *)local_3d8._0_8_;
    goto LAB_14402d0ab;
  }
  if (bVar19 == 1) {
    pFVar23 = (FConvex *)0x0;
    if (param_1->Type != '\x01') {
      param_1 = (FImplicitObject *)pFVar23;
    }
    if ((FConvex *)param_1 == (FConvex *)0x0) {
      return;
    }
    fVar49 = (float)(double)(((FConvex *)param_1)->Vertices).AllocatorInstance.Data;
    local_478.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_478.ArrayNum = 0;
    local_478.ArrayMax = 0;
    fVar59 = (float)(double)(((FConvex *)param_1)->Planes).AllocatorInstance.Data;
    fVar54 = (float)*(double *)&(((FConvex *)param_1)->Planes).ArrayNum;
    fVar60 = (float)*(double *)&(((FConvex *)param_1)->Vertices).ArrayNum;
    fVar53 = (float)*(double *)&(((FConvex *)param_1)->LocalBoundingBox).MMin;
    fVar52 = (float)*(double *)&(((FConvex *)param_1)->LocalBoundingBox).MMin.field_0x8;
    local_3c0 = fVar49;
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_478.AllocatorInstance,&local_478.ArrayMax);
    iVar21 = iVar22 + 1;
    local_3c8 = CONCAT44(fVar54,fVar59);
    *(undefined8 *)(local_478.AllocatorInstance.Data + (longlong)iVar22 * 0xc) = local_3c8;
    *(float *)(local_478.AllocatorInstance.Data + (longlong)iVar22 * 0xc + 8) = local_3c0;
    local_434 = fVar60;
    fStack_430 = fVar54;
    local_42c = fVar49;
    local_478.ArrayNum = iVar21;
    if (((local_478.AllocatorInstance.Data <= (FScriptContainerElement *)&local_434) &&
        ((FScriptContainerElement *)&local_434 <
         local_478.AllocatorInstance.Data + (longlong)local_478.ArrayMax * 0xc)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_478.ArrayNum == local_478.ArrayMax) {
      local_478.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_478.AllocatorInstance,&local_478.ArrayMax);
    }
    iVar21 = local_478.ArrayNum + 1;
    *(ulonglong *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc) =
         CONCAT44(fStack_430,local_434);
    *(float *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc + 8) =
         local_42c;
    local_428 = fVar59;
    fStack_424 = fVar53;
    local_420 = fVar49;
    local_478.ArrayNum = iVar21;
    if (((local_478.AllocatorInstance.Data <= (FScriptContainerElement *)&local_428) &&
        ((FScriptContainerElement *)&local_428 <
         local_478.AllocatorInstance.Data + (longlong)local_478.ArrayMax * 0xc)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_478.ArrayNum == local_478.ArrayMax) {
      local_478.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_478.AllocatorInstance,&local_478.ArrayMax);
    }
    iVar21 = local_478.ArrayNum + 1;
    *(ulonglong *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc) =
         CONCAT44(fStack_424,local_428);
    *(float *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc + 8) =
         local_420;
    local_41c = fVar60;
    fStack_418 = fVar53;
    local_414 = fVar49;
    local_478.ArrayNum = iVar21;
    if (((local_478.AllocatorInstance.Data <= (FScriptContainerElement *)&local_41c) &&
        ((FScriptContainerElement *)&local_41c <
         local_478.AllocatorInstance.Data + (longlong)local_478.ArrayMax * 0xc)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_478.ArrayNum == local_478.ArrayMax) {
      local_478.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_478.AllocatorInstance,&local_478.ArrayMax);
    }
    iVar21 = local_478.ArrayNum + 1;
    *(ulonglong *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc) =
         CONCAT44(fStack_418,local_41c);
    *(float *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc + 8) =
         local_414;
    local_410 = fVar59;
    fStack_40c = fVar54;
    local_408 = fVar52;
    local_478.ArrayNum = iVar21;
    if (((local_478.AllocatorInstance.Data <= (FScriptContainerElement *)&local_410) &&
        ((FScriptContainerElement *)&local_410 <
         local_478.AllocatorInstance.Data + (longlong)local_478.ArrayMax * 0xc)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_478.ArrayNum == local_478.ArrayMax) {
      local_478.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_478.AllocatorInstance,&local_478.ArrayMax);
    }
    iVar21 = local_478.ArrayNum + 1;
    *(ulonglong *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc) =
         CONCAT44(fStack_40c,local_410);
    *(float *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc + 8) =
         local_408;
    local_404 = fVar60;
    fStack_400 = fVar54;
    local_3fc = fVar52;
    local_478.ArrayNum = iVar21;
    if (((local_478.AllocatorInstance.Data <= (FScriptContainerElement *)&local_404) &&
        ((FScriptContainerElement *)&local_404 <
         local_478.AllocatorInstance.Data + (longlong)local_478.ArrayMax * 0xc)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_478.ArrayNum == local_478.ArrayMax) {
      local_478.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_478.AllocatorInstance,&local_478.ArrayMax);
    }
    iVar21 = local_478.ArrayNum + 1;
    *(ulonglong *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc) =
         CONCAT44(fStack_400,local_404);
    *(float *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc + 8) =
         local_3fc;
    local_3f8 = fVar59;
    fStack_3f4 = fVar53;
    local_3f0 = fVar52;
    local_478.ArrayNum = iVar21;
    if (((local_478.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3f8) &&
        ((FScriptContainerElement *)&local_3f8 <
         local_478.AllocatorInstance.Data + (longlong)local_478.ArrayMax * 0xc)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_478.ArrayNum == local_478.ArrayMax) {
      local_478.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_478.AllocatorInstance,&local_478.ArrayMax);
    }
    iVar21 = local_478.ArrayNum + 1;
    *(ulonglong *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc) =
         CONCAT44(fStack_3f4,local_3f8);
    *(float *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 0xc + 8) =
         local_3f0;
    local_3ec = fVar60;
    fStack_3e8 = fVar53;
    local_3e4 = fVar52;
    local_478.ArrayNum = iVar21;
    if (((local_478.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3ec) &&
        ((FScriptContainerElement *)&local_3ec <
         local_478.AllocatorInstance.Data + (longlong)local_478.ArrayMax * 0xc)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_478.ArrayNum == local_478.ArrayMax) {
      local_478.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_478.AllocatorInstance,&local_478.ArrayMax);
    }
    lVar26 = (longlong)local_478.ArrayNum;
    local_478.ArrayNum = local_478.ArrayNum + 1;
    *(ulonglong *)(local_478.AllocatorInstance.Data + lVar26 * 0xc) = CONCAT44(fStack_3e8,local_3ec)
    ;
    *(float *)(local_478.AllocatorInstance.Data + lVar26 * 0xc + 8) = local_3e4;
    iVar21 = param_3->ArrayNum;
    if (iVar21 == param_3->ArrayMax) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar21 + 1;
    pFVar32 = (param_3->AllocatorInstance).Data + (longlong)iVar21 * 0x70;
    *(longlong *)(pFVar32 + 8) = 0;
    *(longlong *)(pFVar32 + 0x10) = 0;
    *(longlong *)(pFVar32 + 0x18) = 0;
    *(longlong *)(pFVar32 + 0x20) = 0;
    *(longlong *)(pFVar32 + 0x28) = 0;
    *(longlong *)(pFVar32 + 0x30) = 0;
    *(longlong *)(pFVar32 + 0x38) = 0;
    *(longlong *)(pFVar32 + 0x40) = 0;
    *(longlong *)(pFVar32 + 0x48) = 0;
    *(longlong *)(pFVar32 + 0x50) = 0;
    *(longlong *)(pFVar32 + 0x58) = 0;
    *(longlong *)(pFVar32 + 0x60) = 0;
    *(longlong *)(pFVar32 + 0x68) = 0;
    *(longlong *)pFVar32 = 0;
    _Var16 = GlobalVectorConstants::Float0001;
    fVar49 = GlobalVectorConstants::Float0001.m128_f32[1];
    *(double *)(pFVar32 + 0x10) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)(pFVar32 + 0x18) = (double)fVar49;
    *(double *)(pFVar32 + 0x20) = (double)_Var16.m128_f32[2];
    *(double *)(pFVar32 + 0x28) = (double)_Var16.m128_f32[3];
    _Var16 = GlobalVectorConstants::FloatZero;
    fVar49 = GlobalVectorConstants::FloatZero.m128_f32[1];
    *(double *)(pFVar32 + 0x30) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(pFVar32 + 0x38) = (double)fVar49;
    *(double *)(pFVar32 + 0x40) = (double)_Var16.m128_f32[2];
    *(double *)(pFVar32 + 0x48) = (double)_Var16.m128_f32[3];
    _Var16 = GlobalVectorConstants::Float1110;
    fVar49 = GlobalVectorConstants::Float1110.m128_f32[1];
    *(double *)(pFVar32 + 0x50) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)(pFVar32 + 0x58) = (double)fVar49;
    *(double *)(pFVar32 + 0x60) = (double)_Var16.m128_f32[2];
    *(double *)(pFVar32 + 0x68) = (double)_Var16.m128_f32[3];
    pFVar25 = ::operator_new(0xb0);
    if ((pFVar25 != (FConvex *)0x0) &&
       (pFVar23 = Chaos::FConvex::FConvex(pFVar25,&local_478,0.0,Default), pFVar23 != (FConvex *)0x0
       )) {
      LOCK();
      *(int *)&pFVar23->_padding_ = (int)pFVar23->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar32 == local_390) {
      if (pFVar23 != (FConvex *)0x0) {
        LOCK();
        plVar2 = &pFVar23->_padding_;
        lVar26 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar26 == 1) && (*(int *)((longlong)&pFVar23->_padding_ + 4) == 0)) {
          puVar27 = (undefined8 *)pFVar23->_padding_;
          goto LAB_14402cd4c;
        }
      }
    }
    else {
      pFVar25 = *(FConvex **)pFVar32;
      *(FConvex **)pFVar32 = pFVar23;
      if (pFVar25 != (FConvex *)0x0) {
        LOCK();
        plVar2 = &pFVar25->_padding_;
        lVar26 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar26 == 1) && (*(int *)((longlong)&pFVar25->_padding_ + 4) == 0)) {
          puVar27 = (undefined8 *)pFVar25->_padding_;
          pFVar23 = pFVar25;
LAB_14402cd4c:
          (*(code *)*puVar27)(pFVar23,1);
        }
      }
    }
    dVar39 = (param_2->Rotation).XY.m128d_f64[1];
    *(double *)(pFVar32 + 0x10) = (param_2->Rotation).XY.m128d_f64[0];
    *(double *)(pFVar32 + 0x18) = dVar39;
    dVar39 = (param_2->Rotation).ZW.m128d_f64[1];
    *(double *)(pFVar32 + 0x20) = (param_2->Rotation).ZW.m128d_f64[0];
    *(double *)(pFVar32 + 0x28) = dVar39;
    dVar39 = (param_2->Translation).XY.m128d_f64[1];
    *(double *)(pFVar32 + 0x30) = (param_2->Translation).XY.m128d_f64[0];
    *(double *)(pFVar32 + 0x38) = dVar39;
    dVar39 = (param_2->Translation).ZW.m128d_f64[1];
    *(double *)(pFVar32 + 0x40) = (param_2->Translation).ZW.m128d_f64[0];
    *(double *)(pFVar32 + 0x48) = dVar39;
    dVar39 = (param_2->Scale3D).XY.m128d_f64[1];
    *(double *)(pFVar32 + 0x50) = (param_2->Scale3D).XY.m128d_f64[0];
    *(double *)(pFVar32 + 0x58) = dVar39;
    dVar39 = (param_2->Scale3D).ZW.m128d_f64[1];
    *(double *)(pFVar32 + 0x60) = (param_2->Scale3D).ZW.m128d_f64[0];
    *(double *)(pFVar32 + 0x68) = dVar39;
    FVar30.Data = local_478.AllocatorInstance.Data;
    goto LAB_14402d0ab;
  }
  if (bVar19 != 3) {
    if (bVar19 != 8) {
      return;
    }
    if (param_1->Type != '\b') {
      param_1 = (FImplicitObject *)(FConvex *)0x0;
    }
    if ((FConvex *)param_1 == (FConvex *)0x0) {
      return;
    }
    iVar21 = param_3->ArrayNum;
    if (iVar21 == param_3->ArrayMax) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar21 + 1;
    pFVar32 = (param_3->AllocatorInstance).Data + (longlong)iVar21 * 0x70;
    *(longlong *)(pFVar32 + 8) = 0;
    *(longlong *)(pFVar32 + 0x10) = 0;
    *(longlong *)(pFVar32 + 0x18) = 0;
    *(longlong *)(pFVar32 + 0x20) = 0;
    *(longlong *)(pFVar32 + 0x28) = 0;
    *(longlong *)(pFVar32 + 0x30) = 0;
    *(longlong *)(pFVar32 + 0x38) = 0;
    *(longlong *)(pFVar32 + 0x40) = 0;
    *(longlong *)(pFVar32 + 0x48) = 0;
    *(longlong *)(pFVar32 + 0x50) = 0;
    *(longlong *)(pFVar32 + 0x58) = 0;
    *(longlong *)(pFVar32 + 0x60) = 0;
    *(longlong *)(pFVar32 + 0x68) = 0;
    *(longlong *)pFVar32 = 0;
    _Var16 = GlobalVectorConstants::Float0001;
    fVar49 = GlobalVectorConstants::Float0001.m128_f32[1];
    *(double *)(pFVar32 + 0x10) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)(pFVar32 + 0x18) = (double)fVar49;
    *(double *)(pFVar32 + 0x20) = (double)_Var16.m128_f32[2];
    *(double *)(pFVar32 + 0x28) = (double)_Var16.m128_f32[3];
    _Var16 = GlobalVectorConstants::FloatZero;
    fVar49 = GlobalVectorConstants::FloatZero.m128_f32[1];
    *(double *)(pFVar32 + 0x30) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(pFVar32 + 0x38) = (double)fVar49;
    *(double *)(pFVar32 + 0x40) = (double)_Var16.m128_f32[2];
    *(double *)(pFVar32 + 0x48) = (double)_Var16.m128_f32[3];
    _Var16 = GlobalVectorConstants::Float1110;
    fVar49 = GlobalVectorConstants::Float1110.m128_f32[1];
    *(double *)(pFVar32 + 0x50) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)(pFVar32 + 0x58) = (double)fVar49;
    *(double *)(pFVar32 + 0x60) = (double)_Var16.m128_f32[2];
    *(double *)(pFVar32 + 0x68) = (double)_Var16.m128_f32[3];
    pFVar23 = Chaos::FConvex::RawCopyAsConvex((FConvex *)param_1);
    if (pFVar23 != (FConvex *)0x0) {
      LOCK();
      *(int *)&pFVar23->_padding_ = (int)pFVar23->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar32 == local_3a0) {
      if (pFVar23 != (FConvex *)0x0) {
        LOCK();
        plVar2 = &pFVar23->_padding_;
        lVar26 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar26 == 1) && (*(int *)((longlong)&pFVar23->_padding_ + 4) == 0)) {
          (**(code **)pFVar23->_padding_)(pFVar23);
        }
      }
    }
    else {
      puVar27 = *(undefined8 **)pFVar32;
      *(FConvex **)pFVar32 = pFVar23;
      if (puVar27 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar27 + 1);
        iVar21 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar21 == 1) && (*(int *)((longlong)puVar27 + 0xc) == 0)) {
          (**(code **)*puVar27)();
        }
      }
    }
    dVar39 = (param_2->Rotation).XY.m128d_f64[1];
    *(double *)(pFVar32 + 0x10) = (param_2->Rotation).XY.m128d_f64[0];
    *(double *)(pFVar32 + 0x18) = dVar39;
    dVar39 = (param_2->Rotation).ZW.m128d_f64[1];
    *(double *)(pFVar32 + 0x20) = (param_2->Rotation).ZW.m128d_f64[0];
    *(double *)(pFVar32 + 0x28) = dVar39;
    dVar39 = (param_2->Translation).XY.m128d_f64[1];
    *(double *)(pFVar32 + 0x30) = (param_2->Translation).XY.m128d_f64[0];
    *(double *)(pFVar32 + 0x38) = dVar39;
    dVar39 = (param_2->Translation).ZW.m128d_f64[1];
    *(double *)(pFVar32 + 0x40) = (param_2->Translation).ZW.m128d_f64[0];
    *(double *)(pFVar32 + 0x48) = dVar39;
    dVar39 = (param_2->Scale3D).XY.m128d_f64[1];
    *(double *)(pFVar32 + 0x50) = (param_2->Scale3D).XY.m128d_f64[0];
    *(double *)(pFVar32 + 0x58) = dVar39;
    dVar39 = (param_2->Scale3D).ZW.m128d_f64[1];
    *(double *)(pFVar32 + 0x60) = (param_2->Scale3D).ZW.m128d_f64[0];
    *(double *)(pFVar32 + 0x68) = dVar39;
    return;
  }
  iVar21 = 0;
  pFVar23 = (FConvex *)0x0;
  if (param_1->Type != '\x03') {
    param_1 = (FImplicitObject *)pFVar23;
  }
  if ((FConvex *)param_1 == (FConvex *)0x0) {
    return;
  }
  fVar42 = (float)(((FConvex *)param_1)->Vertices).ArrayNum * __real_3f000000;
  fVar49 = (float)(((FConvex *)param_1)->Planes).ArrayMax;
  fVar52 = *(float *)&(((FConvex *)param_1)->Vertices).AllocatorInstance.Data;
  fVar53 = *(float *)&(((FConvex *)param_1)->Planes).AllocatorInstance.Data;
  fVar54 = *(float *)((longlong)&(((FConvex *)param_1)->Vertices).AllocatorInstance.Data + 4);
  fVar59 = *(float *)((longlong)&(((FConvex *)param_1)->Planes).AllocatorInstance.Data + 4);
  fVar60 = (float)(((FConvex *)param_1)->Planes).ArrayNum;
  local_3c8 = *(undefined8 *)&(((FConvex *)param_1)->Planes).ArrayMax;
  local_3b8._s_0.X = (double)(float)local_3c8;
  local_3b8._s_0.Y = (double)(float)((ulonglong)local_3c8 >> 0x20);
  local_3b8._s_0.Z =
       (double)*(float *)((longlong)&(((FConvex *)param_1)->Vertices).AllocatorInstance.Data + 4);
  this = UE::Math::TRotationMatrix<double>::MakeFromZ(&local_168,(TVector<double> *)&local_3b8._s_0)
  ;
  pTVar24 = UE::Math::TMatrix<double>::ToQuat(this,&local_368);
  uVar15 = __xmm_80000000800000008000000080000000;
  pfVar33 = (float *)&IcoHemisphere_Subdiv1[0].field_0x8;
  local_228.Rotation.XY.m128d_f64[0] = pTVar24->X;
  local_228.Rotation.XY.m128d_f64[1] = pTVar24->Y;
  local_228.Rotation.ZW.m128d_f64[0] = pTVar24->Z;
  local_228.Rotation.ZW.m128d_f64[1] = pTVar24->W;
  fVar51 = (float)(((FConvex *)param_1)->Vertices).ArrayNum * __real_3f000000;
  local_468 = (undefined1  [8])0x0;
  local_228.Translation.ZW.m128d_f64[1] = 0.0;
  local_228.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_228.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_228.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_228.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  uStack_460._0_4_ = 0;
  uStack_460._4_4_ = 0;
  local_228.Translation.XY.m128d_f64[0] = (double)(fVar42 * fVar49 + fVar53);
  local_228.Translation.XY.m128d_f64[1] = (double)(fVar42 * fVar52 + fVar59);
  local_228.Translation.ZW.m128d_f64[0] = (double)(fVar42 * fVar54 + fVar60);
  do {
    fVar49 = *(float *)&((FConvex *)param_1)->_padding_;
    local_44c = fVar49 * pfVar33[-2];
    fStack_448 = fVar49 * pfVar33[-1];
    local_444 = fVar49 * *pfVar33 + fVar51;
    if (((ulonglong)local_468 <= (FScriptContainerElement *)&local_44c) &&
       ((FScriptContainerElement *)&local_44c <
        (FScriptContainerElement *)((longlong)local_468 + (longlong)uStack_460._4_4_ * 0xc))) {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar20) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar21 = (int)uStack_460;
    }
    if (iVar21 == uStack_460._4_4_) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)local_468,(int *)((longlong)&uStack_460 + 4));
    }
    iVar22 = iVar21 + 1;
    fVar49 = (float)((uint)fVar49 ^ uVar15);
    *(ulonglong *)((longlong)local_468 + (longlong)iVar21 * 0xc) = CONCAT44(fStack_448,local_44c);
    *(float *)((longlong)local_468 + (longlong)iVar21 * 0xc + 8) = local_444;
    local_440 = fVar49 * pfVar33[-2];
    fStack_43c = fVar49 * pfVar33[-1];
    local_438 = fVar49 * *pfVar33 - fVar51;
    uStack_460._0_4_ = iVar22;
    if ((((ulonglong)local_468 <= (FScriptContainerElement *)&local_440) &&
        ((FScriptContainerElement *)&local_440 <
         (FScriptContainerElement *)((longlong)local_468 + (longlong)uStack_460._4_4_ * 0xc))) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar22 = (int)uStack_460;
    if ((int)uStack_460 == uStack_460._4_4_) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)local_468,(int *)((longlong)&uStack_460 + 4));
    }
    iVar21 = iVar22 + 1;
    uStack_460._0_4_ = iVar21;
    pfVar33 = pfVar33 + 3;
    *(ulonglong *)((longlong)local_468 + (longlong)iVar22 * 0xc) = CONCAT44(fStack_43c,local_440);
    *(float *)((longlong)local_468 + (longlong)iVar22 * 0xc + 8) = local_438;
  } while ((longlong)pfVar33 < 0x154bb3070);
  iVar21 = param_3->ArrayNum;
  if (iVar21 == param_3->ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar21 + 1;
  pFVar32 = (param_3->AllocatorInstance).Data + (longlong)iVar21 * 0x70;
  *(longlong *)(pFVar32 + 8) = 0;
  *(longlong *)(pFVar32 + 0x10) = 0;
  *(longlong *)(pFVar32 + 0x18) = 0;
  *(longlong *)(pFVar32 + 0x20) = 0;
  *(longlong *)(pFVar32 + 0x28) = 0;
  *(longlong *)(pFVar32 + 0x30) = 0;
  *(longlong *)(pFVar32 + 0x38) = 0;
  *(longlong *)(pFVar32 + 0x40) = 0;
  *(longlong *)(pFVar32 + 0x48) = 0;
  *(longlong *)(pFVar32 + 0x50) = 0;
  *(longlong *)(pFVar32 + 0x58) = 0;
  *(longlong *)(pFVar32 + 0x60) = 0;
  *(longlong *)(pFVar32 + 0x68) = 0;
  *(longlong *)pFVar32 = 0;
  _Var16 = GlobalVectorConstants::Float0001;
  fVar49 = GlobalVectorConstants::Float0001.m128_f32[1];
  *(double *)(pFVar32 + 0x10) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)(pFVar32 + 0x18) = (double)fVar49;
  *(double *)(pFVar32 + 0x20) = (double)_Var16.m128_f32[2];
  *(double *)(pFVar32 + 0x28) = (double)_Var16.m128_f32[3];
  _Var16 = GlobalVectorConstants::FloatZero;
  fVar49 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)(pFVar32 + 0x30) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)(pFVar32 + 0x38) = (double)fVar49;
  *(double *)(pFVar32 + 0x40) = (double)_Var16.m128_f32[2];
  *(double *)(pFVar32 + 0x48) = (double)_Var16.m128_f32[3];
  _Var16 = GlobalVectorConstants::Float1110;
  fVar49 = GlobalVectorConstants::Float1110.m128_f32[1];
  *(double *)(pFVar32 + 0x50) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)(pFVar32 + 0x58) = (double)fVar49;
  *(double *)(pFVar32 + 0x60) = (double)_Var16.m128_f32[2];
  *(double *)(pFVar32 + 0x68) = (double)_Var16.m128_f32[3];
  pFVar25 = ::operator_new(0xb0);
  if ((pFVar25 != (FConvex *)0x0) &&
     (pFVar23 = Chaos::FConvex::FConvex
                          (pFVar25,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                                   local_468,0.0,Default), pFVar23 != (FConvex *)0x0)) {
    LOCK();
    *(int *)&pFVar23->_padding_ = (int)pFVar23->_padding_ + 1;
    UNLOCK();
  }
  if (pFVar32 == local_398) {
    if (pFVar23 != (FConvex *)0x0) {
      LOCK();
      plVar2 = &pFVar23->_padding_;
      lVar26 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar26 == 1) && (*(int *)((longlong)&pFVar23->_padding_ + 4) == 0)) {
        puVar27 = (undefined8 *)pFVar23->_padding_;
        goto LAB_14402c54f;
      }
    }
  }
  else {
    pFVar25 = *(FConvex **)pFVar32;
    *(FConvex **)pFVar32 = pFVar23;
    if (pFVar25 != (FConvex *)0x0) {
      LOCK();
      plVar2 = &pFVar25->_padding_;
      lVar26 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar26 == 1) && (*(int *)((longlong)&pFVar25->_padding_ + 4) == 0)) {
        puVar27 = (undefined8 *)pFVar25->_padding_;
        pFVar23 = pFVar25;
LAB_14402c54f:
        (*(code *)*puVar27)(pFVar23,1);
      }
    }
  }
  local_348.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_348.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_348.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_348.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_348.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_348.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_348.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_348.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_348.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_348.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_348,&local_228,param_2);
  *(double *)(pFVar32 + 0x10) = local_348.Rotation.XY.m128d_f64[0];
  *(double *)(pFVar32 + 0x18) = local_348.Rotation.XY.m128d_f64[1];
  *(double *)(pFVar32 + 0x20) = local_348.Rotation.ZW.m128d_f64[0];
  *(double *)(pFVar32 + 0x28) = local_348.Rotation.ZW.m128d_f64[1];
  *(double *)(pFVar32 + 0x30) = local_348.Translation.XY.m128d_f64[0];
  *(double *)(pFVar32 + 0x38) = local_348.Translation.XY.m128d_f64[1];
  *(double *)(pFVar32 + 0x40) = local_348.Translation.ZW.m128d_f64[0];
  *(double *)(pFVar32 + 0x48) = local_348.Translation.ZW.m128d_f64[1];
  *(double *)(pFVar32 + 0x50) = local_348.Scale3D.XY.m128d_f64[0];
  *(double *)(pFVar32 + 0x58) = local_348.Scale3D.XY.m128d_f64[1];
  *(double *)(pFVar32 + 0x60) = local_348.Scale3D.ZW.m128d_f64[0];
  *(double *)(pFVar32 + 0x68) = local_348.Scale3D.ZW.m128d_f64[1];
  FVar30.Data = (FScriptContainerElement *)local_468;
LAB_14402d0ab:
  if (FVar30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar30.Data);
  }
  return;
}

// ConvertInstancedImplicitToConvexArray @ 14402d120

void __cdecl
FGeometryCollectionConvexUtility::ConvertInstancedImplicitToConvexArray
          (FImplicitObject *param_1,TTransform<double> *param_2,
          TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_>
          *param_3)

{
  longlong *plVar1;
  FConvex *pFVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  FConvex *pFVar15;
  undefined8 *puVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement local_28 [16];
  
  bVar13 = Chaos::FImplicitObject::GetType(param_1);
  if ((bVar13 & 0x1f) != 8) {
    return;
  }
  if (param_1->Type != 'H') {
    param_1 = (FImplicitObject *)0x0;
  }
  pFVar15 = (FConvex *)param_1[1]._padding_;
  if (pFVar15 == (FConvex *)0x0) {
    return;
  }
  iVar14 = param_3->ArrayNum;
  if (iVar14 == param_3->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar14 + 1;
  pFVar17 = (param_3->AllocatorInstance).Data + (longlong)iVar14 * 0x70;
  *(longlong *)(pFVar17 + 8) = 0;
  *(longlong *)(pFVar17 + 0x10) = 0;
  *(longlong *)(pFVar17 + 0x18) = 0;
  *(longlong *)(pFVar17 + 0x20) = 0;
  *(longlong *)(pFVar17 + 0x28) = 0;
  *(longlong *)(pFVar17 + 0x30) = 0;
  *(longlong *)(pFVar17 + 0x38) = 0;
  *(longlong *)(pFVar17 + 0x40) = 0;
  *(longlong *)(pFVar17 + 0x48) = 0;
  *(longlong *)(pFVar17 + 0x50) = 0;
  *(longlong *)(pFVar17 + 0x58) = 0;
  *(longlong *)(pFVar17 + 0x60) = 0;
  *(longlong *)(pFVar17 + 0x68) = 0;
  *(longlong *)pFVar17 = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x10) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x20) = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x30) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x40) = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x50) = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x60) = auVar10;
  pFVar15 = Chaos::FConvex::RawCopyAsConvex(pFVar15);
  if (pFVar15 != (FConvex *)0x0) {
    LOCK();
    *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
    UNLOCK();
  }
  if (pFVar17 == local_28) {
    if (pFVar15 == (FConvex *)0x0) goto LAB_14402d266;
    LOCK();
    plVar1 = &pFVar15->_padding_;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar12 != 1) || (*(int *)((longlong)&pFVar15->_padding_ + 4) != 0))
    goto LAB_14402d266;
    puVar16 = (undefined8 *)pFVar15->_padding_;
  }
  else {
    pFVar2 = *(FConvex **)pFVar17;
    *(FConvex **)pFVar17 = pFVar15;
    if (pFVar2 == (FConvex *)0x0) goto LAB_14402d266;
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar12 != 1) || (*(int *)((longlong)&pFVar2->_padding_ + 4) != 0)) goto LAB_14402d266;
    puVar16 = (undefined8 *)pFVar2->_padding_;
    pFVar15 = pFVar2;
  }
  (*(code *)*puVar16)(pFVar15,1);
LAB_14402d266:
  dVar11 = (param_2->Rotation).XY.m128d_f64[1];
  *(double *)(pFVar17 + 0x10) = (param_2->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar17 + 0x18) = dVar11;
  dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar17 + 0x20) = (param_2->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar17 + 0x28) = dVar11;
  dVar11 = (param_2->Translation).XY.m128d_f64[1];
  *(double *)(pFVar17 + 0x30) = (param_2->Translation).XY.m128d_f64[0];
  *(double *)(pFVar17 + 0x38) = dVar11;
  dVar11 = (param_2->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar17 + 0x40) = (param_2->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar17 + 0x48) = dVar11;
  dVar11 = (param_2->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar17 + 0x50) = (param_2->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar17 + 0x58) = dVar11;
  dVar11 = (param_2->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar17 + 0x60) = (param_2->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar17 + 0x68) = dVar11;
  return;
}

// ConvertScaledImplicitToConvexArray @ 14402d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGeometryCollectionConvexUtility::ConvertScaledImplicitToConvexArray
          (FImplicitObject *param_1,TTransform<double> *param_2,bool param_3,
          TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_>
          *param_4)

{
  longlong *plVar1;
  FConvex *pFVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  FConvex *pFVar15;
  undefined8 *puVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStack_1a8 [40];
  FScriptContainerElement local_180 [24];
  double local_168;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  bVar13 = Chaos::FImplicitObject::GetType(param_1);
  if ((bVar13 & 0x1f) != 8) {
    return;
  }
  local_f8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_f8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  if (param_1->Type != 0x88) {
    param_1 = (FImplicitObject *)0x0;
  }
  local_f8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_f8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  if (param_1 == (FImplicitObject *)0x0) {
    return;
  }
  local_168 = (double)*(float *)&param_1[1]._padding_;
  dVar11 = (double)*(float *)((longlong)&param_1[1]._padding_ + 4);
  local_f8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
  local_f8.Scale3D.XY.m128d_f64[0] = (double)*(float *)&param_1[1]._padding_;
  local_f8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
  local_f8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_f8.Scale3D.ZW.m128d_f64[0] = local_168;
  pFVar15 = *(FConvex **)&param_1[3].Margin;
  if (pFVar15 == (FConvex *)0x0) {
    return;
  }
  iVar14 = param_4->ArrayNum;
  if (iVar14 == param_4->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar14 + 1;
  pFVar17 = (param_4->AllocatorInstance).Data + (longlong)iVar14 * 0x70;
  *(longlong *)(pFVar17 + 8) = 0;
  *(longlong *)(pFVar17 + 0x10) = 0;
  *(longlong *)(pFVar17 + 0x18) = 0;
  *(longlong *)(pFVar17 + 0x20) = 0;
  *(longlong *)(pFVar17 + 0x28) = 0;
  *(longlong *)(pFVar17 + 0x30) = 0;
  *(longlong *)(pFVar17 + 0x38) = 0;
  *(longlong *)(pFVar17 + 0x40) = 0;
  *(longlong *)(pFVar17 + 0x48) = 0;
  *(longlong *)(pFVar17 + 0x50) = 0;
  *(longlong *)(pFVar17 + 0x58) = 0;
  *(longlong *)(pFVar17 + 0x60) = 0;
  *(longlong *)(pFVar17 + 0x68) = 0;
  *(longlong *)pFVar17 = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x10) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x20) = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x30) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x40) = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x50) = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(pFVar17 + 0x60) = auVar10;
  pFVar15 = Chaos::FConvex::RawCopyAsConvex(pFVar15);
  if (pFVar15 != (FConvex *)0x0) {
    LOCK();
    *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
    UNLOCK();
  }
  if (pFVar17 == local_180) {
    if (pFVar15 == (FConvex *)0x0) goto LAB_14402d48c;
    LOCK();
    plVar1 = &pFVar15->_padding_;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar12 != 1) || (*(int *)((longlong)&pFVar15->_padding_ + 4) != 0))
    goto LAB_14402d48c;
    puVar16 = (undefined8 *)pFVar15->_padding_;
  }
  else {
    pFVar2 = *(FConvex **)pFVar17;
    *(FConvex **)pFVar17 = pFVar15;
    if (pFVar2 == (FConvex *)0x0) goto LAB_14402d48c;
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar12 != 1) || (*(int *)((longlong)&pFVar2->_padding_ + 4) != 0)) goto LAB_14402d48c;
    puVar16 = (undefined8 *)pFVar2->_padding_;
    pFVar15 = pFVar2;
  }
  (*(code *)*puVar16)(pFVar15,1);
LAB_14402d48c:
  local_98.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_98.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_98.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_98.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_98.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_98.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_98.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_98.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_98.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_98.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_158.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_158.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_98.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_158.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_158.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_158.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_158.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_158,&local_f8,&local_98);
  *(double *)(pFVar17 + 0x10) = local_158.Rotation.XY.m128d_f64[0];
  *(double *)(pFVar17 + 0x18) = local_158.Rotation.XY.m128d_f64[1];
  *(double *)(pFVar17 + 0x20) = local_158.Rotation.ZW.m128d_f64[0];
  *(double *)(pFVar17 + 0x28) = local_158.Rotation.ZW.m128d_f64[1];
  *(double *)(pFVar17 + 0x30) = local_158.Translation.XY.m128d_f64[0];
  *(double *)(pFVar17 + 0x38) = local_158.Translation.XY.m128d_f64[1];
  *(double *)(pFVar17 + 0x40) = local_158.Translation.ZW.m128d_f64[0];
  *(double *)(pFVar17 + 0x48) = local_158.Translation.ZW.m128d_f64[1];
  *(double *)(pFVar17 + 0x50) = local_158.Scale3D.XY.m128d_f64[0];
  *(double *)(pFVar17 + 0x58) = local_158.Scale3D.XY.m128d_f64[1];
  *(double *)(pFVar17 + 0x60) = local_158.Scale3D.ZW.m128d_f64[0];
  *(double *)(pFVar17 + 0x68) = local_158.Scale3D.ZW.m128d_f64[1];
  return;
}

// CopyChildConvexes @ 14402d580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014402df77) */
/* WARNING: Removing unreachable block (ram,0x00014402df9c) */
/* WARNING: Removing unreachable block (ram,0x00014402e294) */
/* WARNING: Removing unreachable block (ram,0x00014402e2b9) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGeometryCollectionConvexUtility::CopyChildConvexes
          (FGeometryCollection *param_1,TArrayView<int_const_,int> *param_2,
          FGeometryCollection *param_3,TArrayView<int_const_,int> *param_4,bool param_5)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  code *pcVar4;
  FGeometryCollection *pFVar5;
  FGeometryCollection *pFVar6;
  TArrayView<int_const_,int> *pTVar7;
  TManagedArray<int> *pTVar8;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar15;
  FValueType *pFVar16;
  FName FVar17;
  FValueType *pFVar18;
  ulonglong uVar19;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  uint uVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  ulonglong uVar30;
  longlong *plVar31;
  undefined1 auStackY_2a8 [32];
  undefined1 local_257;
  undefined1 local_256;
  FIdentityFunctor local_255;
  uint local_254;
  uint local_250 [2];
  FGeometryCollection *local_248;
  TArrayView<int_const_,int> *local_240;
  TArray<TRefCountPtr<Chaos::FConvex>,TSizedDefaultAllocator<32>_> local_238;
  TArrayView<int_const_,int> *local_228;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  local_220;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_210;
  FGeometryCollection *local_200;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_1f8;
  FValueType *local_1e8;
  FName local_1e0;
  TManagedArray<int> *local_1d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1d0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1c0;
  FName local_1b0;
  FName local_1a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a0;
  int local_190;
  int local_18c;
  int local_188;
  longlong *local_180;
  int iStack_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FGeometryCollection **local_100;
  bool local_f8;
  FValueType **local_f0;
  undefined4 local_e8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_e0;
  FName local_d8;
  FName local_d0 [4];
  undefined4 local_ac;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  FVar17 = FTransformCollection::TransformGroup;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_248 = param_1;
  local_240 = param_4;
  local_228 = param_2;
  local_200 = param_3;
  pFVar14 = ::FName::FName(local_d0,"TransformToConvexIndices");
  local_118 = FVar17;
  local_120 = *pFVar14;
  pTVar15 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&local_248->_padding_,(TTuple<FName,FName> *)&local_120);
  pFVar16 = (FValueType *)0x0;
  pFVar18 = (FValueType *)&pTVar15->field_0x10;
  if (pTVar15 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar18 = pFVar16;
  }
  local_1e8 = pFVar16;
  if (pFVar18 != (FValueType *)0x0) {
    local_1e8 = (FValueType *)
                FManagedArrayCollection::FValueType::
                GetTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pFVar18);
  }
  local_110 = FTransformCollection::ConvexHullAttribute;
  local_108 = FTransformCollection::ConvexGroup;
  pTVar15 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&local_248->_padding_,(TTuple<FName,FName> *)&local_110);
  pFVar18 = (FValueType *)&pTVar15->field_0x10;
  if (pTVar15 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar18 = pFVar16;
  }
  if (pFVar18 != (FValueType *)0x0) {
    pFVar16 = (FValueType *)
              FManagedArrayCollection::FValueType::GetTypedPtr<TRefCountPtr<Chaos::FConvex>_>
                        (pFVar18);
  }
  if ((param_3 == (FGeometryCollection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("GeometryCollection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                          ,0x7e,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar17 = FTransformCollection::TransformGroup;
  pFVar14 = ::FName::FName(&local_d8,"TransformToConvexIndices");
  bVar10 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_3,*pFVar14,FVar17)
  ;
  if ((bVar10) &&
     (bVar10 = FManagedArrayCollection::HasAttribute
                         ((FManagedArrayCollection *)param_3,
                          FTransformCollection::ConvexHullAttribute,
                          FTransformCollection::ConvexGroup),
     FVar17 = FTransformCollection::TransformGroup, bVar10)) {
    pFVar14 = ::FName::FName(&local_1a8,"TransformToConvexIndices");
    FVar17 = (FName)FManagedArrayCollection::
                    ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                              ((FManagedArrayCollection *)param_3,*pFVar14,FVar17);
    local_1e0 = FVar17;
    local_1a8 = (FName)FManagedArrayCollection::ModifyAttribute<TRefCountPtr<Chaos::FConvex>_>
                                 ((FManagedArrayCollection *)param_3,
                                  FTransformCollection::ConvexHullAttribute,
                                  FTransformCollection::ConvexGroup);
    bVar10 = true;
  }
  else {
    bVar10 = false;
    local_1e0 = local_1a8;
    FVar17 = local_1a8;
  }
  local_1b0 = local_1a8;
  local_1d8 = GetCustomConvexFlags(param_3,true);
  if ((local_1e8 == (FValueType *)0x0) || (pFVar16 == (FValueType *)0x0)) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2076966675911019162>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                        ,0xa9a,"InTransformToConvexIndices != nullptr && InConvexHull != nullptr");
    if (bVar10) {
code_r0x00014402e42d:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (bVar10) {
    if (param_2->ArrayNum == param_4->ArrayNum) {
      iVar11 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)local_248,FTransformCollection::TransformGroup)
      ;
      local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.ArrayNum = 0;
      local_1f8.ArrayMax = 0;
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_1f8,iVar11,Default);
      local_254 = 0;
      if (0 < iVar11) {
        do {
          pFVar5 = local_248;
          uVar28 = local_254;
          uVar27 = 0;
          if ((int)local_254 < *(int *)&(local_248->SimulationType).field_0x18) {
            uVar27 = ~local_254 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar6 = local_248;
          if (*(int *)(*(longlong *)&(pFVar5->SimulationType).field_0x10 + (longlong)(int)uVar28 * 4
                      ) != 0) {
            lVar23 = (longlong)(int)local_254;
            uVar28 = 0;
            if ((int)local_254 < (int)local_248->_padding_) {
              uVar28 = ~local_254 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar5 = local_248;
            uVar28 = *(uint *)(pFVar6->_padding_ + lVar23 * 4);
            if (uVar28 != 0xffffffff) {
              uVar27 = 0;
              if ((int)uVar28 < *(int *)&(local_248->SimulationType).field_0x18) {
                uVar27 = ~uVar28 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(int *)(*(longlong *)&(pFVar5->SimulationType).field_0x10 +
                          (longlong)(int)uVar28 * 4) != 1) {
                uVar27 = 0;
                if ((int)uVar28 < local_1f8.ArrayNum) {
                  uVar27 = ~uVar28 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar24 = local_1f8.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x10;
                if (((*(FScriptContainerElement **)&pFVar24->field_0x0 <=
                      (FScriptContainerElement *)&local_254) &&
                    ((FScriptContainerElement *)&local_254 <
                     *(FScriptContainerElement **)&pFVar24->field_0x0 +
                     (longlong)*(int *)(pFVar24 + 0xc) * 4)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar12 = *(int *)(pFVar24 + 8);
                if (iVar12 == *(int *)(pFVar24 + 0xc)) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 0xc));
                }
                *(int *)(pFVar24 + 8) = iVar12 + 1;
                *(uint *)(*(FScriptContainerElement **)&pFVar24->field_0x0 + (longlong)iVar12 * 4) =
                     local_254;
              }
            }
          }
          local_254 = local_254 + 1;
          param_2 = local_228;
          FVar17 = local_1e0;
          param_3 = local_200;
        } while ((int)local_254 < iVar11);
      }
      local_100 = &local_248;
      uVar30 = 0;
      local_f8 = param_5;
      local_f0 = &local_1e8;
      local_e0 = &local_1f8;
      local_e8 = 1;
      local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.ArrayNum = 0;
      local_1c0.ArrayMax = 0;
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.ArrayNum = 0;
      local_210.ArrayMax = 0;
      GeometryCollectionAlgo::
      GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
                ((TManagedArray<UE::Math::TTransform<float>_> *)&local_248->_padding_,
                 (TManagedArray<int> *)&local_248->_padding_,&local_1c0);
      FVar26.Data = local_1c0.AllocatorInstance.Data;
      if (local_248 == param_3) {
        iVar11 = local_1c0.ArrayNum;
        lVar23 = (longlong)local_1c0.ArrayNum;
        local_210.ArrayNum = local_1c0.ArrayNum;
        if (((local_1c0.ArrayNum != 0) || (local_210.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,local_1c0.ArrayNum,local_210.ArrayMax,&local_210.AllocatorInstance,
                       local_1c0.ArrayNum,&local_210.ArrayMax), iVar11 != 0)) {
          memcpy(local_210.AllocatorInstance.Data,FVar26.Data,lVar23 * 0x60);
        }
      }
      else {
        GeometryCollectionAlgo::
        GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
                  ((TManagedArray<UE::Math::TTransform<float>_> *)&param_3->_padding_,
                   (TManagedArray<int> *)&param_3->_padding_,&local_210);
      }
      local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.ArrayNum = 0;
      local_238.ArrayMax = 0;
      local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.ArrayNum = 0;
      local_220.ArrayMax = 0;
      iVar11 = (**(code **)(*(longlong *)FVar17 + 0x60))(FVar17);
      TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::
      SetNum(&local_220,iVar11,Default);
      local_a8.Elements._0_8_ = 0;
      local_a8.Elements._8_8_ = 0;
      local_a8.Elements._32_8_ = 0;
      local_a8.Elements._40_4_ = 0;
      local_a8.Elements._44_4_ = 0x80;
      local_a8.Elements._48_4_ = 0xffffffff;
      local_a8.Elements._52_4_ = 0;
      local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_a8.HashSize = 0;
      uVar19 = uVar30;
      if (0 < local_240->ArrayNum) {
        do {
          pTVar7 = local_240;
          uVar22 = (uint)uVar19;
          uVar27 = 0;
          uVar28 = uVar27;
          if ((int)uVar22 < param_2->ArrayNum) {
            uVar28 = ~uVar22 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = *(int *)(uVar30 + (longlong)param_2->DataPtr);
          uVar28 = uVar27;
          if ((int)uVar22 < pTVar7->ArrayNum) {
            uVar28 = ~uVar22 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar28 = *(uint *)(uVar30 + (longlong)pTVar7->DataPtr);
          local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0.ArrayNum = 0;
          local_1d0.ArrayMax = 0;
          local_250[0] = uVar28;
          `FGeometryCollectionConvexUtility::CopyChildConvexes'::__l2::<lambda_1>::operator()
                    (&local_100,iVar11,&local_1d0);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_a8,&local_190,(bool *)local_250);
          pTVar8 = local_1d8;
          uVar13 = uVar27;
          if ((int)uVar28 < *(int *)&local_1d8->field_0x18) {
            uVar13 = ~uVar28 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)(*(longlong *)&pTVar8->field_0x10 + (longlong)(int)uVar28 * 4) = 1;
          if ((int)uVar28 < local_220.ArrayNum) {
            uVar27 = ~uVar28 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar25 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    (local_220.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x50);
          if (*(int *)&(pTVar25->Elements).field_0x8 != *(int *)&(pTVar25->Elements).field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar25);
            *(undefined4 *)&(pTVar25->Elements).field_0x8 = 0;
            if (*(int *)&(pTVar25->Elements).field_0xc < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0,(ForAnyElementType *)pTVar25,0,
                         (int *)&(pTVar25->Elements).field_0xc);
            }
            *(undefined4 *)&(pTVar25->Elements).field_0x30 = 0xffffffff;
            *(undefined4 *)&(pTVar25->Elements).field_0x34 = 0;
            *(undefined4 *)&(pTVar25->Elements).field_0x28 = 0;
            uVar28 = local_250[0];
          }
          iVar11 = local_1d0.ArrayNum;
          uVar19 = (ulonglong)local_1d0.ArrayNum;
          pFVar24 = local_1d0.AllocatorInstance.Data + uVar19 * 4;
          FVar26.Data = local_1d0.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar19 != iVar11) {
              local_257 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_257);
            }
            if (FVar26.Data == pFVar24) break;
            ::`anonymous_namespace'::CopyHulls
                      (&local_1c0,(TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)pFVar16,
                       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                       local_1e8,*(int *)FVar26.Data,&local_210,&local_238,&local_220,uVar28);
            uVar19 = local_1d0._8_8_ & 0xffffffff;
            FVar26.Data = FVar26.Data + 4;
          }
          if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.AllocatorInstance.Data);
          }
          uVar30 = uVar30 + 4;
          param_2 = local_228;
          uVar19 = (ulonglong)(uVar22 + 1);
        } while ((int)(uVar22 + 1) < local_240->ArrayNum);
      }
      pTVar7 = local_240;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_a8,&local_1a0);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum,local_255,
                 (TLess<void> *)&local_255);
      pFVar5 = local_200;
      if (0 < local_1a0.ArrayNum) {
        RemoveConvexHulls((FManagedArrayCollection *)local_200,&local_1a0);
      }
      iVar11 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)pFVar5,FTransformCollection::ConvexGroup);
      local_228 = (TArrayView<int_const_,int> *)pTVar7->DataPtr;
      local_240 = (TArrayView<int_const_,int> *)CONCAT44(local_240._4_4_,iVar11);
      local_1d8 = (TManagedArray<int> *)((longlong)local_228 + (longlong)pTVar7->ArrayNum * 4);
      if ((TManagedArray<int> *)local_228 != local_1d8) {
        do {
          uVar28 = *(uint *)local_228;
          uVar22 = ~uVar28 >> 0x1f;
          uVar27 = 0;
          if ((int)uVar28 < local_220.ArrayNum) {
            uVar27 = uVar22;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = local_1e0;
          lVar23 = (longlong)(int)uVar28 * 0x50;
          pTVar25 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    (local_220.AllocatorInstance.Data + lVar23);
          uVar27 = 0;
          if ((int)uVar28 < *(int *)((longlong)local_1e0 + 0x18)) {
            uVar27 = uVar22;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar20 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    (*(longlong *)((longlong)FVar17 + 0x10) + lVar23);
          if (pTVar20 != pTVar25) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
            Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar20,pTVar25);
          }
          uVar27 = 0;
          if ((int)uVar28 < *(int *)((longlong)FVar17 + 0x18)) {
            uVar27 = uVar22;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar31 = (longlong *)(*(longlong *)((longlong)FVar17 + 0x10) + lVar23);
          iStack_178 = 0;
          iVar11 = (int)plVar31[5];
          pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar31 + 2);
          uStack_174 = 1;
          local_160 = 0;
          iStack_164 = 0;
          if (iVar11 != 0) {
            pTVar29 = pTVar1;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar31[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)plVar31[4];
            }
            uVar28 = *(uint *)(pTVar29->AllocatorInstance).InlineData;
            local_160 = 0;
            while (uVar28 == 0) {
              lVar23 = (longlong)iStack_178;
              local_160 = local_160 + 0x20;
              iStack_178 = iStack_178 + 1;
              iStack_164 = iVar11;
              if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178)
              goto LAB_14402e06d;
              uVar28 = *(uint *)((pTVar29->AllocatorInstance).InlineData + lVar23 * 4 + 4);
            }
            uStack_174 = -uVar28 & uVar28;
            uVar30 = (ulonglong)uStack_174 * 2 + 1;
            lVar23 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_18c = (int)lVar23;
            iStack_164 = local_18c + -1 + local_160;
            if (iVar11 < iStack_164) {
              iStack_164 = iVar11;
            }
          }
LAB_14402e06d:
          uVar28 = *(uint *)(plVar31 + 5);
          uStack_15c = local_ac;
          uVar27 = uVar28 & 0xffffffe0;
          iStack_158 = (int)plVar31[1] - *(int *)((longlong)plVar31 + 0x34);
          TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
          uStack_168 = 0xffffffff;
          TStack_148.CurrentBitIndex = iStack_164;
          TStack_148.UnvisitedBitMask = 0xffffffff;
          iVar12 = (int)uVar28 >> 5;
          TStack_148._28_4_ = local_ac;
          TStack_148.BaseBitIndex = local_160;
          uStack_128 = CONCAT44(uStack_154,iStack_158);
          local_180 = plVar31;
          local_170 = pTVar1;
          local_150 = plVar31;
          TStack_148.Array = pTVar1;
          if ((((int)uVar28 < 0) || (iVar11 < (int)uVar28)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar22 = *(uint *)(plVar31 + 5);
          if (uVar28 != uVar22) {
            pTVar29 = pTVar1;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar31[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)plVar31[4];
            }
            uVar28 = -1 << ((byte)uVar28 & 0x1f) &
                     *(uint *)((pTVar29->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
            while (uVar28 == 0) {
              lVar23 = (longlong)iVar12;
              uVar27 = uVar27 + 0x20;
              iVar12 = iVar12 + 1;
              uVar28 = uVar22;
              if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
              goto LAB_14402e16d;
              uVar28 = *(uint *)((pTVar29->AllocatorInstance).InlineData + lVar23 * 4 + 4);
            }
            uVar30 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
            lVar23 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_188 = (int)lVar23;
            uVar28 = (uVar27 - 1) + local_188;
            if ((int)uVar22 < (int)uVar28) {
              uVar28 = uVar22;
            }
          }
LAB_14402e16d:
          iVar11 = (int)local_240;
          while( true ) {
            plVar9 = local_150;
            if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
              local_256 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_256);
            }
            if (((TStack_148.CurrentBitIndex == uVar28) && (TStack_148.Array == pTVar1)) &&
               (plVar9 == plVar31)) break;
            piVar2 = (int *)(*plVar9 + (longlong)TStack_148.CurrentBitIndex * 0xc);
            *piVar2 = *piVar2 + iVar11;
            TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
          }
          local_228 = (TArrayView<int_const_,int> *)((longlong)local_228 + 4);
        } while ((TManagedArray<int> *)local_228 != local_1d8);
        iVar11 = (int)local_240;
      }
      FManagedArrayCollection::Resize
                ((FManagedArrayCollection *)local_200,local_238.ArrayNum + iVar11,
                 FTransformCollection::ConvexGroup);
      FVar17 = local_1b0;
      lVar23 = 0;
      if (0 < local_238.ArrayNum) {
        uVar28 = 0;
        do {
          uVar27 = 0;
          if ((int)uVar28 < local_238.ArrayNum) {
            uVar27 = ~uVar28 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar24 = local_238.AllocatorInstance.Data + lVar23;
          uVar27 = 0;
          if ((int)(uVar28 + iVar11) < *(int *)((longlong)FVar17 + 0x18)) {
            uVar27 = ~(uVar28 + iVar11) >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar21 = (FScriptContainerElement *)
                    ((longlong)iVar11 * 8 + lVar23 + *(longlong *)((longlong)FVar17 + 0x10));
          if (pFVar21 != pFVar24) {
            puVar3 = *(undefined8 **)pFVar21;
            *(longlong *)pFVar21 = *(longlong *)pFVar24;
            *(longlong *)pFVar24 = 0;
            if (puVar3 != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(puVar3 + 1);
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar12 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
                (**(code **)*puVar3)(puVar3,1);
              }
            }
          }
          uVar28 = uVar28 + 1;
          lVar23 = lVar23 + 8;
        } while ((int)uVar28 < local_238.ArrayNum);
      }
      if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.AllocatorInstance.Data);
      }
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 local_220.AllocatorInstance.Data,local_220.ArrayNum);
      if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_220.AllocatorInstance.Data
          != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
        FMemory::Free(local_220.AllocatorInstance.Data);
      }
      DestructItems<TRefCountPtr<Chaos::FConvex>,int>
                ((TRefCountPtr<Chaos::FConvex> *)local_238.AllocatorInstance.Data,local_238.ArrayNum
                );
      if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.AllocatorInstance.Data);
      }
      if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
      }
      if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1f8.AllocatorInstance.Data,
                 local_1f8.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1f8.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1f8.AllocatorInstance.Data);
      }
    }
    else {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2076966675911019167>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                          ,0xa9f,"FromTransformIdx.Num() == ToTransformIdx.Num()");
      if (bVar10) goto code_r0x00014402e42d;
    }
  }
  else {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2076966675911019162>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                        ,0xa9a,"OutConvex.IsSet()");
    if (bVar10) goto code_r0x00014402e42d;
  }
  return;
}

// CopyConvexHulls @ 14402e470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGeometryCollectionConvexUtility::CopyConvexHulls
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          FManagedArrayCollection *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          bool param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  FManagedArrayBase *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FManagedArrayBase *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  FValueType *pFVar13;
  FValueType *pFVar14;
  longlong lVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  FValueType *pFVar22;
  FManagedArrayBase *pFVar23;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  undefined2 local_1e8 [2];
  undefined1 local_1e4 [4];
  uint local_1e0;
  uint local_1dc;
  FManagedArrayBase *local_1d8;
  FManagedArrayBase *local_1d0;
  FValueType *local_1c8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1c0;
  FValueType *local_1b8;
  longlong local_1b0;
  FManagedArrayCollection *local_1a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a0;
  int local_190;
  int local_18c;
  int local_188 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_180;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_178;
  FManagedArrayBase *local_170;
  int iStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  FManagedArrayBase *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  undefined4 local_b4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_218;
  piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_1c0 = param_2;
  local_1a8 = param_1;
  local_180 = param_4;
  if ((*piVar17 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ConvexGroupName = FTransformCollection::ConvexGroup;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar17 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ConvexHullAttributeName = FTransformCollection::ConvexHullAttribute;
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar17 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&TransformToConvexIndicesName,"TransformToConvexIndices");
    _Init_thread_footer(&::_TSS2);
  }
  if (param_2->ArrayNum == param_4->ArrayNum) {
    CreateConvexHullAttributesIfNeeded(param_1);
    local_110 = ConvexHullAttributeName;
    local_108 = ConvexGroupName;
    pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_1->Map,(TTuple<FName,FName> *)&local_110);
    pFVar22 = (FValueType *)0x0;
    pFVar13 = (FValueType *)&pTVar12->field_0x10;
    if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar13 = pFVar22;
    }
    if ((pFVar13 == (FValueType *)0x0) || (pFVar13->ArrayType != FFConvexRefCountedPtrType)) {
      local_1d8 = (FManagedArrayBase *)0x0;
    }
    else {
      FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar13);
      pFVar23 = pFVar13->ManagedArray;
      local_1d8 = pFVar23;
      if ((pFVar23 == (FManagedArrayBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar23->bIsDirty = true;
    }
    local_100 = ConvexHullAttributeName;
    local_f8 = ConvexGroupName;
    pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_3->Map,(TTuple<FName,FName> *)&local_100);
    pFVar13 = (FValueType *)&pTVar12->field_0x10;
    if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar13 = pFVar22;
    }
    if ((pFVar13 == (FValueType *)0x0) || (pFVar13->ArrayType != FFConvexRefCountedPtrType)) {
      pFVar23 = (FManagedArrayBase *)0x0;
      local_1d0 = (FManagedArrayBase *)0x0;
    }
    else {
      pFVar23 = pFVar13->ManagedArray;
      local_1d0 = pFVar23;
      if ((pFVar23 == (FManagedArrayBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x306,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
    }
    local_f0 = TransformToConvexIndicesName;
    local_e8 = FTransformCollection::TransformGroup;
    pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_1->Map,(TTuple<FName,FName> *)&local_f0);
    pFVar13 = (FValueType *)&pTVar12->field_0x10;
    if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar13 = pFVar22;
    }
    if ((pFVar13 == (FValueType *)0x0) || (pFVar13->ArrayType != FIntArrayType)) {
      local_1b8 = (FValueType *)0x0;
      pFVar13 = pFVar22;
    }
    else {
      FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar13);
      pFVar13 = (FValueType *)pFVar13->ManagedArray;
      local_1b8 = pFVar13;
      if ((pFVar13 == (FValueType *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      *(undefined1 *)&(pFVar13->GroupIndexDependency).Number = 1;
    }
    local_e0 = TransformToConvexIndicesName;
    local_d8 = FTransformCollection::TransformGroup;
    pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_3->Map,(TTuple<FName,FName> *)&local_e0);
    pFVar14 = (FValueType *)&pTVar12->field_0x10;
    if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar14 = pFVar22;
    }
    if ((pFVar14 == (FValueType *)0x0) || (pFVar14->ArrayType != FIntArrayType)) {
      local_1c8 = (FValueType *)0x0;
    }
    else {
      pFVar22 = (FValueType *)pFVar14->ManagedArray;
      local_1c8 = pFVar22;
      if ((pFVar22 == (FValueType *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x306,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
    }
    if ((pFVar23 != (FManagedArrayBase *)0x0) && (pFVar22 != (FValueType *)0x0)) {
      if (((pFVar13 == (FValueType *)0x0) || (param_1 == (FManagedArrayCollection *)0x0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeArray!=nullptr && !IsConst()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x74,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar23 = local_1d8;
      *(undefined1 *)&(pFVar13->GroupIndexDependency).Number = 1;
      if (((local_1d8 == (FManagedArrayBase *)0x0) || (param_1 == (FManagedArrayCollection *)0x0))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("AttributeArray!=nullptr && !IsConst()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x74,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar23->bIsDirty = true;
      local_a8.Elements._0_8_ = 0;
      local_a8.Elements._8_8_ = 0;
      local_a8.Elements._32_8_ = 0;
      local_a8.Elements._40_4_ = 0;
      local_a8.Elements._44_4_ = 0x80;
      local_a8.Elements._48_4_ = 0xffffffff;
      local_a8.Elements._52_4_ = 0;
      local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_a8.HashSize = 0;
      local_1dc = 0;
      if (0 < param_2->ArrayNum) {
        local_1b0 = 0;
        do {
          pTVar6 = local_180;
          lVar15 = local_1b0;
          uVar18 = local_1dc;
          uVar19 = ~local_1dc;
          uVar11 = 0;
          if ((int)local_1dc < local_180->ArrayNum) {
            uVar11 = uVar19 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_1f8 = (longlong)(int)local_1dc;
            local_1f0 = (longlong)local_180->ArrayNum;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
          }
          uVar11 = *(uint *)((pTVar6->AllocatorInstance).Data + lVar15);
          uVar10 = 0;
          if ((int)uVar18 < param_2->ArrayNum) {
            uVar10 = uVar19 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_1f8 = (longlong)(int)uVar18;
            local_1f0 = (longlong)param_2->ArrayNum;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
          }
          uVar19 = *(uint *)((param_2->AllocatorInstance).Data + lVar15);
          lVar20 = (longlong)(int)uVar19;
          if (((int)uVar19 < 0) ||
             (*(int *)&(pFVar13->SharedManagedArray).SharedReferenceCount.ReferenceController <=
              (int)uVar19)) {
            if (2 < (byte)LogChaos._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
            }
          }
          else if (((int)uVar11 < 0) ||
                  (*(int *)&(pFVar22->SharedManagedArray).SharedReferenceCount.ReferenceController
                   <= (int)uVar11)) {
            if (2 < (byte)LogChaos._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
            }
          }
          else {
            iVar16 = *(int *)&(pFVar22->SharedManagedArray).SharedReferenceCount.ReferenceController
            ;
            uVar10 = 0;
            if ((int)uVar11 < iVar16) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (local_1f8 = (longlong)(int)uVar11, local_1f0 = (longlong)iVar16,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            pFVar23 = (pFVar22->SharedManagedArray).Object + (longlong)(int)uVar11 * 5;
            if ((!param_5) ||
               (param_2 = local_1c0, pFVar22 = local_1c8,
               *(int *)&pFVar23->bIsDirty != *(int *)((longlong)&pFVar23[3]._padding_ + 4))) {
              iVar16 = *(int *)&(pFVar13->SharedManagedArray).SharedReferenceCount.
                                ReferenceController;
              uVar18 = 0;
              if ((int)uVar19 < iVar16) {
                uVar18 = ~uVar19 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (local_1f8 = lVar20, local_1f0 = (longlong)iVar16,
                 bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                        (&local_a8,
                         (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                         ((pFVar13->SharedManagedArray).Object + lVar20 * 5));
              iVar16 = *(int *)&(pFVar13->SharedManagedArray).SharedReferenceCount.
                                ReferenceController;
              uVar18 = 0;
              if ((int)uVar19 < iVar16) {
                uVar18 = ~uVar19 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (local_1f8 = lVar20, local_1f0 = (longlong)iVar16,
                 bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              local_178 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                          ((pFVar13->SharedManagedArray).Object + lVar20 * 5);
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(local_178);
              uVar11 = FManagedArrayCollection::AddElements
                                 (local_1a8,
                                  *(int *)&pFVar23->bIsDirty -
                                  *(int *)((longlong)&pFVar23[3]._padding_ + 4),
                                  FTransformCollection::ConvexGroup);
              iVar16 = *(int *)&pFVar23[2].bIsDirty;
              local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar23 + 1);
              iStack_168 = 0;
              local_150 = 0;
              uStack_164 = 1;
              iStack_154 = 0;
              if (iVar16 != 0) {
                pTVar21 = local_160;
                if ((TBitArray<FDefaultBitArrayAllocator> *)pFVar23[2]._padding_ !=
                    (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar23[2]._padding_;
                }
                uVar18 = (uint)*(longlong *)(pTVar21->AllocatorInstance).InlineData;
                while (uVar18 == 0) {
                  lVar15 = (longlong)iStack_168;
                  local_150 = local_150 + 0x20;
                  iStack_168 = iStack_168 + 1;
                  iStack_154 = iVar16;
                  if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168)
                  goto LAB_14402eabd;
                  uVar18 = *(uint *)((longlong)(pTVar21->AllocatorInstance).InlineData +
                                    lVar15 * 4 + 4);
                }
                uStack_164 = -uVar18 & uVar18;
                uVar1 = (ulonglong)uStack_164 * 2 + 1;
                lVar15 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                local_190 = (int)lVar15;
                iStack_154 = local_150 + -1 + local_190;
                if (iVar16 < iStack_154) {
                  iStack_154 = iVar16;
                }
              }
LAB_14402eabd:
              uVar19 = *(uint *)&pFVar23[2].bIsDirty;
              uStack_14c = local_b4;
              iStack_148 = *(int *)&pFVar23->bIsDirty -
                           *(int *)((longlong)&pFVar23[3]._padding_ + 4);
              uVar18 = uVar19 & 0xffffffe0;
              TStack_138._padding_ = CONCAT44(uStack_164,iStack_168);
              uStack_158 = 0xffffffff;
              TStack_138.CurrentBitIndex = iStack_154;
              TStack_138.UnvisitedBitMask = 0xffffffff;
              iVar16 = (int)uVar19 >> 5;
              TStack_138._28_4_ = local_b4;
              TStack_138.BaseBitIndex = local_150;
              uStack_118 = CONCAT44(uStack_144,iStack_148);
              local_170 = pFVar23;
              local_140 = pFVar23;
              TStack_138.Array = local_160;
              if (((int)uVar19 < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x7af,L""), bVar8)) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              pFVar5 = local_1d8;
              uVar10 = *(uint *)&pFVar23[2].bIsDirty;
              if (uVar19 != uVar10) {
                pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar23 + 1);
                if ((TBitArray<FDefaultBitArrayAllocator> *)pFVar23[2]._padding_ !=
                    (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar23[2]._padding_;
                }
                uVar19 = -1 << ((byte)uVar19 & 0x1f) &
                         *(uint *)((longlong)(pTVar21->AllocatorInstance).InlineData +
                                  (longlong)iVar16 * 4);
                while (uVar19 == 0) {
                  lVar15 = (longlong)iVar16;
                  uVar18 = uVar18 + 0x20;
                  iVar16 = iVar16 + 1;
                  uVar19 = uVar10;
                  if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
                  goto LAB_14402ebd0;
                  uVar19 = *(uint *)((longlong)(pTVar21->AllocatorInstance).InlineData +
                                    lVar15 * 4 + 4);
                }
                uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
                lVar15 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                local_18c = (int)lVar15;
                uVar19 = (uVar18 - 1) + local_18c;
                if ((int)uVar10 < (int)uVar19) {
                  uVar19 = uVar10;
                }
              }
LAB_14402ebd0:
              while( true ) {
                pFVar7 = local_140;
                if (*(int *)&local_140->bIsDirty - *(int *)((longlong)&local_140[3]._padding_ + 4)
                    != (int)uStack_118) {
                  local_1e4[0] = 0;
                  `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1e4);
                }
                if (((TStack_138.CurrentBitIndex == uVar19) &&
                    (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar23 + 1))) &&
                   (param_2 = local_1c0, pFVar13 = local_1b8, pFVar22 = local_1c8,
                   lVar15 = local_1b0, uVar18 = local_1dc, pFVar7 == pFVar23)) break;
                uVar18 = *(uint *)(pFVar7->_padding_ + (longlong)TStack_138.CurrentBitIndex * 0xc);
                local_1e0 = uVar11;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (local_178,local_188,(bool *)&local_1e0);
                uVar10 = 0;
                if ((int)uVar18 < *(int *)&local_1d0[1].bIsDirty) {
                  uVar10 = ~uVar18 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (local_1f8 = (longlong)(int)uVar18,
                   local_1f0 = (longlong)*(int *)&local_1d0[1].bIsDirty,
                   bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , bVar8)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                iVar16 = *(int *)&pFVar5[1].bIsDirty;
                lVar15 = local_1d0[1]._padding_;
                uVar10 = 0;
                if ((int)uVar11 < iVar16) {
                  uVar10 = ~uVar11 >> 0x1f;
                }
                if (uVar10 == 0) {
                  local_1f8 = (longlong)(int)uVar11;
                  local_1f0 = (longlong)iVar16;
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar8) {
                    pcVar4 = (code *)swi(3);
                    uVar9 = (*pcVar4)();
                    return (bool)uVar9;
                  }
                }
                lVar20 = pFVar5[1]._padding_;
                puVar2 = *(undefined8 **)(lVar15 + (longlong)(int)uVar18 * 8);
                puVar3 = *(undefined8 **)(lVar20 + (longlong)(int)uVar11 * 8);
                if (puVar3 != puVar2) {
                  *(undefined8 **)(lVar20 + (longlong)(int)uVar11 * 8) = puVar2;
                  if (puVar2 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
                    UNLOCK();
                  }
                  if (puVar3 != (undefined8 *)0x0) {
                    LOCK();
                    piVar17 = (int *)(puVar3 + 1);
                    iVar16 = *piVar17;
                    *piVar17 = *piVar17 + -1;
                    UNLOCK();
                    if ((iVar16 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
                      (**(code **)*puVar3)(puVar3,1);
                    }
                  }
                }
                TStack_138.UnvisitedBitMask =
                     TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
                uVar11 = uVar11 + 1;
              }
            }
          }
          local_1dc = uVar18 + 1;
          local_1b0 = lVar15 + 4;
          param_1 = local_1a8;
        } while ((int)local_1dc < param_2->ArrayNum);
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_a8,&local_1a0);
      if (local_1a0.ArrayNum != 0) {
        AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                  ((int *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum,local_1e8[0]._0_1_,
                   (TLess<void> *)local_1e8);
        local_1e8[0] = 0x100;
        (**(code **)(param_1->_padding_ + 0x28))
                  (param_1,&FTransformCollection::ConvexGroup,&local_1a0,0x100);
      }
      if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.AllocatorInstance.Data);
      }
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      return true;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  else if (2 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  return false;
}

// CreateConvexHullAttributesIfNeeded @ 14402fad0

void __cdecl
FGeometryCollectionConvexUtility::CreateConvexHullAttributesIfNeeded
          (FManagedArrayCollection *param_1)

{
  FName FVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName *pFVar6;
  undefined1 *puVar7;
  FName local_res8;
  undefined2 local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  FVar2 = FTransformCollection::ConvexGroup;
  uVar4 = ::GetTypeHash(FTransformCollection::ConvexGroup.ComparisonIndex.Value);
  if (*(int *)&(param_1->GroupInfo).field_0x8 != *(int *)&(param_1->GroupInfo).field_0x34) {
    puVar7 = *(undefined1 **)&(param_1->GroupInfo).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(param_1->GroupInfo).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(param_1->GroupInfo).field_0x48 - 1U & FVar2.Number + uVar4)
                              * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&param_1->GroupInfo + (longlong)iVar5 * 0x14) == FVar2)
        goto LAB_14402fb54;
        iVar5 = *(int *)(*(longlong *)&param_1->GroupInfo + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(param_1,FTransformCollection::ConvexGroup);
LAB_14402fb54:
  FVar2 = FTransformCollection::TransformGroup;
  pFVar6 = ::FName::FName(&local_res8,"TransformToConvexIndices");
  bVar3 = FManagedArrayCollection::HasAttribute(param_1,*pFVar6,FVar2);
  FVar1 = FTransformCollection::ConvexGroup;
  FVar2 = FTransformCollection::TransformGroup;
  if (!bVar3) {
    local_20._0_1_ = true;
    local_20._1_1_ = false;
    pFVar6 = ::FName::FName(&local_res8,"TransformToConvexIndices");
    local_18.GroupIndexDependency = FVar1;
    FVar1 = *pFVar6;
    local_18.Saved = true;
    local_18.bAllowCircularDependency = false;
    local_18._10_2_ = uStack_1e;
    bVar3 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar2);
    if (!bVar3) {
      FManagedArrayCollection::
      AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                (param_1,FVar1,FVar2,&local_18);
    }
    FManagedArrayCollection::ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (param_1,FVar1,FVar2);
  }
  bVar3 = FManagedArrayCollection::HasAttribute
                    (param_1,FTransformCollection::ConvexHullAttribute,
                     FTransformCollection::ConvexGroup);
  FVar1 = FTransformCollection::ConvexHullAttribute;
  FVar2 = FTransformCollection::ConvexGroup;
  if (!bVar3) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_18.GroupIndexDependency.Number = 0;
    local_18.Saved = true;
    local_18.bAllowCircularDependency = false;
    local_18._10_2_ = uStack_1e;
    bVar3 = FManagedArrayCollection::HasAttribute
                      (param_1,FTransformCollection::ConvexHullAttribute,
                       FTransformCollection::ConvexGroup);
    if (!bVar3) {
      FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FConvex>_>
                (param_1,FVar1,FVar2,&local_18);
    }
    FManagedArrayCollection::ModifyAttribute<TRefCountPtr<Chaos::FConvex>_>(param_1,FVar1,FVar2);
  }
  return;
}

// CreateNonOverlappingConvexHullData @ 14402fc90

FGeometryCollectionConvexData * __cdecl
FGeometryCollectionConvexUtility::CreateNonOverlappingConvexHullData
          (FGeometryCollectionConvexData *__return_storage_ptr__,FGeometryCollection *param_1,
          double param_2,double param_3,double param_4,EConvexOverlapRemoval param_5,double param_6,
          FConvexHulls *param_7)

{
  int iVar1;
  int iVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  bool bVar6;
  FGeometryCollectionConvexData *pFVar7;
  FName *pFVar8;
  FConvexHulls *pFVar9;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar10;
  FValueType *pFVar11;
  TManagedArray<float> *pTVar12;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar13;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar14;
  FValueType *pFVar15;
  undefined1 *puVar16;
  TManagedArray<int> ***pppTVar17;
  code *pcVar18;
  double dVar19;
  TManagedArray<int> **local_res8;
  undefined1 local_res10 [8];
  undefined1 local_248 [8];
  TManagedArray<int> *local_240;
  TManagedArray<int> **local_238;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_230;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_228;
  double local_218;
  FConvexHulls local_210;
  FGeometryCollectionProximityUtility local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  code *local_1b0;
  TManagedArray<int> ***local_1a8;
  TArrayView<std::nullptr_t,int> local_1a0;
  code *local_190;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> **local_188;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_180;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  *local_178;
  FConvexHulls *local_170;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> **local_168;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_160;
  double *local_158;
  FConvexHulls local_150;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  code *local_f0;
  TManagedArray<int> ***local_e8;
  code *local_e0;
  TManagedArray<int> ***local_d8;
  TFunction<bool___cdecl(int)> local_c8;
  undefined8 local_88 [4];
  undefined8 local_68 [6];
  
  pFVar11 = (FValueType *)0x0;
  if (param_1 == (FGeometryCollection *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryCollection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                       ,0x6e1,L"");
    if (bVar6) {
      pcVar18 = (code *)swi(3);
      pFVar7 = (FGeometryCollectionConvexData *)(*pcVar18)();
      return pFVar7;
    }
  }
  FVar5 = FTransformCollection::TransformGroup;
  pFVar8 = ::FName::FName(&local_118,"HasCustomConvex");
  bVar6 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar8,FVar5);
  FVar5 = FTransformCollection::TransformGroup;
  if (bVar6) {
    pFVar8 = ::FName::FName(&local_110,"HasCustomConvex");
    local_240 = FManagedArrayCollection::ModifyAttribute<int>
                          ((FManagedArrayCollection *)param_1,*pFVar8,FVar5);
    if (local_240 != (TManagedArray<int> *)0x0) {
      local_e8 = &local_238;
      pcVar18 = UE::Core::Private::Function::
                TFunctionRefCaller<`FGeometryCollectionConvexUtility::CreateNonOverlappingConvexHullData'::__l2::<lambda_2>,bool,int>
                ::Call;
      local_f0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FGeometryCollectionConvexUtility::CreateNonOverlappingConvexHullData'::__l2::<lambda_2>,bool,int>
                 ::Call;
      pppTVar17 = &local_238;
      goto LAB_14402fd51;
    }
  }
  else {
    local_240 = (TManagedArray<int> *)0x0;
  }
  local_d8 = &local_res8;
  pcVar18 = UE::Core::Private::Function::
            TFunctionRefCaller<`FGeometryCollectionConvexUtility::CreateNonOverlappingConvexHullData'::__l2::<lambda_1>,bool,int>
            ::Call;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FGeometryCollectionConvexUtility::CreateNonOverlappingConvexHullData'::__l2::<lambda_1>,bool,int>
             ::Call;
  pppTVar17 = &local_res8;
LAB_14402fd51:
  local_238 = &local_240;
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  GeometryCollectionAlgo::GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
            ((TManagedArray<UE::Math::TTransform<float>_> *)&param_1->_padding_,
             (TManagedArray<int> *)&param_1->_padding_,&local_228);
  local_210.Hulls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.Hulls.ArrayNum = 0;
  local_210.Hulls.ArrayMax = 0;
  local_210.TransformToHullsIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.TransformToHullsIndices.ArrayNum = 0;
  local_210.TransformToHullsIndices.ArrayMax = 0;
  local_210.Pivots.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.Pivots.ArrayNum = 0;
  local_210.Pivots.ArrayMax = 0;
  pFVar9 = param_7;
  if (param_7 == (FConvexHulls *)0x0) {
    local_c8._0_8_ = 0;
    local_c8._40_8_ = 0;
    pFVar9 = ComputeLeafHulls(&local_150,param_1,&local_228,param_3,param_6,&local_c8,
                              (FConvexDecompositionSettings *)0x0,
                              (TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_>
                               *)0x0,(TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                                      *)0x0,
                              (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                               *)0x0);
    UE::GeometryCollectionConvexUtility::FConvexHulls::operator=(&local_210,pFVar9);
    if (local_150.Pivots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Pivots.AllocatorInstance.Data);
    }
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               local_150.TransformToHullsIndices.AllocatorInstance.Data,
               local_150.TransformToHullsIndices.ArrayNum);
    if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
        local_150.TransformToHullsIndices.AllocatorInstance.Data !=
        (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      FMemory::Free(local_150.TransformToHullsIndices.AllocatorInstance.Data);
    }
    DestructItems<TRefCountPtr<Chaos::FConvex>,int>
              ((TRefCountPtr<Chaos::FConvex> *)local_150.Hulls.AllocatorInstance.Data,
               local_150.Hulls.ArrayNum);
    if (local_150.Hulls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Hulls.AllocatorInstance.Data);
    }
    pFVar9 = &local_210;
  }
  FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility(&local_1d8,param_1);
  FGeometryCollectionProximityUtility::RequireProximity(&local_1d8,pFVar9);
  SetVolumeAttributes((FManagedArrayCollection *)param_1);
  FVar5 = FGeometryCollection::GeometryGroup;
  pFVar8 = ::FName::FName(&local_108,"Proximity");
  local_1c8 = FVar5;
  local_1d0 = *pFVar8;
  pTVar10 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_1->_padding_,(TTuple<FName,FName> *)&local_1d0);
  pFVar15 = (FValueType *)&pTVar10->field_0x10;
  if (pTVar10 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = pFVar11;
  }
  if (pFVar15 != (FValueType *)0x0) {
    pFVar11 = (FValueType *)
              FManagedArrayCollection::FValueType::
              ModifyTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pFVar15);
  }
  FVar5 = FTransformCollection::TransformGroup;
  pFVar8 = ::FName::FName(&local_100,"Volume");
  local_1b8 = FVar5;
  local_1c0 = *pFVar8;
  pTVar10 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_1->_padding_,(TTuple<FName,FName> *)&local_1c0);
  pFVar15 = (FValueType *)&pTVar10->field_0x10;
  if (pTVar10 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar15 = (FValueType *)0x0;
  }
  if (pFVar15 == (FValueType *)0x0) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = FManagedArrayCollection::FValueType::ModifyTypedPtr<float>(pFVar15);
  }
  local_1b0 = pcVar18;
  local_1a8 = pppTVar17;
  ::`anonymous_namespace'::CreateNonoverlappingConvexHulls
            (&pFVar9->Hulls,&pFVar9->Pivots,&pFVar9->TransformToHullsIndices,
             (TFunctionRef<bool___cdecl(int)> *)&local_1b0,&param_1->SimulationType,1,0,
             (TManagedArray<int> *)&param_1->_padding_,
             (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pFVar11,
             &param_1->TransformIndex,pTVar12,param_2,param_3,param_4,param_5,
             pFVar9->OverlapRemovalShrinkPercent);
  local_230 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
              pFVar9->OverlapRemovalShrinkPercent;
  local_218 = __real_3ff0000000000000;
  dVar19 = __real_3ff0000000000000 - (double)local_230 * __real_3f847ae147ae147b;
  if (dVar19 == 0.0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2076966675911018050>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                       ,0x642,"ScaleFactor != 0.0");
    if (bVar6) {
      pcVar18 = (code *)swi(3);
      pFVar7 = (FGeometryCollectionConvexData *)(*pcVar18)();
      return pFVar7;
    }
  }
  else {
    local_218 = __real_3ff0000000000000 / dVar19;
  }
  local_180 = &local_228;
  local_168 = &local_230;
  local_158 = &local_218;
  local_190 = UE::Core::Private::Function::
              TFunctionRefCaller<``anonymous_namespace'::TransformHullsToLocal'::__l2::<lambda_1>,void,int>
              ::Call;
  local_188 = &local_180;
  local_1a0.DataPtr = (void **)0x0;
  local_1a0.ArrayNum = 0;
  local_178 = &pFVar9->TransformToHullsIndices;
  local_170 = pFVar9;
  local_160 = &pFVar9->Pivots;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(pFVar9->TransformToHullsIndices).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_190,param_7._0_1_,None,&local_1a0);
  CreateConvexHullAttributesIfNeeded((FManagedArrayCollection *)param_1);
  FVar5 = FTransformCollection::TransformGroup;
  pFVar8 = ::FName::FName(&local_f8,"TransformToConvexIndices");
  pTVar13 = FManagedArrayCollection::
            ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                      ((FManagedArrayCollection *)param_1,*pFVar8,FVar5);
  local_230 = pTVar13;
  pTVar14 = FManagedArrayCollection::ModifyAttribute<TRefCountPtr<Chaos::FConvex>_>
                      ((FManagedArrayCollection *)param_1,FTransformCollection::ConvexHullAttribute,
                       FTransformCollection::ConvexGroup);
  pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
           (pFVar9->TransformToHullsIndices).AllocatorInstance.Data;
  (pFVar9->TransformToHullsIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar9->TransformToHullsIndices).ArrayMax;
  iVar2 = (pFVar9->TransformToHullsIndices).ArrayNum;
  (pFVar9->TransformToHullsIndices).ArrayNum = 0;
  (pFVar9->TransformToHullsIndices).ArrayMax = 0;
  if ((*(int *)&pTVar13->field_0x18 != 0) && (*(int *)&pTVar13->field_0x18 != iVar2)) {
    `TManagedArrayBase<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator='::__l2::
    <lambda_1>::operator()(local_res10);
  }
  puVar16 = &pTVar13->field_0x10;
  if ((undefined8 *)puVar16 == local_88) {
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>(pTVar3,iVar2);
    if (pTVar3 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      FMemory::Free(pTVar3);
    }
  }
  else {
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
              (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)puVar16,
               *(int *)&pTVar13->field_0x18);
    if (*(void **)puVar16 != (void *)0x0) {
      FMemory::Free(*(void **)puVar16);
    }
    *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)puVar16 = pTVar3;
    *(int *)&pTVar13->field_0x18 = iVar2;
    *(int *)&pTVar13->field_0x1c = iVar1;
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0,0);
  }
  FManagedArrayCollection::EmptyGroup
            ((FManagedArrayCollection *)param_1,FTransformCollection::ConvexGroup);
  FManagedArrayCollection::Resize
            ((FManagedArrayCollection *)param_1,(pFVar9->Hulls).ArrayNum,
             FTransformCollection::ConvexGroup);
  pFVar4 = (pFVar9->Hulls).AllocatorInstance.Data;
  (pFVar9->Hulls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar9->Hulls).ArrayMax;
  iVar2 = (pFVar9->Hulls).ArrayNum;
  (pFVar9->Hulls).ArrayNum = 0;
  (pFVar9->Hulls).ArrayMax = 0;
  if ((*(int *)&pTVar14->field_0x18 != 0) && (*(int *)&pTVar14->field_0x18 != iVar2)) {
    `TManagedArrayBase<TRefCountPtr<Chaos::FConvex>_>::operator='::__l2::<lambda_1>::operator()
              (local_248);
  }
  puVar16 = &pTVar14->field_0x10;
  if ((undefined8 *)puVar16 == local_68) {
    DestructItems<TRefCountPtr<Chaos::FConvex>,int>((TRefCountPtr<Chaos::FConvex> *)pFVar4,iVar2);
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    DestructItems<TRefCountPtr<Chaos::FConvex>,int>
              (*(TRefCountPtr<Chaos::FConvex> **)puVar16,*(int *)&pTVar14->field_0x18);
    if (*(void **)puVar16 != (void *)0x0) {
      FMemory::Free(*(void **)puVar16);
    }
    *(FScriptContainerElement **)puVar16 = pFVar4;
    *(int *)&pTVar14->field_0x18 = iVar2;
    *(int *)&pTVar14->field_0x1c = iVar1;
    DestructItems<TRefCountPtr<Chaos::FConvex>,int>((TRefCountPtr<Chaos::FConvex> *)0x0,0);
  }
  RemoveEmptyConvexHulls((FManagedArrayCollection *)param_1);
  __return_storage_ptr__->TransformToConvexIndices = local_230;
  __return_storage_ptr__->ConvexHull = pTVar14;
  if (local_210.Pivots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Pivots.AllocatorInstance.Data);
  }
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             local_210.TransformToHullsIndices.AllocatorInstance.Data,
             local_210.TransformToHullsIndices.ArrayNum);
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
      local_210.TransformToHullsIndices.AllocatorInstance.Data !=
      (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(local_210.TransformToHullsIndices.AllocatorInstance.Data);
  }
  DestructItems<TRefCountPtr<Chaos::FConvex>,int>
            ((TRefCountPtr<Chaos::FConvex> *)local_210.Hulls.AllocatorInstance.Data,
             local_210.Hulls.ArrayNum);
  if (local_210.Hulls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Hulls.AllocatorInstance.Data);
  }
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GenerateClusterConvexHullsFromChildrenHulls @ 1440385b0

void __cdecl
FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromChildrenHulls
          (FGeometryCollection *param_1,FClusterConvexHullSettings *param_2)

{
  TArrayView<int_const_,int> local_18;
  
  local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  local_18.DataPtr = (int *)0x0;
  GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal(param_1,param_2,false,true,&local_18);
  return;
}

// GenerateClusterConvexHullsFromChildrenHulls @ 1440385f0

void __cdecl
FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromChildrenHulls
          (FGeometryCollection *param_1,FClusterConvexHullSettings *param_2,
          TArrayView<int_const_,int> *param_3)

{
  TArrayView<int_const_,int> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal(param_1,param_2,true,true,&local_18);
  return;
}

// GenerateClusterConvexHullsFromLeafHulls @ 144038620

void __cdecl
FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafHulls
          (FGeometryCollection *param_1,FClusterConvexHullSettings *param_2)

{
  TArrayView<int_const_,int> local_18;
  
  local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  local_18.DataPtr = (int *)0x0;
  GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal(param_1,param_2,false,false,&local_18);
  return;
}

// GenerateClusterConvexHullsFromLeafHulls @ 144038660

void __cdecl
FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafHulls
          (FGeometryCollection *param_1,FClusterConvexHullSettings *param_2,
          TArrayView<int_const_,int> *param_3)

{
  TArrayView<int_const_,int> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal(param_1,param_2,true,false,&local_18);
  return;
}

// GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal @ 144038690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal
          (FGeometryCollection *param_1,FClusterConvexHullSettings *param_2,bool param_3,
          bool param_4,TArrayView<int_const_,int> *param_5)

{
  int *piVar1;
  ForElementType<int> FVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  FName FVar16;
  FClusterConvexHullSettings *pFVar17;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar18;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar19;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar20;
  __m128d _Var21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  bool bVar29;
  bool bVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar35;
  FName *pFVar36;
  TManagedArray<int> *pTVar37;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar39;
  FConvex *this;
  FValueType *pFVar40;
  ulonglong uVar41;
  ForElementType<FSetElementId> FVar42;
  longlong lVar43;
  uint *puVar44;
  ForElementType<FSetElementId> FVar45;
  uint uVar46;
  longlong lVar47;
  FImplicitObject *pFVar48;
  TBitArray<FDefaultBitArrayAllocator> *pTVar49;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ForAnyElementType FVar50;
  undefined8 *puVar51;
  TBitArray<FDefaultBitArrayAllocator> *pTVar52;
  FImplicitObject *pFVar53;
  ForElementType<unsigned_int> *pFVar54;
  ForElementType<unsigned_int> *pFVar55;
  FGeometryCollection *pFVar56;
  ForElementType<unsigned_int> *pFVar57;
  FScriptContainerElement *pFVar58;
  ForElementType<int> FVar59;
  uint *puVar60;
  ulonglong uVar61;
  uint uVar62;
  TTransform<double> *pTVar63;
  TBitArray<FDefaultBitArrayAllocator> *pTVar64;
  undefined1 auStackY_b08 [32];
  int local_aac;
  undefined1 local_aa8;
  undefined1 local_aa7;
  undefined1 local_aa6;
  undefined1 local_aa5;
  undefined1 local_aa4;
  undefined1 local_aa3;
  undefined1 local_aa2;
  undefined1 local_aa1;
  undefined1 local_aa0 [8];
  ForAnyElementType local_a98;
  undefined8 local_a90;
  TArray<int,TSizedDefaultAllocator<32>_> local_a88;
  uint local_a78 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_a70;
  uint local_a60;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_a58;
  TBitArray<FDefaultBitArrayAllocator> *local_a48;
  uint local_a40;
  int local_a3c;
  int local_a38 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_a30;
  TBitArray<FDefaultBitArrayAllocator> *local_a28;
  FGeometryCollection *local_a20;
  FClusterConvexHullSettings *local_a18;
  FImplicitObject *local_a10;
  undefined8 *local_a08;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_a00;
  TBitArray<FDefaultBitArrayAllocator> *local_9f8;
  uint local_9f0 [2];
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *local_9e8;
  TBitArray<FDefaultBitArrayAllocator> *local_9e0;
  undefined8 uStack_9d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_9d0;
  uint uStack_9c8;
  uint uStack_9c4;
  int iStack_9c0;
  undefined4 uStack_9bc;
  int local_9b8;
  undefined4 uStack_9b4;
  TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_> local_9b0
  ;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_9a0;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_990;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_980;
  uint local_970;
  uint local_96c;
  TTransform<double> *local_968;
  uint local_960 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_958;
  TManagedArray<int> *local_948;
  FScriptContainerElement *local_940;
  FScriptContainerElement *local_938;
  FName local_930;
  TArray<int,TSizedDefaultAllocator<32>_> local_928;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_918;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8f8;
  int local_8d8;
  int local_8d4;
  ForAnyElementType *local_8d0;
  ForAnyElementType *local_8c8;
  ForAnyElementType *local_8c0;
  ForAnyElementType *local_8b8;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_8b0;
  FGeometryCollectionProximityUtility local_8a8;
  int local_8a0 [2];
  ForAnyElementType *local_898;
  ForAnyElementType *local_890;
  TBitArray<FDefaultBitArrayAllocator> *local_888;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_880;
  undefined8 uStack_860;
  TBitArray<FDefaultBitArrayAllocator> *local_858;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_850;
  undefined8 uStack_830;
  TBitArray<FDefaultBitArrayAllocator> *local_828;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_820;
  undefined8 uStack_800;
  code *local_7f8;
  ForAnyElementType **local_7f0;
  code *local_7e8;
  ForAnyElementType **local_7e0;
  code *local_7d8;
  ForAnyElementType **local_7d0;
  code *local_7c8;
  ForAnyElementType **local_7c0;
  code *local_7b8;
  ForAnyElementType **local_7b0;
  code *local_7a8;
  ForAnyElementType **local_7a0;
  TTuple<int,int> *local_798;
  int iStack_790;
  undefined4 uStack_78c;
  FName local_788;
  FName local_780;
  FName local_778;
  FName local_770;
  FName local_768;
  longlong local_760;
  TArrayView<TTuple<int,int>_const_,int> local_758;
  TArrayView<int_const_,int> local_748;
  TArray<int,TSizedDefaultAllocator<32>_> local_738;
  undefined8 local_728;
  undefined8 uStack_720;
  double local_718 [2];
  double local_708;
  double dStack_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  double dStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  double local_6a8 [2];
  double local_698;
  double dStack_690;
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_> local_648;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_610;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5f0;
  undefined4 local_5b4;
  FCollectionHierarchyFacade local_5a8;
  FCollectionTransformFacade local_4f8;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_408;
  ForElementType<int> local_3b8;
  uint local_390;
  int local_38c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_388;
  undefined1 local_338 [48];
  double local_308;
  int local_300;
  undefined2 local_2fc;
  double local_2f8;
  int local_2f0;
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
  local_2e8;
  TQuaternion<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  ForAnyElementType local_288;
  undefined8 local_280;
  undefined1 local_278 [64];
  void *local_238;
  undefined4 local_230;
  ForAnyElementType local_228;
  undefined8 local_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_b08;
  lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  bVar30 = false;
  bVar11 = false;
  local_a20 = param_1;
  local_a18 = param_2;
  if ((*(int *)(lVar47 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ConvexGroupName = FTransformCollection::ConvexGroup;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar47 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ConvexHullAttributeName = FTransformCollection::ConvexHullAttribute;
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar47 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&TransformToConvexIndicesName,"TransformToConvexIndices");
    _Init_thread_footer(&::_TSS2);
  }
  CreateConvexHullAttributesIfNeeded((FManagedArrayCollection *)param_1);
  local_788 = ConvexHullAttributeName;
  local_780 = ConvexGroupName;
  pTVar35 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_1->_padding_,(TTuple<FName,FName> *)&local_788);
  pFVar40 = (FValueType *)&pTVar35->field_0x10;
  if (pTVar35 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar40 = (FValueType *)0x0;
  }
  if ((pFVar40 == (FValueType *)0x0) || (pFVar40->ArrayType != FFConvexRefCountedPtrType)) {
    local_9e8 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)0x0;
  }
  else {
    local_9e8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<TRefCountPtr<Chaos::FConvex>_>
                          (pFVar40);
  }
  local_778 = TransformToConvexIndicesName;
  local_770 = FTransformCollection::TransformGroup;
  pTVar35 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_1->_padding_,(TTuple<FName,FName> *)&local_778);
  pFVar40 = (FValueType *)&pTVar35->field_0x10;
  if (pTVar35 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar40 = (FValueType *)0x0;
  }
  if ((pFVar40 == (FValueType *)0x0) || (pFVar40->ArrayType != FIntArrayType)) {
    local_a00 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  }
  else {
    local_a00 = FManagedArrayCollection::FValueType::
                ModifyTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pFVar40);
  }
  local_930.ComparisonIndex.Value = 0;
  local_930.Number = 0;
  TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_>::
  TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_>
            (&local_648,(FManagedArrayCollection *)param_1,
             &FGeometryCollection::ExternalCollisionsAttribute,&FTransformCollection::TransformGroup
             ,&local_930);
  GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
            (&local_4f8,(FManagedArrayCollection *)param_1);
  Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
            (&local_5a8,(FManagedArrayCollection *)param_1);
  FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility(&local_8a8,param_1);
  FGeometryCollectionProximityUtility::RequireProximity(&local_8a8,(FConvexHulls *)0x0);
  FVar16 = FGeometryCollection::GeometryGroup;
  pFVar36 = ::FName::FName(&local_768,"Proximity");
  local_8b0 = FManagedArrayCollection::
              GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                        ((FManagedArrayCollection *)param_1,*pFVar36,FVar16);
  GeometryCollection::Facades::FCollectionTransformFacade::ComputeCollectionSpaceTransforms
            (&local_4f8,&local_958);
  pTVar37 = FManagedArrayCollection::FindAttributeTyped<int>
                      ((FManagedArrayCollection *)param_1,
                       FGeometryCollection::SimulationTypeAttribute,
                       FTransformCollection::TransformGroup);
  local_948 = pTVar37;
  Chaos::Facades::FCollectionHierarchyFacade::GetTransformArrayInDepthFirstOrder
            (&local_5a8,&local_928);
  local_a70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a70.ArrayNum = 0;
  local_a70.ArrayMax = 0;
  if (param_3) {
    uVar46 = param_5->ArrayNum;
    if (uVar46 == 0) goto LAB_14403ace4;
    if ((param_4) || (param_2->bAllowMergingLeafHulls != false)) {
      local_748.DataPtr = param_5->DataPtr;
      local_748.ArrayNum = param_5->ArrayNum;
      local_748._12_4_ = *(undefined4 *)&param_5->field_0xc;
      local_388.Elements._0_8_ = 0;
      local_388.Elements._8_8_ = 0;
      local_388.Elements._32_8_ = 0;
      local_388.Elements._40_4_ = 0;
      local_388.Elements._44_4_ = 0x80;
      local_388.Elements._48_4_ = 0xffffffff;
      local_388.Elements._52_4_ = 0;
      local_388.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_388.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(&local_388,&local_748);
      if ((int)uVar46 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar46);
      }
      if (local_a70.ArrayMax < (int)uVar46) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar46,&local_a70.AllocatorInstance,local_a70.ArrayNum,&local_a70.ArrayMax);
      }
      iVar31 = local_928.ArrayNum;
      pFVar58 = local_928.AllocatorInstance.Data + (longlong)local_928.ArrayNum * 4;
      FVar50.Data = local_928.AllocatorInstance.Data;
      FVar45 = local_388.Hash.SecondaryData;
      while( true ) {
        if (local_928.ArrayNum != iVar31) {
          local_aa8 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_aa8);
          FVar45 = local_388.Hash.SecondaryData;
        }
        if (FVar50.Data == pFVar58) break;
        local_a40 = *(uint *)FVar50.Data;
        if (local_388.Elements._8_4_ == local_388.Elements._52_4_) {
LAB_144038b26:
          FVar50.Data = FVar50.Data + 4;
        }
        else {
          FVar42 = (ForElementType<FSetElementId>)&local_388.Hash;
          if (FVar45 != (ForElementType<FSetElementId>)0x0) {
            FVar42 = FVar45;
          }
          iVar32 = *(int *)((longlong)FVar42 + (ulonglong)(local_388.HashSize - 1U & local_a40) * 4)
          ;
          if (iVar32 == -1) goto LAB_144038b26;
          do {
            if (*(uint *)(local_388.Elements._0_8_ + (longlong)iVar32 * 0xc) == local_a40) {
              if (((local_a70.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a40) &&
                  ((FScriptContainerElement *)&local_a40 <
                   local_a70.AllocatorInstance.Data + (longlong)local_a70.ArrayMax * 4)) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar29)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar32 = local_a70.ArrayNum;
              if (local_a70.ArrayNum == local_a70.ArrayMax) {
                iVar32 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_a70.AllocatorInstance,&local_a70.ArrayMax);
              }
              local_a70.ArrayNum = iVar32 + 1;
              *(uint *)(local_a70.AllocatorInstance.Data + (longlong)iVar32 * 4) = local_a40;
              FVar45 = local_388.Hash.SecondaryData;
              goto LAB_144038b26;
            }
            iVar32 = *(int *)(local_388.Elements._0_8_ + 4 + (longlong)iVar32 * 0xc);
          } while (iVar32 != -1);
          FVar50.Data = FVar50.Data + 4;
        }
      }
      local_388.HashSize = 0;
      if (FVar45 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar45);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_388.Elements);
    }
    else {
      TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_const_&>
                (&local_a70,param_5);
    }
  }
  else {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_a70,&local_928);
  }
  fVar15 = __real_358637bd;
  dVar14 = _UNK_15061cbc8;
  dVar13 = ___xmm_3ff00000000000000000000000000000;
  fVar12 = __real_3f800000;
  if (pTVar37 != (TManagedArray<int> *)0x0) {
    uVar41 = (ulonglong)local_a70.ArrayNum;
    local_940 = local_a70.AllocatorInstance.Data + uVar41 * 4;
    local_96c = local_a70.ArrayNum;
    FVar50.Data = local_a70.AllocatorInstance.Data;
    puVar51 = local_a08;
    pFVar53 = local_a10;
    pFVar58 = local_940;
    while( true ) {
      local_938 = FVar50.Data;
      if (local_a70.ArrayNum != (int)uVar41) {
        local_aa7 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_aa7);
      }
      if (FVar50.Data == pFVar58) break;
      uVar46 = *(uint *)FVar50.Data;
      local_a60 = uVar46;
      if (((int)uVar46 < 0) ||
         (iVar31 = (**(code **)(*(longlong *)pTVar37 + 0x60))(pTVar37), iVar31 <= (int)uVar46)) {
        if (2 < (byte)LogChaos._0_1_) {
          (**(code **)(*(longlong *)pTVar37 + 0x60))(pTVar37);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
        uVar41 = (ulonglong)local_96c;
        FVar50.Data = local_938 + 4;
      }
      else {
        uVar34 = 0;
        if ((int)uVar46 < *(int *)&pTVar37->field_0x18) {
          uVar34 = ~uVar46 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar56 = local_a20;
        iVar31 = *(int *)(*(longlong *)&pTVar37->field_0x10 + (longlong)(int)uVar46 * 4);
        if ((iVar31 == 2) || (local_a18->bAllowMergingLeafHulls != false)) {
          local_a88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a88.ArrayNum = 0;
          local_a88.ArrayMax = 0;
          if (iVar31 == 2) {
            if (param_4) {
              pTVar38 = Chaos::Facades::FCollectionHierarchyFacade::GetChildrenAsArray
                                  (&local_5a8,&local_738,uVar46);
              if (&local_a88 != pTVar38) {
                if ((TBitArray<FDefaultBitArrayAllocator> *)local_a88.AllocatorInstance.Data !=
                    (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  FMemory::Free(local_a88.AllocatorInstance.Data);
                }
                local_a88.AllocatorInstance.Data = (pTVar38->AllocatorInstance).Data;
                (pTVar38->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                local_a88.ArrayNum = pTVar38->ArrayNum;
                local_a88.ArrayMax = pTVar38->ArrayMax;
                pTVar38->ArrayNum = 0;
                pTVar38->ArrayMax = 0;
              }
              pFVar56 = local_a20;
              if (local_738.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_738.AllocatorInstance.Data);
                pFVar56 = local_a20;
              }
            }
            else {
              FGeometryCollectionClusteringUtility::GetLeafBones
                        ((FManagedArrayCollection *)local_a20,uVar46,true,&local_a88);
            }
          }
          else {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_a88.AllocatorInstance,&local_a88.ArrayMax);
            local_a88.ArrayNum = iVar32 + 1;
            *(uint *)(local_a88.AllocatorInstance.Data + (longlong)iVar32 * 4) = uVar46;
            pFVar56 = local_a20;
          }
          if (0 < local_a88.ArrayNum) {
            uVar34 = 0;
            if ((int)uVar46 < local_958.ArrayNum) {
              uVar34 = ~uVar46 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar18 = local_a00;
            pTVar63 = (TTransform<double> *)
                      (local_958.AllocatorInstance.Data + (longlong)(int)uVar46 * 0x60);
            local_968 = pTVar63;
            if (((local_a00 ==
                  (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) ||
                (pFVar56 == (FGeometryCollection *)0x0)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AttributeArray!=nullptr && !IsConst()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x74,L""), bVar29)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar19 = local_9e8;
            pTVar18->field_0x8 = 1;
            if (((local_9e8 == (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)0x0) ||
                (pFVar56 == (FGeometryCollection *)0x0)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AttributeArray!=nullptr && !IsConst()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x74,L""), bVar29)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar10 = local_a88._8_8_;
            uVar41 = (ulonglong)local_a88.ArrayNum;
            pTVar19->field_0x8 = 1;
            local_a98.Data = (FScriptContainerElement *)0x0;
            local_a90 = 0;
            local_9b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a28 = (TBitArray<FDefaultBitArrayAllocator> *)
                        (local_a88.AllocatorInstance.Data + uVar41 * 4);
            local_9b0.ArrayNum = 0;
            local_9b0.ArrayMax = 0;
            local_408.Elements._0_8_ = 0;
            local_408.Elements._8_8_ = 0;
            local_408.Elements._32_8_ = 0;
            local_408.Elements._40_4_ = 0;
            local_408.Elements._44_4_ = 0x80;
            local_408.Elements._48_4_ = 0xffffffff;
            local_408.Elements._52_4_ = 0;
            local_408.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_408.HashSize = 0;
            local_990.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_990.ArrayNum = 0;
            local_990.ArrayMax = 0;
            FVar50.Data = local_a88.AllocatorInstance.Data;
            while( true ) {
              pTVar64 = local_a28;
              pFVar48 = (FImplicitObject *)0x0;
              local_a30 = (TBitArray<FDefaultBitArrayAllocator> *)FVar50.Data;
              if (local_a88.ArrayNum != (int)uVar41) {
                local_aa6 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_aa6);
              }
              uVar9 = local_a88._8_8_;
              uVar46 = 0;
              if ((TBitArray<FDefaultBitArrayAllocator> *)FVar50.Data == pTVar64) break;
              local_a78[0] = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)FVar50.Data)->
                                      AllocatorInstance).InlineData;
              lVar47 = (longlong)(int)local_a78[0];
              uVar34 = uVar46;
              if ((int)local_a78[0] < local_958.ArrayNum) {
                uVar34 = ~local_a78[0] >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar47 = lVar47 * 0x60;
              local_148.Rotation.XY.m128d_f64[0] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47);
              local_148.Rotation.XY.m128d_f64[1] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 8);
              local_148.Rotation.ZW.m128d_f64[0] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 0x10);
              local_148.Rotation.ZW.m128d_f64[1] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 0x10 + 8);
              local_148.Translation.XY.m128d_f64[0] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 0x20);
              local_148.Translation.XY.m128d_f64[1] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 0x20 + 8);
              local_148.Translation.ZW.m128d_f64[0] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 0x30);
              local_148.Translation.ZW.m128d_f64[1] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 0x30 + 8);
              local_148.Scale3D.XY.m128d_f64[0] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 0x40);
              local_148.Scale3D.XY.m128d_f64[1] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 0x40 + 8);
              local_148.Scale3D.ZW.m128d_f64[0] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 0x50);
              local_148.Scale3D.ZW.m128d_f64[1] =
                   *(double *)(local_958.AllocatorInstance.Data + lVar47 + 0x50 + 8);
              UE::Math::TTransform<double>::GetRelativeTransform(&local_148,&local_1a8,pTVar63);
              if (local_648.ConstAttributeArray ==
                  (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0) {
                bVar11 = true;
                local_a08 = (undefined8 *)0x0;
              }
              else {
                if ((local_648.ConstAttributeArray ==
                     (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0) &&
                   (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x67,L""), bVar30)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar20 = local_648.ConstAttributeArray;
                lVar47 = (longlong)(int)local_a78[0];
                bVar30 = true;
                uVar34 = uVar46;
                if ((int)local_a78[0] < *(int *)&(local_648.ConstAttributeArray)->field_0x18) {
                  uVar34 = ~local_a78[0] >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar29)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar48 = *(FImplicitObject **)(*(longlong *)&pTVar20->field_0x10 + lVar47 * 8);
                pFVar53 = pFVar48;
                local_a10 = pFVar48;
                local_a08 = puVar51;
                if (pFVar48 != (FImplicitObject *)0x0) {
                  LOCK();
                  *(int *)&pFVar48->_padding_ = (int)pFVar48->_padding_ + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)&pFVar48->_padding_ = (int)pFVar48->_padding_ + 1;
                  UNLOCK();
                }
              }
              puVar51 = local_a08;
              if ((bVar11) && (bVar11 = false, local_a08 != (undefined8 *)0x0)) {
                LOCK();
                piVar1 = (int *)(local_a08 + 1);
                iVar32 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar32 == 1) && (*(int *)((longlong)local_a08 + 0xc) == 0)) {
                  (**(code **)*local_a08)(local_a08,1);
                }
              }
              if ((bVar30) && (bVar30 = false, pFVar53 != (FImplicitObject *)0x0)) {
                LOCK();
                plVar3 = &pFVar53->_padding_;
                lVar47 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if (((int)lVar47 == 1) && (*(int *)((longlong)&pFVar53->_padding_ + 4) == 0)) {
                  (**(code **)pFVar53->_padding_)(pFVar53,1);
                }
              }
              pTVar18 = local_a00;
              if ((pFVar48 == (FImplicitObject *)0x0) ||
                 (local_a18->bUseExternalCollisionIfAvailable == false)) {
                lVar47 = (longlong)(int)local_a78[0];
                if ((int)local_a78[0] < *(int *)&local_a00->field_0x18) {
                  uVar46 = ~local_a78[0] >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar29)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar64 = (TBitArray<FDefaultBitArrayAllocator> *)
                          (*(longlong *)&pTVar18->field_0x10 + lVar47 * 0x50);
                local_8f8._padding_._0_4_ = 0;
                local_8f8._padding_._4_4_ = 1;
                local_8f8.UnvisitedBitMask = 0xffffffff;
                local_8f8.CurrentBitIndex = 0;
                local_8f8.BaseBitIndex = 0;
                pFVar57 = &(pTVar64->AllocatorInstance).SecondaryData;
                local_8f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFVar57;
                if (*(uint *)(pTVar64[1].AllocatorInstance.InlineData + 8) != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8f8);
                }
                uStack_9d8 = CONCAT44(local_8f8._padding_._4_4_,(undefined4)local_8f8._padding_);
                uStack_9c4 = local_8f8.CurrentBitIndex;
                uStack_9c8 = local_8f8.UnvisitedBitMask;
                uStack_9bc = local_8f8._28_4_;
                iStack_9c0 = local_8f8.BaseBitIndex;
                local_9b8 = *(uint *)((pTVar64->AllocatorInstance).InlineData + 8) -
                            *(int *)&pTVar64[1].AllocatorInstance.SecondaryData.field_0x4;
                pTStack_9d0 = local_8f8.Array;
                uStack_830 = CONCAT44(uStack_9b4,local_9b8);
                TStack_850.Array = local_8f8.Array;
                local_9e0 = pTVar64;
                local_858 = pTVar64;
                TStack_850._padding_ = uStack_9d8;
                TStack_850._16_8_ = _uStack_9c8;
                TStack_850._24_8_ = _iStack_9c0;
                pTVar39 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                          TConstSetBitIterator<FDefaultBitArrayAllocator>
                                    (&local_610,(TBitArray<FDefaultBitArrayAllocator> *)pFVar57,
                                     *(uint *)(pTVar64[1].AllocatorInstance.InlineData + 8));
                pTVar19 = local_9e8;
                uStack_9d8 = pTVar39->_padding_;
                pTVar49 = pTVar39->Array;
                uVar9._0_4_ = pTVar39->UnvisitedBitMask;
                uVar9._4_4_ = pTVar39->CurrentBitIndex;
                iStack_9c0 = pTVar39->BaseBitIndex;
                uStack_9bc = *(undefined4 *)&pTVar39->field_0x1c;
                pTStack_9d0 = pTVar49;
                _uStack_9c8 = uVar9;
                while( true ) {
                  pTVar52 = local_858;
                  if (*(uint *)((local_858->AllocatorInstance).InlineData + 8) -
                      *(int *)&local_858[1].AllocatorInstance.SecondaryData.field_0x4 !=
                      (int)uStack_830) {
                    local_aa5 = 0;
                    `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_aa5);
                  }
                  if (((TStack_850.CurrentBitIndex == uVar9._4_4_) && (TStack_850.Array == pTVar49))
                     && (pTVar52 == pTVar64)) break;
                  uVar46 = *(uint *)(*(longlong *)(pTVar52->AllocatorInstance).InlineData +
                                    (longlong)TStack_850.CurrentBitIndex * 0xc);
                  uVar34 = 0;
                  if ((int)uVar46 < *(int *)&pTVar19->field_0x18) {
                    uVar34 = ~uVar46 >> 0x1f;
                  }
                  if ((uVar34 == 0) &&
                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar29)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  dVar28 = local_1a8.Scale3D.ZW.m128d_f64[1];
                  dVar27 = local_1a8.Scale3D.ZW.m128d_f64[0];
                  dVar26 = local_1a8.Scale3D.XY.m128d_f64[1];
                  dVar25 = local_1a8.Scale3D.XY.m128d_f64[0];
                  dVar24 = local_1a8.Translation.ZW.m128d_f64[1];
                  dVar23 = local_1a8.Translation.ZW.m128d_f64[0];
                  dVar22 = local_1a8.Translation.XY.m128d_f64[1];
                  dVar6 = local_1a8.Translation.XY.m128d_f64[0];
                  dVar5 = local_1a8.Rotation.ZW.m128d_f64[1];
                  dVar4 = local_1a8.Rotation.ZW.m128d_f64[0];
                  _Var21.m128d_f64 = local_1a8.Rotation.XY.m128d_f64;
                  local_6b8 = *(undefined8 *)
                               (*(longlong *)&pTVar19->field_0x10 + (longlong)(int)uVar46 * 8);
                  local_6a8[0] = local_1a8.Rotation.XY.m128d_f64[0];
                  local_6a8[1] = local_1a8.Rotation.XY.m128d_f64[1];
                  local_698 = local_1a8.Rotation.ZW.m128d_f64[0];
                  dStack_690 = local_1a8.Rotation.ZW.m128d_f64[1];
                  local_688 = local_1a8.Translation.XY.m128d_f64[0];
                  dStack_680 = local_1a8.Translation.XY.m128d_f64[1];
                  local_678 = local_1a8.Translation.ZW.m128d_f64[0];
                  dStack_670 = local_1a8.Translation.ZW.m128d_f64[1];
                  local_668 = local_1a8.Scale3D.XY.m128d_f64[0];
                  dStack_660 = local_1a8.Scale3D.XY.m128d_f64[1];
                  local_658 = local_1a8.Scale3D.ZW.m128d_f64[0];
                  dStack_650 = local_1a8.Scale3D.ZW.m128d_f64[1];
                  iVar32 = (int)local_a90;
                  if ((int)local_a90 == local_a90._4_4_) {
                    iVar32 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1070,&local_a98,(int *)((longlong)&local_a90 + 4));
                  }
                  local_a90 = CONCAT44(local_a90._4_4_,iVar32 + 1);
                  lVar47 = (longlong)iVar32 * 0x70;
                  *(undefined8 *)(local_a98.Data + lVar47) = local_6b8;
                  *(undefined8 *)(local_a98.Data + lVar47 + 8) = uStack_6b0;
                  *(double (*) [2])(local_a98.Data + lVar47 + 0x10) = _Var21.m128d_f64;
                  *(double *)(local_a98.Data + lVar47 + 0x20) = dVar4;
                  *(double *)(local_a98.Data + lVar47 + 0x20 + 8) = dVar5;
                  *(double *)(local_a98.Data + lVar47 + 0x30) = dVar6;
                  *(double *)(local_a98.Data + lVar47 + 0x30 + 8) = dVar22;
                  *(double *)(local_a98.Data + lVar47 + 0x40) = dVar23;
                  *(double *)(local_a98.Data + lVar47 + 0x40 + 8) = dVar24;
                  *(double *)(local_a98.Data + lVar47 + 0x50) = dVar25;
                  *(double *)(local_a98.Data + lVar47 + 0x50 + 8) = dVar26;
                  *(double *)(local_a98.Data + lVar47 + 0x60) = dVar27;
                  *(double *)(local_a98.Data + lVar47 + 0x60 + 8) = dVar28;
                  local_a38[0] = iVar32;
                  pTVar38 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            ::FindOrAddImpl<int_const_&>
                                      ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                        *)&local_408,local_a78[0],(int *)local_a78);
                  pFVar58 = (pTVar38->AllocatorInstance).Data;
                  if (((pFVar58 <= (FScriptContainerElement *)local_a38) &&
                      ((FScriptContainerElement *)local_a38 <
                       pFVar58 + (longlong)pTVar38->ArrayMax * 4)) &&
                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar29)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar32 = pTVar38->ArrayNum;
                  if (iVar32 == pTVar38->ArrayMax) {
                    iVar32 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar38->AllocatorInstance,&pTVar38->ArrayMax);
                  }
                  pTVar38->ArrayNum = iVar32 + 1;
                  *(int *)((pTVar38->AllocatorInstance).Data + (longlong)iVar32 * 4) = local_a38[0];
                  TStack_850.UnvisitedBitMask =
                       TStack_850.UnvisitedBitMask & ~TStack_850._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_850);
                }
                puVar51 = local_a08;
                pFVar53 = local_a10;
                if (pFVar48 != (FImplicitObject *)0x0) goto LAB_14403969a;
              }
              else {
                iVar32 = local_9b0.ArrayNum;
                uVar41 = (ulonglong)local_9b0.ArrayNum;
                ConvertImplicitToConvexArray
                          (pFVar48,&UE::Math::TTransform<double>::Identity,&local_9b0);
                if (iVar32 < local_9b0.ArrayNum) {
                  lVar47 = uVar41 * 0x70;
                  do {
                    uVar62 = (uint)uVar41;
                    uVar34 = uVar46;
                    if ((int)uVar62 < local_9b0.ArrayNum) {
                      uVar34 = ~uVar62 >> 0x1f;
                    }
                    if ((uVar34 == 0) &&
                       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar29)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    local_728 = *(undefined8 *)(local_9b0.AllocatorInstance.Data + lVar47);
                    local_208.Rotation.XY.m128d_f64[1]._0_4_ =
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                    local_208.Rotation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[0];
                    local_208.Rotation.XY.m128d_f64[1]._4_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                              0x20);
                    local_208.Rotation.ZW.m128d_f64[1]._0_4_ =
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                    local_208.Rotation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[2];
                    local_208.Rotation.ZW.m128d_f64[1]._4_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                              0x20);
                    local_208.Translation.XY.m128d_f64[1]._0_4_ =
                         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                    local_208.Translation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                    local_208.Translation.XY.m128d_f64[1]._4_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >>
                              0x20);
                    local_208.Translation.ZW.m128d_f64[1]._0_4_ =
                         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                    local_208.Translation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                    local_208.Translation.ZW.m128d_f64[1]._4_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >>
                              0x20);
                    local_208.Scale3D.XY.m128d_f64[1]._0_4_ =
                         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                    local_208.Scale3D.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[0];
                    local_208.Scale3D.XY.m128d_f64[1]._4_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >>
                              0x20);
                    local_208.Scale3D.ZW.m128d_f64[1]._0_4_ =
                         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                    local_208.Scale3D.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[2];
                    local_208.Scale3D.ZW.m128d_f64[1]._4_4_ =
                         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >>
                              0x20);
                    UE::Math::TTransform<double>::Multiply
                              (&local_208,
                               (TTransform<double> *)
                               (local_9b0.AllocatorInstance.Data + lVar47 + 0x10),&local_1a8);
                    _Var21.m128d_f64 = local_208.Rotation.XY.m128d_f64;
                    dVar4 = local_208.Rotation.ZW.m128d_f64[0];
                    dVar5 = local_208.Rotation.ZW.m128d_f64[1];
                    dVar6 = local_208.Translation.XY.m128d_f64[0];
                    dVar22 = local_208.Translation.XY.m128d_f64[1];
                    dVar23 = local_208.Translation.ZW.m128d_f64[0];
                    dVar24 = local_208.Translation.ZW.m128d_f64[1];
                    dVar25 = local_208.Scale3D.XY.m128d_f64[0];
                    dVar26 = local_208.Scale3D.XY.m128d_f64[1];
                    dVar27 = local_208.Scale3D.ZW.m128d_f64[0];
                    dVar28 = local_208.Scale3D.ZW.m128d_f64[1];
                    local_718[0] = local_208.Rotation.XY.m128d_f64[0];
                    local_718[1] = local_208.Rotation.XY.m128d_f64[1];
                    local_708 = local_208.Rotation.ZW.m128d_f64[0];
                    dStack_700 = local_208.Rotation.ZW.m128d_f64[1];
                    local_6f8 = local_208.Translation.XY.m128d_f64[0];
                    dStack_6f0 = local_208.Translation.XY.m128d_f64[1];
                    local_6e8 = local_208.Translation.ZW.m128d_f64[0];
                    dStack_6e0 = local_208.Translation.ZW.m128d_f64[1];
                    local_6d8 = local_208.Scale3D.XY.m128d_f64[0];
                    dStack_6d0 = local_208.Scale3D.XY.m128d_f64[1];
                    local_6c8 = local_208.Scale3D.ZW.m128d_f64[0];
                    dStack_6c0 = local_208.Scale3D.ZW.m128d_f64[1];
                    iVar32 = (int)local_a90;
                    if ((int)local_a90 == local_a90._4_4_) {
                      iVar32 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x1070,&local_a98,(int *)((longlong)&local_a90 + 4));
                    }
                    local_a90 = CONCAT44(local_a90._4_4_,iVar32 + 1);
                    lVar43 = (longlong)iVar32 * 0x70;
                    *(undefined8 *)(local_a98.Data + lVar43) = local_728;
                    *(undefined8 *)(local_a98.Data + lVar43 + 8) = uStack_720;
                    *(double (*) [2])(local_a98.Data + lVar43 + 0x10) = _Var21.m128d_f64;
                    *(double *)(local_a98.Data + lVar43 + 0x20) = dVar4;
                    *(double *)(local_a98.Data + lVar43 + 0x20 + 8) = dVar5;
                    *(double *)(local_a98.Data + lVar43 + 0x30) = dVar6;
                    *(double *)(local_a98.Data + lVar43 + 0x30 + 8) = dVar22;
                    *(double *)(local_a98.Data + lVar43 + 0x40) = dVar23;
                    *(double *)(local_a98.Data + lVar43 + 0x40 + 8) = dVar24;
                    *(double *)(local_a98.Data + lVar43 + 0x50) = dVar25;
                    *(double *)(local_a98.Data + lVar43 + 0x50 + 8) = dVar26;
                    *(double *)(local_a98.Data + lVar43 + 0x60) = dVar27;
                    *(double *)(local_a98.Data + lVar43 + 0x60 + 8) = dVar28;
                    local_a3c = iVar32;
                    pTVar38 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                              ::FindOrAddImpl<int_const_&>
                                        ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                          *)&local_408,local_a78[0],(int *)local_a78);
                    pFVar58 = (pTVar38->AllocatorInstance).Data;
                    if (((pFVar58 <= (FScriptContainerElement *)&local_a3c) &&
                        ((FScriptContainerElement *)&local_a3c <
                         pFVar58 + (longlong)pTVar38->ArrayMax * 4)) &&
                       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar29)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar32 = pTVar38->ArrayNum;
                    if (iVar32 == pTVar38->ArrayMax) {
                      iVar32 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&pTVar38->AllocatorInstance,&pTVar38->ArrayMax);
                    }
                    pTVar38->ArrayNum = iVar32 + 1;
                    uVar41 = (ulonglong)(uVar62 + 1);
                    lVar47 = lVar47 + 0x70;
                    *(int *)((pTVar38->AllocatorInstance).Data + (longlong)iVar32 * 4) = local_a3c;
                  } while ((int)(uVar62 + 1) < local_9b0.ArrayNum);
                }
LAB_14403969a:
                LOCK();
                plVar3 = &pFVar48->_padding_;
                lVar47 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if (((int)lVar47 == 1) && (*(int *)((longlong)&pFVar48->_padding_ + 4) == 0)) {
                  (**(code **)pFVar48->_padding_)(pFVar48,1);
                }
              }
              uVar41 = uVar10 & 0xffffffff;
              FVar50.Data = (FScriptContainerElement *)
                            ((local_a30->AllocatorInstance).InlineData + 4);
              pTVar63 = local_968;
            }
            if (((iVar31 != 2) || (param_4)) || (local_a18->AllowMergesMethod == Any)) {
              local_a48 = (TBitArray<FDefaultBitArrayAllocator> *)
                          ((ulonglong)local_a48 & 0xffffffff00000000);
              if (0 < local_a88.ArrayNum) {
                local_a30 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
                do {
                  pTVar64 = local_a30;
                  uVar34 = (uint)pFVar48;
                  uVar46 = 0;
                  if ((int)uVar34 < local_a88.ArrayNum) {
                    uVar46 = ~uVar34 >> 0x1f;
                  }
                  if (uVar46 == 0) {
                    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar29) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar34 = (uint)local_a48;
                  }
                  if (local_408.Elements._8_4_ != local_408.Elements._52_4_) {
                    FVar45 = (ForElementType<FSetElementId>)&local_408.Hash;
                    if (local_408.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar45 = local_408.Hash.SecondaryData;
                    }
                    uVar46 = *(uint *)((longlong)FVar45 +
                                      (ulonglong)
                                      (local_408.HashSize - 1U &
                                      *(uint *)(local_a88.AllocatorInstance.Data + (longlong)pTVar64
                                               )) * 4);
                    while (uVar46 != 0xffffffff) {
                      puVar44 = (uint *)((longlong)(int)uVar46 * 0x20 + local_408.Elements._0_8_);
                      if (*puVar44 ==
                          *(uint *)(local_a88.AllocatorInstance.Data + (longlong)pTVar64)) {
                        pTVar49 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar44 + 2);
                        if (puVar44 == (uint *)0x0) {
                          pTVar49 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
                        }
                        local_9f8 = pTVar49;
                        if (pTVar49 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                          uVar46 = uVar34 + 1;
                          if ((int)uVar46 < local_a88.ArrayNum) {
                            pTVar52 = (TBitArray<FDefaultBitArrayAllocator> *)
                                      ((pTVar64->AllocatorInstance).InlineData + 4);
                            do {
                              uVar34 = 0;
                              if ((int)uVar46 < local_a88.ArrayNum) {
                                uVar34 = ~uVar46 >> 0x1f;
                              }
                              local_a28 = pTVar52;
                              if ((uVar34 == 0) &&
                                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar29)) {
                                pcVar8 = (code *)swi(3);
                                (*pcVar8)();
                                return;
                              }
                              if (local_408.Elements._8_4_ != local_408.Elements._52_4_) {
                                FVar45 = (ForElementType<FSetElementId>)&local_408.Hash;
                                if (local_408.Hash.SecondaryData !=
                                    (ForElementType<FSetElementId>)0x0) {
                                  FVar45 = local_408.Hash.SecondaryData;
                                }
                                uVar34 = *(uint *)((longlong)FVar45 +
                                                  (ulonglong)
                                                  (local_408.HashSize - 1U &
                                                  *(uint *)(local_a88.AllocatorInstance.Data +
                                                           (longlong)pTVar52)) * 4);
                                while (uVar34 != 0xffffffff) {
                                  puVar44 = (uint *)((longlong)(int)uVar34 * 0x20 +
                                                    local_408.Elements._0_8_);
                                  if (*puVar44 ==
                                      *(uint *)(local_a88.AllocatorInstance.Data + (longlong)pTVar52
                                               )) {
                                    pTVar38 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                                              (puVar44 + 2);
                                    if (puVar44 == (uint *)0x0) {
                                      pTVar38 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
                                    }
                                    if (pTVar38 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                                      puVar60 = *(uint **)(pTVar49->AllocatorInstance).InlineData;
                                      uVar34 = *(uint *)((pTVar49->AllocatorInstance).InlineData + 8
                                                        );
                                      puVar44 = puVar60 + (int)uVar34;
                                      while( true ) {
                                        if (*(uint *)((pTVar49->AllocatorInstance).InlineData + 8)
                                            != uVar34) {
                                          local_aa2 = 0;
                                          `TCheckedPointerIterator<int_const_,int,0>::operator!='::
                                          __l2::<lambda_1>::operator()(&local_aa2);
                                        }
                                        pTVar52 = local_a28;
                                        if (puVar60 == puVar44) break;
                                        uVar62 = *puVar60;
                                        iVar32 = pTVar38->ArrayNum;
                                        uVar33 = 0;
                                        if ((int)uVar62 < (int)local_a90) {
                                          uVar33 = ~uVar62 >> 0x1f;
                                        }
                                        if ((uVar33 == 0) &&
                                           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar29)) {
                                          pcVar8 = (code *)swi(3);
                                          (*pcVar8)();
                                          return;
                                        }
                                        local_8c0 = &local_a98;
                                        local_7e0 = &local_8c0;
                                        local_7e8 = UE::Core::Private::Function::
                                                                                                        
                                                  TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l97::<lambda_1>,Chaos::FConvex_const_*,int>
                                                  ::Call;
                                        ::`anonymous_namespace'::
                                        AddHullProximity<_FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal_::__l97::<lambda_2>,TArray<int,TSizedDefaultAllocator<32>_>_>
                                                  (&local_990,local_a18->ProximityFilter,
                                                   local_a18->ProximityDistanceThreshold,
                                                   (
                                                  TFunctionRef<Chaos::FConvex_const_*___cdecl(int)>
                                                  *)&local_7e8,
                                                  (TTransform<double> *)
                                                  (local_a98.Data +
                                                  (longlong)(int)uVar62 * 0x70 + 0x10),uVar62,
                                                  (
                                                  TArray<_private:_static_void___cdecl_FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal(FGeometryCollection_&,FGeometryCollectionConvexUtility::FClusterConvexHullSettings_const_&,bool,bool,TArrayView<int_const_,int>)_::_65_::FHullInfo,TSizedDefaultAllocator<32>_>
                                                  *)&local_a98,0,iVar32,pTVar38);
                                        puVar60 = puVar60 + 1;
                                        pTVar49 = local_9f8;
                                      }
                                    }
                                    break;
                                  }
                                  uVar34 = puVar44[6];
                                }
                              }
                              uVar46 = uVar46 + 1;
                              pTVar52 = (TBitArray<FDefaultBitArrayAllocator> *)
                                        ((pTVar52->AllocatorInstance).InlineData + 4);
                            } while ((int)uVar46 < local_a88.ArrayNum);
                            pTVar64 = local_a30;
                            uVar34 = (uint)local_a48;
                            local_a28 = pTVar52;
                          }
                          pFVar17 = local_a18;
                          uVar41 = 0;
                          if (iVar31 != 2) {
                            uVar46 = *(uint *)((pTVar49->AllocatorInstance).InlineData + 8);
                            uVar61 = uVar41;
                            if (1 < (int)uVar46) {
                              do {
                                uVar62 = (uint)uVar61;
                                uVar34 = 0;
                                if ((int)uVar62 < (int)uVar46) {
                                  uVar34 = ~uVar62 >> 0x1f;
                                }
                                if ((uVar34 == 0) &&
                                   (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar29)) {
                                  pcVar8 = (code *)swi(3);
                                  (*pcVar8)();
                                  return;
                                }
                                pTVar64 = local_9f8;
                                uVar46 = *(uint *)(uVar41 + *(longlong *)
                                                             (pTVar49->AllocatorInstance).InlineData
                                                  );
                                iVar32 = *(int *)((local_9f8->AllocatorInstance).InlineData + 8);
                                uVar34 = 0;
                                if ((int)uVar46 < (int)local_a90) {
                                  uVar34 = ~uVar46 >> 0x1f;
                                }
                                if ((uVar34 == 0) &&
                                   (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar29)) {
                                  pcVar8 = (code *)swi(3);
                                  (*pcVar8)();
                                  return;
                                }
                                local_8c8 = &local_a98;
                                local_7d0 = &local_8c8;
                                local_7d8 = UE::Core::Private::Function::
                                            TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l102::<lambda_3>,Chaos::FConvex_const_*,int>
                                            ::Call;
                                ::`anonymous_namespace'::
                                AddHullProximity<enum__anonymous_namespace_::EUseConstantTransform,TArray<int,TSizedDefaultAllocator<32>_>_>
                                          (&local_990,pFVar17->ProximityFilter,
                                           pFVar17->ProximityDistanceThreshold,
                                           (TFunctionRef<Chaos::FConvex_const_*___cdecl(int)> *)
                                           &local_7d8,
                                           (TTransform<double> *)
                                           (local_a98.Data + (longlong)(int)uVar46 * 0x70 + 0x10),
                                           uVar46,ConstantTransform,uVar62 + 1,iVar32,
                                           (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar64);
                                uVar46 = *(uint *)((pTVar64->AllocatorInstance).InlineData + 8);
                                uVar41 = uVar41 + 4;
                                pTVar49 = pTVar64;
                                uVar61 = (ulonglong)(uVar62 + 1);
                              } while ((int)(uVar62 + 2) < (int)uVar46);
                              pTVar64 = local_a30;
                              uVar34 = (uint)local_a48;
                            }
                          }
                        }
                        break;
                      }
                      uVar46 = puVar44[6];
                    }
                  }
                  uVar34 = uVar34 + 1;
                  pFVar48 = (FImplicitObject *)(ulonglong)uVar34;
                  local_a30 = (TBitArray<FDefaultBitArrayAllocator> *)
                              ((pTVar64->AllocatorInstance).InlineData + 4);
                  local_a48 = (TBitArray<FDefaultBitArrayAllocator> *)
                              CONCAT44(local_a48._4_4_,uVar34);
                  puVar51 = local_a08;
                  pTVar63 = local_968;
                } while ((int)uVar34 < local_a88.ArrayNum);
              }
            }
            else {
              uVar41 = (ulonglong)local_a88.ArrayNum;
              local_a48 = (TBitArray<FDefaultBitArrayAllocator> *)
                          (local_a88.AllocatorInstance.Data + uVar41 * 4);
              pFVar56 = local_a20;
              FVar50.Data = local_a88.AllocatorInstance.Data;
              while( true ) {
                pTVar64 = local_a48;
                local_9f8 = (TBitArray<FDefaultBitArrayAllocator> *)FVar50.Data;
                if (local_a88.ArrayNum != (int)uVar41) {
                  local_aa0[0] = 0;
                  `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_aa0);
                }
                pTVar63 = local_968;
                if ((TBitArray<FDefaultBitArrayAllocator> *)FVar50.Data == pTVar64) break;
                local_9f0[0] = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)FVar50.Data)->
                                        AllocatorInstance).InlineData;
                pTVar38 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                          ::FindOrAddImpl<int_const_&>
                                    ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                      *)&local_408,local_9f0[0],(int *)local_9f0);
                local_3b8.SecondaryData = (ForElementType<int>)0x0;
                local_390 = pTVar38->ArrayNum;
                lVar47 = (longlong)(int)local_390;
                pFVar58 = (pTVar38->AllocatorInstance).Data;
                if (local_390 == 0) {
                  local_38c = 8;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (4,4,local_390,0,&local_3b8,local_390,&local_38c);
                  FVar59 = (ForElementType<int>)&local_3b8;
                  if (local_3b8.SecondaryData != (ForElementType<int>)0x0) {
                    FVar59 = local_3b8.SecondaryData;
                  }
                  memcpy((void *)FVar59,pFVar58,lVar47 << 2);
                }
                lVar47 = (longlong)(int)local_9f0[0];
                uVar46 = 0;
                if ((int)local_9f0[0] < *(int *)&(pFVar56->TransformToGeometryIndex).field_0x18) {
                  uVar46 = ~local_9f0[0] >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar29)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar18 = local_8b0;
                uVar46 = *(uint *)(*(longlong *)&(pFVar56->TransformToGeometryIndex).field_0x10 +
                                  lVar47 * 4);
                if (-1 < (int)uVar46) {
                  uVar34 = 0;
                  if ((int)uVar46 < *(int *)&local_8b0->field_0x18) {
                    uVar34 = ~uVar46 >> 0x1f;
                  }
                  if ((uVar34 == 0) &&
                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar29)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pTVar64 = (TBitArray<FDefaultBitArrayAllocator> *)
                            (*(longlong *)&pTVar18->field_0x10 + (longlong)(int)uVar46 * 0x50);
                  local_918._padding_._0_4_ = 0;
                  local_918._padding_._4_4_ = 1;
                  local_918.UnvisitedBitMask = 0xffffffff;
                  pFVar57 = &(pTVar64->AllocatorInstance).SecondaryData;
                  local_918.CurrentBitIndex = 0;
                  local_918.BaseBitIndex = 0;
                  local_a28 = pTVar64;
                  local_918.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFVar57;
                  if (*(uint *)(pTVar64[1].AllocatorInstance.InlineData + 8) != 0) {
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_918);
                  }
                  uStack_9d8 = CONCAT44(local_918._padding_._4_4_,(undefined4)local_918._padding_);
                  uStack_9c4 = local_918.CurrentBitIndex;
                  uStack_9c8 = local_918.UnvisitedBitMask;
                  uStack_9bc = local_918._28_4_;
                  iStack_9c0 = local_918.BaseBitIndex;
                  local_9b8 = *(uint *)((pTVar64->AllocatorInstance).InlineData + 8) -
                              *(int *)&pTVar64[1].AllocatorInstance.SecondaryData.field_0x4;
                  pTStack_9d0 = local_918.Array;
                  uStack_800 = CONCAT44(uStack_9b4,local_9b8);
                  TStack_820.Array = local_918.Array;
                  local_9e0 = pTVar64;
                  local_828 = pTVar64;
                  TStack_820._padding_ = uStack_9d8;
                  TStack_820._16_8_ = _uStack_9c8;
                  TStack_820._24_8_ = _iStack_9c0;
                  pTVar39 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                            TConstSetBitIterator<FDefaultBitArrayAllocator>
                                      (&local_5f0,(TBitArray<FDefaultBitArrayAllocator> *)pFVar57,
                                       *(uint *)(pTVar64[1].AllocatorInstance.InlineData + 8));
                  uStack_9d8 = pTVar39->_padding_;
                  local_a30 = pTVar39->Array;
                  uVar10._0_4_ = pTVar39->UnvisitedBitMask;
                  uVar10._4_4_ = pTVar39->CurrentBitIndex;
                  iStack_9c0 = pTVar39->BaseBitIndex;
                  uStack_9bc = *(undefined4 *)&pTVar39->field_0x1c;
                  pTStack_9d0 = local_a30;
                  _uStack_9c8 = uVar10;
                  while( true ) {
                    pTVar49 = local_828;
                    if (*(uint *)((local_828->AllocatorInstance).InlineData + 8) -
                        *(int *)&local_828[1].AllocatorInstance.SecondaryData.field_0x4 !=
                        (int)uStack_800) {
                      local_aa4 = 0;
                      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()
                                (&local_aa4);
                    }
                    if (((TStack_820.CurrentBitIndex == uVar10._4_4_) &&
                        (TStack_820.Array == local_a30)) &&
                       (puVar51 = local_a08, FVar50.Data = (FScriptContainerElement *)local_9f8,
                       pTVar49 == pTVar64)) break;
                    uVar46 = *(uint *)(*(longlong *)(pTVar49->AllocatorInstance).InlineData +
                                      (longlong)TStack_820.CurrentBitIndex * 0xc);
                    uVar34 = 0;
                    if ((int)uVar46 < *(int *)&(pFVar56->TransformIndex).field_0x18) {
                      uVar34 = ~uVar46 >> 0x1f;
                    }
                    if ((uVar34 == 0) &&
                       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar29)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    local_960[0] = *(uint *)(*(longlong *)&(pFVar56->TransformIndex).field_0x10 +
                                            (longlong)(int)uVar46 * 4);
                    iVar31 = TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<int>(&local_408,local_960[0],(int *)local_960);
                    uVar46 = local_390;
                    if (iVar31 != -1) {
                      lVar47 = (longlong)iVar31 * 0x20 + local_408.Elements._0_8_;
                      pTVar38 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar47 + 8);
                      if (lVar47 == 0) {
                        pTVar38 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
                      }
                      if (pTVar38 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                        uVar41 = (ulonglong)(int)local_390;
                        FVar59 = (ForElementType<int>)&local_3b8;
                        if (local_3b8.SecondaryData != (ForElementType<int>)0x0) {
                          FVar59 = local_3b8.SecondaryData;
                        }
                        FVar2 = (ForElementType<int>)((longlong)FVar59 + uVar41 * 4);
                        while( true ) {
                          if ((uint)uVar41 != uVar46) {
                            local_aa3 = 0;
                            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::
                            <lambda_1>::operator()(&local_aa3);
                          }
                          pFVar56 = local_a20;
                          pTVar64 = local_a28;
                          if (FVar59 == FVar2) break;
                          uVar34 = *(uint *)FVar59;
                          iVar31 = pTVar38->ArrayNum;
                          uVar62 = 0;
                          if ((int)uVar34 < (int)local_a90) {
                            uVar62 = ~uVar34 >> 0x1f;
                          }
                          if ((uVar62 == 0) &&
                             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar29)) {
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          local_8b8 = &local_a98;
                          local_7f0 = &local_8b8;
                          local_7f8 = UE::Core::Private::Function::
                                      TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l122::<lambda_4>,Chaos::FConvex_const_*,int>
                                      ::Call;
                          ::`anonymous_namespace'::
                          AddHullProximity<_FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal_::__l122::<lambda_5>,TArray<int,TSizedDefaultAllocator<32>_>_>
                                    (&local_990,local_a18->ProximityFilter,
                                     local_a18->ProximityDistanceThreshold,
                                     (TFunctionRef<Chaos::FConvex_const_*___cdecl(int)> *)&local_7f8
                                     ,(TTransform<double> *)
                                      (local_a98.Data + (longlong)(int)uVar34 * 0x70 + 0x10),uVar34,
                                     (TArray<_private:_static_void___cdecl_FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal(FGeometryCollection_&,FGeometryCollectionConvexUtility::FClusterConvexHullSettings_const_&,bool,bool,TArrayView<int_const_,int>)_::_65_::FHullInfo,TSizedDefaultAllocator<32>_>
                                      *)&local_a98,0,iVar31,pTVar38);
                          uVar41 = (ulonglong)local_390;
                          FVar59 = (ForElementType<int>)((longlong)FVar59 + 4);
                        }
                      }
                    }
                    TStack_820.UnvisitedBitMask =
                         TStack_820.UnvisitedBitMask & ~TStack_820._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_820);
                  }
                }
                if (local_3b8.SecondaryData != (ForElementType<int>)0x0) {
                  FMemory::Free((void *)local_3b8.SecondaryData);
                }
                uVar41 = uVar9 & 0xffffffff;
                FVar50.Data = (FScriptContainerElement *)
                              ((((TBitArray<FDefaultBitArrayAllocator> *)FVar50.Data)->
                               AllocatorInstance).InlineData + 4);
              }
            }
            local_890 = &local_a98;
            iVar31 = local_990.ArrayNum;
            local_2d8._s_0.X = 0.0;
            local_2d8._s_0.Y = 0.0;
            local_898 = &local_a98;
            local_8d0 = &local_a98;
            local_338._0_8_ = ___xmm_3f50624dd2f1a9fc3f50624dd2f1a9fc;
            local_338._8_8_ = _UNK_150afcb08;
            local_338._16_8_ = ___xmm_3fefae147ae147ae3e7ad7f29abcaf48;
            local_338._24_8_ = _UNK_150b37cb8;
            local_308 = __real_3fb999999999999a;
            local_2f8 = 0.0;
            local_338._32_16_ = ___xmm_4065400000000000403e000000000000;
            local_300 = 0x32;
            local_2fc._0_1_ = true;
            local_2fc._1_1_ = true;
            local_2f0 = -1;
            local_2e8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2e8.Array.ArrayNum = 0;
            local_2e8.Array.ArrayMax = 0;
            local_2d8._s_0.Z = dVar13;
            local_2d8._s_0.W = dVar14;
            local_288.Data = (FScriptContainerElement *)0x0;
            local_280._0_4_ = 0;
            local_280._4_4_ = 0;
            local_278._0_8_ = 0;
            local_278._8_8_ = 0;
            local_278._32_8_ = 0;
            local_278._40_4_ = 0;
            local_278._44_4_ = 0x80;
            local_278._48_4_ = 0xffffffff;
            local_278._52_4_ = 0;
            local_238 = (void *)0x0;
            local_230 = 0;
            local_228.Data = (FScriptContainerElement *)0x0;
            local_220._0_4_ = 0;
            local_220._4_4_ = 0;
            local_218.Data = (FScriptContainerElement *)0x0;
            local_210._0_4_ = 0;
            local_210._4_4_ = 0;
            local_798 = (TTuple<int,int> *)local_990.AllocatorInstance.Data;
            local_2a0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            local_2a0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            local_2b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_2b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_2b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_2a0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            if ((local_990.ArrayNum < 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar29)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_7c0 = &local_8d0;
            iStack_790 = iVar31;
            local_758._12_4_ = uStack_78c;
            local_758.ArrayNum = iVar31;
            local_7c8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l65::<lambda_9>_const_,UE::Math::TVector<double>,int,int>
                        ::Call;
            local_7b0 = &local_898;
            local_758.DataPtr = local_798;
            local_7b8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l65::<lambda_8>_const_,int,int>
                        ::Call;
            local_7a0 = &local_890;
            local_7a8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l65::<lambda_7>_const_,double,int>
                        ::Call;
            UE::Geometry::FConvexDecomposition3::InitializeFromHulls
                      ((FConvexDecomposition3 *)local_338,(int)local_a90,
                       (TFunctionRef<double___cdecl(int)> *)&local_7a8,
                       (TFunctionRef<int___cdecl(int)> *)&local_7b8,
                       (TFunctionRef<UE::Math::TVector<double>___cdecl(int,int)> *)&local_7c8,
                       &local_758);
            UE::Geometry::FConvexDecomposition3::MergeBest
                      ((FConvexDecomposition3 *)local_338,local_a18->ConvexCount,
                       local_a18->ErrorToleranceInCm,0.0,true,false,-1,local_a18->EmptySpace,pTVar63
                      );
            pTVar18 = local_a00;
            lVar47 = (longlong)(int)local_a60;
            uVar46 = 0;
            if ((int)local_a60 < *(int *)&local_a00->field_0x18) {
              uVar46 = ~local_a60 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar31 = 0;
            pTVar64 = (TBitArray<FDefaultBitArrayAllocator> *)
                      (lVar47 * 0x50 + *(longlong *)&pTVar18->field_0x10);
            uVar34 = 1;
            uVar46 = *(uint *)(pTVar64[1].AllocatorInstance.InlineData + 8);
            pTStack_9d0 = (TBitArray<FDefaultBitArrayAllocator> *)
                          &(pTVar64->AllocatorInstance).SecondaryData;
            iStack_9c0 = 0;
            uStack_9c4 = 0;
            if (uVar46 != 0) {
              pFVar57 = *(ForElementType<unsigned_int> **)pTVar64[1].AllocatorInstance.InlineData;
              pFVar55 = (ForElementType<unsigned_int> *)pTStack_9d0;
              if (pFVar57 != (ForElementType<unsigned_int> *)0x0) {
                pFVar55 = pFVar57;
              }
              uVar62 = *(uint *)&pFVar55->field_0x0;
              iStack_9c0 = 0;
              while (uVar62 == 0) {
                lVar47 = (longlong)iVar31;
                iStack_9c0 = iStack_9c0 + 0x20;
                iVar31 = iVar31 + 1;
                uStack_9c4 = uVar46;
                if ((int)((uVar46 - 1) + ((int)(uVar46 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
                goto LAB_14403a3b1;
                uVar62 = *(uint *)(&pFVar55->field_0x0 + lVar47 * 4 + 4);
              }
              uVar34 = -uVar62 & uVar62;
              uVar41 = (ulonglong)uVar34 * 2 + 1;
              lVar47 = 0x3f;
              if (uVar41 != 0) {
                for (; uVar41 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                }
              }
              local_8d8 = (int)lVar47;
              uStack_9c4 = local_8d8 + -1 + iStack_9c0;
              if ((int)uVar46 < (int)uStack_9c4) {
                uStack_9c4 = uVar46;
              }
            }
LAB_14403a3b1:
            uVar46 = *(uint *)(pTVar64[1].AllocatorInstance.InlineData + 8);
            local_9b8 = *(uint *)((pTVar64->AllocatorInstance).InlineData + 8) -
                        *(int *)&pTVar64[1].AllocatorInstance.SecondaryData.field_0x4;
            uVar62 = uVar46 & 0xffffffe0;
            uStack_9d8 = CONCAT44(uVar34,iVar31);
            pFVar57 = &(pTVar64->AllocatorInstance).SecondaryData;
            uStack_9c8 = 0xffffffff;
            uStack_9bc = local_5b4;
            TStack_880._padding_ = uStack_9d8;
            iVar31 = (int)uVar46 >> 5;
            uStack_860 = CONCAT44(uStack_9b4,local_9b8);
            TStack_880.UnvisitedBitMask = 0xffffffff;
            TStack_880.CurrentBitIndex = uStack_9c4;
            TStack_880.BaseBitIndex = iStack_9c0;
            TStack_880._28_4_ = local_5b4;
            local_a28 = pTVar64;
            local_9e0 = pTVar64;
            local_888 = pTVar64;
            TStack_880.Array = pTStack_9d0;
            if (((int)uVar46 < 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar29)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar19 = local_9e8;
            pTVar49 = local_a28;
            uVar34 = *(uint *)(pTVar64[1].AllocatorInstance.InlineData + 8);
            if (uVar46 != uVar34) {
              pFVar55 = *(ForElementType<unsigned_int> **)pTVar64[1].AllocatorInstance.InlineData;
              pFVar54 = pFVar57;
              if (pFVar55 != (ForElementType<unsigned_int> *)0x0) {
                pFVar54 = pFVar55;
              }
              uVar46 = -1 << ((byte)uVar46 & 0x1f) &
                       *(uint *)(&pFVar54->field_0x0 + (longlong)iVar31 * 4);
              while (uVar46 == 0) {
                lVar47 = (longlong)iVar31;
                uVar62 = uVar62 + 0x20;
                iVar31 = iVar31 + 1;
                uVar46 = uVar34;
                if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
                goto LAB_14403a4d0;
                uVar46 = *(uint *)(&pFVar54->field_0x0 + lVar47 * 4 + 4);
              }
              uVar41 = (ulonglong)(-uVar46 & uVar46) * 2 + 1;
              lVar47 = 0x3f;
              if (uVar41 != 0) {
                for (; uVar41 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                }
              }
              local_8d4 = (int)lVar47;
              uVar46 = local_8d4 + -1 + uVar62;
              if ((int)uVar34 < (int)uVar46) {
                uVar46 = uVar34;
              }
            }
LAB_14403a4d0:
            while( true ) {
              pTVar64 = local_888;
              if (*(uint *)((local_888->AllocatorInstance).InlineData + 8) -
                  *(int *)&local_888[1].AllocatorInstance.SecondaryData.field_0x4 != (int)uStack_860
                 ) {
                local_aa1 = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_aa1);
              }
              pTVar18 = local_a00;
              pFVar53 = local_a10;
              if (((TStack_880.CurrentBitIndex == uVar46) &&
                  (TStack_880.Array == (TBitArray<FDefaultBitArrayAllocator> *)pFVar57)) &&
                 (pTVar64 == pTVar49)) break;
              uVar34 = *(uint *)(*(longlong *)(pTVar64->AllocatorInstance).InlineData +
                                (longlong)TStack_880.CurrentBitIndex * 0xc);
              uVar62 = 0;
              if ((int)uVar34 < *(int *)&pTVar19->field_0x18) {
                uVar62 = ~uVar34 >> 0x1f;
              }
              if ((uVar62 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar47 = *(longlong *)&pTVar19->field_0x10;
              puVar7 = *(undefined8 **)(lVar47 + (longlong)(int)uVar34 * 8);
              if (puVar7 != (undefined8 *)0x0) {
                *(undefined8 *)(lVar47 + (longlong)(int)uVar34 * 8) = 0;
                LOCK();
                piVar1 = (int *)(puVar7 + 1);
                iVar31 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar31 == 1) && (*(int *)((longlong)puVar7 + 0xc) == 0)) {
                  (**(code **)*puVar7)(puVar7,1);
                }
              }
              TStack_880.UnvisitedBitMask =
                   TStack_880.UnvisitedBitMask & ~TStack_880._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_880);
            }
            lVar47 = (longlong)(int)local_a60;
            uVar46 = 0;
            if ((int)local_a60 < *(int *)&local_a00->field_0x18) {
              uVar46 = ~local_a60 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            this_00 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                      (lVar47 * 0x50 + *(longlong *)&pTVar18->field_0x10);
            if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
              *(undefined4 *)&(this_00->Elements).field_0x8 = 0;
              if (*(int *)&(this_00->Elements).field_0xc < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,0,(ForAnyElementType *)this_00,0,
                           (int *)&(this_00->Elements).field_0xc);
              }
              *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
              *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
              *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
            }
            local_aac = 0;
            if (0 < local_2e8.Array.ArrayNum) {
              do {
                uVar34 = 0;
                local_a58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_a58.ArrayNum = 0;
                local_a58.ArrayMax = 0;
                UE::Geometry::FConvexDecomposition3::GetVertices<double>
                          ((FConvexDecomposition3 *)local_338,&local_980,local_aac,true);
                uVar41 = (ulonglong)local_a58.ArrayNum;
                uVar46 = local_980.ArrayNum;
                if (local_a58.ArrayNum < (int)uVar46) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,uVar46 - local_a58.ArrayNum,&local_a58.AllocatorInstance,
                             &local_a58.ArrayNum,&local_a58.ArrayMax);
LAB_14403a7b0:
                  uVar41 = local_a58._8_8_ & 0xffffffff;
                }
                else {
                  if ((int)uVar46 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum(local_980._8_8_ & 0xffffffff);
                  }
                  if ((int)uVar46 < local_a58.ArrayNum) {
                    uVar62 = local_a58.ArrayNum - uVar46;
                    if ((int)(uVar62 | uVar46) < 0) {
                      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         );
                      if (bVar29) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      uVar41 = local_a58._8_8_ & 0xffffffff;
                    }
                    if (uVar62 != 0) {
                      iVar32 = ((int)uVar41 - uVar62) - uVar46;
                      iVar31 = (int)uVar41;
                      if (iVar32 != 0) {
                        memmove(local_a58.AllocatorInstance.Data + (longlong)(int)uVar46 * 0xc,
                                local_a58.AllocatorInstance.Data + (longlong)(int)uVar46 * 0xc +
                                (longlong)(int)uVar62 * 0xc,(longlong)iVar32 * 0xc);
                        iVar31 = local_a58.ArrayNum;
                      }
                      local_a58.ArrayNum = iVar31 - uVar62;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,&local_a58.AllocatorInstance,iVar31 - uVar62,
                                 &local_a58.ArrayMax);
                      goto LAB_14403a7b0;
                    }
                  }
                }
                if (0 < local_980.ArrayNum) {
                  lVar47 = 0;
                  lVar43 = 0;
                  while( true ) {
                    uVar46 = 0;
                    if ((int)uVar34 < local_980.ArrayNum) {
                      uVar46 = ~uVar34 >> 0x1f;
                    }
                    iVar31 = (int)uVar41;
                    if (uVar46 == 0) {
                      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar29) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar31 = local_a58.ArrayNum;
                    }
                    dVar4 = *(double *)(local_980.AllocatorInstance.Data + lVar43);
                    dVar5 = *(double *)(local_980.AllocatorInstance.Data + lVar43 + 8);
                    dVar6 = *(double *)(local_980.AllocatorInstance.Data + lVar43 + 0x10);
                    uVar46 = 0;
                    if ((int)uVar34 < iVar31) {
                      uVar46 = ~uVar34 >> 0x1f;
                    }
                    if ((uVar46 == 0) &&
                       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar29)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar34 = uVar34 + 1;
                    lVar43 = lVar43 + 0x18;
                    *(float *)(local_a58.AllocatorInstance.Data + lVar47) = (float)dVar4;
                    *(float *)(local_a58.AllocatorInstance.Data + lVar47 + 4) = (float)dVar5;
                    *(float *)(local_a58.AllocatorInstance.Data + lVar47 + 8) = (float)dVar6;
                    lVar47 = lVar47 + 0xc;
                    pFVar53 = local_a10;
                    if (local_980.ArrayNum <= (int)uVar34) break;
                    uVar41 = local_a58._8_8_ & 0xffffffff;
                  }
                }
                this = ::operator_new(0xb0);
                if (this == (FConvex *)0x0) {
                  this = (FConvex *)0x0;
                }
                else {
                  Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\b');
                  this->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
                  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  *(undefined4 *)&(this->LocalBoundingBox).MMin = 0x7f7fffff;
                  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
                  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
                  *(undefined4 *)&(this->LocalBoundingBox).MMax = 0xff7fffff;
                  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
                  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
                  (this->Planes).ArrayNum = 0;
                  (this->Planes).ArrayMax = 0;
                  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  (this->Vertices).ArrayNum = 0;
                  (this->Vertices).ArrayMax = 0;
                  (this->StructureData).Data.Ptr = (void *)0x0;
                  (this->StructureData).IndexType = None;
                  *(undefined8 *)&this->CenterOfMass = 0;
                  *(undefined4 *)&(this->CenterOfMass).field_0x8 = 0;
                  *(undefined8 *)&this->RotationOfMass = 0;
                  *(undefined8 *)&(this->RotationOfMass).field_0x8 = 0;
                  *(undefined8 *)&(this->RotationOfMass).field_0x10 = 0;
                  *(undefined8 *)&(this->RotationOfMass).field_0x18 = 0;
                  if (local_a58.ArrayNum != 0) {
                    local_9a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_9a0.ArrayNum = 0;
                    local_9a0.ArrayMax = 0;
                    Chaos::FConvexBuilder::Build
                              (&local_a58,&this->Planes,&local_9a0,&this->Vertices,
                               &this->LocalBoundingBox,Default);
                    Chaos::
                    CalculateVolumeAndCenterOfMass<float,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                              (&this->Vertices,&local_9a0,&this->Volume,&this->CenterOfMass);
                    Chaos::FConvexBuilder::MergeFaces
                              (&this->Planes,&local_9a0,&this->Vertices,fVar12);
                    Chaos::FConvexBuilder::MergeColinearEdges
                              (&this->Planes,&local_9a0,&this->Vertices,fVar15);
                    Chaos::FConvex::CreateStructureData(this,&local_9a0,false);
                    Chaos::FConvex::ComputeUnitMassInertiaTensorAndRotationOfMass
                              (this,(double)this->Volume);
                    *(undefined4 *)&this->_padding_ = 0;
                    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<int,TSizedDefaultAllocator<32>_> *)
                               local_9a0.AllocatorInstance.Data,local_9a0.ArrayNum);
                    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_9a0.AllocatorInstance.Data
                        != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_9a0.AllocatorInstance.Data);
                      LOCK();
                      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
                      UNLOCK();
                      goto LAB_14403aa23;
                    }
                  }
                  LOCK();
                  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
                  UNLOCK();
                }
LAB_14403aa23:
                local_970 = FManagedArrayCollection::AddElements
                                      ((FManagedArrayCollection *)local_a20,1,ConvexGroupName);
                pTVar19 = local_9e8;
                lVar47 = (longlong)(int)local_970;
                uVar46 = 0;
                if ((int)local_970 < *(int *)&local_9e8->field_0x18) {
                  uVar46 = ~local_970 >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar29)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                plVar3 = (longlong *)(*(longlong *)&pTVar19->field_0x10 + lVar47 * 8);
                if (plVar3 != &local_760) {
                  puVar7 = (undefined8 *)*plVar3;
                  *plVar3 = (longlong)this;
                  this = (FConvex *)0x0;
                  if (puVar7 != (undefined8 *)0x0) {
                    LOCK();
                    piVar1 = (int *)(puVar7 + 1);
                    iVar31 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if ((iVar31 == 1) &&
                       (this = (FConvex *)0x0, *(int *)((longlong)puVar7 + 0xc) == 0)) {
                      (**(code **)*puVar7)(puVar7,1);
                    }
                  }
                }
                pTVar18 = local_a00;
                lVar47 = (longlong)(int)local_a60;
                uVar46 = 0;
                if ((int)local_a60 < *(int *)&local_a00->field_0x18) {
                  uVar46 = ~local_a60 >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar29)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                           (lVar47 * 0x50 + *(longlong *)&pTVar18->field_0x10),local_8a0,
                           (bool *)&local_970);
                if (this != (FConvex *)0x0) {
                  LOCK();
                  plVar3 = &this->_padding_;
                  lVar47 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if (((int)lVar47 == 1) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
                    (**(code **)this->_padding_)(this,1);
                  }
                }
                if (local_980.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_980.AllocatorInstance.Data);
                }
                if (local_a58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a58.AllocatorInstance.Data);
                }
                local_aac = local_aac + 1;
              } while (local_aac < local_2e8.Array.ArrayNum);
            }
            if (local_218.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data);
            }
            if (local_228.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data);
            }
            local_230 = 0;
            if (local_238 != (void *)0x0) {
              FMemory::Free(local_238);
            }
            TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_278);
            if (local_288.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_288.Data);
            }
            TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
            ::
            ~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                      (&local_2e8);
            if (local_990.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_990.AllocatorInstance.Data);
            }
            local_408.HashSize = 0;
            if (local_408.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_408.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_408.Elements);
            DestructItems<FGeometryCollectionConvexUtility::FTransformedConvex,int>
                      ((FTransformedConvex *)local_9b0.AllocatorInstance.Data,local_9b0.ArrayNum);
            if ((FTransformedConvex *)local_9b0.AllocatorInstance.Data != (FTransformedConvex *)0x0)
            {
              FMemory::Free(local_9b0.AllocatorInstance.Data);
            }
            if (local_a98.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a98.Data);
            }
          }
          if ((TBitArray<FDefaultBitArrayAllocator> *)local_a88.AllocatorInstance.Data !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            FMemory::Free(local_a88.AllocatorInstance.Data);
          }
        }
        FVar50.Data = local_938 + 4;
        uVar41 = (ulonglong)local_96c;
        pTVar37 = local_948;
        pFVar58 = local_940;
      }
    }
    RemoveEmptyConvexHulls((FManagedArrayCollection *)local_a20);
  }
LAB_14403ace4:
  if (local_a70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a70.AllocatorInstance.Data);
  }
  if (local_928.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_928.AllocatorInstance.Data);
  }
  if (local_958.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.AllocatorInstance.Data);
  }
  return;
}

// GenerateLeafConvexHulls @ 14403ae60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGeometryCollectionConvexUtility::GenerateLeafConvexHulls
          (FGeometryCollection *param_1,bool param_2,TArrayView<int_const_,int> *param_3,
          FLeafConvexHullSettings *param_4,
          TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
          *param_5)

{
  int *piVar1;
  undefined1 (*pauVar2) [12];
  double dVar3;
  EGenerateConvexMethod EVar4;
  FChaosRefCountedObject *this;
  undefined8 *puVar5;
  FConvex *pFVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  double dVar10;
  double dVar11;
  double dVar12;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> *pTVar13
  ;
  undefined1 auVar14 [16];
  bool bVar15;
  double dVar16;
  double dVar17;
  FName FVar18;
  ForAnyElementType FVar19;
  FLeafConvexHullSettings *pFVar20;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  bool bVar24;
  bool bVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  FName *pFVar29;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar30;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar31;
  longlong *plVar32;
  code *pcVar33;
  FConvexHulls *pFVar34;
  FConvex *pFVar35;
  FImplicitObject *pFVar36;
  longlong *plVar37;
  longlong lVar38;
  FScriptContainerElement *pFVar39;
  uint uVar40;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_> *pTVar41
  ;
  ulonglong uVar42;
  undefined1 (*pauVar43) [12];
  uint uVar44;
  FGeometryCollection *pFVar45;
  FScriptContainerElement *pFVar46;
  int iVar47;
  uint uVar48;
  ulonglong uVar49;
  TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_> *pTVar50;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_> *pTVar51
  ;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_> *pTVar52
  ;
  TBitArray<FDefaultBitArrayAllocator> *pTVar53;
  TTransform<double> *pTVar54;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar55;
  TTransform<double> *pTVar56;
  TBitArray<FDefaultBitArrayAllocator> *pTVar57;
  longlong lVar58;
  bool bVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined4 uVar68;
  float fVar69;
  undefined4 uVar70;
  float fVar71;
  undefined4 uVar72;
  undefined1 auStackY_848 [32];
  ForAnyElementType local_7f0;
  undefined8 local_7e8;
  int local_7e0;
  uint local_7d8;
  char local_7d4;
  undefined1 local_7d3;
  undefined1 local_7d2;
  undefined1 local_7d1;
  undefined1 local_7d0;
  undefined1 local_7cf;
  undefined1 local_7ce [6];
  TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_> local_7c8
  ;
  uint local_7b8 [2];
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  *local_7b0;
  undefined8 uStack_7a8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  int local_788;
  undefined4 uStack_784;
  FGeometryCollection *local_780;
  ForAnyElementType local_778;
  int local_770;
  int local_76c;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_768;
  TBitArray<FDefaultBitArrayAllocator> *local_758;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  local_750;
  undefined1 local_740 [4];
  int local_73c;
  uint local_738;
  int local_734;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_730;
  TBitArray<FDefaultBitArrayAllocator> *local_720;
  FConvex *local_718;
  FImplicitObject *local_710;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_708;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  *local_700;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *local_6f8;
  TBitArray<FDefaultBitArrayAllocator> *local_6f0;
  FLeafConvexHullSettings *local_6e8;
  undefined8 local_6e0;
  float local_6d8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_6d0;
  TArray<TRefCountPtr<Chaos::FConvex>,TSizedDefaultAllocator<32>_> local_6c0;
  uint local_6b0;
  int local_6ac;
  int local_6a8;
  int local_6a4;
  int local_6a0 [2];
  FConvexHulls local_698;
  FName local_660;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_658;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_638;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_618;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5b8;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  *local_598;
  TBitArray<FDefaultBitArrayAllocator> *local_590;
  int local_588;
  undefined8 local_584;
  float local_57c;
  int local_578;
  int local_574;
  int local_570;
  int local_56c;
  int local_568;
  int local_564;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  *local_560;
  int local_558 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_550;
  undefined1 local_548 [12];
  uint uStack_53c;
  TBitArray<FDefaultBitArrayAllocator> *local_538;
  undefined8 uStack_530;
  longlong local_528;
  undefined8 uStack_520;
  undefined1 local_518 [12];
  uint uStack_50c;
  TBitArray<FDefaultBitArrayAllocator> *local_508;
  undefined8 uStack_500;
  longlong local_4f8;
  undefined8 uStack_4f0;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  *local_4e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4e0;
  undefined8 uStack_4c0;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  *local_4b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4b0;
  undefined8 uStack_490;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  *local_488;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_480;
  undefined8 uStack_460;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  *local_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_450;
  undefined8 uStack_430;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  *local_428;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_420;
  undefined8 uStack_400;
  FGeometryCollection *local_3f8;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *local_3f0;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_3e8;
  undefined8 local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  code *local_3c8;
  TArray<TRefCountPtr<Chaos::FConvex>,TSizedDefaultAllocator<32>_> **local_3c0;
  TArray<TRefCountPtr<Chaos::FConvex>,TSizedDefaultAllocator<32>_> *local_3b8;
  undefined1 *local_3b0;
  TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_>
  *local_3a8;
  FConvexHulls local_3a0;
  FName local_368 [2];
  TArrayView<int_const_,int> local_358;
  TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_> local_348;
  TRangedForIterator local_310;
  TRangedForIterator local_2e0;
  code *local_2a8 [2];
  code *local_298 [3];
  undefined8 local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  undefined4 local_1fc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8;
  code *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  longlong *plStack_190;
  code *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  undefined1 local_158 [32];
  void *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  ForElementType<FSetElementId> local_118;
  int local_110;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_108;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_848;
  local_700 = param_5;
  local_7d4 = param_2;
  local_780 = param_1;
  local_6e8 = param_4;
  uVar26 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
  uVar42 = 0;
  local_660.ComparisonIndex.Value = 0;
  local_660.Number = 0;
  local_7d8 = uVar26;
  TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_>::
  TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_>
            (&local_348,(FManagedArrayCollection *)param_1,
             &FGeometryCollection::ExternalCollisionsAttribute,&FTransformCollection::TransformGroup
             ,&local_660);
  bVar59 = local_348.ConstAttributeArray ==
           (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0;
  if (local_348.ConstAttributeArray == (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0)
  {
LAB_14403afcf:
    if ((bVar59) ||
       ((EVar4 = param_4->GenerateMethod, EVar4 != ExternalCollision &&
        (EVar4 != IntersectExternalWithComputed)))) goto LAB_14403b001;
    bVar59 = true;
    if (EVar4 == IntersectExternalWithComputed) {
      bVar24 = true;
      bVar59 = true;
      bVar15 = true;
      goto LAB_14403b010;
    }
    bVar15 = false;
  }
  else {
    bVar24 = false;
    uVar49 = uVar42;
    if (0 < (int)uVar26) {
      do {
        uVar40 = (uint)uVar42;
        if (bVar24) {
LAB_14403afb7:
          bVar24 = true;
        }
        else {
          if ((local_348.ConstAttributeArray ==
               (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x60,L""), bVar24)) {
            pcVar33 = (code *)swi(3);
            (*pcVar33)();
            return;
          }
          pTVar21 = local_348.ConstAttributeArray;
          uVar48 = 0;
          if ((int)uVar40 < *(int *)&(local_348.ConstAttributeArray)->field_0x18) {
            uVar48 = ~uVar40 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar33 = (code *)swi(3);
            (*pcVar33)();
            return;
          }
          if (*(longlong *)(*(longlong *)&pTVar21->field_0x10 + uVar49 * 8) != 0)
          goto LAB_14403afb7;
          bVar24 = false;
        }
        uVar42 = (ulonglong)(uVar40 + 1);
        uVar49 = uVar49 + 1;
      } while ((longlong)uVar49 < (longlong)(int)uVar26);
      param_4 = local_6e8;
      if (bVar24) goto LAB_14403afcf;
    }
LAB_14403b001:
    bVar59 = false;
    bVar15 = true;
  }
  bVar24 = false;
LAB_14403b010:
  uVar40 = 0;
  local_698.Hulls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_698.Hulls.ArrayNum = 0;
  local_698.Hulls.ArrayMax = 0;
  local_698.TransformToHullsIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_698.TransformToHullsIndices.ArrayNum = 0;
  local_698.TransformToHullsIndices.ArrayMax = 0;
  local_698.Pivots.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_698.Pivots.ArrayNum = 0;
  local_698.Pivots.ArrayMax = 0;
  local_7c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7c8.ArrayNum = 0;
  local_7c8.ArrayMax = 0;
  local_750.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_750.ArrayNum = 0;
  local_750.ArrayMax = 0;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_750,uVar26,Default);
  pFVar45 = local_780;
  CreateConvexHullAttributesIfNeeded((FManagedArrayCollection *)local_780);
  local_778.Data = (FScriptContainerElement *)0x0;
  local_770 = 0;
  local_76c = 0;
  if (local_7d4 == '\0') {
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    local_7b8[0] = 0;
    if (0 < (int)uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar26,&local_778,0,&local_76c);
      do {
        uVar48 = 0;
        if ((int)uVar40 < *(int *)&(pFVar45->SimulationType).field_0x18) {
          uVar48 = ~uVar40 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar33 = (code *)swi(3);
          (*pcVar33)();
          return;
        }
        if (*(int *)(*(longlong *)&(pFVar45->SimulationType).field_0x10 + (longlong)(int)uVar40 * 4)
            == 1) {
          if (((local_778.Data <= (FScriptContainerElement *)local_7b8) &&
              ((FScriptContainerElement *)local_7b8 < local_778.Data + (longlong)local_76c * 4)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar33 = (code *)swi(3);
            (*pcVar33)();
            return;
          }
          if (local_770 == local_76c) {
            local_770 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_778,&local_76c);
          }
          *(uint *)(local_778.Data + (longlong)local_770 * 4) = local_7b8[0];
          local_770 = local_770 + 1;
        }
        uVar40 = local_7b8[0] + 1;
        local_7b8[0] = uVar40;
      } while ((int)uVar40 < (int)uVar26);
    }
    iVar28 = local_770;
    local_3d8 = local_778.Data;
    if ((local_770 < 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar25)) {
      pcVar33 = (code *)swi(3);
      (*pcVar33)();
      return;
    }
    uVar68 = (undefined4)local_3d8;
    uVar70 = local_3d8._4_4_;
    uVar72 = uStack_3cc;
    iStack_3d0 = iVar28;
  }
  else {
    uVar68 = *(undefined4 *)&param_3->DataPtr;
    uVar70 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    iVar28 = param_3->ArrayNum;
    uVar72 = *(undefined4 *)&param_3->field_0xc;
  }
  local_7e0 = iVar28;
  if (iVar28 != 0) {
    local_6f8 = FManagedArrayCollection::ModifyAttribute<TRefCountPtr<Chaos::FConvex>_>
                          ((FManagedArrayCollection *)pFVar45,
                           FTransformCollection::ConvexHullAttribute,
                           FTransformCollection::ConvexGroup);
    FVar18 = FTransformCollection::TransformGroup;
    pFVar29 = ::FName::FName(local_368,"TransformToConvexIndices");
    pTVar30 = FManagedArrayCollection::
              ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                        ((FManagedArrayCollection *)pFVar45,*pFVar29,FVar18);
    pTVar57 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar70,uVar68);
    pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)
              ((pTVar57->AllocatorInstance).InlineData + (longlong)iVar28 * 4);
    iVar47 = iVar28;
    local_758 = pTVar57;
    local_708 = pTVar30;
    if (pTVar57 != pTVar53) {
      do {
        uVar26 = *(uint *)(pTVar57->AllocatorInstance).InlineData;
        uVar40 = 0;
        if ((int)uVar26 < *(int *)&(pFVar45->SimulationType).field_0x18) {
          uVar40 = ~uVar26 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar33 = (code *)swi(3);
          (*pcVar33)();
          return;
        }
        if (*(int *)(*(longlong *)&(local_780->SimulationType).field_0x10 +
                    (longlong)(int)uVar26 * 4) == 1) {
          uVar40 = 0;
          if ((int)uVar26 < *(int *)&pTVar30->field_0x18) {
            uVar40 = ~uVar26 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar33 = (code *)swi(3);
            (*pcVar33)();
            return;
          }
          this_00 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    ((longlong)(int)uVar26 * 0x50 + *(longlong *)&pTVar30->field_0x10);
          if (this_00->HashSize < 2) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0);
          }
          else {
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0);
            this_00->HashSize = 1;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
          }
        }
        pTVar57 = (TBitArray<FDefaultBitArrayAllocator> *)
                  ((pTVar57->AllocatorInstance).InlineData + 4);
        pFVar45 = local_780;
        iVar47 = local_7e0;
        uVar26 = local_7d8;
      } while (pTVar57 != pTVar53);
    }
    pTVar55 = local_6f8;
    uVar40 = 0;
    local_6d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6d0.ArrayNum = 0;
    local_6d0.ArrayMax = 0;
    iVar27 = (**(code **)(*(longlong *)local_6f8 + 0x60))(local_6f8);
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_6d0,iVar27,Default);
    pTVar30 = local_708;
    iVar27 = (**(code **)(*(longlong *)local_708 + 0x60))(local_708);
    if (0 < iVar27) {
      lVar58 = 0;
      do {
        uVar26 = 0;
        if ((int)uVar40 < *(int *)&pTVar30->field_0x18) {
          uVar26 = ~uVar40 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar33 = (code *)swi(3);
          (*pcVar33)();
          return;
        }
        pTVar41 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                   *)(*(longlong *)&pTVar30->field_0x10 + lVar58);
        local_658._padding_._0_4_ = 0;
        local_658._padding_._4_4_ = 1;
        local_658.UnvisitedBitMask = 0xffffffff;
        local_658.CurrentBitIndex = 0;
        local_658.BaseBitIndex = 0;
        pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar41 + 1);
        local_658.Array = pTVar53;
        if (pTVar41[2].ArrayNum != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_658);
        }
        uStack_7a8 = CONCAT44(local_658._padding_._4_4_,(undefined4)local_658._padding_);
        uStack_798 = CONCAT44(local_658.CurrentBitIndex,local_658.UnvisitedBitMask);
        uStack_790 = CONCAT44(local_658._28_4_,local_658.BaseBitIndex);
        local_788 = pTVar41->ArrayNum - *(int *)((longlong)&pTVar41[3].AllocatorInstance.Data + 4);
        pTStack_7a0 = local_658.Array;
        uStack_520._4_4_ = uStack_784;
        uStack_520._0_4_ = local_788;
        local_538 = local_658.Array;
        local_7b0 = pTVar41;
        local_548._0_8_ = pTVar41;
        unique0x10004923 = uStack_7a8;
        uStack_530 = uStack_798;
        local_528 = uStack_790;
        pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_278,pTVar53,pTVar41[2].ArrayNum);
        uStack_7a8 = pTVar31->_padding_;
        pTStack_7a0 = pTVar31->Array;
        uStack_798._0_4_ = pTVar31->UnvisitedBitMask;
        uStack_798._4_4_ = pTVar31->CurrentBitIndex;
        uStack_790 = *(longlong *)&pTVar31->BaseBitIndex;
        local_788 = pTVar41->ArrayNum - *(int *)((longlong)&pTVar41[3].AllocatorInstance.Data + 4);
        local_310._44_4_ = uStack_784;
        local_310.InitialNum = local_788;
        local_7b0 = pTVar41;
        local_310._padding_ = (longlong)pTVar41;
        local_310._padding_ = uStack_7a8;
        local_310._padding_ = (longlong)pTStack_7a0;
        local_310._padding_ = uStack_798;
        local_310._padding_ = uStack_790;
        bVar25 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_548,&local_310);
        if (bVar25) {
          do {
            uVar26 = *(uint *)(((ForAnyElementType *)local_548._0_8_)->Data +
                              (longlong)uStack_530._4_4_ * 0xc);
            uVar48 = 0;
            if ((int)uVar26 < local_6d0.ArrayNum) {
              uVar48 = ~uVar26 >> 0x1f;
            }
            if ((uVar48 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar33 = (code *)swi(3);
              (*pcVar33)();
              return;
            }
            local_6d0.AllocatorInstance.Data[(int)uVar26] = (FScriptContainerElement)0x1;
            uStack_530 = CONCAT44(uStack_530._4_4_,(uint)uStack_530 & ~uStack_53c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_548 + 8));
            bVar25 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_548,&local_310);
          } while (bVar25);
        }
        uVar40 = uVar40 + 1;
        lVar58 = lVar58 + 0x50;
        iVar27 = (**(code **)(*(longlong *)pTVar30 + 0x60))(pTVar30);
        pTVar55 = local_6f8;
        uVar26 = local_7d8;
      } while ((int)uVar40 < iVar27);
    }
    uVar40 = 0;
    iVar27 = (**(code **)(*(longlong *)pTVar55 + 0x60))(pTVar55);
    if (0 < iVar27) {
      lVar58 = 0;
      do {
        uVar48 = 0;
        if ((int)uVar40 < local_6d0.ArrayNum) {
          uVar48 = ~uVar40 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar33 = (code *)swi(3);
          (*pcVar33)();
          return;
        }
        if (local_6d0.AllocatorInstance.Data[lVar58] == (FScriptContainerElement)0x0) {
          uVar48 = 0;
          if ((int)uVar40 < *(int *)&pTVar55->field_0x18) {
            uVar48 = ~uVar40 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar33 = (code *)swi(3);
            (*pcVar33)();
            return;
          }
          this = *(FChaosRefCountedObject **)(*(longlong *)&pTVar55->field_0x10 + lVar58 * 8);
          if (this != (FChaosRefCountedObject *)0x0) {
            *(undefined8 *)(*(longlong *)&pTVar55->field_0x10 + lVar58 * 8) = 0;
            Chaos::FChaosRefCountedObject::Release(this);
          }
        }
        uVar40 = uVar40 + 1;
        lVar58 = lVar58 + 1;
        iVar27 = (**(code **)(*(longlong *)pTVar55 + 0x60))(pTVar55);
        iVar47 = local_7e0;
      } while ((int)uVar40 < iVar27);
    }
    pFVar45 = local_780;
    RemoveEmptyConvexHulls((FManagedArrayCollection *)local_780);
    if (local_6d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d0.AllocatorInstance.Data);
    }
    local_3e8 = pTVar30;
    local_3f0 = local_6f8;
    local_3f8 = pFVar45;
    if (bVar59) {
      pTVar57 = (TBitArray<FDefaultBitArrayAllocator> *)
                ((local_758->AllocatorInstance).InlineData + (longlong)iVar47 * 4);
      pTVar53 = local_758;
      local_720 = pTVar57;
      if (local_758 != pTVar57) {
        do {
          uVar26 = *(uint *)(pTVar53->AllocatorInstance).InlineData;
          lVar58 = (longlong)(int)uVar26;
          uVar40 = 0;
          if ((int)uVar26 < *(int *)&(pFVar45->SimulationType).field_0x18) {
            uVar40 = ~uVar26 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar59)) {
            pcVar33 = (code *)swi(3);
            (*pcVar33)();
            return;
          }
          if (*(int *)(*(longlong *)&(local_780->SimulationType).field_0x10 + lVar58 * 4) == 1) {
            if ((local_348.ConstAttributeArray ==
                 (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0) &&
               (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x60,L""), bVar59)) {
              pcVar33 = (code *)swi(3);
              (*pcVar33)();
              return;
            }
            pTVar21 = local_348.ConstAttributeArray;
            uVar40 = 0;
            if ((int)uVar26 < *(int *)&(local_348.ConstAttributeArray)->field_0x18) {
              uVar40 = ~uVar26 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar59)) {
              pcVar33 = (code *)swi(3);
              (*pcVar33)();
              return;
            }
            pFVar36 = *(FImplicitObject **)(*(longlong *)&pTVar21->field_0x10 + lVar58 * 8);
            if (pFVar36 != (FImplicitObject *)0x0) {
              LOCK();
              *(int *)&pFVar36->_padding_ = (int)pFVar36->_padding_ + 1;
              UNLOCK();
              iVar47 = local_7c8.ArrayNum;
              ConvertImplicitToConvexArray
                        (pFVar36,&UE::Math::TTransform<double>::Identity,&local_7c8);
              local_73c = iVar47;
              if (iVar47 < local_7c8.ArrayNum) {
                do {
                  uVar40 = 0;
                  if ((int)uVar26 < local_750.ArrayNum) {
                    uVar40 = ~uVar26 >> 0x1f;
                  }
                  local_73c = iVar47;
                  if ((uVar40 == 0) &&
                     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar59)) {
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                             (local_750.AllocatorInstance.Data + lVar58 * 0x50),&local_574,
                             (bool *)&local_73c);
                  iVar47 = iVar47 + 1;
                  pTVar57 = local_720;
                  local_73c = iVar47;
                } while (iVar47 < local_7c8.ArrayNum);
              }
              LOCK();
              plVar37 = &pFVar36->_padding_;
              lVar58 = *plVar37;
              *(int *)plVar37 = (int)*plVar37 + -1;
              UNLOCK();
              if (((int)lVar58 == 1) && (*(int *)((longlong)&pFVar36->_padding_ + 4) == 0)) {
                (**(code **)pFVar36->_padding_)(pFVar36,1);
              }
            }
          }
          pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((pTVar53->AllocatorInstance).InlineData + 4);
          pFVar45 = local_780;
          iVar47 = local_7e0;
        } while (pTVar53 != pTVar57);
      }
      uVar26 = local_7d8;
      if (!bVar24) {
        local_6c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6c0.ArrayNum = 0;
        local_6c0.ArrayMax = 0;
        TArray<TRefCountPtr<Chaos::FConvex>,TSizedDefaultAllocator<32>_>::SetNum
                  (&local_6c0,local_7c8.ArrayNum,Default);
        local_3b8 = &local_6c0;
        local_3b0 = local_740;
        local_3a8 = &local_7c8;
        local_3c0 = &local_3b8;
        local_3c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::__l58::<lambda_3>,void,int>
                    ::Call;
        ParallelFor(local_7c8.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_3c8,None);
        `FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::__l2::<lambda_2>::operator()
                  (&local_3f8,&local_6c0,&local_750);
        DestructItems<TRefCountPtr<Chaos::FConvex>,int>
                  ((TRefCountPtr<Chaos::FConvex> *)local_6c0.AllocatorInstance.Data,
                   local_6c0.ArrayNum);
        uVar26 = local_7d8;
        if (local_6c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6c0.AllocatorInstance.Data);
          uVar26 = local_7d8;
        }
      }
    }
    if (bVar15) {
      local_768.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_768.ArrayMax = 0;
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
      local_768.ArrayNum = 0;
      if ((uVar26 != 0) &&
         (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,uVar26,&local_768.AllocatorInstance,0,&local_768.ArrayMax),
         0 < (int)uVar26)) {
        uVar42 = (ulonglong)uVar26;
        do {
          if (((local_768.AllocatorInstance.Data <
                (FScriptContainerElement *)
                ((longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64 + 1)) &&
              (&UE::Math::TTransform<double>::Identity <
               (TTransform<double> *)
               (local_768.AllocatorInstance.Data + (longlong)local_768.ArrayMax * 0x60))) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar59)) {
            pcVar33 = (code *)swi(3);
            (*pcVar33)();
            return;
          }
          if (local_768.ArrayNum == local_768.ArrayMax) {
            local_768.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_768.AllocatorInstance,&local_768.ArrayMax);
          }
          iVar27 = local_768.ArrayNum + 1;
          lVar58 = (longlong)local_768.ArrayNum * 0x60;
          *(double (*) [2])(local_768.AllocatorInstance.Data + lVar58) =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          *(double (*) [2])(local_768.AllocatorInstance.Data + lVar58 + 0x10) =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          *(double (*) [2])(local_768.AllocatorInstance.Data + lVar58 + 0x20) =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          *(double (*) [2])(local_768.AllocatorInstance.Data + lVar58 + 0x30) =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          *(double (*) [2])(local_768.AllocatorInstance.Data + lVar58 + 0x40) =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          *(double (*) [2])(local_768.AllocatorInstance.Data + lVar58 + 0x50) =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          uVar42 = uVar42 - 1;
          local_768.ArrayNum = iVar27;
        } while (uVar42 != 0);
      }
      local_1b8 = (code *)0x0;
      plStack_190 = (longlong *)0x0;
      local_158._0_8_ = (void *)0x0;
      local_158._8_8_ = 0;
      local_138 = (void *)0x0;
      local_130 = 0;
      local_12c = 0x80;
      local_128 = 0xffffffff;
      local_124 = 0;
      local_118 = (ForElementType<FSetElementId>)0x0;
      local_110 = 0;
      if (local_7d4 != '\0') {
        local_358.DataPtr._0_4_ = uVar68;
        local_358.DataPtr._4_4_ = uVar70;
        local_358.ArrayNum = iVar28;
        local_358._12_4_ = uVar72;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158,&local_358);
        local_108.Elements._0_8_ = 0;
        local_108.Elements._8_8_ = 0;
        local_108.Elements._32_8_ = 0;
        local_108.Elements._40_4_ = 0;
        local_108.Elements._44_4_ = 0x80;
        local_108.Elements._48_4_ = 0xffffffff;
        local_108.Elements._52_4_ = 0;
        local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_108.HashSize = 0;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&local_108,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158);
        local_188 = (code *)0x0;
        plVar32 = FMemory::Malloc(0x58,8);
        *plVar32 = (longlong)
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::`64'::<lambda_4>,0,1>
                    ::_vftable_;
        local_168._8_8_ = plVar32;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar32 + 1),&local_108
                  );
        plVar37 = plStack_190;
        uVar23 = uStack_19c;
        uVar72 = uStack_1a0;
        uVar70 = uStack_1a4;
        uVar68 = local_1a8;
        uVar22 = uStack_1b0;
        auVar14._8_8_ = plStack_190;
        auVar14._0_8_ = local_198;
        pcVar33 = local_188;
        if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar32 + 1) !=
            (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
          pcVar33 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::__l64::<lambda_4>,bool,int>
                    ::Call;
        }
        uStack_1b0 = uStack_180;
        local_198 = local_168._0_8_;
        plStack_190 = (longlong *)local_168._8_8_;
        local_1a8 = local_178;
        uStack_1a4 = uStack_174;
        uStack_1a0 = uStack_170;
        uStack_19c = uStack_16c;
        local_188 = local_1b8;
        uStack_180 = uVar22;
        local_178 = uVar68;
        uStack_174 = uVar70;
        uStack_170 = uVar72;
        uStack_16c = uVar23;
        local_168 = auVar14;
        bVar59 = local_1b8 != (code *)0x0;
        local_1b8 = pcVar33;
        if (bVar59) {
          plVar32 = (longlong *)&local_178;
          if (plVar37 != (longlong *)0x0) {
            plVar32 = plVar37;
          }
          (**(code **)(*plVar32 + 0x10))();
        }
        local_108.HashSize = 0;
        if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_108.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_108.Elements);
      }
      pFVar20 = local_6e8;
      local_280 = 0;
      pTVar50 = &local_7c8;
      pTVar13 = &local_750;
      if (local_6e8->bComputeIntersectionsBeforeHull == false) {
        pTVar50 = (TArray<FGeometryCollectionConvexUtility::FTransformedConvex,TSizedDefaultAllocator<32>_>
                   *)0x0;
        pTVar13 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                   *)0x0;
      }
      local_2a8[0] = local_1b8;
      if (local_1b8 != (code *)0x0) {
        plVar37 = (longlong *)&local_1a8;
        if (plStack_190 != (longlong *)0x0) {
          plVar37 = plStack_190;
        }
        (**(code **)*plVar37)(plVar37,local_2a8 + 2);
      }
      pFVar45 = local_780;
      pFVar34 = ComputeLeafHulls(&local_3a0,local_780,&local_768,
                                 pFVar20->SimplificationDistanceThreshold,0.0,
                                 (TFunction<bool___cdecl(int)> *)local_2a8,
                                 &pFVar20->DecompositionSettings,pTVar50,pTVar13,local_700);
      UE::GeometryCollectionConvexUtility::FConvexHulls::operator=(&local_698,pFVar34);
      if (local_3a0.Pivots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Pivots.AllocatorInstance.Data);
      }
      DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 local_3a0.TransformToHullsIndices.AllocatorInstance.Data,
                 local_3a0.TransformToHullsIndices.ArrayNum);
      if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
          local_3a0.TransformToHullsIndices.AllocatorInstance.Data !=
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
        FMemory::Free(local_3a0.TransformToHullsIndices.AllocatorInstance.Data);
      }
      DestructItems<TRefCountPtr<Chaos::FConvex>,int>
                ((TRefCountPtr<Chaos::FConvex> *)local_3a0.Hulls.AllocatorInstance.Data,
                 local_3a0.Hulls.ArrayNum);
      if (local_3a0.Hulls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Hulls.AllocatorInstance.Data);
      }
      if (!bVar24) {
        `FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::__l2::<lambda_2>::operator()
                  (&local_3f8,&local_698.Hulls,&local_698.TransformToHullsIndices);
      }
      local_110 = 0;
      if (local_118 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_118);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_158,0);
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      if ((void *)local_158._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_158._0_8_);
      }
      if (local_1b8 != (code *)0x0) {
        plVar37 = (longlong *)&local_1a8;
        if (plStack_190 != (longlong *)0x0) {
          plVar37 = plStack_190;
        }
        (**(code **)(*plVar37 + 0x10))();
      }
      if (local_768.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_768.AllocatorInstance.Data);
      }
    }
    pTVar55 = local_6f8;
    if (bVar24) {
      local_7f0.Data = (FScriptContainerElement *)0x0;
      local_7e8 = 0;
      iVar28 = (**(code **)(*(longlong *)local_6f8 + 0x60))(local_6f8);
      dVar17 = __real_3f1a36e2e0000000;
      dVar16 = __real_3ff0000000000000;
      local_590 = (TBitArray<FDefaultBitArrayAllocator> *)
                  ((local_758->AllocatorInstance).InlineData + (longlong)iVar47 * 4);
      local_7e0 = iVar28;
      if (local_758 != local_590) {
        do {
          uVar26 = *(uint *)(local_758->AllocatorInstance).InlineData;
          uVar42 = (ulonglong)(int)uVar26;
          uVar40 = 0;
          if ((int)uVar26 < *(int *)&(pFVar45->SimulationType).field_0x18) {
            uVar40 = ~uVar26 >> 0x1f;
          }
          local_7d8 = uVar26;
          if ((uVar40 == 0) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar59)) {
            pcVar33 = (code *)swi(3);
            (*pcVar33)();
            return;
          }
          if (*(int *)(*(longlong *)&(pFVar45->SimulationType).field_0x10 + uVar42 * 4) == 1) {
            uVar40 = 0;
            if ((int)uVar26 < local_698.TransformToHullsIndices.ArrayNum) {
              uVar40 = ~uVar26 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar59)) {
              pcVar33 = (code *)swi(3);
              (*pcVar33)();
              return;
            }
            pFVar20 = local_6e8;
            pTVar41 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                       *)(local_698.TransformToHullsIndices.AllocatorInstance.Data + uVar42 * 0x50);
            local_598 = pTVar41;
            if (((local_6e8->IntersectFilters).OnlyIntersectIfComputedIsSmallerFactor <= dVar16 &&
                 dVar16 != (local_6e8->IntersectFilters).OnlyIntersectIfComputedIsSmallerFactor) ||
               (0.0 < (local_6e8->IntersectFilters).MinExternalVolumeToIntersect)) {
              pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar41 + 1);
              dVar8 = 0.0;
              local_638._padding_._0_4_ = 0;
              local_638._padding_._4_4_ = 1;
              local_638.UnvisitedBitMask = 0xffffffff;
              local_638.CurrentBitIndex = 0;
              local_638.BaseBitIndex = 0;
              local_638.Array = pTVar53;
              if (pTVar41[2].ArrayNum != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_638);
              }
              uStack_7a8 = CONCAT44(local_638._padding_._4_4_,(undefined4)local_638._padding_);
              uStack_798 = CONCAT44(local_638.CurrentBitIndex,local_638.UnvisitedBitMask);
              uStack_790 = CONCAT44(local_638._28_4_,local_638.BaseBitIndex);
              local_788 = pTVar41->ArrayNum -
                          *(int *)((longlong)&pTVar41[3].AllocatorInstance.Data + 4);
              pTStack_7a0 = local_638.Array;
              uStack_4f0._4_4_ = uStack_784;
              uStack_4f0._0_4_ = local_788;
              local_508 = local_638.Array;
              local_7b0 = pTVar41;
              local_518._0_8_ = pTVar41;
              unique0x10004943 = uStack_7a8;
              uStack_500 = uStack_798;
              local_4f8 = uStack_790;
              pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                        TConstSetBitIterator<FDefaultBitArrayAllocator>
                                  (&local_258,pTVar53,pTVar41[2].ArrayNum);
              uStack_7a8 = pTVar31->_padding_;
              pTStack_7a0 = pTVar31->Array;
              uStack_798._0_4_ = pTVar31->UnvisitedBitMask;
              uStack_798._4_4_ = pTVar31->CurrentBitIndex;
              uStack_790 = *(longlong *)&pTVar31->BaseBitIndex;
              local_788 = pTVar41->ArrayNum -
                          *(int *)((longlong)&pTVar41[3].AllocatorInstance.Data + 4);
              local_2e0._44_4_ = uStack_784;
              local_2e0.InitialNum = local_788;
              local_7b0 = pTVar41;
              local_2e0._padding_ = (longlong)pTVar41;
              local_2e0._padding_ = uStack_7a8;
              local_2e0._padding_ = (longlong)pTStack_7a0;
              local_2e0._padding_ = uStack_798;
              local_2e0._padding_ = uStack_790;
              bVar59 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForIterator::operator!=((TRangedForIterator *)local_518,&local_2e0);
              dVar7 = 0.0;
              if (bVar59) {
                do {
                  uVar40 = *(uint *)(((ForAnyElementType *)local_518._0_8_)->Data +
                                    (longlong)uStack_500._4_4_ * 0xc);
                  uVar48 = 0;
                  if ((int)uVar40 < local_698.Hulls.ArrayNum) {
                    uVar48 = ~uVar40 >> 0x1f;
                  }
                  if ((uVar48 == 0) &&
                     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar59)) {
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  uStack_500 = CONCAT44(uStack_500._4_4_,(uint)uStack_500 & ~uStack_50c);
                  dVar8 = dVar7 + (double)*(float *)(*(longlong *)
                                                      (local_698.Hulls.AllocatorInstance.Data +
                                                      (longlong)(int)uVar40 * 8) + 0x68);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_518 + 8));
                  bVar59 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           ::TRangedForIterator::operator!=
                                     ((TRangedForIterator *)local_518,&local_2e0);
                  dVar7 = dVar8;
                } while (bVar59);
              }
              dVar7 = 0.0;
              uVar40 = 0;
              if ((int)uVar26 < local_750.ArrayNum) {
                uVar40 = ~uVar26 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar59)) {
                pcVar33 = (code *)swi(3);
                (*pcVar33)();
                return;
              }
              local_618._padding_._0_4_ = 0;
              pTVar51 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                         *)(local_750.AllocatorInstance.Data + uVar42 * 0x50);
              local_618._padding_._4_4_ = 1;
              local_618.UnvisitedBitMask = 0xffffffff;
              local_618.CurrentBitIndex = 0;
              local_618.BaseBitIndex = 0;
              pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar51 + 1);
              local_618.Array = pTVar53;
              if (pTVar51[2].ArrayNum != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_618);
              }
              uStack_7a8 = CONCAT44(local_618._padding_._4_4_,(undefined4)local_618._padding_);
              uStack_798._4_4_ = local_618.CurrentBitIndex;
              uStack_798._0_4_ = local_618.UnvisitedBitMask;
              uStack_790._4_4_ = local_618._28_4_;
              uStack_790._0_4_ = local_618.BaseBitIndex;
              local_788 = pTVar51->ArrayNum -
                          *(int *)((longlong)&pTVar51[3].AllocatorInstance.Data + 4);
              pTStack_7a0 = local_618.Array;
              uStack_4c0 = CONCAT44(uStack_784,local_788);
              TStack_4e0.Array = local_618.Array;
              local_7b0 = pTVar51;
              local_4e8 = pTVar51;
              TStack_4e0._padding_ = uStack_7a8;
              TStack_4e0._16_8_ = uStack_798;
              TStack_4e0._24_8_ = uStack_790;
              pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                        TConstSetBitIterator<FDefaultBitArrayAllocator>
                                  (&local_238,pTVar53,pTVar51[2].ArrayNum);
              uStack_7a8 = pTVar31->_padding_;
              pTVar53 = pTVar31->Array;
              lVar58._0_4_ = pTVar31->UnvisitedBitMask;
              lVar58._4_4_ = pTVar31->CurrentBitIndex;
              uStack_790 = *(longlong *)&pTVar31->BaseBitIndex;
              pTStack_7a0 = pTVar53;
              uStack_798 = lVar58;
              while( true ) {
                pTVar52 = local_4e8;
                if (local_4e8->ArrayNum -
                    *(int *)((longlong)&local_4e8[3].AllocatorInstance.Data + 4) != (int)uStack_4c0)
                {
                  local_7d3 = 0;
                  `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_7d3);
                }
                uVar26 = local_7d8;
                if (((TStack_4e0.CurrentBitIndex == lVar58._4_4_) && (TStack_4e0.Array == pTVar53))
                   && (pTVar52 == pTVar51)) break;
                uVar26 = *(uint *)((pTVar52->AllocatorInstance).Data +
                                  (longlong)TStack_4e0.CurrentBitIndex * 0xc);
                uVar40 = 0;
                if ((int)uVar26 < local_7c8.ArrayNum) {
                  uVar40 = ~uVar26 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar59)) {
                  pcVar33 = (code *)swi(3);
                  (*pcVar33)();
                  return;
                }
                TStack_4e0.UnvisitedBitMask =
                     TStack_4e0.UnvisitedBitMask & ~TStack_4e0._padding_._4_4_;
                dVar7 = dVar7 + (double)*(float *)(*(longlong *)
                                                    &local_7c8.AllocatorInstance.Data
                                                     [(longlong)(int)uVar26 * 0x70].field_0x0 + 0x68
                                                  );
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4e0);
              }
              dVar3 = (pFVar20->IntersectFilters).OnlyIntersectIfComputedIsSmallerFactor;
              if (((dVar3 < dVar16) && (dVar7 * dVar3 <= dVar8)) ||
                 (dVar7 < (pFVar20->IntersectFilters).MinExternalVolumeToIntersect)) {
                lVar58 = (longlong)(int)local_7d8;
                uVar40 = 0;
                if ((int)local_7d8 < local_750.ArrayNum) {
                  uVar40 = ~local_7d8 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar59)) {
                  pcVar33 = (code *)swi(3);
                  (*pcVar33)();
                  return;
                }
                iVar27 = 0;
                uVar40 = 1;
                pTVar41 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                           *)(local_750.AllocatorInstance.Data + lVar58 * 0x50);
                iVar47 = 0;
                iVar28 = pTVar41[2].ArrayNum;
                pTStack_7a0 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar41 + 1);
                TStack_420.CurrentBitIndex = 0;
                if (iVar28 != 0) {
                  pTVar51 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                             *)pTVar41[2].AllocatorInstance.Data;
                  pTVar52 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                             *)pTStack_7a0;
                  if (pTVar51 !=
                      (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                       *)0x0) {
                    pTVar52 = pTVar51;
                  }
                  uVar48 = *(uint *)&(pTVar52->AllocatorInstance).Data;
                  while (uVar48 == 0) {
                    lVar38 = (longlong)iVar27;
                    iVar47 = iVar47 + 0x20;
                    iVar27 = iVar27 + 1;
                    TStack_420.CurrentBitIndex = iVar28;
                    if ((int)(iVar28 + -1 + (iVar28 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27)
                    goto LAB_14403c490;
                    uVar48 = *(uint *)((longlong)&(pTVar52->AllocatorInstance).Data + lVar38 * 4 + 4
                                      );
                  }
                  uVar40 = -uVar48 & uVar48;
                  uVar42 = (ulonglong)uVar40 * 2 + 1;
                  lVar38 = 0x3f;
                  if (uVar42 != 0) {
                    for (; uVar42 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                    }
                  }
                  local_578 = (int)lVar38;
                  TStack_420.CurrentBitIndex = iVar47 + -1 + local_578;
                  if (iVar28 < TStack_420.CurrentBitIndex) {
                    TStack_420.CurrentBitIndex = iVar28;
                  }
                }
LAB_14403c490:
                uVar48 = pTVar41[2].ArrayNum;
                local_6f0 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar41 + 1);
                local_788 = pTVar41->ArrayNum -
                            *(int *)((longlong)&pTVar41[3].AllocatorInstance.Data + 4);
                uVar44 = uVar48 & 0xffffffe0;
                uStack_7a8 = CONCAT44(uVar40,iVar27);
                uStack_798 = CONCAT44(TStack_420.CurrentBitIndex,0xffffffff);
                uStack_790 = CONCAT44(local_1fc,iVar47);
                TStack_420._padding_ = uStack_7a8;
                iVar28 = (int)uVar48 >> 5;
                uStack_400 = CONCAT44(uStack_784,local_788);
                TStack_420._24_8_ = uStack_790;
                TStack_420.UnvisitedBitMask = 0xffffffff;
                local_7b0 = pTVar41;
                local_700 = pTVar41;
                local_428 = pTVar41;
                TStack_420.Array = pTStack_7a0;
                if (((int)uVar48 < 0) &&
                   (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x7af,L""), bVar59)) {
                  pcVar33 = (code *)swi(3);
                  (*pcVar33)();
                  return;
                }
                uVar40 = pTVar41[2].ArrayNum;
                if (uVar48 != uVar40) {
                  pTVar51 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                             *)pTVar41[2].AllocatorInstance.Data;
                  pTVar52 = pTVar41 + 1;
                  if (pTVar51 !=
                      (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                       *)0x0) {
                    pTVar52 = pTVar51;
                  }
                  uVar48 = -1 << ((byte)uVar48 & 0x1f) &
                           *(uint *)((longlong)&(pTVar52->AllocatorInstance).Data +
                                    (longlong)iVar28 * 4);
                  while (uVar48 == 0) {
                    lVar38 = (longlong)iVar28;
                    uVar44 = uVar44 + 0x20;
                    iVar28 = iVar28 + 1;
                    uVar48 = uVar40;
                    if ((int)((uVar40 - 1) + ((int)(uVar40 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
                    goto LAB_14403c5a3;
                    uVar48 = *(uint *)((longlong)&(pTVar52->AllocatorInstance).Data + lVar38 * 4 + 4
                                      );
                  }
                  uVar42 = (ulonglong)(-uVar48 & uVar48) * 2 + 1;
                  lVar38 = 0x3f;
                  if (uVar42 != 0) {
                    for (; uVar42 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                    }
                  }
                  local_588 = (int)lVar38;
                  uVar48 = (uVar44 - 1) + local_588;
                  if ((int)uVar40 < (int)uVar48) {
                    uVar48 = uVar40;
                  }
                }
LAB_14403c5a3:
                local_720 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar58 * 0x50);
                pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar41 + 1);
                while( true ) {
                  pTVar51 = local_428;
                  if (local_428->ArrayNum -
                      *(int *)((longlong)&local_428[3].AllocatorInstance.Data + 4) !=
                      (int)uStack_400) {
                    local_7d2 = 0;
                    `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_7d2);
                    pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar41 + 1);
                  }
                  if (((TStack_420.CurrentBitIndex == uVar48) && (TStack_420.Array == pTVar53)) &&
                     (pFVar45 = local_780, iVar28 = local_7e0, pTVar51 == pTVar41)) break;
                  uVar40 = *(uint *)((pTVar51->AllocatorInstance).Data +
                                    (longlong)TStack_420.CurrentBitIndex * 0xc);
                  uVar44 = 0;
                  if ((int)uVar40 < local_7c8.ArrayNum) {
                    uVar44 = ~uVar40 >> 0x1f;
                  }
                  if (uVar44 == 0) {
                    bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar59) {
                      pcVar33 = (code *)swi(3);
                      (*pcVar33)();
                      return;
                    }
                  }
                  FVar19.Data = local_7c8.AllocatorInstance.Data;
                  lVar58 = (longlong)(int)uVar40 * 0x70;
                  uVar44 = 0;
                  if ((int)uVar40 < local_7c8.ArrayNum) {
                    uVar44 = ~uVar40 >> 0x1f;
                  }
                  if ((uVar44 == 0) &&
                     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar59)) {
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  fVar60 = (float)*(double *)(FVar19.Data + lVar58 + 0x20);
                  fVar61 = (float)*(double *)(FVar19.Data + lVar58 + 0x20 + 8);
                  iVar47 = 0;
                  local_730.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_730.ArrayNum = 0;
                  local_730.ArrayMax = 0;
                  fVar69 = (float)*(double *)(FVar19.Data + lVar58 + 0x10);
                  fVar71 = (float)*(double *)(FVar19.Data + lVar58 + 0x10 + 8);
                  lVar38 = *(longlong *)&local_7c8.AllocatorInstance.Data[lVar58].field_0x0;
                  pauVar43 = *(undefined1 (**) [12])(lVar38 + 0x30);
                  dVar8 = *(double *)(FVar19.Data + lVar58 + 0x30);
                  dVar7 = *(double *)(FVar19.Data + lVar58 + 0x30 + 8);
                  dVar3 = *(double *)(FVar19.Data + lVar58 + 0x50);
                  dVar10 = *(double *)(FVar19.Data + lVar58 + 0x50 + 8);
                  dVar11 = *(double *)(FVar19.Data + lVar58 + 0x40);
                  dVar12 = *(double *)(FVar19.Data + lVar58 + 0x60);
                  iVar28 = *(int *)(lVar38 + 0x38);
                  pauVar2 = pauVar43 + iVar28;
                  while( true ) {
                    if (*(int *)(lVar38 + 0x38) != iVar28) {
                      local_7d1 = 0;
                      `TCheckedPointerIterator<Chaos::TVector<float,3>_const_,int,0>::operator!='::
                      __l2::<lambda_1>::operator()(&local_7d1);
                      iVar47 = local_730.ArrayNum;
                    }
                    if (pauVar43 == pauVar2) break;
                    auVar9 = *pauVar43;
                    fVar65 = auVar9._0_4_ * (float)dVar3;
                    fVar66 = auVar9._4_4_ * (float)dVar10;
                    fVar67 = auVar9._8_4_ * (float)dVar12;
                    fVar62 = fVar66 * fVar69 - fVar65 * fVar71;
                    fVar63 = fVar67 * fVar71 - fVar66 * fVar60;
                    fVar64 = fVar65 * fVar60 - fVar67 * fVar69;
                    fVar63 = fVar63 + fVar63;
                    fVar64 = fVar64 + fVar64;
                    fVar62 = fVar62 + fVar62;
                    local_6d8 = fVar61 * fVar62 + fVar67 + (fVar64 * fVar69 - fVar63 * fVar71) +
                                (float)dVar11;
                    local_6e0 = CONCAT44(fVar61 * fVar64 + fVar66 +
                                         (fVar63 * fVar60 - fVar62 * fVar69) + (float)dVar7,
                                         fVar61 * fVar63 + fVar65 +
                                         (fVar62 * fVar71 - fVar64 * fVar60) + (float)dVar8);
                    iVar27 = iVar47;
                    local_584 = local_6e0;
                    local_57c = local_6d8;
                    if ((local_730.AllocatorInstance.Data <= (FScriptContainerElement *)&local_6e0)
                       && ((FScriptContainerElement *)&local_6e0 <
                           local_730.AllocatorInstance.Data + (longlong)local_730.ArrayMax * 0xc)) {
                      bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         );
                      if (bVar59) {
                        pcVar33 = (code *)swi(3);
                        (*pcVar33)();
                        return;
                      }
                      iVar27 = local_730.ArrayNum;
                    }
                    if (iVar27 == local_730.ArrayMax) {
                      iVar27 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,&local_730.AllocatorInstance,&local_730.ArrayMax);
                    }
                    iVar47 = iVar27 + 1;
                    local_730.ArrayNum = iVar47;
                    pauVar43 = pauVar43 + 1;
                    *(undefined8 *)(local_730.AllocatorInstance.Data + (longlong)iVar27 * 0xc) =
                         local_6e0;
                    *(float *)(local_730.AllocatorInstance.Data + (longlong)iVar27 * 0xc + 8) =
                         local_6d8;
                  }
                  pFVar35 = ::operator_new(0xb0);
                  if (pFVar35 == (FConvex *)0x0) {
                    local_718 = (FConvex *)0x0;
                  }
                  else {
                    local_718 = Chaos::FConvex::FConvex(pFVar35,&local_730,dVar17,Default);
                    if (local_718 != (FConvex *)0x0) {
                      LOCK();
                      *(int *)&local_718->_padding_ = (int)local_718->_padding_ + 1;
                      UNLOCK();
                    }
                  }
                  if (local_730.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_730.AllocatorInstance.Data);
                  }
                  if (((local_7f0.Data <= (FScriptContainerElement *)&local_718) &&
                      ((FScriptContainerElement *)&local_718 <
                       local_7f0.Data + (longlong)(int)local_7e8._4_4_ * 8)) &&
                     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar59)) {
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  iVar28 = (uint)local_7e8;
                  if ((uint)local_7e8 == local_7e8._4_4_) {
                    iVar28 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_7f0,(int *)((longlong)&local_7e8 + 4));
                  }
                  pTVar30 = local_708;
                  local_7e8 = CONCAT44(local_7e8._4_4_,iVar28 + 1);
                  *(undefined8 *)(local_7f0.Data + (longlong)iVar28 * 8) = 0;
                  *(FConvex **)(local_7f0.Data + (longlong)iVar28 * 8) = local_718;
                  local_718 = (FConvex *)0x0;
                  uVar40 = 0;
                  if ((int)local_7d8 < *(int *)&local_708->field_0x18) {
                    uVar40 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar40 == 0) &&
                     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar59)) {
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  local_6ac = local_7e0 + iVar28;
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                             ((local_720->AllocatorInstance).InlineData +
                             *(longlong *)&pTVar30->field_0x10),&local_564,(bool *)&local_6ac);
                  TStack_420.UnvisitedBitMask =
                       TStack_420.UnvisitedBitMask & ~TStack_420._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_420);
                  pTVar53 = local_6f0;
                  pTVar41 = local_700;
                }
                goto LAB_14403c9f7;
              }
              uVar42 = (ulonglong)local_7d8;
              iVar28 = local_7e0;
            }
            pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar41 + 1);
            iVar47 = (int)uVar42;
            if (pFVar20->bComputeIntersectionsBeforeHull == false) {
              local_5d8._padding_._0_4_ = 0;
              local_5d8._padding_._4_4_ = 1;
              local_5d8.UnvisitedBitMask = 0xffffffff;
              local_5d8.CurrentBitIndex = 0;
              local_5d8.BaseBitIndex = 0;
              local_5d8.Array = pTVar53;
              if (pTVar41[2].ArrayNum != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5d8);
              }
              uStack_7a8 = CONCAT44(local_5d8._padding_._4_4_,(undefined4)local_5d8._padding_);
              uStack_798._4_4_ = local_5d8.CurrentBitIndex;
              uStack_798._0_4_ = local_5d8.UnvisitedBitMask;
              uStack_790._4_4_ = local_5d8._28_4_;
              uStack_790._0_4_ = local_5d8.BaseBitIndex;
              local_788 = pTVar41->ArrayNum -
                          *(int *)((longlong)&pTVar41[3].AllocatorInstance.Data + 4);
              pTStack_7a0 = local_5d8.Array;
              uStack_430 = CONCAT44(uStack_784,local_788);
              TStack_450.Array = local_5d8.Array;
              local_7b0 = pTVar41;
              local_458 = pTVar41;
              TStack_450._padding_ = uStack_7a8;
              TStack_450._16_8_ = uStack_798;
              TStack_450._24_8_ = uStack_790;
              pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                        TConstSetBitIterator<FDefaultBitArrayAllocator>
                                  (&local_1d8,pTVar53,pTVar41[2].ArrayNum);
              local_6f0 = (TBitArray<FDefaultBitArrayAllocator> *)(longlong)iVar47;
              lVar58 = (longlong)iVar47;
              uStack_7a8 = pTVar31->_padding_;
              pTStack_7a0 = pTVar31->Array;
              uStack_798._0_4_ = pTVar31->UnvisitedBitMask;
              uStack_798._4_4_ = pTVar31->CurrentBitIndex;
              uStack_790 = *(longlong *)&pTVar31->BaseBitIndex;
              local_700 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                           *)((longlong)local_6f0 * 0x50);
              local_734 = uStack_798._4_4_;
              local_720 = pTStack_7a0;
              while( true ) {
                pTVar52 = local_458;
                pTVar51 = local_700;
                iVar47 = local_734;
                if (local_458->ArrayNum -
                    *(int *)((longlong)&local_458[3].AllocatorInstance.Data + 4) != (int)uStack_430)
                {
                  local_7cf = 0;
                  `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_7cf);
                }
                pTVar30 = local_708;
                if (((TStack_450.CurrentBitIndex == iVar47) && (TStack_450.Array == local_720)) &&
                   (pFVar45 = local_780, pTVar52 == pTVar41)) break;
                uVar26 = *(uint *)((pTVar52->AllocatorInstance).Data +
                                  (longlong)TStack_450.CurrentBitIndex * 0xc);
                uVar40 = (uint)uVar42;
                local_6b0 = uVar26;
                if (local_750.ArrayNum == 0) {
                  uVar48 = 0;
                  if ((int)uVar40 < *(int *)&local_708->field_0x18) {
                    uVar48 = ~uVar40 >> 0x1f;
                  }
                  if ((uVar48 == 0) &&
                     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar59)) {
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  lVar38 = *(longlong *)&pTVar30->field_0x10;
                  uVar40 = 0;
                  if ((int)uVar26 < local_698.Hulls.ArrayNum) {
                    uVar40 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar40 == 0) &&
                     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar59)) {
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  pFVar46 = local_698.Hulls.AllocatorInstance.Data + (longlong)(int)uVar26 * 8;
                  if (((local_7f0.Data <= pFVar46) &&
                      (pFVar46 < local_7f0.Data + (longlong)(int)local_7e8._4_4_ * 8)) &&
                     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar59)) {
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  iVar47 = (uint)local_7e8;
                  if ((uint)local_7e8 == local_7e8._4_4_) {
                    iVar47 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_7f0,(int *)((longlong)&local_7e8 + 4));
                  }
                  local_7e8 = CONCAT44(local_7e8._4_4_,iVar47 + 1);
                  local_6a8 = iVar47 + iVar28;
                  *(undefined8 *)(local_7f0.Data + (longlong)iVar47 * 8) = 0;
                  *(FConvex **)(local_7f0.Data + (longlong)iVar47 * 8) = *(FConvex **)pFVar46;
                  *(FConvex **)pFVar46 = (FConvex *)0x0;
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                             ((longlong)pTVar51 + 0x38 + lVar38 + -0x38),local_558,
                             (bool *)&local_6a8);
                }
                else {
                  uVar26 = 0;
                  if ((int)uVar40 < local_750.ArrayNum) {
                    uVar26 = ~uVar40 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar59)) {
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  local_5b8._padding_._0_4_ = 0;
                  pTVar41 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                             *)(local_750.AllocatorInstance.Data + lVar58 * 0x50);
                  local_5b8._padding_._4_4_ = 1;
                  local_5b8.UnvisitedBitMask = 0xffffffff;
                  pTVar53 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar41 + 1);
                  local_5b8.CurrentBitIndex = 0;
                  local_5b8.BaseBitIndex = 0;
                  local_5b8.Array = pTVar53;
                  local_560 = pTVar41;
                  local_550 = pTVar53;
                  if (pTVar41[2].ArrayNum != 0) {
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5b8);
                  }
                  uVar26 = pTVar41[2].ArrayNum;
                  uStack_7a8 = CONCAT44(local_5b8._padding_._4_4_,(undefined4)local_5b8._padding_);
                  uStack_798 = CONCAT44(local_5b8.CurrentBitIndex,local_5b8.UnvisitedBitMask);
                  uStack_790 = CONCAT44(local_5b8._28_4_,local_5b8.BaseBitIndex);
                  local_788 = pTVar41->ArrayNum -
                              *(int *)((longlong)&pTVar41[3].AllocatorInstance.Data + 4);
                  pTStack_7a0 = local_5b8.Array;
                  uVar40 = uVar26 & 0xffffffe0;
                  iVar28 = (int)uVar26 >> 5;
                  uStack_460 = CONCAT44(uStack_784,local_788);
                  TStack_480.Array = local_5b8.Array;
                  local_7b0 = pTVar41;
                  local_738 = uVar26;
                  local_488 = pTVar41;
                  TStack_480._padding_ = uStack_7a8;
                  TStack_480._16_8_ = uStack_798;
                  TStack_480._24_8_ = uStack_790;
                  if (((int)uVar26 < 0) &&
                     (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x7af,L""), bVar59)) {
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  uVar48 = pTVar41[2].ArrayNum;
                  uVar44 = local_7d8;
                  if (uVar26 != uVar48) {
                    pTVar51 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                               *)pTVar41[2].AllocatorInstance.Data;
                    pTVar52 = (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                               *)pTVar53;
                    if (pTVar51 !=
                        (TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
                         *)0x0) {
                      pTVar52 = pTVar51;
                    }
                    uVar26 = -1 << ((byte)uVar26 & 0x1f) &
                             *(uint *)((longlong)&(pTVar52->AllocatorInstance).Data +
                                      (longlong)iVar28 * 4);
                    while (uVar26 == 0) {
                      lVar58 = (longlong)iVar28;
                      uVar40 = uVar40 + 0x20;
                      iVar28 = iVar28 + 1;
                      uVar26 = uVar48;
                      local_738 = uVar48;
                      if ((int)((uVar48 - 1) + ((int)(uVar48 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
                      goto LAB_14403d370;
                      uVar26 = *(uint *)((longlong)&(pTVar52->AllocatorInstance).Data +
                                        lVar58 * 4 + 4);
                    }
                    uVar42 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
                    lVar58 = 0x3f;
                    if (uVar42 != 0) {
                      for (; uVar42 >> lVar58 == 0; lVar58 = lVar58 + -1) {
                      }
                    }
                    local_56c = (int)lVar58;
                    uVar26 = (uVar40 - 1) + local_56c;
                    local_738 = uVar26;
                    if ((int)uVar48 < (int)uVar26) {
                      uVar26 = uVar48;
                      local_738 = uVar48;
                    }
                  }
LAB_14403d370:
                  while( true ) {
                    pTVar51 = local_488;
                    uVar42 = (ulonglong)uVar44;
                    if (local_488->ArrayNum -
                        *(int *)((longlong)&local_488[3].AllocatorInstance.Data + 4) !=
                        (int)uStack_460) {
                      local_7ce[0] = 0;
                      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_7ce);
                    }
                    if (((TStack_480.CurrentBitIndex == uVar26) && (TStack_480.Array == pTVar53)) &&
                       (pTVar51 == pTVar41)) break;
                    uVar26 = *(uint *)((pTVar51->AllocatorInstance).Data +
                                      (longlong)TStack_480.CurrentBitIndex * 0xc);
                    pFVar36 = ::operator_new(0xb0);
                    if (pFVar36 == (FImplicitObject *)0x0) {
                      local_710 = (FImplicitObject *)0x0;
                    }
                    else {
                      Chaos::FImplicitObject::FImplicitObject(pFVar36,3,'\b');
                      pFVar36[3]._padding_ = 0;
                      pFVar36->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
                      pFVar36[3].Type = '\0';
                      pFVar36[3].CollisionType = '\0';
                      pFVar36[3].Pad[0] = '\0';
                      pFVar36[3].Pad[1] = '\0';
                      pFVar36[3].Pad[2] = '\0';
                      pFVar36[3].Pad[3] = '\0';
                      pFVar36[3].Pad[4] = -0x10;
                      pFVar36[3].Pad[5] = '?';
                      pFVar36[4]._padding_ = 0x3ff0000000000000;
                      pFVar36[4]._padding_ = 0x3ff0000000000000;
                      pFVar36[1]._padding_ = 0;
                      pFVar36[1]._padding_ = 0;
                      pFVar36[1].Margin = 0.0;
                      pFVar36[1].bIsConvex = false;
                      pFVar36[1].bDoCollide = false;
                      pFVar36[1].bHasBoundingBox = false;
                      pFVar36[1].bIsTracked = false;
                      pFVar36[1].Type = '\0';
                      pFVar36[1].CollisionType = '\0';
                      pFVar36[1].Pad[0] = '\0';
                      pFVar36[1].Pad[1] = '\0';
                      pFVar36[1].Pad[2] = '\0';
                      pFVar36[1].Pad[3] = '\0';
                      pFVar36[1].Pad[4] = '\0';
                      pFVar36[1].Pad[5] = '\0';
                      *(undefined4 *)&pFVar36[2]._padding_ = 0x7f7fffff;
                      *(undefined4 *)((longlong)&pFVar36[2]._padding_ + 4) = 0x7f7fffff;
                      *(undefined4 *)&pFVar36[2]._padding_ = 0x7f7fffff;
                      *(undefined4 *)((longlong)&pFVar36[2]._padding_ + 4) = 0xff7fffff;
                      pFVar36[2].Margin = -3.4028235e+38;
                      pFVar36[2].bIsConvex = true;
                      pFVar36[2].bDoCollide = true;
                      pFVar36[2].bHasBoundingBox = true;
                      pFVar36[2].bIsTracked = true;
                      pFVar36[2].Type = '\0';
                      pFVar36[2].CollisionType = '\0';
                      pFVar36[2].Pad[0] = '\0';
                      pFVar36[2].Pad[1] = '\0';
                      pFVar36[2].Pad[2] = '\0';
                      pFVar36[2].Pad[3] = '\0';
                      pFVar36[2].Pad[4] = '\0';
                      pFVar36[2].Pad[5] = '\0';
                      *(undefined1 *)&pFVar36[3]._padding_ = 0;
                      pFVar36[3].Margin = 0.0;
                      dVar8 = UE::Math::TQuat<double>::Identity.Y;
                      pFVar36[3].bIsConvex = false;
                      pFVar36[3].bDoCollide = false;
                      pFVar36[3].bHasBoundingBox = false;
                      pFVar36[3].bIsTracked = false;
                      *(double *)&pFVar36[4].Margin = UE::Math::TQuat<double>::Identity.X;
                      *(double *)&pFVar36[4].Type = dVar8;
                      dVar8 = UE::Math::TQuat<double>::Identity.W;
                      pFVar36[5]._padding_ = (longlong)UE::Math::TQuat<double>::Identity.Z;
                      pFVar36[5]._padding_ = (longlong)dVar8;
                      LOCK();
                      *(int *)&pFVar36->_padding_ = (int)pFVar36->_padding_ + 1;
                      UNLOCK();
                      local_710 = pFVar36;
                    }
                    if (((local_7f0.Data <= (FScriptContainerElement *)&local_710) &&
                        ((FScriptContainerElement *)&local_710 <
                         local_7f0.Data + (longlong)(int)local_7e8._4_4_ * 8)) &&
                       (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar59)) {
                      pcVar33 = (code *)swi(3);
                      (*pcVar33)();
                      return;
                    }
                    uVar40 = (uint)local_7e8;
                    if ((uint)local_7e8 == local_7e8._4_4_) {
                      uVar40 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&local_7f0,(int *)((longlong)&local_7e8 + 4));
                    }
                    local_7e8 = CONCAT44(local_7e8._4_4_,uVar40 + 1);
                    uVar44 = ~uVar26 >> 0x1f;
                    *(undefined8 *)(local_7f0.Data + (longlong)(int)uVar40 * 8) = 0;
                    *(FImplicitObject **)(local_7f0.Data + (longlong)(int)uVar40 * 8) = local_710;
                    dVar8 = local_6e8->SimplificationDistanceThreshold;
                    local_710 = (FImplicitObject *)0x0;
                    uVar48 = 0;
                    if ((int)uVar26 < local_7c8.ArrayNum) {
                      uVar48 = uVar44;
                    }
                    if (uVar48 == 0) {
                      bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar59) {
                        pcVar33 = (code *)swi(3);
                        (*pcVar33)();
                        return;
                      }
                    }
                    lVar58 = (longlong)(int)uVar26 * 0x70;
                    pTVar56 = (TTransform<double> *)
                              (local_7c8.AllocatorInstance.Data + lVar58 + 0x10);
                    uVar48 = 0;
                    if ((int)uVar26 < local_7c8.ArrayNum) {
                      uVar48 = uVar44;
                    }
                    iVar28 = local_7c8.ArrayNum;
                    if (uVar48 == 0) {
                      bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar59) {
                        pcVar33 = (code *)swi(3);
                        (*pcVar33)();
                        return;
                      }
                      iVar28 = local_7c8.ArrayNum;
                    }
                    pTVar54 = (TTransform<double> *)
                              (local_7c8.AllocatorInstance.Data + lVar58 + 0x10);
                    uVar48 = 0;
                    if ((int)uVar26 < iVar28) {
                      uVar48 = uVar44;
                    }
                    if ((uVar48 == 0) &&
                       (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar59)) {
                      pcVar33 = (code *)swi(3);
                      (*pcVar33)();
                      return;
                    }
                    pFVar35 = *(FConvex **)&local_7c8.AllocatorInstance.Data[lVar58].field_0x0;
                    lVar58 = (longlong)(int)local_6b0;
                    uVar26 = 0;
                    if ((int)local_6b0 < local_698.Hulls.ArrayNum) {
                      uVar26 = ~local_6b0 >> 0x1f;
                    }
                    if ((uVar26 == 0) &&
                       (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar59)) {
                      pcVar33 = (code *)swi(3);
                      (*pcVar33)();
                      return;
                    }
                    pFVar6 = *(FConvex **)(local_698.Hulls.AllocatorInstance.Data + lVar58 * 8);
                    uVar26 = 0;
                    if ((int)uVar40 < (int)(uint)local_7e8) {
                      uVar26 = ~uVar40 >> 0x1f;
                    }
                    if ((uVar26 == 0) &&
                       (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar59)) {
                      pcVar33 = (code *)swi(3);
                      (*pcVar33)();
                      return;
                    }
                    UE::GeometryCollectionConvexUtility::IntersectConvexHulls
                              (*(FConvex **)(local_7f0.Data + (longlong)(int)uVar40 * 8),pFVar6,0.0,
                               pFVar35,(TTransform<double> *)0x0,pTVar54,pTVar56,dVar8);
                    pTVar30 = local_708;
                    uVar44 = local_7d8;
                    uVar26 = 0;
                    if ((int)local_7d8 < *(int *)&local_708->field_0x18) {
                      uVar26 = ~local_7d8 >> 0x1f;
                    }
                    if ((uVar26 == 0) &&
                       (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar59)) {
                      pcVar33 = (code *)swi(3);
                      (*pcVar33)();
                      return;
                    }
                    local_6a0[0] = local_7e0 + uVar40;
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                               ((longlong)local_700 + 0x38 +
                               *(longlong *)&pTVar30->field_0x10 + -0x38),&local_570,
                               (bool *)local_6a0);
                    TStack_480.UnvisitedBitMask =
                         TStack_480.UnvisitedBitMask & ~TStack_480._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_480);
                    pTVar53 = local_550;
                    pTVar41 = local_560;
                    uVar26 = local_738;
                  }
                  lVar58 = (longlong)(int)uVar44;
                  pTVar41 = local_598;
                  iVar28 = local_7e0;
                }
                TStack_450.UnvisitedBitMask =
                     TStack_450.UnvisitedBitMask & ~TStack_450._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_450);
              }
            }
            else {
              local_5f8._padding_._0_4_ = 0;
              local_5f8._padding_._4_4_ = 1;
              local_5f8.UnvisitedBitMask = 0xffffffff;
              local_5f8.CurrentBitIndex = 0;
              local_5f8.BaseBitIndex = 0;
              local_5f8.Array = pTVar53;
              if (pTVar41[2].ArrayNum != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5f8);
              }
              uStack_7a8 = CONCAT44(local_5f8._padding_._4_4_,(undefined4)local_5f8._padding_);
              uStack_798._4_4_ = local_5f8.CurrentBitIndex;
              uStack_798._0_4_ = local_5f8.UnvisitedBitMask;
              uStack_790._4_4_ = local_5f8._28_4_;
              uStack_790._0_4_ = local_5f8.BaseBitIndex;
              local_788 = pTVar41->ArrayNum -
                          *(int *)((longlong)&pTVar41[3].AllocatorInstance.Data + 4);
              pTStack_7a0 = local_5f8.Array;
              uStack_490 = CONCAT44(uStack_784,local_788);
              TStack_4b0.Array = local_5f8.Array;
              local_7b0 = pTVar41;
              local_4b8 = pTVar41;
              TStack_4b0._padding_ = uStack_7a8;
              TStack_4b0._16_8_ = uStack_798;
              TStack_4b0._24_8_ = uStack_790;
              pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                        TConstSetBitIterator<FDefaultBitArrayAllocator>
                                  (&local_1f8,pTVar53,pTVar41[2].ArrayNum);
              uStack_7a8 = pTVar31->_padding_;
              pTVar53 = pTVar31->Array;
              lVar38._0_4_ = pTVar31->UnvisitedBitMask;
              lVar38._4_4_ = pTVar31->CurrentBitIndex;
              uStack_790 = *(longlong *)&pTVar31->BaseBitIndex;
              pTStack_7a0 = pTVar53;
              uStack_798 = lVar38;
              while( true ) {
                pTVar51 = local_4b8;
                if (local_4b8->ArrayNum -
                    *(int *)((longlong)&local_4b8[3].AllocatorInstance.Data + 4) != (int)uStack_490)
                {
                  local_7d0 = 0;
                  `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_7d0);
                }
                if (((TStack_4b0.CurrentBitIndex == lVar38._4_4_) && (TStack_4b0.Array == pTVar53))
                   && (pFVar45 = local_780, iVar28 = local_7e0, pTVar51 == pTVar41)) break;
                uVar26 = *(uint *)((pTVar51->AllocatorInstance).Data +
                                  (longlong)TStack_4b0.CurrentBitIndex * 0xc);
                uVar40 = 0;
                if ((int)uVar26 < local_698.Hulls.ArrayNum) {
                  uVar40 = ~uVar26 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar59)) {
                  pcVar33 = (code *)swi(3);
                  (*pcVar33)();
                  return;
                }
                pFVar46 = local_698.Hulls.AllocatorInstance.Data + (longlong)(int)uVar26 * 8;
                if (((local_7f0.Data <= pFVar46) &&
                    (pFVar46 < local_7f0.Data + (longlong)(int)local_7e8._4_4_ * 8)) &&
                   (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar59)) {
                  pcVar33 = (code *)swi(3);
                  (*pcVar33)();
                  return;
                }
                iVar28 = (uint)local_7e8;
                if ((uint)local_7e8 == local_7e8._4_4_) {
                  iVar28 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_7f0,(int *)((longlong)&local_7e8 + 4));
                }
                pTVar30 = local_708;
                local_7e8 = CONCAT44(local_7e8._4_4_,iVar28 + 1);
                *(undefined8 *)(local_7f0.Data + (longlong)iVar28 * 8) = 0;
                *(FConvex **)(local_7f0.Data + (longlong)iVar28 * 8) = *(FConvex **)pFVar46;
                *(FConvex **)pFVar46 = (FConvex *)0x0;
                uVar26 = 0;
                if ((int)local_7d8 < *(int *)&local_708->field_0x18) {
                  uVar26 = ~local_7d8 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar59)) {
                  pcVar33 = (code *)swi(3);
                  (*pcVar33)();
                  return;
                }
                local_6a4 = local_7e0 + iVar28;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                           (*(longlong *)&pTVar30->field_0x10 + (longlong)iVar47 * 0x50),&local_568,
                           (bool *)&local_6a4);
                TStack_4b0.UnvisitedBitMask =
                     TStack_4b0.UnvisitedBitMask & ~TStack_4b0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4b0);
              }
            }
          }
LAB_14403c9f7:
          local_758 = (TBitArray<FDefaultBitArrayAllocator> *)
                      ((local_758->AllocatorInstance).InlineData + 4);
          pTVar55 = local_6f8;
        } while (local_758 != local_590);
      }
      iVar28 = local_7e0;
      uVar42 = 0;
      FManagedArrayCollection::Resize
                ((FManagedArrayCollection *)pFVar45,(uint)local_7e8 + local_7e0,
                 FTransformCollection::ConvexGroup);
      if (0 < (int)(uint)local_7e8) {
        uVar49 = uVar42;
        do {
          uVar40 = (uint)uVar42;
          uVar26 = 0;
          if ((int)uVar40 < (int)(uint)local_7e8) {
            uVar26 = ~uVar40 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar59)) {
            pcVar33 = (code *)swi(3);
            (*pcVar33)();
            return;
          }
          uVar48 = uVar40 + iVar28;
          pFVar46 = local_7f0.Data + uVar49;
          uVar26 = 0;
          if ((int)uVar48 < *(int *)&pTVar55->field_0x18) {
            uVar26 = ~uVar48 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar59 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar59)) {
            pcVar33 = (code *)swi(3);
            (*pcVar33)();
            return;
          }
          pFVar39 = (FScriptContainerElement *)
                    (*(longlong *)&pTVar55->field_0x10 + (longlong)iVar28 * 8 + uVar49);
          if (pFVar39 != pFVar46) {
            puVar5 = *(undefined8 **)pFVar39;
            *(longlong *)pFVar39 = *(longlong *)pFVar46;
            *(longlong *)pFVar46 = 0;
            if (puVar5 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar5 + 1);
              iVar47 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar47 == 1) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
                (**(code **)*puVar5)(puVar5,1);
              }
            }
          }
          uVar42 = (ulonglong)(uVar40 + 1);
          uVar49 = uVar49 + 8;
          pFVar45 = local_780;
        } while ((int)(uVar40 + 1) < (int)(uint)local_7e8);
      }
      DestructItems<TRefCountPtr<Chaos::FConvex>,int>
                ((TRefCountPtr<Chaos::FConvex> *)local_7f0.Data,(uint)local_7e8);
      if (local_7f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7f0.Data);
      }
    }
    RemoveEmptyConvexHulls((FManagedArrayCollection *)pFVar45);
  }
  if (local_778.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_778.Data);
  }
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             local_750.AllocatorInstance.Data,local_750.ArrayNum);
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_750.AllocatorInstance.Data !=
      (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(local_750.AllocatorInstance.Data);
  }
  DestructItems<FGeometryCollectionConvexUtility::FTransformedConvex,int>
            ((FTransformedConvex *)local_7c8.AllocatorInstance.Data,local_7c8.ArrayNum);
  if ((FTransformedConvex *)local_7c8.AllocatorInstance.Data != (FTransformedConvex *)0x0) {
    FMemory::Free(local_7c8.AllocatorInstance.Data);
  }
  if (local_698.Pivots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Pivots.AllocatorInstance.Data);
  }
  FVar19.Data = local_698.TransformToHullsIndices.AllocatorInstance.Data;
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             local_698.TransformToHullsIndices.AllocatorInstance.Data,
             local_698.TransformToHullsIndices.ArrayNum);
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar19.Data !=
      (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(FVar19.Data);
  }
  FVar19.Data = local_698.Hulls.AllocatorInstance.Data;
  DestructItems<TRefCountPtr<Chaos::FConvex>,int>
            ((TRefCountPtr<Chaos::FConvex> *)local_698.Hulls.AllocatorInstance.Data,
             local_698.Hulls.ArrayNum);
  if (FVar19.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar19.Data);
  }
  return;
}

// GetConvexHull @ 14403eb20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TRefCountPtr<Chaos::FConvex> __cdecl
FGeometryCollectionConvexUtility::GetConvexHull(FGeometryCollection *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TRefCountPtr<Chaos::FConvex> TVar10;
  FConvex *this;
  uint uVar11;
  undefined4 in_register_00000014;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint in_R8D;
  longlong lVar15;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_58;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_48 [2];
  
  lVar12 = CONCAT44(in_register_00000014,param_2);
  if ((lVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                         ,0x9de,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    TVar10.Reference = (FConvex *)(*pcVar6)();
    return (TRefCountPtr<Chaos::FConvex>)TVar10.Reference;
  }
  uVar13 = 0;
  uVar8 = 0;
  if ((int)in_R8D < *(int *)(lVar12 + 0x458)) {
    uVar8 = ~in_R8D >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    TVar10.Reference = (FConvex *)(*pcVar6)();
    return (TRefCountPtr<Chaos::FConvex>)TVar10.Reference;
  }
  iVar3 = *(int *)(*(longlong *)(lVar12 + 0x450) + (longlong)(int)in_R8D * 4);
  lVar15 = (longlong)iVar3;
  uVar8 = 0;
  if ((int)in_R8D < *(int *)(lVar12 + 0x438)) {
    uVar8 = ~in_R8D >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    TVar10.Reference = (FConvex *)(*pcVar6)();
    return (TRefCountPtr<Chaos::FConvex>)TVar10.Reference;
  }
  iVar4 = *(int *)(*(longlong *)(lVar12 + 0x430) + (longlong)(int)in_R8D * 4);
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = 0;
  local_48[0].ArrayMax = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(local_48,iVar3,Default);
  uVar14 = uVar13;
  if (0 < iVar3) {
    do {
      uVar8 = (uint)uVar13;
      uVar11 = uVar8 + iVar4;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)(lVar12 + 0x238)) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        TVar10.Reference = (FConvex *)(*pcVar6)();
        return (TRefCountPtr<Chaos::FConvex>)TVar10.Reference;
      }
      lVar1 = uVar14 + (longlong)iVar4 * 0xc;
      uVar2 = *(undefined8 *)(lVar1 + *(longlong *)(lVar12 + 0x230));
      uVar5 = *(undefined4 *)(lVar1 + 8 + *(longlong *)(lVar12 + 0x230));
      uVar9 = 0;
      if ((int)uVar8 < local_48[0].ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        TVar10.Reference = (FConvex *)(*pcVar6)();
        return (TRefCountPtr<Chaos::FConvex>)TVar10.Reference;
      }
      uVar13 = (ulonglong)(uVar8 + 1);
      *(undefined8 *)(local_48[0].AllocatorInstance.Data + uVar14) = uVar2;
      *(undefined4 *)(local_48[0].AllocatorInstance.Data + uVar14 + 8) = uVar5;
      lVar15 = lVar15 + -1;
      uVar14 = uVar14 + 0xc;
    } while (lVar15 != 0);
  }
  this = ::operator_new(0xb0);
  if (this == (FConvex *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\b');
    this->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
    *(undefined4 *)&(this->LocalBoundingBox).MMin = 0x7f7fffff;
    *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
    *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
    *(undefined4 *)&(this->LocalBoundingBox).MMax = 0xff7fffff;
    *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
    *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
    (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Planes).ArrayNum = 0;
    (this->Planes).ArrayMax = 0;
    (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Vertices).ArrayNum = 0;
    (this->Vertices).ArrayMax = 0;
    (this->StructureData).Data.Ptr = (void *)0x0;
    (this->StructureData).IndexType = None;
    *(undefined8 *)&this->CenterOfMass = 0;
    *(undefined4 *)&(this->CenterOfMass).field_0x8 = 0;
    *(undefined8 *)&this->RotationOfMass = 0;
    *(undefined8 *)&(this->RotationOfMass).field_0x8 = 0;
    *(undefined8 *)&(this->RotationOfMass).field_0x10 = 0;
    *(undefined8 *)&(this->RotationOfMass).field_0x18 = 0;
    if (local_48[0].ArrayNum != 0) {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      Chaos::FConvexBuilder::Build
                (local_48,&this->Planes,&local_58,&this->Vertices,&this->LocalBoundingBox,Default);
      Chaos::
      CalculateVolumeAndCenterOfMass<float,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                (&this->Vertices,&local_58,&this->Volume,&this->CenterOfMass);
      Chaos::FConvexBuilder::MergeFaces(&this->Planes,&local_58,&this->Vertices,__real_3f800000);
      Chaos::FConvexBuilder::MergeColinearEdges
                (&this->Planes,&local_58,&this->Vertices,__real_358637bd);
      Chaos::FConvex::CreateStructureData(this,&local_58,false);
      Chaos::FConvex::ComputeUnitMassInertiaTensorAndRotationOfMass(this,(double)this->Volume);
      *(undefined4 *)&this->_padding_ = 0;
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_58.AllocatorInstance.Data,
                 local_58.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_58.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
    }
    param_1->_padding_ = (longlong)this;
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  return (TRefCountPtr<Chaos::FConvex>)(FConvex *)param_1;
}

// GetConvexHullDataIfPresent @ 14403eef0

TOptional<FGeometryCollectionConvexUtility::FGeometryCollectionConvexData> * __cdecl
FGeometryCollectionConvexUtility::GetConvexHullDataIfPresent
          (TOptional<FGeometryCollectionConvexUtility::FGeometryCollectionConvexData>
           *__return_storage_ptr__,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TOptional<FGeometryCollectionConvexUtility::FGeometryCollectionConvexData> *pTVar4;
  FName *pFVar5;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar6;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar7;
  FName local_res10;
  FName local_res18;
  
  if (param_1 == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryCollection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                       ,0x7e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FGeometryCollectionConvexUtility::FGeometryCollectionConvexData> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  FVar2 = FTransformCollection::TransformGroup;
  pFVar5 = ::FName::FName(&local_res10,"TransformToConvexIndices");
  bVar3 = FManagedArrayCollection::HasAttribute(param_1,*pFVar5,FVar2);
  if (bVar3) {
    bVar3 = FManagedArrayCollection::HasAttribute
                      (param_1,FTransformCollection::ConvexHullAttribute,
                       FTransformCollection::ConvexGroup);
    FVar2 = FTransformCollection::TransformGroup;
    if (bVar3) {
      pFVar5 = ::FName::FName(&local_res18,"TransformToConvexIndices");
      pTVar6 = FManagedArrayCollection::
               ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                         (param_1,*pFVar5,FVar2);
      pTVar7 = FManagedArrayCollection::ModifyAttribute<TRefCountPtr<Chaos::FConvex>_>
                         (param_1,FTransformCollection::ConvexHullAttribute,
                          FTransformCollection::ConvexGroup);
      (__return_storage_ptr__->TypedValue).TransformToConvexIndices = pTVar6;
      (__return_storage_ptr__->TypedValue).ConvexHull = pTVar7;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetCustomConvexFlags @ 14403f350

TManagedArray<int> * __cdecl
FGeometryCollectionConvexUtility::GetCustomConvexFlags(FGeometryCollection *param_1,bool param_2)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  TManagedArray<int> *pTVar4;
  FName FVar5;
  FName local_res18 [2];
  undefined2 local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  FVar1 = FTransformCollection::TransformGroup;
  pFVar3 = ::FName::FName(local_res18,"HasCustomConvex");
  bVar2 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar3,FVar1);
  FVar1 = FTransformCollection::TransformGroup;
  if (bVar2) {
    pFVar3 = ::FName::FName(local_res18,"HasCustomConvex");
    FVar5 = *pFVar3;
  }
  else {
    if (!param_2) {
      return (TManagedArray<int> *)0x0;
    }
    local_res18[0].ComparisonIndex.Value = 0;
    local_res18[0].Number = 0;
    pFVar3 = ::FName::FName(local_res18,"HasCustomConvex");
    local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_18.GroupIndexDependency.Number = 0;
    FVar5 = *pFVar3;
    local_18.Saved = true;
    local_18.bAllowCircularDependency = false;
    local_18._10_2_ = uStack_1e;
    bVar2 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,FVar5,FVar1);
    if (!bVar2) {
      FManagedArrayCollection::AddNewAttributeImpl<int>
                ((FManagedArrayCollection *)param_1,FVar5,FVar1,&local_18);
    }
  }
  pTVar4 = FManagedArrayCollection::ModifyAttribute<int>
                     ((FManagedArrayCollection *)param_1,FVar5,FVar1);
  return pTVar4;
}

// GetValidConvexHullData @ 1440411b0

FGeometryCollectionConvexData * __cdecl
FGeometryCollectionConvexUtility::GetValidConvexHullData
          (FGeometryCollectionConvexData *__return_storage_ptr__,FGeometryCollection *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FGeometryCollectionConvexData *pFVar9;
  FName *pFVar10;
  TManagedArray<int> *pTVar11;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar12;
  TRefCountPtr<Chaos::FConvex> TVar13;
  FConvex *pFVar14;
  longlong lVar15;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint local_res18;
  uint local_res20;
  uint local_a8 [2];
  ForAnyElementType local_a0;
  undefined8 local_98;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *local_88;
  TManagedArray<int> *local_80;
  int local_78 [2];
  undefined1 local_70 [48];
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                         ,0x94,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
    return pFVar9;
  }
  CreateConvexHullAttributesIfNeeded((FManagedArrayCollection *)param_1);
  FVar4 = FTransformCollection::TransformGroup;
  pFVar10 = ::FName::FName((FName *)(local_70 + 8),"SimulationType");
  pTVar11 = FManagedArrayCollection::GetAttribute<int>
                      ((FManagedArrayCollection *)param_1,*pFVar10,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  pFVar10 = ::FName::FName((FName *)(local_70 + 0x10),"TransformToGeometryIndex");
  local_80 = FManagedArrayCollection::GetAttribute<int>
                       ((FManagedArrayCollection *)param_1,*pFVar10,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  pFVar10 = ::FName::FName((FName *)(local_70 + 0x18),"TransformToConvexIndices");
  pTVar12 = FManagedArrayCollection::
            ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                      ((FManagedArrayCollection *)param_1,*pFVar10,FVar4);
  local_88 = FManagedArrayCollection::ModifyAttribute<TRefCountPtr<Chaos::FConvex>_>
                       ((FManagedArrayCollection *)param_1,FTransformCollection::ConvexHullAttribute
                        ,FTransformCollection::ConvexGroup);
  uVar18 = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  uVar6 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (local_98._4_4_ < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&local_a0,(int)local_98,(int *)((longlong)&local_98 + 4));
  }
  local_a8[0] = 0;
  iVar7 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
  if ((int)local_a8[0] < iVar7) {
    do {
      lVar15 = (longlong)(int)local_a8[0];
      uVar6 = 0;
      if ((int)local_a8[0] < *(int *)&pTVar11->field_0x18) {
        uVar6 = ~local_a8[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
        return pFVar9;
      }
      if (*(int *)(*(longlong *)&pTVar11->field_0x10 + lVar15 * 4) == 1) {
        lVar15 = (longlong)(int)local_a8[0];
        uVar6 = 0;
        if ((int)local_a8[0] < *(int *)&pTVar12->field_0x18) {
          uVar6 = ~local_a8[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
          return pFVar9;
        }
        if (*(int *)(*(longlong *)&pTVar12->field_0x10 + 8 + lVar15 * 0x50) ==
            *(int *)(*(longlong *)&pTVar12->field_0x10 + 0x34 + lVar15 * 0x50)) {
          if (((local_a0.Data <= (FScriptContainerElement *)local_a8) &&
              ((FScriptContainerElement *)local_a8 < local_a0.Data + (longlong)local_98._4_4_ * 4))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
            return pFVar9;
          }
          iVar7 = (int)local_98;
          if ((int)local_98 == local_98._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_a0,(int *)((longlong)&local_98 + 4));
          }
          local_98 = CONCAT44(local_98._4_4_,iVar7 + 1);
          *(uint *)(local_a0.Data + (longlong)iVar7 * 4) = local_a8[0];
        }
      }
      local_a8[0] = local_a8[0] + 1;
      iVar7 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
    } while ((int)local_a8[0] < iVar7);
  }
  if ((int)local_98 != 0) {
    local_res20 = FManagedArrayCollection::AddElements
                            ((FManagedArrayCollection *)param_1,(int)local_98,
                             FTransformCollection::ConvexGroup);
    uVar20 = (ulonglong)(int)local_res20;
    if (0 < (int)local_98) {
      lVar15 = uVar20 * 8;
      uVar21 = uVar18;
      do {
        uVar17 = (uint)uVar18;
        uVar16 = ~uVar17 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar17 < (int)local_98) {
          uVar6 = uVar16;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
          return pFVar9;
        }
        uVar6 = 0;
        if ((int)*(uint *)(local_a0.Data + uVar21) < *(int *)&local_80->field_0x18) {
          uVar6 = ~*(uint *)(local_a0.Data + uVar21) >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
          return pFVar9;
        }
        TVar13 = GetConvexHull((FGeometryCollection *)local_70,(int)param_1);
        uVar19 = (int)uVar20 + uVar17;
        uVar6 = 0;
        if ((int)uVar19 < *(int *)&local_88->field_0x18) {
          uVar6 = ~uVar19 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
          return pFVar9;
        }
        pFVar14 = (FConvex *)(*(longlong *)&local_88->field_0x10 + lVar15);
        if (pFVar14 != TVar13.Reference) {
          puVar2 = (undefined8 *)pFVar14->_padding_;
          pFVar14->_padding_ = (TVar13.Reference)->_padding_;
          (TVar13.Reference)->_padding_ = 0;
          if (puVar2 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar2 + 1);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar7 == 1) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
        }
        if ((undefined8 *)local_70._0_8_ != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_70._0_8_ + 8);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar7 == 1) && (*(int *)(local_70._0_8_ + 0xc) == 0)) {
            (*(code *)**(undefined8 **)local_70._0_8_)(local_70._0_8_,1);
          }
        }
        uVar6 = 0;
        if ((int)uVar17 < (int)local_98) {
          uVar6 = uVar16;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
          return pFVar9;
        }
        uVar6 = *(uint *)(local_a0.Data + uVar21);
        uVar8 = 0;
        if ((int)uVar6 < *(int *)&pTVar12->field_0x18) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
          return pFVar9;
        }
        this = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               ((longlong)(int)uVar6 * 0x50 + *(longlong *)&pTVar12->field_0x10);
        if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this);
          *(undefined4 *)&(this->Elements).field_0x8 = 0;
          if (*(int *)&(this->Elements).field_0xc < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
          }
          *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
          *(undefined4 *)&(this->Elements).field_0x34 = 0;
          *(undefined4 *)&(this->Elements).field_0x28 = 0;
        }
        uVar6 = 0;
        if ((int)uVar17 < (int)local_98) {
          uVar6 = uVar16;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
          return pFVar9;
        }
        uVar6 = *(uint *)(local_a0.Data + uVar21);
        uVar16 = 0;
        if ((int)uVar6 < *(int *)&pTVar12->field_0x18) {
          uVar16 = ~uVar6 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FGeometryCollectionConvexData *)(*pcVar3)();
          return pFVar9;
        }
        local_res18 = uVar19;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   ((longlong)(int)uVar6 * 0x50 + *(longlong *)&pTVar12->field_0x10),local_78,
                   (bool *)&local_res18);
        uVar18 = (ulonglong)(uVar17 + 1);
        uVar20 = (ulonglong)local_res20;
        lVar15 = lVar15 + 8;
        uVar21 = uVar21 + 4;
      } while ((int)(uVar17 + 1) < (int)local_98);
    }
  }
  __return_storage_ptr__->TransformToConvexIndices = pTVar12;
  __return_storage_ptr__->ConvexHull = local_88;
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return __return_storage_ptr__;
}

// HasConvexHullData @ 144043840

bool __cdecl FGeometryCollectionConvexUtility::HasConvexHullData(FManagedArrayCollection *param_1)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res10 [3];
  
  FVar1 = FTransformCollection::TransformGroup;
  pFVar3 = ::FName::FName(local_res10,"TransformToConvexIndices");
  bVar2 = FManagedArrayCollection::HasAttribute(param_1,*pFVar3,FVar1);
  if (bVar2) {
    bVar2 = FManagedArrayCollection::HasAttribute
                      (param_1,FTransformCollection::ConvexHullAttribute,
                       FTransformCollection::ConvexGroup);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// MergeHullsOnTransforms @ 144046d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FGeometryCollectionConvexUtility::MergeHullsOnTransforms
          (FManagedArrayCollection *param_1,FMergeConvexHullSettings *param_2,bool param_3,
          TArrayView<int_const_,int> *param_4,FSphereCovering *param_5)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FSphereCovering *pFVar6;
  FDynamicMesh3 *this;
  undefined8 *puVar7;
  code *pcVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FMergeConvexHullSettings *pFVar17;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar18;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar19;
  longlong *plVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar27;
  ulong64 uVar28;
  FConvex *this_00;
  byte bVar29;
  ulonglong uVar30;
  undefined ***pppuVar31;
  ulonglong uVar32;
  int iVar33;
  longlong lVar34;
  longlong *plVar35;
  ForAnyElementType FVar36;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  FConvex *pFVar37;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar38;
  FScriptContainerElement *pFVar39;
  TBitArray<FDefaultBitArrayAllocator> *pTVar40;
  int iVar41;
  uint uVar42;
  longlong lVar43;
  FSphereCovering *pFVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStackY_978 [32];
  int local_928;
  undefined1 local_924;
  undefined1 local_923;
  undefined1 local_922 [2];
  ForAnyElementType local_920;
  undefined8 local_918;
  TArray<int,TSizedDefaultAllocator<32>_> local_910;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_900;
  uint local_8ec;
  int local_8e8;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_8e0;
  FSphereCovering local_8d8;
  FScriptContainerElement *local_8b8;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_8b0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_8a0;
  undefined8 local_890;
  FMergeConvexHullSettings *local_888;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_880;
  uint local_870;
  uint local_86c;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *local_868;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_860;
  int local_850;
  uint uStack_84c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_848;
  undefined4 local_840;
  int iStack_83c;
  int iStack_838;
  undefined4 uStack_834;
  FManagedArrayCollection *local_830;
  longlong *local_828;
  longlong lStack_820;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_818;
  longlong lStack_810;
  longlong lStack_808;
  int local_800;
  undefined4 uStack_7fc;
  FScriptContainerElement *local_7f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7d0;
  int local_7b0;
  int local_7ac;
  longlong local_7a8;
  FSphereCovering *local_7a0;
  FSphereCovering *local_798;
  ForAnyElementType *local_790;
  ForAnyElementType *local_788;
  ForAnyElementType *local_780;
  ForAnyElementType *local_778;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_770;
  undefined1 local_738 [12];
  uint uStack_72c;
  TBitArray<FDefaultBitArrayAllocator> *local_728;
  undefined8 uStack_720;
  longlong local_718;
  undefined8 uStack_710;
  longlong *local_708;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_700;
  undefined8 uStack_6e0;
  code *local_6d8;
  ForAnyElementType **local_6d0;
  TTuple<int,int> *local_6c8;
  int iStack_6c0;
  undefined4 uStack_6bc;
  code *local_6b8;
  ForAnyElementType **local_6b0;
  code *local_6a8;
  ForAnyElementType **local_6a0;
  code *local_698;
  ForAnyElementType **local_690;
  TOptional<FGeometryCollectionConvexUtility::FGeometryCollectionConvexData> local_688;
  undefined1 local_670 [24];
  longlong lStack_658;
  longlong lStack_650;
  int local_648;
  undefined4 uStack_644;
  longlong local_640;
  TArrayView<TTuple<int,int>_const_,int> local_638;
  TRangedForIterator local_628;
  FCollectionTransformFacade local_5f8;
  FDynamicMesh3 local_508;
  undefined1 local_2d8 [48];
  undefined **local_2a8;
  code *local_2a0;
  undefined ***local_290;
  double local_288;
  TDynamicVector<int,512> local_280;
  TDynamicVector<UE::Math::TVector<double>,512> local_268;
  TDynamicVector<UE::Math::TVector<double>,512> local_250;
  TDynamicVector<int,512> local_238;
  longlong local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  int local_1e0;
  undefined2 local_1dc;
  double local_1d8;
  int local_1d0;
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
  local_1c8;
  TQuaternion<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  ForAnyElementType local_168;
  undefined8 local_160;
  undefined1 local_158 [32];
  void *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 local_124;
  void *local_118;
  undefined4 local_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_978;
  local_7a0 = param_5;
  local_888 = param_2;
  local_830 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ConvexGroupName = FTransformCollection::ConvexGroup;
    _Init_thread_footer(&::_TSS0);
  }
  GetConvexHullDataIfPresent(&local_688,param_1);
  if (local_688.bIsSet != false) {
    local_8e0 = local_688.TypedValue.TransformToConvexIndices;
    local_868 = local_688.TypedValue.ConvexHull;
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&local_5f8,param_1);
    GeometryCollection::Facades::FCollectionTransformFacade::ComputeCollectionSpaceTransforms
              (&local_5f8,&local_860);
    local_910.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_910.ArrayNum = 0;
    local_910.ArrayMax = 0;
    if (param_3) {
      TArray<int,TSizedDefaultAllocator<32>_>::Append<TArrayView<int_const_,int>_const_&>
                (&local_910,param_4);
    }
    else {
      uVar22 = (**(code **)(*(longlong *)local_688.TypedValue.TransformToConvexIndices + 0x60))
                         (local_688.TypedValue.TransformToConvexIndices);
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if (local_910.ArrayMax < (int)uVar22) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar22,&local_910.AllocatorInstance,local_910.ArrayNum,&local_910.ArrayMax);
      }
      local_928 = 0;
      iVar41 = (**(code **)(*(longlong *)local_688.TypedValue.TransformToConvexIndices + 0x60))
                         (local_688.TypedValue.TransformToConvexIndices);
      if (local_928 < iVar41) {
        do {
          if (((local_910.AllocatorInstance.Data <= (FScriptContainerElement *)&local_928) &&
              ((FScriptContainerElement *)&local_928 <
               local_910.AllocatorInstance.Data + (longlong)local_910.ArrayMax * 4)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar41 = local_910.ArrayNum;
          if (local_910.ArrayNum == local_910.ArrayMax) {
            iVar41 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_910.AllocatorInstance,&local_910.ArrayMax);
          }
          local_910.ArrayNum = iVar41 + 1;
          *(int *)(local_910.AllocatorInstance.Data + (longlong)iVar41 * 4) = local_928;
          local_928 = local_928 + 1;
          iVar41 = (**(code **)(*(longlong *)local_688.TypedValue.TransformToConvexIndices + 0x60))
                             (local_688.TypedValue.TransformToConvexIndices);
        } while (local_928 < iVar41);
      }
    }
    if (param_5 != (FSphereCovering *)0x0) {
      (param_5->Position).ArrayNum = 0;
      if ((param_5->Position).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)param_5,0,&(param_5->Position).ArrayMax);
      }
      (param_5->Radius).ArrayNum = 0;
      if ((param_5->Radius).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(param_5->Radius).AllocatorInstance,0,&(param_5->Radius).ArrayMax);
      }
      if (param_2->EmptySpace != (FSphereCovering *)0x0) {
        UE::Geometry::FSphereCovering::Append(param_5,param_2->EmptySpace);
      }
    }
    dVar16 = _UNK_150b37cc8;
    dVar15 = ___xmm_4065400000000000403e000000000000;
    dVar14 = __real_4000000000000000;
    fVar13 = __real_358637bd;
    dVar12 = _UNK_15061cbc8;
    dVar11 = ___xmm_3ff00000000000000000000000000000;
    fVar10 = __real_3f800000;
    dVar9 = __real_3e45798ee2308c3a;
    uVar30 = (ulonglong)local_910.ArrayNum;
    local_8b8 = local_910.AllocatorInstance.Data + uVar30 * 4;
    uVar47 = (undefined4)__real_3fb999999999999a;
    uVar48 = (undefined4)((ulonglong)__real_3fb999999999999a >> 0x20);
    local_86c = local_910.ArrayNum;
    FVar36.Data = local_910.AllocatorInstance.Data;
    pTVar38 = local_688.TypedValue.TransformToConvexIndices;
    pFVar39 = local_8b8;
    auVar45 = ___xmm_3fefae147ae147ae3e7ad7f29abcaf48;
    auVar46 = ___xmm_3f50624dd2f1a9fc3f50624dd2f1a9fc;
    while( true ) {
      local_7f8 = FVar36.Data;
      if (local_910.ArrayNum != (int)uVar30) {
        local_924 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_924);
      }
      if (FVar36.Data == pFVar39) break;
      uVar22 = *(uint *)FVar36.Data;
      lVar43 = (longlong)(int)uVar22;
      uVar42 = ~uVar22 >> 0x1f;
      uVar23 = 0;
      if ((int)uVar22 < *(int *)&pTVar38->field_0x18) {
        uVar23 = uVar42;
      }
      local_8ec = uVar42;
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar34 = lVar43 * 0x50;
      iVar41 = *(int *)(lVar34 + 8 + *(longlong *)&pTVar38->field_0x10) -
               *(int *)(lVar34 + 0x34 + *(longlong *)&pTVar38->field_0x10);
      local_8e8 = iVar41;
      local_7a8 = lVar34;
      if (iVar41 < 2) {
LAB_144047da7:
        uVar30 = (ulonglong)local_86c;
        FVar36.Data = local_7f8 + 4;
      }
      else {
        local_920.Data = (FScriptContainerElement *)0x0;
        local_918 = 0;
        uVar23 = 0;
        if ((int)uVar22 < *(int *)&pTVar38->field_0x18) {
          uVar23 = uVar42;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar35 = (longlong *)(lVar34 + *(longlong *)&pTVar38->field_0x10);
        local_7d0._padding_._0_4_ = 0;
        local_7d0._padding_._4_4_ = 1;
        local_7d0.UnvisitedBitMask = 0xffffffff;
        pTVar40 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar35 + 2);
        local_7d0.CurrentBitIndex = 0;
        local_7d0.BaseBitIndex = 0;
        local_7d0.Array = pTVar40;
        if ((int)plVar35[5] != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7d0);
        }
        unique0x1000192f =
             (TBitArray<FDefaultBitArrayAllocator> *)
             CONCAT44(local_7d0._padding_._4_4_,(undefined4)local_7d0._padding_);
        uStack_720 = CONCAT44(local_7d0.CurrentBitIndex,local_7d0.UnvisitedBitMask);
        local_718 = CONCAT44(local_7d0._28_4_,local_7d0.BaseBitIndex);
        local_648 = (int)plVar35[1] - *(int *)((longlong)plVar35 + 0x34);
        local_670._16_8_ = local_7d0.Array;
        uStack_710._4_4_ = uStack_644;
        uStack_710._0_4_ = local_648;
        local_728 = local_7d0.Array;
        local_738._0_8_ = plVar35;
        local_670._0_8_ = plVar35;
        local_670._8_8_ = unique0x1000192f;
        lStack_658 = uStack_720;
        lStack_650 = local_718;
        pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_670,pTVar40,
                             (int)plVar35[5]);
        lStack_820 = pTVar27->_padding_;
        pTStack_818 = pTVar27->Array;
        lStack_810._0_4_ = pTVar27->UnvisitedBitMask;
        lStack_810._4_4_ = pTVar27->CurrentBitIndex;
        lStack_808 = *(longlong *)&pTVar27->BaseBitIndex;
        local_800 = (int)plVar35[1] - *(int *)((longlong)plVar35 + 0x34);
        local_628._44_4_ = uStack_7fc;
        local_628.InitialNum = local_800;
        local_828 = plVar35;
        local_628._padding_ = (longlong)plVar35;
        local_628._padding_ = lStack_820;
        local_628._padding_ = (longlong)pTStack_818;
        local_628._padding_ = lStack_810;
        local_628._padding_ = lStack_808;
        bVar21 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_738,&local_628);
        pTVar18 = local_868;
        if (bVar21) {
          do {
            uVar23 = *(uint *)(*(longlong *)local_738._0_8_ + (longlong)uStack_720._4_4_ * 0xc);
            uVar24 = 0;
            if ((int)uVar23 < *(int *)&pTVar18->field_0x18) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_890 = *(undefined8 *)
                         (*(longlong *)&pTVar18->field_0x10 + (longlong)(int)uVar23 * 8);
            if (((local_920.Data <= (FScriptContainerElement *)&local_890) &&
                ((FScriptContainerElement *)&local_890 <
                 local_920.Data + (longlong)local_918._4_4_ * 8)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar25 = (int)local_918;
            if ((int)local_918 == local_918._4_4_) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_920,(int *)((longlong)&local_918 + 4));
            }
            local_918 = CONCAT44(local_918._4_4_,iVar25 + 1);
            *(undefined8 *)(local_920.Data + (longlong)iVar25 * 8) = local_890;
            uStack_720 = CONCAT44(uStack_720._4_4_,(uint)uStack_720 & ~uStack_72c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_738 + 8));
            bVar21 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_738,&local_628);
          } while (bVar21);
        }
        local_8b0.ArrayNum = 0;
        local_8b0.ArrayMax = 0;
        local_8b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar25 = 0;
        do {
          uVar23 = 0;
          if ((int)uVar22 < local_860.ArrayNum) {
            uVar23 = uVar42;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_780 = &local_920;
          iVar33 = iVar25 + 1;
          local_6d0 = &local_780;
          local_6d8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FGeometryCollectionConvexUtility::MergeHullsOnTransforms'::__l31::<lambda_1>,Chaos::FConvex_const_*,int>
                      ::Call;
          ::`anonymous_namespace'::
          AddHullProximity<enum__anonymous_namespace_::EUseConstantTransform,TArray<int,TSizedDefaultAllocator<32>_>_>
                    (&local_8b0,local_888->ProximityFilter,local_888->ProximityDistanceThreshold,
                     (TFunctionRef<Chaos::FConvex_const_*___cdecl(int)> *)&local_6d8,
                     (TTransform<double> *)(local_860.AllocatorInstance.Data + lVar43 * 0x60),iVar25
                     ,ConstantTransform,iVar33,iVar41,(TArray<int,TSizedDefaultAllocator<32>_> *)0x0
                    );
          iVar25 = iVar33;
        } while (iVar33 < iVar41);
        iVar25 = local_8b0.ArrayNum;
        local_778 = &local_920;
        local_1e8 = (double)CONCAT44(uVar48,uVar47);
        local_1b8._s_0.X = 0.0;
        local_1b8._s_0.Y = 0.0;
        local_790 = &local_920;
        local_788 = &local_920;
        local_1d8 = 0.0;
        local_1f8 = dVar15;
        dStack_1f0 = dVar16;
        local_1e0 = 0x32;
        local_1dc._0_1_ = true;
        local_1dc._1_1_ = true;
        local_1d0 = -1;
        local_1c8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Array.ArrayNum = 0;
        local_1c8.Array.ArrayMax = 0;
        local_1b8._s_0.Z = dVar11;
        local_1b8._s_0.W = dVar12;
        local_168.Data = (FScriptContainerElement *)0x0;
        local_160._0_4_ = 0;
        local_160._4_4_ = 0;
        local_158._0_8_ = (FScriptContainerElement *)0x0;
        local_158._8_8_ = 0;
        local_138 = (void *)0x0;
        local_130 = 0;
        local_12c = 0x80;
        local_128 = 0xffffffff;
        local_124 = 0;
        local_118 = (void *)0x0;
        local_110 = 0;
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100._0_4_ = 0;
        local_100._4_4_ = 0;
        local_f8.Data = (FScriptContainerElement *)0x0;
        local_f0._0_4_ = 0;
        local_f0._4_4_ = 0;
        local_6c8 = (TTuple<int,int> *)local_8b0.AllocatorInstance.Data;
        local_180._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_180._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_180._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_218 = auVar46;
        local_208 = auVar45;
        if ((local_8b0.ArrayNum < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_6b0 = &local_788;
        iStack_6c0 = iVar25;
        local_638._12_4_ = uStack_6bc;
        local_638.ArrayNum = iVar25;
        local_6b8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryCollectionConvexUtility::MergeHullsOnTransforms'::__l22::<lambda_4>_const_,UE::Math::TVector<double>,int,int>
                    ::Call;
        local_6a0 = &local_790;
        local_638.DataPtr = local_6c8;
        local_6a8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryCollectionConvexUtility::MergeHullsOnTransforms'::__l22::<lambda_3>_const_,int,int>
                    ::Call;
        local_690 = &local_778;
        local_698 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryCollectionConvexUtility::MergeHullsOnTransforms'::__l22::<lambda_2>_const_,double,int>
                    ::Call;
        UE::Geometry::FConvexDecomposition3::InitializeFromHulls
                  ((FConvexDecomposition3 *)local_218,(int)local_918,
                   (TFunctionRef<double___cdecl(int)> *)&local_698,
                   (TFunctionRef<int___cdecl(int)> *)&local_6a8,
                   (TFunctionRef<UE::Math::TVector<double>___cdecl(int,int)> *)&local_6b8,&local_638
                  );
        local_8d8.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_8d8.Position.ArrayNum = 0;
        local_8d8.Position.ArrayMax = 0;
        local_8d8.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar44 = local_888->EmptySpace;
        local_8d8.Radius.ArrayNum = 0;
        local_8d8.Radius.ArrayMax = 0;
        if (local_888->ComputeEmptySpacePerBoneSettings != (FNegativeSpaceSampleSettings *)0x0) {
          local_798 = &local_8d8;
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_508);
          uVar42 = local_8ec;
          iVar41 = (int)local_918;
          uVar30 = (ulonglong)(int)local_918;
          pFVar39 = local_920.Data + uVar30 * 8;
          FVar36.Data = local_920.Data;
          while( true ) {
            if ((int)uVar30 != iVar41) {
              local_923 = 0;
              `TCheckedPointerIterator<Chaos::FConvex_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_923);
            }
            if (FVar36.Data == pFVar39) break;
            pFVar37 = *(FConvex **)FVar36.Data;
            uVar23 = 0;
            if ((int)uVar22 < local_860.ArrayNum) {
              uVar23 = uVar42;
            }
            if ((uVar23 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            ::`anonymous_namespace'::AddConvexHullToCompactDynamicMesh
                      (pFVar37,&local_508,
                       (TTransform<double> *)(local_860.AllocatorInstance.Data + lVar43 * 0x60),
                       false);
            uVar30 = local_918 & 0xffffffff;
            FVar36.Data = FVar36.Data + 8;
          }
          local_288 = dVar9;
          local_2d8._16_8_ = 0;
          local_2d8._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
          local_2d8._24_4_ = 3;
          local_2a8 = &
                      ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
          ;
          local_2a0 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                      MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
          local_2d8._32_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
               ::Call;
          local_290 = (undefined ***)0x0;
          local_280.CurBlock = 0;
          local_280.CurBlockUsed = 0;
          local_280.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_280.Blocks.ArrayNum = 0;
          local_280.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_280);
          local_268.CurBlock = 0;
          local_268.CurBlockUsed = 0;
          local_268.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_268.Blocks.ArrayNum = 0;
          local_268.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_268)
          ;
          local_250.CurBlock = 0;
          local_250.CurBlockUsed = 0;
          local_250.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_250.Blocks.ArrayNum = 0;
          local_250.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_250)
          ;
          local_238.CurBlock = 0;
          local_238.CurBlockUsed = 0;
          local_238.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.Blocks.ArrayNum = 0;
          local_238.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_238);
          local_2d8._8_8_ = &local_508;
          local_220 = -1;
          local_2d8._16_8_ = 0;
          UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                    ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_2d8,false);
          local_2d8._16_8_ =
               UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_2d8._8_8_);
          pFVar44 = local_798;
          iVar41 = local_8e8;
          local_770.Tree = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_2d8;
          local_770.FWNBeta = dVar14;
          local_770.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_770.FastWindingCache.ArrayNum = 0;
          local_770.FastWindingCache.ArrayMax = 0;
          local_770.FastWindingCacheOffset = 0;
          local_770.FastWindingCacheMeshChangeStamp = 0;
          local_770.FWNApproxOrder = 2;
          if ((local_220 < 0) ||
             (uVar28 = UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_2d8._8_8_)
             , local_2d8._16_8_ != uVar28)) {
            pTVar19 = local_770.Tree;
            UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                      (local_770.Tree,false);
            uVar28 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar19->Mesh);
            pTVar19->MeshChangeStamp = uVar28;
          }
          UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
                    (&local_770);
          pFVar17 = local_888;
          local_770.FastWindingCacheMeshChangeStamp = (local_770.Tree)->MeshChangeStamp;
          UE::Geometry::FSphereCovering::AddNegativeSpace
                    (&local_8d8,&local_770,local_888->ComputeEmptySpacePerBoneSettings,true);
          pFVar6 = pFVar17->EmptySpace;
          if (pFVar6 != (FSphereCovering *)0x0) {
            if ((&local_8d8 == pFVar6) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar25 = (pFVar6->Position).ArrayNum;
            if (iVar25 != 0) {
              iVar33 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x18,8,iVar25,(ForAnyElementType *)&local_8d8,
                                  &local_8d8.Position.ArrayNum,&local_8d8.Position.ArrayMax);
              memcpy(local_8d8.Position.AllocatorInstance.Data + (longlong)iVar33 * 0x18,
                     (pFVar6->Position).AllocatorInstance.Data,(longlong)iVar25 * 0x18);
            }
            if ((&local_8d8.Radius == &pFVar6->Radius) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar25 = (pFVar6->Radius).ArrayNum;
            if (iVar25 != 0) {
              iVar33 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (8,8,iVar25,&local_8d8.Radius.AllocatorInstance,
                                  &local_8d8.Radius.ArrayNum,&local_8d8.Radius.ArrayMax);
              memcpy(local_8d8.Radius.AllocatorInstance.Data + (longlong)iVar33 * 8,
                     (pFVar6->Radius).AllocatorInstance.Data,(longlong)iVar25 << 3);
            }
          }
          pFVar6 = local_7a0;
          if (local_7a0 != (FSphereCovering *)0x0) {
            if ((local_7a0 == &local_8d8) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar34 = (longlong)local_8d8.Position.ArrayNum;
            if (local_8d8.Position.ArrayNum != 0) {
              iVar25 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x18,8,local_8d8.Position.ArrayNum,(ForAnyElementType *)pFVar6,
                                  &(pFVar6->Position).ArrayNum,&(pFVar6->Position).ArrayMax);
              memcpy((pFVar6->Position).AllocatorInstance.Data + (longlong)iVar25 * 0x18,
                     local_8d8.Position.AllocatorInstance.Data,lVar34 * 0x18);
            }
            pTVar1 = &pFVar6->Radius;
            if ((pTVar1 == &local_8d8.Radius) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar34 = (longlong)local_8d8.Radius.ArrayNum;
            if (local_8d8.Radius.ArrayNum != 0) {
              iVar25 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (8,8,local_8d8.Radius.ArrayNum,&pTVar1->AllocatorInstance,
                                  &(pFVar6->Radius).ArrayNum,&(pFVar6->Radius).ArrayMax);
              memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar25 * 8,
                     local_8d8.Radius.AllocatorInstance.Data,lVar34 << 3);
            }
          }
          if (local_770.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_770.FastWindingCache.AllocatorInstance.Data);
          }
          UE::Geometry::TDynamicVector<int,512>::Empty(&local_238,0);
          if (local_238.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Blocks.AllocatorInstance.Data);
          }
          UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_250,0);
          if (local_250.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Blocks.AllocatorInstance.Data);
          }
          UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_268,0);
          if (local_268.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Blocks.AllocatorInstance.Data);
          }
          UE::Geometry::TDynamicVector<int,512>::Empty(&local_280,0);
          if (local_280.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.Blocks.AllocatorInstance.Data);
          }
          if ((code *)local_2d8._32_8_ != (code *)0x0) {
            pppuVar31 = &local_2a8;
            if (local_290 != (undefined ***)0x0) {
              pppuVar31 = local_290;
            }
            (*(code *)(*pppuVar31)[2])();
          }
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_508);
          uVar42 = local_8ec;
        }
        pFVar17 = local_888;
        uVar23 = 0;
        if ((int)uVar22 < local_860.ArrayNum) {
          uVar23 = uVar42;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar25 = pFVar17->MaxConvexCount;
        UE::Geometry::FConvexDecomposition3::MergeBest
                  ((FConvexDecomposition3 *)local_218,iVar25,pFVar17->ErrorToleranceInCm,0.0,true,
                   false,iVar25,pFVar44,
                   (TTransform<double> *)(local_860.AllocatorInstance.Data + lVar43 * 0x60));
        pTVar38 = local_8e0;
        if (local_1c8.Array.ArrayNum < 1) {
          bVar21 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2076966675911018900>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                              ,0x994,"ConvexDecomposition.Decomposition.Num() > 0");
          if (bVar21) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (local_8d8.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d8.Radius.AllocatorInstance.Data);
          }
          if (local_8d8.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d8.Position.AllocatorInstance.Data);
          }
          if (local_f8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data);
          }
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          local_110 = 0;
          if (local_118 != (void *)0x0) {
            FMemory::Free(local_118);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_158);
          if (local_168.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data);
          }
          TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
          ::
          ~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                    (&local_1c8);
LAB_144047d82:
          if (local_8b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8b0.AllocatorInstance.Data);
          }
          pTVar38 = local_8e0;
          pFVar39 = local_8b8;
          if (local_920.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_920.Data);
            pTVar38 = local_8e0;
            pFVar39 = local_8b8;
          }
          goto LAB_144047da7;
        }
        if (iVar41 <= local_1c8.Array.ArrayNum) {
          if (local_8d8.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d8.Radius.AllocatorInstance.Data);
          }
          if (local_8d8.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d8.Position.AllocatorInstance.Data);
          }
          if (local_f8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data);
          }
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          local_110 = 0;
          if (local_118 != (void *)0x0) {
            FMemory::Free(local_118);
          }
          bVar21 = local_158._12_4_ != 0;
          local_158._8_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
          if (bVar21) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
          }
          local_128 = 0xffffffff;
          local_124 = 0;
          local_130 = 0;
          if (0x80 < local_12c) {
            local_12c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
          }
          if (local_138 != (void *)0x0) {
            FMemory::Free(local_138);
          }
          if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_158._0_8_);
          }
          if (local_168.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data);
          }
          FVar36.Data = local_1c8.Array.AllocatorInstance.Data;
          for (iVar41 = local_1c8.Array.ArrayNum; iVar41 != 0; iVar41 = iVar41 + -1) {
            this = *(FDynamicMesh3 **)FVar36.Data;
            if (this != (FDynamicMesh3 *)0x0) {
              pFVar39 = this[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
              if (pFVar39 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar39);
              }
              pFVar39 = this[1].Vertices.Blocks.AllocatorInstance.Data;
              if (pFVar39 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar39);
              }
              if ((void *)this[1]._padding_ != (void *)0x0) {
                FMemory::Free((void *)this[1]._padding_);
              }
              UE::Geometry::FDynamicMesh3::~FDynamicMesh3(this);
              ::operator_delete(this,0x2e0);
            }
            FVar36.Data = FVar36.Data + 8;
          }
          uVar30 = (ulonglong)local_1c8.Array._8_8_ >> 0x20;
          local_1c8.Array._8_8_ = local_1c8.Array._8_8_ & 0xffffffff00000000;
          if ((int)uVar30 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)&local_1c8,0,&local_1c8.Array.ArrayMax);
          }
          if (local_1c8.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Array.AllocatorInstance.Data);
          }
          goto LAB_144047d82;
        }
        uVar23 = 0;
        if ((int)uVar22 < *(int *)&local_8e0->field_0x18) {
          uVar23 = uVar42;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uStack_84c = 1;
        plVar35 = (longlong *)(lVar43 * 0x50 + *(longlong *)&pTVar38->field_0x10);
        iVar41 = (int)plVar35[5];
        pTStack_848 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar35 + 2);
        local_850 = 0;
        iStack_83c = 0;
        iStack_838 = 0;
        if (iVar41 != 0) {
          pTVar40 = pTStack_848;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar35[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar40 = (TBitArray<FDefaultBitArrayAllocator> *)plVar35[4];
          }
          uVar42 = *(uint *)(pTVar40->AllocatorInstance).InlineData;
          while (uVar42 == 0) {
            iStack_838 = iStack_838 + 0x20;
            lVar34 = (longlong)local_850;
            local_850 = local_850 + 1;
            if ((int)(iVar41 + -1 + (iVar41 + -1 >> 0x1f & 0x1fU)) >> 5 < local_850)
            goto LAB_144048080;
            uVar42 = *(uint *)((pTVar40->AllocatorInstance).InlineData + lVar34 * 4 + 4);
          }
          uStack_84c = -uVar42 & uVar42;
          uVar30 = (ulonglong)uStack_84c * 2 + 1;
          lVar34 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          local_7b0 = (int)lVar34;
          iStack_83c = iStack_838 + -1 + local_7b0;
          if (iVar41 < iStack_83c) {
LAB_144048080:
            iStack_83c = iVar41;
          }
        }
        local_840 = 0xffffffff;
        uVar42 = *(uint *)(plVar35 + 5);
        lStack_820 = CONCAT44(uStack_84c,local_850);
        bVar29 = (byte)uVar42 & 0x1f;
        local_800 = (int)plVar35[1] - *(int *)((longlong)plVar35 + 0x34);
        lStack_810._4_4_ = iStack_83c;
        lStack_810._0_4_ = 0xffffffff;
        lStack_808._4_4_ = uStack_834;
        lStack_808._0_4_ = iStack_838;
        local_7f0._padding_._0_4_ = (int)uVar42 >> 5;
        local_7f0._padding_._4_4_ = 1 << bVar29;
        local_7f0.UnvisitedBitMask = -1 << bVar29;
        local_7f0.BaseBitIndex = uVar42 & 0xffffffe0;
        uStack_6e0 = CONCAT44(uStack_7fc,local_800);
        local_828 = plVar35;
        pTStack_818 = pTStack_848;
        local_7f0.Array = pTStack_848;
        local_7f0.CurrentBitIndex = uVar42;
        local_708 = plVar35;
        TStack_700._padding_ = lStack_820;
        TStack_700.Array = pTStack_848;
        TStack_700._16_8_ = lStack_810;
        TStack_700._24_8_ = lStack_808;
        if ((((int)uVar42 < 0) || (iVar41 < (int)uVar42)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (uVar42 != *(uint *)(plVar35 + 5)) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7f0);
        }
        iVar41 = local_7f0.CurrentBitIndex;
        pTVar40 = local_7f0.Array;
        pTVar18 = local_868;
        lStack_820 = CONCAT44(local_7f0._padding_._4_4_,(int)local_7f0._padding_);
        lStack_810 = CONCAT44(local_7f0.CurrentBitIndex,local_7f0.UnvisitedBitMask);
        lStack_808 = CONCAT44(local_7f0._28_4_,local_7f0.BaseBitIndex);
        pTStack_818 = local_7f0.Array;
        while( true ) {
          plVar20 = local_708;
          if ((int)local_708[1] - *(int *)((longlong)local_708 + 0x34) != (int)uStack_6e0) {
            local_922[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_922);
          }
          pTVar38 = local_8e0;
          if (((TStack_700.CurrentBitIndex == iVar41) && (TStack_700.Array == pTVar40)) &&
             (plVar20 == plVar35)) break;
          uVar42 = *(uint *)(*plVar20 + (longlong)TStack_700.CurrentBitIndex * 0xc);
          uVar23 = 0;
          if ((int)uVar42 < *(int *)&pTVar18->field_0x18) {
            uVar23 = ~uVar42 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar34 = *(longlong *)&pTVar18->field_0x10;
          puVar7 = *(undefined8 **)(lVar34 + (longlong)(int)uVar42 * 8);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar34 + (longlong)(int)uVar42 * 8) = 0;
            LOCK();
            piVar2 = (int *)(puVar7 + 1);
            iVar25 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((iVar25 == 1) && (*(int *)((longlong)puVar7 + 0xc) == 0)) {
              (**(code **)*puVar7)(puVar7,1);
            }
          }
          TStack_700.UnvisitedBitMask = TStack_700.UnvisitedBitMask & ~TStack_700._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_700);
        }
        iVar41 = 0;
        uVar42 = 0;
        if ((int)uVar22 < *(int *)&local_8e0->field_0x18) {
          uVar42 = local_8ec;
        }
        if ((uVar42 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_01 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                  (lVar43 * 0x50 + *(longlong *)&pTVar38->field_0x10);
        if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_01);
          *(undefined4 *)&(this_01->Elements).field_0x8 = 0;
          if (*(int *)&(this_01->Elements).field_0xc < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)this_01,0,(int *)&(this_01->Elements).field_0xc)
            ;
          }
          *(undefined4 *)&(this_01->Elements).field_0x30 = 0xffffffff;
          *(undefined4 *)&(this_01->Elements).field_0x34 = 0;
          *(undefined4 *)&(this_01->Elements).field_0x28 = 0;
        }
        if (0 < local_1c8.Array.ArrayNum) {
          do {
            local_900.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_900.ArrayNum = 0;
            local_900.ArrayMax = 0;
            UE::Geometry::FConvexDecomposition3::GetVertices<double>
                      ((FConvexDecomposition3 *)local_218,&local_880,iVar41,true);
            iVar25 = local_880.ArrayNum;
            uVar30 = (ulonglong)(uint)local_880.ArrayNum;
            uVar32 = (ulonglong)local_900.ArrayNum;
            if (local_900.ArrayNum < local_880.ArrayNum) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,local_880.ArrayNum - local_900.ArrayNum,&local_900.AllocatorInstance,
                         &local_900.ArrayNum,&local_900.ArrayMax);
LAB_144048435:
              uVar30 = (ulonglong)(uint)local_880.ArrayNum;
              uVar32 = local_900._8_8_ & 0xffffffff;
            }
            else {
              if (local_880.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum(uVar30);
              }
              if (local_880.ArrayNum < local_900.ArrayNum) {
                uVar42 = local_900.ArrayNum - local_880.ArrayNum;
                if ((int)(local_880.ArrayNum | uVar42) < 0) {
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     );
                  if (bVar21) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar30 = (ulonglong)(uint)local_880.ArrayNum;
                  uVar32 = local_900._8_8_ & 0xffffffff;
                }
                if (uVar42 != 0) {
                  iVar26 = ((int)uVar32 - uVar42) - iVar25;
                  iVar33 = (int)uVar32;
                  if (iVar26 != 0) {
                    memmove(local_900.AllocatorInstance.Data + (longlong)iVar25 * 0xc,
                            local_900.AllocatorInstance.Data + (longlong)iVar25 * 0xc +
                            (longlong)(int)uVar42 * 0xc,(longlong)iVar26 * 0xc);
                    iVar33 = local_900.ArrayNum;
                  }
                  local_900.ArrayNum = iVar33 - uVar42;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,&local_900.AllocatorInstance,iVar33 - uVar42,&local_900.ArrayMax)
                  ;
                  goto LAB_144048435;
                }
              }
            }
            uVar42 = 0;
            if (0 < (int)uVar30) {
              lVar34 = 0;
              lVar43 = 0;
              while( true ) {
                uVar23 = 0;
                if ((int)uVar42 < (int)uVar30) {
                  uVar23 = ~uVar42 >> 0x1f;
                }
                iVar25 = (int)uVar32;
                if (uVar23 == 0) {
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar21) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar25 = local_900.ArrayNum;
                }
                dVar3 = *(double *)(local_880.AllocatorInstance.Data + lVar43);
                dVar4 = *(double *)(local_880.AllocatorInstance.Data + lVar43 + 8);
                dVar5 = *(double *)(local_880.AllocatorInstance.Data + lVar43 + 0x10);
                uVar23 = 0;
                if ((int)uVar42 < iVar25) {
                  uVar23 = ~uVar42 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar42 = uVar42 + 1;
                lVar43 = lVar43 + 0x18;
                *(float *)(local_900.AllocatorInstance.Data + lVar34) = (float)dVar3;
                *(float *)(local_900.AllocatorInstance.Data + lVar34 + 4) = (float)dVar4;
                *(float *)(local_900.AllocatorInstance.Data + lVar34 + 8) = (float)dVar5;
                lVar34 = lVar34 + 0xc;
                uVar30 = (ulonglong)(uint)local_880.ArrayNum;
                if (local_880.ArrayNum <= (int)uVar42) break;
                uVar32 = local_900._8_8_ & 0xffffffff;
              }
            }
            pFVar37 = (FConvex *)0x0;
            this_00 = ::operator_new(0xb0);
            if (this_00 != (FConvex *)0x0) {
              Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)this_00,3,'\b');
              this_00->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
              *(undefined4 *)&(this_00->LocalBoundingBox).MMin = 0x7f7fffff;
              *(undefined4 *)&(this_00->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
              *(undefined4 *)&(this_00->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
              *(undefined4 *)&(this_00->LocalBoundingBox).MMax = 0xff7fffff;
              *(undefined4 *)&(this_00->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
              *(undefined4 *)&(this_00->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
              (this_00->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (this_00->Planes).ArrayNum = 0;
              (this_00->Planes).ArrayMax = 0;
              (this_00->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (this_00->Vertices).ArrayNum = 0;
              (this_00->Vertices).ArrayMax = 0;
              (this_00->StructureData).Data.Ptr = (void *)0x0;
              (this_00->StructureData).IndexType = None;
              *(undefined8 *)&this_00->CenterOfMass = 0;
              *(undefined4 *)&(this_00->CenterOfMass).field_0x8 = 0;
              *(undefined8 *)&this_00->RotationOfMass = 0;
              *(undefined8 *)&(this_00->RotationOfMass).field_0x8 = 0;
              *(undefined8 *)&(this_00->RotationOfMass).field_0x10 = 0;
              *(undefined8 *)&(this_00->RotationOfMass).field_0x18 = 0;
              if (local_900.ArrayNum != 0) {
                local_8a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_8a0.ArrayNum = 0;
                local_8a0.ArrayMax = 0;
                Chaos::FConvexBuilder::Build
                          (&local_900,&this_00->Planes,&local_8a0,&this_00->Vertices,
                           &this_00->LocalBoundingBox,Default);
                Chaos::
                CalculateVolumeAndCenterOfMass<float,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                          (&this_00->Vertices,&local_8a0,&this_00->Volume,&this_00->CenterOfMass);
                Chaos::FConvexBuilder::MergeFaces
                          (&this_00->Planes,&local_8a0,&this_00->Vertices,fVar10);
                Chaos::FConvexBuilder::MergeColinearEdges
                          (&this_00->Planes,&local_8a0,&this_00->Vertices,fVar13);
                Chaos::FConvex::CreateStructureData(this_00,&local_8a0,false);
                Chaos::FConvex::ComputeUnitMassInertiaTensorAndRotationOfMass
                          (this_00,(double)this_00->Volume);
                *(undefined4 *)&this_00->_padding_ = 0;
                DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                          ((TArray<int,TSizedDefaultAllocator<32>_> *)
                           local_8a0.AllocatorInstance.Data,local_8a0.ArrayNum);
                if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_8a0.AllocatorInstance.Data !=
                    (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                  FMemory::Free(local_8a0.AllocatorInstance.Data);
                }
              }
              LOCK();
              *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
              UNLOCK();
              pFVar37 = this_00;
            }
            local_870 = FManagedArrayCollection::AddElements(local_830,1,ConvexGroupName);
            pTVar18 = local_868;
            lVar43 = (longlong)(int)local_870;
            uVar42 = 0;
            if ((int)local_870 < *(int *)&local_868->field_0x18) {
              uVar42 = ~local_870 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            plVar35 = (longlong *)(*(longlong *)&pTVar18->field_0x10 + lVar43 * 8);
            if (plVar35 != &local_640) {
              puVar7 = (undefined8 *)*plVar35;
              *plVar35 = (longlong)pFVar37;
              pFVar37 = (FConvex *)0x0;
              if (puVar7 != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(puVar7 + 1);
                iVar25 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((iVar25 == 1) &&
                   (pFVar37 = (FConvex *)0x0, *(int *)((longlong)puVar7 + 0xc) == 0)) {
                  (**(code **)*puVar7)(puVar7,1);
                }
              }
            }
            pTVar38 = local_8e0;
            uVar42 = 0;
            if ((int)uVar22 < *(int *)&local_8e0->field_0x18) {
              uVar42 = local_8ec;
            }
            if ((uVar42 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                       (local_7a8 + *(longlong *)&pTVar38->field_0x10),&local_7ac,(bool *)&local_870
                      );
            if (pFVar37 != (FConvex *)0x0) {
              LOCK();
              plVar35 = &pFVar37->_padding_;
              lVar43 = *plVar35;
              *(int *)plVar35 = (int)*plVar35 + -1;
              UNLOCK();
              if (((int)lVar43 == 1) && (*(int *)((longlong)&pFVar37->_padding_ + 4) == 0)) {
                (**(code **)pFVar37->_padding_)(pFVar37,1);
              }
            }
            if (local_880.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_880.AllocatorInstance.Data);
            }
            if (local_900.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_900.AllocatorInstance.Data);
            }
            iVar41 = iVar41 + 1;
          } while (iVar41 < local_1c8.Array.ArrayNum);
          uVar47 = (undefined4)__real_3fb999999999999a;
          uVar48 = (undefined4)((ulonglong)__real_3fb999999999999a >> 0x20);
          auVar45 = ___xmm_3fefae147ae147ae3e7ad7f29abcaf48;
          auVar46 = ___xmm_3f50624dd2f1a9fc3f50624dd2f1a9fc;
        }
        if (local_8d8.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8d8.Radius.AllocatorInstance.Data);
        }
        if (local_8d8.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8d8.Position.AllocatorInstance.Data);
        }
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data);
        }
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data);
        }
        local_110 = 0;
        if (local_118 != (void *)0x0) {
          FMemory::Free(local_118);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_158);
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data);
        }
        TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
        ::
        ~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                  (&local_1c8);
        if (local_8b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8b0.AllocatorInstance.Data);
        }
        pFVar39 = local_8b8;
        if (local_920.Data == (FScriptContainerElement *)0x0) goto LAB_144047da7;
        FMemory::Free(local_920.Data);
        FVar36.Data = local_7f8 + 4;
        uVar30 = (ulonglong)local_86c;
        pFVar39 = local_8b8;
      }
    }
    RemoveEmptyConvexHulls(local_830);
    if (local_910.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_910.AllocatorInstance.Data);
    }
    if (local_860.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_860.AllocatorInstance.Data);
    }
  }
  return;
}

// RemoveConvexHulls @ 14404ea10

void __cdecl
FGeometryCollectionConvexUtility::RemoveConvexHulls
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint uVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  uint uVar18;
  longlong lVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint uVar21;
  longlong *plVar22;
  FIdentityFunctor local_res8;
  ushort local_res18 [4];
  undefined1 local_res20 [8];
  int local_138 [2];
  ForAnyElementType local_130;
  int local_128;
  int iStack_124;
  undefined1 local_120 [4];
  uint local_11c;
  uint local_118;
  FScriptContainerElement *local_110;
  int local_108;
  int local_104;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_100;
  longlong local_f8;
  longlong local_f0;
  FScriptContainerElement *local_e8;
  longlong *local_e0;
  int iStack_d8;
  uint uStack_d4;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FName local_80;
  FName local_78 [4];
  undefined4 local_54;
  
  FVar5 = FTransformCollection::ConvexGroup;
  uVar9 = ::GetTypeHash(FTransformCollection::ConvexGroup.ComparisonIndex.Value);
  FVar4 = FTransformCollection::TransformGroup;
  if (*(int *)&(param_1->GroupInfo).field_0x8 != *(int *)&(param_1->GroupInfo).field_0x34) {
    puVar14 = *(undefined1 **)&(param_1->GroupInfo).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(param_1->GroupInfo).field_0x38;
    }
    iVar10 = *(int *)(puVar14 +
                     (ulonglong)
                     (*(int *)&(param_1->GroupInfo).field_0x48 - 1U & FVar5.Number + uVar9) * 4);
    if (iVar10 != -1) {
      while (*(FName *)(*(longlong *)&param_1->GroupInfo + (longlong)iVar10 * 0x14) != FVar5) {
        iVar10 = *(int *)(*(longlong *)&param_1->GroupInfo + 0xc + (longlong)iVar10 * 0x14);
        if (iVar10 == -1) {
          return;
        }
      }
      pFVar11 = ::FName::FName(&local_80,"TransformToConvexIndices");
      bVar8 = FManagedArrayCollection::HasAttribute(param_1,*pFVar11,FVar4);
      FVar4 = FTransformCollection::TransformGroup;
      if (bVar8) {
        pFVar11 = ::FName::FName(local_78,"TransformToConvexIndices");
        pTVar12 = FManagedArrayCollection::
                  ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                            (param_1,*pFVar11,FVar4);
        pFVar16 = (param_2->AllocatorInstance).Data;
        local_118 = param_2->ArrayNum;
        uVar13 = (ulonglong)(int)local_118;
        local_130.Data = (FScriptContainerElement *)0x0;
        local_128 = 0;
        iStack_124 = 0;
        local_e8 = pFVar16 + uVar13 * 4;
        local_100 = pTVar12;
        while( true ) {
          pFVar6 = local_e8;
          local_110 = pFVar16;
          if (param_2->ArrayNum != (int)uVar13) {
            local_res18[0] = local_res18[0] & 0xff00;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar16 == pFVar6) break;
          uVar9 = *(uint *)pFVar16;
          lVar17 = (longlong)(int)uVar9;
          uVar21 = ~uVar9 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar9 < *(int *)&pTVar12->field_0x18) {
            uVar18 = uVar21;
          }
          local_11c = uVar9;
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar19 = lVar17 * 0x50;
          local_f8 = lVar17;
          local_f0 = lVar19;
          if (0 < *(int *)(*(longlong *)&pTVar12->field_0x10 + 8 + lVar19) -
                  *(int *)(*(longlong *)&pTVar12->field_0x10 + 0x34 + lVar19)) {
            uVar18 = 0;
            if ((int)uVar9 < *(int *)&pTVar12->field_0x18) {
              uVar18 = uVar21;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar22 = (longlong *)(*(longlong *)&pTVar12->field_0x10 + lVar19);
            iVar10 = (int)plVar22[5];
            pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar22 + 2);
            local_c0 = 0;
            uStack_d4 = 1;
            iStack_c4 = 0;
            iStack_d8 = 0;
            if (iVar10 != 0) {
              pTVar20 = pTVar1;
              if ((TBitArray<FDefaultBitArrayAllocator> *)plVar22[4] !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar22[4];
              }
              uVar9 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
              while (uVar9 == 0) {
                lVar17 = (longlong)iStack_d8;
                local_c0 = local_c0 + 0x20;
                iStack_d8 = iStack_d8 + 1;
                iStack_c4 = iVar10;
                if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8)
                goto LAB_14404ecad;
                uVar9 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar17 * 4 + 4);
              }
              uStack_d4 = -uVar9 & uVar9;
              uVar13 = (ulonglong)uStack_d4 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_108 = (int)lVar17;
              iStack_c4 = local_c0 + -1 + local_108;
              if (iVar10 < iStack_c4) {
                iStack_c4 = iVar10;
              }
            }
LAB_14404ecad:
            uVar9 = *(uint *)(plVar22 + 5);
            uStack_bc = local_54;
            uVar18 = uVar9 & 0xffffffe0;
            iStack_b8 = (int)plVar22[1] - *(int *)((longlong)plVar22 + 0x34);
            TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
            uStack_c8 = 0xffffffff;
            TStack_a8.CurrentBitIndex = iStack_c4;
            TStack_a8.UnvisitedBitMask = 0xffffffff;
            iVar15 = (int)uVar9 >> 5;
            TStack_a8._28_4_ = local_54;
            TStack_a8.BaseBitIndex = local_c0;
            uStack_88 = CONCAT44(uStack_b4,iStack_b8);
            local_e0 = plVar22;
            local_d0 = pTVar1;
            local_b0 = plVar22;
            TStack_a8.Array = pTVar1;
            if ((((int)uVar9 < 0) || (iVar10 < (int)uVar9)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar2 = *(uint *)(plVar22 + 5);
            if (uVar9 != uVar2) {
              pTVar20 = pTVar1;
              if ((TBitArray<FDefaultBitArrayAllocator> *)plVar22[4] !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar22[4];
              }
              uVar9 = -1 << ((byte)uVar9 & 0x1f) &
                      *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
              while (uVar9 == 0) {
                lVar17 = (longlong)iVar15;
                uVar18 = uVar18 + 0x20;
                iVar15 = iVar15 + 1;
                uVar9 = uVar2;
                if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
                goto LAB_14404edb0;
                uVar9 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar17 * 4 + 4);
              }
              uVar13 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
              lVar17 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_104 = (int)lVar17;
              uVar9 = local_104 + -1 + uVar18;
              if ((int)uVar2 < (int)uVar9) {
                uVar9 = uVar2;
              }
            }
LAB_14404edb0:
            while( true ) {
              plVar7 = local_b0;
              if ((int)local_b0[1] - *(int *)((longlong)local_b0 + 0x34) != (int)uStack_88) {
                local_res20[0] = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
              }
              pTVar12 = local_100;
              if (((TStack_a8.CurrentBitIndex == uVar9) && (TStack_a8.Array == pTVar1)) &&
                 (plVar7 == plVar22)) break;
              local_138[0] = *(int *)(*plVar7 + (longlong)TStack_a8.CurrentBitIndex * 0xc);
              if (((local_130.Data <= (FScriptContainerElement *)local_138) &&
                  ((FScriptContainerElement *)local_138 < local_130.Data + (longlong)iStack_124 * 4)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (local_128 == iStack_124) {
                local_128 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_130,&iStack_124);
              }
              lVar17 = (longlong)local_128;
              local_128 = local_128 + 1;
              *(int *)(local_130.Data + lVar17 * 4) = local_138[0];
              TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
            }
            uVar9 = 0;
            if ((int)local_11c < *(int *)&local_100->field_0x18) {
              uVar9 = uVar21;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            this = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   (*(longlong *)&pTVar12->field_0x10 + local_f0);
            bVar8 = 1 < this->HashSize;
            if (!bVar8) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this);
            }
            puVar14 = &(this->Elements).field_0xc;
            *(undefined4 *)&(this->Elements).field_0x8 = 0;
            if (*(int *)puVar14 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0,(ForAnyElementType *)this,0,(int *)puVar14);
            }
            *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
            *(undefined4 *)&(this->Elements).field_0x34 = 0;
            iVar10 = *(int *)&(this->Elements).field_0x2c;
            *(undefined4 *)&(this->Elements).field_0x28 = 0;
            if ((iVar10 < 0) || (0x80 < iVar10)) {
              *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,0);
            }
            if (bVar8) {
              this->HashSize = 1;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this);
            }
          }
          uVar13 = (ulonglong)local_118;
          pFVar16 = local_110 + 4;
        }
        if (local_128 != 0) {
          local_res8 = SUB81(param_1,0);
          AlgoImpl::
          IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                    ((int *)local_130.Data,local_128,local_res8,(TLess<void> *)local_120);
          local_res18[0] = 0x100;
          (**(code **)(param_1->_padding_ + 0x28))
                    (param_1,&FTransformCollection::ConvexGroup,&local_130,0x100);
        }
        if (local_130.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data);
        }
      }
    }
  }
  return;
}

// RemoveEmptyConvexHulls @ 14404f6c0

void __cdecl
FGeometryCollectionConvexUtility::RemoveEmptyConvexHulls(FManagedArrayCollection *param_1)

{
  int *piVar1;
  FManagedArrayBase *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar8;
  FValueType *this;
  longlong lVar9;
  FName local_res10;
  uint local_48 [2];
  ForAnyElementType local_40;
  undefined8 local_38;
  FName local_30;
  FName local_28;
  
  local_res10 = FTransformCollection::ConvexGroup;
  local_28 = FTransformCollection::ConvexGroup;
  local_30 = FTransformCollection::ConvexHullAttribute;
  pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_30);
  this = (FValueType *)&pTVar8->field_0x10;
  if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this = (FValueType *)0x0;
  }
  if ((this != (FValueType *)0x0) && (this->ArrayType == FFConvexRefCountedPtrType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this);
    pFVar2 = this->ManagedArray;
    if ((pFVar2 == (FManagedArrayBase *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2->bIsDirty = true;
    if (pFVar2 != (FManagedArrayBase *)0x0) {
      if ((param_1 == (FManagedArrayCollection *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeArray!=nullptr && !IsConst()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x74,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2->bIsDirty = true;
      local_40.Data = (FScriptContainerElement *)0x0;
      local_38 = 0;
      local_48[0] = 0;
      iVar6 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2);
      if ((int)local_48[0] < iVar6) {
        do {
          lVar9 = (longlong)(int)local_48[0];
          uVar7 = 0;
          if ((int)local_48[0] < *(int *)&pFVar2[1].bIsDirty) {
            uVar7 = ~local_48[0] >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(longlong *)(pFVar2[1]._padding_ + lVar9 * 8) == 0) {
LAB_14404f8f6:
            if (((local_40.Data <= (FScriptContainerElement *)local_48) &&
                ((FScriptContainerElement *)local_48 < local_40.Data + (longlong)local_38._4_4_ * 4)
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
            iVar6 = (int)local_38;
            if ((int)local_38 == local_38._4_4_) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_40,(int *)((longlong)&local_38 + 4));
            }
            local_38 = CONCAT44(local_38._4_4_,iVar6 + 1);
            *(uint *)(local_40.Data + (longlong)iVar6 * 4) = local_48[0];
          }
          else {
            lVar9 = (longlong)(int)local_48[0];
            uVar7 = 0;
            if ((int)local_48[0] < *(int *)&pFVar2[1].bIsDirty) {
              uVar7 = ~local_48[0] >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)(*(longlong *)(pFVar2[1]._padding_ + lVar9 * 8) + 0x38) == 0) {
              lVar9 = (longlong)(int)local_48[0];
              uVar7 = 0;
              if ((int)local_48[0] < *(int *)&pFVar2[1].bIsDirty) {
                uVar7 = ~local_48[0] >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              puVar3 = *(undefined8 **)(pFVar2[1]._padding_ + lVar9 * 8);
              if (puVar3 != (undefined8 *)0x0) {
                *(undefined8 *)(pFVar2[1]._padding_ + lVar9 * 8) = 0;
                LOCK();
                piVar1 = (int *)(puVar3 + 1);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar6 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
                  (**(code **)*puVar3)(puVar3,1);
                }
              }
              goto LAB_14404f8f6;
            }
          }
          local_48[0] = local_48[0] + 1;
          iVar6 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2);
        } while ((int)local_48[0] < iVar6);
      }
      (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_res10,&local_40,0x100);
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
    }
  }
  return;
}

// SetDefaults @ 1440516b0

void __cdecl
FGeometryCollectionConvexUtility::SetDefaults
          (FGeometryCollection *param_1,FName param_2,uint param_3,uint param_4)

{
  return;
}

// SetVolumeAttributes @ 144051cc0

void __cdecl FGeometryCollectionConvexUtility::SetVolumeAttributes(FManagedArrayCollection *param_1)

{
  float fVar1;
  FName FVar2;
  code *pcVar3;
  FName FVar4;
  FManagedArrayCollection *pFVar5;
  TManagedArray<int> *pTVar6;
  FScriptContainerElement *pFVar7;
  TManagedArray<float> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  TManagedArray<float> *pTVar14;
  TManagedArray<int> *pTVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  FManagedArrayCollection *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  ForAnyElementType local_638;
  int local_630 [2];
  FName local_628;
  undefined2 local_620;
  undefined2 uStack_61e;
  FName local_61c;
  undefined2 local_614;
  undefined2 uStack_612;
  undefined8 local_610;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_608;
  TArray<int,TSizedDefaultAllocator<32>_> local_5f8;
  TManagedArray<int> *local_5e8;
  TManagedArray<int> *local_5e0;
  FScriptContainerElement *local_5d8;
  TManagedArray<int> *local_5d0;
  TManagedArray<float> *local_5c8;
  FConstructionParameters local_5b8;
  FConstructionParameters local_5a8;
  code *local_598;
  FCollectionMeshFacade **local_590;
  FCollectionMeshFacade *local_588;
  TManagedArray<int> *local_580;
  ForAnyElementType *local_578;
  FManagedArrayCollection **local_570;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_568;
  FName local_560;
  FName local_558;
  FName local_550;
  FCollectionTransformFacade local_548;
  FCollectionMeshFacade local_458;
  
  FVar4 = FTransformCollection::TransformGroup;
  local_620._0_1_ = true;
  local_620._1_1_ = false;
  local_res20 = 0;
  local_628.ComparisonIndex.Value = 0;
  local_628.Number = 0;
  local_res8 = param_1;
  pFVar13 = ::FName::FName(&local_560,"Volume");
  pFVar5 = local_res8;
  local_5b8.GroupIndexDependency = local_628;
  FVar2 = *pFVar13;
  local_5b8.Saved = local_620._0_1_;
  local_5b8.bAllowCircularDependency = local_620._1_1_;
  local_5b8._10_2_ = uStack_61e;
  bVar9 = FManagedArrayCollection::HasAttribute(local_res8,FVar2,FVar4);
  if (!bVar9) {
    FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar5,FVar2,FVar4,&local_5b8);
  }
  pTVar14 = FManagedArrayCollection::ModifyAttribute<float>(pFVar5,FVar2,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  local_610 = 0;
  local_61c.ComparisonIndex.Value = 0;
  local_61c.Number = 0;
  local_614._0_1_ = true;
  local_614._1_1_ = false;
  pFVar13 = ::FName::FName(&local_558,"Size");
  pFVar5 = local_res8;
  local_5a8.GroupIndexDependency = local_61c;
  FVar2 = *pFVar13;
  local_5a8.Saved = local_614._0_1_;
  local_5a8.bAllowCircularDependency = local_614._1_1_;
  local_5a8._10_2_ = uStack_612;
  bVar9 = FManagedArrayCollection::HasAttribute(local_res8,FVar2,FVar4);
  if (!bVar9) {
    FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar5,FVar2,FVar4,&local_5a8);
  }
  local_5c8 = FManagedArrayCollection::ModifyAttribute<float>(pFVar5,FVar2,FVar4);
  GeometryCollection::Facades::FCollectionMeshFacade::FCollectionMeshFacade(&local_458,local_res8);
  GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
            (&local_548,local_res8);
  FVar2 = FTransformCollection::TransformGroup;
  pFVar13 = ::FName::FName(&local_550,"SimulationType");
  pTVar15 = FManagedArrayCollection::FindAttributeTyped<int>(local_res8,*pFVar13,FVar2);
  local_5d0 = pTVar15;
  bVar9 = GeometryCollection::Facades::FCollectionMeshFacade::IsValid(&local_458);
  if (((!bVar9) ||
      (bVar9 = GeometryCollection::Facades::FCollectionTransformFacade::IsValid(&local_548), !bVar9)
      ) || (pTVar15 == (TManagedArray<int> *)0x0)) {
    `FGeometryCollectionConvexUtility::SetVolumeAttributes'::__l5::<lambda_1>::operator()
              (local_res18);
    return;
  }
  if ((local_458.TransformToGeometryIndexAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0)
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x67,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar17 = 0;
  local_5e8 = local_458.TransformToGeometryIndexAttribute.ConstAttributeArray;
  local_5e0 = local_548.ParentAttribute.ConstAttributeArray;
  local_608.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_608.ArrayNum = 0;
  local_608.ArrayMax = 0;
  GeometryCollectionAlgo::GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
            (local_548.TransformAttribute.ConstAttributeArray,
             local_548.ParentAttribute.ConstAttributeArray,&local_608);
  local_638.Data = (FScriptContainerElement *)0x0;
  local_630[0] = 0;
  local_630[1] = 0;
  uVar10 = FManagedArrayCollection::NumElements(local_res8,FGeometryCollection::GeometryGroup);
  if (local_630[0] < (int)uVar10) {
    iVar16 = uVar10 - local_630[0];
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar16,&local_638,local_630,local_630 + 1);
    memset(local_638.Data + (longlong)iVar11 * 4,0,(longlong)iVar16 << 2);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    iVar11 = local_630[0];
    if (local_630[0] <= (int)uVar10) goto LAB_144051fe4;
    uVar19 = local_630[0] - uVar10;
    if ((int)(uVar19 | uVar10) < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = local_630[0];
    }
    if (uVar19 == 0) goto LAB_144051fe4;
    iVar16 = (iVar11 - uVar10) - uVar19;
    if (iVar16 != 0) {
      memmove(local_638.Data + (longlong)(int)uVar10 * 4,
              local_638.Data + (longlong)(int)uVar10 * 4 + (longlong)(int)uVar19 * 4,
              (longlong)iVar16 << 2);
      iVar11 = local_630[0];
    }
    local_630[0] = iVar11 - uVar19;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_638,iVar11 - uVar19,local_630 + 1);
  }
  iVar11 = local_630[0];
LAB_144051fe4:
  local_588 = &local_458;
  local_578 = &local_638;
  local_570 = &local_res8;
  local_568 = &local_608;
  local_590 = &local_588;
  local_598 = UE::Core::Private::Function::
              TFunctionRefCaller<`FGeometryCollectionConvexUtility::SetVolumeAttributes'::__l2::<lambda_2>,void,int>
              ::Call;
  local_580 = pTVar15;
  ParallelFor(iVar11,(TFunctionRef<void___cdecl(int)> *)&local_598,None);
  fVar25 = 0.0;
  GeometryCollectionAlgo::ComputeRecursiveOrder(&local_5f8,local_res8);
  uVar18 = uVar17;
  if (0 < *(int *)&pTVar14->field_0x18) {
    do {
      uVar19 = (uint)uVar17;
      uVar10 = 0;
      if ((int)uVar19 < *(int *)&pTVar14->field_0x18) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar17 = (ulonglong)(uVar19 + 1);
      *(undefined4 *)(uVar18 + *(longlong *)&pTVar14->field_0x10) = 0;
      uVar18 = uVar18 + 4;
    } while ((int)(uVar19 + 1) < *(int *)&pTVar14->field_0x18);
  }
  iVar11 = local_5f8.ArrayNum;
  local_5d8 = local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayNum * 4;
  FVar22.Data = local_5f8.AllocatorInstance.Data;
  do {
    while( true ) {
      pFVar7 = local_5d8;
      uVar17 = 0;
      if (local_5f8.ArrayNum != iVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar22.Data == pFVar7) {
        if ((UseLargestClusterToComputeRelativeSize != false) &&
           (iVar11 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14), uVar18 = uVar17,
           uVar21 = uVar17, 0 < iVar11)) {
          do {
            uVar19 = (uint)uVar18;
            uVar10 = 0;
            if ((int)uVar19 < *(int *)&pTVar14->field_0x18) {
              uVar10 = ~uVar19 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar1 = *(float *)(uVar21 + *(longlong *)&pTVar14->field_0x10);
            if (fVar1 <= fVar25) {
              fVar1 = fVar25;
            }
            fVar25 = fVar1;
            iVar11 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14);
            uVar18 = (ulonglong)(uVar19 + 1);
            uVar21 = uVar21 + 4;
          } while ((int)(uVar19 + 1) < iVar11);
        }
        fVar1 = __real_3eaaaaab;
        fVar24 = fVar25;
        if (UseVolumeToComputeRelativeSize == false) {
          fVar24 = powf(fVar25,__real_3eaaaaab);
        }
        fVar26 = __real_3f800000;
        if (0.0 < fVar25) {
          fVar26 = __real_3f800000 / fVar24;
        }
        iVar11 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14);
        pTVar8 = local_5c8;
        uVar18 = uVar17;
        if (0 < iVar11) {
          do {
            uVar19 = (uint)uVar17;
            uVar10 = 0;
            if ((int)uVar19 < *(int *)&pTVar14->field_0x18) {
              uVar10 = ~uVar19 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar25 = *(float *)(uVar18 + *(longlong *)&pTVar14->field_0x10);
            if (UseVolumeToComputeRelativeSize == false) {
              fVar25 = powf(fVar25,fVar1);
            }
            uVar10 = 0;
            if ((int)uVar19 < *(int *)&pTVar8->field_0x18) {
              uVar10 = ~uVar19 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar17 = (ulonglong)(uVar19 + 1);
            *(float *)(uVar18 + *(longlong *)&pTVar8->field_0x10) = fVar25 * fVar26;
            iVar11 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14);
            uVar18 = uVar18 + 4;
          } while ((int)(uVar19 + 1) < iVar11);
        }
        if (local_5f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5f8.AllocatorInstance.Data);
        }
        if (local_638.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_638.Data);
        }
        if (local_608.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_608.AllocatorInstance.Data);
        return;
      }
      uVar10 = *(uint *)FVar22.Data;
      lVar23 = (longlong)(int)uVar10;
      uVar20 = ~uVar10 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar10 < *(int *)&pTVar15->field_0x18) {
        uVar19 = uVar20;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar6 = local_5e8;
      if (*(int *)(*(longlong *)&pTVar15->field_0x10 + lVar23 * 4) == 1) break;
LAB_1440522c9:
      pTVar15 = local_5e0;
      uVar19 = 0;
      if ((int)uVar10 < *(int *)&local_5e0->field_0x18) {
        uVar19 = uVar20;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar19 = *(uint *)(*(longlong *)&pTVar15->field_0x10 + lVar23 * 4);
      if (uVar19 == 0xffffffff) {
        FVar22.Data = FVar22.Data + 4;
        pTVar15 = local_5d0;
      }
      else {
        uVar12 = 0;
        if ((int)uVar10 < *(int *)&pTVar14->field_0x18) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar1 = *(float *)(*(longlong *)&pTVar14->field_0x10 + lVar23 * 4);
        uVar10 = 0;
        if ((int)uVar19 < *(int *)&pTVar14->field_0x18) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar22.Data = FVar22.Data + 4;
        *(float *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar19 * 4) =
             fVar1 + *(float *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar19 * 4);
        pTVar15 = local_5d0;
      }
    }
    uVar19 = 0;
    if ((int)uVar10 < *(int *)&local_5e8->field_0x18) {
      uVar19 = uVar20;
    }
    if ((uVar19 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar19 = *(uint *)(*(longlong *)&pTVar6->field_0x10 + lVar23 * 4);
    if (uVar19 != 0xffffffff) {
      uVar12 = 0;
      if ((int)uVar19 < local_630[0]) {
        uVar12 = ~uVar19 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(local_638.Data + (longlong)(int)uVar19 * 4);
      fVar24 = fVar1;
      if (fVar1 <= fVar25) {
        fVar24 = fVar25;
      }
      fVar25 = fVar24;
      uVar19 = 0;
      if ((int)uVar10 < *(int *)&pTVar14->field_0x18) {
        uVar19 = uVar20;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)(*(longlong *)&pTVar14->field_0x10 + lVar23 * 4) = fVar1;
      goto LAB_1440522c9;
    }
    uVar19 = 0;
    if ((int)uVar10 < *(int *)&pTVar14->field_0x18) {
      uVar19 = uVar20;
    }
    if ((uVar19 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar22.Data = FVar22.Data + 4;
    *(undefined4 *)(*(longlong *)&pTVar14->field_0x10 + lVar23 * 4) = 0;
    pTVar15 = local_5d0;
  } while( true );
}

// ValidateConvexData @ 144053be0

bool __cdecl FGeometryCollectionConvexUtility::ValidateConvexData(FManagedArrayCollection *param_1)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  FName *pFVar9;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar10;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  int iVar18;
  longlong *plVar19;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  longlong local_e8;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FName local_70;
  FName local_68 [4];
  undefined4 local_44;
  
  bVar5 = FManagedArrayCollection::HasAttribute
                    (param_1,FTransformCollection::ConvexHullAttribute,
                     FTransformCollection::ConvexGroup);
  FVar4 = FTransformCollection::TransformGroup;
  if (bVar5) {
    pFVar9 = ::FName::FName(&local_70,"TransformToConvexIndices");
    bVar5 = FManagedArrayCollection::HasAttribute(param_1,*pFVar9,FVar4);
    if (bVar5) {
      pTVar10 = FManagedArrayCollection::GetAttribute<TRefCountPtr<Chaos::FConvex>_>
                          (param_1,FTransformCollection::ConvexHullAttribute,
                           FTransformCollection::ConvexGroup);
      uVar12 = 0;
      iVar7 = (**(code **)(*(longlong *)pTVar10 + 0x60))(pTVar10);
      if (0 < iVar7) {
        lVar15 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar12 < *(int *)&pTVar10->field_0x18) {
            uVar14 = ~uVar12 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (*(longlong *)(lVar15 + *(longlong *)&pTVar10->field_0x10) == 0) {
            return false;
          }
          uVar12 = uVar12 + 1;
          lVar15 = lVar15 + 8;
          iVar7 = (**(code **)(*(longlong *)pTVar10 + 0x60))(pTVar10);
        } while ((int)uVar12 < iVar7);
      }
      FVar4 = FTransformCollection::TransformGroup;
      pFVar9 = ::FName::FName(local_68,"TransformToConvexIndices");
      pTVar11 = FManagedArrayCollection::
                GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                          (param_1,*pFVar9,FVar4);
      uVar12 = 0;
      local_res18 = 0;
      iVar7 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
      if (iVar7 < 1) {
        return true;
      }
      local_e8 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar12 < *(int *)&pTVar11->field_0x18) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar16 = 0;
        plVar19 = (longlong *)(*(longlong *)&pTVar11->field_0x10 + local_e8);
        iVar7 = (int)plVar19[5];
        pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar19 + 2);
        iVar18 = 0;
        uVar12 = 1;
        iVar8 = 0;
        if (iVar7 != 0) {
          pTVar17 = pTVar2;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar19[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar19[4];
          }
          uVar14 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
          while (uVar14 == 0) {
            lVar15 = (longlong)iVar16;
            iVar18 = iVar18 + 0x20;
            iVar16 = iVar16 + 1;
            iVar8 = iVar7;
            if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_144053e0e;
            uVar14 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uVar12 = -uVar14 & uVar14;
          uVar1 = (ulonglong)uVar12 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_res20 = (int)lVar15;
          iVar8 = iVar18 + -1 + local_res20;
          if (iVar7 < iVar8) {
            iVar8 = iVar7;
          }
        }
LAB_144053e0e:
        uVar14 = *(uint *)(plVar19 + 5);
        uVar13 = uVar14 & 0xffffffe0;
        TStack_98._padding_ = CONCAT44(uVar12,iVar16);
        TStack_98.CurrentBitIndex = iVar8;
        TStack_98.UnvisitedBitMask = 0xffffffff;
        iVar16 = (int)uVar14 >> 5;
        TStack_98._28_4_ = local_44;
        TStack_98.BaseBitIndex = iVar18;
        uStack_78 = CONCAT44(uStack_a4,(int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34));
        TStack_98.Array = pTVar2;
        if ((((int)uVar14 < 0) || (iVar7 < (int)uVar14)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar12 = *(uint *)(plVar19 + 5);
        if (uVar14 != uVar12) {
          pTVar17 = pTVar2;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar19[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar19[4];
          }
          uVar14 = -1 << ((byte)uVar14 & 0x1f) &
                   *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
          while (uVar14 == 0) {
            lVar15 = (longlong)iVar16;
            uVar13 = uVar13 + 0x20;
            iVar16 = iVar16 + 1;
            uVar14 = uVar12;
            if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
            goto LAB_144053f10;
            uVar14 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar14 = (int)lVar15 + -1 + uVar13;
          if ((int)uVar12 < (int)uVar14) {
            uVar14 = uVar12;
          }
        }
LAB_144053f10:
        while( true ) {
          if ((int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34) != (int)uStack_78) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if ((TStack_98.CurrentBitIndex == uVar14) && (TStack_98.Array == pTVar2)) break;
          iVar7 = *(int *)(*plVar19 + (longlong)TStack_98.CurrentBitIndex * 0xc);
          if (iVar7 < 0) {
            return false;
          }
          iVar18 = (**(code **)(*(longlong *)pTVar10 + 0x60))(pTVar10);
          if (iVar18 <= iVar7) {
            return false;
          }
          TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
        }
        uVar12 = local_res18 + 1;
        local_e8 = local_e8 + 0x50;
        local_res18 = uVar12;
        iVar7 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
        if (iVar7 <= (int)uVar12) {
          return true;
        }
      } while( true );
    }
  }
  return false;
}

// operator() @ 1504abb60

bool __thiscall
`FGeometryCollectionConvexUtility::SetVolumeAttributes'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2076966675911019299>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2076966675911019299>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

