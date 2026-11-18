// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 6

// StaticClass @ 14a837d90

UClass * __cdecl AWN_ISKM_ISKMActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISKM_ISKMActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_ISKMActor",
               &Z_Registration_Info_UClass_AWN_ISKM_ISKMActor.InnerSingleton,
               StaticRegisterNativesAWN_ISKM_ISKMActor,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_ISKM_ISKMActor>,
               InternalVTableHelperCtorCaller<AWN_ISKM_ISKMActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISKM_ISKMActor.InnerSingleton;
}

// AWN_ISKM_ISKMActor @ 14a83e640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ISKM_ISKMActor * __thiscall
AWN_ISKM_ISKMActor::AWN_ISKM_ISKMActor(AWN_ISKM_ISKMActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_ISKM_ISKMActor__6B_;
  (this->ISKMComp).field0_0x0.DebugPtr = (UWN_ISKM_ISKMComponent *)0x0;
  (this->Key).SKM = (USkeletalMesh *)0x0;
  (this->Key).Profile = (UWN_ISKM_Profile *)0x0;
  return this;
}

// AWN_ISKM_ISKMActor @ 14a83e680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ISKM_ISKMActor * __thiscall
AWN_ISKM_ISKMActor::AWN_ISKM_ISKMActor(AWN_ISKM_ISKMActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UWN_ISKM_ISKMComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_ISKM_ISKMActor__6B_;
  (this->ISKMComp).field0_0x0.DebugPtr = (UWN_ISKM_ISKMComponent *)0x0;
  (this->Key).SKM = (USkeletalMesh *)0x0;
  (this->Key).Profile = (UWN_ISKM_Profile *)0x0;
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf9;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  pFVar2 = ::FName::FName(&local_res8,"ISKMComp");
  FVar1 = *pFVar2;
  pUVar3 = UWN_ISKM_ISKMComponent::StaticClass();
  pUVar4 = (UWN_ISKM_ISKMComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UWN_ISKM_ISKMComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ISKMComp).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UWN_ISKM_ISKMComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->ISKMComp).field0_0x0;
  return this;
}

// ~AWN_ISKM_ISKMActor @ 14a83fb10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_ISKMActor::~AWN_ISKM_ISKMActor(AWN_ISKM_ISKMActor *this)

{
  this->_padding_ = (longlong)&___7AWN_ISKM_ISKMActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14a84b080

UClass * __cdecl AWN_ISKM_ISKMActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISKM_ISKMActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_ISKMActor",
               &Z_Registration_Info_UClass_AWN_ISKM_ISKMActor.InnerSingleton,
               StaticRegisterNativesAWN_ISKM_ISKMActor,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_ISKM_ISKMActor>,
               InternalVTableHelperCtorCaller<AWN_ISKM_ISKMActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISKM_ISKMActor.InnerSingleton;
}

// StaticRegisterNativesAWN_ISKM_ISKMActor @ 14a855f00

void __cdecl AWN_ISKM_ISKMActor::StaticRegisterNativesAWN_ISKM_ISKMActor(void)

{
  return;
}

