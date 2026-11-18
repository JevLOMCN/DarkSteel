// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 6

// StaticClass @ 146337bf0

UClass * __cdecl AISMPoolActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AISMPoolActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolActor",
               &Z_Registration_Info_UClass_AISMPoolActor.InnerSingleton,
               StaticRegisterNativesAISMPoolActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AISMPoolActor>,
               InternalVTableHelperCtorCaller<AISMPoolActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AISMPoolActor.InnerSingleton;
}

// AISMPoolActor @ 14633a420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AISMPoolActor * __thiscall AISMPoolActor::AISMPoolActor(AISMPoolActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AISMPoolActor__6B_;
  (this->ISMPoolComp).field0_0x0.DebugPtr = (UISMPoolComponent *)0x0;
  (this->ISMPoolDebugDrawComp).field0_0x0.DebugPtr = (UISMPoolDebugDrawComponent *)0x0;
  return this;
}

// AISMPoolActor @ 14633a460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AISMPoolActor * __thiscall
AISMPoolActor::AISMPoolActor(AISMPoolActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UISMPoolComponent *pUVar4;
  UISMPoolDebugDrawComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AISMPoolActor__6B_;
  (this->ISMPoolComp).field0_0x0.DebugPtr = (UISMPoolComponent *)0x0;
  (this->ISMPoolDebugDrawComp).field0_0x0.DebugPtr = (UISMPoolDebugDrawComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"ISMPoolComp");
  FVar1 = *pFVar2;
  pUVar3 = UISMPoolComponent::StaticClass();
  pUVar4 = (UISMPoolComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UISMPoolComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ISMPoolComp).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UISMPoolComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->ISMPoolComp).field0_0x0;
  pFVar2 = ::FName::FName(&local_res8,L"ISMPoolDebug");
  FVar1 = *pFVar2;
  pUVar3 = UISMPoolDebugDrawComponent::StaticClass();
  pUVar5 = (UISMPoolDebugDrawComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UISMPoolDebugDrawComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ISMPoolDebugDrawComp).field0_0x0.DebugPtr = pUVar5;
  (**(code **)(*(longlong *)pUVar5 + 0x780))(pUVar5);
  UActorComponent::SetCanEverAffectNavigation
            ((UActorComponent *)(this->ISMPoolDebugDrawComp).field0_0x0.DebugPtr,false);
  ((this->ISMPoolDebugDrawComp).field0_0x0.DebugPtr)->field_0x287 = 0;
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->ISMPoolDebugDrawComp).field0_0x0.DebugPtr,false);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->ISMPoolDebugDrawComp).field0_0x0.DebugPtr,
             (USceneComponent *)(this->ISMPoolComp).field0_0x0.DebugPtr,(FName)0x0);
  return this;
}

// ~AISMPoolActor @ 14633af30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AISMPoolActor::~AISMPoolActor(AISMPoolActor *this)

{
  this->_padding_ = (longlong)&___7AISMPoolActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14633ff30

UClass * __cdecl AISMPoolActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AISMPoolActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolActor",
               &Z_Registration_Info_UClass_AISMPoolActor.InnerSingleton,
               StaticRegisterNativesAISMPoolActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AISMPoolActor>,
               InternalVTableHelperCtorCaller<AISMPoolActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AISMPoolActor.InnerSingleton;
}

// StaticRegisterNativesAISMPoolActor @ 146342920

void __cdecl AISMPoolActor::StaticRegisterNativesAISMPoolActor(void)

{
  return;
}

