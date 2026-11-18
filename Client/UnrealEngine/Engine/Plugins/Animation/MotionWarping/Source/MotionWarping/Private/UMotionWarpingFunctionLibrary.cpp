// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 8

// StaticClass @ 14cf00050

UClass * __cdecl UMotionWarpingFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingFunctionLibrary",
               &Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUMotionWarpingFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionWarpingFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMotionWarpingFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton;
}

// UMotionWarpingFunctionLibrary @ 14cf04450

UMotionWarpingFunctionLibrary * __thiscall
UMotionWarpingFunctionLibrary::UMotionWarpingFunctionLibrary
          (UMotionWarpingFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMotionWarpingFunctionLibrary__6B_;
  return this;
}

// UMotionWarpingFunctionLibrary @ 14cf04480

UMotionWarpingFunctionLibrary * __thiscall
UMotionWarpingFunctionLibrary::UMotionWarpingFunctionLibrary
          (UMotionWarpingFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMotionWarpingFunctionLibrary__6B_;
  return this;
}

// ~UMotionWarpingFunctionLibrary @ 14cf058d0

void __thiscall
UMotionWarpingFunctionLibrary::~UMotionWarpingFunctionLibrary(UMotionWarpingFunctionLibrary *this)

{
  *(undefined ***)this = &___7UMotionWarpingFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14cf10520

UClass * __cdecl UMotionWarpingFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingFunctionLibrary",
               &Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUMotionWarpingFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionWarpingFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMotionWarpingFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton;
}

// MakeMotionWarpingTarget @ 14cf125e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMotionWarpingTarget * __cdecl
UMotionWarpingFunctionLibrary::MakeMotionWarpingTarget
          (FMotionWarpingTarget *__return_storage_ptr__,FName param_1,TVector<double> *param_2,
          TRotator<double> *param_3,USceneComponent *param_4,FName param_5,bool param_6,
          EWarpTargetLocationOffsetDirection param_7,AActor *param_8,TVector<double> *param_9,
          TRotator<double> *param_10)

{
  longlong lVar1;
  FName local_res10;
  undefined8 local_f8 [2];
  FMotionWarpingTarget local_e8;
  
  local_res10 = param_1;
  if (param_4 == (USceneComponent *)0x0) {
    FMotionWarpingTarget::FMotionWarpingTarget(&local_e8);
    local_e8.Location.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_e8.Location.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_e8.Location.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_e8.Rotation.Roll = param_3->Roll;
    param_4 = (USceneComponent *)0x0;
    local_e8.Rotation.Pitch = param_3->Pitch;
    local_e8.Rotation.Yaw = param_3->Yaw;
    local_f8[0] = 0;
    local_e8.Name = param_1;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_4,(FObjectPtr)local_f8);
    __return_storage_ptr__->Name = local_e8.Name;
    (__return_storage_ptr__->Location).field0_0x0._s_0.X = local_e8.Location.field0_0x0._s_0.X;
    (__return_storage_ptr__->Location).field0_0x0._s_0.Y = local_e8.Location.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Location).field0_0x0._s_0.Z = local_e8.Location.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Rotation).Pitch = local_e8.Rotation.Pitch;
    (__return_storage_ptr__->Rotation).Yaw = local_e8.Rotation.Yaw;
    lVar1 = (ulonglong)(uint7)local_e8._73_7_ << 8;
    (__return_storage_ptr__->Rotation).Roll = local_e8.Rotation.Roll;
    (__return_storage_ptr__->Component).WeakPtr = (FWeakObjectPtr)param_4;
    (__return_storage_ptr__->BoneName).ComparisonIndex = 0;
    (__return_storage_ptr__->BoneName).Number = 0;
    __return_storage_ptr__->bFollowComponent = (bool)(char)lVar1;
    __return_storage_ptr__->LocationOffsetDirection = (char)((ulonglong)lVar1 >> 8);
    *(int6 *)&__return_storage_ptr__->field_0x4a = (int6)((ulonglong)lVar1 >> 0x10);
    (__return_storage_ptr__->LocationOffset).field0_0x0._s_0.X =
         local_e8.LocationOffset.field0_0x0._s_0.X;
    (__return_storage_ptr__->LocationOffset).field0_0x0._s_0.Y =
         local_e8.LocationOffset.field0_0x0._s_0.Y;
    (__return_storage_ptr__->LocationOffset).field0_0x0._s_0.Z =
         local_e8.LocationOffset.field0_0x0._s_0.Z;
    (__return_storage_ptr__->RotationOffset).Pitch = local_e8.RotationOffset.Pitch;
    (__return_storage_ptr__->RotationOffset).Yaw = local_e8.RotationOffset.Yaw;
    (__return_storage_ptr__->RotationOffset).Roll = local_e8.RotationOffset.Roll;
    (__return_storage_ptr__->AvatarActor).WeakPtr = local_e8.AvatarActor.WeakPtr;
    __return_storage_ptr__->bCacheForwardOffset = local_e8.bCacheForwardOffset;
    *(undefined7 *)&__return_storage_ptr__->field_0x89 = local_e8._137_7_;
    (__return_storage_ptr__->CachedForwardOffset).field0_0x0._s_0.X =
         local_e8.CachedForwardOffset.field0_0x0._s_0.X;
    (__return_storage_ptr__->CachedForwardOffset).field0_0x0._s_0.Y =
         local_e8.CachedForwardOffset.field0_0x0._s_0.Y;
    (__return_storage_ptr__->CachedForwardOffset).field0_0x0._s_0.Z =
         local_e8.CachedForwardOffset.field0_0x0._s_0.Z;
    (__return_storage_ptr__->CachedRightOffset).field0_0x0._s_0.X =
         local_e8.CachedRightOffset.field0_0x0._s_0.X;
    (__return_storage_ptr__->CachedRightOffset).field0_0x0._s_0.Y =
         local_e8.CachedRightOffset.field0_0x0._s_0.Y;
    (__return_storage_ptr__->CachedRightOffset).field0_0x0._s_0.Z =
         local_e8.CachedRightOffset.field0_0x0._s_0.Z;
    (__return_storage_ptr__->CachedUpOffset).field0_0x0._s_0.X =
         local_e8.CachedUpOffset.field0_0x0._s_0.X;
    (__return_storage_ptr__->CachedUpOffset).field0_0x0._s_0.Y =
         local_e8.CachedUpOffset.field0_0x0._s_0.Y;
    (__return_storage_ptr__->CachedUpOffset).field0_0x0._s_0.Z =
         local_e8.CachedUpOffset.field0_0x0._s_0.Z;
    __return_storage_ptr__->bWarpingPaused = local_e8.bWarpingPaused;
    __return_storage_ptr__->bRootMotionPaused = local_e8.bRootMotionPaused;
    *(undefined6 *)&__return_storage_ptr__->field_0xda = local_e8._218_6_;
  }
  else {
    FMotionWarpingTarget::FMotionWarpingTarget
              (__return_storage_ptr__,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMotionWarpingFunctionLibrary @ 14cf1bdb0

void __cdecl UMotionWarpingFunctionLibrary::StaticRegisterNativesUMotionWarpingFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMotionWarpingFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execMakeMotionWarpingTarget @ 14cf23620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionWarpingFunctionLibrary::execMakeMotionWarpingTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EWarpTargetLocationOffsetDirection EVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  char cVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  bool bVar9;
  undefined1 auStack_468 [32];
  FScriptContainerElement *local_448;
  EWarpTargetLocationOffsetDirection local_438 [8];
  FName local_430;
  FName local_428;
  int local_420 [2];
  FName local_418;
  FName local_410;
  FName local_408;
  FName local_400;
  FString local_3f8;
  TQuat<double> local_3e8;
  TRotator<double> local_3c8;
  FMotionWarpingTarget local_3b0;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  FScriptContainerElement *local_2a0;
  double dStack_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  FMotionWarpingTarget local_268;
  TTransform<double> local_188;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_468;
  local_418.ComparisonIndex.Value = 0;
  local_418.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_418,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_418);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a0);
  }
  local_400.ComparisonIndex.Value = 0;
  local_400.Number = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_400,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_400);
  }
  local_410.ComparisonIndex.Value = 0;
  local_410.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_410,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_410);
  }
  local_420[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_420,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_420);
  }
  bVar9 = local_420[0] != 0;
  local_438[0] = TargetsForwardVector;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_438,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_438);
  }
  local_408.ComparisonIndex.Value = 0;
  local_408.Number = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_408,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_408);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d0);
  }
  FVar5 = local_400;
  FVar4 = local_408;
  FVar3 = local_418;
  EVar2 = local_438[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_400 == (FName)0x0) {
    FMotionWarpingTarget::FMotionWarpingTarget(&local_268);
    local_268.Name = FVar3;
    local_268.Location.field0_0x0._s_0.Z = local_278;
    local_268.Location.field0_0x0._s_0.X = local_288;
    local_268.Location.field0_0x0._s_0.Y = dStack_280;
    local_428.ComparisonIndex.Value = 0;
    local_428.Number = 0;
    local_268.Rotation.Pitch = (double)local_2a0;
    local_268.Rotation.Yaw = dStack_298;
    local_268.Rotation.Roll = local_290;
    local_430.ComparisonIndex.Value = 0;
    local_430.Number = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_428,(FObjectPtr)&local_430);
    local_3b0.Name = local_268.Name;
    local_3b0.Location.field0_0x0._s_0.X = local_268.Location.field0_0x0._s_0.X;
    local_3b0.Location.field0_0x0._s_0.Y = local_268.Location.field0_0x0._s_0.Y;
    local_3b0.Location.field0_0x0._s_0.Z = local_268.Location.field0_0x0._s_0.Z;
    local_3b0.Rotation.Pitch = local_268.Rotation.Pitch;
    local_3b0.Rotation.Yaw = local_268.Rotation.Yaw;
    local_3b0._72_8_ = (ulonglong)(uint7)local_268._73_7_ << 8;
    local_3b0.Rotation.Roll = local_268.Rotation.Roll;
    local_3b0.Component.WeakPtr.ObjectIndex = local_428.ComparisonIndex.Value;
    local_3b0.Component.WeakPtr.ObjectSerialNumber = local_428.Number;
    local_3b0.BoneName.ComparisonIndex.Value = 0;
    local_3b0.BoneName.Number = 0;
    local_3b0.LocationOffset.field0_0x0._s_0.X = local_268.LocationOffset.field0_0x0._s_0.X;
    local_3b0.LocationOffset.field0_0x0._s_0.Y = local_268.LocationOffset.field0_0x0._s_0.Y;
    local_3b0.LocationOffset.field0_0x0._s_0.Z = local_268.LocationOffset.field0_0x0._s_0.Z;
    local_3b0.RotationOffset.Pitch = local_268.RotationOffset.Pitch;
    local_3b0.RotationOffset.Yaw = local_268.RotationOffset.Yaw;
    local_3b0.RotationOffset.Roll = local_268.RotationOffset.Roll;
    local_3b0.AvatarActor.WeakPtr = local_268.AvatarActor.WeakPtr;
    local_3b0.bCacheForwardOffset = local_268.bCacheForwardOffset;
    local_3b0._137_7_ = local_268._137_7_;
    local_3b0.CachedForwardOffset.field0_0x0._s_0.X =
         local_268.CachedForwardOffset.field0_0x0._s_0.X;
    local_3b0.CachedForwardOffset.field0_0x0._s_0.Y =
         local_268.CachedForwardOffset.field0_0x0._s_0.Y;
    local_3b0.CachedForwardOffset.field0_0x0._s_0.Z =
         local_268.CachedForwardOffset.field0_0x0._s_0.Z;
    local_3b0.CachedRightOffset.field0_0x0._s_0.X = local_268.CachedRightOffset.field0_0x0._s_0.X;
    local_3b0.CachedRightOffset.field0_0x0._s_0.Y = local_268.CachedRightOffset.field0_0x0._s_0.Y;
    local_3b0.CachedRightOffset.field0_0x0._s_0.Z = local_268.CachedRightOffset.field0_0x0._s_0.Z;
    local_3b0.CachedUpOffset.field0_0x0._s_0.X = local_268.CachedUpOffset.field0_0x0._s_0.X;
    local_3b0.CachedUpOffset.field0_0x0._s_0.Y = local_268.CachedUpOffset.field0_0x0._s_0.Y;
    local_3b0.CachedUpOffset.field0_0x0._s_0.Z = local_268.CachedUpOffset.field0_0x0._s_0.Z;
    local_3b0.bWarpingPaused = local_268.bWarpingPaused;
    local_3b0.bRootMotionPaused = local_268.bRootMotionPaused;
    local_3b0._218_6_ = local_268._218_6_;
  }
  else {
    local_428 = local_410;
    local_3b0.Component.WeakPtr.ObjectIndex = 0;
    local_3b0.Component.WeakPtr.ObjectSerialNumber = 0;
    local_3b0.RotationOffset.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_3b0.RotationOffset.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_3b0.BoneName.ComparisonIndex.Value = 0;
    local_3b0.BoneName.Number = 0;
    local_3b0.RotationOffset.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_3b0.LocationOffsetDirection = TargetsForwardVector;
    local_3b0.LocationOffset.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_3b0.LocationOffset.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_3b0.AvatarActor.WeakPtr.ObjectIndex = 0;
    local_3b0.AvatarActor.WeakPtr.ObjectSerialNumber = 0;
    local_3b0.LocationOffset.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3b0._136_8_ = local_3b0._136_8_ & 0xffffffffffffff00;
    local_3b0.CachedForwardOffset.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_3b0.CachedForwardOffset.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_3b0._216_8_ = local_3b0._216_8_ & 0xffffffffffff0000;
    local_3b0.CachedForwardOffset.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3b0.CachedRightOffset.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_3b0.CachedRightOffset.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_3b0.Name = local_418;
    local_3b0.CachedRightOffset.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3b0.CachedUpOffset.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_3b0.CachedUpOffset.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_430 = local_400;
    local_3b0.CachedUpOffset.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_400);
    }
    FWeakObjectPtr::operator=(&local_3b0.Component.WeakPtr,(FObjectPtr)&local_430);
    local_3b0.BoneName = local_428;
    local_3b0.bFollowComponent = bVar9;
    local_3b0.LocationOffset.field0_0x0._s_0.X = local_2b8;
    local_3b0.LocationOffset.field0_0x0._s_0.Y = dStack_2b0;
    local_430 = FVar4;
    local_3b0.LocationOffset.field0_0x0._s_0.Z = local_2a8;
    local_3b0.RotationOffset.Pitch = local_2d0;
    local_3b0.RotationOffset.Yaw = dStack_2c8;
    local_3b0.RotationOffset.Roll = local_2c0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    FWeakObjectPtr::operator=(&local_3b0.AvatarActor.WeakPtr,(FObjectPtr)&local_430);
    local_188.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_188.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_188.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_188.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_188.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_188.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_3b0.LocationOffsetDirection = EVar2;
    if (local_3b0.BoneName == (FName)0x0) {
      local_188.Rotation.XY.m128d_f64 = *(double (*) [2])((longlong)FVar5 + 0x1f0);
      local_188.Rotation.ZW.m128d_f64 = *(double (*) [2])((longlong)FVar5 + 0x200);
      local_188.Translation.XY.m128d_f64 = *(double (*) [2])((longlong)FVar5 + 0x210);
      local_188.Translation.ZW.m128d_f64 = *(double (*) [2])((longlong)FVar5 + 0x220);
      local_188.Scale3D.XY.m128d_f64[0] =
           *(double *)&((UObject *)((longlong)FVar5 + 0x230))->field_0x0;
      local_188.Scale3D.XY.m128d_f64[1] =
           *(double *)&((UObject *)((longlong)FVar5 + 0x230))->field_0x8;
      local_188.Scale3D.ZW.m128d_f64 = *(double (*) [2])((longlong)FVar5 + 0x240);
    }
    else {
      cVar6 = (**(code **)(*(longlong *)FVar5 + 0x540))(FVar5,local_428);
      if (cVar6 == '\0') {
        if (2 < (byte)LogMotionWarping._0_1_) {
          pFVar7 = ::FName::ToString(&local_428,(FString *)&local_3c8);
          if ((pFVar7->Data).ArrayNum == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
          if (*(longlong *)((longlong)FVar5 + 0xa8) == 0) {
            ::FString::FString(&local_3f8,L"None");
          }
          else {
            local_430 = *(FName *)(*(longlong *)((longlong)FVar5 + 0xa8) + 0x18);
            ::FName::ToString(&local_430,&local_3f8);
          }
          local_430 = *(FName *)((longlong)FVar5 + 0x18);
          ::FName::ToString(&local_430,(FString *)&local_3e8);
          local_448 = (FScriptContainerElement *)pwVar8;
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
          if ((void *)local_3e8.X != (void *)0x0) {
            FMemory::Free((void *)local_3e8.X);
          }
          if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
          }
          if ((FScriptContainerElement *)local_3c8.Pitch != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_3c8.Pitch);
          }
        }
        local_128 = *(undefined4 *)((longlong)FVar5 + 0x1f0);
        uStack_124 = *(undefined4 *)((longlong)FVar5 + 500);
        uStack_120 = *(undefined4 *)((longlong)FVar5 + 0x1f8);
        uStack_11c = *(undefined4 *)((longlong)FVar5 + 0x1fc);
        local_118 = *(undefined4 *)((longlong)FVar5 + 0x200);
        uStack_114 = *(undefined4 *)((longlong)FVar5 + 0x204);
        uStack_110 = *(undefined4 *)((longlong)FVar5 + 0x208);
        uStack_10c = *(undefined4 *)((longlong)FVar5 + 0x20c);
        local_108 = *(undefined4 *)((longlong)FVar5 + 0x210);
        uStack_104 = *(undefined4 *)((longlong)FVar5 + 0x214);
        uStack_100 = *(undefined4 *)((longlong)FVar5 + 0x218);
        uStack_fc = *(undefined4 *)((longlong)FVar5 + 0x21c);
        local_f8 = *(undefined4 *)((longlong)FVar5 + 0x220);
        uStack_f4 = *(undefined4 *)((longlong)FVar5 + 0x224);
        uStack_f0 = *(undefined4 *)((longlong)FVar5 + 0x228);
        uStack_ec = *(undefined4 *)((longlong)FVar5 + 0x22c);
        local_e8 = *(undefined4 *)((longlong)FVar5 + 0x230);
        uStack_e4 = *(undefined4 *)((longlong)FVar5 + 0x234);
        uStack_e0 = *(undefined4 *)((longlong)FVar5 + 0x238);
        uStack_dc = *(undefined4 *)((longlong)FVar5 + 0x23c);
        local_d8 = *(undefined4 *)((longlong)FVar5 + 0x240);
        uStack_d4 = *(undefined4 *)((longlong)FVar5 + 0x244);
        uStack_d0 = *(undefined4 *)((longlong)FVar5 + 0x248);
        uStack_cc = *(undefined4 *)((longlong)FVar5 + 0x24c);
      }
      else {
        (**(code **)(*(longlong *)FVar5 + 0x520))(FVar5,&local_128,local_428,0);
      }
      local_188.Rotation.XY.m128d_f64[0]._4_4_ = uStack_124;
      local_188.Rotation.XY.m128d_f64[0]._0_4_ = local_128;
      local_188.Rotation.XY.m128d_f64[1]._0_4_ = uStack_120;
      local_188.Rotation.XY.m128d_f64[1]._4_4_ = uStack_11c;
      local_188.Rotation.ZW.m128d_f64[0]._4_4_ = uStack_114;
      local_188.Rotation.ZW.m128d_f64[0]._0_4_ = local_118;
      local_188.Rotation.ZW.m128d_f64[1]._0_4_ = uStack_110;
      local_188.Rotation.ZW.m128d_f64[1]._4_4_ = uStack_10c;
      local_188.Translation.XY.m128d_f64[0]._4_4_ = uStack_104;
      local_188.Translation.XY.m128d_f64[0]._0_4_ = local_108;
      local_188.Translation.XY.m128d_f64[1]._0_4_ = uStack_100;
      local_188.Translation.XY.m128d_f64[1]._4_4_ = uStack_fc;
      local_188.Translation.ZW.m128d_f64[0]._4_4_ = uStack_f4;
      local_188.Translation.ZW.m128d_f64[0]._0_4_ = local_f8;
      local_188.Translation.ZW.m128d_f64[1]._0_4_ = uStack_f0;
      local_188.Translation.ZW.m128d_f64[1]._4_4_ = uStack_ec;
      local_188.Scale3D.XY.m128d_f64[0]._4_4_ = uStack_e4;
      local_188.Scale3D.XY.m128d_f64[0]._0_4_ = local_e8;
      local_188.Scale3D.XY.m128d_f64[1]._0_4_ = uStack_e0;
      local_188.Scale3D.XY.m128d_f64[1]._4_4_ = uStack_dc;
      local_188.Scale3D.ZW.m128d_f64[0]._4_4_ = uStack_d4;
      local_188.Scale3D.ZW.m128d_f64[0]._0_4_ = local_d8;
      local_188.Scale3D.ZW.m128d_f64[1]._0_4_ = uStack_d0;
      local_188.Scale3D.ZW.m128d_f64[1]._4_4_ = uStack_cc;
    }
    FMotionWarpingTarget::CacheOffset(&local_3b0,&local_188);
    FMotionWarpingTarget::RecalculateOffset(&local_3b0,&local_188);
    local_3b0.Location.field0_0x0._s_0.X = local_188.Translation.XY.m128d_f64[0];
    local_3b0.Location.field0_0x0._s_0.Y = local_188.Translation.XY.m128d_f64[1];
    local_3b0.Location.field0_0x0._s_0.Z = local_188.Translation.ZW.m128d_f64[0];
    local_3e8.X = local_188.Rotation.XY.m128d_f64[0];
    local_3e8.Y = local_188.Rotation.XY.m128d_f64[1];
    local_3e8.Z = local_188.Rotation.ZW.m128d_f64[0];
    local_3e8.W = local_188.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_3e8,&local_3c8);
    local_3b0.Rotation.Pitch = local_3c8.Pitch;
    local_3b0.Rotation.Yaw = local_3c8.Yaw;
    local_3b0.Rotation.Roll = local_3c8.Roll;
  }
  *(FName *)param_3 = local_3b0.Name;
  *(double *)((longlong)param_3 + 8) = local_3b0.Location.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x10) = local_3b0.Location.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x18) = local_3b0.Location.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x20) = local_3b0.Rotation.Pitch;
  *(double *)((longlong)param_3 + 0x28) = local_3b0.Rotation.Yaw;
  *(double *)((longlong)param_3 + 0x30) = local_3b0.Rotation.Roll;
  ((FName *)((longlong)param_3 + 0x38))->ComparisonIndex =
       (FNameEntryId)local_3b0.Component.WeakPtr.ObjectIndex;
  ((FName *)((longlong)param_3 + 0x38))->Number = local_3b0.Component.WeakPtr.ObjectSerialNumber;
  *(FName *)((longlong)param_3 + 0x40) = local_3b0.BoneName;
  *(undefined8 *)((longlong)param_3 + 0x48) = local_3b0._72_8_;
  *(double *)((longlong)param_3 + 0x50) = local_3b0.LocationOffset.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x58) = local_3b0.LocationOffset.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x60) = local_3b0.LocationOffset.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x68) = local_3b0.RotationOffset.Pitch;
  *(double *)((longlong)param_3 + 0x70) = local_3b0.RotationOffset.Yaw;
  *(double *)((longlong)param_3 + 0x78) = local_3b0.RotationOffset.Roll;
  *(FWeakObjectPtr *)((longlong)param_3 + 0x80) = local_3b0.AvatarActor.WeakPtr;
  *(undefined8 *)((longlong)param_3 + 0x88) = local_3b0._136_8_;
  *(double *)((longlong)param_3 + 0x90) = local_3b0.CachedForwardOffset.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x98) = local_3b0.CachedForwardOffset.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0xa0) = local_3b0.CachedForwardOffset.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0xa8) = local_3b0.CachedRightOffset.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0xb0) = local_3b0.CachedRightOffset.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0xb8) = local_3b0.CachedRightOffset.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0xc0) = local_3b0.CachedUpOffset.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 200) = local_3b0.CachedUpOffset.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0xd0) = local_3b0.CachedUpOffset.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_3 + 0xd8) = local_3b0._216_8_;
  return;
}

