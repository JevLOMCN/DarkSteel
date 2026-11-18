// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 11

// StaticClass @ 146ab1f20

UClass * __cdecl ACameraRig_Rail::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraRig_Rail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CameraRig_Rail",
               &Z_Registration_Info_UClass_ACameraRig_Rail.InnerSingleton,
               StaticRegisterNativesACameraRig_Rail,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACameraRig_Rail>,
               InternalVTableHelperCtorCaller<ACameraRig_Rail>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraRig_Rail.InnerSingleton;
}

// ACameraRig_Rail @ 146ab4b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACameraRig_Rail * __thiscall
ACameraRig_Rail::ACameraRig_Rail(ACameraRig_Rail *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ACameraRig_Rail__6B_;
  (this->TransformComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->RailSplineComponent).field0_0x0.DebugPtr = (USplineComponent *)0x0;
  (this->RailCameraMount).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  return this;
}

// ACameraRig_Rail @ 146ab4b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACameraRig_Rail * __thiscall
ACameraRig_Rail::ACameraRig_Rail(ACameraRig_Rail *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  USplineComponent *this_00;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  this->_padding_ = (longlong)&___7ACameraRig_Rail__6B_;
  (this->TransformComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->RailSplineComponent).field0_0x0.DebugPtr = (USplineComponent *)0x0;
  (this->RailCameraMount).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  this->CurrentPositionOnRail = 0.0;
  this->bLockOrientationToRail = false;
  pFVar3 = ::FName::FName(&local_res8,L"TransformComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->TransformComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->TransformComponent).field0_0x0;
  pFVar3 = ::FName::FName(&local_res8,L"RailSplineComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USplineComponent_NoRegister();
  this_00 = (USplineComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (USplineComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->RailSplineComponent).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(this->TransformComponent).field0_0x0.DebugPtr,(FName)0x0);
  pFVar3 = ::FName::FName(&local_res8,L"RailCameraMount");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->RailCameraMount).field0_0x0.DebugPtr = pUVar5;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            (pUVar5,(USceneComponent *)(this->RailSplineComponent).field0_0x0.DebugPtr,(FName)0x0);
  return this;
}

// ~ACameraRig_Rail @ 146ab53e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraRig_Rail::~ACameraRig_Rail(ACameraRig_Rail *this)

{
  this->_padding_ = (longlong)&___7ACameraRig_Rail__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetDefaultAttachComponent @ 146ab6ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall ACameraRig_Rail::GetDefaultAttachComponent(ACameraRig_Rail *this)

{
  return (this->RailCameraMount).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 146ab7ba0

UClass * __cdecl ACameraRig_Rail::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraRig_Rail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CameraRig_Rail",
               &Z_Registration_Info_UClass_ACameraRig_Rail.InnerSingleton,
               StaticRegisterNativesACameraRig_Rail,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACameraRig_Rail>,
               InternalVTableHelperCtorCaller<ACameraRig_Rail>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraRig_Rail.InnerSingleton;
}

// ShouldTickIfViewportsOnly @ 146ab9360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ACameraRig_Rail::ShouldTickIfViewportsOnly(ACameraRig_Rail *this)

{
  return true;
}

// StaticRegisterNativesACameraRig_Rail @ 146ab93b0

void __cdecl ACameraRig_Rail::StaticRegisterNativesACameraRig_Rail(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ACameraRig_Rail_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 146ab96d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraRig_Rail::Tick(ACameraRig_Rail *this,float param_1)

{
  AActor::Tick((AActor *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146ab96e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x760))(this);
  return;
}

// UpdateRailComponents @ 146aba140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraRig_Rail::UpdateRailComponents(ACameraRig_Rail *this)

{
  USplineComponent *this_00;
  UWorld *pUVar1;
  float fVar2;
  undefined1 auStack_f8 [32];
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (((pUVar1 != (UWorld *)0x0) &&
      (this_00 = (this->RailSplineComponent).field0_0x0.DebugPtr, this_00 != (USplineComponent *)0x0
      )) && ((this->RailCameraMount).field0_0x0.DebugPtr != (USceneComponent *)0x0)) {
    fVar2 = USplineComponent::GetSplineLength(this_00);
    USplineComponent::GetLocationAtDistanceAlongSpline
              ((this->RailSplineComponent).field0_0x0.DebugPtr,(TVector<double> *)&local_c8._s_0,
               fVar2 * this->CurrentPositionOnRail,World);
    if (this->bLockOrientationToRail == false) {
      local_a8._s_0.X = local_c8._s_0.X;
      local_a8._s_0.Y = local_c8._s_0.Y;
      local_a8._s_0.Z = local_c8._s_0.Z;
      USceneComponent::SetWorldLocation
                ((this->RailCameraMount).field0_0x0.DebugPtr,(TVector<double> *)&local_a8._s_0,false
                 ,(FHitResult *)0x0,None);
    }
    else {
      USplineComponent::GetQuaternionAtDistanceAlongSpline
                ((this->RailSplineComponent).field0_0x0.DebugPtr,(TQuat<double> *)&local_a8._s_0,
                 fVar2 * this->CurrentPositionOnRail,World);
      local_88.Rotation.ZW.m128d_f64[0] = local_a8._s_0.Z;
      local_88.Rotation.ZW.m128d_f64[1] = dStack_90;
      local_88.Translation.ZW.m128d_f64[0] = local_c8._s_0.Z;
      local_88.Translation.ZW.m128d_f64[1] = 0.0;
      local_88.Rotation.XY.m128d_f64[0] = local_a8._s_0.X;
      local_88.Rotation.XY.m128d_f64[1] = local_a8._s_0.Y;
      local_88.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_88.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_88.Translation.XY.m128d_f64[0] = local_c8._s_0.X;
      local_88.Translation.XY.m128d_f64[1] = local_c8._s_0.Y;
      local_88.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_88.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      USceneComponent::SetWorldTransform
                ((this->RailCameraMount).field0_0x0.DebugPtr,&local_88,false,(FHitResult *)0x0,None)
      ;
    }
  }
  return;
}

// execGetRailSplineComponent @ 146abba60

void __cdecl
ACameraRig_Rail::execGetRailSplineComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x12);
  return;
}

