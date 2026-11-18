// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 6

// StaticClass @ 14ace0970

UClass * __cdecl APaperGroupedSpriteActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperGroupedSpriteActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperGroupedSpriteActor",
               &Z_Registration_Info_UClass_APaperGroupedSpriteActor.InnerSingleton,
               StaticRegisterNativesAPaperGroupedSpriteActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APaperGroupedSpriteActor>,
               InternalVTableHelperCtorCaller<APaperGroupedSpriteActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperGroupedSpriteActor.InnerSingleton;
}

// APaperGroupedSpriteActor @ 14ace79b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APaperGroupedSpriteActor * __thiscall
APaperGroupedSpriteActor::APaperGroupedSpriteActor
          (APaperGroupedSpriteActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APaperGroupedSpriteActor__6B_;
  (this->RenderComponent).field0_0x0.DebugPtr = (UPaperGroupedSpriteComponent *)0x0;
  return this;
}

// APaperGroupedSpriteActor @ 14ace79f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APaperGroupedSpriteActor * __thiscall
APaperGroupedSpriteActor::APaperGroupedSpriteActor
          (APaperGroupedSpriteActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPaperGroupedSpriteComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APaperGroupedSpriteActor__6B_;
  (this->RenderComponent).field0_0x0.DebugPtr = (UPaperGroupedSpriteComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"RenderComponent");
  FVar1 = *pFVar2;
  pUVar3 = UPaperGroupedSpriteComponent::StaticClass();
  pUVar4 = (UPaperGroupedSpriteComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPaperGroupedSpriteComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->RenderComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPaperGroupedSpriteComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->RenderComponent).field0_0x0;
  return this;
}

// ~APaperGroupedSpriteActor @ 14aceb750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APaperGroupedSpriteActor::~APaperGroupedSpriteActor(APaperGroupedSpriteActor *this)

{
  this->_padding_ = (longlong)&___7APaperGroupedSpriteActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14acfcb90

UClass * __cdecl APaperGroupedSpriteActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperGroupedSpriteActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperGroupedSpriteActor",
               &Z_Registration_Info_UClass_APaperGroupedSpriteActor.InnerSingleton,
               StaticRegisterNativesAPaperGroupedSpriteActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APaperGroupedSpriteActor>,
               InternalVTableHelperCtorCaller<APaperGroupedSpriteActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperGroupedSpriteActor.InnerSingleton;
}

// StaticRegisterNativesAPaperGroupedSpriteActor @ 14ad0df00

void __cdecl APaperGroupedSpriteActor::StaticRegisterNativesAPaperGroupedSpriteActor(void)

{
  return;
}

