// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a2c7d90

UScriptStruct * __cdecl FRigCurrentAndInitialTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform,(UObject *)pUVar1,
                         L"RigCurrentAndInitialTransform");
  }
  return Z_Registration_Info_UScriptStruct_FRigCurrentAndInitialTransform.OuterSingleton;
}

// operator= @ 14a2e05c0

FRigCurrentAndInitialTransform * __thiscall
FRigCurrentAndInitialTransform::operator=
          (FRigCurrentAndInitialTransform *this,FRigCurrentAndInitialTransform *param_1)

{
  FRigLocalAndGlobalTransform::operator=(&this->Current,&param_1->Current);
  FRigLocalAndGlobalTransform::operator=(&this->Initial,&param_1->Initial);
  return this;
}

// LinkStorage @ 14a329fc0

void __thiscall
FRigCurrentAndInitialTransform::LinkStorage
          (FRigCurrentAndInitialTransform *this,
          TArrayView<UE::Math::TTransform<double>,int> *param_1)

{
  int iVar1;
  
  iVar1 = (this->Current).Local.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Current).Local.Storage = param_1->DataPtr + iVar1;
  }
  iVar1 = (this->Current).Global.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Current).Global.Storage = param_1->DataPtr + iVar1;
  }
  iVar1 = (this->Initial).Local.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Initial).Local.Storage = param_1->DataPtr + iVar1;
  }
  iVar1 = (this->Initial).Global.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Initial).Global.Storage = param_1->DataPtr + iVar1;
  }
  return;
}

// Load @ 14a32beb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigCurrentAndInitialTransform::Load
          (FRigCurrentAndInitialTransform *this,FArchive *param_1,
          FRigHierarchySerializationSettings *param_2,FRigCurrentAndInitialDirtyState *param_3)

{
  if (param_2->bSerializeCurrentTransform != false) {
    FRigLocalAndGlobalTransform::Load(&this->Current,param_1,param_2,&param_3->Current);
  }
  if ((param_2->bSerializeInitialTransform != false) &&
     (FRigLocalAndGlobalTransform::Load(&this->Initial,param_1,param_2,&param_3->Initial),
     param_2->bSerializeCurrentTransform == false)) {
    FRigLocalAndGlobalTransform::operator=(&this->Current,&this->Initial);
    FRigLocalAndGlobalDirtyState::operator=(&param_3->Current,&param_3->Initial);
  }
  return;
}

// Save @ 14a3452b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigCurrentAndInitialTransform::Save
          (FRigCurrentAndInitialTransform *this,FArchive *param_1,
          FRigHierarchySerializationSettings *param_2,FRigCurrentAndInitialDirtyState *param_3)

{
  if (param_2->bSerializeCurrentTransform != false) {
    FRigLocalAndGlobalTransform::Save(&this->Current,param_1,param_2,&param_3->Current);
  }
  if (param_2->bSerializeInitialTransform != false) {
    FRigLocalAndGlobalTransform::Save(&this->Initial,param_1,param_2,&param_3->Initial);
  }
  return;
}

// Set @ 14a349b70

void __thiscall
FRigCurrentAndInitialTransform::Set
          (FRigCurrentAndInitialTransform *this,Type param_1,TTransform<double> *param_2)

{
  TTransform<double> *pTVar1;
  double dVar2;
  
  if (param_1 == InitialLocal) {
    this = (FRigCurrentAndInitialTransform *)&this->Initial;
  }
  else if (param_1 != CurrentLocal) {
    if (param_1 == CurrentGlobal) {
      this = (FRigCurrentAndInitialTransform *)&(this->Current).Global;
    }
    else {
      this = (FRigCurrentAndInitialTransform *)&(this->Initial).Global;
    }
  }
  pTVar1 = (this->Current).Local.Storage;
  if (pTVar1 != (TTransform<double> *)0x0) {
    dVar2 = (param_2->Rotation).XY.m128d_f64[1];
    (pTVar1->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    (pTVar1->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
    (pTVar1->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    (pTVar1->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Translation).XY.m128d_f64[1];
    (pTVar1->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    (pTVar1->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Translation).ZW.m128d_f64[1];
    (pTVar1->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    (pTVar1->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Scale3D).XY.m128d_f64[1];
    (pTVar1->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    (pTVar1->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->Scale3D).ZW.m128d_f64[1];
    (pTVar1->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    (pTVar1->Scale3D).ZW.m128d_f64[1] = dVar2;
  }
  return;
}

// UnlinkStorage @ 14a35bec0

void __thiscall
FRigCurrentAndInitialTransform::UnlinkStorage
          (FRigCurrentAndInitialTransform *this,
          FRigReusableElementStorage<UE::Math::TTransform<double>_> *param_1)

{
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)this,&(this->Current).Local.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,&(this->Current).Global.StorageIndex,&(this->Current).Global.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&this->Initial,&(this->Initial).Local.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,&(this->Initial).Global.StorageIndex,&(this->Initial).Global.Storage);
  return;
}

