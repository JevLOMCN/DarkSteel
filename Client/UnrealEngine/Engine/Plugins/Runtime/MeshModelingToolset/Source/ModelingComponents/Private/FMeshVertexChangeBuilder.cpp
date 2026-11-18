// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// SaveVertices<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14cb602e0

void __thiscall
FMeshVertexChangeBuilder::SaveVertices<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FMeshVertexChangeBuilder *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res20 [8];
  
  pFVar3 = (param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 4;
  if (param_3) {
    while( true ) {
      if (param_2->ArrayNum != iVar1) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar3 == pFVar2) break;
      SaveVertexInitial(this,param_1,*(int *)pFVar3);
      pFVar3 = pFVar3 + 4;
    }
  }
  else {
    while( true ) {
      if (param_2->ArrayNum != iVar1) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar3 == pFVar2) break;
      SaveVertexFinal(this,param_1,*(int *)pFVar3);
      pFVar3 = pFVar3 + 4;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SaveVertices<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 14cb603a0

void __thiscall
FMeshVertexChangeBuilder::SaveVertices<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FMeshVertexChangeBuilder *this,FDynamicMesh3 *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,bool param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  FDynamicMesh3 *pFVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_108;
  undefined1 local_107 [7];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  FDynamicMesh3 *local_d0;
  int local_c8;
  int local_c4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  int local_44;
  
  iVar3 = *(int *)&(param_2->Elements).field_0x28;
  uStack_f4 = 1;
  puVar1 = &(param_2->Elements).field_0x10;
  iStack_f8 = 0;
  iStack_e4 = 0;
  local_100 = param_2;
  local_f0 = puVar1;
  local_d0 = param_1;
  if (param_3) {
    local_e0 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar11 = *puVar14;
      while (uVar11 == 0) {
        lVar10 = (longlong)iStack_f8;
        local_e0 = local_e0 + 0x20;
        iStack_f8 = iStack_f8 + 1;
        iStack_e4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14cb6045f;
        uVar11 = puVar14[lVar10 + 1];
      }
      uStack_f4 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_f4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_c8 = (int)lVar10;
      iStack_e4 = local_c8 + -1 + local_e0;
      if (iVar3 < iStack_e4) {
        iStack_e4 = iVar3;
      }
    }
LAB_14cb6045f:
    uVar11 = *(uint *)&(param_2->Elements).field_0x28;
    iStack_dc = local_44;
    uVar15 = uVar11 & 0xffffffe0;
    iStack_d8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
    uStack_e8 = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
    TStack_b8.CurrentBitIndex = iStack_e4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = local_e0;
    uStack_98 = CONCAT44(uStack_d4,iStack_d8);
    local_c0 = param_2;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar7 = local_d0;
    uVar4 = *(uint *)&(param_2->Elements).field_0x28;
    if (uVar11 != uVar4) {
      puVar13 = *(undefined1 **)&(param_2->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar15 = uVar15 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14cb60570;
        uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar11 = (int)lVar10 + -1 + uVar15;
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
    }
LAB_14cb60570:
    while( true ) {
      pTVar8 = local_c0;
      if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
      }
      if (((TStack_b8.CurrentBitIndex == uVar11) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == param_2)) break;
      SaveVertexInitial(this,pFVar7,
                        *(int *)(*(longlong *)&pTVar8->Elements +
                                (longlong)TStack_b8.CurrentBitIndex * 0xc));
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  else {
    local_e0 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar11 = *puVar14;
      while (uVar11 == 0) {
        lVar10 = (longlong)iStack_f8;
        local_e0 = local_e0 + 0x20;
        iStack_f8 = iStack_f8 + 1;
        iStack_e4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14cb6063f;
        uVar11 = puVar14[lVar10 + 1];
      }
      uStack_f4 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_f4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_c4 = (int)lVar10;
      iStack_e4 = local_e0 + -1 + local_c4;
      if (iVar3 < iStack_e4) {
        iStack_e4 = iVar3;
      }
    }
LAB_14cb6063f:
    uVar11 = *(uint *)&(param_2->Elements).field_0x28;
    uVar15 = uVar11 & 0xffffffe0;
    iStack_d8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
    uStack_e8 = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uStack_f4,iStack_f8);
    TStack_88.CurrentBitIndex = iStack_e4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_88._28_4_ = iStack_e4;
    TStack_88.BaseBitIndex = local_e0;
    uStack_68 = CONCAT44(uStack_d4,iStack_d8);
    iStack_dc = iStack_e4;
    local_90 = param_2;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar7 = local_d0;
    uVar4 = *(uint *)&(param_2->Elements).field_0x28;
    if (uVar11 != uVar4) {
      puVar13 = *(undefined1 **)&(param_2->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar15 = uVar15 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14cb60750;
        uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar11 = (int)lVar10 + -1 + uVar15;
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
    }
LAB_14cb60750:
    while( true ) {
      pTVar8 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_107);
      }
      if (((TStack_88.CurrentBitIndex == uVar11) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == param_2)) break;
      SaveVertexFinal(this,pFVar7,
                      *(int *)(*(longlong *)&pTVar8->Elements +
                              (longlong)TStack_88.CurrentBitIndex * 0xc));
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  param_2->HashSize = 0;
  FVar5 = (param_2->Hash).SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_2->Elements);
  return;
}

// ~FMeshVertexChangeBuilder @ 14cb649a0

void __thiscall FMeshVertexChangeBuilder::~FMeshVertexChangeBuilder(FMeshVertexChangeBuilder *this)

{
  longlong *plVar1;
  void *pvVar2;
  FMeshVertexChange *pFVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->OnNewVertexSaved != 0) {
    plVar1 = *(longlong **)&(this->OnNewVertexSaved).field_0x28;
    plVar4 = (longlong *)&(this->OnNewVertexSaved).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(undefined4 *)&(this->SavedUVElements).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SavedUVElements).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SavedUVElements);
  *(undefined4 *)&(this->SavedNormalElements).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SavedNormalElements).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SavedNormalElements);
  *(undefined4 *)&(this->SavedVertices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SavedVertices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SavedVertices);
  pFVar3 = (this->Change).Ptr;
  if (pFVar3 != (FMeshVertexChange *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x48))(pFVar3,1);
  }
  return;
}

