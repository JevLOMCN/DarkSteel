// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// IsLevelBoundsRelevant @ 147270490

bool __thiscall AReflectionCapture::IsLevelBoundsRelevant(AReflectionCapture *this)

{
  return false;
}

// StaticClass @ 1472708e0

UClass * __cdecl AReflectionCapture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AReflectionCapture.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReflectionCapture",
               &Z_Registration_Info_UClass_AReflectionCapture.InnerSingleton,
               StaticRegisterNativesAReflectionCapture,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AReflectionCapture>,
               InternalVTableHelperCtorCaller<AReflectionCapture>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AReflectionCapture.InnerSingleton;
}

// AReflectionCapture @ 1473247f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AReflectionCapture * __thiscall
AReflectionCapture::AReflectionCapture(AReflectionCapture *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AReflectionCapture__6B_;
  (this->CaptureComponent).field0_0x0.DebugPtr = (UReflectionCaptureComponent *)0x0;
  return this;
}

// ~AReflectionCapture @ 1473250f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AReflectionCapture::~AReflectionCapture(AReflectionCapture *this)

{
  this->_padding_ = (longlong)&___7AReflectionCapture__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 147326ae0

UClass * __cdecl AReflectionCapture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AReflectionCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReflectionCapture",
               &Z_Registration_Info_UClass_AReflectionCapture.InnerSingleton,
               StaticRegisterNativesAReflectionCapture,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AReflectionCapture>,
               InternalVTableHelperCtorCaller<AReflectionCapture>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AReflectionCapture.InnerSingleton;
}

// StaticRegisterNativesAReflectionCapture @ 147328100

void __cdecl AReflectionCapture::StaticRegisterNativesAReflectionCapture(void)

{
  return;
}

// AReflectionCapture @ 147928a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AReflectionCapture * __thiscall
AReflectionCapture::AReflectionCapture(AReflectionCapture *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UReflectionCaptureComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AReflectionCapture__6B_;
  (this->CaptureComponent).field0_0x0.DebugPtr = (UReflectionCaptureComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"NewReflectionComponent");
  FVar2 = *pFVar3;
  pUVar4 = UReflectionCaptureComponent::StaticClass();
  pUVar5 = (UReflectionCaptureComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UReflectionCaptureComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->CaptureComponent).field0_0x0.DebugPtr = pUVar5;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0x10;
  return this;
}

