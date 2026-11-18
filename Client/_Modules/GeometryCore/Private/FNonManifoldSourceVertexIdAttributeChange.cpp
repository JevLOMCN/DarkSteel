// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// ~FNonManifoldSourceVertexIdAttributeChange @ 143569170

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttributeChange::~FNonManifoldSourceVertexIdAttributeChange
          (FNonManifoldSourceVertexIdAttributeChange *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NewSourceVertexIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldSourceVertexIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// Apply @ 143577c20

bool __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttributeChange::Apply
          (FNonManifoldSourceVertexIdAttributeChange *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  undefined1 local_res18 [8];
  
  uVar11 = (ulonglong)param_2 ^ 1;
  pFVar10 = (&this->OldSourceVertexIds)[uVar11].AllocatorInstance.Data;
  iVar4 = (&this->OldSourceVertexIds)[uVar11].ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar4 * 8;
LAB_143577c70:
  do {
    if ((&this->OldSourceVertexIds)[uVar11].ArrayNum != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,int>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar10 == pFVar2) {
      *(bool *)&param_1[3]._padding_ = (&this->bOldInvalidState)[uVar11];
      return true;
    }
    uVar5 = *(uint *)pFVar10;
    lVar6 = param_1[1]._padding_;
    if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24)))
    {
      lVar3 = (ulonglong)(uVar5 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x28) + lVar3) +
                             (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
        pFVar1 = pFVar10 + 4;
        pFVar10 = pFVar10 + 8;
        *(uint *)(*(longlong *)(param_1[2]._padding_ + lVar3) + (ulonglong)(uVar5 & 0x1ff) * 4) =
             *(uint *)pFVar1;
        goto LAB_143577c70;
      }
    }
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8777297532356132590>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\NonManifoldMappingSupport.cpp"
                       ,0x112,"NonManifoldAttribute->GetParent()->IsVertex(Item.Key)");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// SaveInitialVertex @ 1435c0c40

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttributeChange::SaveInitialVertex
          (FNonManifoldSourceVertexIdAttributeChange *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  iVar4 = (this->OldSourceVertexIds).ArrayNum;
  if (iVar4 == 0) {
    this->bOldInvalidState = SUB81(param_1[3]._padding_,0);
  }
  piVar1 = &(this->OldSourceVertexIds).ArrayMax;
  uVar2 = *(undefined4 *)
           (*(longlong *)(param_1[2]._padding_ + (ulonglong)((uint)param_2 >> 9) * 8) +
           (ulonglong)(param_2 & 0x1ff) * 4);
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->OldSourceVertexIds).AllocatorInstance,piVar1);
    (this->OldSourceVertexIds).ArrayNum = iVar4;
  }
  (this->OldSourceVertexIds).ArrayNum = iVar4 + 1;
  pFVar3 = (this->OldSourceVertexIds).AllocatorInstance.Data;
  *(int *)(pFVar3 + (longlong)iVar4 * 8) = param_2;
  *(undefined4 *)(pFVar3 + (longlong)iVar4 * 8 + 4) = uVar2;
  return;
}

// StoreAllFinalVertices @ 1435c8410

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttributeChange::StoreAllFinalVertices
          (FNonManifoldSourceVertexIdAttributeChange *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res20 [8];
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar10 = (this->NewSourceVertexIds).ArrayNum;
  pTVar1 = &this->NewSourceVertexIds;
  uVar13 = (iVar10 - *(int *)&(param_2->Elements).field_0x34) +
           *(int *)&(param_2->Elements).field_0x8;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar2 = &(this->NewSourceVertexIds).ArrayMax;
  if (*piVar2 < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar13,&pTVar1->AllocatorInstance,iVar10,piVar2);
  }
  iVar10 = *(int *)&(param_2->Elements).field_0x28;
  puVar3 = &(param_2->Elements).field_0x10;
  iVar14 = 0;
  uVar13 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar3;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1435c84ff;
      uVar12 = puVar17[lVar11 + 1];
    }
    uVar13 = -uVar12 & uVar12;
    uVar4 = (ulonglong)uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = iVar16 + -1 + (int)lVar11;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_1435c84ff:
  uVar12 = *(uint *)&(param_2->Elements).field_0x28;
  uVar18 = uVar12 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar13,iVar14);
  TStack_78.CurrentBitIndex = iVar9;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_78._28_4_ = iVar9;
  TStack_78.BaseBitIndex = iVar16;
  uStack_58 = CONCAT44(uStack_84,
                       *(int *)&(param_2->Elements).field_0x8 -
                       *(int *)&(param_2->Elements).field_0x34);
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar12 < 0) || (iVar10 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar13 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar12 != uVar13) {
    puVar15 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_1435c8600;
      uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar13 < (int)uVar12) {
      uVar12 = uVar13;
    }
  }
LAB_1435c8600:
  while( true ) {
    if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_78.CurrentBitIndex == uVar12) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    uVar13 = *(uint *)(*(longlong *)&param_2->Elements + (longlong)TStack_78.CurrentBitIndex * 0xc);
    uVar5 = *(undefined4 *)
             (*(longlong *)(param_1[2]._padding_ + (ulonglong)(uVar13 >> 9) * 8) +
             (ulonglong)(uVar13 & 0x1ff) * 4);
    iVar10 = (this->NewSourceVertexIds).ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->NewSourceVertexIds).ArrayNum = iVar10 + 1;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    *(uint *)(pFVar6 + (longlong)iVar10 * 8) = uVar13;
    *(undefined4 *)(pFVar6 + (longlong)iVar10 * 8 + 4) = uVar5;
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  this->bNewInvalidState = SUB81(param_1[3]._padding_,0);
  return;
}

