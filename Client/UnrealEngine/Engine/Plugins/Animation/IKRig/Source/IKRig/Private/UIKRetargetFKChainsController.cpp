// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14dee7a10

UClass * __cdecl UIKRetargetFKChainsController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetFKChainsController",
               &Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton,
               StaticRegisterNativesUIKRetargetFKChainsController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetFKChainsController>,
               InternalVTableHelperCtorCaller<UIKRetargetFKChainsController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton;
}

// UIKRetargetFKChainsController @ 14df190e0

UIKRetargetFKChainsController * __thiscall
UIKRetargetFKChainsController::UIKRetargetFKChainsController
          (UIKRetargetFKChainsController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetFKChainsController__6B_;
  return this;
}

// UIKRetargetFKChainsController @ 14df19110

UIKRetargetFKChainsController * __thiscall
UIKRetargetFKChainsController::UIKRetargetFKChainsController
          (UIKRetargetFKChainsController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetFKChainsController__6B_;
  return this;
}

// ~UIKRetargetFKChainsController @ 14df1c260

void __thiscall
UIKRetargetFKChainsController::~UIKRetargetFKChainsController(UIKRetargetFKChainsController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3c340

UClass * __cdecl UIKRetargetFKChainsController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetFKChainsController",
               &Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton,
               StaticRegisterNativesUIKRetargetFKChainsController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetFKChainsController>,
               InternalVTableHelperCtorCaller<UIKRetargetFKChainsController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetFKChainsController.InnerSingleton;
}

// GetSettings @ 14df3fe60

FIKRetargetFKChainsOpSettings * __thiscall
UIKRetargetFKChainsController::GetSettings
          (UIKRetargetFKChainsController *this,FIKRetargetFKChainsOpSettings *__return_storage_ptr__
          )

{
  FIKRetargetFKChainsOpSettings::FIKRetargetFKChainsOpSettings
            (__return_storage_ptr__,*(FIKRetargetFKChainsOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetSettings @ 14df55cf0

void __thiscall
UIKRetargetFKChainsController::SetSettings
          (UIKRetargetFKChainsController *this,FIKRetargetFKChainsOpSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  pFVar1 = (param_1->ChainMapping).ChainMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// StaticRegisterNativesUIKRetargetFKChainsController @ 14df59d10

void __cdecl UIKRetargetFKChainsController::StaticRegisterNativesUIKRetargetFKChainsController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetFKChainsController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df65c30

void __cdecl
UIKRetargetFKChainsController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObjectBase *pUVar1;
  longlong this;
  undefined8 *puVar2;
  FIKRetargetFKChainsOpSettings local_78;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetFKChainsOpSettings::FIKRetargetFKChainsOpSettings
            (&local_78,*(FIKRetargetFKChainsOpSettings **)(param_1 + 1));
  this = local_78._padding_;
  *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_78._padding_;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_78._padding_._4_1_;
  pUVar1 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if ((UObjectBase *)local_78._padding_ == (UObjectBase *)0x0) {
    if (pUVar1 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    }
  }
  else if (pUVar1 != (UObjectBase *)local_78._padding_) {
    if (pUVar1 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
    }
    UObjectBase::AddRef((UObjectBase *)this);
    *(longlong *)((longlong)param_3 + 0x10) = this;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_78.IKRigAsset.field0_0x0.DebugPtr != (TObjectPtr<UIKRigDefinition_const_>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78.IKRigAsset.field0_0x0);
  }
  ((TObjectPtr<UIKRigDefinition_const_>_u_0 *)((longlong)param_3 + 0x18))->DebugPtr =
       (UIKRigDefinition *)local_78.IKRigAsset.field0_0x0;
  puVar2 = (undefined8 *)((longlong)param_3 + 0x20);
  if ((TArray<FRetargetFKChainSettings,TSizedDefaultAllocator<32>_> *)puVar2 !=
      &local_78.ChainsToRetarget) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    *puVar2 = local_78.ChainsToRetarget.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x28) = local_78.ChainsToRetarget.ArrayNum;
    *(int *)((longlong)param_3 + 0x2c) = local_78.ChainsToRetarget.ArrayMax;
    local_78.ChainsToRetarget.ArrayNum = 0;
    local_78.ChainsToRetarget.ArrayMax = 0;
    local_78.ChainsToRetarget.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(bool *)((longlong)param_3 + 0x30) = local_78.bDrawChainLines;
  *(bool *)((longlong)param_3 + 0x31) = local_78.bDrawSingleBoneChains;
  *(double *)((longlong)param_3 + 0x38) = local_78.ChainDrawThickness;
  *(double *)((longlong)param_3 + 0x40) = local_78.ChainDrawSize;
  puVar2 = (undefined8 *)((longlong)param_3 + 0x48);
  if ((FRetargetChainMapping *)puVar2 != &local_78.ChainMapping) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    *puVar2 = local_78.ChainMapping.ChainMap.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x50) = local_78.ChainMapping.ChainMap.ArrayNum;
    *(int *)((longlong)param_3 + 0x54) = local_78.ChainMapping.ChainMap.ArrayMax;
    local_78.ChainMapping.ChainMap.ArrayNum = 0;
    local_78.ChainMapping.ChainMap.ArrayMax = 0;
    local_78.ChainMapping.ChainMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_78.ChainMapping.SourceIKRig.field0_0x0.DebugPtr !=
      (TObjectPtr<UIKRigDefinition_const_>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78.ChainMapping.SourceIKRig.field0_0x0);
  }
  ((TObjectPtr<UIKRigDefinition_const_>_u_0 *)((longlong)param_3 + 0x58))->DebugPtr =
       (UIKRigDefinition *)local_78.ChainMapping.SourceIKRig.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_78.ChainMapping.TargetIKRig.field0_0x0.DebugPtr !=
      (TObjectPtr<UIKRigDefinition_const_>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78.ChainMapping.TargetIKRig.field0_0x0);
  }
  ((TObjectPtr<UIKRigDefinition_const_>_u_0 *)((longlong)param_3 + 0x60))->DebugPtr =
       (UIKRigDefinition *)local_78.ChainMapping.TargetIKRig.field0_0x0;
  if (local_78.ChainMapping.ChainMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ChainMapping.ChainMap.AllocatorInstance.Data);
  }
  if (local_78.ChainsToRetarget.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ChainsToRetarget.AllocatorInstance.Data);
  }
  local_78._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObjectBase *)local_78._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_78._padding_);
  }
  return;
}

// execSetSettings @ 14df693b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UIKRetargetFKChainsController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  void *pvVar3;
  longlong lVar4;
  undefined **local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  UObjectBase *local_d8;
  UObject *local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 local_98;
  UObject *local_90;
  UObject *local_88;
  undefined **local_78;
  undefined4 local_70;
  undefined1 local_6c;
  UObjectBase *local_68;
  UObject *local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined8 uStack_38;
  ForAnyElementType local_30;
  int local_28;
  int local_24;
  UObject *local_20;
  UObject *local_18;
  
  local_e8 = &___7FIKRetargetFKChainsOpSettings__6B_;
  local_d8 = (UObjectBase *)0x0;
  local_d0 = (UObject *)0x0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b0 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_a8 = _UNK_150689688;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = (UObject *)0x0;
  local_88 = (UObject *)0x0;
  local_e0 = 0xffffffff;
  local_dc = 1;
  local_b8 = 0x101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pUVar2 = local_d8;
  local_68 = (UObjectBase *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_70 = local_e0;
  local_6c = local_dc;
  if (local_d8 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(local_d8);
    local_68 = pUVar2;
  }
  local_60 = local_d0;
  local_78 = &___7FIKRetargetFKChainsOpSettings__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_d0);
  }
  pvVar3 = local_c8;
  lVar4 = (longlong)(int)local_c0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (int)local_c0;
  if ((int)local_c0 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(int)local_c0,0,&local_58,(int)local_c0,&local_4c);
    memcpy(local_58.Data,pvVar3,lVar4 * 0x28);
  }
  pvVar3 = local_a0;
  lVar4 = (longlong)(int)local_98;
  local_48 = (undefined1)local_b8;
  local_47 = local_b8._1_1_;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = (int)local_98;
  local_40 = local_b0;
  uStack_38 = uStack_a8;
  if ((int)local_98 == 0) {
    local_24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(int)local_98,0,&local_30,(int)local_98,&local_24);
    memcpy(local_30.Data,pvVar3,lVar4 << 4);
  }
  local_20 = local_90;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_90);
  }
  local_18 = local_88;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_88);
  }
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_78);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  local_78 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_68 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_68);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  local_e8 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_d8 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_d8);
  }
  return;
}

