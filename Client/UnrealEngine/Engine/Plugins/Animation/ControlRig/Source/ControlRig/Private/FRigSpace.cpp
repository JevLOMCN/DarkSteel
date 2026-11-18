// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// ~FRigSpace @ 14a2dedf0

void __thiscall FRigSpace::~FRigSpace(FRigSpace *this)

{
  this->_padding_ = (longlong)&___7FRigElement__6B_;
  return;
}

// GetElementType @ 14a30ed20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

ERigElementType __thiscall FRigSpace::GetElementType(FRigSpace *this)

{
  return Null;
}

// GetParentElementKey @ 14a312330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
FRigSpace::GetParentElementKey(FRigSpace *this,FRigElementKey *__return_storage_ptr__)

{
  ERigSpaceType EVar1;
  
  EVar1 = this->SpaceType;
  if (EVar1 == Bone) {
    __return_storage_ptr__->Type = Bone;
    __return_storage_ptr__->Name = this->ParentName;
    return __return_storage_ptr__;
  }
  if (EVar1 != Control) {
    if (EVar1 != Space) {
      __return_storage_ptr__->Type = None;
      (__return_storage_ptr__->Name).ComparisonIndex = 0;
      (__return_storage_ptr__->Name).Number = 0;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Type = Null;
    __return_storage_ptr__->Name = this->ParentName;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Type = Control;
  __return_storage_ptr__->Name = this->ParentName;
  return __return_storage_ptr__;
}

// StaticStruct @ 14a37b950

UScriptStruct * __cdecl FRigSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigSpace.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigSpace,(UObject *)pUVar1,L"RigSpace");
  }
  return Z_Registration_Info_UScriptStruct_FRigSpace.OuterSingleton;
}

// FRigSpace @ 14a3b7fd0

FRigSpace * __thiscall FRigSpace::FRigSpace(FRigSpace *this)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRigSpace__6B_;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->SpaceType = Global;
  (this->ParentName).ComparisonIndex = 0;
  (this->ParentName).Number = 0;
  this->ParentIndex = -1;
  *&(this->InitialTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->InitialTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->InitialTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->InitialTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->InitialTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->InitialTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->LocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

