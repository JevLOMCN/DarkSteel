// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 13

// StaticClass @ 14deee370

UClass * __cdecl UIKRigComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigComponent",
               &Z_Registration_Info_UClass_UIKRigComponent.InnerSingleton,
               StaticRegisterNativesUIKRigComponent,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRigComponent>,
               InternalVTableHelperCtorCaller<UIKRigComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigComponent.InnerSingleton;
}

// UIKRigComponent @ 14df19cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UIKRigComponent * __thiscall
UIKRigComponent::UIKRigComponent(UIKRigComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  (this->GoalContainer).bRigNeedsInitialized = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UIKRigComponent__6B_;
  (this->GoalContainer).Goals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GoalContainer).Goals.ArrayNum = 0;
  (this->GoalContainer).Goals.ArrayMax = 0;
  return this;
}

// UIKRigComponent @ 14df19d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UIKRigComponent * __thiscall
UIKRigComponent::UIKRigComponent(UIKRigComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  (this->GoalContainer).bRigNeedsInitialized = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UIKRigComponent__6B_;
  (this->GoalContainer).Goals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GoalContainer).Goals.ArrayNum = 0;
  (this->GoalContainer).Goals.ArrayMax = 0;
  return this;
}

// ~UIKRigComponent @ 14df1c590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UIKRigComponent::~UIKRigComponent(UIKRigComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UIKRigComponent__6B_;
  pFVar1 = (this->GoalContainer).Goals.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IIKGoalCreatorInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AddIKGoals_Implementation @ 14df23280

void __thiscall
UIKRigComponent::AddIKGoals_Implementation
          (UIKRigComponent *this,
          TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>
          *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong local_28;
  longlong local_20;
  
  iVar1 = (int)this->_padding_;
  lVar2 = this->_padding_;
  lVar3 = (longlong)iVar1 * 0xb0 + lVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FIKRigGoal_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar2 == lVar3) break;
    local_28 = lVar2;
    local_20 = lVar2;
    TSet<TTuple<FName,FIKRigGoal>,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FIKRigGoal_const_&>_>
              ((TSet<TTuple<FName,FIKRigGoal>,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>,FDefaultSetAllocator>
                *)param_1,(TPairInitializer<FName_const_&,FIKRigGoal_const_&> *)&stack0x00000018,
               (bool *)&local_28);
    lVar2 = lVar2 + 0xb0;
  }
  return;
}

// GetPrivateStaticClass @ 14df3cfc0

UClass * __cdecl UIKRigComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigComponent",
               &Z_Registration_Info_UClass_UIKRigComponent.InnerSingleton,
               StaticRegisterNativesUIKRigComponent,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRigComponent>,
               InternalVTableHelperCtorCaller<UIKRigComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigComponent.InnerSingleton;
}

// StaticRegisterNativesUIKRigComponent @ 14df5a0c0

void __cdecl UIKRigComponent::StaticRegisterNativesUIKRigComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UIKRigComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14df62d50

UObject * __thiscall UIKRigComponent::_getUObject(UIKRigComponent *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{152}' @ 14df62d5c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UIKRigComponent::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall UIKRigComponent::_getUObject_adjustor_152__(UIKRigComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UIKRigComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execClearAllGoals @ 14df63290

void __cdecl UIKRigComponent::execClearAllGoals(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[5].field_0x10 = 0;
  if (*(int *)&param_1[5].field_0x14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,(ForAnyElementType *)&param_1[5].field_0x8,0,
               (int *)&param_1[5].field_0x14);
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}

// execSetIKRigGoal @ 14df68500

void __cdecl UIKRigComponent::execSetIKRigGoal(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FIKRigGoal *pFVar2;
  FIKRigGoal local_b8;
  
  local_b8.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b8.FinalBlendedPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b8.Name.ComparisonIndex.Value = 0;
  local_b8.Name.Number = 0;
  local_b8.BoneName.ComparisonIndex.Value = 0;
  local_b8.BoneName.Number = 0;
  local_b8.Rotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_b8.Rotation.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_b8.Rotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_b8.FinalBlendedRotation.X = UE::Math::TQuat<double>::Identity.X;
  local_b8.FinalBlendedRotation.Y = UE::Math::TQuat<double>::Identity.Y;
  local_b8.TransformSource = Manual;
  local_b8.SourceBone.BoneName.ComparisonIndex.Value = 0;
  local_b8.SourceBone.BoneName.Number = 0;
  local_b8.SourceBone.bUseSkeletonIndex = 0;
  local_b8.SourceBone.BoneIndex = -1;
  local_b8.SourceBone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  local_b8.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_b8.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b8.PositionAlpha = 1.0;
  local_b8.RotationAlpha = 1.0;
  local_b8.PositionSpace = Additive;
  local_b8.RotationSpace = Additive;
  local_b8.FinalBlendedPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_b8.FinalBlendedPosition.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b8.bEnabled = true;
  local_b8.FinalBlendedRotation.Z = UE::Math::TQuat<double>::Identity.Z;
  local_b8.FinalBlendedRotation.W = UE::Math::TQuat<double>::Identity.W;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar2 = &local_b8;
  if ((FIKRigGoal *)param_2->MostRecentPropertyAddress != (FIKRigGoal *)0x0) {
    pFVar2 = (FIKRigGoal *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRigGoalContainer::SetIKGoal((FIKRigGoalContainer *)(param_1 + 5),pFVar2);
  return;
}

// execSetIKRigGoalPositionAndRotation @ 14df68630

void __cdecl
UIKRigComponent::execSetIKRigGoalPositionAndRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float local_res8 [2];
  float local_res10 [2];
  FName local_res20;
  double local_168;
  double dStack_160;
  double local_158;
  TQuat<double> local_148;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  FIKRigGoal local_108;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res10[0];
  fVar2 = local_res8[0];
  local_108.BoneName.ComparisonIndex.Value = 0;
  local_108.BoneName.Number = 0;
  local_148.Z = local_118;
  local_148.W = dStack_110;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_148.X = local_128;
  local_148.Y = dStack_120;
  local_108.Name = local_res20;
  local_108.TransformSource = Manual;
  local_108.SourceBone.BoneName.ComparisonIndex.Value = 0;
  local_108.SourceBone.BoneName.Number = 0;
  local_108.SourceBone.bUseSkeletonIndex = 0;
  local_108.SourceBone.BoneIndex = -1;
  local_108.SourceBone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  local_108.Position.field0_0x0._s_0.X = local_168;
  local_108.Position.field0_0x0._s_0.Y = dStack_160;
  local_108.Position.field0_0x0._s_0.Z = local_158;
  UE::Math::TQuat<double>::Rotator(&local_148,&local_108.Rotation);
  local_108.FinalBlendedRotation.X = local_148.X;
  local_108.FinalBlendedRotation.Y = local_148.Y;
  local_108.FinalBlendedRotation.Z = local_148.Z;
  local_108.FinalBlendedRotation.W = local_148.W;
  local_108.PositionAlpha = fVar3;
  local_108.RotationAlpha = fVar2;
  local_108.PositionSpace = Component;
  local_108.RotationSpace = Component;
  local_108.FinalBlendedPosition.field0_0x0._s_0.X = local_168;
  local_108.FinalBlendedPosition.field0_0x0._s_0.Y = dStack_160;
  local_108.bEnabled = true;
  local_108.FinalBlendedPosition.field0_0x0._s_0.Z = local_158;
  FIKRigGoalContainer::SetIKGoal((FIKRigGoalContainer *)(param_1 + 5),&local_108);
  return;
}

// execSetIKRigGoalTransform @ 14df688a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRigComponent::execSetIKRigGoalTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_1d8 [32];
  float local_1b8;
  float local_1b4;
  FName local_1b0;
  TQuat<double> local_1a8;
  FIKRigGoal local_188;
  double local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_1b4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b4);
  }
  local_1b8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  fVar3 = local_1b4;
  fVar2 = local_1b8;
  uVar6 = local_88._0_8_;
  uVar4 = local_98._0_8_;
  uVar5 = local_98._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = (double)local_88._0_8_;
  local_188.Position.field0_0x0._s_0.Z = (double)local_88._0_8_;
  local_1a8.X = (double)local_b8._0_8_;
  local_1a8.Y = (double)local_b8._8_8_;
  local_1a8.Z = (double)local_a8._0_8_;
  local_1a8.W = (double)local_a8._8_8_;
  local_188.Name = local_1b0;
  local_188.BoneName.ComparisonIndex.Value = 0;
  local_188.BoneName.Number = 0;
  local_188.TransformSource = Manual;
  local_188.SourceBone.BoneName.ComparisonIndex.Value = 0;
  local_188.SourceBone.BoneName.Number = 0;
  local_188.SourceBone.bUseSkeletonIndex = 0;
  local_188.SourceBone.BoneIndex = -1;
  local_188.SourceBone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  local_188.Position.field0_0x0._s_0.X = (double)local_98._0_8_;
  local_188.Position.field0_0x0._s_0.Y = (double)local_98._8_8_;
  UE::Math::TQuat<double>::Rotator(&local_1a8,&local_188.Rotation);
  local_188.FinalBlendedRotation.X = local_1a8.X;
  local_188.FinalBlendedRotation.Y = local_1a8.Y;
  local_188.FinalBlendedRotation.Z = local_1a8.Z;
  local_188.FinalBlendedRotation.W = local_1a8.W;
  local_188.PositionAlpha = fVar3;
  local_188.RotationAlpha = fVar2;
  local_188.PositionSpace = Component;
  local_188.RotationSpace = Component;
  local_188.FinalBlendedPosition.field0_0x0._s_0.X = (double)uVar4;
  local_188.FinalBlendedPosition.field0_0x0._s_0.Y = (double)uVar5;
  local_188.FinalBlendedPosition.field0_0x0._s_0.Z = (double)uVar6;
  local_188.bEnabled = true;
  FIKRigGoalContainer::SetIKGoal((FIKRigGoalContainer *)(param_1 + 5),&local_188);
  return;
}

