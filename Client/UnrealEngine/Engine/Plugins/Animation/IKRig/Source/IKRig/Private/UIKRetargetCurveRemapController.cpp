// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14def3bf0

UClass * __cdecl UIKRetargetCurveRemapController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetCurveRemapController",
               &Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton,
               StaticRegisterNativesUIKRetargetCurveRemapController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetCurveRemapController>,
               InternalVTableHelperCtorCaller<UIKRetargetCurveRemapController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton;
}

// UIKRetargetCurveRemapController @ 14df19080

UIKRetargetCurveRemapController * __thiscall
UIKRetargetCurveRemapController::UIKRetargetCurveRemapController
          (UIKRetargetCurveRemapController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetCurveRemapController__6B_;
  return this;
}

// UIKRetargetCurveRemapController @ 14df190b0

UIKRetargetCurveRemapController * __thiscall
UIKRetargetCurveRemapController::UIKRetargetCurveRemapController
          (UIKRetargetCurveRemapController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetCurveRemapController__6B_;
  return this;
}

// ~UIKRetargetCurveRemapController @ 14df1c240

void __thiscall
UIKRetargetCurveRemapController::~UIKRetargetCurveRemapController
          (UIKRetargetCurveRemapController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3c280

UClass * __cdecl UIKRetargetCurveRemapController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetCurveRemapController",
               &Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton,
               StaticRegisterNativesUIKRetargetCurveRemapController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetCurveRemapController>,
               InternalVTableHelperCtorCaller<UIKRetargetCurveRemapController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetCurveRemapController.InnerSingleton;
}

// GetSettings @ 14df3fe30

FIKRetargetCurveRemapOpSettings * __thiscall
UIKRetargetCurveRemapController::GetSettings
          (UIKRetargetCurveRemapController *this,
          FIKRetargetCurveRemapOpSettings *__return_storage_ptr__)

{
  FIKRetargetCurveRemapOpSettings::FIKRetargetCurveRemapOpSettings
            (__return_storage_ptr__,*(FIKRetargetCurveRemapOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetSettings @ 14df55ca0

void __thiscall
UIKRetargetCurveRemapController::SetSettings
          (UIKRetargetCurveRemapController *this,FIKRetargetCurveRemapOpSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  pFVar1 = (param_1->CurvesToRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  param_1->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)param_1->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)param_1->_padding_);
    param_1->_padding_ = 0;
  }
  return;
}

// StaticRegisterNativesUIKRetargetCurveRemapController @ 14df59cd0

void __cdecl
UIKRetargetCurveRemapController::StaticRegisterNativesUIKRetargetCurveRemapController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetCurveRemapController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df65b20

void __cdecl
UIKRetargetCurveRemapController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObjectBase *pUVar1;
  longlong this;
  undefined8 *puVar2;
  FIKRetargetCurveRemapOpSettings local_38;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetCurveRemapOpSettings::FIKRetargetCurveRemapOpSettings
            (&local_38,*(FIKRetargetCurveRemapOpSettings **)(param_1 + 1));
  this = local_38._padding_;
  *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_38._padding_;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_38._padding_._4_1_;
  pUVar1 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if ((UObjectBase *)local_38._padding_ == (UObjectBase *)0x0) {
    if (pUVar1 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    }
  }
  else if (pUVar1 != (UObjectBase *)local_38._padding_) {
    if (pUVar1 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
    }
    UObjectBase::AddRef((UObjectBase *)this);
    *(longlong *)((longlong)param_3 + 0x10) = this;
  }
  *(bool *)((longlong)param_3 + 0x18) = local_38.bCopyAllSourceCurves;
  *(bool *)((longlong)param_3 + 0x19) = local_38.bRemapCurves;
  puVar2 = (undefined8 *)((longlong)param_3 + 0x20);
  if ((TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_> *)puVar2 != &local_38.CurvesToRemap) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    *puVar2 = local_38.CurvesToRemap.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x28) = local_38.CurvesToRemap.ArrayNum;
    *(int *)((longlong)param_3 + 0x2c) = local_38.CurvesToRemap.ArrayMax;
    local_38.CurvesToRemap.ArrayNum = 0;
    local_38.CurvesToRemap.ArrayMax = 0;
    local_38.CurvesToRemap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.CurvesToRemap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.CurvesToRemap.AllocatorInstance.Data);
  }
  local_38._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObjectBase *)local_38._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_38._padding_);
  }
  return;
}

// execSetSettings @ 14df69200

void __cdecl
UIKRetargetCurveRemapController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  void *_Src;
  longlong lVar3;
  undefined **local_68;
  undefined4 local_60;
  undefined1 local_5c;
  UObjectBase *local_58;
  undefined2 local_50;
  void *local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined4 local_30;
  undefined1 local_2c;
  UObjectBase *local_28;
  undefined1 local_20;
  undefined1 local_1f;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_60 = 0xffffffff;
  local_58 = (UObjectBase *)0x0;
  local_68 = &___7FIKRetargetCurveRemapOpSettings__6B_;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_5c = 1;
  local_50 = 0x101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pUVar2 = local_58;
  local_28 = (UObjectBase *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = local_60;
  local_2c = local_5c;
  if (local_58 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(local_58);
    local_28 = pUVar2;
  }
  _Src = local_48;
  lVar3 = (longlong)(int)local_40;
  local_20 = (undefined1)local_50;
  local_38 = &___7FIKRetargetCurveRemapOpSettings__6B_;
  local_1f = local_50._1_1_;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = (int)local_40;
  if ((int)local_40 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(int)local_40,0,&local_18,(int)local_40,&local_c);
    memcpy(local_18.Data,_Src,lVar3 << 4);
  }
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_38);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  local_38 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_28 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_28);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  local_68 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_58 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_58);
  }
  return;
}

