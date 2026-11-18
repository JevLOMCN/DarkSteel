// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 23

// ~FNonManifoldSourceVertexIdAttribute @ 143569120

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::~FNonManifoldSourceVertexIdAttribute
          (FNonManifoldSourceVertexIdAttribute *this)

{
  FScriptContainerElement *pFVar1;
  
  TDynamicVector<int,512>::Empty(&this->SourceVertexIds,0);
  pFVar1 = (this->SourceVertexIds).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// Append @ 1435758b0

bool __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::Append
          (FNonManifoldSourceVertexIdAttribute *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2->NumVertex + param_2->VertexOffset;
  uVar1 = (this->SourceVertexIds).CurBlock * 0x200 + (this->SourceVertexIds).CurBlockUsed;
  if ((ulonglong)uVar1 < (ulonglong)(longlong)(int)uVar2) {
    TDynamicVector<int,512>::Resize(&this->SourceVertexIds,uVar2);
    for (; uVar1 < uVar2; uVar1 = uVar1 + 1) {
      *(undefined4 *)
       (*(longlong *)
         ((this->SourceVertexIds).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
       (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
    }
  }
  return true;
}

// AppendDefaulted @ 143575af0

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::AppendDefaulted
          (FNonManifoldSourceVertexIdAttribute *this,FAppendInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1->NumVertex + param_1->VertexOffset;
  uVar1 = (this->SourceVertexIds).CurBlock * 0x200 + (this->SourceVertexIds).CurBlockUsed;
  if ((ulonglong)uVar1 < (ulonglong)(longlong)(int)uVar2) {
    TDynamicVector<int,512>::Resize(&this->SourceVertexIds,uVar2);
    for (; uVar1 < uVar2; uVar1 = uVar1 + 1) {
      *(undefined4 *)
       (*(longlong *)
         ((this->SourceVertexIds).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
       (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
    }
  }
  return;
}

// CompactInPlace @ 14357bbb0

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::CompactInPlace
          (FNonManifoldSourceVertexIdAttribute *this,FCompactMaps *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)(param_1->VertMap).ArrayNum;
  uVar5 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_1->VertMap).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)((param_1->VertMap).AllocatorInstance.Data + lVar7 * 4);
      if (uVar4 != 0xffffffff) {
        if ((int)uVar5 < (int)uVar4) {
          bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8777297532356132777>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\NonManifoldMappingSupport.cpp"
                             ,0x57,"ToVID <= FromVID");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          pFVar1 = (this->SourceVertexIds).Blocks.AllocatorInstance.Data;
          *(undefined4 *)
           (*(longlong *)(pFVar1 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)(pFVar1 + (ulonglong)(uVar5 >> 9) * 8) +
                (ulonglong)(uVar5 & 0x1ff) * 4);
        }
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  TDynamicVector<int,512>::Resize
            (&this->SourceVertexIds,
             (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed);
  return;
}

// CopyIn @ 14358af00

bool __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::CopyIn
          (FNonManifoldSourceVertexIdAttribute *this,int param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FDynamicMesh3 *pFVar2;
  
  if (((param_3 == 4) && (pFVar2 = this->Parent, -1 < param_1)) &&
     (param_1 < (int)((pFVar2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar2->VertexRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      *(undefined4 *)
       (*(longlong *)((this->SourceVertexIds).Blocks.AllocatorInstance.Data + lVar1) +
       (ulonglong)(param_1 & 0x1ff) * 4) = *(undefined4 *)param_2;
      return true;
    }
  }
  return false;
}

// CopyOut @ 14358af80

bool __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::CopyOut
          (FNonManifoldSourceVertexIdAttribute *this,int param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FDynamicMesh3 *pFVar2;
  
  if (((param_3 == 4) && (pFVar2 = this->Parent, -1 < param_1)) &&
     (param_1 < (int)((pFVar2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar2->VertexRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      *(undefined4 *)param_2 =
           *(undefined4 *)
            (*(longlong *)((this->SourceVertexIds).Blocks.AllocatorInstance.Data + lVar1) +
            (ulonglong)(param_1 & 0x1ff) * 4);
      return true;
    }
  }
  return false;
}

// CopyThroughMapping @ 14358b000

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::CopyThroughMapping
          (FNonManifoldSourceVertexIdAttribute *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FMeshIndexMappings *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x28;
  puVar1 = &(param_2->VertexMap).ForwardMap.field_0x10;
  iVar16 = 0;
  uVar8 = 1;
  iVar17 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      iVar17 = iVar17 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14358b0ad;
      uVar13 = puVar14[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar17;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14358b0ad:
  uVar13 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar17;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_2->VertexMap).ForwardMap.field_0x8 -
                       *(int *)&(param_2->VertexMap).ForwardMap.field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar8 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      uVar12 = uVar12 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14358b1b1;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_14358b1b1:
  while( true ) {
    if (*(int *)&(param_2->VertexMap).ForwardMap.field_0x8 -
        *(int *)&(param_2->VertexMap).ForwardMap.field_0x34 != (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar11 = (undefined4 *)
              (*(longlong *)&(param_2->VertexMap).ForwardMap +
              (longlong)TStack_68.CurrentBitIndex * 0x10);
    cVar7 = (**(code **)(param_1->_padding_ + 0x48))(param_1,*puVar11,local_res20,4);
    if (cVar7 == '\0') {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8777297532356132759>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\NonManifoldMappingSupport.cpp"
                         ,0x69,
                         "Source->CopyOut(MapVID.Key, &SourceVertexId, sizeof(SourceVertexId))");
      if (!bVar5) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar8 = puVar11[1];
    *(undefined4 *)
     (*(longlong *)
       ((this->SourceVertexIds).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8) +
     (ulonglong)(uVar8 & 0x1ff) * 4) = local_res20[0];
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return true;
}

// GetByteCount @ 1435b0fd0

ulong64 __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::GetByteCount
          (FNonManifoldSourceVertexIdAttribute *this)

{
  return (longlong)((this->SourceVertexIds).Blocks.ArrayNum << 9) << 2;
}

// Initialize @ 1435b6070

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::Initialize
          (FNonManifoldSourceVertexIdAttribute *this)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  TDynamicVector<int,512>::Resize
            (&this->SourceVertexIds,
             (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed);
  uVar1 = (this->SourceVertexIds).Blocks.ArrayNum;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar5 < uVar1 - 1) {
        uVar4 = 0x200;
LAB_1435b60c5:
        uVar2 = 0;
        do {
          lVar3 = (longlong)(int)uVar2;
          uVar2 = uVar2 + 1;
          *(undefined4 *)
           (*(longlong *)
             ((this->SourceVertexIds).Blocks.AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
           lVar3 * 4) = 0xffffffff;
        } while (uVar2 < uVar4);
      }
      else {
        uVar4 = ((this->SourceVertexIds).CurBlock - (uVar1 - 1)) * 0x200 +
                (this->SourceVertexIds).CurBlockUsed;
        if (uVar4 != 0) goto LAB_1435b60c5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}

// InitializeFromArray @ 1435b6110

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::InitializeFromArray
          (FNonManifoldSourceVertexIdAttribute *this,TArrayView<int_const_,int> *param_1)

{
  longlong lVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if ((param_1->ArrayNum !=
       (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
       (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexToNonManifoldVertexIDMap.Num() == Parent->MaxVertexID()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\NonManifoldMappingSupport.cpp"
                         ,0x95,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TDynamicVector<int,512>::Resize
            (&this->SourceVertexIds,
             (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed);
  pFVar2 = this->Parent;
  uVar10 = 0;
  uVar11 = (pFVar2->VertexRefCounts).RefCounts.CurBlockUsed +
           (pFVar2->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar11 != 0) &&
     (pFVar3 = (pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar10 = 1;
    uVar8 = 1;
    if ((int)uVar11 < 2) goto joined_r0x0001435b61f7;
    do {
      lVar1 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar3 + (uVar10 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar3 + (uVar10 >> 9) * 8)) != -1)) break;
      uVar8 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)uVar11);
  }
  uVar8 = (uint)uVar10;
joined_r0x0001435b61f7:
  do {
    if (uVar8 == uVar11) {
      this->bValid = true;
      return;
    }
    while( true ) {
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = uVar10 >> 9;
      uVar8 = uVar9 + 1;
      uVar10 = (ulonglong)uVar8;
      *(int *)(*(longlong *)((this->SourceVertexIds).Blocks.AllocatorInstance.Data + uVar7 * 8) +
              (ulonglong)(uVar9 & 0x1ff) * 4) = param_1->DataPtr[(int)uVar9];
      if ((int)uVar11 <= (int)uVar8) break;
      pFVar3 = (pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar1 = (uVar10 >> 9) * 8;
        lVar5 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
        if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != 0) &&
           (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != -1)) break;
        uVar8 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
        if ((int)uVar11 <= (int)uVar8) goto joined_r0x0001435b61f7;
      }
    }
  } while( true );
}

// MakeCopy @ 1435ba730

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::MakeCopy
          (FNonManifoldSourceVertexIdAttribute *this,FDynamicMesh3 *param_1)

{
  undefined4 uVar1;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar2;
  
  pTVar2 = ::operator_new(0x38);
  if (pTVar2 != (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar2[1]._padding_ = (longlong)param_1;
    pTVar2[1].Name.ComparisonIndex = 0;
    pTVar2[1].Name.Number = 0;
    pTVar2->_padding_ = (longlong)&___7FNonManifoldSourceVertexIdAttribute_Geometry_UE__6B_;
    pTVar2[2]._padding_ = 0;
    pTVar2[2].Name.ComparisonIndex = 0;
    pTVar2[2].Name.Number = 0;
    (pTVar2->Name).ComparisonIndex = 0;
    (pTVar2->Name).Number = 0;
    TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)&pTVar2[1].Name);
    *(undefined1 *)&pTVar2[3]._padding_ = 0;
  }
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (pTVar2->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (pTVar2->Name).Number = uVar1;
  TDynamicVector<int,512>::operator=
            ((TDynamicVector<int,512> *)&pTVar2[1].Name,&this->SourceVertexIds);
  *(bool *)&pTVar2[3]._padding_ = this->bValid;
  return pTVar2;
}

// MakeNew @ 1435ba7c0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::MakeNew
          (FNonManifoldSourceVertexIdAttribute *this,FDynamicMesh3 *param_1)

{
  FNonManifoldSourceVertexIdAttribute *this_00;
  
  this_00 = ::operator_new(0x38);
  if (this_00 != (FNonManifoldSourceVertexIdAttribute *)0x0) {
    this_00->Parent = param_1;
    (this_00->SourceVertexIds).CurBlock = 0;
    (this_00->SourceVertexIds).CurBlockUsed = 0;
    this_00->_padding_ = (longlong)&___7FNonManifoldSourceVertexIdAttribute_Geometry_UE__6B_;
    (this_00->SourceVertexIds).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->SourceVertexIds).Blocks.ArrayNum = 0;
    (this_00->SourceVertexIds).Blocks.ArrayMax = 0;
    this_00->_padding_ = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&this_00->SourceVertexIds);
    this_00->bValid = false;
  }
  Initialize(this_00);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// NewBlankChange @ 1435bcdf0

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::NewBlankChange
          (FNonManifoldSourceVertexIdAttribute *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(0x30);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *(undefined4 *)((longlong)TVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)TVar1 + 0x2e) = 0;
    *(undefined ***)TVar1 = &___7FNonManifoldSourceVertexIdAttributeChange_Geometry_UE__6B_;
    *(undefined8 *)((longlong)TVar1 + 8) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x20) = 0;
    *(undefined2 *)((longlong)TVar1 + 0x28) = 0;
    *in_RDX = TVar1;
    return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
            )in_RDX;
  }
  *in_RDX = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0;
  return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
          )in_RDX;
}

// OnCollapseEdge @ 1435bcfa0

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::OnCollapseEdge
          (FNonManifoldSourceVertexIdAttribute *this,FEdgeCollapseInfo *param_1)

{
  this->bValid = false;
  return;
}

// OnFlipEdge @ 1435bd2d0

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::OnFlipEdge
          (FNonManifoldSourceVertexIdAttribute *this,FEdgeFlipInfo *param_1)

{
  this->bValid = false;
  return;
}

// OnMergeEdges @ 1435bd2e0

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::OnMergeEdges
          (FNonManifoldSourceVertexIdAttribute *this,FMergeEdgesInfo *param_1)

{
  this->bValid = false;
  return;
}

// OnMergeVertices @ 1435bd2f0

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::OnMergeVertices
          (FNonManifoldSourceVertexIdAttribute *this,FMergeVerticesInfo *param_1)

{
  this->bValid = false;
  return;
}

// OnNewVertex @ 1435bd300

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::OnNewVertex
          (FNonManifoldSourceVertexIdAttribute *this,int param_1,bool param_2)

{
  int local_res10 [6];
  
  local_res10[0] = param_1;
  TDynamicVector<int,512>::InsertAt(&this->SourceVertexIds,local_res10,param_1);
  return;
}

// OnPokeTriangle @ 1435bd330

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::OnPokeTriangle
          (FNonManifoldSourceVertexIdAttribute *this,FPokeTriangleInfo *param_1)

{
  this->bValid = false;
  return;
}

// OnRemoveVertex @ 1435bd340

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::OnRemoveVertex
          (FNonManifoldSourceVertexIdAttribute *this,int param_1)

{
  this->bValid = false;
  return;
}

// OnSplitEdge @ 1435bd350

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::OnSplitEdge
          (FNonManifoldSourceVertexIdAttribute *this,FEdgeSplitInfo *param_1)

{
  this->bValid = false;
  return;
}

// OnSplitVertex @ 1435bd360

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::OnSplitVertex
          (FNonManifoldSourceVertexIdAttribute *this,FVertexSplitInfo *param_1,
          TArrayView<int_const_,int> *param_2)

{
  this->bValid = false;
  return;
}

// Reparent @ 1435c0130

void __thiscall
UE::Geometry::FNonManifoldSourceVertexIdAttribute::Reparent
          (FNonManifoldSourceVertexIdAttribute *this,FDynamicMesh3 *param_1)

{
  this->Parent = param_1;
  return;
}

