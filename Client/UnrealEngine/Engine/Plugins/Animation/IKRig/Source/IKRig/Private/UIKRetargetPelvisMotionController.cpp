// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 19

// StaticClass @ 14def0e80

UClass * __cdecl UIKRetargetPelvisMotionController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetPelvisMotionController",
               &Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton,
               StaticRegisterNativesUIKRetargetPelvisMotionController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetPelvisMotionController>,
               InternalVTableHelperCtorCaller<UIKRetargetPelvisMotionController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton;
}

// UIKRetargetPelvisMotionController @ 14df19380

UIKRetargetPelvisMotionController * __thiscall
UIKRetargetPelvisMotionController::UIKRetargetPelvisMotionController
          (UIKRetargetPelvisMotionController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetPelvisMotionController__6B_;
  return this;
}

// UIKRetargetPelvisMotionController @ 14df193b0

UIKRetargetPelvisMotionController * __thiscall
UIKRetargetPelvisMotionController::UIKRetargetPelvisMotionController
          (UIKRetargetPelvisMotionController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetPelvisMotionController__6B_;
  return this;
}

// ~UIKRetargetPelvisMotionController @ 14df1c320

void __thiscall
UIKRetargetPelvisMotionController::~UIKRetargetPelvisMotionController
          (UIKRetargetPelvisMotionController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPelvisOpSettings @ 14df3b520

FIKRetargetPelvisMotionOpSettings * __thiscall
UIKRetargetPelvisMotionController::GetPelvisOpSettings(UIKRetargetPelvisMotionController *this)

{
  return *(FIKRetargetPelvisMotionOpSettings **)&this->field_0x28;
}

// GetPrivateStaticClass @ 14df3c7a0

UClass * __cdecl UIKRetargetPelvisMotionController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetPelvisMotionController",
               &Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton,
               StaticRegisterNativesUIKRetargetPelvisMotionController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetPelvisMotionController>,
               InternalVTableHelperCtorCaller<UIKRetargetPelvisMotionController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton;
}

// GetSettings @ 14df3ff20

FIKRetargetPelvisMotionOpSettings * __thiscall
UIKRetargetPelvisMotionController::GetSettings
          (UIKRetargetPelvisMotionController *this,
          FIKRetargetPelvisMotionOpSettings *__return_storage_ptr__)

{
  FIKRetargetPelvisMotionOpSettings::FIKRetargetPelvisMotionOpSettings
            (__return_storage_ptr__,*(FIKRetargetPelvisMotionOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// GetSourcePelvisBone @ 14df404a0

FName __thiscall
UIKRetargetPelvisMotionController::GetSourcePelvisBone(UIKRetargetPelvisMotionController *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)(*(longlong *)&this->field_0x28 + 0x18);
  return in_RDX;
}

// GetTargetPelvisBone @ 14df40a70

FName __thiscall
UIKRetargetPelvisMotionController::GetTargetPelvisBone(UIKRetargetPelvisMotionController *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)(*(longlong *)&this->field_0x28 + 0x28);
  return in_RDX;
}

// SetSettings @ 14df55e40

void __thiscall
UIKRetargetPelvisMotionController::SetSettings
          (UIKRetargetPelvisMotionController *this,FIKRetargetPelvisMotionOpSettings *param_1)

{
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  param_1->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)param_1->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)param_1->_padding_);
    param_1->_padding_ = 0;
  }
  return;
}

// SetSourcePelvisBone @ 14df56180

void __thiscall
UIKRetargetPelvisMotionController::SetSourcePelvisBone
          (UIKRetargetPelvisMotionController *this,FName param_1)

{
  *(FName *)(*(longlong *)&this->field_0x28 + 0x18) = param_1;
  return;
}

// SetTargetPelvisBone @ 14df561a0

void __thiscall
UIKRetargetPelvisMotionController::SetTargetPelvisBone
          (UIKRetargetPelvisMotionController *this,FName param_1)

{
  *(FName *)(*(longlong *)&this->field_0x28 + 0x28) = param_1;
  return;
}

// StaticRegisterNativesUIKRetargetPelvisMotionController @ 14df59e30

void __cdecl
UIKRetargetPelvisMotionController::StaticRegisterNativesUIKRetargetPelvisMotionController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetPelvisMotionController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df66150

void __cdecl
UIKRetargetPelvisMotionController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObjectBase *pUVar1;
  FIKRetargetPelvisMotionOpSettings local_158;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetPelvisMotionOpSettings::FIKRetargetPelvisMotionOpSettings
            (&local_158,*(FIKRetargetPelvisMotionOpSettings **)(param_1 + 1));
  *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_158._padding_;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_158._padding_._4_1_;
  pUVar1 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if ((UObjectBase *)local_158._padding_ == (UObjectBase *)0x0) {
    if (pUVar1 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    }
  }
  else if (pUVar1 != (UObjectBase *)local_158._padding_) {
    if (pUVar1 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
    }
    UObjectBase::AddRef((UObjectBase *)local_158._padding_);
    *(longlong *)((longlong)param_3 + 0x10) = local_158._padding_;
  }
  *(FName *)((longlong)param_3 + 0x18) = local_158.SourcePelvisBone.BoneName;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_158.SourcePelvisBone._8_4_;
  *(FCompactPoseBoneIndex *)((longlong)param_3 + 0x24) =
       local_158.SourcePelvisBone.CachedCompactPoseIndex;
  *(FName *)((longlong)param_3 + 0x28) = local_158.TargetPelvisBone.BoneName;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_158.TargetPelvisBone._8_4_;
  *(FCompactPoseBoneIndex *)((longlong)param_3 + 0x34) =
       local_158.TargetPelvisBone.CachedCompactPoseIndex;
  *(bool *)((longlong)param_3 + 0x140) = local_158.bEnableDebugDraw_DEPRECATED;
  *(double *)((longlong)param_3 + 0x38) = local_158.FloorConstraintWeight;
  *(double *)((longlong)param_3 + 0x40) = local_158.SourceCrotchOffset;
  *(double *)((longlong)param_3 + 0x48) = local_158.TargetCrotchOffset;
  *(double *)((longlong)param_3 + 0x50) = local_158.RotationAlpha;
  *(double *)((longlong)param_3 + 0x58) = local_158.RotationOffsetLocal.Pitch;
  *(double *)((longlong)param_3 + 0x60) = local_158.RotationOffsetLocal.Yaw;
  *(double *)((longlong)param_3 + 0x68) = local_158.RotationOffsetLocal.Roll;
  *(double *)((longlong)param_3 + 0x70) = local_158.RotationOffsetGlobal.Pitch;
  *(double *)((longlong)param_3 + 0x78) = local_158.RotationOffsetGlobal.Yaw;
  *(double *)((longlong)param_3 + 0x80) = local_158.RotationOffsetGlobal.Roll;
  *(double *)((longlong)param_3 + 0x88) = local_158.TranslationAlpha;
  *(double *)((longlong)param_3 + 0x90) = local_158.TranslationOffsetLocal.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x98) = local_158.TranslationOffsetLocal.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0xa0) = local_158.TranslationOffsetLocal.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0xa8) = local_158.TranslationOffsetGlobal.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0xb0) = local_158.TranslationOffsetGlobal.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0xb8) = local_158.TranslationOffsetGlobal.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0xc0) = local_158.BlendToSourceTranslation;
  *(double *)((longlong)param_3 + 200) = local_158.BlendToSourceTranslationWeights.field0_0x0._s_0.X
  ;
  *(double *)((longlong)param_3 + 0xd0) =
       local_158.BlendToSourceTranslationWeights.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0xd8) =
       local_158.BlendToSourceTranslationWeights.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0xe0) = local_158.ScaleHorizontal;
  *(double *)((longlong)param_3 + 0x110) = local_158.TranslationOffset_DEPRECATED.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x118) = local_158.TranslationOffset_DEPRECATED.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0xe8) = local_158.ScaleVertical;
  *(double *)((longlong)param_3 + 0xf0) = local_158.AffectIKHorizontal;
  *(double *)((longlong)param_3 + 0x128) = local_158.RotationOffset_DEPRECATED.Pitch;
  *(double *)((longlong)param_3 + 0x130) = local_158.RotationOffset_DEPRECATED.Yaw;
  *(double *)((longlong)param_3 + 0xf8) = local_158.AffectIKVertical;
  *(double *)((longlong)param_3 + 0x100) = local_158.DebugDrawSize;
  *(double *)((longlong)param_3 + 0x108) = local_158.DebugDrawThickness;
  *(double *)((longlong)param_3 + 0x120) = local_158.TranslationOffset_DEPRECATED.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x138) = local_158.RotationOffset_DEPRECATED.Roll;
  if ((UObjectBase *)local_158._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_158._padding_);
  }
  return;
}

// execGetSourcePelvisBone @ 14df66f30

void __cdecl
UIKRetargetPelvisMotionController::execGetSourcePelvisBone
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(param_1 + 1) + 0x18);
  return;
}

// execGetTargetPelvisBone @ 14df66f90

void __cdecl
UIKRetargetPelvisMotionController::execGetTargetPelvisBone
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(param_1 + 1) + 0x28);
  return;
}

// execSetSettings @ 14df69bb0

void __cdecl
UIKRetargetPelvisMotionController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FIKRetargetPelvisMotionOpSettings *pFVar2;
  FIKRetargetPelvisMotionOpSettings local_2a8;
  FIKRetargetPelvisMotionOpSettings local_158;
  
  FIKRetargetPelvisMotionOpSettings::FIKRetargetPelvisMotionOpSettings(&local_2a8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FIKRetargetPelvisMotionOpSettings::FIKRetargetPelvisMotionOpSettings
                     (&local_158,&local_2a8);
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),pFVar2);
  pFVar2->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)pFVar2->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pFVar2->_padding_);
    pFVar2->_padding_ = 0;
  }
  local_2a8._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)local_2a8._padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_2a8._padding_);
  }
  return;
}

// execSetSourcePelvisBone @ 14df6b000

void __cdecl
UIKRetargetPelvisMotionController::execSetSourcePelvisBone
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)(*(longlong *)(param_1 + 1) + 0x18) = local_res8;
  return;
}

// execSetTargetPelvisBone @ 14df6b120

void __cdecl
UIKRetargetPelvisMotionController::execSetTargetPelvisBone
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)(*(longlong *)(param_1 + 1) + 0x28) = local_res8;
  return;
}

