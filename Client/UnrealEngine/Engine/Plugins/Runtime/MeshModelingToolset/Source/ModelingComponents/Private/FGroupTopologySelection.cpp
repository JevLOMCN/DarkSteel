// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 9

// FGroupTopologySelection @ 14cb618c0

FGroupTopologySelection * __thiscall
UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
          (FGroupTopologySelection *this,FGroupTopologySelection *param_1)

{
  *(undefined8 *)&(this->SelectedGroupIDs).Elements = 0;
  *(undefined8 *)&(this->SelectedGroupIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedGroupIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x34 = 0;
  (this->SelectedGroupIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedGroupIDs).HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->SelectedGroupIDs,&param_1->SelectedGroupIDs);
  *(undefined8 *)&(this->SelectedCornerIDs).Elements = 0;
  *(undefined8 *)&(this->SelectedCornerIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedCornerIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x34 = 0;
  (this->SelectedCornerIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedCornerIDs).HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->SelectedCornerIDs,&param_1->SelectedCornerIDs);
  *(undefined8 *)&(this->SelectedEdgeIDs).Elements = 0;
  *(undefined8 *)&(this->SelectedEdgeIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedEdgeIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x34 = 0;
  (this->SelectedEdgeIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedEdgeIDs).HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->SelectedEdgeIDs,&param_1->SelectedEdgeIDs);
  return this;
}

// FGroupTopologySelection @ 14cb61990

FGroupTopologySelection * __thiscall
UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(FGroupTopologySelection *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int iVar4;
  
  this_00 = &this->SelectedEdgeIDs;
  *(undefined8 *)&(this->SelectedGroupIDs).Elements = 0;
  puVar1 = &(this->SelectedGroupIDs).Elements.field_0xc;
  *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x8 = 0;
  puVar2 = &(this->SelectedCornerIDs).Elements.field_0xc;
  *(undefined4 *)puVar1 = 0;
  puVar3 = &(this->SelectedEdgeIDs).Elements.field_0xc;
  *(undefined8 *)&(this->SelectedGroupIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x34 = 0;
  (this->SelectedGroupIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedGroupIDs).HashSize = 0;
  *(undefined8 *)&(this->SelectedCornerIDs).Elements = 0;
  *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x8 = 0;
  *(undefined4 *)puVar2 = 0;
  *(undefined8 *)&(this->SelectedCornerIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x34 = 0;
  (this->SelectedCornerIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedCornerIDs).HashSize = 0;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x8 = 0;
  *(undefined4 *)puVar3 = 0;
  *(undefined8 *)&(this->SelectedEdgeIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x34 = 0;
  (this->SelectedEdgeIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedEdgeIDs).HashSize = 0;
  if (*(int *)&(this->SelectedGroupIDs).Elements.field_0x8 !=
      *(int *)&(this->SelectedGroupIDs).Elements.field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(&this->SelectedGroupIDs);
    iVar4 = *(int *)puVar1;
    *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x8 = 0;
    if (iVar4 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->SelectedGroupIDs).Elements.field_0x28 = 0;
  }
  if (*(int *)&(this->SelectedCornerIDs).Elements.field_0x8 !=
      *(int *)&(this->SelectedCornerIDs).Elements.field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(&this->SelectedCornerIDs);
    iVar4 = *(int *)puVar2;
    *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x8 = 0;
    if (iVar4 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&this->SelectedCornerIDs,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->SelectedCornerIDs).Elements.field_0x28 = 0;
  }
  if (*(int *)&(this->SelectedEdgeIDs).Elements.field_0x8 !=
      *(int *)&(this->SelectedEdgeIDs).Elements.field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    iVar4 = *(int *)puVar3;
    *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x8 = 0;
    if (iVar4 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
    }
    *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->SelectedEdgeIDs).Elements.field_0x28 = 0;
  }
  return this;
}

// ~FGroupTopologySelection @ 14cb64890

void __thiscall
UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(FGroupTopologySelection *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->SelectedEdgeIDs).HashSize = 0;
  FVar1 = (this->SelectedEdgeIDs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedEdgeIDs).Elements);
  (this->SelectedCornerIDs).HashSize = 0;
  FVar1 = (this->SelectedCornerIDs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedCornerIDs).Elements);
  (this->SelectedGroupIDs).HashSize = 0;
  FVar1 = (this->SelectedGroupIDs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 14cb65680

FGroupTopologySelection * __thiscall
UE::Geometry::FGroupTopologySelection::operator=
          (FGroupTopologySelection *this,FGroupTopologySelection *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->SelectedGroupIDs,&param_1->SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->SelectedCornerIDs,&param_1->SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->SelectedEdgeIDs,&param_1->SelectedEdgeIDs);
  return this;
}

// operator!= @ 14cb657a0

bool __thiscall
UE::Geometry::FGroupTopologySelection::operator!=
          (FGroupTopologySelection *this,FGroupTopologySelection *param_1)

{
  bool bVar1;
  
  if (((*(int *)&(this->SelectedCornerIDs).Elements.field_0x8 -
        *(int *)&(this->SelectedCornerIDs).Elements.field_0x34 ==
        *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 -
        *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34) &&
      (*(int *)&(this->SelectedEdgeIDs).Elements.field_0x8 -
       *(int *)&(this->SelectedEdgeIDs).Elements.field_0x34 ==
       *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
       *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34)) &&
     (*(int *)&(this->SelectedGroupIDs).Elements.field_0x8 -
      *(int *)&(this->SelectedGroupIDs).Elements.field_0x34 ==
      *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x8 -
      *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x34)) {
    bVar1 = Contains(this,param_1);
    if (bVar1) {
      return false;
    }
  }
  return true;
}

// Contains @ 14cb7f5d0

bool __thiscall
UE::Geometry::FGroupTopologySelection::Contains
          (FGroupTopologySelection *this,FGroupTopologySelection *param_1)

{
  bool bVar1;
  
  bVar1 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                    (&this->SelectedCornerIDs,&param_1->SelectedCornerIDs);
  if (bVar1) {
    bVar1 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                      (&this->SelectedEdgeIDs,&param_1->SelectedEdgeIDs);
    if (bVar1) {
      bVar1 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                        (&this->SelectedGroupIDs,&param_1->SelectedGroupIDs);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// GetASelectedEdgeID @ 14cb942a0

int __thiscall
UE::Geometry::FGroupTopologySelection::GetASelectedEdgeID(FGroupTopologySelection *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  
  if (*(int *)&(this->SelectedEdgeIDs).Elements.field_0x8 -
      *(int *)&(this->SelectedEdgeIDs).Elements.field_0x34 < 1) {
    return -1;
  }
  iVar5 = 0;
  iVar7 = 0;
  iVar2 = *(int *)&(this->SelectedEdgeIDs).Elements.field_0x28;
  iVar6 = iVar5;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)&(this->SelectedEdgeIDs).Elements.field_0x10;
    }
    uVar3 = *puVar8;
    while (uVar3 == 0) {
      lVar4 = (longlong)iVar5;
      iVar7 = iVar7 + 0x20;
      iVar5 = iVar5 + 1;
      iVar6 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_14cb9433f;
      uVar3 = puVar8[lVar4 + 1];
    }
    uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar6 = (int)lVar4 + -1 + iVar7;
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
  }
LAB_14cb9433f:
  return *(int *)(*(longlong *)&(this->SelectedEdgeIDs).Elements + (longlong)iVar6 * 0xc);
}

// Remove @ 14cbabbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FGroupTopologySelection::Remove
          (FGroupTopologySelection *this,FGroupTopologySelection *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  FGroupTopologySelection *pFVar3;
  undefined1 auStack_88 [32];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = &this->SelectedCornerIDs;
  pTVar2 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                     (pTVar1,&local_68,&param_1->SelectedCornerIDs);
  if (pTVar1 != pTVar2) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar1,pTVar2);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  pTVar1 = &this->SelectedEdgeIDs;
  pTVar2 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                     (pTVar1,&local_68,&param_1->SelectedEdgeIDs);
  if (pTVar1 != pTVar2) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar1,pTVar2);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  pFVar3 = (FGroupTopologySelection *)
           TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                     (&this->SelectedGroupIDs,&local_68,&param_1->SelectedGroupIDs);
  if (this != pFVar3) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (&this->SelectedGroupIDs,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)pFVar3);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// Toggle @ 14cbb4c00

void __thiscall
UE::Geometry::FGroupTopologySelection::Toggle
          (FGroupTopologySelection *this,FGroupTopologySelection *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  FGroupTopologySelection *pFVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1d8 [8];
  uint local_1d0 [2];
  uint local_1c8 [2];
  uint local_1c0 [2];
  uint local_1b8 [2];
  uint local_1b0 [2];
  uint local_1a8 [2];
  ulonglong local_1a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_198;
  FGroupTopologySelection *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FGroupTopologySelection *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined4 local_64;
  undefined4 local_44;
  
  iVar8 = *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x28;
  puVar14 = &(param_1->SelectedCornerIDs).Elements.field_0x10;
  iVar15 = 0;
  local_198 = &param_1->SelectedCornerIDs;
  local_1a0 = 1;
  iStack_158 = 0;
  local_140 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  if (iVar8 != 0) {
    puVar13 = *(uint **)&(param_1->SelectedCornerIDs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar14;
    }
    uStack_154 = *puVar13;
    local_140 = 0;
    while (uStack_154 == 0) {
      lVar9 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      uStack_154 = 1;
      iStack_144 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_14cbb4cbd;
      uStack_154 = puVar13[lVar9 + 1];
    }
    uStack_154 = -uStack_154 & uStack_154;
    uVar1 = (ulonglong)uStack_154 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_130 = (int)lVar9;
    iStack_144 = local_140 + -1 + local_130;
    if (iVar8 < iStack_144) {
      iStack_144 = iVar8;
    }
  }
LAB_14cbb4cbd:
  iStack_138 = *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 -
               *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34;
  uVar11 = *(uint *)&(param_1->SelectedCornerIDs).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_108._padding_ = CONCAT44(uStack_154,iStack_158);
  uStack_148 = 0xffffffff;
  TStack_108.CurrentBitIndex = iStack_144;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_108._28_4_ = local_64;
  TStack_108.BaseBitIndex = local_140;
  uStack_e8 = CONCAT44(uStack_134,iStack_138);
  local_160 = local_198;
  local_150 = puVar14;
  local_110 = local_198;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar14;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = local_198;
  uVar2 = *(uint *)&(param_1->SelectedCornerIDs).Elements.field_0x28;
  if (uVar11 != uVar2) {
    puVar12 = *(undefined1 **)&(param_1->SelectedCornerIDs).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar14;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cbb4dd0;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_12c = (int)lVar9;
    uVar11 = local_12c + -1 + uVar16;
    if ((int)uVar2 < (int)uVar11) {
      uVar11 = uVar2;
    }
  }
LAB_14cbb4dd0:
  while( true ) {
    pTVar5 = local_110;
    if (*(int *)&(local_110->Elements).field_0x8 - *(int *)&(local_110->Elements).field_0x34 !=
        (int)uStack_e8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_108.CurrentBitIndex == uVar11) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar14)) && (pTVar5 == pTVar4)
       ) break;
    local_1d0[0] = *(uint *)(*(longlong *)&pTVar5->Elements +
                            (longlong)TStack_108.CurrentBitIndex * 0xc);
    local_1c8[0] = local_1d0[0];
    if ((*(int *)&(this->SelectedCornerIDs).Elements.field_0x8 ==
         *(int *)&(this->SelectedCornerIDs).Elements.field_0x34) ||
       (iVar8 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                          (&this->SelectedCornerIDs,local_1d0[0],(int *)local_1d0), iVar8 == 0)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->SelectedCornerIDs,&local_128,(bool *)local_1c8);
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  iStack_188 = 0;
  local_170 = 0;
  local_180 = &(param_1->SelectedEdgeIDs).Elements.field_0x10;
  iVar8 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  local_198 = &param_1->SelectedEdgeIDs;
  uStack_184 = (uint)local_1a0;
  iStack_174 = 0;
  if (iVar8 != 0) {
    puVar13 = *(uint **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_180;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_14cbb4ef7;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_184 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_184 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_124 = (int)lVar9;
    iStack_174 = local_170 + -1 + local_124;
    if (iVar8 < iStack_174) {
LAB_14cbb4ef7:
      iStack_174 = iVar8;
    }
  }
  puVar14 = &(param_1->SelectedEdgeIDs).Elements.field_0x10;
  iStack_16c = local_44;
  iStack_168 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
               *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
  uVar11 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  uStack_178 = 0xffffffff;
  TStack_d8.CurrentBitIndex = iStack_174;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_184,iStack_188);
  uVar16 = uVar11 & 0xffffffe0;
  iVar10 = (int)uVar11 >> 5;
  TStack_d8._28_4_ = local_44;
  TStack_d8.BaseBitIndex = local_170;
  uStack_b8 = CONCAT44(uStack_164,iStack_168);
  local_190 = (FGroupTopologySelection *)local_198;
  local_e0 = local_198;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_180;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = local_198;
  uVar2 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  if (uVar11 != uVar2) {
    puVar12 = *(undefined1 **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar14;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cbb5020;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_120 = (int)lVar9;
    uVar11 = local_120 + -1 + uVar16;
    if ((int)uVar2 < (int)uVar11) {
      uVar11 = uVar2;
    }
  }
LAB_14cbb5020:
  while( true ) {
    pTVar5 = local_e0;
    if (*(int *)&(local_e0->Elements).field_0x8 - *(int *)&(local_e0->Elements).field_0x34 !=
        (int)uStack_b8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_d8.CurrentBitIndex == uVar11) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar14)) && (pTVar5 == pTVar4))
    break;
    local_1c0[0] = *(uint *)(*(longlong *)&pTVar5->Elements +
                            (longlong)TStack_d8.CurrentBitIndex * 0xc);
    local_1b8[0] = local_1c0[0];
    if ((*(int *)&(this->SelectedEdgeIDs).Elements.field_0x8 ==
         *(int *)&(this->SelectedEdgeIDs).Elements.field_0x34) ||
       (iVar8 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                          (&this->SelectedEdgeIDs,local_1c0[0],(int *)local_1c0), iVar8 == 0)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->SelectedEdgeIDs,&local_11c,(bool *)local_1b8);
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  iVar8 = *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  local_180 = &(param_1->SelectedGroupIDs).Elements.field_0x10;
  local_170 = 0;
  iStack_174 = 0;
  if (iVar8 != 0) {
    puVar13 = *(uint **)&(param_1->SelectedGroupIDs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_180;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar15;
      local_170 = local_170 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14cbb5146;
      uVar11 = puVar13[lVar9 + 1];
    }
    local_1a0 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = local_1a0 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_118 = (int)lVar9;
    iStack_174 = local_118 + -1 + local_170;
    if (iVar8 < iStack_174) {
LAB_14cbb5146:
      iStack_174 = iVar8;
    }
  }
  puVar14 = &(param_1->SelectedGroupIDs).Elements.field_0x10;
  uVar11 = *(uint *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  iStack_16c = iStack_144;
  iStack_168 = *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x8 -
               *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x34;
  uVar16 = uVar11 & 0xffffffe0;
  uStack_184 = (uint)local_1a0;
  uStack_178 = 0xffffffff;
  TStack_a8.CurrentBitIndex = iStack_174;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  TStack_a8._padding_ = CONCAT44(uStack_184,iVar15);
  iVar10 = (int)uVar11 >> 5;
  TStack_a8._28_4_ = iStack_144;
  TStack_a8.BaseBitIndex = local_170;
  uStack_88 = CONCAT44(uStack_164,iStack_168);
  local_190 = param_1;
  iStack_188 = iVar15;
  local_b0 = param_1;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_180;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(uint *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  if (uVar11 != uVar2) {
    puVar12 = *(undefined1 **)&(param_1->SelectedGroupIDs).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar14;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cbb5260;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar2 < (int)uVar11) {
      uVar11 = uVar2;
    }
  }
LAB_14cbb5260:
  while( true ) {
    pFVar6 = local_b0;
    if (*(int *)&(local_b0->SelectedGroupIDs).Elements.field_0x8 -
        *(int *)&(local_b0->SelectedGroupIDs).Elements.field_0x34 != (int)uStack_88) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
    }
    if (((TStack_a8.CurrentBitIndex == uVar11) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar14)) && (pFVar6 == param_1)
       ) break;
    local_1b0[0] = *(uint *)(*(longlong *)&(pFVar6->SelectedGroupIDs).Elements +
                            (longlong)TStack_a8.CurrentBitIndex * 0xc);
    local_1a8[0] = local_1b0[0];
    if ((*(int *)&(this->SelectedGroupIDs).Elements.field_0x8 ==
         *(int *)&(this->SelectedGroupIDs).Elements.field_0x34) ||
       (iVar8 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                          (&this->SelectedGroupIDs,local_1b0[0],(int *)local_1b0), iVar8 == 0)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->SelectedGroupIDs,&local_114,(bool *)local_1a8);
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  return;
}

