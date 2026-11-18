// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 4

// TileConnectedComponents @ 14c947f90

TileConnectedComponents * __thiscall
UVTexelDensityOpLocals::TileConnectedComponents::TileConnectedComponents
          (TileConnectedComponents *this,FMeshConnectedComponents *param_1,FVector2i *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TileConnectedComponents *pTVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  piVar1 = &(this->TileTids).ArrayNum;
  (this->TileTids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TileTids).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->ConnectedComponents).Mesh = param_1->Mesh;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&(this->ConnectedComponents).Components,&param_1->Components);
  uVar9 = 0;
  iVar8 = (this->ConnectedComponents).Components.Array.ArrayNum;
  (this->Tile).field0_0x0 = param_2->field0_0x0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TileConnectedComponents *)(*pcVar3)();
        return pTVar7;
      }
      pTVar7 = *(TileConnectedComponents **)
                ((this->ConnectedComponents).Components.Array.AllocatorInstance.Data + lVar10);
      if ((this == pTVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TileConnectedComponents *)(*pcVar3)();
        return pTVar7;
      }
      iVar8 = (pTVar7->TileTids).ArrayNum;
      if (iVar8 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar8,(ForAnyElementType *)this,piVar1,piVar2);
        memcpy((this->TileTids).AllocatorInstance.Data + (longlong)iVar6 * 4,
               (pTVar7->TileTids).AllocatorInstance.Data,(longlong)iVar8 << 2);
      }
      iVar8 = (this->ConnectedComponents).Components.Array.ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar9 < iVar8);
  }
  return this;
}

// CollectIslandComponentsPerTile @ 14c978330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UVTexelDensityOpLocals::CollectIslandComponentsPerTile
          (FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *param_3,
          TArray<UVTexelDensityOpLocals::TileConnectedComponents,TSizedDefaultAllocator<32>_>
          *param_4,bool param_5)

{
  FVector2i_u_0 *pFVar1;
  longlong lVar2;
  short sVar3;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  TVar4;
  code *pcVar5;
  longlong lVar6;
  TArray<UVTexelDensityOpLocals::TileConnectedComponents,TSizedDefaultAllocator<32>_> *pTVar7;
  FDynamicMesh3 *pFVar8;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  int iVar25;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [8];
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> local_1e0;
  int local_1d0 [2];
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  FMeshConnectedComponents local_1a8;
  TArray<UVTexelDensityOpLocals::TileConnectedComponents,TSizedDefaultAllocator<32>_> *local_190;
  FDynamicMesh3 *local_188;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_180;
  TArray<int,TSizedDefaultAllocator<32>_> local_178;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> local_168;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  code *local_138 [2];
  undefined **local_128;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_120;
  undefined8 local_110;
  code *local_108 [2];
  undefined **local_f8;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_f0;
  undefined8 local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  undefined1 local_c8 [88];
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_190 = param_4;
  local_188 = param_1;
  local_180 = param_2;
  DestructItems<UVTexelDensityOpLocals::TileConnectedComponents,int>
            ((TileConnectedComponents *)(param_4->AllocatorInstance).Data,param_4->ArrayNum);
  pFVar20 = (FScriptContainerElement *)0x0;
  iVar12 = 0;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  iVar11 = *(int *)((longlong)&param_3->field0_0x0 + 0xc);
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_1f0.Data = (FScriptContainerElement *)0x0;
  local_1e8 = 0;
  if (param_5) {
    iVar25 = -1;
    if (iVar11 != -1) {
      pTVar13 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)param_3,
                           &local_178);
      iVar12 = 0;
      if (pTVar13 != &local_d8) {
        pFVar20 = (pTVar13->AllocatorInstance).Data;
        (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar25 = pTVar13->ArrayMax;
        iVar12 = pTVar13->ArrayNum;
        pTVar13->ArrayNum = 0;
        pTVar13->ArrayMax = 0;
        if ((iVar25 == -1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
    }
    local_1c8.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_1c8.TypedValue.ArrayNum = 0;
    local_1c8.TypedValue.ArrayMax = -1;
    if (iVar25 != -1) {
      local_1c8.TypedValue.ArrayNum = iVar12;
      if (iVar12 == 0) {
        local_1c8.TypedValue.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar12,0,&local_1c8.TypedValue.AllocatorInstance,iVar12,
                   &local_1c8.TypedValue.ArrayMax);
        memcpy((void *)local_1c8.TypedValue.AllocatorInstance.Data,pFVar20,(longlong)iVar12 << 2);
      }
    }
    UE::Geometry::FDynamicMeshUDIMClassifier::FDynamicMeshUDIMClassifier
              ((FDynamicMeshUDIMClassifier *)local_c8,param_2,
               (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_1c8.TypedValue);
    pTVar14 = UE::Geometry::FDynamicMeshUDIMClassifier::ActiveTiles
                        ((FDynamicMeshUDIMClassifier *)local_c8,&local_168);
    if (&local_1e0 != pTVar14) {
      if ((FVector2i_u_0 *)local_1e0.AllocatorInstance.Data != (FVector2i_u_0 *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      local_1e0.AllocatorInstance.Data = (pTVar14->AllocatorInstance).Data;
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = pTVar14->ArrayNum;
      local_1e0.ArrayMax = pTVar14->ArrayMax;
      pTVar14->ArrayNum = 0;
      pTVar14->ArrayMax = 0;
    }
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    iVar12 = local_1e0.ArrayNum;
    uVar18 = (ulonglong)local_1e0.ArrayNum;
    pFVar1 = (FVector2i_u_0 *)(local_1e0.AllocatorInstance.Data + uVar18 * 8);
    FVar23.Data = local_1e0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar18 != iVar12) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FVector2i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1f8);
      }
      if ((FVector2i_u_0 *)FVar23.Data == pFVar1) break;
      pTVar13 = UE::Geometry::FDynamicMeshUDIMClassifier::TidsForTile
                          ((FDynamicMeshUDIMClassifier *)local_c8,&local_158,
                           (FVector2i)*(FVector2i_u_0_s_0 *)FVar23.Data);
      puVar15 = ::operator_new(0x10);
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        *puVar15 = 0;
        *puVar15 = (pTVar13->AllocatorInstance).Data;
        (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar15 + 1) = pTVar13->ArrayNum;
        *(int *)((longlong)puVar15 + 0xc) = pTVar13->ArrayMax;
        pTVar13->ArrayNum = 0;
        pTVar13->ArrayMax = 0;
      }
      iVar11 = (int)local_1e8;
      if ((int)local_1e8 == local_1e8._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_1f0,(int *)((longlong)&local_1e8 + 4));
      }
      local_1e8 = CONCAT44(local_1e8._4_4_,iVar11 + 1);
      *(undefined8 **)(local_1f0.Data + (longlong)iVar11 * 8) = puVar15;
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      uVar18 = local_1e0._8_8_ & 0xffffffff;
      FVar23.Data = FVar23.Data + 8;
    }
    local_68 = 0;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_c8 + 0x18));
    if ((local_c8._20_4_ != -1) &&
       ((FScriptContainerElement *)local_c8._8_8_ != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_c8._8_8_);
    }
    if ((iVar25 != -1) && (pFVar20 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar20);
    }
    goto LAB_14c9789af;
  }
  if (iVar11 != -1) {
    local_1b8 = 0;
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
    local_1e0.ArrayNum = iVar12 + 1;
    *(undefined8 *)(local_1e0.AllocatorInstance.Data + (longlong)iVar12 * 8) = 0;
    if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) == -1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar13 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)param_3,&local_148
                        );
    pFVar16 = ::operator_new(0x10);
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      *(undefined8 *)&pFVar16->field_0x0 = 0;
      *(FScriptContainerElement **)&pFVar16->field_0x0 = (pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar16 + 8) = pTVar13->ArrayNum;
      *(int *)(pFVar16 + 0xc) = pTVar13->ArrayMax;
      pTVar13->ArrayNum = 0;
      pTVar13->ArrayMax = 0;
      pFVar20 = pFVar16;
    }
    iVar12 = (int)local_1e8;
    if ((int)local_1e8 == local_1e8._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_1f0,(int *)((longlong)&local_1e8 + 4));
    }
    local_1e8 = CONCAT44(local_1e8._4_4_,iVar12 + 1);
    *(FScriptContainerElement **)(local_1f0.Data + (longlong)iVar12 * 8) = pFVar20;
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    goto LAB_14c9789af;
  }
  local_1b0 = 0;
  iVar12 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
  local_1e0.ArrayNum = iVar12 + 1;
  *(undefined8 *)(local_1e0.AllocatorInstance.Data + (longlong)iVar12 * 8) = 0;
  pFVar17 = ::operator_new(0x10);
  pFVar16 = pFVar20;
  if (pFVar17 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)&pFVar17->field_0x0 = 0;
    *(undefined8 *)(pFVar17 + 8) = 0;
    pFVar16 = pFVar17;
  }
  iVar12 = (int)local_1e8;
  if ((int)local_1e8 == local_1e8._4_4_) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_1f0,(int *)((longlong)&local_1e8 + 4));
  }
  local_1e8 = CONCAT44(local_1e8._4_4_,iVar12 + 1);
  *(FScriptContainerElement **)(local_1f0.Data + (longlong)iVar12 * 8) = pFVar16;
  if ((iVar12 + 1 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar22 = (param_1->TriangleRefCounts).UsedCount;
  TVar4.Ptr = *(TArray<int,TSizedDefaultAllocator<32>_> **)local_1f0.Data;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if ((TVar4.Ptr)->ArrayMax < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar22,&(TVar4.Ptr)->AllocatorInstance,(TVar4.Ptr)->ArrayNum,
               &(TVar4.Ptr)->ArrayMax);
  }
  uVar22 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar22 == 0) ||
     (pFVar16 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar20 = (FScriptContainerElement *)0x0, (ushort)(**(short **)pFVar16 - 1U) < 0xfffe)) {
LAB_14c978879:
    uVar19 = (uint)pFVar20;
  }
  else {
    pFVar20 = (FScriptContainerElement *)&DAT_00000001;
    uVar19 = 1;
    if (1 < (int)uVar22) {
      do {
        sVar3 = *(short *)(*(longlong *)(pFVar16 + ((ulonglong)pFVar20 >> 9) * 8) +
                          (ulonglong)((uint)pFVar20 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar19 = (uint)pFVar20 + 1;
        pFVar20 = (FScriptContainerElement *)(ulonglong)uVar19;
      } while ((int)uVar19 < (int)uVar22);
      goto LAB_14c978879;
    }
  }
joined_r0x00014c97887b:
  if (uVar19 != uVar22) {
    while( true ) {
      iVar12 = (int)pFVar20;
      local_1d0[0] = iVar12;
      if (((int)local_1e8 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TVar4.Ptr = *(TArray<int,TSizedDefaultAllocator<32>_> **)local_1f0.Data;
      pFVar20 = ((TVar4.Ptr)->AllocatorInstance).Data;
      if (((pFVar20 <= (FScriptContainerElement *)local_1d0) &&
          ((FScriptContainerElement *)local_1d0 < pFVar20 + (longlong)(TVar4.Ptr)->ArrayMax * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (TVar4.Ptr)->ArrayNum;
      if (iVar11 == (TVar4.Ptr)->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(TVar4.Ptr)->AllocatorInstance,&(TVar4.Ptr)->ArrayMax);
      }
      (TVar4.Ptr)->ArrayNum = iVar11 + 1;
      uVar19 = iVar12 + 1;
      pFVar20 = (FScriptContainerElement *)(ulonglong)uVar19;
      *(int *)(((TVar4.Ptr)->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_1d0[0];
      if ((int)uVar22 <= (int)uVar19) break;
      pFVar16 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar2 = ((ulonglong)pFVar20 >> 9) * 8;
        lVar6 = (ulonglong)((uint)pFVar20 & 0x1ff) * 2;
        if ((*(short *)(lVar6 + *(longlong *)(pFVar16 + lVar2)) != 0) &&
           (*(short *)(lVar6 + *(longlong *)(pFVar16 + lVar2)) != -1)) break;
        uVar19 = (uint)pFVar20 + 1;
        pFVar20 = (FScriptContainerElement *)(ulonglong)uVar19;
        if ((int)uVar22 <= (int)uVar19) goto joined_r0x00014c97887b;
      }
    }
    goto joined_r0x00014c97887b;
  }
LAB_14c9789af:
  pTVar9 = local_180;
  pFVar8 = local_188;
  pTVar7 = local_190;
  uVar21 = 0;
  uVar18 = uVar21;
  if (0 < local_1e0.ArrayNum) {
    do {
      uVar19 = (uint)uVar21;
      local_1a8.Mesh = pFVar8;
      local_1a8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar24 = ~uVar19 >> 0x1f;
      local_1a8.Components.Array.ArrayNum = 0;
      local_1a8.Components.Array.ArrayMax = 0;
      uVar22 = 0;
      if ((int)uVar19 < (int)local_1e8) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(local_1f0.Data + uVar18) == 0) {
        local_e0 = 0;
        local_f8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::`30'::<lambda_2>,0,0>
                    ::_vftable_;
        local_f0 = pTVar9;
        local_108[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::__l30::<lambda_2>,bool,int,int>
                       ::Call;
        UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
                  (&local_1a8,(TFunction<bool___cdecl(int,int)> *)local_108);
      }
      else {
        local_110 = 0;
        local_128 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::`28'::<lambda_1>,0,0>
                     ::_vftable_;
        uVar22 = 0;
        if ((int)uVar19 < (int)local_1e8) {
          uVar22 = uVar24;
        }
        local_120 = pTVar9;
        local_138[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::__l28::<lambda_1>,bool,int,int>
                       ::Call;
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
                  (&local_1a8,*(TArray<int,TSizedDefaultAllocator<32>_> **)(local_1f0.Data + uVar18)
                   ,(TFunction<bool___cdecl(int,int)> *)local_138);
      }
      if (local_1a8.Components.Array.ArrayNum != 0) {
        uVar22 = 0;
        if ((int)uVar19 < local_1e0.ArrayNum) {
          uVar22 = uVar24;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = local_1e0.AllocatorInstance.Data + (longlong)(int)uVar19 * 8;
        iVar12 = pTVar7->ArrayNum;
        if (iVar12 == pTVar7->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
        }
        pTVar7->ArrayNum = iVar12 + 1;
        TileConnectedComponents::TileConnectedComponents
                  ((TileConnectedComponents *)
                   ((pTVar7->AllocatorInstance).Data + (longlong)iVar12 * 0x30),&local_1a8,
                   (FVector2i *)pFVar20);
      }
      TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
      ::
      ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                (&local_1a8.Components);
      uVar21 = (ulonglong)(uVar19 + 1);
      uVar18 = uVar18 + 8;
    } while ((int)(uVar19 + 1) < local_1e0.ArrayNum);
  }
  DestructItems<TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>,int>
            ((TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
              *)local_1f0.Data,(int)local_1e8);
  if (local_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data);
  }
  if ((FVector2i_u_0 *)local_1e0.AllocatorInstance.Data != (FVector2i_u_0 *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  return;
}

// ExternalUVToInternalUV @ 14c97c480

TVector2<float> __cdecl UVTexelDensityOpLocals::ExternalUVToInternalUV(TVector2<float> *param_1)

{
  float *in_RDX;
  float fVar1;
  
  fVar1 = __real_3f800000 - in_RDX[1];
  (param_1->field0_0x0)._s_0.X = *in_RDX;
  (param_1->field0_0x0)._s_0.Y = fVar1;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// InternalUVToExternalUV @ 14c9818d0

TVector2<float> __cdecl UVTexelDensityOpLocals::InternalUVToExternalUV(TVector2<float> *param_1)

{
  float *in_RDX;
  float fVar1;
  
  fVar1 = __real_3f800000 - in_RDX[1];
  (param_1->field0_0x0)._s_0.X = *in_RDX;
  (param_1->field0_0x0)._s_0.Y = fVar1;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

