// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// TAABBTreeNode<float> @ 143c42cc0

TAABBTreeNode<float> * __thiscall
Chaos::TAABBTreeNode<float>::TAABBTreeNode<float>
          (TAABBTreeNode<float> *this,TAABBTreeNode<float> *param_1)

{
  TVector<float,3> *pTVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  pTVar1 = &param_1->ChildrenBounds[0].MMax;
  lVar4 = (longlong)this - (longlong)param_1;
  lVar3 = 2;
  do {
    *(undefined8 *)(lVar4 + -0xc + (longlong)pTVar1) =
         *(undefined8 *)&((TAABB<float,3> *)(pTVar1 + -1))->MMin;
    *(undefined4 *)(lVar4 + -4 + (longlong)pTVar1) =
         *(undefined4 *)&(((TAABB<float,3> *)(pTVar1 + -1))->MMin).field_0x8;
    *(undefined8 *)((longlong)pTVar1 + lVar4) = *(undefined8 *)pTVar1;
    *(undefined4 *)((longlong)pTVar1 + lVar4 + 8) = *(undefined4 *)&pTVar1->field_0x8;
    pTVar1 = pTVar1 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined8 *)this->ChildrenNodes = *(undefined8 *)param_1->ChildrenNodes;
  this->ParentNode = param_1->ParentNode;
  bVar2 = (this->bLeaf ^ param_1->bLeaf) & 1U ^ this->field_0x3c;
  this->field_0x3c = bVar2;
  this->field_0x3c = (bVar2 ^ param_1->field_0x3c) & 2 ^ bVar2;
  return this;
}

// DebugDraw @ 143c63c10

void __thiscall
Chaos::TAABBTreeNode<float>::DebugDraw
          (TAABBTreeNode<float> *this,ISpacialDebugDrawInterface<float> *param_1,
          TArray<Chaos::TAABBTreeNode<float>,TSizedDefaultAllocator<32>_> *param_2,
          TVector<double,3> *param_3,float param_4)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  longlong lVar5;
  int *piVar6;
  float local_78;
  float local_74;
  float local_70;
  FLinearColor_u_0 local_68;
  double local_58;
  double local_50;
  double local_48;
  
  if (!this->bLeaf) {
    FLinearColor::MakeRandomColor((FLinearColor *)&local_68._s_0);
    fVar3 = __real_3f400000;
    piVar6 = this->ChildrenNodes;
    lVar5 = 2;
    do {
      iVar1 = *piVar6;
      if ((0 < iVar1) && (iVar1 < param_2->ArrayNum)) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        local_58 = (double)local_68._s_0.R;
        local_50 = (double)local_68._s_0.G;
        local_48 = (double)local_68._s_0.B;
        DebugDraw((TAABBTreeNode<float> *)
                  ((param_2->AllocatorInstance).Data + (longlong)iVar1 * 0x40),param_1,param_2,
                  (TVector<double,3> *)&local_58,param_4 * fVar3);
      }
      piVar6 = piVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    local_78 = (float)*(double *)param_3;
    local_74 = (float)*(double *)&param_3->field_0x8;
    local_70 = (float)*(double *)&param_3->field_0x10;
    (**(code **)((longlong)*param_1 + 8))(param_1,this,&local_78,param_4);
    local_78 = (float)*(double *)param_3;
    local_74 = (float)*(double *)&param_3->field_0x8;
    local_70 = (float)*(double *)&param_3->field_0x10;
    (**(code **)((longlong)*param_1 + 8))(param_1,this->ChildrenBounds + 1,&local_78,param_4);
  }
  return;
}

// Serialize @ 143c72b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TAABBTreeNode<float>::Serialize(TAABBTreeNode<float> *this,FChaosArchive *param_1)

{
  byte bVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  FArchive *pFVar8;
  TAABBTreeNode<float> *pTVar9;
  undefined1 auStack_a8 [32];
  uint local_88 [2];
  TBox<float,3> local_80;
  ulonglong local_48;
  
  uVar6 = _UNK_150a9e6b8;
  uVar5 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  piVar4 = this->ChildrenNodes;
  for (pTVar9 = this; pTVar9 != (TAABBTreeNode<float> *)piVar4;
      pTVar9 = (TAABBTreeNode<float> *)(pTVar9->ChildrenBounds + 1)) {
    (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    iVar7 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    if (iVar7 < 0x19) {
      FImplicitObject::FImplicitObject((FImplicitObject *)&local_80,3,'\x01');
      local_80._padding_ = (longlong)&___7__TBox_M_02_Chaos__6B_;
      local_80.AABB.MMax._4_4_ = 0xff7fffff;
      local_80.AABB.MMin._0_8_ = uVar5;
      local_80.AABB.MMin._8_4_ = SUB84(uVar6,0);
      local_80.AABB.MMax._0_4_ = SUB84((ulonglong)uVar6 >> 0x20,0);
      local_80.AABB.MMax._8_4_ = 0xff7fffff;
      TBox<float,3>::Serialize(&local_80,(FArchive *)param_1);
      *(undefined8 *)&pTVar9->ChildrenBounds[0].MMin = local_80.AABB.MMin._0_8_;
      *(undefined4 *)&pTVar9->ChildrenBounds[0].MMin.field_0x8 = local_80.AABB.MMin._8_4_;
      *(ulonglong *)&pTVar9->ChildrenBounds[0].MMax =
           CONCAT44(local_80.AABB.MMax._4_4_,local_80.AABB.MMax._0_4_);
      *(undefined4 *)&pTVar9->ChildrenBounds[0].MMax.field_0x8 = local_80.AABB.MMax._8_4_;
      local_80._padding_ = (longlong)&___7__TBox_M_02_Chaos__6B_;
      FImplicitObject::~FImplicitObject((FImplicitObject *)&local_80);
    }
    else {
      pFVar8 = operator<<<3>((FArchive *)param_1,(TVector<float,3> *)pTVar9);
      operator<<<3>(pFVar8,&pTVar9->ChildrenBounds[0].MMax);
    }
  }
  for (; piVar4 != &this->ParentNode; piVar4 = piVar4 + 1) {
    puVar2 = *(uint **)param_1->_padding_;
    if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar2 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar4);
      }
    }
    else {
      *piVar4 = *puVar2;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    }
  }
  puVar3 = (ulonglong *)param_1->_padding_;
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    local_88[0] = 0;
    if ((param_1->_padding_ & 1) == 0) {
      local_88[0] = this->bLeaf;
    }
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_88,4);
    if (1 < local_88[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar1 = (byte)param_1->_padding_;
  }
  else {
    local_88[0] = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
    bVar1 = (byte)param_1->_padding_;
  }
  if ((bVar1 & 1) != 0) {
    this->ParentNode = -1;
    this->bLeaf = local_88[0] != 0;
  }
  return;
}

// TAABBTreeNode<double> @ 143cff5b0

TAABBTreeNode<double> * __thiscall
Chaos::TAABBTreeNode<double>::TAABBTreeNode<double>
          (TAABBTreeNode<double> *this,TAABBTreeNode<double> *param_1)

{
  TVector<double,3> *pTVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TVector<double,3> *pTVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)this - (longlong)param_1;
  lVar6 = 2;
  pTVar4 = &param_1->ChildrenBounds[0].MMax;
  do {
    uVar3 = *(undefined8 *)&(((TAABB<double,3> *)(pTVar4 + -1))->MMin).field_0x8;
    pTVar1 = pTVar4 + 2;
    puVar2 = (undefined8 *)(lVar7 + -0x48 + (longlong)pTVar1);
    *puVar2 = *(undefined8 *)&((TAABB<double,3> *)(pTVar4 + -1))->MMin;
    puVar2[1] = uVar3;
    *(undefined8 *)(lVar7 + -0x38 + (longlong)pTVar1) =
         *(undefined8 *)&(((TAABB<double,3> *)(pTVar4 + -1))->MMin).field_0x10;
    uVar3 = *(undefined8 *)&pTVar4->field_0x8;
    *(undefined8 *)((longlong)pTVar4 + lVar7) = *(undefined8 *)pTVar4;
    ((undefined8 *)((longlong)pTVar4 + lVar7))[1] = uVar3;
    *(undefined8 *)((longlong)pTVar4 + lVar7 + 0x10) = *(undefined8 *)&pTVar4->field_0x10;
    lVar6 = lVar6 + -1;
    pTVar4 = pTVar1;
  } while (lVar6 != 0);
  *(undefined8 *)this->ChildrenNodes = *(undefined8 *)param_1->ChildrenNodes;
  this->ParentNode = param_1->ParentNode;
  bVar5 = (this->bLeaf ^ param_1->bLeaf) & 1U ^ this->field_0x6c;
  this->field_0x6c = bVar5;
  this->field_0x6c = (bVar5 ^ param_1->field_0x6c) & 2 ^ bVar5;
  return this;
}

// DebugDraw @ 143d4b250

void __thiscall
Chaos::TAABBTreeNode<double>::DebugDraw
          (TAABBTreeNode<double> *this,ISpacialDebugDrawInterface<double> *param_1,
          TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *param_2,
          TVector<double,3> *param_3,float param_4)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  FLinearColor_u_0 local_78;
  double local_68;
  double local_60;
  double local_58;
  
  if (!this->bLeaf) {
    FLinearColor::MakeRandomColor((FLinearColor *)&local_78._s_0);
    fVar3 = __real_3f400000;
    piVar6 = this->ChildrenNodes;
    lVar5 = 2;
    lVar7 = 2;
    do {
      iVar1 = *piVar6;
      if ((0 < iVar1) && (iVar1 < param_2->ArrayNum)) {
        if ((iVar1 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_68 = (double)local_78._s_0.R;
        local_60 = (double)local_78._s_0.G;
        local_58 = (double)local_78._s_0.B;
        DebugDraw((TAABBTreeNode<double> *)
                  ((param_2->AllocatorInstance).Data + (longlong)iVar1 * 0x70),param_1,param_2,
                  (TVector<double,3> *)&local_68,param_4 * fVar3);
      }
      piVar6 = piVar6 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    do {
      (**(code **)((longlong)*param_1 + 8))(param_1,this,param_3,param_4);
      this = (TAABBTreeNode<double> *)(this->ChildrenBounds + 1);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// Serialize @ 143d6c890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TAABBTreeNode<double>::Serialize(TAABBTreeNode<double> *this,FChaosArchive *param_1)

{
  int *piVar1;
  byte bVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  FArchive *pFVar12;
  TAABBTreeNode<double> *pTVar13;
  undefined1 auStack_e8 [32];
  uint local_c8 [4];
  TBox<double,3> local_b8;
  ulonglong local_68;
  
  uVar10 = _UNK_150a9e6d8;
  uVar9 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar8 = _UNK_150a9e648;
  uVar7 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar6 = _UNK_1508ffb58;
  uVar5 = ___xmm_ffefffffffffffffffefffffffffffff;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_e8;
  piVar1 = this->ChildrenNodes;
  for (pTVar13 = this; pTVar13 != (TAABBTreeNode<double> *)piVar1;
      pTVar13 = (TAABBTreeNode<double> *)(pTVar13->ChildrenBounds + 1)) {
    (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    iVar11 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    if (iVar11 < 0x19) {
      FImplicitObject::FImplicitObject((FImplicitObject *)&local_b8,3,'\x01');
      local_b8._padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
      local_b8.AABB.MMin._0_8_ = uVar7;
      local_b8.AABB.MMin._8_8_ = uVar8;
      local_b8.AABB.MMin._16_8_ = uVar9;
      local_b8.AABB.MMax._0_8_ = uVar10;
      local_b8.AABB.MMax._8_8_ = uVar5;
      local_b8.AABB.MMax._16_8_ = uVar6;
      TBox<double,3>::Serialize(&local_b8,(FArchive *)param_1);
      *(undefined8 *)&pTVar13->ChildrenBounds[0].MMin = local_b8.AABB.MMin._0_8_;
      *(undefined8 *)&pTVar13->ChildrenBounds[0].MMin.field_0x8 = local_b8.AABB.MMin._8_8_;
      local_b8._padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
      *(undefined8 *)&pTVar13->ChildrenBounds[0].MMin.field_0x10 = local_b8.AABB.MMin._16_8_;
      *(undefined8 *)&pTVar13->ChildrenBounds[0].MMax = local_b8.AABB.MMax._0_8_;
      *(undefined8 *)&pTVar13->ChildrenBounds[0].MMax.field_0x8 = local_b8.AABB.MMax._8_8_;
      *(undefined8 *)&pTVar13->ChildrenBounds[0].MMax.field_0x10 = local_b8.AABB.MMax._16_8_;
      FImplicitObject::~FImplicitObject((FImplicitObject *)&local_b8);
    }
    else {
      pFVar12 = SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)pTVar13);
      SerializeReal<double,3>(pFVar12,&pTVar13->ChildrenBounds[0].MMax);
    }
  }
  for (; piVar1 != &this->ParentNode; piVar1 = piVar1 + 1) {
    puVar3 = *(uint **)param_1->_padding_;
    if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar3 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *puVar3;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    }
  }
  puVar4 = (ulonglong *)param_1->_padding_;
  puVar3 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar3) {
    local_c8[0] = 0;
    if ((param_1->_padding_ & 1) == 0) {
      local_c8[0] = this->bLeaf;
    }
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_c8,4);
    if (1 < local_c8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar2 = (byte)param_1->_padding_;
  }
  else {
    local_c8[0] = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar3;
    bVar2 = (byte)param_1->_padding_;
  }
  if ((bVar2 & 1) != 0) {
    this->ParentNode = -1;
    this->bLeaf = local_c8[0] != 0;
  }
  return;
}

