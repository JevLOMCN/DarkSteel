// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d5e2de0

UClass * __cdecl AGameplayCameraActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayCameraActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraActor",
               &Z_Registration_Info_UClass_AGameplayCameraActor.InnerSingleton,
               StaticRegisterNativesAGameplayCameraActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGameplayCameraActor>,
               InternalVTableHelperCtorCaller<AGameplayCameraActor>,local_res8,
               AGameplayCameraActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayCameraActor.InnerSingleton;
}

// AGameplayCameraActor @ 14d5fb120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayCameraActor * __thiscall
AGameplayCameraActor::AGameplayCameraActor(AGameplayCameraActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGameplayCameraActor__6B_;
  (this->CameraComponent).field0_0x0.DebugPtr = (UGameplayCameraComponent *)0x0;
  return this;
}

// AGameplayCameraActor @ 14d5fb160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayCameraActor * __thiscall
AGameplayCameraActor::AGameplayCameraActor(AGameplayCameraActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UGameplayCameraComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGameplayCameraActor__6B_;
  (this->CameraComponent).field0_0x0.DebugPtr = (UGameplayCameraComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"CameraComponent");
  FVar1 = *pFVar2;
  pUVar3 = UGameplayCameraComponent::StaticClass();
  pUVar4 = (UGameplayCameraComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGameplayCameraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->CameraComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGameplayCameraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->CameraComponent).field0_0x0;
  return this;
}

// ~AGameplayCameraActor @ 14d600110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameplayCameraActor::~AGameplayCameraActor(AGameplayCameraActor *this)

{
  this->_padding_ = (longlong)&___7AGameplayCameraActorBase__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetCameraComponentBase @ 14d6193c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UGameplayCameraComponentBase * __thiscall
AGameplayCameraActor::GetCameraComponentBase(AGameplayCameraActor *this)

{
  return (UGameplayCameraComponentBase *)(this->CameraComponent).field0_0x0.DebugPtr;
}

// GetDefaultAttachComponent @ 14d619fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall
AGameplayCameraActor::GetDefaultAttachComponent(AGameplayCameraActor *this)

{
  return (USceneComponent *)(this->CameraComponent).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14d61b520

UClass * __cdecl AGameplayCameraActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayCameraActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraActor",
               &Z_Registration_Info_UClass_AGameplayCameraActor.InnerSingleton,
               StaticRegisterNativesAGameplayCameraActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGameplayCameraActor>,
               InternalVTableHelperCtorCaller<AGameplayCameraActor>,local_res8,
               AGameplayCameraActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayCameraActor.InnerSingleton;
}

// StaticRegisterNativesAGameplayCameraActor @ 14d638fc0

void __cdecl AGameplayCameraActor::StaticRegisterNativesAGameplayCameraActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AGameplayCameraActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCameraComponent @ 14d640270

void __cdecl
AGameplayCameraActor::execGetCameraComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x18;
  return;
}

