// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14def3f20

UClass * __cdecl UIKRetargetRunIKRigController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetRunIKRigController",
               &Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton,
               StaticRegisterNativesUIKRetargetRunIKRigController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetRunIKRigController>,
               InternalVTableHelperCtorCaller<UIKRetargetRunIKRigController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton;
}

// UIKRetargetRunIKRigController @ 14df195e0

UIKRetargetRunIKRigController * __thiscall
UIKRetargetRunIKRigController::UIKRetargetRunIKRigController
          (UIKRetargetRunIKRigController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetRunIKRigController__6B_;
  return this;
}

// UIKRetargetRunIKRigController @ 14df19610

UIKRetargetRunIKRigController * __thiscall
UIKRetargetRunIKRigController::UIKRetargetRunIKRigController
          (UIKRetargetRunIKRigController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetRunIKRigController__6B_;
  return this;
}

// ~UIKRetargetRunIKRigController @ 14df1c3d0

void __thiscall
UIKRetargetRunIKRigController::~UIKRetargetRunIKRigController(UIKRetargetRunIKRigController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3ca90

UClass * __cdecl UIKRetargetRunIKRigController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetRunIKRigController",
               &Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton,
               StaticRegisterNativesUIKRetargetRunIKRigController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetRunIKRigController>,
               InternalVTableHelperCtorCaller<UIKRetargetRunIKRigController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetRunIKRigController.InnerSingleton;
}

// GetSettings @ 14df3ffb0

FIKRetargetRunIKRigOpSettings * __thiscall
UIKRetargetRunIKRigController::GetSettings
          (UIKRetargetRunIKRigController *this,FIKRetargetRunIKRigOpSettings *__return_storage_ptr__
          )

{
  FIKRetargetRunIKRigOpSettings::FIKRetargetRunIKRigOpSettings
            (__return_storage_ptr__,*(FIKRetargetRunIKRigOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetSettings @ 14df55f10

void __thiscall
UIKRetargetRunIKRigController::SetSettings
          (UIKRetargetRunIKRigController *this,FIKRetargetRunIKRigOpSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  pFVar1 = (param_1->ExcludedGoals).AllocatorInstance.Data;
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

// StaticRegisterNativesUIKRetargetRunIKRigController @ 14df59f00

void __cdecl UIKRetargetRunIKRigController::StaticRegisterNativesUIKRetargetRunIKRigController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetRunIKRigController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df66670

void __cdecl
UIKRetargetRunIKRigController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  UObjectBase *pUVar2;
  longlong this;
  FIKRetargetRunIKRigOpSettings local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetRunIKRigOpSettings::FIKRetargetRunIKRigOpSettings
            (&local_58,*(FIKRetargetRunIKRigOpSettings **)(param_1 + 1));
  this = local_58._padding_;
  *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_58._padding_;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_58._padding_._4_1_;
  pUVar2 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if ((UObjectBase *)local_58._padding_ == (UObjectBase *)0x0) {
    if (pUVar2 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    }
  }
  else if (pUVar2 != (UObjectBase *)local_58._padding_) {
    if (pUVar2 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
    }
    UObjectBase::AddRef((UObjectBase *)this);
    *(longlong *)((longlong)param_3 + 0x10) = this;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_58.IKRigAsset.field0_0x0.DebugPtr != (TObjectPtr<UIKRigDefinition_const_>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58.IKRigAsset.field0_0x0);
  }
  ((TObjectPtr<UIKRigDefinition_const_>_u_0 *)((longlong)param_3 + 0x18))->DebugPtr =
       (UIKRigDefinition *)local_58.IKRigAsset.field0_0x0;
  puVar1 = (undefined8 *)((longlong)param_3 + 0x20);
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)puVar1 != &local_58.ExcludedGoals) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_58.ExcludedGoals.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x28) = local_58.ExcludedGoals.ArrayNum;
    *(int *)((longlong)param_3 + 0x2c) = local_58.ExcludedGoals.ArrayMax;
    local_58.ExcludedGoals.ArrayNum = 0;
    local_58.ExcludedGoals.ArrayMax = 0;
    local_58.ExcludedGoals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(bool *)((longlong)param_3 + 0x30) = local_58.bDrawGoals;
  *(bool *)((longlong)param_3 + 0x31) = local_58.bDrawGoalBoneLocations;
  *(double *)((longlong)param_3 + 0x38) = local_58.GoalDrawSize;
  *(double *)((longlong)param_3 + 0x40) = local_58.GoalDrawThickness;
  if (local_58.ExcludedGoals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ExcludedGoals.AllocatorInstance.Data);
  }
  local_58._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObjectBase *)local_58._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_58._padding_);
  }
  return;
}

// execSetSettings @ 14df6a160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UIKRetargetRunIKRigController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  void *_Src;
  longlong lVar3;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  UObjectBase *local_98;
  UObject *local_90;
  void *local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_58;
  undefined4 local_50;
  undefined1 local_4c;
  UObjectBase *local_48;
  UObject *local_40;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_a8 = &___7FIKRetargetRunIKRigOpSettings__6B_;
  local_98 = (UObjectBase *)0x0;
  local_90 = (UObject *)0x0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_70 = ___xmm_3ff00000000000004014000000000000;
  uStack_68 = _UNK_15201e8a8;
  local_a0 = 0xffffffff;
  local_9c = 1;
  local_78 = 0x101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pUVar2 = local_98;
  local_48 = (UObjectBase *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_a0;
  local_4c = local_9c;
  if (local_98 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(local_98);
    local_48 = pUVar2;
  }
  local_40 = local_90;
  local_58 = &___7FIKRetargetRunIKRigOpSettings__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_90);
  }
  _Src = local_88;
  lVar3 = (longlong)(int)local_80;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = (int)local_80;
  if ((int)local_80 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_80,0,&local_38,(int)local_80,&local_2c);
    memcpy(local_38.Data,_Src,lVar3 << 3);
  }
  local_28 = (undefined1)local_78;
  local_27 = local_78._1_1_;
  local_20 = (undefined4)local_70;
  uStack_1c = local_70._4_4_;
  uStack_18 = (undefined4)uStack_68;
  uStack_14 = uStack_68._4_4_;
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_58);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_58 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_48 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_48);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  local_a8 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_98 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_98);
  }
  return;
}

