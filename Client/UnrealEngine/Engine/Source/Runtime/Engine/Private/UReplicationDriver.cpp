// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// StaticClass @ 147321cd0

UClass * __cdecl UReplicationDriver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplicationDriver",
               &Z_Registration_Info_UClass_UReplicationDriver.InnerSingleton,
               StaticRegisterNativesUReplicationDriver,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationDriver>,
               InternalVTableHelperCtorCaller<UReplicationDriver>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationDriver.InnerSingleton;
}

// UReplicationDriver @ 147324d60

UReplicationDriver * __thiscall
UReplicationDriver::UReplicationDriver(UReplicationDriver *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UReplicationDriver__6B_;
  return this;
}

// ~UReplicationDriver @ 147325440

void __thiscall UReplicationDriver::~UReplicationDriver(UReplicationDriver *this)

{
  *(undefined ***)this = &___7UReplicationDriver__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddClientConnection @ 147326240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReplicationDriver::AddClientConnection(UReplicationDriver *this,UNetConnection *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x4d,L"Pure virtual not implemented (%s)");
  return;
}

// AddNetworkActor @ 1473263d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReplicationDriver::AddNetworkActor(UReplicationDriver *this,AActor *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x51,L"Pure virtual not implemented (%s)");
  return;
}

// FlushNetDormancy @ 1473266c0

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
UReplicationDriver::FlushNetDormancy(UReplicationDriver *this,AActor *param_1,bool param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x57,L"Pure virtual not implemented (%s)");
  return;
}

// ForceNetUpdate @ 1473266f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReplicationDriver::ForceNetUpdate(UReplicationDriver *this,AActor *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x55,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 147327690

UClass * __cdecl UReplicationDriver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplicationDriver",
               &Z_Registration_Info_UClass_UReplicationDriver.InnerSingleton,
               StaticRegisterNativesUReplicationDriver,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationDriver>,
               InternalVTableHelperCtorCaller<UReplicationDriver>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationDriver.InnerSingleton;
}

// InitForNetDriver @ 147327a40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReplicationDriver::InitForNetDriver(UReplicationDriver *this,UNetDriver *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x44,L"Pure virtual not implemented (%s)");
  return;
}

// InitializeActorsInWorld @ 147327a70

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
UReplicationDriver::InitializeActorsInWorld(UReplicationDriver *this,UWorld *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x47,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyActorDormancyChange @ 147327b80

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
UReplicationDriver::NotifyActorDormancyChange
          (UReplicationDriver *this,AActor *param_1,ENetDormancy param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x5d,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyActorFullyDormantForConnection @ 147327bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReplicationDriver::NotifyActorFullyDormantForConnection
          (UReplicationDriver *this,AActor *param_1,UNetConnection *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x5b,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyActorRenamed @ 147327be0

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
UReplicationDriver::NotifyActorRenamed
          (UReplicationDriver *this,AActor *param_1,UObject *param_2,FName param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,99,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyActorTearOff @ 147327c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReplicationDriver::NotifyActorTearOff(UReplicationDriver *this,AActor *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x59,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyDestructionInfoCreated @ 147327d00

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
UReplicationDriver::NotifyDestructionInfoCreated
          (UReplicationDriver *this,AActor *param_1,FActorDestructionInfo *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x60,L"Pure virtual not implemented (%s)");
  return;
}

// PostTickDispatch @ 147327d90

void __thiscall UReplicationDriver::PostTickDispatch(UReplicationDriver *this)

{
  return;
}

// ProcessRemoteFunction @ 147327da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UReplicationDriver::ProcessRemoteFunction
          (UReplicationDriver *this,AActor *param_1,UFunction *param_2,void *param_3,
          FOutParmRec *param_4,FFrame *param_5,UObject *param_6)

{
  return false;
}

// RemoveClientConnection @ 147327db0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReplicationDriver::RemoveClientConnection(UReplicationDriver *this,UNetConnection *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x4f,L"Pure virtual not implemented (%s)");
  return;
}

// RemoveNetworkActor @ 147327de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReplicationDriver::RemoveNetworkActor(UReplicationDriver *this,AActor *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x53,L"Pure virtual not implemented (%s)");
  return;
}

// ResetGameWorldState @ 147327e20

void __thiscall UReplicationDriver::ResetGameWorldState(UReplicationDriver *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x4b,L"Pure virtual not implemented (%s)");
  return;
}

// ServerReplicateActors @ 147327f70

int __thiscall UReplicationDriver::ServerReplicateActors(UReplicationDriver *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x6b,L"Pure virtual not implemented (%s)");
  return 0;
}

// SetRepDriverWorld @ 147327fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UReplicationDriver::SetRepDriverWorld(UReplicationDriver *this,UWorld *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x41,L"Pure virtual not implemented (%s)");
  return;
}

// SetRoleSwapOnReplicate @ 147327fd0

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
UReplicationDriver::SetRoleSwapOnReplicate(UReplicationDriver *this,AActor *param_1,bool param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\ReplicationDriver.h"
             ,0x65,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUReplicationDriver @ 1473282f0

void __cdecl UReplicationDriver::StaticRegisterNativesUReplicationDriver(void)

{
  return;
}

// TearDown @ 1473283e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UReplicationDriver::TearDown(UReplicationDriver *this)

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

// UReplicationDriver @ 148016da0

UReplicationDriver * __thiscall UReplicationDriver::UReplicationDriver(UReplicationDriver *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UReplicationDriver__6B_;
  return this;
}

// CreateReplicationDriver @ 148029bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UReplicationDriver * __cdecl
UReplicationDriver::CreateReplicationDriver(UNetDriver *param_1,FURL *param_2,UWorld *param_3)

{
  UClass *pUVar1;
  char cVar2;
  bool bVar3;
  TDelegate<UReplicationDriver_*___cdecl(UNetDriver_*,FURL_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  *pTVar4;
  UReplicationDriver *pUVar5;
  wchar_t *pwVar6;
  UPackage *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  FReadAccessScope local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar4 = CreateReplicationDriverDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,&local_d0);
  if (((*(int *)&pTVar4->field_0x10 != 0) && (*(longlong **)&pTVar4->field_0x8 != (longlong *)0x0))
     && (cVar2 = (**(code **)(**(longlong **)&pTVar4->field_0x8 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d0);
    pTVar4 = CreateReplicationDriverDelegate();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,&local_d0);
    if (*(int *)&pTVar4->field_0x10 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)&pTVar4->field_0x8;
    }
    pUVar5 = (UReplicationDriver *)(**(code **)(*plVar10 + 0x60))(plVar10,param_1,param_2,param_3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d0);
    return pUVar5;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_d0);
  if (FirstTime != false) {
    FirstTime = false;
    pwVar6 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar6,L"RepDriverEnable");
    if (bVar3) {
      CVar_RepDriver_Enable = 1;
      goto LAB_148029ccb;
    }
    pwVar6 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar6,L"RepDriverDisable");
    if (bVar3) {
      CVar_RepDriver_Enable = 0;
      return (UReplicationDriver *)0x0;
    }
  }
  if (CVar_RepDriver_Enable == 0) {
    return (UReplicationDriver *)0x0;
  }
LAB_148029ccb:
  if ((param_1 != (UNetDriver *)0x0) &&
     (pUVar1 = (param_1->ReplicationDriverClass).field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    local_d8 = 0;
    pUVar7 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UReplicationDriver_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar1);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = pUVar7;
    pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar10 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
      return (UReplicationDriver *)pUVar9;
    }
    return (UReplicationDriver *)pUVar9;
  }
  if (4 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  return (UReplicationDriver *)0x0;
}

// CreateReplicationDriverDelegate @ 148029dd0

TDelegate<UReplicationDriver_*___cdecl(UNetDriver_*,FURL_const_&,UWorld_*),FDefaultDelegateUserPolicy>
* __cdecl UReplicationDriver::CreateReplicationDriverDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UReplicationDriver::CreateReplicationDriverDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Delegate;
}

