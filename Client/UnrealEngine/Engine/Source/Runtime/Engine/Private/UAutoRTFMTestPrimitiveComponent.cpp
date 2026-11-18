// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147257da0

UClass * __cdecl UAutoRTFMTestPrimitiveComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestPrimitiveComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestPrimitiveComponent",
               &Z_Registration_Info_UClass_UAutoRTFMTestPrimitiveComponent.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestPrimitiveComponent,0x590,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutoRTFMTestPrimitiveComponent>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestPrimitiveComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestPrimitiveComponent.InnerSingleton;
}

// UAutoRTFMTestPrimitiveComponent @ 14725d240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAutoRTFMTestPrimitiveComponent * __thiscall
UAutoRTFMTestPrimitiveComponent::UAutoRTFMTestPrimitiveComponent
          (UAutoRTFMTestPrimitiveComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->Value = 0x2a;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->BodySetup = (UBodySetup *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->RWLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->RWAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  return this;
}

// UAutoRTFMTestPrimitiveComponent @ 14725d2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAutoRTFMTestPrimitiveComponent * __thiscall
UAutoRTFMTestPrimitiveComponent::UAutoRTFMTestPrimitiveComponent
          (UAutoRTFMTestPrimitiveComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->Value = 0x2a;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->BodySetup = (UBodySetup *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->RWLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->RWAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  return this;
}

// ~UAutoRTFMTestPrimitiveComponent @ 14725de40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAutoRTFMTestPrimitiveComponent::~UAutoRTFMTestPrimitiveComponent
          (UAutoRTFMTestPrimitiveComponent *this)

{
  code *pcVar1;
  bool bVar2;
  BOOLEAN BVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  if (this->RWAccessDetector != (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  if (BVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// GetBodySetup @ 14725f950

UBodySetup * __thiscall
UAutoRTFMTestPrimitiveComponent::GetBodySetup(UAutoRTFMTestPrimitiveComponent *this)

{
  return this->BodySetup;
}

// GetPrivateStaticClass @ 147260840

UClass * __cdecl UAutoRTFMTestPrimitiveComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestPrimitiveComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestPrimitiveComponent",
               &Z_Registration_Info_UClass_UAutoRTFMTestPrimitiveComponent.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestPrimitiveComponent,0x590,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutoRTFMTestPrimitiveComponent>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestPrimitiveComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestPrimitiveComponent.InnerSingleton;
}

// StaticRegisterNativesUAutoRTFMTestPrimitiveComponent @ 147260f80

void __cdecl
UAutoRTFMTestPrimitiveComponent::StaticRegisterNativesUAutoRTFMTestPrimitiveComponent(void)

{
  return;
}

