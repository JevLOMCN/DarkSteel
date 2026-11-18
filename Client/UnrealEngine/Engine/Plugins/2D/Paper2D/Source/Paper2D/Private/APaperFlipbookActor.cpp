// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 6

// StaticClass @ 14ace18c0

UClass * __cdecl APaperFlipbookActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperFlipbookActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperFlipbookActor",
               &Z_Registration_Info_UClass_APaperFlipbookActor.InnerSingleton,
               StaticRegisterNativesAPaperFlipbookActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APaperFlipbookActor>,
               InternalVTableHelperCtorCaller<APaperFlipbookActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperFlipbookActor.InnerSingleton;
}

// APaperFlipbookActor @ 14ace78b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APaperFlipbookActor * __thiscall
APaperFlipbookActor::APaperFlipbookActor(APaperFlipbookActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APaperFlipbookActor__6B_;
  (this->RenderComponent).field0_0x0.DebugPtr = (UPaperFlipbookComponent *)0x0;
  return this;
}

// APaperFlipbookActor @ 14ace78f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APaperFlipbookActor * __thiscall
APaperFlipbookActor::APaperFlipbookActor(APaperFlipbookActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPaperFlipbookComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APaperFlipbookActor__6B_;
  (this->RenderComponent).field0_0x0.DebugPtr = (UPaperFlipbookComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"RenderComponent");
  FVar1 = *pFVar2;
  pUVar3 = UPaperFlipbookComponent::StaticClass();
  pUVar4 = (UPaperFlipbookComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPaperFlipbookComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->RenderComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPaperFlipbookComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->RenderComponent).field0_0x0;
  return this;
}

// ~APaperFlipbookActor @ 14aceb730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APaperFlipbookActor::~APaperFlipbookActor(APaperFlipbookActor *this)

{
  this->_padding_ = (longlong)&___7APaperFlipbookActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14acfcad0

UClass * __cdecl APaperFlipbookActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperFlipbookActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperFlipbookActor",
               &Z_Registration_Info_UClass_APaperFlipbookActor.InnerSingleton,
               StaticRegisterNativesAPaperFlipbookActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APaperFlipbookActor>,
               InternalVTableHelperCtorCaller<APaperFlipbookActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperFlipbookActor.InnerSingleton;
}

// StaticRegisterNativesAPaperFlipbookActor @ 14ad0def0

void __cdecl APaperFlipbookActor::StaticRegisterNativesAPaperFlipbookActor(void)

{
  return;
}

