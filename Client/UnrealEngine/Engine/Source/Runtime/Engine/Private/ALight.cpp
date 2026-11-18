// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 39

// IsLevelBoundsRelevant @ 147270480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall ALight::IsLevelBoundsRelevant(ALight *this)

{
  return false;
}

// StaticClass @ 1472708d0

UClass * __cdecl ALight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ALight.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Light",&Z_Registration_Info_UClass_ALight.InnerSingleton,
               StaticRegisterNativesALight,0x2d0,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ALight>,
               InternalVTableHelperCtorCaller<ALight>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALight.InnerSingleton;
}

// ALight @ 147ea3c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ALight * __thiscall ALight::ALight(ALight *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALight__6B_;
  (this->LightComponent).field0_0x0.DebugPtr = (ULightComponent *)0x0;
  return this;
}

// ALight @ 147ea3ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ALight * __thiscall ALight::ALight(ALight *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  ULightComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALight__6B_;
  (this->LightComponent).field0_0x0.DebugPtr = (ULightComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"LightComponent0");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_ULightComponent_NoRegister();
  pUVar5 = (ULightComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (ULightComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->LightComponent).field0_0x0.DebugPtr = pUVar5;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x10;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  return this;
}

// ~ALight @ 147ea8a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::~ALight(ALight *this)

{
  this->_padding_ = (longlong)&___7ALight__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// Destroyed @ 147eb77d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::Destroyed(ALight *this)

{
  uint *puVar1;
  ULightComponent *pUVar2;
  bool bVar3;
  UWorld *this_00;
  
  pUVar2 = (this->LightComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (ULightComponent *)0x0) {
    puVar1 = (uint *)((longlong)&pUVar2->_padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      bVar3 = UWorld::IsGameWorld(this_00);
      if (!bVar3) {
        pUVar2 = (this->LightComponent).field0_0x0.DebugPtr;
        (**(code **)(pUVar2->_padding_ + 0x440))(pUVar2,1,0);
      }
    }
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// GetBrightness @ 147ebef70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall ALight::GetBrightness(ALight *this)

{
  ULightComponent *pUVar1;
  
  pUVar1 = (this->LightComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (ULightComponent *)0x0) {
    return *(float *)((longlong)&pUVar1->_padding_ + 4);
  }
  return 0.0;
}

// GetLifetimeReplicatedProps @ 147ec0ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
ALight::GetLifetimeReplicatedProps
          (ALight *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,8,L"bEnabled",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetLightColor @ 147ec1300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall ALight::GetLightColor(ALight *this,FLinearColor *__return_storage_ptr__)

{
  ULightComponent *pUVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pUVar1 = (this->LightComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (ULightComponent *)0x0) {
    local_18 = CONCAT44(FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&pUVar1->_padding_ + 1)]
                        ,FLinearColor::sRGBToLinearTable
                         [*(byte *)((longlong)&pUVar1->_padding_ + 2)]);
    uStack_10._0_4_ = FLinearColor::sRGBToLinearTable[(byte)pUVar1->_padding_];
    uStack_10._4_4_ = (float)*(byte *)((longlong)&pUVar1->_padding_ + 3) * __real_3b808081;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_10;
    return __return_storage_ptr__;
  }
  local_18 = FLinearColor::Black.field0_0x0._0_8_;
  uStack_10 = FLinearColor::Black.field0_0x0._8_8_;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_10;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147ec3ea0

UClass * __cdecl ALight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Light",&Z_Registration_Info_UClass_ALight.InnerSingleton,
               StaticRegisterNativesALight,0x2d0,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ALight>,
               InternalVTableHelperCtorCaller<ALight>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALight.InnerSingleton;
}

// IsEnabled @ 147ecd570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall ALight::IsEnabled(ALight *this)

{
  ULightComponent *pUVar1;
  
  pUVar1 = (this->LightComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (ULightComponent *)0x0) {
    return (bool)((byte)pUVar1->_padding_ >> 5 & 1);
  }
  return false;
}

// IsToggleable @ 147ecdfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall ALight::IsToggleable(ALight *this)

{
  bool bVar1;
  
  bVar1 = ULightComponentBase::HasStaticLighting
                    ((ULightComponentBase *)(this->LightComponent).field0_0x0.DebugPtr);
  return !bVar1;
}

// OnRep_bEnabled @ 147ed0620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::OnRep_bEnabled(ALight *this)

{
  USceneComponent::SetVisibility
            ((USceneComponent *)(this->LightComponent).field0_0x0.DebugPtr,this->bEnabled,DirtyOnly)
  ;
  return;
}

// PostLoad @ 147ed1910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::PostLoad(ALight *this)

{
  ULightComponent *this_00;
  
  AActor::PostLoad((AActor *)this);
  this_00 = (this->LightComponent).field0_0x0.DebugPtr;
  if ((this_00 != (ULightComponent *)0x0) && (*(char *)((longlong)&this_00->_padding_ + 3) == '\0'))
  {
    ULightComponent::ClearLightFunctionMaterial(this_00);
    return;
  }
  return;
}

// SetAffectTranslucentLighting @ 147edbe40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::SetAffectTranslucentLighting(ALight *this,bool param_1)

{
  ULightComponent::SetAffectTranslucentLighting((this->LightComponent).field0_0x0.DebugPtr,param_1);
  return;
}

// SetBrightness @ 147edbf10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::SetBrightness(ALight *this,float param_1)

{
  ULightComponent *this_00;
  bool bVar1;
  
  this_00 = (this->LightComponent).field0_0x0.DebugPtr;
  if (this_00 == (ULightComponent *)0x0) {
    return;
  }
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this_00);
  if ((((bVar1) || ((this_00->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this_00->_padding_ + 3) != '\0')) &&
     (param_1 != *(float *)((longlong)&this_00->_padding_ + 4))) {
    *(float *)((longlong)&this_00->_padding_ + 4) = param_1;
    ULightComponent::UpdateColorAndBrightness(this_00);
  }
  return;
}

// SetCastShadows @ 147edc060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::SetCastShadows(ALight *this,bool param_1)

{
  ULightComponentBase::SetCastShadows
            ((ULightComponentBase *)(this->LightComponent).field0_0x0.DebugPtr,param_1);
  return;
}

// SetEnabled @ 147edc590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::SetEnabled(ALight *this,bool param_1)

{
  ULightComponent *this_00;
  
  this_00 = (this->LightComponent).field0_0x0.DebugPtr;
  if (this_00 != (ULightComponent *)0x0) {
    USceneComponent::SetVisibility((USceneComponent *)this_00,param_1,DirtyOnly);
    return;
  }
  return;
}

// SetLightColor @ 147edc770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::SetLightColor(ALight *this,FLinearColor *param_1)

{
  ULightComponent *this_00;
  FLinearColor_u_0 local_18;
  
  this_00 = (this->LightComponent).field0_0x0.DebugPtr;
  if (this_00 != (ULightComponent *)0x0) {
    local_18._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_18._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    ULightComponent::SetLightColor(this_00,(FLinearColor *)&local_18._s_0,true);
  }
  return;
}

// SetLightFunctionFadeDistance @ 147edc7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::SetLightFunctionFadeDistance(ALight *this,float param_1)

{
  ULightComponent::SetLightFunctionFadeDistance((this->LightComponent).field0_0x0.DebugPtr,param_1);
  return;
}

// SetLightFunctionMaterial @ 147edc7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::SetLightFunctionMaterial(ALight *this,UMaterialInterface *param_1)

{
  ULightComponent::SetLightFunctionMaterial((this->LightComponent).field0_0x0.DebugPtr,param_1);
  return;
}

// SetLightFunctionScale @ 147edc9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::SetLightFunctionScale(ALight *this,TVector<double> *param_1)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  ULightComponent::SetLightFunctionScale
            ((this->LightComponent).field0_0x0.DebugPtr,(TVector<double> *)&local_28._s_0);
  return;
}

// SetMobility @ 147edca80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::SetMobility(ALight *this,Type param_1)

{
  ULightComponent *pUVar1;
  
  pUVar1 = (this->LightComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (ULightComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147edca8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x5f8))();
    return;
  }
  return;
}

// StaticRegisterNativesALight @ 147edefe0

void __cdecl ALight::StaticRegisterNativesALight(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_ALight_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToggleEnabled @ 147ee2980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ALight::ToggleEnabled(ALight *this)

{
  ULightComponent *this_00;
  
  this_00 = (this->LightComponent).field0_0x0.DebugPtr;
  if (this_00 != (ULightComponent *)0x0) {
    USceneComponent::SetVisibility
              ((USceneComponent *)this_00,(bool)(~((byte)this_00->_padding_ >> 5) & 1),DirtyOnly);
    return;
  }
  return;
}

// ValidateGeneratedRepEnums @ 147ee60d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
ALight::ValidateGeneratedRepEnums
          (ALight *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_bEnabled,L"bEnabled");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0xb) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_bEnabled != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\Light.gen.cpp"
                       ,0x358,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALight"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execGetBrightness @ 147ee8120

void __cdecl ALight::execGetBrightness(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x11].field_0x18 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[0x11].field_0x18 + 0x274);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetLightColor @ 147ee8160

void __cdecl ALight::execGetLightColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[0x11].field_0x18;
  if (lVar1 != 0) {
    local_18 = CONCAT44(FLinearColor::sRGBToLinearTable[*(byte *)(lVar1 + 0x279)],
                        FLinearColor::sRGBToLinearTable[*(byte *)(lVar1 + 0x27a)]);
    uStack_10._0_4_ = FLinearColor::sRGBToLinearTable[*(byte *)(lVar1 + 0x278)];
    uStack_10._4_4_ = (float)*(byte *)(lVar1 + 0x27b) * __real_3b808081;
    *(undefined8 *)param_3 = local_18;
    *(undefined8 *)((longlong)param_3 + 8) = uStack_10;
    return;
  }
  local_18 = FLinearColor::Black.field0_0x0._0_8_;
  uStack_10 = FLinearColor::Black.field0_0x0._8_8_;
  *(undefined8 *)param_3 = local_18;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_10;
  return;
}

// execIsEnabled @ 147ee8210

void __cdecl ALight::execIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x11].field_0x18 != 0) {
    *(byte *)param_3 = *(byte *)(*(longlong *)&param_1[0x11].field_0x18 + 0x1a8) >> 5 & 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execOnRep_bEnabled @ 147ee82e0

void __cdecl ALight::execOnRep_bEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147ee82f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x760))();
  return;
}

// execSetAffectTranslucentLighting @ 147ee84c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
ALight::execSetAffectTranslucentLighting(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ULightComponent::SetAffectTranslucentLighting
            (*(ULightComponent **)&param_1[0x11].field_0x18,local_res8[0] != 0);
  return;
}

// execSetBrightness @ 147ee8560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl ALight::execSetBrightness(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(ULightComponent **)&param_1[0x11].field_0x18 != (ULightComponent *)0x0) {
    ULightComponent::SetIntensity(*(ULightComponent **)&param_1[0x11].field_0x18,local_res8[0]);
  }
  return;
}

// execSetCastShadows @ 147ee85f0

void __cdecl ALight::execSetCastShadows(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ULightComponentBase::SetCastShadows
            (*(ULightComponentBase **)&param_1[0x11].field_0x18,local_res8[0] != 0);
  return;
}

// execSetEnabled @ 147ee8690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ALight::execSetEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(USceneComponent **)&param_1[0x11].field_0x18 != (USceneComponent *)0x0) {
    USceneComponent::SetVisibility
              (*(USceneComponent **)&param_1[0x11].field_0x18,local_res8[0] != 0,DirtyOnly);
  }
  return;
}

// execSetLightColor @ 147ee8730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl ALight::execSetLightColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(ULightComponent **)&param_1[0x11].field_0x18 != (ULightComponent *)0x0) {
    local_18._0_8_ = local_28;
    local_18._8_8_ = uStack_20;
    ULightComponent::SetLightColor
              (*(ULightComponent **)&param_1[0x11].field_0x18,(FLinearColor *)&local_18._s_0,true);
  }
  return;
}

// execSetLightFunctionFadeDistance @ 147ee87d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
ALight::execSetLightFunctionFadeDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ULightComponent::SetLightFunctionFadeDistance
            (*(ULightComponent **)&param_1[0x11].field_0x18,local_res8[0]);
  return;
}

// execSetLightFunctionMaterial @ 147ee8860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl ALight::execSetLightFunctionMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInterface *local_res8;
  
  local_res8 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ULightComponent::SetLightFunctionMaterial
            (*(ULightComponent **)&param_1[0x11].field_0x18,local_res8);
  return;
}

// execSetLightFunctionScale @ 147ee88f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl ALight::execSetLightFunctionScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ULightComponent::SetLightFunctionScale
            (*(ULightComponent **)&param_1[0x11].field_0x18,(TVector<double> *)&local_28._s_0);
  return;
}

// execToggleEnabled @ 147ee8990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ALight::execToggleEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  USceneComponent *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(USceneComponent **)&param_1[0x11].field_0x18;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::SetVisibility(this,(bool)(~this->bVisible & 1),DirtyOnly);
    return;
  }
  return;
}

