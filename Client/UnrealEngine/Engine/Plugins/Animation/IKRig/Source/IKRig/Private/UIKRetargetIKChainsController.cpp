// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14deef8f0

UClass * __cdecl UIKRetargetIKChainsController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetIKChainsController",
               &Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton,
               StaticRegisterNativesUIKRetargetIKChainsController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetIKChainsController>,
               InternalVTableHelperCtorCaller<UIKRetargetIKChainsController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton;
}

// UIKRetargetIKChainsController @ 14df192c0

UIKRetargetIKChainsController * __thiscall
UIKRetargetIKChainsController::UIKRetargetIKChainsController
          (UIKRetargetIKChainsController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetIKChainsController__6B_;
  return this;
}

// UIKRetargetIKChainsController @ 14df192f0

UIKRetargetIKChainsController * __thiscall
UIKRetargetIKChainsController::UIKRetargetIKChainsController
          (UIKRetargetIKChainsController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetIKChainsController__6B_;
  return this;
}

// ~UIKRetargetIKChainsController @ 14df1c2e0

void __thiscall
UIKRetargetIKChainsController::~UIKRetargetIKChainsController(UIKRetargetIKChainsController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3c630

UClass * __cdecl UIKRetargetIKChainsController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetIKChainsController",
               &Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton,
               StaticRegisterNativesUIKRetargetIKChainsController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetIKChainsController>,
               InternalVTableHelperCtorCaller<UIKRetargetIKChainsController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetIKChainsController.InnerSingleton;
}

// GetSettings @ 14df3fef0

FIKRetargetIKChainsOpSettings * __thiscall
UIKRetargetIKChainsController::GetSettings
          (UIKRetargetIKChainsController *this,FIKRetargetIKChainsOpSettings *__return_storage_ptr__
          )

{
  FIKRetargetIKChainsOpSettings::FIKRetargetIKChainsOpSettings
            (__return_storage_ptr__,*(FIKRetargetIKChainsOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetSettings @ 14df55df0

void __thiscall
UIKRetargetIKChainsController::SetSettings
          (UIKRetargetIKChainsController *this,FIKRetargetIKChainsOpSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  pFVar1 = (param_1->ChainsToRetarget).AllocatorInstance.Data;
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

// StaticRegisterNativesUIKRetargetIKChainsController @ 14df59de0

void __cdecl UIKRetargetIKChainsController::StaticRegisterNativesUIKRetargetIKChainsController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetIKChainsController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df66030

void __cdecl
UIKRetargetIKChainsController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  UObjectBase *pUVar2;
  longlong this;
  FIKRetargetIKChainsOpSettings local_48;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetIKChainsOpSettings::FIKRetargetIKChainsOpSettings
            (&local_48,*(FIKRetargetIKChainsOpSettings **)(param_1 + 1));
  this = local_48._padding_;
  *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_48._padding_;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_48._padding_._4_1_;
  pUVar2 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if ((UObjectBase *)local_48._padding_ == (UObjectBase *)0x0) {
    if (pUVar2 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    }
  }
  else if (pUVar2 != (UObjectBase *)local_48._padding_) {
    if (pUVar2 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
    }
    UObjectBase::AddRef((UObjectBase *)this);
    *(longlong *)((longlong)param_3 + 0x10) = this;
  }
  puVar1 = (undefined8 *)((longlong)param_3 + 0x18);
  if ((TArray<FRetargetIKChainSettings,TSizedDefaultAllocator<32>_> *)puVar1 !=
      &local_48.ChainsToRetarget) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_48.ChainsToRetarget.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x20) = local_48.ChainsToRetarget.ArrayNum;
    *(int *)((longlong)param_3 + 0x24) = local_48.ChainsToRetarget.ArrayMax;
    local_48.ChainsToRetarget.ArrayNum = 0;
    local_48.ChainsToRetarget.ArrayMax = 0;
    local_48.ChainsToRetarget.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(bool *)((longlong)param_3 + 0x28) = local_48.bDrawFinalGoals;
  *(bool *)((longlong)param_3 + 0x29) = local_48.bDrawSourceLocations;
  *(double *)((longlong)param_3 + 0x30) = local_48.GoalDrawSize;
  *(double *)((longlong)param_3 + 0x38) = local_48.GoalDrawThickness;
  if (local_48.ChainsToRetarget.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ChainsToRetarget.AllocatorInstance.Data);
  }
  local_48._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObjectBase *)local_48._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_48._padding_);
  }
  return;
}

// execSetSettings @ 14df699f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UIKRetargetIKChainsController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  void *_Src;
  longlong lVar3;
  undefined **local_88;
  undefined4 local_80;
  undefined1 local_7c;
  UObjectBase *local_78;
  void *local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined4 local_40;
  undefined1 local_3c;
  UObjectBase *local_38;
  ForAnyElementType local_30;
  int local_28;
  int local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_88 = &___7FIKRetargetIKChainsOpSettings__6B_;
  local_78 = (UObjectBase *)0x0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_58 = ___xmm_3ff00000000000004014000000000000;
  uStack_50 = _UNK_15201e8a8;
  local_80 = 0xffffffff;
  local_7c = 1;
  local_60 = 0x101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pUVar2 = local_78;
  local_38 = (UObjectBase *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40 = local_80;
  local_3c = local_7c;
  if (local_78 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(local_78);
    local_38 = pUVar2;
  }
  _Src = local_70;
  lVar3 = (longlong)(int)local_68;
  local_48 = &___7FIKRetargetIKChainsOpSettings__6B_;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = (int)local_68;
  if ((int)local_68 == 0) {
    local_24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,(int)local_68,0,&local_30,(int)local_68,&local_24);
    memcpy(local_30.Data,_Src,lVar3 * 0xa0);
  }
  local_20 = (undefined1)local_60;
  local_1f = local_60._1_1_;
  local_18 = local_58;
  uStack_10 = uStack_50;
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_48);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  local_48 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_38 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_38);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  local_88 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_78 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_78);
  }
  return;
}

