// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// SaveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 14cbdac90

void __thiscall
UE::Geometry::FDynamicMeshChangeTracker::
SaveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FDynamicMeshChangeTracker *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,bool param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_a7 [7];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14cbdad3d;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_94 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70 = (int)lVar9;
    iStack_84 = local_70 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_14cbdad3d:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cbdae40;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14cbdae40:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_a7);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    SaveTriangle(this,*(int *)(*(longlong *)&pTVar7->Elements +
                              (longlong)TStack_60.CurrentBitIndex * 0xc),param_2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  param_1->HashSize = 0;
  FVar5 = (param_1->Hash).SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_1->Elements);
  return;
}

// SaveTriangles<UE::Geometry::FRefCountVector::IndexEnumerable> @ 14cc1a360

void __thiscall
UE::Geometry::FDynamicMeshChangeTracker::
SaveTriangles<UE::Geometry::FRefCountVector::IndexEnumerable>
          (FDynamicMeshChangeTracker *this,IndexEnumerable param_1,bool param_2)

{
  longlong lVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = ((param_1.Vector)->RefCounts).CurBlock * 0x200 +
          ((param_1.Vector)->RefCounts).CurBlockUsed;
  uVar7 = 0;
  if ((uVar5 != 0) &&
     (pFVar3 = ((param_1.Vector)->RefCounts).Blocks.AllocatorInstance.Data, uVar7 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar6 = 1;
    uVar7 = 1;
    if (1 < (int)uVar5) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar6 >> 9) * 8) +
                          (ulonglong)(uVar6 & 0x1ff) * 2);
        if ((sVar2 != 0) && (uVar7 = uVar6, sVar2 != -1)) break;
        uVar6 = uVar6 + 1;
        uVar7 = uVar6;
      } while ((int)uVar6 < (int)uVar5);
    }
  }
joined_r0x00014cc1a3e9:
  do {
    if (uVar7 == uVar5) {
      return;
    }
    while( true ) {
      SaveTriangle(this,uVar7,param_2);
      uVar7 = uVar7 + 1;
      if ((int)uVar5 <= (int)uVar7) break;
      pFVar3 = ((param_1.Vector)->RefCounts).Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar1 = (ulonglong)(uVar7 >> 9) * 8;
        lVar4 = (ulonglong)(uVar7 & 0x1ff) * 2;
        if ((*(short *)(lVar4 + *(longlong *)(pFVar3 + lVar1)) != 0) &&
           (*(short *)(lVar4 + *(longlong *)(pFVar3 + lVar1)) != -1)) break;
        uVar7 = uVar7 + 1;
        if ((int)uVar5 <= (int)uVar7) goto joined_r0x00014cc1a3e9;
      }
    }
  } while( true );
}

// SaveVertexOneRingTriangles<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14cc1a470

void __thiscall
UE::Geometry::FDynamicMeshChangeTracker::
SaveVertexOneRingTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FDynamicMeshChangeTracker *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  FDynamicMeshChangeTracker *local_48;
  undefined1 local_40;
  code *local_38;
  FDynamicMeshChangeTracker **local_30;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar2) break;
    local_30 = &local_48;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FDynamicMeshChangeTracker::SaveVertexOneRingTriangles'::__l2::<lambda_1>,void,int>
               ::Call;
    local_48 = this;
    local_40 = param_2;
    FDynamicMesh3::EnumerateVertexTriangles
              (this->Mesh,*(int *)pFVar3,(TFunctionRef<void___cdecl(int)> *)&local_38);
    pFVar3 = pFVar3 + 4;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

