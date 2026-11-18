// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14def4cb0

UClass * __cdecl UIKRetargetScaleSourceController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetScaleSourceController",
               &Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton,
               StaticRegisterNativesUIKRetargetScaleSourceController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetScaleSourceController>,
               InternalVTableHelperCtorCaller<UIKRetargetScaleSourceController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton;
}

// UIKRetargetScaleSourceController @ 14df19640

UIKRetargetScaleSourceController * __thiscall
UIKRetargetScaleSourceController::UIKRetargetScaleSourceController
          (UIKRetargetScaleSourceController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetScaleSourceController__6B_;
  return this;
}

// UIKRetargetScaleSourceController @ 14df19670

UIKRetargetScaleSourceController * __thiscall
UIKRetargetScaleSourceController::UIKRetargetScaleSourceController
          (UIKRetargetScaleSourceController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetScaleSourceController__6B_;
  return this;
}

// ~UIKRetargetScaleSourceController @ 14df1c3f0

void __thiscall
UIKRetargetScaleSourceController::~UIKRetargetScaleSourceController
          (UIKRetargetScaleSourceController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3cb50

UClass * __cdecl UIKRetargetScaleSourceController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetScaleSourceController",
               &Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton,
               StaticRegisterNativesUIKRetargetScaleSourceController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetScaleSourceController>,
               InternalVTableHelperCtorCaller<UIKRetargetScaleSourceController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton;
}

// GetSettings @ 14df3ffe0

FIKRetargetScaleSourceOpSettings * __thiscall
UIKRetargetScaleSourceController::GetSettings
          (UIKRetargetScaleSourceController *this,
          FIKRetargetScaleSourceOpSettings *__return_storage_ptr__)

{
  FIKRetargetScaleSourceOpSettings::FIKRetargetScaleSourceOpSettings
            (__return_storage_ptr__,*(FIKRetargetScaleSourceOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetSettings @ 14df55f60

void __thiscall
UIKRetargetScaleSourceController::SetSettings
          (UIKRetargetScaleSourceController *this,FIKRetargetScaleSourceOpSettings *param_1)

{
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  param_1->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)param_1->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)param_1->_padding_);
    param_1->_padding_ = 0;
  }
  return;
}

// StaticRegisterNativesUIKRetargetScaleSourceController @ 14df59f40

void __cdecl
UIKRetargetScaleSourceController::StaticRegisterNativesUIKRetargetScaleSourceController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetScaleSourceController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df667b0

void __cdecl
UIKRetargetScaleSourceController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  UObjectBase *this;
  UObjectBase *pUVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = *(longlong *)(param_1 + 1);
  this = *(UObjectBase **)(lVar6 + 0x10);
  uVar5 = *(undefined4 *)(lVar6 + 8);
  uVar2 = *(undefined1 *)(lVar6 + 0xc);
  if (this != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this);
  }
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  uVar3 = *(undefined1 *)(lVar6 + 0x20);
  uVar8 = *(undefined4 *)(lVar6 + 0x24);
  uVar9 = *(undefined4 *)(lVar6 + 0x28);
  uVar10 = *(undefined4 *)(lVar6 + 0x2c);
  uVar11 = *(undefined4 *)(lVar6 + 0x30);
  uVar4 = *(undefined1 *)(lVar6 + 0x34);
  *(undefined4 *)((longlong)param_3 + 8) = uVar5;
  *(undefined1 *)((longlong)param_3 + 0xc) = uVar2;
  pUVar7 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if (this == (UObjectBase *)0x0) {
    if (pUVar7 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar7);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    }
  }
  else if (pUVar7 != this) {
    if (pUVar7 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar7);
    }
    UObjectBase::AddRef(this);
    *(UObjectBase **)((longlong)param_3 + 0x10) = this;
  }
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar1;
  *(undefined1 *)((longlong)param_3 + 0x20) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar8;
  *(undefined4 *)((longlong)param_3 + 0x28) = uVar9;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar10;
  *(undefined4 *)((longlong)param_3 + 0x30) = uVar11;
  *(undefined1 *)((longlong)param_3 + 0x34) = uVar4;
  if (this != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this);
  }
  return;
}

// execSetSettings @ 14df6a340

void __cdecl
UIKRetargetScaleSourceController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  undefined **local_78;
  undefined4 local_70;
  undefined1 local_6c;
  UObjectBase *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined **local_40;
  undefined4 local_38;
  undefined1 local_34;
  UObjectBase *local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c;
  
  local_60 = __real_3ff0000000000000;
  local_68 = (UObjectBase *)0x0;
  local_78 = &___7FIKRetargetScaleSourceOpSettings__6B_;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  local_70 = 0xffffffff;
  local_6c = 1;
  uStack_4c = 0x7fffffff;
  uStack_48 = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pUVar2 = local_68;
  local_30 = (UObjectBase *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_70;
  local_34 = local_6c;
  if (local_68 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(local_68);
    local_30 = pUVar2;
  }
  local_28 = local_60;
  local_20 = local_58;
  local_1c = (undefined4)local_54;
  uStack_18 = local_54._4_4_;
  uStack_14 = uStack_4c;
  uStack_10 = uStack_48;
  local_40 = &___7FIKRetargetScaleSourceOpSettings__6B_;
  local_c = local_44;
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_40);
  local_40 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_30 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_30);
  }
  local_78 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_68 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_68);
  }
  return;
}

