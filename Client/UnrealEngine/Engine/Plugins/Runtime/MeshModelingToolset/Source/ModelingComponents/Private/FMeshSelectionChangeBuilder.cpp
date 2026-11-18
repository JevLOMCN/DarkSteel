// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// FMeshSelectionChangeBuilder @ 14ca64e50

FMeshSelectionChangeBuilder * __thiscall
FMeshSelectionChangeBuilder::FMeshSelectionChangeBuilder
          (FMeshSelectionChangeBuilder *this,EMeshSelectionElementType param_1,bool param_2)

{
  FMeshSelectionChange *pFVar1;
  longlong lVar2;
  FMeshSelectionChange *pFVar3;
  FMeshSelectionChangeBuilder local_18 [2];
  
  pFVar3 = (FMeshSelectionChange *)0x0;
  (this->Change).Ptr = (FMeshSelectionChange *)0x0;
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FMeshSelectionChange *)0x0) {
    *(undefined4 *)&pFVar1->field_0xc = 0;
    *(undefined8 *)&pFVar1->bAdded = 0;
    pFVar1->_padding_ = (longlong)&___7FMeshSelectionChange__6B_;
    pFVar1->ElementType = Vertex;
    (pFVar1->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Indices).ArrayNum = 0;
    (pFVar1->Indices).ArrayMax = 0;
    pFVar3 = pFVar1;
  }
  if (this == local_18) {
    if (pFVar3 == (FMeshSelectionChange *)0x0) goto LAB_14ca64ed2;
    lVar2 = pFVar3->_padding_;
  }
  else {
    pFVar1 = (this->Change).Ptr;
    (this->Change).Ptr = pFVar3;
    if (pFVar1 == (FMeshSelectionChange *)0x0) goto LAB_14ca64ed2;
    lVar2 = pFVar1->_padding_;
    pFVar3 = pFVar1;
  }
  (**(code **)(lVar2 + 0x48))(pFVar3,1);
LAB_14ca64ed2:
  ((this->Change).Ptr)->ElementType = param_1;
  ((this->Change).Ptr)->bAdded = param_2;
  return this;
}

// Add @ 14ca777b0

void __thiscall
FMeshSelectionChangeBuilder::Add
          (FMeshSelectionChangeBuilder *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
            (&((this->Change).Ptr)->Indices,param_1);
  return;
}

// Add @ 14ca777d0

void __thiscall
FMeshSelectionChangeBuilder::Add
          (FMeshSelectionChangeBuilder *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  FMeshSelectionChange *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 local_a8 [2];
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
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar10 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14ca7786d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_94 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_84 = local_res18 + -1 + local_80;
    if (iVar10 < iStack_84) {
      iStack_84 = iVar10;
    }
  }
LAB_14ca7786d:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ca77970;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar14 = local_res20 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14ca77970:
  while( true ) {
    pTVar8 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar14) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_1))
    break;
    pFVar5 = (this->Change).Ptr;
    local_a8[0] = *(undefined4 *)
                   (*(longlong *)&pTVar8->Elements + (longlong)TStack_68.CurrentBitIndex * 0xc);
    pFVar6 = (pFVar5->Indices).AllocatorInstance.Data;
    if (((pFVar6 <= (FScriptContainerElement *)local_a8) &&
        ((FScriptContainerElement *)local_a8 < pFVar6 + (longlong)(pFVar5->Indices).ArrayMax * 4))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (pFVar5->Indices).ArrayNum;
    piVar2 = &(pFVar5->Indices).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(pFVar5->Indices).AllocatorInstance,piVar2);
    }
    (pFVar5->Indices).ArrayNum = iVar10 + 1;
    *(undefined4 *)((pFVar5->Indices).AllocatorInstance.Data + (longlong)iVar10 * 4) = local_a8[0];
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// Add @ 14ca77a90

void __thiscall FMeshSelectionChangeBuilder::Add(FMeshSelectionChangeBuilder *this,int param_1)

{
  int *piVar1;
  FMeshSelectionChange *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res10 [6];
  
  pFVar2 = (this->Change).Ptr;
  pFVar3 = (pFVar2->Indices).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(pFVar2->Indices).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar2->Indices).ArrayNum;
  piVar1 = &(pFVar2->Indices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar2->Indices).AllocatorInstance,piVar1);
  }
  (pFVar2->Indices).ArrayNum = iVar6 + 1;
  *(int *)((pFVar2->Indices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_res10[0];
  return;
}

