// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b56b0a0

UClass * __cdecl ADS_PowerJumpGuideActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_PowerJumpGuideActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PowerJumpGuideActor",
               &Z_Registration_Info_UClass_ADS_PowerJumpGuideActor.InnerSingleton,
               StaticRegisterNativesADS_PowerJumpGuideActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_PowerJumpGuideActor>,
               InternalVTableHelperCtorCaller<ADS_PowerJumpGuideActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_PowerJumpGuideActor.InnerSingleton;
}

// ADS_PowerJumpGuideActor @ 14b56d3b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_PowerJumpGuideActor * __thiscall
ADS_PowerJumpGuideActor::ADS_PowerJumpGuideActor
          (ADS_PowerJumpGuideActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_PowerJumpGuideActor__6B_;
  this->LandingDecalOffsetRatio_Min = 0.0;
  this->LandingDecalOffsetRatio_Max = 0.0;
  return this;
}

// ADS_PowerJumpGuideActor @ 14b56d3e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_PowerJumpGuideActor * __thiscall
ADS_PowerJumpGuideActor::ADS_PowerJumpGuideActor
          (ADS_PowerJumpGuideActor *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_PowerJumpGuideActor__6B_;
  this->LandingDecalOffsetRatio_Min = 0.0;
  this->LandingDecalOffsetRatio_Max = 0.0;
  return this;
}

// ~ADS_PowerJumpGuideActor @ 14b56e1f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_PowerJumpGuideActor::~ADS_PowerJumpGuideActor(ADS_PowerJumpGuideActor *this)

{
  this->_padding_ = (longlong)&___7ADS_PowerJumpGuideActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f100

UClass * __cdecl ADS_PowerJumpGuideActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_PowerJumpGuideActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PowerJumpGuideActor",
               &Z_Registration_Info_UClass_ADS_PowerJumpGuideActor.InnerSingleton,
               StaticRegisterNativesADS_PowerJumpGuideActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_PowerJumpGuideActor>,
               InternalVTableHelperCtorCaller<ADS_PowerJumpGuideActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_PowerJumpGuideActor.InnerSingleton;
}

// SetGuideSplinePoint @ 14b56fab0

void __thiscall
ADS_PowerJumpGuideActor::SetGuideSplinePoint
          (ADS_PowerJumpGuideActor *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    uVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 0x18);
    }
  }
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADS_PowerJumpGuideActor_SetGuideSplinePoint);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SetLandingDecalPoint @ 14b56fb80

void __thiscall
ADS_PowerJumpGuideActor::SetLandingDecalPoint
          (ADS_PowerJumpGuideActor *this,TVector<double> *param_1)

{
  UFunction *pUVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_28 = (param_1->field0_0x0)._s_0.X;
  dStack_20 = (param_1->field0_0x0)._s_0.Y;
  local_18 = (param_1->field0_0x0)._s_0.Z;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADS_PowerJumpGuideActor_SetLandingDecalPoint);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// ShowGuideSpline @ 14b56fbd0

void __thiscall ADS_PowerJumpGuideActor::ShowGuideSpline(ADS_PowerJumpGuideActor *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADS_PowerJumpGuideActor_ShowGuideSpline);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ShowLandingDecal @ 14b56fc10

void __thiscall
ADS_PowerJumpGuideActor::ShowLandingDecal(ADS_PowerJumpGuideActor *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADS_PowerJumpGuideActor_ShowLandingDecal);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// StaticRegisterNativesADS_PowerJumpGuideActor @ 14b56fc60

void __cdecl ADS_PowerJumpGuideActor::StaticRegisterNativesADS_PowerJumpGuideActor(void)

{
  return;
}

