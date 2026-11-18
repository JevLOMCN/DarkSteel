// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 16

// StaticClass @ 14a897540

UClass * __cdecl UMultiAnimAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiAnimAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"MultiAnimAsset",
               &Z_Registration_Info_UClass_UMultiAnimAsset.InnerSingleton,
               StaticRegisterNativesUMultiAnimAsset,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMultiAnimAsset>,
               InternalVTableHelperCtorCaller<UMultiAnimAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiAnimAsset.InnerSingleton;
}

// UMultiAnimAsset @ 14a8acf20

UMultiAnimAsset * __thiscall
UMultiAnimAsset::UMultiAnimAsset(UMultiAnimAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMultiAnimAsset__6B_;
  return this;
}

// UMultiAnimAsset @ 14a8acf50

UMultiAnimAsset * __thiscall
UMultiAnimAsset::UMultiAnimAsset(UMultiAnimAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMultiAnimAsset__6B_;
  return this;
}

// ~UMultiAnimAsset @ 14a8ae0b0

void __thiscall UMultiAnimAsset::~UMultiAnimAsset(UMultiAnimAsset *this)

{
  *(undefined ***)this = &___7UMultiAnimAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateWarpTransforms @ 14a8b1a10

void __thiscall
UMultiAnimAsset::CalculateWarpTransforms
          (UMultiAnimAsset *this,float param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,
          TArrayView<UE::Math::TTransform<double>,int> *param_3,
          TArrayView<UMirrorDataTable_const_*_const,int> *param_4,
          TArrayView<bool_const_,int> *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\MultiAnimAsset.h"
             ,0x23,L"Pure virtual not implemented (%s)");
  return;
}

// GetAnimationAsset @ 14a8b97b0

UAnimationAsset * __thiscall
UMultiAnimAsset::GetAnimationAsset(UMultiAnimAsset *this,FName *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\MultiAnimAsset.h"
             ,0x20,L"Pure virtual not implemented (%s)");
  return (UAnimationAsset *)0x0;
}

// GetNumRoles @ 14a8bb370

int __thiscall UMultiAnimAsset::GetNumRoles(UMultiAnimAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\MultiAnimAsset.h"
             ,0x1e,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetOrigin @ 14a8bbe50

TTransform<double> * __thiscall
UMultiAnimAsset::GetOrigin
          (UMultiAnimAsset *this,TTransform<double> *__return_storage_ptr__,FName *param_1)

{
  __m128d _Var1;
  __m128d _Var2;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\MultiAnimAsset.h"
             ,0x21,L"Pure virtual not implemented (%s)");
  _Var1 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var2.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var1.m128d_f64;
  return __return_storage_ptr__;
}

// GetPlayLength @ 14a8bc110

float __thiscall UMultiAnimAsset::GetPlayLength(UMultiAnimAsset *this,TVector<double> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\MultiAnimAsset.h"
             ,0x18,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetPrivateStaticClass @ 14a8bd090

UClass * __cdecl UMultiAnimAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiAnimAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"MultiAnimAsset",
               &Z_Registration_Info_UClass_UMultiAnimAsset.InnerSingleton,
               StaticRegisterNativesUMultiAnimAsset,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMultiAnimAsset>,
               InternalVTableHelperCtorCaller<UMultiAnimAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiAnimAsset.InnerSingleton;
}

// GetRole @ 14a8bd630

FName __thiscall UMultiAnimAsset::GetRole(UMultiAnimAsset *this,int param_1)

{
  uint in_register_00000014;
  FName FVar1;
  
  FVar1.Number = in_register_00000014;
  FVar1.ComparisonIndex.Value = param_1;
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\MultiAnimAsset.h"
             ,0x1f,L"Pure virtual not implemented (%s)");
  *(undefined8 *)FVar1 = 0;
  return FVar1;
}

// HasRootMotion @ 14a8c01c0

bool __thiscall UMultiAnimAsset::HasRootMotion(UMultiAnimAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\MultiAnimAsset.h"
             ,0x17,L"Pure virtual not implemented (%s)");
  return false;
}

// IsLooping @ 14a8c0de0

bool __thiscall UMultiAnimAsset::IsLooping(UMultiAnimAsset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\MultiAnimAsset.h"
             ,0x16,L"Pure virtual not implemented (%s)");
  return false;
}

// StaticRegisterNativesUMultiAnimAsset @ 14a8ce350

void __cdecl UMultiAnimAsset::StaticRegisterNativesUMultiAnimAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMultiAnimAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBP_GetAnimationAsset @ 14a8d25d0

void __cdecl
UMultiAnimAsset::execBP_GetAnimationAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,puVar3);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execBP_GetOrigin @ 14a8d2680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UMultiAnimAsset::execBP_GetOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined1 auStack_b8 [32];
  uchar local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar2 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,&local_88,puVar2);
  *(undefined8 *)param_3 = local_88;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_80;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_78;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_70;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_68;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_60;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_58;
  *(undefined8 *)((longlong)param_3 + 0x38) = uStack_50;
  *(undefined8 *)((longlong)param_3 + 0x40) = local_48;
  *(undefined8 *)((longlong)param_3 + 0x48) = uStack_40;
  *(undefined8 *)((longlong)param_3 + 0x50) = local_38;
  *(undefined8 *)((longlong)param_3 + 0x58) = uStack_30;
  return;
}

