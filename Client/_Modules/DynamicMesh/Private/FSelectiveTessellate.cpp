// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 12

// Cancelled @ 14c7e7df0

bool __thiscall UE::Geometry::FSelectiveTessellate::Cancelled(FSelectiveTessellate *this)

{
  FProgressCancel *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pFVar1 = this->Progress;
  if (pFVar1 == (FProgressCancel *)0x0) {
    return false;
  }
  if (pFVar1->WasCancelled != false) {
    return true;
  }
  Core::Private::Function::CheckCallable(*(void **)&pFVar1->CancelF);
  pcVar2 = *(code **)&pFVar1->CancelF;
  plVar3 = *(longlong **)&(pFVar1->CancelF).field_0x28;
  plVar6 = (longlong *)&(pFVar1->CancelF).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  bVar4 = (bool)(*pcVar2)(uVar5);
  pFVar1->WasCancelled = bVar4;
  return bVar4;
}

// Compute @ 14c7ed440

bool __thiscall UE::Geometry::FSelectiveTessellate::Compute(FSelectiveTessellate *this)

{
  FDynamicMesh3 *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  FDynamicMesh3 *pFVar4;
  
  iVar3 = (**(code **)(this->_padding_ + 8))();
  if (iVar3 != 0) {
    return false;
  }
  if (this->bInPlace == false) {
    if ((this->Mesh->TriangleRefCounts).UsedCount == 0) {
      return true;
    }
    pFVar4 = (FDynamicMesh3 *)0x0;
  }
  else {
    if ((this->ResultMesh->TriangleRefCounts).UsedCount == 0) {
      return true;
    }
    pFVar4 = ::operator_new(0x230);
    if (pFVar4 == (FDynamicMesh3 *)0x0) {
      pFVar4 = (FDynamicMesh3 *)0x0;
    }
    else {
      pFVar4 = FDynamicMesh3::FDynamicMesh3(pFVar4);
    }
    FDynamicMesh3::Copy(pFVar4,this->ResultMesh,true,true,true,true);
    this->Mesh = pFVar4;
  }
  bVar1 = SelectiveTessellateLocals::Tessellate
                    (this->Mesh,this->Pattern,this->bUseParallel,this->Progress,this->ResultMesh,
                     &this->TessInfo);
  cVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar2 == '\0') && (bVar1)) {
    bVar1 = true;
  }
  else {
    this_00 = this->ResultMesh;
    if (this->bInPlace == false) {
      FDynamicMesh3::Clear(this_00);
    }
    else {
      FDynamicMesh3::operator=(this_00,pFVar4);
    }
    bVar1 = false;
  }
  if (pFVar4 != (FDynamicMesh3 *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  return bVar1;
}

// CreateConcentricRingsPatternFromMaterial @ 14c7fbec0

TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
__cdecl UE::Geometry::FSelectiveTessellate::CreateConcentricRingsPatternFromMaterial
                  (FDynamicMesh3 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
  TVar6;
  int iVar7;
  longlong lVar8;
  undefined4 in_register_00000014;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int in_R9D;
  ForAnyElementType FVar13;
  uint local_38 [2];
  ForAnyElementType local_30;
  undefined8 local_28;
  
  lVar9 = CONCAT44(in_register_00000014,param_2);
  if ((*(longlong *)(lVar9 + 0x208) == 0) ||
     (*(longlong *)(*(longlong *)(lVar9 + 0x208) + 0x48) == 0)) {
    param_1->_padding_ = 0;
    return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
            )(FTessellationPattern *)param_1;
  }
  FVar13.Data = (FScriptContainerElement *)0x0;
  uVar11 = 0;
  local_30.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  local_28 = 0;
  uVar12 = *(int *)(lVar9 + 0x144) + *(int *)(lVar9 + 0x140) * 0x200;
  if ((uVar12 != 0) &&
     (puVar1 = *(undefined8 **)(lVar9 + 0x148), 0xfffd < (ushort)(*(short *)*puVar1 - 1U))) {
    uVar11 = 1;
    uVar10 = 1;
    if ((int)uVar12 < 2) goto joined_r0x00014c7fbf87;
    do {
      lVar8 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      if ((*(short *)(lVar8 + puVar1[uVar11 >> 9]) != 0) &&
         (*(short *)(lVar8 + puVar1[uVar11 >> 9]) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar12);
  }
  uVar10 = (uint)uVar11;
joined_r0x00014c7fbf87:
  do {
    if (uVar10 == uVar12) {
      CreateConcentricRingsTessellationPattern
                (param_1,param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)(uint)param_3
                );
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
              )(FTessellationPattern *)param_1;
    }
    while( true ) {
      uVar10 = (uint)uVar11;
      lVar8 = 0;
      if (*(longlong *)(lVar9 + 0x208) != 0) {
        lVar8 = *(longlong *)(lVar9 + 0x208);
      }
      local_38[0] = uVar10;
      if (*(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar8 + 0x48) + 0x20) + (uVar11 >> 9) * 8) +
                  (ulonglong)(uVar10 & 0x1ff) * 4) == in_R9D) {
        iVar5 = iVar7;
        if ((FVar13.Data <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 < FVar13.Data + (longlong)local_28._4_4_ * 4)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            TVar6.Ptr = (FTessellationPattern *)(*pcVar2)();
            return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
                    )TVar6.Ptr;
          }
          FVar13.Data = local_30.Data;
          iVar5 = (int)local_28;
        }
        if (iVar5 == local_28._4_4_) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_30,(int *)((longlong)&local_28 + 4));
          FVar13.Data = local_30.Data;
        }
        iVar7 = iVar5 + 1;
        local_28 = CONCAT44(local_28._4_4_,iVar7);
        *(uint *)(FVar13.Data + (longlong)iVar5 * 4) = local_38[0];
        FVar13.Data = local_30.Data;
      }
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar12 <= (int)uVar10) break;
      while( true ) {
        lVar8 = (uVar11 >> 9) * 8;
        lVar3 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        if ((*(short *)(lVar3 + *(longlong *)(lVar8 + *(longlong *)(lVar9 + 0x148))) != 0) &&
           (*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar9 + 0x148) + lVar8)) != -1)) break;
        uVar10 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        if ((int)uVar12 <= (int)uVar10) goto joined_r0x00014c7fbf87;
      }
    }
  } while( true );
}

// CreateConcentricRingsPatternFromPolyGroup @ 14c7fc140

TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
__cdecl UE::Geometry::FSelectiveTessellate::CreateConcentricRingsPatternFromPolyGroup
                  (FDynamicMesh3 *param_1,int param_2,FString *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar7;
  FString *pFVar8;
  TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
  TVar9;
  undefined4 in_register_00000014;
  longlong lVar10;
  uint uVar11;
  FDynamicMeshAttributeSet *pFVar12;
  int iVar13;
  uint uVar14;
  undefined4 in_register_0000008c;
  FDynamicMeshAttributeSet *pFVar15;
  FDynamicMeshAttributeSet *pFVar16;
  bool bVar17;
  FName local_res10;
  uint local_res18;
  int in_stack_00000028;
  undefined1 local_68 [48];
  
  lVar10 = CONCAT44(in_register_00000014,param_2);
  local_res18 = (uint)param_3;
  pFVar15 = (FDynamicMeshAttributeSet *)0x0;
  pFVar12 = pFVar15;
  if (*(longlong *)(lVar10 + 0x208) != 0) {
    while( true ) {
      iVar6 = (**(code **)(**(longlong **)(lVar10 + 0x208) + 200))();
      iVar13 = (int)pFVar12;
      if (iVar6 <= iVar13) break;
      pFVar12 = pFVar15;
      if (*(FDynamicMeshAttributeSet **)(lVar10 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
        pFVar12 = *(FDynamicMeshAttributeSet **)(lVar10 + 0x208);
      }
      pTVar7 = FDynamicMeshAttributeSet::GetPolygroupLayer(pFVar12,iVar13);
      local_res10.ComparisonIndex.Value = *(uint *)&pTVar7->field_0x8;
      local_res10.Number = *(uint *)&pTVar7->field_0xc;
      pFVar8 = ::FName::ToString(&local_res10,(FString *)(local_68 + 0x18));
      iVar6 = *(int *)((undefined8 *)CONCAT44(in_register_0000008c,param_4) + 1);
      iVar2 = (pFVar8->Data).ArrayNum;
      if (iVar2 == iVar6) {
        if (iVar2 < 2) {
          bVar17 = true;
        }
        else {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                             *(wchar_t **)CONCAT44(in_register_0000008c,param_4));
          bVar17 = iVar6 == 0;
        }
      }
      else {
        bVar17 = iVar6 + iVar2 == 1;
      }
      if ((FDynamicMesh3 *)local_68._24_8_ != (FDynamicMesh3 *)0x0) {
        FMemory::Free((void *)local_68._24_8_);
      }
      if (bVar17) {
        pFVar12 = pFVar15;
        if (*(FDynamicMeshAttributeSet **)(lVar10 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
          pFVar12 = *(FDynamicMeshAttributeSet **)(lVar10 + 0x208);
        }
        pTVar7 = FDynamicMeshAttributeSet::GetPolygroupLayer(pFVar12,iVar13);
        if (pTVar7 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
          local_68._8_8_ = (FDynamicMeshAttributeSet *)0x0;
          local_68._16_8_ = 0;
          uVar14 = *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144);
          pFVar12 = pFVar15;
          pFVar16 = pFVar15;
          if ((uVar14 == 0) ||
             (puVar3 = *(undefined8 **)(lVar10 + 0x148), pFVar12 = (FDynamicMeshAttributeSet *)0x0,
             (ushort)(*(short *)*puVar3 - 1U) < 0xfffe)) goto LAB_14c7fc2b5;
          pFVar12 = (FDynamicMeshAttributeSet *)&DAT_00000001;
          uVar11 = 1;
          if (1 < (int)uVar14) goto LAB_14c7fc280;
          goto joined_r0x00014c7fc2b7;
        }
        break;
      }
      pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar13 + 1);
    }
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
          )(FTessellationPattern *)param_1;
  while (uVar11 = (uint)pFVar12 + 1, pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uVar11,
        (int)uVar11 < (int)uVar14) {
LAB_14c7fc280:
    lVar1 = (ulonglong)((uint)pFVar12 & 0x1ff) * 2;
    if ((*(short *)(lVar1 + puVar3[(ulonglong)pFVar12 >> 9]) != 0) &&
       (*(short *)(lVar1 + puVar3[(ulonglong)pFVar12 >> 9]) != -1)) break;
  }
LAB_14c7fc2b5:
  uVar11 = (uint)pFVar12;
joined_r0x00014c7fc2b7:
  do {
    if (uVar11 == uVar14) {
      CreateConcentricRingsTessellationPattern
                (param_1,param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)local_res18);
      if ((FDynamicMeshAttributeSet *)local_68._8_8_ != (FDynamicMeshAttributeSet *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
              )(FTessellationPattern *)param_1;
    }
    while( true ) {
      uVar11 = (uint)pFVar12;
      local_68._0_4_ = uVar11;
      if (*(int *)(*(longlong *)(*(longlong *)&pTVar7->field_0x20 + ((ulonglong)pFVar12 >> 9) * 8) +
                  (ulonglong)(uVar11 & 0x1ff) * 4) == in_stack_00000028) {
        iVar6 = (int)pFVar15;
        if ((pFVar16 <= (FDynamicMeshAttributeSet *)local_68) &&
           (local_68 <
            (undefined1 *)((longlong)&pFVar16->_padding_ + (longlong)(int)local_68._20_4_ * 4))) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar17) {
            pcVar4 = (code *)swi(3);
            TVar9.Ptr = (FTessellationPattern *)(*pcVar4)();
            return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
                    )TVar9.Ptr;
          }
          pFVar16 = (FDynamicMeshAttributeSet *)local_68._8_8_;
          iVar6 = local_68._16_4_;
        }
        if (iVar6 == local_68._20_4_) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(local_68 + 8),(int *)(local_68 + 0x14));
          pFVar16 = (FDynamicMeshAttributeSet *)local_68._8_8_;
        }
        local_68._16_4_ = iVar6 + 1U;
        *(undefined4 *)((longlong)&pFVar16->_padding_ + (longlong)iVar6 * 4) = local_68._0_4_;
        pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar6 + 1U);
        pFVar16 = (FDynamicMeshAttributeSet *)local_68._8_8_;
      }
      uVar11 = uVar11 + 1;
      pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uVar11;
      if ((int)uVar14 <= (int)uVar11) break;
      while( true ) {
        lVar1 = ((ulonglong)pFVar12 >> 9) * 8;
        lVar5 = (ulonglong)((uint)pFVar12 & 0x1ff) * 2;
        if ((*(short *)(lVar5 + *(longlong *)(lVar1 + *(longlong *)(lVar10 + 0x148))) != 0) &&
           (*(short *)(lVar5 + *(longlong *)(*(longlong *)(lVar10 + 0x148) + lVar1)) != -1)) break;
        uVar11 = (uint)pFVar12 + 1;
        pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uVar11;
        if ((int)uVar14 <= (int)uVar11) goto joined_r0x00014c7fc2b7;
      }
    }
  } while( true );
}

// CreateConcentricRingsPatternFromSelectionAndMaterial @ 14c7fc430

TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
__cdecl UE::Geometry::FSelectiveTessellate::CreateConcentricRingsPatternFromSelectionAndMaterial
                  (FDynamicMesh3 *param_1,int param_2,int param_3,
                  TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
  TVar7;
  int iVar8;
  undefined4 in_register_00000014;
  uint *puVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined8 *in_stack_00000028;
  uint local_48 [2];
  ForAnyElementType local_40;
  undefined8 local_38;
  
  lVar3 = *(longlong *)(CONCAT44(in_register_00000014,param_2) + 0x208);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x48) != 0)) {
    iVar2 = *(int *)(in_stack_00000028 + 1);
    if (iVar2 != 0) {
      iVar8 = 0;
      puVar9 = (uint *)*in_stack_00000028;
      local_40.Data = (FScriptContainerElement *)0x0;
      local_38 = 0;
      puVar1 = puVar9 + iVar2;
      local_res18 = param_3;
      while( true ) {
        if (*(int *)(in_stack_00000028 + 1) != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
          iVar8 = (int)local_38;
        }
        if (puVar9 == puVar1) break;
        local_48[0] = *puVar9;
        lVar3 = *(longlong *)(CONCAT44(in_register_00000014,param_2) + 0x208);
        lVar10 = 0;
        if (lVar3 != 0) {
          lVar10 = lVar3;
        }
        if (*(int *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar10 + 0x48) + 0x20) +
                      (ulonglong)(local_48[0] >> 9) * 8) + (ulonglong)(local_48[0] & 0x1ff) * 4) ==
            (int)param_4) {
          iVar6 = iVar8;
          if ((local_40.Data <= (FScriptContainerElement *)local_48) &&
             ((FScriptContainerElement *)local_48 < local_40.Data + (longlong)local_38._4_4_ * 4)) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              TVar7.Ptr = (FTessellationPattern *)(*pcVar4)();
              return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
                      )TVar7.Ptr;
            }
            iVar6 = (int)local_38;
          }
          if (iVar6 == local_38._4_4_) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_40,(int *)((longlong)&local_38 + 4));
          }
          iVar8 = iVar6 + 1;
          local_38 = CONCAT44(local_38._4_4_,iVar8);
          *(uint *)(local_40.Data + (longlong)iVar6 * 4) = local_48[0];
        }
        puVar9 = puVar9 + 1;
      }
      CreateConcentricRingsTessellationPattern
                (param_1,param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)local_res18);
      if (local_40.Data == (FScriptContainerElement *)0x0) {
        return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
                )(FTessellationPattern *)param_1;
      }
      FMemory::Free(local_40.Data);
      return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
              )(FTessellationPattern *)param_1;
    }
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
          )(FTessellationPattern *)param_1;
}

// CreateConcentricRingsPatternFromTriangleGroup @ 14c7fc610

TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
__cdecl UE::Geometry::FSelectiveTessellate::CreateConcentricRingsPatternFromTriangleGroup
                  (FDynamicMesh3 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
  TVar7;
  int iVar8;
  undefined4 in_register_00000014;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int in_R9D;
  ForAnyElementType FVar13;
  uint local_48 [2];
  ForAnyElementType local_40;
  undefined8 local_38;
  
  lVar9 = CONCAT44(in_register_00000014,param_2);
  if (*(char *)(lVar9 + 0x1a8) == '\0') {
    param_1->_padding_ = 0;
    return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
            )(FTessellationPattern *)param_1;
  }
  FVar13.Data = (FScriptContainerElement *)0x0;
  iVar8 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  uVar11 = 0;
  local_38 = 0;
  uVar12 = *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144);
  if ((uVar12 != 0) &&
     (puVar2 = *(undefined8 **)(lVar9 + 0x148), 0xfffd < (ushort)(*(short *)*puVar2 - 1U))) {
    uVar11 = 1;
    uVar10 = 1;
    if ((int)uVar12 < 2) goto joined_r0x00014c7fc6e7;
    do {
      lVar1 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + puVar2[uVar11 >> 9]) != 0) &&
         (*(short *)(lVar1 + puVar2[uVar11 >> 9]) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar12);
  }
  uVar10 = (uint)uVar11;
joined_r0x00014c7fc6e7:
  if (uVar10 == uVar12) {
    CreateConcentricRingsTessellationPattern
              (param_1,param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)(uint)param_3);
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
            )(FTessellationPattern *)param_1;
  }
  do {
    uVar10 = (uint)uVar11;
    if (*(char *)(lVar9 + 0x1a8) == '\0') {
      iVar6 = -1;
    }
    else {
      if ((-1 < (int)uVar10) &&
         ((int)uVar10 < *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144))) {
        lVar1 = (uVar11 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar9 + 0x148) + lVar1) +
                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe) {
          iVar6 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x198) + lVar1) +
                          (ulonglong)(uVar10 & 0x1ff) * 4);
          goto LAB_14c7fc75b;
        }
      }
      iVar6 = 0;
    }
LAB_14c7fc75b:
    local_48[0] = uVar10;
    if (iVar6 == in_R9D) {
      iVar6 = iVar8;
      if ((FVar13.Data <= (FScriptContainerElement *)local_48) &&
         ((FScriptContainerElement *)local_48 < FVar13.Data + (longlong)local_38._4_4_ * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          TVar7.Ptr = (FTessellationPattern *)(*pcVar3)();
          return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
                  )TVar7.Ptr;
        }
        FVar13.Data = local_40.Data;
        iVar6 = (int)local_38;
      }
      if (iVar6 == local_38._4_4_) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_40,(int *)((longlong)&local_38 + 4));
        FVar13.Data = local_40.Data;
      }
      iVar8 = iVar6 + 1;
      local_38 = CONCAT44(local_38._4_4_,iVar8);
      *(uint *)(FVar13.Data + (longlong)iVar6 * 4) = local_48[0];
      FVar13.Data = local_40.Data;
    }
    uVar10 = uVar10 + 1;
    uVar11 = (ulonglong)uVar10;
    if ((int)uVar12 <= (int)uVar10) goto joined_r0x00014c7fc6e7;
    while( true ) {
      lVar1 = (uVar11 >> 9) * 8;
      lVar4 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      if ((*(short *)(lVar4 + *(longlong *)(lVar1 + *(longlong *)(lVar9 + 0x148))) != 0) &&
         (*(short *)(lVar4 + *(longlong *)(*(longlong *)(lVar9 + 0x148) + lVar1)) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar12 <= (int)uVar10) goto joined_r0x00014c7fc6e7;
    }
  } while( true );
}

// CreateConcentricRingsTessellationPattern @ 14c7fc8d0

TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
__cdecl UE::Geometry::FSelectiveTessellate::CreateConcentricRingsTessellationPattern
                  (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
                  TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FConcentricRingsTessellationPattern *this;
  TArray<int,TSizedDefaultAllocator<32>_> *in_R9;
  
  this = ::operator_new(0x30);
  if (this != (FConcentricRingsTessellationPattern *)0x0) {
    this->_padding_ = (longlong)param_2;
    this->_padding_ =
         (longlong)&___7FConcentricRingsTessellationPattern_SelectiveTessellateLocals__6B_;
    (this->InnerTessLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->InnerTessLevels).ArrayNum = 0;
    (this->InnerTessLevels).ArrayMax = 0;
    (this->EdgeTessLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->EdgeTessLevels).ArrayNum = 0;
    (this->EdgeTessLevels).ArrayMax = 0;
  }
  SelectiveTessellateLocals::FConcentricRingsTessellationPattern::Init(this,param_3,in_R9);
  param_1->_padding_ = (longlong)this;
  return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
          )(FTessellationPattern *)param_1;
}

// CreateConcentricRingsTessellationPattern @ 14c7fc970

TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
__cdecl UE::Geometry::FSelectiveTessellate::CreateConcentricRingsTessellationPattern
                  (FDynamicMesh3 *param_1,int param_2)

{
  FConcentricRingsTessellationPattern *pFVar1;
  undefined4 in_register_00000014;
  longlong lVar2;
  FConcentricRingsTessellationPattern *this;
  int local_res18 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  lVar2 = CONCAT44(in_register_00000014,param_2);
  this = (FConcentricRingsTessellationPattern *)0x0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_18,local_res18,*(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4));
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_28,local_res18,*(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144));
  pFVar1 = ::operator_new(0x30);
  if (pFVar1 != (FConcentricRingsTessellationPattern *)0x0) {
    pFVar1->_padding_ = lVar2;
    pFVar1->_padding_ =
         (longlong)&___7FConcentricRingsTessellationPattern_SelectiveTessellateLocals__6B_;
    (pFVar1->InnerTessLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->InnerTessLevels).ArrayNum = 0;
    (pFVar1->InnerTessLevels).ArrayMax = 0;
    (pFVar1->EdgeTessLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->EdgeTessLevels).ArrayNum = 0;
    (pFVar1->EdgeTessLevels).ArrayMax = 0;
    this = pFVar1;
  }
  SelectiveTessellateLocals::FConcentricRingsTessellationPattern::Init(this,&local_18,&local_28);
  param_1->_padding_ = (longlong)this;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
          )(FTessellationPattern *)param_1;
}

// CreateConcentricRingsTessellationPattern @ 14c7fca70

TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
__cdecl UE::Geometry::FSelectiveTessellate::CreateConcentricRingsTessellationPattern
                  (FDynamicMesh3 *param_1,int param_2,
                  TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
  TVar9;
  FConcentricRingsTessellationPattern *pFVar10;
  ulonglong uVar11;
  undefined4 in_register_00000014;
  longlong lVar12;
  FConcentricRingsTessellationPattern *this;
  uint *puVar13;
  undefined8 *in_R9;
  uint *puVar14;
  undefined4 uVar15;
  undefined1 local_res20 [8];
  undefined1 local_88 [4];
  int local_84 [3];
  uint *local_78;
  undefined8 local_70;
  uint local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  lVar12 = CONCAT44(in_register_00000014,param_2);
  this = (FConcentricRingsTessellationPattern *)0x0;
  if (*(int *)(in_R9 + 1) == 0) {
    param_1->_padding_ = 0;
    return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
            )(FTessellationPattern *)param_1;
  }
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  local_84[0] = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_60,local_84,*(int *)(lVar12 + 0x1d0) * 0x200 + *(int *)(lVar12 + 0x1d4));
  puVar14 = (uint *)*in_R9;
  iVar1 = *(int *)(in_R9 + 1);
  local_78 = puVar14 + iVar1;
  while( true ) {
    puVar13 = local_78;
    if (*(int *)(in_R9 + 1) != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    uVar15 = SUB84(param_3,0);
    uVar8 = 0;
    if (puVar14 == puVar13) {
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = 0;
      local_50.ArrayMax = 0;
      local_84[1] = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::Init
                (&local_50,local_84 + 1,*(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144))
      ;
      puVar13 = (uint *)*in_R9;
      iVar1 = *(int *)(in_R9 + 1);
      puVar14 = puVar13 + iVar1;
      while( true ) {
        if (*(int *)(in_R9 + 1) != iVar1) {
          local_88[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_88);
        }
        if (puVar13 == puVar14) {
          pFVar10 = ::operator_new(0x30);
          if (pFVar10 != (FConcentricRingsTessellationPattern *)0x0) {
            pFVar10->_padding_ = lVar12;
            pFVar10->_padding_ =
                 (longlong)&___7FConcentricRingsTessellationPattern_SelectiveTessellateLocals__6B_;
            (pFVar10->InnerTessLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar10->InnerTessLevels).ArrayNum = 0;
            (pFVar10->InnerTessLevels).ArrayMax = 0;
            (pFVar10->EdgeTessLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar10->EdgeTessLevels).ArrayNum = 0;
            (pFVar10->EdgeTessLevels).ArrayMax = 0;
            this = pFVar10;
          }
          SelectiveTessellateLocals::FConcentricRingsTessellationPattern::Init
                    (this,&local_60,&local_50);
          param_1->_padding_ = (longlong)this;
          if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.AllocatorInstance.Data);
          }
          if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.AllocatorInstance.Data);
          }
          return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
                  )(FTessellationPattern *)param_1;
        }
        uVar2 = *puVar13;
        uVar7 = uVar8;
        if ((int)uVar2 < local_50.ArrayNum) {
          uVar7 = ~uVar2 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        puVar13 = puVar13 + 1;
        *(undefined4 *)(local_50.AllocatorInstance.Data + (longlong)(int)uVar2 * 4) = uVar15;
      }
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FTessellationPattern *)(*pcVar4)();
      return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
              )TVar9.Ptr;
    }
    uVar11 = (ulonglong)(*puVar14 & 0x1ff);
    lVar3 = *(longlong *)(*(longlong *)(lVar12 + 0x180) + (ulonglong)(*puVar14 >> 9) * 8);
    local_70 = *(undefined8 *)(lVar3 + uVar11 * 0xc);
    uVar2 = *(uint *)(lVar3 + 8 + uVar11 * 0xc);
    uVar7 = (uint)local_70;
    uVar6 = 0;
    if ((int)(uint)local_70 < local_60.ArrayNum) {
      uVar6 = ~(uint)local_70 >> 0x1f;
    }
    local_68 = uVar2;
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    uVar6 = local_70._4_4_;
    *(undefined4 *)(local_60.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = uVar15;
    uVar7 = uVar8;
    if ((int)local_70._4_4_ < local_60.ArrayNum) {
      uVar7 = ~local_70._4_4_ >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FTessellationPattern *)(*pcVar4)();
      return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
              )TVar9.Ptr;
    }
    *(undefined4 *)(local_60.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar15;
    if ((int)uVar2 < local_60.ArrayNum) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FTessellationPattern *)(*pcVar4)();
      return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
              )TVar9.Ptr;
    }
    puVar14 = puVar14 + 1;
    *(undefined4 *)(local_60.AllocatorInstance.Data + (longlong)(int)uVar2 * 4) = uVar15;
  }
  pcVar4 = (code *)swi(3);
  TVar9.Ptr = (FTessellationPattern *)(*pcVar4)();
  return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
          )TVar9.Ptr;
}

// CreateConcentricRingsTessellationPattern @ 14c7fcdc0

TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
__cdecl UE::Geometry::FSelectiveTessellate::CreateConcentricRingsTessellationPattern
                  (TFunctionRef<int___cdecl(int)> *param_1,TFunctionRef<int___cdecl(int)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
  TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                     ,0x7d2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FTessellationPattern *)(*pcVar1)();
    return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
            )TVar3.Ptr;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
          )(FTessellationPattern *)param_1;
}

// CreateInnerUnifromTessellationPattern @ 14c7fcf70

TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
__cdecl UE::Geometry::FSelectiveTessellate::CreateInnerUnifromTessellationPattern
                  (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
                  TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
  TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                     ,0x854,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FTessellationPattern *)(*pcVar1)();
    return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
            )TVar3.Ptr;
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
          )(FTessellationPattern *)param_1;
}

// CreateRedGreenTessellationPattern @ 14c7fd150

TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
__cdecl UE::Geometry::FSelectiveTessellate::CreateRedGreenTessellationPattern
                  (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FRedGreenTessellationPattern *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *in_R8;
  
  pFVar1 = ::operator_new(0x20);
  if (pFVar1 != (FRedGreenTessellationPattern *)0x0) {
    pFVar1 = FRedGreenTessellationPattern::FRedGreenTessellationPattern
                       (pFVar1,(FDynamicMesh3 *)param_2,in_R8);
    param_1->_padding_ = (longlong)pFVar1;
    return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
            )(FTessellationPattern *)param_1;
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
          )(FTessellationPattern *)param_1;
}

