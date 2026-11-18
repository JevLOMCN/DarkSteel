// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// FCollisionPrimitivesMechanicSelectionChange @ 14cac8f40

FCollisionPrimitivesMechanicSelectionChange * __thiscall
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicSelectionChange::
FCollisionPrimitivesMechanicSelectionChange
          (FCollisionPrimitivesMechanicSelectionChange *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,bool param_2,
          TTransform<double> *param_3,TTransform<double> *param_4,int param_5)

{
  double dVar1;
  double dVar2;
  
  *(undefined ***)this =
       &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
  *(undefined8 *)&(this->PrimitiveIDs).Elements = 0;
  *(undefined8 *)&(this->PrimitiveIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PrimitiveIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PrimitiveIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PrimitiveIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimitiveIDs).Elements.field_0x34 = 0;
  (this->PrimitiveIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PrimitiveIDs).HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&this->PrimitiveIDs,param_1);
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

// FCollisionPrimitivesMechanicSelectionChange @ 14cac9040

FCollisionPrimitivesMechanicSelectionChange * __thiscall
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicSelectionChange::
FCollisionPrimitivesMechanicSelectionChange
          (FCollisionPrimitivesMechanicSelectionChange *this,int param_1,bool param_2,
          TTransform<double> *param_3,TTransform<double> *param_4,int param_5)

{
  double dVar1;
  double dVar2;
  int local_res18;
  int local_res1c [3];
  initializer_list<int> local_18;
  
  *(undefined ***)this =
       &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
  local_18._First = &local_res18;
  local_18._Last = local_res1c;
  local_res18 = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&this->PrimitiveIDs,&local_18);
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

// Apply @ 14caea7e0

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
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicSelectionChange::Apply
          (FCollisionPrimitivesMechanicSelectionChange *this,UObject *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  uint uVar11;
  int iVar12;
  UCollisionPrimitivesMechanic *pUVar13;
  uint uVar14;
  uint uVar15;
  UCollisionPrimitivesMechanic *pUVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int local_b4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pUVar13 = (UCollisionPrimitivesMechanic *)0x0;
  uVar11 = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar10 = UCollisionPrimitivesMechanic::StaticClass();
    iVar12 = (int)pUVar10->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar10->_padding_)) goto LAB_14caea830;
  }
  param_1 = (UObject *)pUVar13;
LAB_14caea830:
  pTVar1 = &this->PrimitiveIDs;
  uVar15 = *(uint *)&(this->PrimitiveIDs).Elements.field_0x28;
  puVar3 = &(this->PrimitiveIDs).Elements.field_0x10;
  uStack_a4 = 1;
  local_90 = 0;
  uStack_94 = uVar11;
  if (uVar15 != 0) {
    puVar18 = *(uint **)&(this->PrimitiveIDs).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar9 = *puVar18;
    pUVar16 = pUVar13;
    uVar11 = 0;
    local_90 = 0;
    while (uVar9 == 0) {
      uVar11 = (int)pUVar13 + 1;
      pUVar13 = (UCollisionPrimitivesMechanic *)(ulonglong)uVar11;
      local_90 = (int)pUVar16 + 0x20;
      pUVar16 = (UCollisionPrimitivesMechanic *)(ulonglong)local_90;
      uStack_94 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_14caea8ac;
      uVar9 = puVar18[(int)uVar11];
    }
    uStack_a4 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uStack_94 = (int)lVar5 + -1 + local_90;
    if ((int)uVar15 < (int)uStack_94) {
      uStack_94 = uVar15;
    }
  }
LAB_14caea8ac:
  uVar9 = *(uint *)&(this->PrimitiveIDs).Elements.field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  iStack_88 = *(int *)&(this->PrimitiveIDs).Elements.field_0x8 -
              *(int *)&(this->PrimitiveIDs).Elements.field_0x34;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,uVar11);
  TStack_78.CurrentBitIndex = uStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar9 >> 5;
  TStack_78._28_4_ = uStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar1;
  uStack_a8 = uVar11;
  local_a0 = puVar3;
  uStack_8c = uStack_94;
  local_80 = pTVar1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar9 < 0) || ((int)uVar15 < (int)uVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar11 = *(uint *)&(this->PrimitiveIDs).Elements.field_0x28;
  if (uVar9 != uVar11) {
    puVar4 = *(undefined1 **)&(this->PrimitiveIDs).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar4 != (undefined1 *)0x0) {
      puVar17 = puVar4;
    }
    uVar15 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      iVar12 = iVar12 + 1;
      uVar14 = uVar14 + 0x20;
      uVar9 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar12)
      goto LAB_14caea9b0;
      uVar15 = *(uint *)(puVar17 + (longlong)iVar12 * 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar9 = (int)lVar5 + -1 + uVar14;
    if ((int)uVar11 < (int)uVar9) {
      uVar9 = uVar11;
    }
  }
LAB_14caea9b0:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_78.CurrentBitIndex == uVar9) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == pTVar1))
    break;
    uVar11 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_78.CurrentBitIndex * 0xc);
    if (this->bAdded == false) {
      local_res20[0] = uVar11;
      if (*(int *)&(((UCollisionPrimitivesMechanic *)param_1)->SelectedPrimitiveIDs).Elements.
                   field_0x8 !=
          *(int *)&(((UCollisionPrimitivesMechanic *)param_1)->SelectedPrimitiveIDs).Elements.
                   field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  (&((UCollisionPrimitivesMechanic *)param_1)->SelectedPrimitiveIDs,uVar11,
                   (int *)local_res20);
      }
    }
    else {
      local_res18[0] = uVar11;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&((UCollisionPrimitivesMechanic *)param_1)->SelectedPrimitiveIDs,&local_b4,
                 (bool *)local_res18);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  UpdateDrawables((UCollisionPrimitivesMechanic *)param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((UCollisionPrimitivesMechanic *)param_1)->OnSelectionChanged);
  return;
}

// HasExpired @ 14cb1a600

bool __thiscall
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicSelectionChange::HasExpired
          (FCollisionPrimitivesMechanicSelectionChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UCollisionPrimitivesMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cb1a63a;
  }
  param_1 = (UObject *)0x0;
LAB_14cb1a63a:
  return *(int *)&param_1[0x23].field_0x20 != this->ChangeStamp;
}

// Revert @ 14cb32540

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
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicSelectionChange::Revert
          (FCollisionPrimitivesMechanicSelectionChange *this,UObject *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  uint uVar11;
  int iVar12;
  UCollisionPrimitivesMechanic *pUVar13;
  uint uVar14;
  uint uVar15;
  UCollisionPrimitivesMechanic *pUVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int local_b4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pUVar13 = (UCollisionPrimitivesMechanic *)0x0;
  uVar11 = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar10 = UCollisionPrimitivesMechanic::StaticClass();
    iVar12 = (int)pUVar10->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar10->_padding_)) goto LAB_14cb32590;
  }
  param_1 = (UObject *)pUVar13;
LAB_14cb32590:
  pTVar1 = &this->PrimitiveIDs;
  uVar15 = *(uint *)&(this->PrimitiveIDs).Elements.field_0x28;
  puVar3 = &(this->PrimitiveIDs).Elements.field_0x10;
  uStack_a4 = 1;
  local_90 = 0;
  uStack_94 = uVar11;
  if (uVar15 != 0) {
    puVar18 = *(uint **)&(this->PrimitiveIDs).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar9 = *puVar18;
    pUVar16 = pUVar13;
    uVar11 = 0;
    local_90 = 0;
    while (uVar9 == 0) {
      uVar11 = (int)pUVar13 + 1;
      pUVar13 = (UCollisionPrimitivesMechanic *)(ulonglong)uVar11;
      local_90 = (int)pUVar16 + 0x20;
      pUVar16 = (UCollisionPrimitivesMechanic *)(ulonglong)local_90;
      uStack_94 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_14cb3260c;
      uVar9 = puVar18[(int)uVar11];
    }
    uStack_a4 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uStack_94 = (int)lVar5 + -1 + local_90;
    if ((int)uVar15 < (int)uStack_94) {
      uStack_94 = uVar15;
    }
  }
LAB_14cb3260c:
  uVar9 = *(uint *)&(this->PrimitiveIDs).Elements.field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  iStack_88 = *(int *)&(this->PrimitiveIDs).Elements.field_0x8 -
              *(int *)&(this->PrimitiveIDs).Elements.field_0x34;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,uVar11);
  TStack_78.CurrentBitIndex = uStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar9 >> 5;
  TStack_78._28_4_ = uStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar1;
  uStack_a8 = uVar11;
  local_a0 = puVar3;
  uStack_8c = uStack_94;
  local_80 = pTVar1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar9 < 0) || ((int)uVar15 < (int)uVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar11 = *(uint *)&(this->PrimitiveIDs).Elements.field_0x28;
  if (uVar9 != uVar11) {
    puVar4 = *(undefined1 **)&(this->PrimitiveIDs).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar4 != (undefined1 *)0x0) {
      puVar17 = puVar4;
    }
    uVar15 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      iVar12 = iVar12 + 1;
      uVar14 = uVar14 + 0x20;
      uVar9 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar12)
      goto LAB_14cb32710;
      uVar15 = *(uint *)(puVar17 + (longlong)iVar12 * 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar9 = (int)lVar5 + -1 + uVar14;
    if ((int)uVar11 < (int)uVar9) {
      uVar9 = uVar11;
    }
  }
LAB_14cb32710:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_78.CurrentBitIndex == uVar9) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == pTVar1))
    break;
    uVar11 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_78.CurrentBitIndex * 0xc);
    if (this->bAdded == false) {
      local_res20[0] = uVar11;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&((UCollisionPrimitivesMechanic *)param_1)->SelectedPrimitiveIDs,&local_b4,
                 (bool *)local_res20);
    }
    else {
      local_res18[0] = uVar11;
      if (*(int *)&(((UCollisionPrimitivesMechanic *)param_1)->SelectedPrimitiveIDs).Elements.
                   field_0x8 !=
          *(int *)&(((UCollisionPrimitivesMechanic *)param_1)->SelectedPrimitiveIDs).Elements.
                   field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  (&((UCollisionPrimitivesMechanic *)param_1)->SelectedPrimitiveIDs,uVar11,
                   (int *)local_res18);
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  UpdateDrawables((UCollisionPrimitivesMechanic *)param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((UCollisionPrimitivesMechanic *)param_1)->OnSelectionChanged);
  return;
}

// ToString @ 14cb41060

FString * __thiscall
UCollisionPrimitivesMechanic::FCollisionPrimitivesMechanicSelectionChange::ToString
          (FCollisionPrimitivesMechanicSelectionChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FCollisionPrimitivesMechanicSelectionChange");
  return __return_storage_ptr__;
}

