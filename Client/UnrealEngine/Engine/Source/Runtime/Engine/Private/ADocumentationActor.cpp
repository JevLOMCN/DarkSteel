// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147b2c1b0

UClass * __cdecl ADocumentationActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADocumentationActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DocumentationActor",
               &Z_Registration_Info_UClass_ADocumentationActor.InnerSingleton,
               StaticRegisterNativesADocumentationActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADocumentationActor>,
               InternalVTableHelperCtorCaller<ADocumentationActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADocumentationActor.InnerSingleton;
}

// ADocumentationActor @ 147b38730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADocumentationActor * __thiscall
ADocumentationActor::ADocumentationActor(ADocumentationActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADocumentationActor__6B_;
  return this;
}

// ADocumentationActor @ 147b38760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADocumentationActor * __thiscall
ADocumentationActor::ADocumentationActor(ADocumentationActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADocumentationActor__6B_;
  pFVar2 = ::FName::FName(&local_res8,L"SceneComp");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  return this;
}

// ~ADocumentationActor @ 147b3c9b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADocumentationActor::~ADocumentationActor(ADocumentationActor *this)

{
  this->_padding_ = (longlong)&___7ADocumentationActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetLinkType @ 147b67f90

Type __thiscall ADocumentationActor::GetLinkType(ADocumentationActor *this)

{
  return this->LinkType;
}

// GetPrivateStaticClass @ 147b6b1d0

UClass * __cdecl ADocumentationActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADocumentationActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DocumentationActor",
               &Z_Registration_Info_UClass_ADocumentationActor.InnerSingleton,
               StaticRegisterNativesADocumentationActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADocumentationActor>,
               InternalVTableHelperCtorCaller<ADocumentationActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADocumentationActor.InnerSingleton;
}

// HasValidDocumentLink @ 147b73800

bool __thiscall ADocumentationActor::HasValidDocumentLink(ADocumentationActor *this)

{
  return false;
}

// OpenDocumentLink @ 147b7c190

bool __thiscall ADocumentationActor::OpenDocumentLink(ADocumentationActor *this)

{
  return false;
}

// StaticRegisterNativesADocumentationActor @ 147b8eab0

void __cdecl ADocumentationActor::StaticRegisterNativesADocumentationActor(void)

{
  return;
}

// UpdateLinkType @ 147b90080

void __thiscall ADocumentationActor::UpdateLinkType(ADocumentationActor *this)

{
  this->LinkType = None;
  return;
}

