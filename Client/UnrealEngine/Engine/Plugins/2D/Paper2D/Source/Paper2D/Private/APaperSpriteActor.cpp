// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 6

// StaticClass @ 14acdcaa0

UClass * __cdecl APaperSpriteActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperSpriteActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSpriteActor",
               &Z_Registration_Info_UClass_APaperSpriteActor.InnerSingleton,
               StaticRegisterNativesAPaperSpriteActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APaperSpriteActor>,
               InternalVTableHelperCtorCaller<APaperSpriteActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperSpriteActor.InnerSingleton;
}

// APaperSpriteActor @ 14ace7ab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APaperSpriteActor * __thiscall
APaperSpriteActor::APaperSpriteActor(APaperSpriteActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APaperSpriteActor__6B_;
  (this->RenderComponent).field0_0x0.DebugPtr = (UPaperSpriteComponent *)0x0;
  return this;
}

// APaperSpriteActor @ 14ace7af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APaperSpriteActor * __thiscall
APaperSpriteActor::APaperSpriteActor(APaperSpriteActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPaperSpriteComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APaperSpriteActor__6B_;
  (this->RenderComponent).field0_0x0.DebugPtr = (UPaperSpriteComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"RenderComponent");
  FVar1 = *pFVar2;
  pUVar3 = UPaperSpriteComponent::StaticClass();
  pUVar4 = (UPaperSpriteComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPaperSpriteComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->RenderComponent).field0_0x0.DebugPtr = pUVar4;
  (**(code **)(pUVar4->_padding_ + 0x788))(pUVar4,UCollisionProfile::BlockAll_ProfileName,1);
  *(undefined1 *)((longlong)&((this->RenderComponent).field0_0x0.DebugPtr)->_padding_ + 3) = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->RenderComponent).field0_0x0.DebugPtr, pUVar4 != (UPaperSpriteComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->RenderComponent).field0_0x0;
  return this;
}

// ~APaperSpriteActor @ 14aceb770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APaperSpriteActor::~APaperSpriteActor(APaperSpriteActor *this)

{
  this->_padding_ = (longlong)&___7APaperSpriteActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14acfcc50

UClass * __cdecl APaperSpriteActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperSpriteActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSpriteActor",
               &Z_Registration_Info_UClass_APaperSpriteActor.InnerSingleton,
               StaticRegisterNativesAPaperSpriteActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APaperSpriteActor>,
               InternalVTableHelperCtorCaller<APaperSpriteActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperSpriteActor.InnerSingleton;
}

// StaticRegisterNativesAPaperSpriteActor @ 14ad0df10

void __cdecl APaperSpriteActor::StaticRegisterNativesAPaperSpriteActor(void)

{
  return;
}

