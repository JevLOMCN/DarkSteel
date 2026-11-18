// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d5e4aa0

UClass * __cdecl AGameplayCameraRigActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayCameraRigActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraRigActor",
               &Z_Registration_Info_UClass_AGameplayCameraRigActor.InnerSingleton,
               StaticRegisterNativesAGameplayCameraRigActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGameplayCameraRigActor>,
               InternalVTableHelperCtorCaller<AGameplayCameraRigActor>,local_res8,
               AGameplayCameraActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayCameraRigActor.InnerSingleton;
}

// AGameplayCameraRigActor @ 14d5fb280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayCameraRigActor * __thiscall
AGameplayCameraRigActor::AGameplayCameraRigActor
          (AGameplayCameraRigActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGameplayCameraRigActor__6B_;
  (this->CameraRigComponent).field0_0x0.DebugPtr = (UGameplayCameraRigComponent *)0x0;
  return this;
}

// AGameplayCameraRigActor @ 14d5fb2c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayCameraRigActor * __thiscall
AGameplayCameraRigActor::AGameplayCameraRigActor
          (AGameplayCameraRigActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UGameplayCameraRigComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGameplayCameraRigActor__6B_;
  (this->CameraRigComponent).field0_0x0.DebugPtr = (UGameplayCameraRigComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"CameraRigComponent");
  FVar1 = *pFVar2;
  pUVar3 = UGameplayCameraRigComponent::StaticClass();
  pUVar4 = (UGameplayCameraRigComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGameplayCameraRigComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->CameraRigComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGameplayCameraRigComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->CameraRigComponent).field0_0x0;
  return this;
}

// ~AGameplayCameraRigActor @ 14d600150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameplayCameraRigActor::~AGameplayCameraRigActor(AGameplayCameraRigActor *this)

{
  this->_padding_ = (longlong)&___7AGameplayCameraActorBase__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetCameraComponentBase @ 14d6193e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UGameplayCameraComponentBase * __thiscall
AGameplayCameraRigActor::GetCameraComponentBase(AGameplayCameraRigActor *this)

{
  return (UGameplayCameraComponentBase *)(this->CameraRigComponent).field0_0x0.DebugPtr;
}

// GetDefaultAttachComponent @ 14d619ff0

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
AGameplayCameraRigActor::GetDefaultAttachComponent(AGameplayCameraRigActor *this)

{
  return (USceneComponent *)(this->CameraRigComponent).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14d61b6a0

UClass * __cdecl AGameplayCameraRigActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayCameraRigActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraRigActor",
               &Z_Registration_Info_UClass_AGameplayCameraRigActor.InnerSingleton,
               StaticRegisterNativesAGameplayCameraRigActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGameplayCameraRigActor>,
               InternalVTableHelperCtorCaller<AGameplayCameraRigActor>,local_res8,
               AGameplayCameraActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayCameraRigActor.InnerSingleton;
}

// StaticRegisterNativesAGameplayCameraRigActor @ 14d639010

void __cdecl AGameplayCameraRigActor::StaticRegisterNativesAGameplayCameraRigActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AGameplayCameraRigActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCameraRigComponent @ 14d6402a0

void __cdecl
AGameplayCameraRigActor::execGetCameraRigComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x18;
  return;
}

