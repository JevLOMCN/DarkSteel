// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 147321e20

UClass * __cdecl UReplicationConnectionDriver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationConnectionDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplicationConnectionDriver",
               &Z_Registration_Info_UClass_UReplicationConnectionDriver.InnerSingleton,
               StaticRegisterNativesUReplicationConnectionDriver,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationConnectionDriver>,
               InternalVTableHelperCtorCaller<UReplicationConnectionDriver>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationConnectionDriver.InnerSingleton;
}

// UReplicationConnectionDriver @ 147324d00

UReplicationConnectionDriver * __thiscall
UReplicationConnectionDriver::UReplicationConnectionDriver
          (UReplicationConnectionDriver *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UReplicationConnectionDriver__6B_;
  return this;
}

// UReplicationConnectionDriver @ 147324d30

UReplicationConnectionDriver * __thiscall
UReplicationConnectionDriver::UReplicationConnectionDriver
          (UReplicationConnectionDriver *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UReplicationConnectionDriver__6B_;
  return this;
}

// ~UReplicationConnectionDriver @ 147325420

void __thiscall
UReplicationConnectionDriver::~UReplicationConnectionDriver(UReplicationConnectionDriver *this)

{
  *(undefined ***)this = &___7UReplicationConnectionDriver__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473275e0

UClass * __cdecl UReplicationConnectionDriver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationConnectionDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplicationConnectionDriver",
               &Z_Registration_Info_UClass_UReplicationConnectionDriver.InnerSingleton,
               StaticRegisterNativesUReplicationConnectionDriver,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationConnectionDriver>,
               InternalVTableHelperCtorCaller<UReplicationConnectionDriver>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationConnectionDriver.InnerSingleton;
}

// NotifyActorChannelAdded @ 147327af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReplicationConnectionDriver::NotifyActorChannelAdded
          (UReplicationConnectionDriver *this,AActor *param_1,UActorChannel *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x79,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyActorChannelCleanedUp @ 147327b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReplicationConnectionDriver::NotifyActorChannelCleanedUp
          (UReplicationConnectionDriver *this,UActorChannel *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x7d,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyActorChannelRemoved @ 147327b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReplicationConnectionDriver::NotifyActorChannelRemoved
          (UReplicationConnectionDriver *this,AActor *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x7b,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyAddDestructionInfo @ 147327c40

void __thiscall
UReplicationConnectionDriver::NotifyAddDestructionInfo
          (UReplicationConnectionDriver *this,FActorDestructionInfo *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x7f,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyAddDormantDestructionInfo @ 147327c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReplicationConnectionDriver::NotifyAddDormantDestructionInfo
          (UReplicationConnectionDriver *this,AActor *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x81,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyClientVisibleLevelNamesAdd @ 147327ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UReplicationConnectionDriver::NotifyClientVisibleLevelNamesAdd
          (UReplicationConnectionDriver *this,FName param_1,UWorld *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x87,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyClientVisibleLevelNamesRemove @ 147327cd0

void __thiscall
UReplicationConnectionDriver::NotifyClientVisibleLevelNamesRemove
          (UReplicationConnectionDriver *this,FName param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x89,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyRemoveDestructionInfo @ 147327d30

void __thiscall
UReplicationConnectionDriver::NotifyRemoveDestructionInfo
          (UReplicationConnectionDriver *this,FActorDestructionInfo *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x83,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyResetDestructionInfo @ 147327d60

void __thiscall
UReplicationConnectionDriver::NotifyResetDestructionInfo(UReplicationConnectionDriver *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x85,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUReplicationConnectionDriver @ 1473282e0

void __cdecl UReplicationConnectionDriver::StaticRegisterNativesUReplicationConnectionDriver(void)

{
  return;
}

// TearDown @ 1473283d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UReplicationConnectionDriver::TearDown(UReplicationConnectionDriver *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  uint uVar5;
  
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  if ((((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRooted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                         ,0xb8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_MirroredGarbage);
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  do {
    lVar1 = (pFVar4->field0_0x0).FlagsAndRefCount;
    uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((uVar5 >> 0x15 & 1) != 0) break;
    if (((ulonglong)pFVar4 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar3 = lVar1 == (pFVar4->field0_0x0).FlagsAndRefCount;
    if (bVar3) {
      (pFVar4->field0_0x0).FlagsAndRefCount =
           (longlong)(int)uVar5 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
    }
    UNLOCK();
  } while (!bVar3);
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  FUObjectItem::ClearRootFlags(pFVar4,Async);
  return;
}

