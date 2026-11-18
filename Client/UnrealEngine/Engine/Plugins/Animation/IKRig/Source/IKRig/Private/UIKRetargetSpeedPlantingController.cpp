// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14defb140

UClass * __cdecl UIKRetargetSpeedPlantingController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetSpeedPlantingController",
               &Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton,
               StaticRegisterNativesUIKRetargetSpeedPlantingController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetSpeedPlantingController>,
               InternalVTableHelperCtorCaller<UIKRetargetSpeedPlantingController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton;
}

// UIKRetargetSpeedPlantingController @ 14df196a0

UIKRetargetSpeedPlantingController * __thiscall
UIKRetargetSpeedPlantingController::UIKRetargetSpeedPlantingController
          (UIKRetargetSpeedPlantingController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetSpeedPlantingController__6B_;
  return this;
}

// UIKRetargetSpeedPlantingController @ 14df196d0

UIKRetargetSpeedPlantingController * __thiscall
UIKRetargetSpeedPlantingController::UIKRetargetSpeedPlantingController
          (UIKRetargetSpeedPlantingController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetSpeedPlantingController__6B_;
  return this;
}

// ~UIKRetargetSpeedPlantingController @ 14df1c410

void __thiscall
UIKRetargetSpeedPlantingController::~UIKRetargetSpeedPlantingController
          (UIKRetargetSpeedPlantingController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3cc10

UClass * __cdecl UIKRetargetSpeedPlantingController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetSpeedPlantingController",
               &Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton,
               StaticRegisterNativesUIKRetargetSpeedPlantingController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetSpeedPlantingController>,
               InternalVTableHelperCtorCaller<UIKRetargetSpeedPlantingController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetSpeedPlantingController.InnerSingleton;
}

// GetSettings @ 14df40010

FIKRetargetSpeedPlantingOpSettings * __thiscall
UIKRetargetSpeedPlantingController::GetSettings
          (UIKRetargetSpeedPlantingController *this,
          FIKRetargetSpeedPlantingOpSettings *__return_storage_ptr__)

{
  FIKRetargetSpeedPlantingOpSettings::FIKRetargetSpeedPlantingOpSettings
            (__return_storage_ptr__,*(FIKRetargetSpeedPlantingOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetSettings @ 14df55fa0

void __thiscall
UIKRetargetSpeedPlantingController::SetSettings
          (UIKRetargetSpeedPlantingController *this,FIKRetargetSpeedPlantingOpSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  pFVar1 = (param_1->ChainsToSpeedPlant).AllocatorInstance.Data;
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

// StaticRegisterNativesUIKRetargetSpeedPlantingController @ 14df59f80

void __cdecl
UIKRetargetSpeedPlantingController::StaticRegisterNativesUIKRetargetSpeedPlantingController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetSpeedPlantingController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df668c0

void __cdecl
UIKRetargetSpeedPlantingController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  UObjectBase *pUVar2;
  longlong this;
  FIKRetargetSpeedPlantingOpSettings local_48;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetSpeedPlantingOpSettings::FIKRetargetSpeedPlantingOpSettings
            (&local_48,*(FIKRetargetSpeedPlantingOpSettings **)(param_1 + 1));
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
  if ((TArray<FRetargetSpeedPlantingSettings,TSizedDefaultAllocator<32>_> *)puVar1 !=
      &local_48.ChainsToSpeedPlant) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_48.ChainsToSpeedPlant.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x20) = local_48.ChainsToSpeedPlant.ArrayNum;
    *(int *)((longlong)param_3 + 0x24) = local_48.ChainsToSpeedPlant.ArrayMax;
    local_48.ChainsToSpeedPlant.ArrayNum = 0;
    local_48.ChainsToSpeedPlant.ArrayMax = 0;
    local_48.ChainsToSpeedPlant.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(double *)((longlong)param_3 + 0x28) = local_48.SpeedThreshold;
  *(double *)((longlong)param_3 + 0x30) = local_48.Stiffness;
  *(double *)((longlong)param_3 + 0x38) = local_48.CriticalDamping;
  if (local_48.ChainsToSpeedPlant.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ChainsToSpeedPlant.AllocatorInstance.Data);
  }
  local_48._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObjectBase *)local_48._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_48._padding_);
  }
  return;
}

// execSetSettings @ 14df6a4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UIKRetargetSpeedPlantingController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined4 local_40;
  undefined1 local_3c;
  UObjectBase *local_38;
  ForAnyElementType local_30;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_60 = __real_402e000000000000;
  local_78 = (UObjectBase *)0x0;
  local_88 = &___7FIKRetargetSpeedPlantingOpSettings__6B_;
  local_70 = (void *)0x0;
  local_68 = 0;
  uStack_58 = ___xmm_3ff0000000000000406f400000000000;
  uStack_50 = _UNK_152d9e178;
  local_80 = 0xffffffff;
  local_7c = 1;
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
  local_48 = &___7FIKRetargetSpeedPlantingOpSettings__6B_;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = (int)local_68;
  if ((int)local_68 == 0) {
    local_24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(int)local_68,0,&local_30,(int)local_68,&local_24);
    memcpy(local_30.Data,_Src,lVar3 << 4);
  }
  local_20 = local_60;
  uStack_18 = uStack_58;
  local_10 = uStack_50;
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

