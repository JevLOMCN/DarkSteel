// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 7

// StaticClass @ 14acdd310

UClass * __cdecl APaperCharacter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperCharacter",
               &Z_Registration_Info_UClass_APaperCharacter.InnerSingleton,
               StaticRegisterNativesAPaperCharacter,0x680,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<APaperCharacter>,
               InternalVTableHelperCtorCaller<APaperCharacter>,local_res8,ACharacter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperCharacter.InnerSingleton;
}

// APaperCharacter @ 14ace76c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APaperCharacter * __thiscall
APaperCharacter::APaperCharacter(APaperCharacter *this,FVTableHelper *param_1)

{
  ACharacter::ACharacter((ACharacter *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->Sprite).field0_0x0.DebugPtr = (UPaperFlipbookComponent *)0x0;
  return this;
}

// APaperCharacter @ 14ace7700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APaperCharacter * __thiscall
APaperCharacter::APaperCharacter(APaperCharacter *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  UClass *pUVar3;
  UPaperFlipbookComponent *pUVar4;
  
  FVar2 = ACharacter::MeshComponentName;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,ACharacter::MeshComponentName);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  ACharacter::ACharacter((ACharacter *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->Sprite).field0_0x0.DebugPtr = (UPaperFlipbookComponent *)0x0;
  FVar2 = SpriteComponentName;
  pUVar3 = UPaperFlipbookComponent::StaticClass();
  pUVar4 = (UPaperFlipbookComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar3,pUVar3,false,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar4 == (UPaperFlipbookComponent *)0x0)) {
    (this->Sprite).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UPaperFlipbookComponent *)0x0) {
      return this;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->Sprite).field0_0x0.DebugPtr = pUVar4;
  }
  pbVar1 = (byte *)((longlong)&pUVar4->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  pbVar1 = (byte *)((longlong)&((this->Sprite).field0_0x0.DebugPtr)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&((this->Sprite).field0_0x0.DebugPtr)->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&((this->Sprite).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 | 4;
  *(undefined1 *)&((this->Sprite).field0_0x0.DebugPtr)->_padding_ = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->Sprite).field0_0x0.DebugPtr,
             (USceneComponent *)this->_padding_,(FName)0x0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&CollisionProfileName,L"CharacterMesh");
    _Init_thread_footer(&::_TSS0);
  }
  pUVar4 = (this->Sprite).field0_0x0.DebugPtr;
  (**(code **)(pUVar4->_padding_ + 0x788))(pUVar4,CollisionProfileName,1);
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->Sprite).field0_0x0.DebugPtr,false);
  return this;
}

// ~APaperCharacter @ 14aceb700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APaperCharacter::~APaperCharacter(APaperCharacter *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  ACharacter::~ACharacter((ACharacter *)this);
  return;
}

// GetPrivateStaticClass @ 14acfca10

UClass * __cdecl APaperCharacter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperCharacter",
               &Z_Registration_Info_UClass_APaperCharacter.InnerSingleton,
               StaticRegisterNativesAPaperCharacter,0x680,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<APaperCharacter>,
               InternalVTableHelperCtorCaller<APaperCharacter>,local_res8,ACharacter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperCharacter.InnerSingleton;
}

// PostInitializeComponents @ 14ad05550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APaperCharacter::PostInitializeComponents(APaperCharacter *this)

{
  UPaperFlipbookComponent *pUVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  
  ACharacter::PostInitializeComponents((ACharacter *)this);
  if (this == (APaperCharacter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
       (pUVar1 = (this->Sprite).field0_0x0.DebugPtr, pUVar1 != (UPaperFlipbookComponent *)0x0)) &&
      ((pUVar1->_padding_ & 0x20000) != 0)) &&
     (pUVar2 = (UObject *)this->_padding_, pUVar2 != (UObject *)0x0)) {
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&pUVar1->_padding_,pUVar2,(FTickFunction *)&pUVar2[1].field_0x10);
    return;
  }
  return;
}

// StaticRegisterNativesAPaperCharacter @ 14ad0dee0

void __cdecl APaperCharacter::StaticRegisterNativesAPaperCharacter(void)

{
  return;
}

