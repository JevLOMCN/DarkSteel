// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14df00510

UClass * __cdecl UIKRetargetAdditivePoseController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetAdditivePoseController",
               &Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton,
               StaticRegisterNativesUIKRetargetAdditivePoseController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetAdditivePoseController>,
               InternalVTableHelperCtorCaller<UIKRetargetAdditivePoseController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton;
}

// UIKRetargetAdditivePoseController @ 14df18f60

UIKRetargetAdditivePoseController * __thiscall
UIKRetargetAdditivePoseController::UIKRetargetAdditivePoseController
          (UIKRetargetAdditivePoseController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetAdditivePoseController__6B_;
  return this;
}

// UIKRetargetAdditivePoseController @ 14df18f90

UIKRetargetAdditivePoseController * __thiscall
UIKRetargetAdditivePoseController::UIKRetargetAdditivePoseController
          (UIKRetargetAdditivePoseController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetAdditivePoseController__6B_;
  return this;
}

// ~UIKRetargetAdditivePoseController @ 14df1c1e0

void __thiscall
UIKRetargetAdditivePoseController::~UIKRetargetAdditivePoseController
          (UIKRetargetAdditivePoseController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3c040

UClass * __cdecl UIKRetargetAdditivePoseController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetAdditivePoseController",
               &Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton,
               StaticRegisterNativesUIKRetargetAdditivePoseController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetAdditivePoseController>,
               InternalVTableHelperCtorCaller<UIKRetargetAdditivePoseController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetAdditivePoseController.InnerSingleton;
}

// GetSettings @ 14df3fda0

FIKRetargetAdditivePoseOpSettings * __thiscall
UIKRetargetAdditivePoseController::GetSettings
          (UIKRetargetAdditivePoseController *this,
          FIKRetargetAdditivePoseOpSettings *__return_storage_ptr__)

{
  FIKRetargetAdditivePoseOpSettings::FIKRetargetAdditivePoseOpSettings
            (__return_storage_ptr__,*(FIKRetargetAdditivePoseOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetSettings @ 14df55bc0

void __thiscall
UIKRetargetAdditivePoseController::SetSettings
          (UIKRetargetAdditivePoseController *this,FIKRetargetAdditivePoseOpSettings *param_1)

{
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  param_1->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)param_1->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)param_1->_padding_);
    param_1->_padding_ = 0;
  }
  return;
}

// StaticRegisterNativesUIKRetargetAdditivePoseController @ 14df59c10

void __cdecl
UIKRetargetAdditivePoseController::StaticRegisterNativesUIKRetargetAdditivePoseController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetAdditivePoseController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df657e0

void __cdecl
UIKRetargetAdditivePoseController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  UObjectBase *this;
  undefined8 uVar5;
  UObjectBase *pUVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(param_1 + 1);
  this = *(UObjectBase **)(lVar4 + 0x10);
  uVar3 = *(undefined4 *)(lVar4 + 8);
  uVar2 = *(undefined1 *)(lVar4 + 0xc);
  if (this != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  uVar1 = *(undefined4 *)(lVar4 + 0x20);
  *(undefined4 *)((longlong)param_3 + 8) = uVar3;
  *(undefined1 *)((longlong)param_3 + 0xc) = uVar2;
  pUVar6 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if (this == (UObjectBase *)0x0) {
    if (pUVar6 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar6);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
      *(undefined4 *)((longlong)param_3 + 0x20) = uVar1;
      *(undefined8 *)((longlong)param_3 + 0x18) = uVar5;
      return;
    }
  }
  else if (pUVar6 != this) {
    if (pUVar6 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar6);
    }
    UObjectBase::AddRef(this);
    *(UObjectBase **)((longlong)param_3 + 0x10) = this;
    *(undefined4 *)((longlong)param_3 + 0x20) = uVar1;
    *(undefined8 *)((longlong)param_3 + 0x18) = uVar5;
    goto LAB_14df6589c;
  }
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar5;
  if (this == (UObjectBase *)0x0) {
    return;
  }
LAB_14df6589c:
  UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this);
  return;
}

// execSetSettings @ 14df68d40

void __cdecl
UIKRetargetAdditivePoseController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  undefined **local_58;
  undefined4 local_50;
  undefined1 local_4c;
  UObjectBase *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined **local_30;
  undefined4 local_28;
  undefined1 local_24;
  UObjectBase *local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_50 = 0xffffffff;
  local_48 = (UObjectBase *)0x0;
  local_58 = &___7FIKRetargetAdditivePoseOpSettings__6B_;
  local_40 = 0;
  local_4c = 1;
  local_38 = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pUVar2 = local_48;
  local_20 = (UObjectBase *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_50;
  local_24 = local_4c;
  if (local_48 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(local_48);
    local_20 = pUVar2;
  }
  local_10 = local_38;
  local_30 = &___7FIKRetargetAdditivePoseOpSettings__6B_;
  local_18 = local_40;
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_30);
  local_30 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_20 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_20);
  }
  local_58 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_48 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_48);
  }
  return;
}

