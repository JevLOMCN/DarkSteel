// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// SetDifference<UE::Geometry::FMeshFaceSelection,TArray<int,TSizedDefaultAllocator<32>_>_> @ 14ccb8a40

void __thiscall
UE::Geometry::FMeshFaceSelection::
SetDifference<UE::Geometry::FMeshFaceSelection,TArray<int,TSizedDefaultAllocator<32>_>_>
          (FMeshFaceSelection *this,FMeshFaceSelection *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  uint local_b8 [2];
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
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_78;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar10 = *(int *)&(this->Selected).Elements.field_0x28;
  puVar1 = &(this->Selected).Elements.field_0x10;
  local_b0 = &this->Selected;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&(this->Selected).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14ccb8aef;
      uVar13 = puVar16[lVar11 + 1];
    }
    uStack_a4 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_94 = (int)lVar11 + -1 + local_90;
    if (iVar10 < iStack_94) {
      iStack_94 = iVar10;
    }
  }
LAB_14ccb8aef:
  iStack_88 = *(int *)&(this->Selected).Elements.field_0x8 -
              *(int *)&(this->Selected).Elements.field_0x34;
  uVar13 = *(uint *)&(this->Selected).Elements.field_0x28;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uVar17 = uVar13 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_78 = local_b0;
  local_70 = local_b0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = local_78;
  uVar3 = *(uint *)&(this->Selected).Elements.field_0x28;
  if (uVar13 != uVar3) {
    puVar15 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ccb8c00;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    uVar13 = local_80 + -1 + uVar17;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14ccb8c00:
  do {
    pTVar8 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    {
      return;
    }
    local_b8[0] = *(uint *)(*(longlong *)&pTVar8->Elements +
                           (longlong)TStack_68.CurrentBitIndex * 0xc);
    if (*(int *)&(param_1->Selected).Elements.field_0x8 !=
        *(int *)&(param_1->Selected).Elements.field_0x34) {
      FVar4 = (param_1->Selected).Hash.SecondaryData;
      FVar12 = (ForElementType<FSetElementId>)&(param_1->Selected).Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar12 = FVar4;
      }
      iVar10 = *(int *)((longlong)FVar12 +
                       (ulonglong)((param_1->Selected).HashSize - 1U & local_b8[0]) * 4);
      if (iVar10 != -1) {
        lVar11 = *(longlong *)&(param_1->Selected).Elements;
        do {
          if (*(uint *)(lVar11 + (longlong)iVar10 * 0xc) == local_b8[0]) goto LAB_14ccb8d1e;
          iVar10 = *(int *)(lVar11 + 4 + (longlong)iVar10 * 0xc);
        } while (iVar10 != -1);
      }
    }
    pFVar5 = (param_2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < pFVar5 + (longlong)param_2->ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar10 + 1;
    *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_b8[0];
LAB_14ccb8d1e:
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Select @ 14cd1d660

void __thiscall
UE::Geometry::FMeshFaceSelection::Select
          (FMeshFaceSelection *this,TFunctionRef<bool___cdecl(int)> *param_1)

{
  FDynamicMesh3 *pFVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_res8 [2];
  int local_res18 [4];
  
  uVar3 = 0;
  iVar4 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (0 < iVar4) {
    uVar5 = 0;
    do {
      pFVar1 = this->Mesh;
      if ((((int)uVar3 <
            (int)((pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed)) &&
          ((ushort)(*(short *)(*(longlong *)
                                ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 2) -
                   1U) < 0xfffe)) &&
         (local_res8[0] = uVar3,
         cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8), cVar2 != '\0')
         ) {
        local_res8[0] = uVar3;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->Selected,local_res18,(bool *)local_res8);
      }
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 + 1;
    } while ((int)uVar3 < iVar4);
  }
  return;
}

