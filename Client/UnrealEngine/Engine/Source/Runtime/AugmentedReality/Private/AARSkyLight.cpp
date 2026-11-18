// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 9

// StaticClass @ 14cf2cbd0

UClass * __cdecl AARSkyLight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSkyLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSkyLight",
               &Z_Registration_Info_UClass_AARSkyLight.InnerSingleton,
               StaticRegisterNativesAARSkyLight,0x2e0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<AARSkyLight>,
               InternalVTableHelperCtorCaller<AARSkyLight>,local_res8,ASkyLight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSkyLight.InnerSingleton;
}

// AARSkyLight @ 14cf40680

AARSkyLight * __thiscall AARSkyLight::AARSkyLight(AARSkyLight *this,FVTableHelper *param_1)

{
  ASkyLight::ASkyLight((ASkyLight *)this,param_1);
  this->_padding_ = (longlong)&___7AARSkyLight__6B_;
  (this->CaptureProbe).field0_0x0.DebugPtr = (UAREnvironmentCaptureProbe *)0x0;
  return this;
}

// AARSkyLight @ 14cf406c0

AARSkyLight * __thiscall AARSkyLight::AARSkyLight(AARSkyLight *this,FObjectInitializer *param_1)

{
  ASkyLight::ASkyLight((ASkyLight *)this,param_1);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e800000;
  this->_padding_ = (longlong)&___7AARSkyLight__6B_;
  (this->CaptureProbe).field0_0x0.DebugPtr = (UAREnvironmentCaptureProbe *)0x0;
  this->LastUpdateTimestamp = 0.0;
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xfb | 2;
  *(undefined1 *)(this->_padding_ + 0x299) = 1;
  *(undefined1 *)(this->_padding_ + 0x2b5) = 0;
  return this;
}

// ~AARSkyLight @ 14cf43dc0

void __thiscall AARSkyLight::~AARSkyLight(AARSkyLight *this)

{
  this->_padding_ = (longlong)&___7AARSkyLight__6B_;
  ASkyLight::~ASkyLight((ASkyLight *)this);
  return;
}

// GetPrivateStaticClass @ 14cf53c20

UClass * __cdecl AARSkyLight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSkyLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSkyLight",
               &Z_Registration_Info_UClass_AARSkyLight.InnerSingleton,
               StaticRegisterNativesAARSkyLight,0x2e0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<AARSkyLight>,
               InternalVTableHelperCtorCaller<AARSkyLight>,local_res8,ASkyLight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSkyLight.InnerSingleton;
}

// SetEnvironmentCaptureProbe @ 14cf5fca0

void __thiscall
AARSkyLight::SetEnvironmentCaptureProbe(AARSkyLight *this,UAREnvironmentCaptureProbe *param_1)

{
  UAREnvironmentCaptureProbe *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAREnvironmentCaptureProbe *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CaptureProbe).field0_0x0.DebugPtr = param_1;
  (**(code **)(this->_padding_ + 0x4a8))(this,param_1 != (UAREnvironmentCaptureProbe *)0x0);
  pUVar1 = (this->CaptureProbe).field0_0x0.DebugPtr;
  if (pUVar1 != (UAREnvironmentCaptureProbe *)0x0) {
    USkyLightComponent::SetCubemap
              ((USkyLightComponent *)this->_padding_,
               (UTextureCube *)(pUVar1->EnvironmentCaptureTexture).field0_0x0.DebugPtr);
    this->LastUpdateTimestamp =
         (float)*(double *)&((this->CaptureProbe).field0_0x0.DebugPtr)->field_0x138;
    return;
  }
  this->LastUpdateTimestamp = 0.0;
  return;
}

// StaticRegisterNativesAARSkyLight @ 14cf60d90

void __cdecl AARSkyLight::StaticRegisterNativesAARSkyLight(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AARSkyLight_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14cf61f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AARSkyLight::Tick(AARSkyLight *this,float param_1)

{
  UAREnvironmentCaptureProbe *pUVar1;
  float fVar2;
  
  pUVar1 = (this->CaptureProbe).field0_0x0.DebugPtr;
  if (pUVar1 == (UAREnvironmentCaptureProbe *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf61f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x4a8))(this,0);
    return;
  }
  fVar2 = (float)*(double *)&pUVar1->field_0x138;
  if (this->LastUpdateTimestamp <= fVar2 && fVar2 != this->LastUpdateTimestamp) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this->_padding_);
    USkyLightComponent::SetCaptureIsDirty((USkyLightComponent *)this->_padding_);
    this->LastUpdateTimestamp =
         (float)*(double *)&((this->CaptureProbe).field0_0x0.DebugPtr)->field_0x138;
  }
  return;
}

// execSetEnvironmentCaptureProbe @ 14cf73d50

void __cdecl
AARSkyLight::execSetEnvironmentCaptureProbe(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  float fVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)(param_1 + 0x12) = pUVar2;
  (**(code **)(*(longlong *)param_1 + 0x4a8))(param_1,pUVar2 != (UObject *)0x0);
  if (*(longlong *)(param_1 + 0x12) == 0) {
    fVar3 = 0.0;
  }
  else {
    USkyLightComponent::SetCubemap
              (*(USkyLightComponent **)&param_1[0x11].field_0x18,
               *(UTextureCube **)(*(longlong *)(param_1 + 0x12) + 0x170));
    fVar3 = (float)*(double *)(*(longlong *)(param_1 + 0x12) + 0x138);
  }
  *(float *)&param_1[0x12].field_0x8 = fVar3;
  return;
}

