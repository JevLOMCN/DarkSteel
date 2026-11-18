// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472566a0

UClass * __cdecl AAutoRTFMTestActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAutoRTFMTestActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestActor",
               &Z_Registration_Info_UClass_AAutoRTFMTestActor.InnerSingleton,
               StaticRegisterNativesAAutoRTFMTestActor,0x300,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAutoRTFMTestActor>,
               InternalVTableHelperCtorCaller<AAutoRTFMTestActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAutoRTFMTestActor.InnerSingleton;
}

// AAutoRTFMTestActor @ 14725c750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAutoRTFMTestActor * __thiscall
AAutoRTFMTestActor::AAutoRTFMTestActor(AAutoRTFMTestActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->Value = 0x2a;
  this->MyProperty = 0;
  this->_padding_ = (longlong)&___7AAutoRTFMTestActor__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->RWLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->RWAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  return this;
}

// AAutoRTFMTestActor @ 14725c7b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAutoRTFMTestActor * __thiscall
AAutoRTFMTestActor::AAutoRTFMTestActor(AAutoRTFMTestActor *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->Value = 0x2a;
  this->MyProperty = 0;
  this->_padding_ = (longlong)&___7AAutoRTFMTestActor__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->RWLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->RWAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  return this;
}

// ~AAutoRTFMTestActor @ 14725d850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAutoRTFMTestActor::~AAutoRTFMTestActor(AAutoRTFMTestActor *this)

{
  code *pcVar1;
  bool bVar2;
  BOOLEAN BVar3;
  
  this->_padding_ = (longlong)&___7AAutoRTFMTestActor__6B_;
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
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14725fa40

UClass * __cdecl AAutoRTFMTestActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAutoRTFMTestActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestActor",
               &Z_Registration_Info_UClass_AAutoRTFMTestActor.InnerSingleton,
               StaticRegisterNativesAAutoRTFMTestActor,0x300,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAutoRTFMTestActor>,
               InternalVTableHelperCtorCaller<AAutoRTFMTestActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAutoRTFMTestActor.InnerSingleton;
}

// StaticRegisterNativesAAutoRTFMTestActor @ 147260dc0

void __cdecl AAutoRTFMTestActor::StaticRegisterNativesAAutoRTFMTestActor(void)

{
  return;
}

