// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 6

// StaticClass @ 1463991a0

UClass * __cdecl AGeometryCollectionISMPoolActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionISMPoolActor",
               &Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.InnerSingleton,
               StaticRegisterNativesAGeometryCollectionISMPoolActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGeometryCollectionISMPoolActor>,
               InternalVTableHelperCtorCaller<AGeometryCollectionISMPoolActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.InnerSingleton;
}

// AGeometryCollectionISMPoolActor @ 1463a0c00

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

AGeometryCollectionISMPoolActor * __thiscall
AGeometryCollectionISMPoolActor::AGeometryCollectionISMPoolActor
          (AGeometryCollectionISMPoolActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGeometryCollectionISMPoolActor__6B_;
  (this->ISMPoolComp).field0_0x0.DebugPtr = (UGeometryCollectionISMPoolComponent *)0x0;
  (this->ISMPoolDebugDrawComp).field0_0x0.DebugPtr =
       (UGeometryCollectionISMPoolDebugDrawComponent *)0x0;
  return this;
}

// AGeometryCollectionISMPoolActor @ 1463a0c40

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

AGeometryCollectionISMPoolActor * __thiscall
AGeometryCollectionISMPoolActor::AGeometryCollectionISMPoolActor
          (AGeometryCollectionISMPoolActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UGeometryCollectionISMPoolComponent *pUVar4;
  UGeometryCollectionISMPoolDebugDrawComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGeometryCollectionISMPoolActor__6B_;
  (this->ISMPoolComp).field0_0x0.DebugPtr = (UGeometryCollectionISMPoolComponent *)0x0;
  (this->ISMPoolDebugDrawComp).field0_0x0.DebugPtr =
       (UGeometryCollectionISMPoolDebugDrawComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"ISMPoolComp");
  FVar1 = *pFVar2;
  pUVar3 = UGeometryCollectionISMPoolComponent::StaticClass();
  pUVar4 = (UGeometryCollectionISMPoolComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGeometryCollectionISMPoolComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ISMPoolComp).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGeometryCollectionISMPoolComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->ISMPoolComp).field0_0x0;
  pFVar2 = ::FName::FName(&local_res8,L"ISMPoolDebug");
  FVar1 = *pFVar2;
  pUVar3 = UGeometryCollectionISMPoolDebugDrawComponent::StaticClass();
  pUVar5 = (UGeometryCollectionISMPoolDebugDrawComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGeometryCollectionISMPoolDebugDrawComponent *)0x0)) {
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

// ~AGeometryCollectionISMPoolActor @ 1463a4ee0

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

void __thiscall
AGeometryCollectionISMPoolActor::~AGeometryCollectionISMPoolActor
          (AGeometryCollectionISMPoolActor *this)

{
  this->_padding_ = (longlong)&___7AGeometryCollectionISMPoolActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1463b7360

UClass * __cdecl AGeometryCollectionISMPoolActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionISMPoolActor",
               &Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.InnerSingleton,
               StaticRegisterNativesAGeometryCollectionISMPoolActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGeometryCollectionISMPoolActor>,
               InternalVTableHelperCtorCaller<AGeometryCollectionISMPoolActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.InnerSingleton;
}

// StaticRegisterNativesAGeometryCollectionISMPoolActor @ 1463c9bb0

void __cdecl
AGeometryCollectionISMPoolActor::StaticRegisterNativesAGeometryCollectionISMPoolActor(void)

{
  return;
}

