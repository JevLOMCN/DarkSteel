// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14dee81b0

UClass * __cdecl UIKRetargetStrideWarpingController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetStrideWarpingController",
               &Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton,
               StaticRegisterNativesUIKRetargetStrideWarpingController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetStrideWarpingController>,
               InternalVTableHelperCtorCaller<UIKRetargetStrideWarpingController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton;
}

// UIKRetargetStrideWarpingController @ 14df19760

UIKRetargetStrideWarpingController * __thiscall
UIKRetargetStrideWarpingController::UIKRetargetStrideWarpingController
          (UIKRetargetStrideWarpingController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetStrideWarpingController__6B_;
  return this;
}

// UIKRetargetStrideWarpingController @ 14df19790

UIKRetargetStrideWarpingController * __thiscall
UIKRetargetStrideWarpingController::UIKRetargetStrideWarpingController
          (UIKRetargetStrideWarpingController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetStrideWarpingController__6B_;
  return this;
}

// ~UIKRetargetStrideWarpingController @ 14df1c450

void __thiscall
UIKRetargetStrideWarpingController::~UIKRetargetStrideWarpingController
          (UIKRetargetStrideWarpingController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3cd90

UClass * __cdecl UIKRetargetStrideWarpingController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetStrideWarpingController",
               &Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton,
               StaticRegisterNativesUIKRetargetStrideWarpingController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetStrideWarpingController>,
               InternalVTableHelperCtorCaller<UIKRetargetStrideWarpingController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetStrideWarpingController.InnerSingleton;
}

// GetSettings @ 14df40070

FIKRetargetStrideWarpingOpSettings * __thiscall
UIKRetargetStrideWarpingController::GetSettings
          (UIKRetargetStrideWarpingController *this,
          FIKRetargetStrideWarpingOpSettings *__return_storage_ptr__)

{
  FIKRetargetStrideWarpingOpSettings::FIKRetargetStrideWarpingOpSettings
            (__return_storage_ptr__,*(FIKRetargetStrideWarpingOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetSettings @ 14df56040

void __thiscall
UIKRetargetStrideWarpingController::SetSettings
          (UIKRetargetStrideWarpingController *this,FIKRetargetStrideWarpingOpSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  pFVar1 = (param_1->ChainSettings).AllocatorInstance.Data;
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

// StaticRegisterNativesUIKRetargetStrideWarpingController @ 14df5a000

void __cdecl
UIKRetargetStrideWarpingController::StaticRegisterNativesUIKRetargetStrideWarpingController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetStrideWarpingController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df66b00

void __cdecl
UIKRetargetStrideWarpingController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  UObjectBase *pUVar2;
  longlong this;
  FIKRetargetStrideWarpingOpSettings local_78;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetStrideWarpingOpSettings::FIKRetargetStrideWarpingOpSettings
            (&local_78,*(FIKRetargetStrideWarpingOpSettings **)(param_1 + 1));
  this = local_78._padding_;
  *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_78._padding_;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_78._padding_._4_1_;
  pUVar2 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if ((UObjectBase *)local_78._padding_ == (UObjectBase *)0x0) {
    if (pUVar2 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    }
  }
  else if (pUVar2 != (UObjectBase *)local_78._padding_) {
    if (pUVar2 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
    }
    UObjectBase::AddRef((UObjectBase *)this);
    *(longlong *)((longlong)param_3 + 0x10) = this;
  }
  puVar1 = (undefined8 *)((longlong)param_3 + 0x18);
  if ((TArray<FRetargetStrideWarpChainSettings,TSizedDefaultAllocator<32>_> *)puVar1 !=
      &local_78.ChainSettings) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_78.ChainSettings.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x20) = local_78.ChainSettings.ArrayNum;
    *(int *)((longlong)param_3 + 0x24) = local_78.ChainSettings.ArrayMax;
    local_78.ChainSettings.ArrayNum = 0;
    local_78.ChainSettings.ArrayMax = 0;
    local_78.ChainSettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(EWarpingDirectionSource *)((longlong)param_3 + 0x28) = local_78.DirectionSource;
  *(EBasicAxis *)((longlong)param_3 + 0x2c) = local_78.ForwardDirection;
  *(FName *)((longlong)param_3 + 0x30) = local_78.DirectionChain;
  *(bool *)((longlong)param_3 + 0x60) = local_78.bEnableDebugDraw_DEPRECATED;
  *(double *)((longlong)param_3 + 0x38) = local_78.WarpForwards;
  *(double *)((longlong)param_3 + 0x40) = local_78.SidewaysOffset;
  *(double *)((longlong)param_3 + 0x48) = local_78.WarpSplay;
  *(double *)((longlong)param_3 + 0x50) = local_78.DebugDrawSize;
  *(double *)((longlong)param_3 + 0x58) = local_78.DebugDrawThickness;
  if (local_78.ChainSettings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ChainSettings.AllocatorInstance.Data);
  }
  local_78._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObjectBase *)local_78._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_78._padding_);
  }
  return;
}

// execSetSettings @ 14df6a810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UIKRetargetStrideWarpingController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  void *_Src;
  longlong lVar3;
  undefined **local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  UObjectBase *local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined **local_78;
  undefined4 local_70;
  undefined1 local_6c;
  UObjectBase *local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_c8 = ___xmm_00000001000000000000000000000000;
  uStack_c0 = _UNK_152877ba8;
  local_b0 = __real_3ff0000000000000;
  uStack_98 = ___xmm_40140000000000004014000000000000;
  uStack_90 = _UNK_150ae9818;
  local_e0 = 0xffffffff;
  local_dc = 1;
  local_d8 = (UObjectBase *)0x0;
  local_e8 = &___7FIKRetargetStrideWarpingOpSettings__6B_;
  local_d0 = (void *)0x0;
  local_b8 = 0;
  uStack_a8 = ___xmm_3ff00000000000000000000000000000;
  uStack_a0 = _UNK_15061cbc8;
  local_88 = 1;
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
  _Src = local_d0;
  lVar3 = (longlong)(int)local_c8;
  local_78 = &___7FIKRetargetStrideWarpingOpSettings__6B_;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = (int)local_c8;
  if ((int)local_c8 == 0) {
    local_54 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(int)local_c8,0,&local_60,(int)local_c8,&local_54);
    memcpy(local_60.Data,_Src,lVar3 * 0xc);
  }
  local_50 = (undefined4)uStack_c0;
  local_40 = local_b0;
  uStack_38 = uStack_a8;
  local_4c = uStack_c0._4_4_;
  local_48 = local_b8;
  local_30 = uStack_a0;
  uStack_28 = uStack_98;
  local_18 = local_88;
  local_20 = uStack_90;
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_78);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  local_78 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_68 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_68);
  }
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  local_e8 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_d8 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_d8);
  }
  return;
}

