// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// FLatticeControlPointsMechanicSelectionChange @ 14cac9930

FLatticeControlPointsMechanicSelectionChange * __thiscall
FLatticeControlPointsMechanicSelectionChange::FLatticeControlPointsMechanicSelectionChange
          (FLatticeControlPointsMechanicSelectionChange *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,bool param_2,
          TTransform<double> *param_3,TTransform<double> *param_4,int param_5)

{
  double dVar1;
  double dVar2;
  
  *(undefined ***)this = &___7FLatticeControlPointsMechanicSelectionChange__6B_;
  *(undefined8 *)&(this->PointIDs).Elements = 0;
  *(undefined8 *)&(this->PointIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PointIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PointIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PointIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PointIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PointIDs).Elements.field_0x34 = 0;
  (this->PointIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PointIDs).HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&this->PointIDs,param_1);
  this->bAdded = param_2;
  dVar1 = (param_3->Rotation).XY.m128d_f64[1];
  (this->PreviousTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->PreviousTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->PreviousTransform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Translation).XY.m128d_f64[1];
  (this->PreviousTransform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  (this->PreviousTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Translation).ZW.m128d_f64[1];
  (this->PreviousTransform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  (this->PreviousTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Rotation).XY.m128d_f64[1];
  (this->NewTransform).Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  (this->NewTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Rotation).ZW.m128d_f64[1];
  (this->NewTransform).Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  (this->NewTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Translation).XY.m128d_f64[1];
  (this->NewTransform).Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  (this->NewTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Translation).ZW.m128d_f64[1];
  (this->NewTransform).Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  (this->NewTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Scale3D).XY.m128d_f64[1];
  (this->NewTransform).Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  (this->NewTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Scale3D).ZW.m128d_f64[0];
  dVar2 = (param_4->Scale3D).ZW.m128d_f64[1];
  this->ChangeStamp = param_5;
  (this->NewTransform).Scale3D.ZW.m128d_f64[0] = dVar1;
  (this->NewTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  return this;
}

// FLatticeControlPointsMechanicSelectionChange @ 14cac9a30

FLatticeControlPointsMechanicSelectionChange * __thiscall
FLatticeControlPointsMechanicSelectionChange::FLatticeControlPointsMechanicSelectionChange
          (FLatticeControlPointsMechanicSelectionChange *this,int param_1,bool param_2,
          TTransform<double> *param_3,TTransform<double> *param_4,int param_5)

{
  double dVar1;
  double dVar2;
  int local_res18;
  int local_res1c [3];
  initializer_list<int> local_18;
  
  *(undefined ***)this = &___7FLatticeControlPointsMechanicSelectionChange__6B_;
  local_18._First = &local_res18;
  local_18._Last = local_res1c;
  local_res18 = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&this->PointIDs,&local_18);
  this->bAdded = param_2;
  dVar1 = (param_3->Rotation).XY.m128d_f64[1];
  (this->PreviousTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->PreviousTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->PreviousTransform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Translation).XY.m128d_f64[1];
  (this->PreviousTransform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  (this->PreviousTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Translation).ZW.m128d_f64[1];
  (this->PreviousTransform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  (this->PreviousTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Rotation).XY.m128d_f64[1];
  (this->NewTransform).Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  (this->NewTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Rotation).ZW.m128d_f64[1];
  (this->NewTransform).Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  (this->NewTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Translation).XY.m128d_f64[1];
  (this->NewTransform).Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  (this->NewTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Translation).ZW.m128d_f64[1];
  (this->NewTransform).Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  (this->NewTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Scale3D).XY.m128d_f64[1];
  (this->NewTransform).Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  (this->NewTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_4->Scale3D).ZW.m128d_f64[0];
  dVar2 = (param_4->Scale3D).ZW.m128d_f64[1];
  this->ChangeStamp = param_5;
  (this->NewTransform).Scale3D.ZW.m128d_f64[0] = dVar1;
  (this->NewTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  return this;
}

// Apply @ 14caeae00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FLatticeControlPointsMechanicSelectionChange::Apply
          (FLatticeControlPointsMechanicSelectionChange *this,UObject *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  UCombinedTransformGizmo *pUVar5;
  longlong lVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  UClass *pUVar11;
  uint uVar12;
  int iVar13;
  ULatticeControlPointsMechanic *pUVar14;
  uint uVar15;
  ULatticeControlPointsMechanic *pUVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  int local_res18;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a0;
  uint uStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pUVar14 = (ULatticeControlPointsMechanic *)0x0;
  uVar12 = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar11 = ULatticeControlPointsMechanic::StaticClass();
    iVar13 = (int)pUVar11->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar11->_padding_)) goto LAB_14caeae54;
  }
  param_1 = (UObject *)pUVar14;
LAB_14caeae54:
  pTVar1 = &this->PointIDs;
  uVar15 = *(uint *)&(this->PointIDs).Elements.field_0x28;
  puVar3 = &(this->PointIDs).Elements.field_0x10;
  uStack_94 = 1;
  local_80 = 0;
  uStack_84 = uVar12;
  if (uVar15 != 0) {
    puVar18 = *(uint **)&(this->PointIDs).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar10 = *puVar18;
    pUVar16 = pUVar14;
    uVar12 = 0;
    local_80 = 0;
    while (uVar10 == 0) {
      uVar12 = (int)pUVar14 + 1;
      pUVar14 = (ULatticeControlPointsMechanic *)(ulonglong)uVar12;
      local_80 = (int)pUVar16 + 0x20;
      pUVar16 = (ULatticeControlPointsMechanic *)(ulonglong)local_80;
      uStack_84 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14caeaed0;
      uVar10 = puVar18[(int)uVar12];
    }
    uStack_94 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (int)lVar6;
    uStack_84 = local_res18 + -1 + local_80;
    if ((int)uVar15 < (int)uStack_84) {
      uStack_84 = uVar15;
    }
  }
LAB_14caeaed0:
  uVar10 = *(uint *)&(this->PointIDs).Elements.field_0x28;
  uVar19 = uVar10 & 0xffffffe0;
  iStack_78 = *(int *)&(this->PointIDs).Elements.field_0x8 -
              *(int *)&(this->PointIDs).Elements.field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,uVar12);
  TStack_68.CurrentBitIndex = uStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar10 >> 5;
  TStack_68._28_4_ = uStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar1;
  uStack_98 = uVar12;
  local_90 = puVar3;
  uStack_7c = uStack_84;
  local_70 = pTVar1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar10 < 0) || ((int)uVar15 < (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = *(uint *)&(this->PointIDs).Elements.field_0x28;
  if (uVar10 != uVar12) {
    puVar4 = *(undefined1 **)&(this->PointIDs).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar4 != (undefined1 *)0x0) {
      puVar17 = puVar4;
    }
    uVar15 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      iVar13 = iVar13 + 1;
      uVar19 = uVar19 + 0x20;
      uVar10 = uVar12;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar13)
      goto LAB_14caeafd0;
      uVar15 = *(uint *)(puVar17 + (longlong)iVar13 * 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar10 = (int)lVar6 + -1 + uVar19;
    if ((int)uVar12 < (int)uVar10) {
      uVar10 = uVar12;
    }
  }
LAB_14caeafd0:
  while( true ) {
    pTVar8 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar10) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar8 == pTVar1))
    break;
    iVar13 = *(int *)(*(longlong *)&pTVar8->Elements + (longlong)TStack_68.CurrentBitIndex * 0xc);
    if (this->bAdded == false) {
      ULatticeControlPointsMechanic::DeselectPoint((ULatticeControlPointsMechanic *)param_1,iVar13);
    }
    else {
      ULatticeControlPointsMechanic::SelectPoint((ULatticeControlPointsMechanic *)param_1,iVar13);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  UCombinedTransformGizmo::ReinitializeGizmoTransform
            ((((ULatticeControlPointsMechanic *)param_1)->PointTransformGizmo).field0_0x0.DebugPtr,
             &this->NewTransform,true);
  pUVar5 = (((ULatticeControlPointsMechanic *)param_1)->PointTransformGizmo).field0_0x0.DebugPtr;
  local_b8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_b0 = _UNK_150689688;
  local_a8 = __real_3ff0000000000000;
  (**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5,&local_b8);
  ULatticeControlPointsMechanic::UpdateGizmoVisibility((ULatticeControlPointsMechanic *)param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((ULatticeControlPointsMechanic *)param_1)->OnSelectionChanged);
  return;
}

// HasExpired @ 14cb1a840

bool __thiscall
FLatticeControlPointsMechanicSelectionChange::HasExpired
          (FLatticeControlPointsMechanicSelectionChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = ULatticeControlPointsMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cb1a87a;
  }
  param_1 = (UObject *)0x0;
LAB_14cb1a87a:
  return *(int *)&param_1[0x1d].field_0x10 != this->ChangeStamp;
}

// Revert @ 14cb32b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FLatticeControlPointsMechanicSelectionChange::Revert
          (FLatticeControlPointsMechanicSelectionChange *this,UObject *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  UCombinedTransformGizmo *pUVar5;
  longlong lVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  UClass *pUVar11;
  uint uVar12;
  int iVar13;
  ULatticeControlPointsMechanic *pUVar14;
  uint uVar15;
  ULatticeControlPointsMechanic *pUVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  int local_res18;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a0;
  uint uStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pUVar14 = (ULatticeControlPointsMechanic *)0x0;
  uVar12 = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar11 = ULatticeControlPointsMechanic::StaticClass();
    iVar13 = (int)pUVar11->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar11->_padding_)) goto LAB_14cb32bb4;
  }
  param_1 = (UObject *)pUVar14;
LAB_14cb32bb4:
  pTVar1 = &this->PointIDs;
  uVar15 = *(uint *)&(this->PointIDs).Elements.field_0x28;
  puVar3 = &(this->PointIDs).Elements.field_0x10;
  uStack_94 = 1;
  local_80 = 0;
  uStack_84 = uVar12;
  if (uVar15 != 0) {
    puVar18 = *(uint **)&(this->PointIDs).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar10 = *puVar18;
    pUVar16 = pUVar14;
    uVar12 = 0;
    local_80 = 0;
    while (uVar10 == 0) {
      uVar12 = (int)pUVar14 + 1;
      pUVar14 = (ULatticeControlPointsMechanic *)(ulonglong)uVar12;
      local_80 = (int)pUVar16 + 0x20;
      pUVar16 = (ULatticeControlPointsMechanic *)(ulonglong)local_80;
      uStack_84 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14cb32c30;
      uVar10 = puVar18[(int)uVar12];
    }
    uStack_94 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (int)lVar6;
    uStack_84 = local_res18 + -1 + local_80;
    if ((int)uVar15 < (int)uStack_84) {
      uStack_84 = uVar15;
    }
  }
LAB_14cb32c30:
  uVar10 = *(uint *)&(this->PointIDs).Elements.field_0x28;
  uVar19 = uVar10 & 0xffffffe0;
  iStack_78 = *(int *)&(this->PointIDs).Elements.field_0x8 -
              *(int *)&(this->PointIDs).Elements.field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,uVar12);
  TStack_68.CurrentBitIndex = uStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar10 >> 5;
  TStack_68._28_4_ = uStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar1;
  uStack_98 = uVar12;
  local_90 = puVar3;
  uStack_7c = uStack_84;
  local_70 = pTVar1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar10 < 0) || ((int)uVar15 < (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = *(uint *)&(this->PointIDs).Elements.field_0x28;
  if (uVar10 != uVar12) {
    puVar4 = *(undefined1 **)&(this->PointIDs).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar4 != (undefined1 *)0x0) {
      puVar17 = puVar4;
    }
    uVar15 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      iVar13 = iVar13 + 1;
      uVar19 = uVar19 + 0x20;
      uVar10 = uVar12;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar13)
      goto LAB_14cb32d30;
      uVar15 = *(uint *)(puVar17 + (longlong)iVar13 * 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar10 = (int)lVar6 + -1 + uVar19;
    if ((int)uVar12 < (int)uVar10) {
      uVar10 = uVar12;
    }
  }
LAB_14cb32d30:
  while( true ) {
    pTVar8 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar10) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar8 == pTVar1))
    break;
    iVar13 = *(int *)(*(longlong *)&pTVar8->Elements + (longlong)TStack_68.CurrentBitIndex * 0xc);
    if (this->bAdded == false) {
      ULatticeControlPointsMechanic::SelectPoint((ULatticeControlPointsMechanic *)param_1,iVar13);
    }
    else {
      ULatticeControlPointsMechanic::DeselectPoint((ULatticeControlPointsMechanic *)param_1,iVar13);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  UCombinedTransformGizmo::ReinitializeGizmoTransform
            ((((ULatticeControlPointsMechanic *)param_1)->PointTransformGizmo).field0_0x0.DebugPtr,
             &this->PreviousTransform,true);
  pUVar5 = (((ULatticeControlPointsMechanic *)param_1)->PointTransformGizmo).field0_0x0.DebugPtr;
  local_b8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_b0 = _UNK_150689688;
  local_a8 = __real_3ff0000000000000;
  (**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5,&local_b8);
  ULatticeControlPointsMechanic::UpdateGizmoVisibility((ULatticeControlPointsMechanic *)param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((ULatticeControlPointsMechanic *)param_1)->OnSelectionChanged);
  return;
}

// ToString @ 14cb41180

FString * __thiscall
FLatticeControlPointsMechanicSelectionChange::ToString
          (FLatticeControlPointsMechanicSelectionChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FLatticeControlPointsMechanicSelectionChange");
  return __return_storage_ptr__;
}

