// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145eefdf0

UClass * __cdecl ALandscapeMeshProxyActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeMeshProxyActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeMeshProxyActor",
               &Z_Registration_Info_UClass_ALandscapeMeshProxyActor.InnerSingleton,
               StaticRegisterNativesALandscapeMeshProxyActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeMeshProxyActor>,
               InternalVTableHelperCtorCaller<ALandscapeMeshProxyActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeMeshProxyActor.InnerSingleton;
}

// ALandscapeMeshProxyActor @ 145ef3960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscapeMeshProxyActor * __thiscall
ALandscapeMeshProxyActor::ALandscapeMeshProxyActor
          (ALandscapeMeshProxyActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALandscapeMeshProxyActor__6B_;
  (this->LandscapeMeshProxyComponent).field0_0x0.DebugPtr = (ULandscapeMeshProxyComponent *)0x0;
  return this;
}

// ~ALandscapeMeshProxyActor @ 145ef4100

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALandscapeMeshProxyActor::~ALandscapeMeshProxyActor(ALandscapeMeshProxyActor *this)

{
  this->_padding_ = (longlong)&___7ALandscapeMeshProxyActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5420

UClass * __cdecl ALandscapeMeshProxyActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeMeshProxyActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeMeshProxyActor",
               &Z_Registration_Info_UClass_ALandscapeMeshProxyActor.InnerSingleton,
               StaticRegisterNativesALandscapeMeshProxyActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeMeshProxyActor>,
               InternalVTableHelperCtorCaller<ALandscapeMeshProxyActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeMeshProxyActor.InnerSingleton;
}

// StaticRegisterNativesALandscapeMeshProxyActor @ 145ef5fe0

void __cdecl ALandscapeMeshProxyActor::StaticRegisterNativesALandscapeMeshProxyActor(void)

{
  return;
}

// ALandscapeMeshProxyActor @ 145f01ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscapeMeshProxyActor * __thiscall
ALandscapeMeshProxyActor::ALandscapeMeshProxyActor
          (ALandscapeMeshProxyActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  ULandscapeMeshProxyComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALandscapeMeshProxyActor__6B_;
  (this->LandscapeMeshProxyComponent).field0_0x0.DebugPtr = (ULandscapeMeshProxyComponent *)0x0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  pFVar2 = ::FName::FName(&local_res8,L"LandscapeMeshProxyComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister();
  pUVar4 = (ULandscapeMeshProxyComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (ULandscapeMeshProxyComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->LandscapeMeshProxyComponent).field0_0x0.DebugPtr = pUVar4;
  (**(code **)(pUVar4->_padding_ + 0x788))(pUVar4,UCollisionProfile::NoCollision_ProfileName,1);
  *(undefined1 *)
   ((longlong)&((this->LandscapeMeshProxyComponent).field0_0x0.DebugPtr)->_padding_ + 3) = 0;
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->LandscapeMeshProxyComponent).field0_0x0.DebugPtr,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->LandscapeMeshProxyComponent).field0_0x0.DebugPtr,
     pUVar4 != (ULandscapeMeshProxyComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->LandscapeMeshProxyComponent).field0_0x0;
  return this;
}

