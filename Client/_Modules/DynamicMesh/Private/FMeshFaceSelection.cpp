// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// Select<TArray<int,TSizedDefaultAllocator<32>_>,TCheckedPointerIterator<int,int,0>_> @ 14c7a0060

void __thiscall
UE::Geometry::FMeshFaceSelection::
Select<TArray<int,TSizedDefaultAllocator<32>_>,TCheckedPointerIterator<int,int,0>_>
          (FMeshFaceSelection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  uint local_res10 [2];
  int local_res18 [4];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = *(uint *)pFVar5;
    pFVar4 = this->Mesh;
    if (((-1 < (int)uVar3) &&
        ((int)uVar3 <
         (int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
       ((ushort)(*(short *)(*(longlong *)
                             ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) <
        0xfffe)) {
      local_res10[0] = uVar3;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->Selected,local_res18,(bool *)local_res10);
    }
    pFVar5 = pFVar5 + 4;
  }
  return;
}

// ClipFins @ 14c7e8a30

bool __thiscall UE::Geometry::FMeshFaceSelection::ClipFins(FMeshFaceSelection *this,bool param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  char cVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  char local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  uint local_e8 [2];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  int local_d0 [2];
  uint local_c8 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  int local_88 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  this_00 = &this->Selected;
  local_b0 = &(this->Selected).Elements.field_0x10;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  iVar11 = *(int *)&(this->Selected).Elements.field_0x28;
  uStack_b4 = 1;
  iStack_b8 = 0;
  local_a0 = 0;
  iStack_a4 = iStack_b8;
  if (iVar11 != 0) {
    puVar19 = *(uint **)&(this->Selected).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_b0;
    }
    uVar17 = *puVar19;
    local_a0 = 0;
    iStack_b8 = 0;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14c7e8ade;
      uVar17 = puVar19[lVar12 + 1];
    }
    uStack_b4 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_90 = (int)lVar12;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar11 < iStack_a4) {
      iStack_a4 = iVar11;
    }
  }
LAB_14c7e8ade:
  uVar17 = *(uint *)&(this->Selected).Elements.field_0x28;
  puVar1 = &(this->Selected).Elements.field_0x10;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_98 = *(int *)&(this->Selected).Elements.field_0x8 -
              *(int *)&(this->Selected).Elements.field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_a4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_b4,iStack_b8);
  iVar14 = (int)uVar17 >> 5;
  TStack_78._28_4_ = iStack_a4;
  TStack_78.BaseBitIndex = local_a0;
  uStack_58 = CONCAT44(uStack_94,iStack_98);
  local_res10 = param_1;
  local_c0 = this_00;
  iStack_9c = iStack_a4;
  local_80 = this_00;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
  if ((((int)uVar17 < 0) || (iVar11 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  cVar7 = local_res10;
  uVar4 = *(uint *)&(this->Selected).Elements.field_0x28;
  if (uVar17 != uVar4) {
    puVar18 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14c7e8be1;
      uVar17 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_8c = (int)lVar12;
    uVar17 = local_8c + -1 + uVar16;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_14c7e8be1:
  do {
    pTVar8 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar17) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == this_00))
    {
      iVar11 = (int)local_d8;
      pFVar2 = local_e0.Data + (longlong)(int)local_d8 * 4;
      FVar15.Data = local_e0.Data;
      while( true ) {
        if ((int)local_d8 != iVar11) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar15.Data == pFVar2) break;
        local_c8[0] = *(uint *)FVar15.Data;
        if (*(int *)&(this->Selected).Elements.field_0x8 !=
            *(int *)&(this->Selected).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (this_00,local_c8[0],(int *)local_c8);
        }
        FVar15.Data = FVar15.Data + 4;
      }
      bVar9 = 0 < (int)local_d8;
      if (local_e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      return bVar9;
    }
    local_e8[0] = *(uint *)(*(longlong *)&pTVar8->Elements +
                           (longlong)TStack_78.CurrentBitIndex * 0xc);
    if (*(int *)&(this->Selected).Elements.field_0x8 !=
        *(int *)&(this->Selected).Elements.field_0x34) {
      FVar5 = (this->Selected).Hash.SecondaryData;
      FVar13 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FVar13 = FVar5;
      }
      iVar11 = *(int *)((longlong)FVar13 +
                       (ulonglong)((this->Selected).HashSize - 1U & local_e8[0]) * 4);
      if (iVar11 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar11 * 0xc) == local_e8[0]) {
            count_nbrs(this,local_e8[0],local_d0,local_res20,local_88);
            if (((local_d0[0] == 1) && (local_res20[0] == 2)) ||
               ((cVar7 == '\x01' && ((local_d0[0] == 0 && (local_res20[0] == 3)))))) {
              if ((local_e0.Data <= (FScriptContainerElement *)local_e8) &&
                 (((FScriptContainerElement *)local_e8 <
                   local_e0.Data + (longlong)local_d8._4_4_ * 4 &&
                  (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar9)))) {
                pcVar6 = (code *)swi(3);
                uVar10 = (*pcVar6)();
                return (bool)uVar10;
              }
              iVar11 = (int)local_d8;
              if ((int)local_d8 == local_d8._4_4_) {
                iVar11 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_e0,(int *)((longlong)&local_d8 + 4));
              }
              local_d8 = CONCAT44(local_d8._4_4_,iVar11 + 1);
              *(uint *)(local_e0.Data + (longlong)iVar11 * 4) = local_e8[0];
            }
            break;
          }
          iVar11 = *(int *)(*(longlong *)&this_00->Elements + 4 + (longlong)iVar11 * 0xc);
        } while (iVar11 != -1);
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// DeselectAll @ 14c7ffa10

void __thiscall UE::Geometry::FMeshFaceSelection::DeselectAll(FMeshFaceSelection *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->Selected;
  bVar3 = 1 < (this->Selected).HashSize;
  if (!bVar3) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->Selected).Elements.field_0xc;
  *(undefined4 *)&(this->Selected).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Selected).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Selected).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->Selected).Elements.field_0x2c;
  *(undefined4 *)&(this->Selected).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Selected).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Selected).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->Selected).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return;
}

// FillEars @ 14c8052d0

bool __thiscall UE::Geometry::FMeshFaceSelection::FillEars(FMeshFaceSelection *this,bool param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  ForElementType<FSetElementId> FVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  uint local_e8 [2];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  uint local_c8 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  int local_88 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FIndex3i local_50 [2];
  
  this_00 = &this->Selected;
  local_b0 = &(this->Selected).Elements.field_0x10;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  iVar9 = *(int *)&(this->Selected).Elements.field_0x28;
  iStack_b8 = 0;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = iStack_b8;
  if (iVar9 != 0) {
    puVar18 = *(uint **)&(this->Selected).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_b0;
    }
    uVar15 = *puVar18;
    local_a0 = 0;
    iStack_b8 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14c80537e;
      uVar15 = puVar18[lVar10 + 1];
    }
    uStack_b4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_b4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_90 = (int)lVar10;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar9 < iStack_a4) {
      iStack_a4 = iVar9;
    }
  }
LAB_14c80537e:
  uVar15 = *(uint *)&(this->Selected).Elements.field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_98 = *(int *)&(this->Selected).Elements.field_0x8 -
              *(int *)&(this->Selected).Elements.field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_a4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_b4,iStack_b8);
  iVar12 = (int)uVar15 >> 5;
  TStack_78._28_4_ = iStack_a4;
  TStack_78.BaseBitIndex = local_a0;
  uStack_58 = CONCAT44(uStack_94,iStack_98);
  local_c0 = this_00;
  iStack_9c = iStack_a4;
  local_80 = this_00;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar3 = *(uint *)&(this->Selected).Elements.field_0x28;
  if (uVar15 != uVar3) {
    puVar16 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->Selected).Elements.field_0x10;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14c805480;
      uVar15 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_8c = (int)lVar10;
    uVar15 = local_8c + -1 + uVar14;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_14c805480:
  do {
    pTVar6 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar15) &&
        (TStack_78.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->Selected).Elements.field_0x10)) &&
       (pTVar6 == this_00)) {
      iVar9 = (int)local_d8;
      pFVar1 = local_e0.Data + (longlong)(int)local_d8 * 4;
      FVar13.Data = local_e0.Data;
      while( true ) {
        if ((int)local_d8 != iVar9) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar13.Data == pFVar1) break;
        local_c8[0] = *(uint *)FVar13.Data;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_00,local_88,(bool *)local_c8);
        FVar13.Data = FVar13.Data + 4;
      }
      bVar7 = 0 < (int)local_d8;
      if (local_e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      return bVar7;
    }
    FDynamicMesh3::GetTriNeighbourTris
              (this->Mesh,local_50,
               *(int *)(*(longlong *)&pTVar6->Elements + (longlong)TStack_78.CurrentBitIndex * 0xc))
    ;
    lVar10 = 0;
    do {
      local_e8[0] = local_50[0].field0_0x0.ABC[lVar10];
      if (*(int *)&(this->Selected).Elements.field_0x8 !=
          *(int *)&(this->Selected).Elements.field_0x34) {
        FVar4 = (this->Selected).Hash.SecondaryData;
        FVar17 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
        FVar11 = FVar17;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        iVar9 = *(int *)((longlong)FVar11 +
                        (ulonglong)((this->Selected).HashSize - 1U & local_e8[0]) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar9 * 0xc) == local_e8[0]) {
              if (iVar9 != -1) goto LAB_14c80565f;
              break;
            }
            iVar9 = *(int *)(*(longlong *)&this_00->Elements + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
        FVar4 = (this->Selected).Hash.SecondaryData;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar17 = FVar4;
        }
        iVar9 = *(int *)((longlong)FVar17 +
                        (ulonglong)((this->Selected).HashSize - 1U & local_e8[0]) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar9 * 0xc) == local_e8[0])
            goto LAB_14c80565f;
            iVar9 = *(int *)(*(longlong *)&this_00->Elements + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
      }
      count_nbrs(this,local_e8[0],local_res20,&local_cc,&local_d0);
      if ((local_d0 == 2) && (local_res20[0] == 1)) {
LAB_14c8055bd:
        if (((local_e0.Data <= (FScriptContainerElement *)local_e8) &&
            ((FScriptContainerElement *)local_e8 < local_e0.Data + (longlong)local_d8._4_4_ * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar9 = (int)local_d8;
        if ((int)local_d8 == local_d8._4_4_) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_e0,(int *)((longlong)&local_d8 + 4));
        }
        local_d8 = CONCAT44(local_d8._4_4_,iVar9 + 1);
        *(uint *)(local_e0.Data + (longlong)iVar9 * 4) = local_e8[0];
      }
      else {
        if (local_res20[0] == 2) {
          if (local_d0 != 1) {
            bVar7 = local_cc == 1;
            goto LAB_14c8055b7;
          }
          goto LAB_14c8055bd;
        }
        if (param_1) {
          bVar7 = local_res20[0] == 3;
LAB_14c8055b7:
          if (bVar7) goto LAB_14c8055bd;
        }
      }
LAB_14c80565f:
      lVar10 = lVar10 + 1;
    } while (lVar10 < 3);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// count_nbrs @ 14c8541f0

void __thiscall
UE::Geometry::FMeshFaceSelection::count_nbrs
          (FMeshFaceSelection *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  ForElementType<FSetElementId> *pFVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  FIndex3i_u_0 local_28;
  
  FDynamicMesh3::GetTriNeighbourTris(this->Mesh,(FIndex3i *)&local_28._s_0,param_1);
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if (local_28._s_0.A == 0xffffffff) {
    *param_4 = 1;
  }
  else {
    if (*(int *)&(this->Selected).Elements.field_0x8 !=
        *(int *)&(this->Selected).Elements.field_0x34) {
      FVar5 = (this->Selected).Hash.SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)((this->Selected).HashSize - 1U & local_28._s_0.A) * 4);
      if (iVar4 != -1) {
        lVar3 = *(longlong *)&(this->Selected).Elements;
        do {
          if (*(uint *)(lVar3 + (longlong)iVar4 * 0xc) == local_28._s_0.A) {
            *param_2 = *param_2 + 1;
            goto LAB_14c854288;
          }
          iVar4 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
        } while (iVar4 != -1);
      }
    }
    *param_3 = *param_3 + 1;
  }
LAB_14c854288:
  puVar2 = &(this->Selected).Elements.field_0x8;
  pFVar1 = &(this->Selected).Hash;
  if (local_28._s_0.B == 0xffffffff) {
    *param_4 = *param_4 + 1;
  }
  else {
    if (*(int *)puVar2 != *(int *)&(this->Selected).Elements.field_0x34) {
      FVar5 = (this->Selected).Hash.SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)pFVar1;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)((this->Selected).HashSize - 1U & local_28._s_0.B) * 4);
      if (iVar4 != -1) {
        lVar3 = *(longlong *)&(this->Selected).Elements;
        do {
          if (*(uint *)(lVar3 + (longlong)iVar4 * 0xc) == local_28._s_0.B) {
            if (iVar4 != -1) {
              *param_2 = *param_2 + 1;
              goto LAB_14c8542fa;
            }
            break;
          }
          iVar4 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
        } while (iVar4 != -1);
      }
    }
    *param_3 = *param_3 + 1;
  }
LAB_14c8542fa:
  if (local_28._s_0.C == 0xffffffff) {
    *param_4 = *param_4 + 1;
  }
  else {
    if (*(int *)puVar2 != *(int *)&(this->Selected).Elements.field_0x34) {
      FVar5 = (this->Selected).Hash.SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)pFVar1;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)((this->Selected).HashSize - 1U & local_28._s_0.C) * 4);
      if (iVar4 != -1) {
        lVar3 = *(longlong *)&(this->Selected).Elements;
        do {
          if (*(uint *)(lVar3 + (longlong)iVar4 * 0xc) == local_28._s_0.C) {
            *param_2 = *param_2 + 1;
            return;
          }
          iVar4 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
        } while (iVar4 != -1);
      }
    }
    *param_3 = *param_3 + 1;
  }
  return;
}

// ExpandToFaceNeighbours @ 14c8e1cd0

void __thiscall
UE::Geometry::FMeshFaceSelection::ExpandToFaceNeighbours
          (FMeshFaceSelection *this,TUniqueFunction<bool___cdecl(int)> *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  FScriptContainerElement aFStack_c0 [8];
  undefined4 local_b8 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  int local_78 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  local_d8.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->Selected;
  local_d0 = 0;
  iVar10 = *(int *)&(this->Selected).Elements.field_0x28;
  uStack_a4 = 1;
  iStack_a8 = 0;
  local_90 = 0;
  iStack_94 = iStack_a8;
  if (iVar10 != 0) {
    puVar19 = *(uint **)&(this->Selected).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)&(this->Selected).Elements.field_0x10;
    }
    uVar17 = *puVar19;
    local_90 = 0;
    iStack_a8 = 0;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14c8e1d82;
      uVar17 = puVar19[lVar12 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_80 = (int)lVar12;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar10 < iStack_94) {
      iStack_94 = iVar10;
    }
  }
LAB_14c8e1d82:
  local_a0 = &(this->Selected).Elements.field_0x10;
  uVar17 = *(uint *)&(this->Selected).Elements.field_0x28;
  uVar20 = uVar17 & 0xffffffe0;
  iStack_88 = *(int *)&(this->Selected).Elements.field_0x8 -
              *(int *)&(this->Selected).Elements.field_0x34;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar1;
  iStack_8c = iStack_94;
  local_70 = pTVar1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
  if ((((int)uVar17 < 0) || (iVar10 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Selected).Elements.field_0x28;
  if (uVar17 != uVar4) {
    puVar18 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->Selected).Elements.field_0x10;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar15;
      uVar20 = uVar20 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c8e1e90;
      uVar17 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_7c = (int)lVar12;
    uVar17 = local_7c + -1 + uVar20;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_14c8e1e90:
  do {
    pTVar7 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar17) &&
        (TStack_68.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->Selected).Elements.field_0x10)) &&
       (pTVar7 == pTVar1)) {
      iVar10 = (int)local_d0;
      pFVar2 = local_d8.Data + (longlong)(int)local_d0 * 4;
      FVar16.Data = local_d8.Data;
      while( true ) {
        if ((int)local_d0 != iVar10) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar16.Data == pFVar2) break;
        local_b8[0] = *(undefined4 *)FVar16.Data;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->Selected,local_78,(bool *)local_b8);
        FVar16.Data = FVar16.Data + 4;
      }
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      return;
    }
    FDynamicMesh3::GetTriNeighbourTris
              (this->Mesh,(FIndex3i *)local_c8,
               *(int *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_68.CurrentBitIndex * 0xc))
    ;
    if (*(void **)param_1 == (void *)0x0) {
LAB_14c8e1f1d:
      if (local_c8._0_4_ != 0xffffffff) {
        if (*(int *)&(this->Selected).Elements.field_0x8 !=
            *(int *)&(this->Selected).Elements.field_0x34) {
          FVar5 = (this->Selected).Hash.SecondaryData;
          FVar14 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar14 = FVar5;
          }
          iVar10 = *(int *)((longlong)FVar14 +
                           (ulonglong)((this->Selected).HashSize - 1U & local_c8._0_4_) * 4);
          if (iVar10 != -1) {
            do {
              if (*(uint *)(*(longlong *)&pTVar1->Elements + (longlong)iVar10 * 0xc) ==
                  local_c8._0_4_) goto LAB_14c8e2018;
              iVar10 = *(int *)(*(longlong *)&pTVar1->Elements + 4 + (longlong)iVar10 * 0xc);
            } while (iVar10 != -1);
          }
        }
        if (((local_d8.Data <= (FScriptContainerElement *)local_c8) &&
            ((FScriptContainerElement *)local_c8 < local_d8.Data + (longlong)local_d0._4_4_ * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (int)local_d0;
        if ((int)local_d0 == local_d0._4_4_) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_d8,(int *)((longlong)&local_d0 + 4));
        }
        local_d0 = CONCAT44(local_d0._4_4_,iVar10 + 1);
        *(undefined4 *)(local_d8.Data + (longlong)iVar10 * 4) = local_c8._0_4_;
      }
    }
    else {
      local_res20[0] = local_c8._0_4_;
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar13 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar13 = (longlong *)&param_1->field_0x10;
      }
      uVar11 = (**(code **)(*plVar13 + 8))();
      cVar9 = (*pcVar6)(uVar11,local_res20);
      if (cVar9 != '\0') goto LAB_14c8e1f1d;
    }
LAB_14c8e2018:
    if (*(void **)param_1 == (void *)0x0) {
LAB_14c8e2054:
      if (local_c8._4_4_ != 0xffffffff) {
        if (*(int *)&(this->Selected).Elements.field_0x8 !=
            *(int *)&(this->Selected).Elements.field_0x34) {
          FVar5 = (this->Selected).Hash.SecondaryData;
          FVar14 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar14 = FVar5;
          }
          iVar10 = *(int *)((longlong)FVar14 +
                           (ulonglong)((this->Selected).HashSize - 1U & local_c8._4_4_) * 4);
          if (iVar10 != -1) {
            do {
              if (*(uint *)(*(longlong *)&pTVar1->Elements + (longlong)iVar10 * 0xc) ==
                  local_c8._4_4_) goto LAB_14c8e2158;
              iVar10 = *(int *)(*(longlong *)&pTVar1->Elements + 4 + (longlong)iVar10 * 0xc);
            } while (iVar10 != -1);
          }
        }
        if (((local_d8.Data <= (FScriptContainerElement *)(local_c8 + 4)) &&
            ((FScriptContainerElement *)(local_c8 + 4) <
             local_d8.Data + (longlong)local_d0._4_4_ * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (int)local_d0;
        if ((int)local_d0 == local_d0._4_4_) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_d8,(int *)((longlong)&local_d0 + 4));
        }
        local_d0 = CONCAT44(local_d0._4_4_,iVar10 + 1);
        *(undefined4 *)(local_d8.Data + (longlong)iVar10 * 4) = local_c8._4_4_;
      }
    }
    else {
      local_res20[0] = local_c8._4_4_;
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar13 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar13 = (longlong *)&param_1->field_0x10;
      }
      uVar11 = (**(code **)(*plVar13 + 8))();
      cVar9 = (*pcVar6)(uVar11,local_res20);
      if (cVar9 != '\0') goto LAB_14c8e2054;
    }
LAB_14c8e2158:
    if (*(void **)param_1 == (void *)0x0) {
LAB_14c8e2194:
      if (aFStack_c0._0_4_ != 0xffffffff) {
        if (*(int *)&(this->Selected).Elements.field_0x8 !=
            *(int *)&(this->Selected).Elements.field_0x34) {
          FVar5 = (this->Selected).Hash.SecondaryData;
          FVar14 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar14 = FVar5;
          }
          iVar10 = *(int *)((longlong)FVar14 +
                           (ulonglong)((this->Selected).HashSize - 1U & aFStack_c0._0_4_) * 4);
          if (iVar10 != -1) {
            do {
              if (*(uint *)(*(longlong *)&pTVar1->Elements + (longlong)iVar10 * 0xc) ==
                  aFStack_c0._0_4_) goto LAB_14c8e2288;
              iVar10 = *(int *)(*(longlong *)&pTVar1->Elements + 4 + (longlong)iVar10 * 0xc);
            } while (iVar10 != -1);
          }
        }
        if (((local_d8.Data <= aFStack_c0) &&
            (aFStack_c0 < local_d8.Data + (longlong)local_d0._4_4_ * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (int)local_d0;
        if ((int)local_d0 == local_d0._4_4_) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_d8,(int *)((longlong)&local_d0 + 4));
        }
        local_d0 = CONCAT44(local_d0._4_4_,iVar10 + 1);
        *(undefined4 *)(local_d8.Data + (longlong)iVar10 * 4) = aFStack_c0._0_4_;
      }
    }
    else {
      local_res20[0]._0_1_ = aFStack_c0[0];
      local_res20[0]._1_1_ = aFStack_c0[1];
      local_res20[0]._2_1_ = aFStack_c0[2];
      local_res20[0]._3_1_ = aFStack_c0[3];
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar13 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar13 = (longlong *)&param_1->field_0x10;
      }
      uVar11 = (**(code **)(*plVar13 + 8))();
      cVar9 = (*pcVar6)(uVar11,local_res20);
      if (cVar9 != '\0') goto LAB_14c8e2194;
    }
LAB_14c8e2288:
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

