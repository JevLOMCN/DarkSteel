// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1476dad40

UClass * __cdecl ACameraShakeSourceActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraShakeSourceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraShakeSourceActor",
               &Z_Registration_Info_UClass_ACameraShakeSourceActor.InnerSingleton,
               StaticRegisterNativesACameraShakeSourceActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACameraShakeSourceActor>,
               InternalVTableHelperCtorCaller<ACameraShakeSourceActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraShakeSourceActor.InnerSingleton;
}

// ACameraShakeSourceActor @ 1476e6840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACameraShakeSourceActor * __thiscall
ACameraShakeSourceActor::ACameraShakeSourceActor
          (ACameraShakeSourceActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ACameraShakeSourceActor__6B_;
  (this->CameraShakeSourceComponent).field0_0x0.DebugPtr = (UCameraShakeSourceComponent *)0x0;
  return this;
}

// ACameraShakeSourceActor @ 1476e6880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACameraShakeSourceActor * __thiscall
ACameraShakeSourceActor::ACameraShakeSourceActor
          (ACameraShakeSourceActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UCameraShakeSourceComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ACameraShakeSourceActor__6B_;
  (this->CameraShakeSourceComponent).field0_0x0.DebugPtr = (UCameraShakeSourceComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"CameraShakeSourceComponent");
  FVar1 = *pFVar2;
  pUVar3 = UCameraShakeSourceComponent::StaticClass();
  pUVar4 = (UCameraShakeSourceComponent *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UCameraShakeSourceComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->CameraShakeSourceComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UCameraShakeSourceComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->CameraShakeSourceComponent).field0_0x0;
  return this;
}

// ~ACameraShakeSourceActor @ 1476e8b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraShakeSourceActor::~ACameraShakeSourceActor(ACameraShakeSourceActor *this)

{
  this->_padding_ = (longlong)&___7ACameraShakeSourceActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 147709cd0

UClass * __cdecl ACameraShakeSourceActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraShakeSourceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraShakeSourceActor",
               &Z_Registration_Info_UClass_ACameraShakeSourceActor.InnerSingleton,
               StaticRegisterNativesACameraShakeSourceActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACameraShakeSourceActor>,
               InternalVTableHelperCtorCaller<ACameraShakeSourceActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraShakeSourceActor.InnerSingleton;
}

// StaticRegisterNativesACameraShakeSourceActor @ 14772bda0

void __cdecl ACameraShakeSourceActor::StaticRegisterNativesACameraShakeSourceActor(void)

{
  return;
}

