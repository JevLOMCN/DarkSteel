// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14df04550

UClass * __cdecl UIKRetargetAlignPoleVectorController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetAlignPoleVectorController",
               &Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton,
               StaticRegisterNativesUIKRetargetAlignPoleVectorController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetAlignPoleVectorController>,
               InternalVTableHelperCtorCaller<UIKRetargetAlignPoleVectorController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton;
}

// UIKRetargetAlignPoleVectorController @ 14df18fc0

UIKRetargetAlignPoleVectorController * __thiscall
UIKRetargetAlignPoleVectorController::UIKRetargetAlignPoleVectorController
          (UIKRetargetAlignPoleVectorController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetAlignPoleVectorController__6B_;
  return this;
}

// UIKRetargetAlignPoleVectorController @ 14df18ff0

UIKRetargetAlignPoleVectorController * __thiscall
UIKRetargetAlignPoleVectorController::UIKRetargetAlignPoleVectorController
          (UIKRetargetAlignPoleVectorController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetAlignPoleVectorController__6B_;
  return this;
}

// ~UIKRetargetAlignPoleVectorController @ 14df1c200

void __thiscall
UIKRetargetAlignPoleVectorController::~UIKRetargetAlignPoleVectorController
          (UIKRetargetAlignPoleVectorController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3c100

UClass * __cdecl UIKRetargetAlignPoleVectorController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetAlignPoleVectorController",
               &Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton,
               StaticRegisterNativesUIKRetargetAlignPoleVectorController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetAlignPoleVectorController>,
               InternalVTableHelperCtorCaller<UIKRetargetAlignPoleVectorController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton;
}

// GetSettings @ 14df3fdd0

FIKRetargetAlignPoleVectorOpSettings * __thiscall
UIKRetargetAlignPoleVectorController::GetSettings
          (UIKRetargetAlignPoleVectorController *this,
          FIKRetargetAlignPoleVectorOpSettings *__return_storage_ptr__)

{
  FIKRetargetAlignPoleVectorOpSettings::FIKRetargetAlignPoleVectorOpSettings
            (__return_storage_ptr__,*(FIKRetargetAlignPoleVectorOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetSettings @ 14df55c00

void __thiscall
UIKRetargetAlignPoleVectorController::SetSettings
          (UIKRetargetAlignPoleVectorController *this,FIKRetargetAlignPoleVectorOpSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  pFVar1 = (param_1->ChainsToAlign).AllocatorInstance.Data;
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

// StaticRegisterNativesUIKRetargetAlignPoleVectorController @ 14df59c50

void __cdecl
UIKRetargetAlignPoleVectorController::StaticRegisterNativesUIKRetargetAlignPoleVectorController
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetAlignPoleVectorController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df658d0

void __cdecl
UIKRetargetAlignPoleVectorController::execGetSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObjectBase *pUVar1;
  longlong this;
  undefined8 *puVar2;
  FIKRetargetAlignPoleVectorOpSettings local_38;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetAlignPoleVectorOpSettings::FIKRetargetAlignPoleVectorOpSettings
            (&local_38,*(FIKRetargetAlignPoleVectorOpSettings **)(param_1 + 1));
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
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_38.IKRigAsset.field0_0x0.DebugPtr != (TObjectPtr<UIKRigDefinition_const_>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38.IKRigAsset.field0_0x0);
  }
  ((TObjectPtr<UIKRigDefinition_const_>_u_0 *)((longlong)param_3 + 0x18))->DebugPtr =
       (UIKRigDefinition *)local_38.IKRigAsset.field0_0x0;
  puVar2 = (undefined8 *)((longlong)param_3 + 0x20);
  if ((TArray<FRetargetPoleVectorSettings,TSizedDefaultAllocator<32>_> *)puVar2 !=
      &local_38.ChainsToAlign) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    *puVar2 = local_38.ChainsToAlign.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x28) = local_38.ChainsToAlign.ArrayNum;
    *(int *)((longlong)param_3 + 0x2c) = local_38.ChainsToAlign.ArrayMax;
    local_38.ChainsToAlign.ArrayNum = 0;
    local_38.ChainsToAlign.ArrayMax = 0;
    local_38.ChainsToAlign.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.ChainsToAlign.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ChainsToAlign.AllocatorInstance.Data);
  }
  local_38._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObjectBase *)local_38._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_38._padding_);
  }
  return;
}

// execSetSettings @ 14df68e70

void __cdecl
UIKRetargetAlignPoleVectorController::execSetSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  void *_Src;
  longlong lVar3;
  undefined **local_68;
  undefined4 local_60;
  undefined1 local_5c;
  UObjectBase *local_58;
  UObject *local_50;
  void *pvStack_48;
  undefined8 local_40;
  undefined **local_38;
  undefined4 local_30;
  undefined1 local_2c;
  UObjectBase *local_28;
  UObject *local_20;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_60 = 0xffffffff;
  local_58 = (UObjectBase *)0x0;
  local_40 = 0;
  local_68 = &___7FIKRetargetAlignPoleVectorOpSettings__6B_;
  local_50 = (UObject *)0x0;
  pvStack_48 = (void *)0x0;
  local_5c = 1;
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
  local_20 = local_50;
  local_38 = &___7FIKRetargetAlignPoleVectorOpSettings__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_50);
  }
  _Src = pvStack_48;
  lVar3 = (longlong)(int)local_40;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = (int)local_40;
  if ((int)local_40 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(int)local_40,0,&local_18,(int)local_40,&local_c);
    memcpy(local_18.Data,_Src,lVar3 * 0x28);
  }
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_38);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  local_38 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_28 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_28);
  }
  if (pvStack_48 != (void *)0x0) {
    FMemory::Free(pvStack_48);
  }
  local_68 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_58 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_58);
  }
  return;
}

