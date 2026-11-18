// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// operator== @ 143f4be50

bool __thiscall
FFieldSystemCommand::operator==(FFieldSystemCommand *this,FFieldSystemCommand *param_1)

{
  uchar uVar1;
  FFieldNodeBase *pFVar2;
  FFieldNodeBase *pFVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  if (((((this->TargetAttribute).ComparisonIndex.Value ==
         (param_1->TargetAttribute).ComparisonIndex.Value) &&
       ((this->TargetAttribute).Number == (param_1->TargetAttribute).Number)) &&
      ((this->CommandName).ComparisonIndex.Value == (param_1->CommandName).ComparisonIndex.Value))
     && ((this->CommandName).Number == (param_1->CommandName).Number)) {
    uVar1 = (param_1->BoundingBox).IsValid;
    if ((this->BoundingBox).IsValid == '\0') {
      if (uVar1 != '\0') {
        return false;
      }
    }
    else {
      if (uVar1 == '\0') {
        return false;
      }
      if ((param_1->BoundingBox).Min.field0_0x0._s_0.X != (this->BoundingBox).Min.field0_0x0._s_0.X)
      {
        return false;
      }
      if ((param_1->BoundingBox).Min.field0_0x0._s_0.Y != (this->BoundingBox).Min.field0_0x0._s_0.Y)
      {
        return false;
      }
      if ((param_1->BoundingBox).Min.field0_0x0._s_0.Z != (this->BoundingBox).Min.field0_0x0._s_0.Z)
      {
        return false;
      }
      if ((param_1->BoundingBox).Max.field0_0x0._s_0.X != (this->BoundingBox).Max.field0_0x0._s_0.X)
      {
        return false;
      }
      if ((param_1->BoundingBox).Max.field0_0x0._s_0.Y != (this->BoundingBox).Max.field0_0x0._s_0.Y)
      {
        return false;
      }
      if ((param_1->BoundingBox).Max.field0_0x0._s_0.Z != (this->BoundingBox).Max.field0_0x0._s_0.Z)
      {
        return false;
      }
    }
    if (param_1->MaxMagnitude == this->MaxMagnitude) {
      pFVar2 = (param_1->RootNode).Ptr;
      pFVar3 = (this->RootNode).Ptr;
      if ((pFVar3 != (FFieldNodeBase *)0x0) == (pFVar2 != (FFieldNodeBase *)0x0)) {
        if (pFVar3 == (FFieldNodeBase *)0x0) {
          return true;
        }
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x10);
        iVar6 = (**(code **)(pFVar2->_padding_ + 0x10))();
        iVar7 = (*pcVar4)(pFVar3);
        if ((iVar7 == iVar6) &&
           (pFVar2 = (this->RootNode).Ptr,
           cVar5 = (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,(param_1->RootNode).Ptr),
           cVar5 != '\0')) {
          return true;
        }
      }
    }
  }
  return false;
}

// Serialize @ 143f73fd0

void __thiscall FFieldSystemCommand::Serialize(FFieldSystemCommand *this,FArchive *param_1)

{
  FFieldNodeBase *pFVar1;
  longlong *plVar2;
  FFieldNodeBase *pFVar3;
  byte local_res8 [8];
  byte local_res10 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  pFVar1 = (this->RootNode).Ptr;
  if (pFVar1 == (FFieldNodeBase *)0x0) {
    local_res10[0] = 0;
  }
  else {
    local_res10[0] = (**(code **)(pFVar1->_padding_ + 8))();
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
  }
  else {
    local_res10[0] = *(byte *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  pFVar1 = (this->RootNode).Ptr;
  if (pFVar1 == (FFieldNodeBase *)0x0) {
    local_res8[0] = 0;
  }
  else {
    local_res8[0] = (**(code **)(pFVar1->_padding_ + 0x10))();
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar3 = FieldNodeFactory((uint)local_res10[0],(uint)local_res8[0]);
    pFVar1 = (this->RootNode).Ptr;
    if ((pFVar1 != pFVar3) && ((this->RootNode).Ptr = pFVar3, pFVar1 != (FFieldNodeBase *)0x0)) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  pFVar1 = (this->RootNode).Ptr;
  if (pFVar1 != (FFieldNodeBase *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,param_1);
  }
  return;
}

// FFieldSystemCommand @ 1440cb5b0

FFieldSystemCommand * __thiscall
FFieldSystemCommand::FFieldSystemCommand(FFieldSystemCommand *this,FFieldSystemCommand *param_1)

{
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *this_00;
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  double dVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *pTVar15;
  bool bVar16;
  EFieldPhysicsType EVar17;
  uint uVar18;
  EFieldPhysicsType EVar19;
  FFieldNodeBase *pFVar20;
  FFieldSystemCommand *pFVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  EFieldPhysicsType EVar25;
  int iVar26;
  FFieldNodeBase *pFVar27;
  uint uVar28;
  uint uVar29;
  EFieldPhysicsType EVar30;
  undefined1 *puVar32;
  uint *puVar33;
  undefined1 local_res10 [8];
  TKeyInitializer<FFieldSystemMetaData::EMetaType_const_&> local_res18;
  int local_res20;
  undefined4 uStack_9c;
  longlong local_90;
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FName local_58 [3];
  FFieldNodeBase *pFVar31;
  
  pFVar21 = param_1;
  if ((param_1->RootNode).Ptr == (FFieldNodeBase *)0x0) {
    pFVar21 = (FFieldSystemCommand *)::FName::FName(local_58,"");
  }
  pFVar27 = (FFieldNodeBase *)0x0;
  EVar25 = Field_None;
  this->TargetAttribute = pFVar21->TargetAttribute;
  pFVar31 = (param_1->RootNode).Ptr;
  pFVar20 = pFVar27;
  if (pFVar31 != (FFieldNodeBase *)0x0) {
    pFVar20 = (FFieldNodeBase *)(**(code **)(pFVar31->_padding_ + 0x18))();
  }
  (this->RootNode).Ptr = pFVar20;
  this->CommandName = param_1->CommandName;
  this->TimeCreation = param_1->TimeCreation;
  dVar7 = (param_1->BoundingBox).Min.field0_0x0._s_0.Y;
  (this->BoundingBox).Min.field0_0x0._s_0.X = (param_1->BoundingBox).Min.field0_0x0._s_0.X;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->BoundingBox).Max.field0_0x0._s_0.X;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = (param_1->BoundingBox).Min.field0_0x0._s_0.Z;
  (this->BoundingBox).Max.field0_0x0._s_0.X = dVar7;
  dVar7 = (param_1->BoundingBox).Max.field0_0x0._s_0.Z;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = (param_1->BoundingBox).Max.field0_0x0._s_0.Y;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = dVar7;
  uVar8 = (param_1->BoundingBox).Pad[0];
  uVar9 = (param_1->BoundingBox).Pad[1];
  uVar10 = (param_1->BoundingBox).Pad[2];
  uVar11 = (param_1->BoundingBox).Pad[3];
  uVar12 = (param_1->BoundingBox).Pad[4];
  uVar13 = (param_1->BoundingBox).Pad[5];
  uVar14 = (param_1->BoundingBox).Pad[6];
  (this->BoundingBox).IsValid = (param_1->BoundingBox).IsValid;
  (this->BoundingBox).Pad[0] = uVar8;
  (this->BoundingBox).Pad[1] = uVar9;
  (this->BoundingBox).Pad[2] = uVar10;
  (this->BoundingBox).Pad[3] = uVar11;
  (this->BoundingBox).Pad[4] = uVar12;
  (this->BoundingBox).Pad[5] = uVar13;
  (this->BoundingBox).Pad[6] = uVar14;
  EVar17 = EVar25;
  if ((param_1->RootNode).Ptr != (FFieldNodeBase *)0x0) {
    EVar17 = param_1->PhysicsType;
  }
  this->PhysicsType = EVar17;
  this_00 = &this->MetaData;
  puVar2 = &(param_1->MetaData).field_0x10;
  this->MaxMagnitude = param_1->MaxMagnitude;
  pTVar1 = &param_1->MetaData;
  dVar7 = (param_1->CenterPosition).field0_0x0._s_0.Y;
  uVar18 = 1;
  EVar30 = Field_None;
  (this->CenterPosition).field0_0x0._s_0.X = (param_1->CenterPosition).field0_0x0._s_0.X;
  (this->CenterPosition).field0_0x0._s_0.Y = dVar7;
  (this->CenterPosition).field0_0x0._s_0.Z = (param_1->CenterPosition).field0_0x0._s_0.Z;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  EVar17 = *(EFieldPhysicsType *)&(param_1->MetaData).field_0x28;
  EVar19 = EVar30;
  if (EVar17 != Field_None) {
    puVar33 = *(uint **)&(param_1->MetaData).field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)puVar2;
    }
    uVar28 = *puVar33;
    pFVar31 = pFVar27;
    EVar30 = Field_None;
    EVar25 = Field_None;
    while (uVar28 == 0) {
      iVar26 = (int)pFVar27;
      EVar30 = (int)pFVar31 + 0x20;
      pFVar31 = (FFieldNodeBase *)(ulonglong)EVar30;
      EVar25 = iVar26 + Field_DynamicState;
      pFVar27 = (FFieldNodeBase *)(ulonglong)EVar25;
      EVar19 = EVar17;
      if ((int)((EVar17 - Field_DynamicState) + ((int)(EVar17 - Field_DynamicState) >> 0x1f & 0x1fU)
               ) >> 5 < (int)EVar25) goto LAB_1440cb72d;
      uVar28 = puVar33[(longlong)iVar26 + 1];
    }
    uVar18 = -uVar28 & uVar28;
    uVar3 = (ulonglong)uVar18 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_res20 = (int)lVar24;
    EVar19 = (EVar30 - Field_DynamicState) + local_res20;
    if ((int)EVar17 < (int)EVar19) {
      EVar19 = EVar17;
    }
  }
LAB_1440cb72d:
  uVar28 = *(uint *)&(param_1->MetaData).field_0x28;
  uVar29 = uVar28 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar18,EVar25);
  TStack_80.CurrentBitIndex = EVar19;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar26 = (int)uVar28 >> 5;
  TStack_80._28_4_ = EVar19;
  TStack_80.BaseBitIndex = EVar30;
  uStack_60 = CONCAT44(uStack_9c,
                       *(int *)&(param_1->MetaData).field_0x8 -
                       *(int *)&(param_1->MetaData).field_0x34);
  local_88 = pTVar1;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar28 < 0) || ((int)EVar17 < (int)uVar28)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    pFVar21 = (FFieldSystemCommand *)(*pcVar6)();
    return pFVar21;
  }
  uVar18 = *(uint *)&(param_1->MetaData).field_0x28;
  if (uVar28 != uVar18) {
    puVar32 = *(undefined1 **)&(param_1->MetaData).field_0x20;
    if (puVar32 == (undefined1 *)0x0) {
      puVar32 = puVar2;
    }
    uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar26 * 4);
    while (uVar28 == 0) {
      lVar24 = (longlong)iVar26;
      uVar29 = uVar29 + 0x20;
      iVar26 = iVar26 + 1;
      uVar28 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
      goto LAB_1440cb830;
      uVar28 = *(uint *)(puVar32 + lVar24 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar28 = (int)lVar24 + -1 + uVar29;
    if ((int)uVar18 < (int)uVar28) {
      uVar28 = uVar18;
    }
  }
LAB_1440cb830:
  while( true ) {
    pTVar15 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_80.CurrentBitIndex == uVar28) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar15 == pTVar1))
    break;
    lVar24 = *(longlong *)pTVar15 + (longlong)TStack_80.CurrentBitIndex * 0x18;
    local_90 = lVar24;
    TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<enum_FFieldSystemMetaData::EMetaType_const_&>_>
              (this_00,&local_res18,(bool *)&local_90);
    lVar22 = (longlong)(int)local_res18.Key;
    lVar4 = *(longlong *)this_00;
    puVar23 = (undefined8 *)(**(code **)(**(longlong **)(lVar24 + 8) + 0x10))();
    puVar5 = *(undefined8 **)(lVar4 + 8 + lVar22 * 0x18);
    if ((puVar5 != puVar23) &&
       (*(undefined8 **)(lVar4 + 8 + lVar22 * 0x18) = puVar23, puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return this;
}

// HasMetaData @ 1440e5e50

bool __thiscall FFieldSystemCommand::HasMetaData(FFieldSystemCommand *this,EMetaType param_1)

{
  longlong lVar1;
  int iVar2;
  TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_> *pTVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->MetaData).field_0x8 != *(int *)&(this->MetaData).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MetaData).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MetaData).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->MetaData).field_0x48 -
                               ECommandData_ProcessingResolution & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->MetaData;
      do {
        if (*(EMetaType *)(lVar1 + (longlong)iVar2 * 0x18) == param_1) {
          pTVar3 = TMapBase<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                   ::FindChecked(&this->MetaData,param_1);
          if (pTVar3->Ptr == (FFieldSystemMetaData *)0x0) {
            return false;
          }
          return true;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return false;
}

