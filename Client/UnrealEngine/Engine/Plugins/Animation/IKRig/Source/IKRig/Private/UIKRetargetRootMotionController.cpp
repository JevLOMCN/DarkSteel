// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 23

// StaticClass @ 14def6e30

UClass * __cdecl UIKRetargetRootMotionController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetRootMotionController",
               &Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton,
               StaticRegisterNativesUIKRetargetRootMotionController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetRootMotionController>,
               InternalVTableHelperCtorCaller<UIKRetargetRootMotionController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton;
}

// UIKRetargetRootMotionController @ 14df19580

UIKRetargetRootMotionController * __thiscall
UIKRetargetRootMotionController::UIKRetargetRootMotionController
          (UIKRetargetRootMotionController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetRootMotionController__6B_;
  return this;
}

// UIKRetargetRootMotionController @ 14df195b0

UIKRetargetRootMotionController * __thiscall
UIKRetargetRootMotionController::UIKRetargetRootMotionController
          (UIKRetargetRootMotionController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetRootMotionController__6B_;
  return this;
}

// ~UIKRetargetRootMotionController @ 14df1c3b0

void __thiscall
UIKRetargetRootMotionController::~UIKRetargetRootMotionController
          (UIKRetargetRootMotionController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3c9d0

UClass * __cdecl UIKRetargetRootMotionController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetRootMotionController",
               &Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton,
               StaticRegisterNativesUIKRetargetRootMotionController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetRootMotionController>,
               InternalVTableHelperCtorCaller<UIKRetargetRootMotionController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton;
}

// GetSettings @ 14df3ff80

FIKRetargetRootMotionOpSettings * __thiscall
UIKRetargetRootMotionController::GetSettings
          (UIKRetargetRootMotionController *this,
          FIKRetargetRootMotionOpSettings *__return_storage_ptr__)

{
  FIKRetargetRootMotionOpSettings::FIKRetargetRootMotionOpSettings
            (__return_storage_ptr__,*(FIKRetargetRootMotionOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// GetSettingsPtr @ 14df400a0

FIKRetargetRootMotionOpSettings * __thiscall
UIKRetargetRootMotionController::GetSettingsPtr(UIKRetargetRootMotionController *this)

{
  return *(FIKRetargetRootMotionOpSettings **)&this->field_0x28;
}

// GetSourceRootBone @ 14df404c0

FName __thiscall
UIKRetargetRootMotionController::GetSourceRootBone(UIKRetargetRootMotionController *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)(*(longlong *)&this->field_0x28 + 0x18);
  return in_RDX;
}

// GetTargetPelvisBone @ 14df40a90

FName __thiscall
UIKRetargetRootMotionController::GetTargetPelvisBone(UIKRetargetRootMotionController *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)(*(longlong *)&this->field_0x28 + 0x3c);
  return in_RDX;
}

// GetTargetRootBone @ 14df40ab0

FName __thiscall
UIKRetargetRootMotionController::GetTargetRootBone(UIKRetargetRootMotionController *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)(*(longlong *)&this->field_0x28 + 0x28);
  return in_RDX;
}

// SetSettings @ 14df55ed0

void __thiscall
UIKRetargetRootMotionController::SetSettings
          (UIKRetargetRootMotionController *this,FIKRetargetRootMotionOpSettings *param_1)

{
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  param_1->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)param_1->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)param_1->_padding_);
    param_1->_padding_ = 0;
  }
  return;
}

// SetSourceRootBone @ 14df56190

void __thiscall
UIKRetargetRootMotionController::SetSourceRootBone
          (UIKRetargetRootMotionController *this,FName param_1)

{
  *(FName *)(*(longlong *)&this->field_0x28 + 0x18) = param_1;
  return;
}

// SetTargetPelvisBone @ 14df561b0

void __thiscall
UIKRetargetRootMotionController::SetTargetPelvisBone
          (UIKRetargetRootMotionController *this,FName param_1)

{
  *(FName *)(*(longlong *)&this->field_0x28 + 0x3c) = param_1;
  return;
}

// SetTargetRootBone @ 14df561c0

void __thiscall
UIKRetargetRootMotionController::SetTargetRootBone
          (UIKRetargetRootMotionController *this,FName param_1)

{
  *(FName *)(*(longlong *)&this->field_0x28 + 0x28) = param_1;
  return;
}

// StaticRegisterNativesUIKRetargetRootMotionController @ 14df59ec0

void __cdecl
UIKRetargetRootMotionController::StaticRegisterNativesUIKRetargetRootMotionController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetRootMotionController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSettings @ 14df664f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargetRootMotionController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObjectBase *pUVar1;
  undefined1 auStack_118 [32];
  FIKRetargetRootMotionOpSettings local_f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetRootMotionOpSettings::FIKRetargetRootMotionOpSettings
            (&local_f8,*(FIKRetargetRootMotionOpSettings **)(param_1 + 1));
  *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_f8._padding_;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_f8._padding_._4_1_;
  pUVar1 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if ((UObjectBase *)local_f8._padding_ == (UObjectBase *)0x0) {
    if (pUVar1 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    }
  }
  else if (pUVar1 != (UObjectBase *)local_f8._padding_) {
    if (pUVar1 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
    }
    UObjectBase::AddRef((UObjectBase *)local_f8._padding_);
    *(longlong *)((longlong)param_3 + 0x10) = local_f8._padding_;
  }
  *(FName *)((longlong)param_3 + 0x18) = local_f8.SourceRoot.BoneName;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_f8.SourceRoot._8_4_;
  *(FCompactPoseBoneIndex *)((longlong)param_3 + 0x24) = local_f8.SourceRoot.CachedCompactPoseIndex;
  *(FName *)((longlong)param_3 + 0x28) = local_f8.TargetRoot.BoneName;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_f8.TargetRoot._8_4_;
  *(FCompactPoseBoneIndex *)((longlong)param_3 + 0x34) = local_f8.TargetRoot.CachedCompactPoseIndex;
  *(ERootMotionSource *)((longlong)param_3 + 0x38) = local_f8.RootMotionSource;
  *(FName *)((longlong)param_3 + 0x3c) = local_f8.TargetPelvis.BoneName;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_f8.TargetPelvis._8_4_;
  *(FCompactPoseBoneIndex *)((longlong)param_3 + 0x48) =
       local_f8.TargetPelvis.CachedCompactPoseIndex;
  *(bool *)((longlong)param_3 + 0x4c) = local_f8.bRotateWithPelvis;
  *(ERootMotionHeightSource *)((longlong)param_3 + 0x4d) = local_f8.RootHeightSource;
  *(bool *)((longlong)param_3 + 0xb0) = local_f8.bMaintainOffsetFromPelvis;
  *(bool *)((longlong)param_3 + 0xb1) = local_f8.bPropagateToNonRetargetedChildren;
  *(FName *)((longlong)param_3 + 0xb4) = local_f8.SourceRootBone_DEPRECATED;
  *(FName *)((longlong)param_3 + 0xbc) = local_f8.TargetRootBone_DEPRECATED;
  *(FName *)((longlong)param_3 + 0xc4) = local_f8.TargetPelvisBone_DEPRECATED;
  *(double *)((longlong)param_3 + 0x50) = local_f8.GlobalOffset.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_f8.GlobalOffset.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x60) = local_f8.GlobalOffset.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x68) = local_f8.GlobalOffset.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x70) = local_f8.GlobalOffset.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x78) = local_f8.GlobalOffset.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x80) = local_f8.GlobalOffset.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x88) = local_f8.GlobalOffset.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x90) = local_f8.GlobalOffset.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x98) = local_f8.GlobalOffset.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0xa0) = local_f8.GlobalOffset.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0xa8) = local_f8.GlobalOffset.Scale3D.ZW.m128d_f64[1];
  if ((UObjectBase *)local_f8._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_f8._padding_);
  }
  return;
}

// execGetSourceRootBone @ 14df66f60

void __cdecl
UIKRetargetRootMotionController::execGetSourceRootBone
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(param_1 + 1) + 0x18);
  return;
}

// execGetTargetPelvisBone @ 14df66fc0

void __cdecl
UIKRetargetRootMotionController::execGetTargetPelvisBone
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(param_1 + 1) + 0x3c);
  return;
}

// execGetTargetRootBone @ 14df66ff0

void __cdecl
UIKRetargetRootMotionController::execGetTargetRootBone
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(param_1 + 1) + 0x28);
  return;
}

// execSetSettings @ 14df69fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargetRootMotionController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FIKRetargetRootMotionOpSettings *pFVar2;
  undefined1 auStack_1e8 [32];
  FIKRetargetRootMotionOpSettings local_1c8;
  FIKRetargetRootMotionOpSettings local_f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_f8.GlobalOffset.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8.GlobalOffset.Rotation.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_f8._padding_._0_4_ = 0xffffffff;
  local_f8._padding_._4_1_ = 1;
  local_f8._padding_ = 0;
  local_f8._padding_ = (longlong)&___7FIKRetargetRootMotionOpSettings__6B_;
  local_f8.SourceRoot.BoneName.ComparisonIndex.Value = 0;
  local_f8.SourceRoot.BoneName.Number = 0;
  local_f8.GlobalOffset.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_f8.GlobalOffset.Rotation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8.SourceRoot.bUseSkeletonIndex = 0;
  local_f8.SourceRoot.BoneIndex = -1;
  local_f8.SourceRoot.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  local_f8.TargetRoot.BoneName.ComparisonIndex.Value = 0;
  local_f8.TargetRoot.BoneName.Number = 0;
  local_f8.TargetRoot.bUseSkeletonIndex = 0;
  local_f8.TargetRoot.BoneIndex = -1;
  local_f8.TargetRoot.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  local_f8.RootMotionSource = CopyFromSourceRoot;
  local_f8.TargetPelvis.BoneName.ComparisonIndex.Value = 0;
  local_f8.TargetPelvis.BoneName.Number = 0;
  local_f8.TargetPelvis.bUseSkeletonIndex = 0;
  local_f8.TargetPelvis.BoneIndex = -1;
  local_f8.TargetPelvis.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  local_f8.bRotateWithPelvis = false;
  local_f8.RootHeightSource = CopyHeightFromSource;
  local_f8.GlobalOffset.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8.GlobalOffset.Translation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_f8.bMaintainOffsetFromPelvis = true;
  local_f8.bPropagateToNonRetargetedChildren = true;
  local_f8.SourceRootBone_DEPRECATED.ComparisonIndex.Value = 0;
  local_f8.SourceRootBone_DEPRECATED.Number = 0;
  local_f8.TargetRootBone_DEPRECATED.ComparisonIndex.Value = 0;
  local_f8.TargetRootBone_DEPRECATED.Number = 0;
  local_f8.TargetPelvisBone_DEPRECATED.ComparisonIndex.Value = 0;
  local_f8.TargetPelvisBone_DEPRECATED.Number = 0;
  local_f8.GlobalOffset.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_f8.GlobalOffset.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8.GlobalOffset.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8.GlobalOffset.Scale3D.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_f8.GlobalOffset.Scale3D.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_f8.GlobalOffset.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8.GlobalOffset.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8.GlobalOffset.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FIKRetargetRootMotionOpSettings::FIKRetargetRootMotionOpSettings(&local_1c8,&local_f8);
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),pFVar2);
  pFVar2->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)pFVar2->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pFVar2->_padding_);
    pFVar2->_padding_ = 0;
  }
  local_f8._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)local_f8._padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_f8._padding_);
  }
  return;
}

// execSetSourceRootBone @ 14df6b090

void __cdecl
UIKRetargetRootMotionController::execSetSourceRootBone
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

// execSetTargetPelvisBone @ 14df6b1b0

void __cdecl
UIKRetargetRootMotionController::execSetTargetPelvisBone
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
  *(undefined8 *)(*(longlong *)(param_1 + 1) + 0x3c) = local_res8;
  return;
}

// execSetTargetRootBone @ 14df6b240

void __cdecl
UIKRetargetRootMotionController::execSetTargetRootBone
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

