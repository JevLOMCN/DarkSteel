// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 9

// Select<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 14c8783b0

bool __thiscall
UE::Geometry::FGeometrySelectionEditor::
Select<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (FGeometrySelectionEditor *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,
          FGeometrySelectionDelta *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [16];
  ulong64 local_res20;
  ulong64 local_48 [2];
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  iVar9 = 0;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar10 == pFVar2) break;
    local_48[0] = *(ulong64 *)pFVar10;
    bVar6 = IsSelected(this,local_48[0]);
    if (!bVar6) {
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Emplace<unsigned___int64_const_&>
                (&this->TargetSelection->Selection,&local_res20,(bool *)local_48);
      pFVar4 = (param_2->Added).AllocatorInstance.Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_48) &&
         ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)(param_2->Added).ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      iVar8 = (param_2->Added).ArrayNum;
      piVar1 = &(param_2->Added).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_2->Added).AllocatorInstance,piVar1);
      }
      iVar9 = iVar9 + 1;
      (param_2->Added).ArrayNum = iVar8 + 1;
      *(ulong64 *)((param_2->Added).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_48[0];
    }
    pFVar10 = pFVar10 + 8;
  }
  return 0 < iVar9;
}

// ClearSelection @ 14c8c7190

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::FGeometrySelectionEditor::ClearSelection
          (FGeometrySelectionEditor *this,FGeometrySelectionDelta *param_1)

{
  undefined1 *puVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FGeometrySelection *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res18 [8];
  int local_res20;
  undefined8 local_a0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar5 = this->TargetSelection;
  iStack_90 = 0;
  iVar10 = *(int *)&(pFVar5->Selection).Elements.field_0x28;
  puVar1 = &(pFVar5->Selection).Elements.field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  pTVar2 = &pFVar5->Selection;
  iStack_7c = 0;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&(pFVar5->Selection).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14c8c723d;
      uVar13 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar10 < iStack_7c) {
      iStack_7c = iVar10;
    }
  }
LAB_14c8c723d:
  iStack_70 = *(int *)&(pFVar5->Selection).Elements.field_0x8 -
              *(int *)&(pFVar5->Selection).Elements.field_0x34;
  uVar13 = *(uint *)&(pFVar5->Selection).Elements.field_0x28;
  uStack_80 = 0xffffffff;
  uVar17 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(pFVar5->Selection).Elements.field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&(pFVar5->Selection).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14c8c7340;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_14c8c7340:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    piVar14 = &(param_1->Removed).ArrayMax;
    local_a0 = *(undefined8 *)
                (*(longlong *)&pTVar8->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    pFVar6 = (param_1->Removed).AllocatorInstance.Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 < pFVar6 + (longlong)*piVar14 * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (param_1->Removed).ArrayNum;
    if (iVar10 == *piVar14) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)param_1,piVar14);
    }
    (param_1->Removed).ArrayNum = iVar10 + 1;
    *(undefined8 *)((param_1->Removed).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_a0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
            (&this->TargetSelection->Selection);
  return;
}

// Initialize @ 14c8fbe40

void __thiscall
UE::Geometry::FGeometrySelectionEditor::Initialize
          (FGeometrySelectionEditor *this,FGeometrySelection *param_1,
          FGeometrySelectionHitQueryConfig *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FGeometrySelection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetSelectionIn != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\GeometrySelection.cpp"
                       ,0xb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->TargetSelection = param_1;
  UpdateQueryConfig(this,param_2,param_3);
  return;
}

// Initialize @ 14c8fbec0

void __thiscall
UE::Geometry::FGeometrySelectionEditor::Initialize
          (FGeometrySelectionEditor *this,FGeometrySelection *param_1,bool param_2)

{
  EGeometryElementType EVar1;
  code *pcVar2;
  bool bVar3;
  uint local_10;
  
  if (param_1 == (FGeometrySelection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetSelectionIn != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\GeometrySelection.cpp"
                       ,0x12,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->TargetSelection = param_1;
  EVar1 = param_1->ElementType;
  local_10 = local_10 & 0xffff0000;
  (this->QueryConfig).TopologyType = param_1->TopologyType;
  (this->QueryConfig).ElementType = EVar1;
  this->bEnableTopologyIDFiltering = param_2;
  (this->QueryConfig).bOnlyVisible = (bool)(undefined1)local_10;
  (this->QueryConfig).bHitBackFaces = (bool)local_10._1_1_;
  *(undefined2 *)&(this->QueryConfig).field_0xa = local_10._2_2_;
  return;
}

// IsSelected @ 14c902210

bool __thiscall
UE::Geometry::FGeometrySelectionEditor::IsSelected(FGeometrySelectionEditor *this,ulong64 param_1)

{
  FGeometrySelection *pFVar1;
  longlong lVar2;
  int iVar3;
  ulong64 *puVar4;
  ForElementType<FSetElementId> FVar5;
  undefined4 local_res8 [8];
  
  pFVar1 = this->TargetSelection;
  if (this->bEnableTopologyIDFiltering != false) {
    local_res8[0] = (undefined4)(param_1 >> 0x20);
    puVar4 = AlgoImpl::
             FindByPredicate<TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_&,_UE::Geometry::FGeometrySelectionEditor::RemapToExistingTopologyID_::__l2::<lambda_1>_>
                       (&pFVar1->Selection,(<lambda_1>)local_res8);
    return puVar4 != (ulong64 *)0x0;
  }
  if (*(int *)&(pFVar1->Selection).Elements.field_0x8 !=
      *(int *)&(pFVar1->Selection).Elements.field_0x34) {
    FVar5 = (pFVar1->Selection).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(pFVar1->Selection).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    ((param_1 >> 0x20) * 0x17 + param_1 &
                    (ulonglong)((pFVar1->Selection).HashSize - 1)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(pFVar1->Selection).Elements;
      do {
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x10) == param_1) goto LAB_14c90229a;
        iVar3 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14c90229a:
  return iVar3 != -1;
}

// RemapToExistingTopologyID @ 14c9129b0

ulong64 __thiscall
UE::Geometry::FGeometrySelectionEditor::RemapToExistingTopologyID
          (FGeometrySelectionEditor *this,ulong64 param_1,bool *param_2)

{
  ulong64 *puVar1;
  undefined4 local_res8 [2];
  
  *param_2 = false;
  local_res8[0] = (undefined4)(param_1 >> 0x20);
  puVar1 = AlgoImpl::
           FindByPredicate<TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_&,_UE::Geometry::FGeometrySelectionEditor::RemapToExistingTopologyID_::__l2::<lambda_1>_>
                     (&this->TargetSelection->Selection,(<lambda_1>)local_res8);
  if (puVar1 != (ulong64 *)0x0) {
    *param_2 = true;
    return *puVar1;
  }
  return param_1;
}

// RemoveFromSelection @ 14c913f10

bool __thiscall
UE::Geometry::FGeometrySelectionEditor::RemoveFromSelection
          (FGeometrySelectionEditor *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  undefined4 local_res8 [8];
  
  if (this->bEnableTopologyIDFiltering != false) {
    local_res8[0] = (undefined4)(param_1 >> 0x20);
    puVar2 = AlgoImpl::
             FindByPredicate<TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_&,_UE::Geometry::FGeometrySelectionEditor::RemapToExistingTopologyID_::__l2::<lambda_1>_>
                       (&this->TargetSelection->Selection,(<lambda_1>)local_res8);
    if (puVar2 == (ulong64 *)0x0) {
      return false;
    }
    param_1 = *puVar2;
  }
  iVar1 = TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Remove
                    (&this->TargetSelection->Selection,param_1);
  return 0 < iVar1;
}

// Replace @ 14c913fa0

bool __thiscall
UE::Geometry::FGeometrySelectionEditor::Replace
          (FGeometrySelectionEditor *this,FGeometrySelection *param_1,
          FGeometrySelectionDelta *param_2)

{
  undefined1 *puVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  FGeometrySelection *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForElementType<unsigned_int> FVar7;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  ForElementType<unsigned_int> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res20 [8];
  undefined1 local_168 [4];
  uint local_164;
  undefined8 local_160;
  undefined8 local_158;
  ForElementType<unsigned_int> local_150;
  ulonglong local_148;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  ulong64 local_100;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_f8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  pFVar4 = this->TargetSelection;
  if (pFVar4->ElementType == param_1->ElementType) {
    if (pFVar4->TopologyType == param_1->TopologyType) {
      local_140 = &pFVar4->Selection;
      iVar11 = *(int *)&(pFVar4->Selection).Elements.field_0x28;
      local_150 = (ForElementType<unsigned_int>)&(pFVar4->Selection).Elements.field_0x10;
      iStack_138 = 0;
      local_148 = 1;
      local_120 = 0;
      uStack_134 = 1;
      iStack_124 = 0;
      if (iVar11 != 0) {
        puVar20 = *(uint **)&(pFVar4->Selection).Elements.field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)local_150;
        }
        uStack_134 = *puVar20;
        local_120 = 0;
        while (uStack_134 == 0) {
          lVar13 = (longlong)iStack_138;
          local_120 = local_120 + 0x20;
          iStack_138 = iStack_138 + 1;
          uStack_134 = 1;
          iStack_124 = iVar11;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138)
          goto LAB_14c91410d;
          uStack_134 = (puVar20 + 1)[lVar13];
        }
        uStack_134 = -uStack_134 & uStack_134;
        uVar3 = (ulonglong)uStack_134 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_110 = (int)lVar13;
        iStack_124 = local_120 + -1 + local_110;
        if (iVar11 < iStack_124) {
          iStack_124 = iVar11;
        }
      }
LAB_14c91410d:
      local_164 = *(uint *)&(pFVar4->Selection).Elements.field_0x28;
      iStack_118 = *(int *)&(pFVar4->Selection).Elements.field_0x8 -
                   *(int *)&(pFVar4->Selection).Elements.field_0x34;
      uVar21 = local_164 & 0xffffffe0;
      TStack_b8._padding_ = CONCAT44(uStack_134,iStack_138);
      uStack_128 = 0xffffffff;
      TStack_b8.CurrentBitIndex = iStack_124;
      TStack_b8.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)local_164 >> 5;
      TStack_b8._28_4_ = local_44;
      TStack_b8.BaseBitIndex = local_120;
      uStack_98 = CONCAT44(uStack_114,iStack_118);
      bVar12 = (byte)local_164;
      local_130 = (undefined1 *)local_150;
      local_f8 = local_140;
      local_c0 = local_140;
      TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_150;
      if ((((int)local_164 < 0) || (iVar11 < (int)local_164)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pTVar2 = local_f8;
      FVar7 = local_150;
      uVar16 = *(int *)((longlong)local_150 + 0x18);
      uVar15 = local_164;
      if (local_164 != uVar16) {
        FVar18 = *(ForElementType<unsigned_int> *)((longlong)local_150 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_150 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_150;
        }
        uVar15 = -1 << (bVar12 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar14 * 4);
        while (uVar15 == 0) {
          lVar13 = (longlong)iVar14;
          uVar21 = uVar21 + 0x20;
          iVar14 = iVar14 + 1;
          local_164 = uVar16;
          uVar15 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14c914230;
          uVar15 = *(uint *)((undefined1 *)((longlong)FVar18 + 4) + lVar13 * 4);
        }
        uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_10c = (int)lVar13;
        local_164 = local_10c + -1 + uVar21;
        uVar15 = local_164;
        if ((int)uVar16 < (int)local_164) {
          local_164 = uVar16;
          uVar15 = uVar16;
        }
      }
LAB_14c914230:
      while( true ) {
        pTVar8 = local_c0;
        if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
            (int)uStack_98) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_b8.CurrentBitIndex == uVar15) &&
            ((ForElementType<unsigned_int>)TStack_b8.Array == FVar7)) && (pTVar8 == pTVar2)) break;
        piVar17 = &(param_2->Removed).ArrayMax;
        local_158 = *(undefined8 *)
                     (*(longlong *)&pTVar8->Elements + (longlong)TStack_b8.CurrentBitIndex * 0x10);
        pFVar5 = (param_2->Removed).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_158) &&
            ((FScriptContainerElement *)&local_158 < pFVar5 + (longlong)*piVar17 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        iVar11 = (param_2->Removed).ArrayNum;
        if (iVar11 == *piVar17) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)param_2,piVar17);
        }
        (param_2->Removed).ArrayNum = iVar11 + 1;
        *(undefined8 *)((param_2->Removed).AllocatorInstance.Data + (longlong)iVar11 * 8) =
             local_158;
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
      }
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
                (&this->TargetSelection->Selection);
      iStack_e8 = 0;
      iVar11 = *(int *)&(param_1->Selection).Elements.field_0x28;
      puVar1 = &(param_1->Selection).Elements.field_0x10;
      local_d0 = 0;
      pTVar2 = &param_1->Selection;
      iStack_d4 = 0;
      if (iVar11 != 0) {
        puVar20 = *(uint **)&(param_1->Selection).Elements.field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)puVar1;
        }
        uVar21 = *puVar20;
        while (uVar21 == 0) {
          lVar13 = (longlong)iStack_e8;
          local_d0 = local_d0 + 0x20;
          iStack_e8 = iStack_e8 + 1;
          iStack_d4 = iVar11;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8)
          goto LAB_14c914322;
          uVar21 = puVar20[lVar13 + 1];
        }
        local_148 = (ulonglong)(-uVar21 & uVar21);
        uVar3 = local_148 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_108 = (int)lVar13;
        iStack_d4 = local_d0 + -1 + local_108;
        if (iVar11 < iStack_d4) {
          iStack_d4 = iVar11;
        }
      }
LAB_14c914322:
      uVar21 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      uStack_e4 = (undefined4)local_148;
      iStack_cc = iStack_124;
      iStack_c8 = *(int *)&(param_1->Selection).Elements.field_0x8 -
                  *(int *)&(param_1->Selection).Elements.field_0x34;
      uVar16 = uVar21 & 0xffffffe0;
      TStack_88._padding_ = CONCAT44(uStack_e4,iStack_e8);
      uStack_d8 = 0xffffffff;
      TStack_88.CurrentBitIndex = iStack_d4;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar21 >> 5;
      TStack_88._28_4_ = iStack_124;
      TStack_88.BaseBitIndex = local_d0;
      uStack_68 = CONCAT44(uStack_c4,iStack_c8);
      local_f0 = pTVar2;
      local_e0 = puVar1;
      local_90 = pTVar2;
      TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar21 < 0) || (iVar11 < (int)uVar21)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      uVar15 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      if (uVar21 != uVar15) {
        puVar19 = *(undefined1 **)&(param_1->Selection).Elements.field_0x20;
        if (puVar19 == (undefined1 *)0x0) {
          puVar19 = puVar1;
        }
        uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
        while (uVar21 == 0) {
          lVar13 = (longlong)iVar14;
          uVar16 = uVar16 + 0x20;
          iVar14 = iVar14 + 1;
          uVar21 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14c914440;
          uVar21 = *(uint *)(puVar19 + lVar13 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_104 = (int)lVar13;
        uVar21 = local_104 + -1 + uVar16;
        if ((int)uVar15 < (int)uVar21) {
          uVar21 = uVar15;
        }
      }
LAB_14c914440:
      while( true ) {
        pTVar8 = local_90;
        if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
            (int)uStack_68) {
          local_168[0] = 0;
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
        }
        if (((TStack_88.CurrentBitIndex == uVar21) &&
            (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar8 == pTVar2)) break;
        local_160 = *(undefined8 *)
                     (*(longlong *)&pTVar8->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64_const_&>
                  (&this->TargetSelection->Selection,&local_100,(bool *)&local_160);
        pFVar5 = (param_2->Added).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 <
             pFVar5 + (longlong)(param_2->Added).ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        iVar11 = (param_2->Added).ArrayNum;
        piVar17 = &(param_2->Added).ArrayMax;
        if (iVar11 == *piVar17) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(param_2->Added).AllocatorInstance,piVar17);
        }
        (param_2->Added).ArrayNum = iVar11 + 1;
        *(undefined8 *)((param_2->Added).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_160;
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
      return true;
    }
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5312446418516967333>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\GeometrySelection.cpp"
                       ,0x5b,"TargetSelection->TopologyType == NewSelection.TopologyType");
    if (!bVar9) {
      return false;
    }
  }
  else {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5312446418516967334>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\GeometrySelection.cpp"
                       ,0x5a,"TargetSelection->ElementType == NewSelection.ElementType");
    if (!bVar9) {
      return false;
    }
  }
  pcVar6 = (code *)swi(3);
  uVar10 = (*pcVar6)();
  return (bool)uVar10;
}

// UpdateQueryConfig @ 14c923590

void __thiscall
UE::Geometry::FGeometrySelectionEditor::UpdateQueryConfig
          (FGeometrySelectionEditor *this,FGeometrySelectionHitQueryConfig *param_1,bool param_2)

{
  code *pcVar1;
  EGeometryElementType EVar2;
  bool bVar3;
  undefined2 uVar4;
  bool bVar5;
  
  if (param_1->ElementType != this->TargetSelection->ElementType) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewConfig.ElementType == TargetSelection->ElementType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\GeometrySelection.cpp"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->TopologyType != this->TargetSelection->TopologyType) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewConfig.TopologyType == TargetSelection->TopologyType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Selections\\GeometrySelection.cpp"
                       ,0x1c,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar2 = param_1->ElementType;
  (this->QueryConfig).TopologyType = param_1->TopologyType;
  (this->QueryConfig).ElementType = EVar2;
  bVar5 = param_1->bOnlyVisible;
  bVar3 = param_1->bHitBackFaces;
  uVar4 = *(undefined2 *)&param_1->field_0xa;
  this->bEnableTopologyIDFiltering = param_2;
  (this->QueryConfig).bOnlyVisible = bVar5;
  (this->QueryConfig).bHitBackFaces = bVar3;
  *(undefined2 *)&(this->QueryConfig).field_0xa = uVar4;
  return;
}

