// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b50b610

UClass * __cdecl UDS_M_CommonAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonAsset",
               &Z_Registration_Info_UClass_UDS_M_CommonAsset.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonAsset,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_CommonAsset>,
               InternalVTableHelperCtorCaller<UDS_M_CommonAsset>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonAsset.InnerSingleton;
}

// UDS_M_CommonAsset @ 14b50fe40

UDS_M_CommonAsset * __thiscall
UDS_M_CommonAsset::UDS_M_CommonAsset(UDS_M_CommonAsset *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->VisibleValue2 = true;
  this->_padding_ = (longlong)&___7UDS_M_CommonAsset__6B_;
  this->Icon = 0;
  this->Value1 = 0;
  this->Value2 = 0;
  return this;
}

// UDS_M_CommonAsset @ 14b50fe80

UDS_M_CommonAsset * __thiscall
UDS_M_CommonAsset::UDS_M_CommonAsset(UDS_M_CommonAsset *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->VisibleValue2 = true;
  this->_padding_ = (longlong)&___7UDS_M_CommonAsset__6B_;
  this->Icon = 0;
  this->Value1 = 0;
  this->Value2 = 0;
  return this;
}

// ~UDS_M_CommonAsset @ 14b512840

void __thiscall UDS_M_CommonAsset::~UDS_M_CommonAsset(UDS_M_CommonAsset *this)

{
  this->_padding_ = (longlong)&___7UDS_M_CommonAsset__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b514dc0

UClass * __cdecl UDS_M_CommonAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonAsset",
               &Z_Registration_Info_UClass_UDS_M_CommonAsset.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonAsset,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_CommonAsset>,
               InternalVTableHelperCtorCaller<UDS_M_CommonAsset>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonAsset.InnerSingleton;
}

// StaticRegisterNativesUDS_M_CommonAsset @ 14b516b60

void __cdecl UDS_M_CommonAsset::StaticRegisterNativesUDS_M_CommonAsset(void)

{
  return;
}

// GetIcon @ 14bcf7e10

int __thiscall UDS_M_CommonAsset::GetIcon(UDS_M_CommonAsset *this)

{
  return this->Icon;
}

// GetValue1 @ 14bcfecd0

int __thiscall UDS_M_CommonAsset::GetValue1(UDS_M_CommonAsset *this)

{
  return this->Value1;
}

// GetValue2 @ 14bcfece0

int __thiscall UDS_M_CommonAsset::GetValue2(UDS_M_CommonAsset *this)

{
  return this->Value2;
}

// Init @ 14bd00be0

void __thiscall
UDS_M_CommonAsset::Init(UDS_M_CommonAsset *this,int param_1,int param_2,int param_3,bool param_4)

{
  this->VisibleValue2 = param_4;
  this->Icon = param_1;
  this->Value1 = param_2;
  this->Value2 = param_3;
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// IsVisibleValue2 @ 14bd06ac0

bool __thiscall UDS_M_CommonAsset::IsVisibleValue2(UDS_M_CommonAsset *this)

{
  return this->VisibleValue2;
}

// SetIcon @ 14bd1fcb0

void __thiscall UDS_M_CommonAsset::SetIcon(UDS_M_CommonAsset *this,int param_1)

{
  this->Icon = param_1;
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetValue1 @ 14bd22dd0

void __thiscall UDS_M_CommonAsset::SetValue1(UDS_M_CommonAsset *this,int param_1)

{
  this->Value1 = param_1;
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetValue2 @ 14bd22df0

void __thiscall UDS_M_CommonAsset::SetValue2(UDS_M_CommonAsset *this,int param_1)

{
  this->Value2 = param_1;
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetVisibleValue2 @ 14bd22f00

void __thiscall UDS_M_CommonAsset::SetVisibleValue2(UDS_M_CommonAsset *this,bool param_1)

{
  this->VisibleValue2 = param_1;
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

