// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 306

// Construct<FBehaviorTreeTemplateInfo> @ 146e78a40

void __cdecl UE::CoreUObject::Private::Construct<FBehaviorTreeTemplateInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FBehaviorTreeTemplateInfo> @ 146e78a60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBehaviorTreeTemplateInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FBehaviorTreeTemplateInfo> @ 146e78a70

void __cdecl UE::CoreUObject::Private::Destruct<FBehaviorTreeTemplateInfo>(void *param_1)

{
  return;
}

// Copy<FBehaviorTreeTemplateInfo> @ 146e78b40

bool __cdecl
UE::CoreUObject::Private::Copy<FBehaviorTreeTemplateInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(puVar1 + 2);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSequentialIDBase> @ 146e78bf0

void __cdecl UE::CoreUObject::Private::Construct<FSequentialIDBase>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FSequentialIDBase> @ 146e78c00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSequentialIDBase>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FSequentialIDBase> @ 146e78c50

void __cdecl UE::CoreUObject::Private::Destruct<FSequentialIDBase>(void *param_1)

{
  return;
}

// Copy<FSequentialIDBase> @ 146e78c60

bool __cdecl
UE::CoreUObject::Private::Copy<FSequentialIDBase>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FSequentialIDBase> @ 146e78c90

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FSequentialIDBase>(void *param_1)

{
  return *(uint *)param_1;
}

// Construct<FCompactIndexedHandleBase> @ 146e79070

void __cdecl UE::CoreUObject::Private::Construct<FCompactIndexedHandleBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FCompactIndexedHandleBase> @ 146e790c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompactIndexedHandleBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffff;
  return;
}

// Destruct<FCompactIndexedHandleBase> @ 146e790d0

void __cdecl UE::CoreUObject::Private::Destruct<FCompactIndexedHandleBase>(void *param_1)

{
  return;
}

// Copy<FCompactIndexedHandleBase> @ 146e79120

bool __cdecl
UE::CoreUObject::Private::Copy<FCompactIndexedHandleBase>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FCompactIndexedHandleBase> @ 146e791d0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FCompactIndexedHandleBase>(void *param_1)

{
  return CONCAT22(*(undefined2 *)param_1,*(undefined2 *)((longlong)param_1 + 2));
}

// Construct<FIntervalCountdown> @ 146e79230

void __cdecl UE::CoreUObject::Private::Construct<FIntervalCountdown>(void *param_1)

{
  *(undefined4 *)param_1 = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FIntervalCountdown> @ 146e79250

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIntervalCountdown>(void *param_1)

{
  *(undefined4 *)param_1 = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FIntervalCountdown> @ 146e79270

void __cdecl UE::CoreUObject::Private::Destruct<FIntervalCountdown>(void *param_1)

{
  return;
}

// Copy<FIntervalCountdown> @ 146e792c0

bool __cdecl
UE::CoreUObject::Private::Copy<FIntervalCountdown>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIndexedHandleBase> @ 146e79600

void __cdecl UE::CoreUObject::Private::Construct<FIndexedHandleBase>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FIndexedHandleBase> @ 146e79620

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIndexedHandleBase>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FIndexedHandleBase> @ 146e79640

void __cdecl UE::CoreUObject::Private::Destruct<FIndexedHandleBase>(void *param_1)

{
  return;
}

// Copy<FIndexedHandleBase> @ 146e796d0

bool __cdecl
UE::CoreUObject::Private::Copy<FIndexedHandleBase>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FIndexedHandleBase> @ 146e797d0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FIndexedHandleBase>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((longlong)param_1 + 4);
  uVar3 = *(int *)param_1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  return (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}

// Construct<FAIMoveRequest> @ 146e79870

void __cdecl UE::CoreUObject::Private::Construct<FAIMoveRequest>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&uStackX_8);
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) & 0xfffffb5c | 0x35c;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(float *)((longlong)param_1 + 0x2c) = UPathFollowingComponent::DefaultAcceptanceRadius;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FAIMoveRequest> @ 146e79880

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIMoveRequest>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&uStackX_8);
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) & 0xfffffb5c | 0x35c;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(float *)((longlong)param_1 + 0x2c) = UPathFollowingComponent::DefaultAcceptanceRadius;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FAIMoveRequest> @ 146e79890

void __cdecl UE::CoreUObject::Private::Destruct<FAIMoveRequest>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40));
  return;
}

// Copy<FAIMoveRequest> @ 146e79920

bool __cdecl UE::CoreUObject::Private::Copy<FAIMoveRequest>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)((longlong)param_1 + lVar6);
      uVar3 = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x20) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x20));
      }
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
      uVar5 = (*(uint *)((longlong)param_1 + 0x28) ^ *(uint *)((longlong)param_2 + 0x28)) & 1 ^
              *(uint *)((longlong)param_1 + 0x28);
      *(uint *)((longlong)param_1 + 0x28) = uVar5;
      uVar5 = (uVar5 ^ *(uint *)((longlong)param_2 + 0x28)) & 2 ^ uVar5;
      *(uint *)((longlong)param_1 + 0x28) = uVar5;
      uVar5 = (uVar5 ^ *(uint *)((longlong)param_2 + 0x28)) & 4 ^ uVar5;
      *(uint *)((longlong)param_1 + 0x28) = uVar5;
      uVar5 = (uVar5 ^ *(uint *)((longlong)param_2 + 0x28)) & 8 ^ uVar5;
      *(uint *)((longlong)param_1 + 0x28) = uVar5;
      uVar5 = (uVar5 ^ *(uint *)((longlong)param_2 + 0x28)) & 0x10 ^ uVar5;
      *(uint *)((longlong)param_1 + 0x28) = uVar5;
      uVar5 = (uVar5 ^ *(uint *)((longlong)param_2 + 0x28)) & 0x20 ^ uVar5;
      *(uint *)((longlong)param_1 + 0x28) = uVar5;
      uVar5 = (uVar5 ^ *(uint *)((longlong)param_2 + 0x28)) & 0x40 ^ uVar5;
      *(uint *)((longlong)param_1 + 0x28) = uVar5;
      uVar5 = (uVar5 ^ *(uint *)((longlong)param_2 + 0x28)) & 0x80 ^ uVar5;
      *(uint *)((longlong)param_1 + 0x28) = uVar5;
      uVar5 = (uVar5 ^ *(uint *)((longlong)param_2 + 0x28)) & 0x100 ^ uVar5;
      *(uint *)((longlong)param_1 + 0x28) = uVar5;
      uVar5 = (uVar5 ^ *(uint *)((longlong)param_2 + 0x28)) & 0x200 ^ uVar5;
      *(uint *)((longlong)param_1 + 0x28) = uVar5;
      *(uint *)((longlong)param_1 + 0x28) =
           (uVar5 ^ *(uint *)((longlong)param_2 + 0x28)) & 0x400 ^ uVar5;
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
      lVar2 = *(longlong *)((longlong)param_2 + 0x40);
      uVar3 = *(undefined8 *)((longlong)param_2 + 0x38);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar3;
      *(longlong *)((longlong)param_1 + 0x40) = lVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      puVar1 = (undefined4 *)((longlong)param_2 + 0x48);
      param_2 = (void *)((longlong)param_2 + 0x50);
      *(undefined4 *)((longlong)param_1 + 0x48) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSimpleIndexedHandleBase> @ 146e79ca0

void __cdecl UE::CoreUObject::Private::Construct<FSimpleIndexedHandleBase>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FSimpleIndexedHandleBase> @ 146e79cb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSimpleIndexedHandleBase>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FSimpleIndexedHandleBase> @ 146e79d00

void __cdecl UE::CoreUObject::Private::Destruct<FSimpleIndexedHandleBase>(void *param_1)

{
  return;
}

// Copy<FSimpleIndexedHandleBase> @ 146e79e10

bool __cdecl
UE::CoreUObject::Private::Copy<FSimpleIndexedHandleBase>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAIRequestID> @ 146e79e80

void __cdecl UE::CoreUObject::Private::Construct<FAIRequestID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FAIRequestID> @ 146e79e90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIRequestID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FAIRequestID> @ 146e79ea0

void __cdecl UE::CoreUObject::Private::Destruct<FAIRequestID>(void *param_1)

{
  return;
}

// GetStructTypeHash<FSimpleIndexedHandleBase> @ 146e79eb0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FSimpleIndexedHandleBase>(void *param_1)

{
  return *(uint *)param_1;
}

// Copy<FAIRequestID> @ 146e79f00

bool __cdecl UE::CoreUObject::Private::Copy<FAIRequestID>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGenericTeamId> @ 146e7a180

void __cdecl UE::CoreUObject::Private::Construct<FGenericTeamId>(void *param_1)

{
  *(undefined1 *)param_1 = 0xff;
  return;
}

// ConstructForTests<FGenericTeamId> @ 146e7a190

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGenericTeamId>(void *param_1)

{
  *(undefined1 *)param_1 = 0xff;
  return;
}

// Destruct<FGenericTeamId> @ 146e7a1a0

void __cdecl UE::CoreUObject::Private::Destruct<FGenericTeamId>(void *param_1)

{
  return;
}

// Copy<FGenericTeamId> @ 146e7a1b0

bool __cdecl UE::CoreUObject::Private::Copy<FGenericTeamId>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FGenericTeamId> @ 146e7a1e0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FGenericTeamId>(void *param_1)

{
  return (uint)*(byte *)param_1;
}

// Decay<TObjectPtr<UBlackboardComponent>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UBlackboardComponent>_>,UBlackboardComponent_*> @ 146e7bed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBlackboardComponent ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UBlackboardComponent>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UBlackboardComponent>_>,UBlackboardComponent_*>
          (TObjectPtr<UBlackboardComponent> *param_1)

{
  return (UBlackboardComponent **)param_1;
}

// DereferenceIfNecessary<AAIController,AAIController_*_&> @ 146e7bfa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AAIController * __cdecl
UE::Core::Private::DereferenceIfNecessary<AAIController,AAIController_*_&>(AAIController **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAISystem,UAISystem_*_&> @ 146e7bfc0

UAISystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAISystem,UAISystem_*_&>(UAISystem **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBTTaskNode,UBTTaskNode_*_&> @ 146e7bfe0

UBTTaskNode * __cdecl
UE::Core::Private::DereferenceIfNecessary<UBTTaskNode,UBTTaskNode_*_&>(UBTTaskNode **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>_> @ 146e7f240

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>_>
          (ushort param_1,
          ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// Copy<FValueOrBBKey_Rotator> @ 146ea77e0

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_Rotator>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_Rotator> @ 146ea7870

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_Rotator>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FArchive *pFVar3;
  FName FVar4;
  FSlotBase local_res8;
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar4) {
    local_res8.StructuredArchive = (FStructuredArchive *)param_2;
    pFVar3 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    UE::Math::operator<<(pFVar3,(TRotator<double> *)((longlong)param_3 + 0x10));
    return true;
  }
  return false;
}

// Construct<FBlackboardEntry> @ 146ea7bc0

void __cdecl UE::CoreUObject::Private::Construct<FBlackboardEntry>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FBlackboardEntry> @ 146ea7be0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBlackboardEntry>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FBlackboardEntry> @ 146ea7c00

void __cdecl UE::CoreUObject::Private::Destruct<FBlackboardEntry>(void *param_1)

{
  return;
}

// Copy<FBlackboardEntry> @ 146ea7c60

bool __cdecl
UE::CoreUObject::Private::Copy<FBlackboardEntry>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      *(uint *)((longlong)param_1 + 0x10) =
           *(uint *)((longlong)param_1 + 0x10) ^
           (*(uint *)((longlong)param_1 + 0x10) ^ *(uint *)((longlong)param_1 + lVar2 + 0x10)) & 1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FValueOrBBKey_Object> @ 146ea8100

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_Object>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  *(UClass **)((longlong)param_1 + 0x18) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
    return;
  }
  return;
}

// ConstructForTests<FValueOrBBKey_Object> @ 146ea8160

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_Object>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  *(UClass **)((longlong)param_1 + 0x18) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
    return;
  }
  return;
}

// Destruct<FValueOrBBKey_Object> @ 146ea81b0

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_Object>(void *param_1)

{
  return;
}

// Copy<FValueOrBBKey_Object> @ 146ea82c0

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_Object>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x10), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x18), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_Object> @ 146ea83c0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_Object>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res8 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x150))
              (*(longlong **)(*(longlong *)param_2 + 8),(longlong)param_3 + 0x10);
    return true;
  }
  return false;
}

// Construct<FValueOrBBKey_String> @ 146ea8b10

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_String>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FValueOrBBKey_String> @ 146ea8c30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_String>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FValueOrBBKey_String> @ 146ea8c50

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_String>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FValueOrBBKey_String> @ 146ea8c90

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_String>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar1 + 8);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_1 + lVar1 + 0x10)
                );
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_String> @ 146ea8dc0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_String>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res8 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),(FString *)((longlong)param_3 + 0x10));
    return true;
  }
  return false;
}

// Construct<FValueOrBBKey_Name> @ 146ea9740

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_Name>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FValueOrBBKey_Name> @ 146ea9760

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_Name>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FValueOrBBKey_Name> @ 146ea9780

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_Name>(void *param_1)

{
  return;
}

// Copy<FValueOrBBKey_Name> @ 146ea9860

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_Name>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_Name> @ 146ea9960

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_Name>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res8 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),(longlong)param_3 + 0xc);
    return true;
  }
  return false;
}

// Construct<FBlackboardKeySelector> @ 146ea9a50

void __cdecl UE::CoreUObject::Private::Construct<FBlackboardKeySelector>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffff;
  return;
}

// ConstructForTests<FBlackboardKeySelector> @ 146ea9b80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBlackboardKeySelector>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffff;
  return;
}

// Destruct<FBlackboardKeySelector> @ 146ea9d30

void __cdecl UE::CoreUObject::Private::Destruct<FBlackboardKeySelector>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FBlackboardKeySelector> @ 146ea9d90

bool __cdecl
UE::CoreUObject::Private::Copy<FBlackboardKeySelector>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType *pFVar8;
  
  if (param_3 != 0) {
    pFVar8 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar8);
      if (pFVar8 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        pFVar7 = pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar8,iVar4,piVar1);
          ConstructItems<TObjectPtr<UBlackboardKeyType>,TObjectPtr<UBlackboardKeyType>,int>
                    (pFVar8->Data,(TObjectPtr<UBlackboardKeyType> *)pFVar7,iVar4);
        }
      }
      pFVar8[2].Data = pFVar3[2].Data;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar3[3].Data != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar3[3].Data);
      }
      pFVar8[3].Data = pFVar3[3].Data;
      uVar6 = *(uint *)((longlong)&pFVar8[4].Data + 4);
      *(undefined4 *)&pFVar8[4].Data = *(undefined4 *)&pFVar3[4].Data;
      puVar2 = (uint *)((longlong)&pFVar8[4].Data + 4);
      *puVar2 = *puVar2 ^ (uVar6 ^ *(uint *)((longlong)&pFVar3[4].Data + 4)) & 1;
      param_3 = param_3 + -1;
      pFVar8 = pFVar8 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FValueOrBBKey_Int32> @ 146eaa7c0

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_Int32>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FValueOrBBKey_Int32> @ 146eaa7e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_Int32>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FValueOrBBKey_Int32> @ 146eaa800

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_Int32>(void *param_1)

{
  return;
}

// Copy<FValueOrBBKey_Int32> @ 146eaa850

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_Int32>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_Int32> @ 146eaa880

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_Int32>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  uint *puVar1;
  FName FVar2;
  FArchive *this;
  uint *puVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar5;
  FName FVar6;
  undefined1 local_res8 [8];
  
  FVar2 = param_1->Type;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if ((FVar2 != FVar6) &&
     (FVar2 = param_1->Type, FVar4 = FNameEntryId::FromValidEName((EName)local_res8),
     FVar5.Number = 0, FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value),
     FVar2 != FVar5)) {
    return false;
  }
  puVar1 = (uint *)((longlong)param_3 + 0xc);
  this = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar3 = (uint *)**(undefined8 **)&this->field_0x8;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar3 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  return true;
}

// Construct<FValueOrBBKey_Float> @ 146eaac20

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_Float>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FValueOrBBKey_Float> @ 146eaac40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_Float>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FValueOrBBKey_Float> @ 146eaac60

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_Float>(void *param_1)

{
  return;
}

// Copy<FValueOrBBKey_Float> @ 146eaac70

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_Float>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_Float> @ 146eaae20

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_Float>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  uint *puVar1;
  FName FVar2;
  FArchive *this;
  uint *puVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FName FVar5;
  undefined1 local_res8 [8];
  
  FVar2 = param_1->Type;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (FVar2 != FVar5) {
    return false;
  }
  puVar1 = (uint *)((longlong)param_3 + 0xc);
  this = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar3 = (uint *)**(undefined8 **)&this->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&this->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return true;
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,puVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this,puVar1);
  return true;
}

// Construct<FValueOrBBKey_Enum> @ 146eab280

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_Enum>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  ::FString::FString((FString *)((longlong)param_1 + 0x18),L"");
  return;
}

// ConstructForTests<FValueOrBBKey_Enum> @ 146eab2b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_Enum>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x18),L"");
  return;
}

// Destruct<FValueOrBBKey_Enum> @ 146eab2e0

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_Enum>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FValueOrBBKey_Enum> @ 146eab480

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_Enum>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
    }
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    param_2 = (void *)((longlong)param_2 + 0x28);
    param_1 = (undefined8 *)((longlong)param_1 + 0x28);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_Enum> @ 146eab530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_Enum>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  int iVar3;
  FPropertyTypeName FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FString *pFVar5;
  size_t sVar6;
  UClass *pUVar7;
  UEnum *this;
  long64 lVar8;
  FName FVar9;
  FName FVar10;
  FPropertyTypeName local_res8 [2];
  FName local_res10;
  FName local_res20;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar10.Number = 0;
  FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if ((FVar1 != FVar10) &&
     (FVar1 = param_1->Type, FVar2 = FNameEntryId::FromValidEName((EName)local_res8),
     FVar9.Number = 0, FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar2.Value),
     FVar1 != FVar9)) {
    return false;
  }
  local_res8[0].Index = (param_1->TypeName).Index;
  iVar3 = FPropertyTypeName::GetParameterCount(local_res8);
  if (iVar3 < 1) {
    return false;
  }
  local_res8[0].Index = (param_1->TypeName).Index;
  FVar4 = FPropertyTypeName::GetParameter(local_res8,(int)&local_res10);
  FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_01,FVar4.Index));
  pFVar5 = ::FName::ToString(&local_res20,&local_28);
  local_38.Size = 0;
  if ((pFVar5->Data).ArrayNum == 0) {
    local_38.DataPtr = L"";
  }
  else {
    local_38.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_38.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_146eab5fa;
  }
  sVar6 = wcslen(local_38.DataPtr);
  local_38.Size = (int)sVar6;
LAB_146eab5fa:
  pUVar7 = Z_Construct_UClass_UEnum_NoRegister();
  this = (UEnum *)StaticFindFirstObject(pUVar7,&local_38,NativeFirst,NoLogging,(wchar_t *)0x0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (this == (UEnum *)0x0) {
    return false;
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
            (*(longlong **)(*(longlong *)param_2 + 8),&local_res10);
  lVar8 = UEnum::GetValueByName(this,local_res10,None);
  *(char *)((longlong)param_3 + 0xc) = (char)lVar8;
  return true;
}

// Construct<FValueOrBBKey_Class> @ 146eabac0

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_Class>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  *(UClass **)((longlong)param_1 + 0x18) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
    return;
  }
  return;
}

// ConstructForTests<FValueOrBBKey_Class> @ 146eabb20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_Class>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  *(UClass **)((longlong)param_1 + 0x18) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
    return;
  }
  return;
}

// Destruct<FValueOrBBKey_Class> @ 146eabb70

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_Class>(void *param_1)

{
  return;
}

// Copy<FValueOrBBKey_Class> @ 146eabb80

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_Class>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x10), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x18), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_Class> @ 146eabc40

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_Class>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res8 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x150))
              (*(longlong **)(*(longlong *)param_2 + 8),(longlong)param_3 + 0x10);
    return true;
  }
  return false;
}

// Construct<FValueOrBBKey_Bool> @ 146eabf50

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_Bool>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FValueOrBBKey_Bool> @ 146eabf70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_Bool>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FValueOrBBKey_Bool> @ 146eabf90

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_Bool>(void *param_1)

{
  return;
}

// Copy<FValueOrBBKey_Bool> @ 146eac060

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_Bool>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_Bool> @ 146eac090

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_Bool>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res8 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    *(bool *)((longlong)param_3 + 0xc) = param_1->BoolVal != '\0';
    return true;
  }
  return false;
}

// Construct<FValueOrBlackboardKeyBase> @ 146eac750

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBlackboardKeyBase>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FValueOrBlackboardKeyBase> @ 146eac770

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBlackboardKeyBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  return;
}

// Destruct<FValueOrBlackboardKeyBase> @ 146eac850

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBlackboardKeyBase>(void *param_1)

{
  return;
}

// Copy<FValueOrBlackboardKeyBase> @ 146eac8e0

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBlackboardKeyBase>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FValueOrBBKey_Struct> @ 146eaf010

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_Struct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// ConstructForTests<FValueOrBBKey_Struct> @ 146eaf030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_Struct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// Destruct<FValueOrBBKey_Struct> @ 146eaf050

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_Struct>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FValueOrBBKey_Struct> @ 146eaf060

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_Struct>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (FInstancedStruct *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar2 + 8);
      if ((FInstancedStruct *)((longlong)param_1 + 0x10) != pFVar1) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)((longlong)param_1 + 0x10),
                   (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                   *(uchar **)((longlong)param_1 + lVar2 + 0x18));
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_Struct> @ 146eaf260

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_Struct>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FValueOrBBKey_Struct::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// Construct<FBTCompositeChild> @ 146eafba0

void __cdecl UE::CoreUObject::Private::Construct<FBTCompositeChild>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FBTCompositeChild> @ 146eafbc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBTCompositeChild>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FBTCompositeChild> @ 146eafbe0

void __cdecl UE::CoreUObject::Private::Destruct<FBTCompositeChild>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FBTCompositeChild> @ 146eafca0

bool __cdecl
UE::CoreUObject::Private::Copy<FBTCompositeChild>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar6 = *puVar3;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[1]);
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 2);
      puVar6[1] = puVar3[1];
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 2)) {
        iVar4 = *(int *)(puVar3 + 3);
        piVar2 = (int *)((longlong)puVar6 + 0x1c);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 2))->Data;
        *(int *)(puVar6 + 3) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TObjectPtr<UBTDecorator>,TObjectPtr<UBTDecorator>,int>
                    (pFVar1->Data,(TObjectPtr<UBTDecorator> *)pFVar5,iVar4);
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 4);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 4)) {
        iVar4 = *(int *)(puVar3 + 5);
        piVar2 = (int *)((longlong)puVar6 + 0x2c);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 4))->Data;
        *(int *)(puVar6 + 5) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,pFVar5,(longlong)iVar4 << 2);
          }
        }
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FValueOrBBKey_Vector> @ 146eb0120

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_Vector>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar3;
  return;
}

// ConstructForTests<FValueOrBBKey_Vector> @ 146eb0150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_Vector>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar3;
  return;
}

// Destruct<FValueOrBBKey_Vector> @ 146eb0180

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_Vector>(void *param_1)

{
  return;
}

// Copy<FValueOrBBKey_Vector> @ 146eb01d0

bool __cdecl
UE::CoreUObject::Private::Copy<FValueOrBBKey_Vector>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FValueOrBBKey_Vector> @ 146eb02d0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FValueOrBBKey_Vector>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res8 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    UE::Math::operator<<(param_2,(TVector<double> *)((longlong)param_3 + 0x10));
    return true;
  }
  return false;
}

// Construct<FBTDecoratorLogic> @ 146eb0480

void __cdecl UE::CoreUObject::Private::Construct<FBTDecoratorLogic>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 2) = 0;
  return;
}

// ConstructForTests<FBTDecoratorLogic> @ 146eb0490

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBTDecoratorLogic>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 2) = 0;
  return;
}

// Destruct<FBTDecoratorLogic> @ 146eb04a0

void __cdecl UE::CoreUObject::Private::Destruct<FBTDecoratorLogic>(void *param_1)

{
  return;
}

// Copy<FBTDecoratorLogic> @ 146eb04f0

bool __cdecl
UE::CoreUObject::Private::Copy<FBTDecoratorLogic>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FValueOrBBKey_Rotator> @ 146eb0a70

void __cdecl UE::CoreUObject::Private::Construct<FValueOrBBKey_Rotator>(void *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(undefined8 *)param_1 = 0;
  *(double *)((longlong)param_1 + 0x10) = dVar1;
  *(double *)((longlong)param_1 + 0x18) = dVar2;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(double *)((longlong)param_1 + 0x20) = dVar3;
  return;
}

// ConstructForTests<FValueOrBBKey_Rotator> @ 146eb0b60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FValueOrBBKey_Rotator>(void *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(undefined8 *)param_1 = 0;
  *(double *)((longlong)param_1 + 0x10) = dVar1;
  *(double *)((longlong)param_1 + 0x18) = dVar2;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(double *)((longlong)param_1 + 0x20) = dVar3;
  return;
}

// Destruct<FValueOrBBKey_Rotator> @ 146eb0b90

void __cdecl UE::CoreUObject::Private::Destruct<FValueOrBBKey_Rotator>(void *param_1)

{
  return;
}

// CreateFilter<UBlackboardKeyType_Bool> @ 146eb1f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_Bool_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_Bool>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_Bool::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_Bool::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_Bool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_Bool_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_Class> @ 146eb20b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_Class_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_Class>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_Class::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_Class::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_Class::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_Class_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_Enum> @ 146eb2260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_Enum_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_Enum>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_Enum::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_Enum::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_Enum::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_Enum_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_Float> @ 146eb2410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_Float_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_Float>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_Float::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_Float::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_Float::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_Float_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_Int> @ 146eb25c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_Int_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_Int>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_Int::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_Int::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_Int::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_Int_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_Name> @ 146eb2770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_Name_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_Name>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_Name::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_Name::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_Name::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_Name_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_NativeEnum> @ 146eb2920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_NativeEnum_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_NativeEnum>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_NativeEnum::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_NativeEnum::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_NativeEnum::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_NativeEnum_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_Object> @ 146eb2ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_Object_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_Object>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_Object::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_Object::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_Object::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_Object_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_Rotator> @ 146eb2c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_Rotator_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_Rotator>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_Rotator::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_Rotator::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_Rotator::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_Rotator_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_String> @ 146eb2e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_String_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_String>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_String::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_String::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_String::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_String_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_Struct> @ 146eb2fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_Struct_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_Struct>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_Struct::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_Struct::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_Struct::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_Struct_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateFilter<UBlackboardKeyType_Vector> @ 146eb3190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TNotNull<UBlackboardKeyType_Vector_*> __cdecl
UE::BlackboardKeySelector::CreateFilter<UBlackboardKeyType_Vector>(FName param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UPackage *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar1 = UBlackboardKeyType_Vector::StaticClass();
  local_f8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_f8,&local_e0);
  ::FName::ToString(&local_res10,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  FVar4 = *pFVar2;
  FVar3 = (FName)UBlackboardKeyType_Vector::StaticClass();
  pUVar1 = (UClass *)GetTransientPackage();
  local_108 = 0;
  FVar4 = MakeUniqueObjectName((UObject *)local_c8,pUVar1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  pUVar5 = GetTransientPackage();
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlackboardKeyType_Vector::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar5;
  local_a8._16_8_ = FVar4;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(UObject **)param_1 = pUVar6;
  if (pUVar6 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    return (TNotNull<UBlackboardKeyType_Vector_*>)param_1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// DereferenceIfNecessary<UBTDecorator_BlackboardBase,UBTDecorator_BlackboardBase_*_&> @ 146eb3340

UBTDecorator_BlackboardBase * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UBTDecorator_BlackboardBase,UBTDecorator_BlackboardBase_*_&>
          (UBTDecorator_BlackboardBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBTDecorator_BlueprintBase,UBTDecorator_BlueprintBase_*_&> @ 146eb3360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBTDecorator_BlueprintBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UBTDecorator_BlueprintBase,UBTDecorator_BlueprintBase_*_&>
          (UBTDecorator_BlueprintBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBTDecorator_CompareBBEntries,UBTDecorator_CompareBBEntries_*_&> @ 146eb3380

UBTDecorator_CompareBBEntries * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UBTDecorator_CompareBBEntries,UBTDecorator_CompareBBEntries_*_&>
          (UBTDecorator_CompareBBEntries **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBTService_DefaultFocus,UBTService_DefaultFocus_*_&> @ 146eb33a0

UBTService_DefaultFocus * __cdecl
UE::Core::Private::DereferenceIfNecessary<UBTService_DefaultFocus,UBTService_DefaultFocus_*_&>
          (UBTService_DefaultFocus **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBTService_RunEQS,UBTService_RunEQS_*_&> @ 146eb33c0

UBTService_RunEQS * __cdecl
UE::Core::Private::DereferenceIfNecessary<UBTService_RunEQS,UBTService_RunEQS_*_&>
          (UBTService_RunEQS **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBTTask_MoveTo,UBTTask_MoveTo_*_&> @ 146eb33e0

UBTTask_MoveTo * __cdecl
UE::Core::Private::DereferenceIfNecessary<UBTTask_MoveTo,UBTTask_MoveTo_*_&>
          (UBTTask_MoveTo **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBTTask_PlayAnimation,UBTTask_PlayAnimation_*_&> @ 146eb3400

UBTTask_PlayAnimation * __cdecl
UE::Core::Private::DereferenceIfNecessary<UBTTask_PlayAnimation,UBTTask_PlayAnimation_*_&>
          (UBTTask_PlayAnimation **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBTTask_RunBehavior,UBTTask_RunBehavior_*_&> @ 146eb3420

UBTTask_RunBehavior * __cdecl
UE::Core::Private::DereferenceIfNecessary<UBTTask_RunBehavior,UBTTask_RunBehavior_*_&>
          (UBTTask_RunBehavior **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBTTask_RunBehaviorDynamic,UBTTask_RunBehaviorDynamic_*_&> @ 146eb3440

UBTTask_RunBehaviorDynamic * __cdecl
UE::Core::Private::DereferenceIfNecessary<UBTTask_RunBehaviorDynamic,UBTTask_RunBehaviorDynamic_*_&>
          (UBTTask_RunBehaviorDynamic **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBTTask_RunEQSQuery,UBTTask_RunEQSQuery_*_&> @ 146eb3460

UBTTask_RunEQSQuery * __cdecl
UE::Core::Private::DereferenceIfNecessary<UBTTask_RunEQSQuery,UBTTask_RunEQSQuery_*_&>
          (UBTTask_RunEQSQuery **param_1)

{
  return *param_1;
}

// Construct<FAIDataProviderStructValue> @ 146f0d420

void __cdecl UE::CoreUObject::Private::Construct<FAIDataProviderStructValue>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FAIDataProviderStructValue__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FAIDataProviderStructValue> @ 146f0d510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIDataProviderStructValue>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FAIDataProviderStructValue__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FAIDataProviderStructValue> @ 146f0d540

void __cdecl UE::CoreUObject::Private::Destruct<FAIDataProviderStructValue>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FAIDataProviderValue__6B_;
  return;
}

// Copy<FAIDataProviderStructValue> @ 146f0d670

bool __cdecl
UE::CoreUObject::Private::Copy<FAIDataProviderStructValue>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
    }
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (void *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FAIDataProviderTypedValue> @ 146f0e0b0

void __cdecl UE::CoreUObject::Private::Construct<FAIDataProviderTypedValue>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FAIDataProviderTypedValue__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FAIDataProviderTypedValue> @ 146f0e0e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIDataProviderTypedValue>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FAIDataProviderTypedValue__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FAIDataProviderTypedValue> @ 146f0e110

void __cdecl UE::CoreUObject::Private::Destruct<FAIDataProviderTypedValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAIDataProviderValue__6B_;
  return;
}

// SerializeArchive<FAIDataProviderTypedValue> @ 146f0e170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FAIDataProviderTypedValue>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar5;
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  *this_00;
  TTuple<FName,FFieldClass_*> *pTVar6;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCoreObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderTypedValue,(UObject *)pUVar4,
                         L"AIDataProviderTypedValue");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton;
  if ((param_1->field_0x28 & 5) != 0) {
    pcVar1 = *(code **)((Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton)
                        ->_padding_ + 0x2e0);
    this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
    FVar5 = FStructuredArchiveFromArchive::GetSlot(this);
    local_1c0 = 0;
    local_1c8 = 0;
    (*pcVar1)(pUVar2,*(undefined8 *)FVar5,param_2,pUVar2);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  }
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FCoreObjectVersion::GUID);
  if (iVar3 < 4) {
    if ((param_1->field_0x28 & 1) != 0) {
      if (*(longlong *)((longlong)param_2 + 0x20) == 0) {
        *(undefined8 *)((longlong)param_2 + 0x28) = 0;
      }
      else {
        this_00 = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
                   *)FFieldClass::GetNameToFieldClassMap();
        pTVar6 = TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
                 ::Find(this_00,*(FName *)(*(longlong *)((longlong)param_2 + 0x20) + 0x18));
        if (pTVar6 == (TTuple<FName,FFieldClass_*> *)0x0) {
          *(undefined8 *)((longlong)param_2 + 0x28) = 0;
          *(undefined8 *)((longlong)param_2 + 0x20) = 0;
        }
        else {
          *(undefined8 *)((longlong)param_2 + 0x28) = *(undefined8 *)&pTVar6->field_0x8;
          *(undefined8 *)((longlong)param_2 + 0x20) = 0;
        }
      }
    }
  }
  else {
    ::operator<<(param_1,(FFieldClass **)((longlong)param_2 + 0x28));
  }
  return true;
}

// Copy<FAIDataProviderTypedValue> @ 146f0e390

bool __cdecl
UE::CoreUObject::Private::Copy<FAIDataProviderTypedValue>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
    }
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x20) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x20));
    }
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    param_1 = (void *)((longlong)param_1 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FEnvQueryInstanceCache> @ 146f0e7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FEnvQueryInstanceCache>(void *param_1)

{
  memset((void *)((longlong)param_1 + 8),0,0x1c0);
  *(undefined8 *)param_1 = 0;
  FEnvQueryInstance::FEnvQueryInstance((FEnvQueryInstance *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  return;
}

// ConstructForTests<FEnvQueryInstanceCache> @ 146f0e860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvQueryInstanceCache>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FEnvQueryInstance::FEnvQueryInstance((FEnvQueryInstance *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  return;
}

// Destruct<FEnvQueryInstanceCache> @ 146f0e890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Destruct<FEnvQueryInstanceCache>(void *param_1)

{
  FEnvQueryInstance::~FEnvQueryInstance((FEnvQueryInstance *)((longlong)param_1 + 8));
  return;
}

// Copy<FEnvQueryInstanceCache> @ 146f0e9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FEnvQueryInstanceCache>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      FEnvQueryInstance::operator=
                ((FEnvQueryInstance *)(puVar2 + 1),(FEnvQueryInstance *)(puVar1 + 1));
      puVar2[0x38] = puVar1[0x38];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x39;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnvQueryRequest> @ 146f0f670

void __cdecl UE::CoreUObject::Private::Construct<FEnvQueryRequest>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FEnvQueryRequest> @ 146f0f6b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvQueryRequest>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FEnvQueryRequest> @ 146f0f6f0

void __cdecl UE::CoreUObject::Private::Destruct<FEnvQueryRequest>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FEnvQueryRequest> @ 146f0f780

bool __cdecl
UE::CoreUObject::Private::Copy<FEnvQueryRequest>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[2]);
      }
      puVar2[2] = puVar1[2];
      TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
                ((TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *)(puVar2 + 3),
                 (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *)(puVar1 + 3));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0xd;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAIDataProviderValue> @ 146f0fb40

void __cdecl UE::CoreUObject::Private::Construct<FAIDataProviderValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAIDataProviderValue__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FAIDataProviderValue> @ 146f0fc20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIDataProviderValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAIDataProviderValue__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FAIDataProviderValue> @ 146f0fc40

void __cdecl UE::CoreUObject::Private::Destruct<FAIDataProviderValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAIDataProviderValue__6B_;
  return;
}

// Copy<FAIDataProviderValue> @ 146f0fd30

bool __cdecl
UE::CoreUObject::Private::Copy<FAIDataProviderValue>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
    }
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    param_1 = (void *)((longlong)param_1 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x20);
  }
  return true;
}

// Construct<FEnvQueryManagerConfig> @ 146f0ffa0

void __cdecl UE::CoreUObject::Private::Construct<FEnvQueryManagerConfig>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x404e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f999999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3f999999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f847ae140000000;
  *(undefined8 *)((longlong)param_1 + 8) = 200;
  *(undefined4 *)param_1 = 0x3b449ba6;
  return;
}

// ConstructForTests<FEnvQueryManagerConfig> @ 146f0fff0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvQueryManagerConfig>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3b449ba6;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x404e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f999999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3f999999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f847ae140000000;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 200;
  return;
}

// Destruct<FEnvQueryManagerConfig> @ 146f10040

void __cdecl UE::CoreUObject::Private::Destruct<FEnvQueryManagerConfig>(void *param_1)

{
  return;
}

// Copy<FEnvQueryManagerConfig> @ 146f10290

bool __cdecl
UE::CoreUObject::Private::Copy<FEnvQueryManagerConfig>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      param_1 = (void *)((longlong)param_1 + 0x30);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEQSParametrizedQueryExecutionRequest> @ 146f102d0

void __cdecl
UE::CoreUObject::Private::Construct<FEQSParametrizedQueryExecutionRequest>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) & 0xfffffffc;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffff;
  return;
}

// ConstructForTests<FEQSParametrizedQueryExecutionRequest> @ 146f10310

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEQSParametrizedQueryExecutionRequest>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) & 0xfffffffc;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffff;
  return;
}

// Destruct<FEQSParametrizedQueryExecutionRequest> @ 146f10350

void __cdecl
UE::CoreUObject::Private::Destruct<FEQSParametrizedQueryExecutionRequest>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<FAIDynamicParam,int>
            (*(FAIDynamicParam **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FEQSParametrizedQueryExecutionRequest> @ 146f105a0

bool __cdecl
UE::CoreUObject::Private::Copy<FEQSParametrizedQueryExecutionRequest>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FAIDynamicParam *pFVar5;
  uint uVar6;
  undefined8 *puVar7;
  int local_res18;
  
  if (param_3 != 0) {
    puVar7 = param_1;
    local_res18 = param_3;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar7);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar7 = *puVar3;
      pFVar1 = (ForAnyElementType *)(puVar7 + 1);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        DestructItems<FAIDynamicParam,int>((FAIDynamicParam *)pFVar1->Data,*(int *)(puVar7 + 2));
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar7 + 0x14);
        pFVar5 = (FAIDynamicParam *)((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar7 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FAIDynamicParam,FAIDynamicParam,int>(pFVar1->Data,pFVar5,iVar4);
        }
      }
      FBlackboardKeySelector::operator=
                ((FBlackboardKeySelector *)(puVar7 + 3),(FBlackboardKeySelector *)(puVar3 + 3));
      *(undefined1 *)(puVar7 + 8) = *(undefined1 *)(puVar3 + 8);
      uVar6 = (*(uint *)((longlong)puVar7 + 0x44) ^ *(uint *)((longlong)puVar3 + 0x44)) & 1 ^
              *(uint *)((longlong)puVar7 + 0x44);
      *(uint *)((longlong)puVar7 + 0x44) = uVar6;
      local_res18 = local_res18 + -1;
      *(uint *)((longlong)puVar7 + 0x44) = (uVar6 ^ *(uint *)((longlong)puVar3 + 0x44)) & 2 ^ uVar6;
      puVar7 = puVar7 + 9;
    } while (local_res18 != 0);
  }
  return true;
}

// Construct<FAIDynamicParam> @ 146f10c70

void __cdecl UE::CoreUObject::Private::Construct<FAIDynamicParam>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 1;
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) | 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffff;
  return;
}

// ConstructForTests<FAIDynamicParam> @ 146f10cb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIDynamicParam>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 1;
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) | 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffff;
  return;
}

// Destruct<FAIDynamicParam> @ 146f10cf0

void __cdecl UE::CoreUObject::Private::Destruct<FAIDynamicParam>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FAIDynamicParam> @ 146f10d10

bool __cdecl
UE::CoreUObject::Private::Copy<FAIDynamicParam>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_1 + lVar1 + 8);
      *(byte *)((longlong)param_1 + 9) =
           *(byte *)((longlong)param_1 + 9) ^
           (*(byte *)((longlong)param_1 + 9) ^ *(byte *)((longlong)param_1 + lVar1 + 9)) & 1;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar1 + 0xc);
      FBlackboardKeySelector::operator=
                ((FBlackboardKeySelector *)((longlong)param_1 + 0x10),
                 (FBlackboardKeySelector *)((longlong)param_1 + lVar1 + 0x10));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnvQueryInstance> @ 146f116b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FEnvQueryInstance>(void *param_1)

{
  bool bVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  bVar1 = FEnvQueryInstance::bDebuggingInfoEnabled;
  *(uint *)((longlong)param_1 + 0x1a8) = *(uint *)((longlong)param_1 + 0x1a8) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(byte *)((longlong)param_1 + 0x10c) = *(byte *)((longlong)param_1 + 0x10c) & 0xe0 | bVar1;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0x3f847ae140000000;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(TStatIdData **)((longlong)param_1 + 0x1b0) = &TStatId::TStatId_NAME_None;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0xffffffff;
  FEnvQueryInstance::IncStats(param_1);
  return;
}

// ConstructForTests<FEnvQueryInstance> @ 146f11700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvQueryInstance>(void *param_1)

{
  bool bVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  bVar1 = FEnvQueryInstance::bDebuggingInfoEnabled;
  *(uint *)((longlong)param_1 + 0x1a8) = *(uint *)((longlong)param_1 + 0x1a8) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(byte *)((longlong)param_1 + 0x10c) = *(byte *)((longlong)param_1 + 0x10c) & 0xe0 | bVar1;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0x3f847ae140000000;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(TStatIdData **)((longlong)param_1 + 0x1b0) = &TStatId::TStatId_NAME_None;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0xffffffff;
  FEnvQueryInstance::IncStats(param_1);
  return;
}

// Destruct<FEnvQueryInstance> @ 146f11710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Destruct<FEnvQueryInstance>(void *param_1)

{
  FEnvQueryInstance::DecStats(param_1);
  FEnvQueryDebugData::~FEnvQueryDebugData((FEnvQueryDebugData *)((longlong)param_1 + 0x148));
  DestructItems<FEnvQueryItemDetails,int>
            (*(FEnvQueryItemDetails **)((longlong)param_1 + 0xf0),*(int *)((longlong)param_1 + 0xf8)
            );
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  DestructItems<FEnvQueryOptionInstance,int>
            (*(FEnvQueryOptionInstance **)((longlong)param_1 + 0xd8),
             *(int *)((longlong)param_1 + 0xe0));
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  DestructItems<FEnvQueryInstanceContextCacheItem,int>
            (*(FEnvQueryInstanceContextCacheItem **)((longlong)param_1 + 200),
             *(int *)((longlong)param_1 + 0xd0));
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x78));
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FEnvQueryInstance> @ 146f11720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FEnvQueryInstance>(void *param_1,void *param_2,int param_3)

{
  FEnvQueryInstance *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FEnvQueryInstance::operator=
                (this,(FEnvQueryInstance *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnvQueryInstanceContextCacheItem> @ 146f11b80

void __cdecl UE::CoreUObject::Private::Construct<FEnvQueryInstanceContextCacheItem>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FEnvQueryInstanceContextCacheItem> @ 146f11ba0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEnvQueryInstanceContextCacheItem>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FEnvQueryInstanceContextCacheItem> @ 146f11bc0

void __cdecl UE::CoreUObject::Private::Destruct<FEnvQueryInstanceContextCacheItem>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FEnvQueryInstanceContextCacheItem> @ 146f11c20

bool __cdecl
UE::CoreUObject::Private::Copy<FEnvQueryInstanceContextCacheItem>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar2 + 3),
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar1 + 3));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnvQueryOptionInstance> @ 146f12070

void __cdecl UE::CoreUObject::Private::Construct<FEnvQueryOptionInstance>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FEnvQueryOptionInstance> @ 146f12090

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvQueryOptionInstance>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FEnvQueryOptionInstance> @ 146f120b0

void __cdecl UE::CoreUObject::Private::Destruct<FEnvQueryOptionInstance>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FEnvQueryOptionInstance> @ 146f12180

bool __cdecl
UE::CoreUObject::Private::Copy<FEnvQueryOptionInstance>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar6 = *puVar3;
      pFVar1 = (ForAnyElementType *)(puVar6 + 1);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar6 + 0x14);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar6 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TObjectPtr<UEnvQueryTest>,TObjectPtr<UEnvQueryTest>,int>
                    (pFVar1->Data,(TObjectPtr<UEnvQueryTest> *)pFVar5,iVar4);
        }
      }
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar3 + 3);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[4] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[4]);
      }
      puVar6[4] = puVar3[4];
      *(uint *)(puVar6 + 5) =
           *(uint *)(puVar6 + 5) ^ (*(uint *)(puVar6 + 5) ^ *(uint *)(puVar3 + 5)) & 1;
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnvQueryContextData> @ 146f12720

void __cdecl UE::CoreUObject::Private::Construct<FEnvQueryContextData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FEnvQueryContextData> @ 146f12740

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvQueryContextData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FEnvQueryContextData> @ 146f12760

void __cdecl UE::CoreUObject::Private::Destruct<FEnvQueryContextData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FEnvQueryContextData> @ 146f12780

bool __cdecl
UE::CoreUObject::Private::Copy<FEnvQueryContextData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar2 + 2),
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar1 + 2));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnvQueryResult> @ 146f12f60

void __cdecl UE::CoreUObject::Private::Construct<FEnvQueryResult>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FEnvQueryResult> @ 146f12fd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvQueryResult>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FEnvQueryResult> @ 146f130c0

void __cdecl UE::CoreUObject::Private::Destruct<FEnvQueryResult>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FEnvQueryResult> @ 146f13140

bool __cdecl
UE::CoreUObject::Private::Copy<FEnvQueryResult>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)
                 (((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10))
                 ->AllocatorInstance).Data, pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    (((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))->
    AllocatorInstance).Data =
         (((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10))->
         AllocatorInstance).Data;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
               &((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))->
                ArrayNum,
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
               &((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10))->
                ArrayNum);
    ((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->ArrayNum =
         ((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20))->ArrayNum
    ;
    ((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->ArrayMax =
         ((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20))->ArrayMax
    ;
    *(undefined4 *)
     &(((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->
      AllocatorInstance).Data =
         *(undefined4 *)
          &(((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30))->
           AllocatorInstance).Data;
    *(undefined8 *)
     ((longlong)
      &(((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->
       AllocatorInstance).Data + 4) =
         *(undefined8 *)
          ((longlong)
           &(((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30))->
            AllocatorInstance).Data + 4);
    param_1 = (TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40);
    param_2 = (TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40);
  }
  return true;
}

// Construct<FEnvOverlapData> @ 146f13840

void __cdecl UE::CoreUObject::Private::Construct<FEnvOverlapData>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41200000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff9 | 1;
  return;
}

// ConstructForTests<FEnvOverlapData> @ 146f13890

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvOverlapData>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41200000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff9 | 1;
  return;
}

// Destruct<FEnvOverlapData> @ 146f138e0

void __cdecl UE::CoreUObject::Private::Destruct<FEnvOverlapData>(void *param_1)

{
  return;
}

// Copy<FEnvOverlapData> @ 146f138f0

bool __cdecl
UE::CoreUObject::Private::Copy<FEnvOverlapData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      param_1 = (void *)((longlong)param_1 + 0x30);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnvTraceData> @ 146f139f0

void __cdecl UE::CoreUObject::Private::Construct<FEnvTraceData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x44800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) & 0xffffffde | 0x1e;
  return;
}

// ConstructForTests<FEnvTraceData> @ 146f13a40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvTraceData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x44800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) & 0xffffffde | 0x1e;
  return;
}

// Destruct<FEnvTraceData> @ 146f13a90

void __cdecl UE::CoreUObject::Private::Destruct<FEnvTraceData>(void *param_1)

{
  return;
}

// Copy<FEnvTraceData> @ 146f13aa0

bool __cdecl UE::CoreUObject::Private::Copy<FEnvTraceData>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar3 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar3 + 8);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x1c);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x24);
      *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_1 + lVar3 + 0x28);
      *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_1 + lVar3 + 0x29);
      *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x2c);
      *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_1 + lVar3 + 0x34);
      *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_1 + lVar3 + 0x35);
      uVar2 = (*(uint *)((longlong)param_1 + 0x38) ^ *(uint *)((longlong)param_1 + lVar3 + 0x38)) &
              1 ^ *(uint *)((longlong)param_1 + 0x38);
      *(uint *)((longlong)param_1 + 0x38) = uVar2;
      uVar2 = (uVar2 ^ *(uint *)((longlong)param_1 + lVar3 + 0x38)) & 2 ^ uVar2;
      *(uint *)((longlong)param_1 + 0x38) = uVar2;
      uVar2 = (uVar2 ^ *(uint *)((longlong)param_1 + lVar3 + 0x38)) & 4 ^ uVar2;
      *(uint *)((longlong)param_1 + 0x38) = uVar2;
      uVar2 = (uVar2 ^ *(uint *)((longlong)param_1 + lVar3 + 0x38)) & 8 ^ uVar2;
      *(uint *)((longlong)param_1 + 0x38) = uVar2;
      uVar2 = (uVar2 ^ *(uint *)((longlong)param_1 + lVar3 + 0x38)) & 0x10 ^ uVar2;
      *(uint *)((longlong)param_1 + 0x38) = uVar2;
      *(uint *)((longlong)param_1 + 0x38) =
           (uVar2 ^ *(uint *)((longlong)param_1 + lVar3 + 0x38)) & 0x20 ^ uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnvDirection> @ 146f13f70

void __cdecl UE::CoreUObject::Private::Construct<FEnvDirection>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FEnvDirection> @ 146f13fa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvDirection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FEnvDirection> @ 146f13fc0

void __cdecl UE::CoreUObject::Private::Destruct<FEnvDirection>(void *param_1)

{
  return;
}

// Construct<FAIDataProviderBoolValue> @ 146f13fd0

void __cdecl UE::CoreUObject::Private::Construct<FAIDataProviderBoolValue>(void *param_1)

{
  FFieldClass *pFVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAIDataProviderBoolValue__6B_;
  pFVar1 = FBoolProperty::StaticClass();
  *(FFieldClass **)((longlong)param_1 + 0x28) = pFVar1;
  return;
}

// ConstructForTests<FAIDataProviderBoolValue> @ 146f14020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIDataProviderBoolValue>(void *param_1)

{
  FFieldClass *pFVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAIDataProviderBoolValue__6B_;
  pFVar1 = FBoolProperty::StaticClass();
  *(FFieldClass **)((longlong)param_1 + 0x28) = pFVar1;
  return;
}

// Copy<FEnvDirection> @ 146f14070

bool __cdecl UE::CoreUObject::Private::Copy<FEnvDirection>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[2]);
      }
      puVar2[2] = puVar1[2];
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(puVar1 + 3);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FAIDataProviderBoolValue> @ 146f14140

void __cdecl UE::CoreUObject::Private::Destruct<FAIDataProviderBoolValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAIDataProviderValue__6B_;
  return;
}

// Copy<FAIDataProviderBoolValue> @ 146f142e0

bool __cdecl
UE::CoreUObject::Private::Copy<FAIDataProviderBoolValue>(void *param_1,void *param_2,int param_3)

{
  FAIDataProviderTypedValue *pFVar1;
  FAIDataProviderTypedValue *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FAIDataProviderTypedValue *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FAIDataProviderTypedValue::operator=(this,pFVar1);
      *(char *)&this[1]._padding_ = (char)pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FAIDataProviderTypedValue *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnvNamedValue> @ 146f14890

void __cdecl UE::CoreUObject::Private::Construct<FEnvNamedValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FEnvNamedValue> @ 146f148b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnvNamedValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FEnvNamedValue> @ 146f148d0

void __cdecl UE::CoreUObject::Private::Destruct<FEnvNamedValue>(void *param_1)

{
  return;
}

// Construct<FAIDataProviderFloatValue> @ 146f148e0

void __cdecl UE::CoreUObject::Private::Construct<FAIDataProviderFloatValue>(void *param_1)

{
  FFieldClass *pFVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAIDataProviderFloatValue__6B_;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  pFVar1 = FFloatProperty::StaticClass();
  *(FFieldClass **)((longlong)param_1 + 0x28) = pFVar1;
  return;
}

// ConstructForTests<FAIDataProviderFloatValue> @ 146f14930

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIDataProviderFloatValue>(void *param_1)

{
  FFieldClass *pFVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAIDataProviderFloatValue__6B_;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  pFVar1 = FFloatProperty::StaticClass();
  *(FFieldClass **)((longlong)param_1 + 0x28) = pFVar1;
  return;
}

// Copy<FEnvNamedValue> @ 146f14980

bool __cdecl UE::CoreUObject::Private::Copy<FEnvNamedValue>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FAIDataProviderFloatValue> @ 146f149b0

void __cdecl UE::CoreUObject::Private::Destruct<FAIDataProviderFloatValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAIDataProviderValue__6B_;
  return;
}

// Copy<FAIDataProviderFloatValue> @ 146f149d0

bool __cdecl
UE::CoreUObject::Private::Copy<FAIDataProviderFloatValue>(void *param_1,void *param_2,int param_3)

{
  FAIDataProviderTypedValue *pFVar1;
  FAIDataProviderTypedValue *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FAIDataProviderTypedValue *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FAIDataProviderTypedValue::operator=(this,pFVar1);
      *(int *)&this[1]._padding_ = (int)pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FAIDataProviderTypedValue *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAIDataProviderIntValue> @ 146f14f50

void __cdecl UE::CoreUObject::Private::Construct<FAIDataProviderIntValue>(void *param_1)

{
  FFieldClass *pFVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAIDataProviderIntValue__6B_;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  pFVar1 = FIntProperty::StaticClass();
  *(FFieldClass **)((longlong)param_1 + 0x28) = pFVar1;
  return;
}

// ConstructForTests<FAIDataProviderIntValue> @ 146f14fa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIDataProviderIntValue>(void *param_1)

{
  FFieldClass *pFVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAIDataProviderIntValue__6B_;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  pFVar1 = FIntProperty::StaticClass();
  *(FFieldClass **)((longlong)param_1 + 0x28) = pFVar1;
  return;
}

// Destruct<FAIDataProviderIntValue> @ 146f14ff0

void __cdecl UE::CoreUObject::Private::Destruct<FAIDataProviderIntValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAIDataProviderValue__6B_;
  return;
}

// Copy<FAIDataProviderIntValue> @ 146f15010

bool __cdecl
UE::CoreUObject::Private::Copy<FAIDataProviderIntValue>(void *param_1,void *param_2,int param_3)

{
  FAIDataProviderTypedValue *pFVar1;
  FAIDataProviderTypedValue *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FAIDataProviderTypedValue *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FAIDataProviderTypedValue::operator=(this,pFVar1);
      *(int *)&this[1]._padding_ = (int)pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FAIDataProviderTypedValue *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FGameplayDebuggerCategory_AI::FRepData,FGameplayDebuggerCategory_AI::FRepData_*_&> @ 146f176f0

FRepData * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerCategory_AI::FRepData,FGameplayDebuggerCategory_AI::FRepData_*_&>
          (FRepData **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerCategory_BehaviorTree::FRepData,FGameplayDebuggerCategory_BehaviorTree::FRepData_*_&> @ 146f17710

FRepData * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerCategory_BehaviorTree::FRepData,FGameplayDebuggerCategory_BehaviorTree::FRepData_*_&>
          (FRepData **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerCategory_EQS::FRepData,FGameplayDebuggerCategory_EQS::FRepData_*_&> @ 146f17730

FRepData * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerCategory_EQS::FRepData,FGameplayDebuggerCategory_EQS::FRepData_*_&>
          (FRepData **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerCategory_AI::FRepDataPath,FGameplayDebuggerCategory_AI::FRepDataPath_*_&> @ 146f17750

FRepDataPath * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerCategory_AI::FRepDataPath,FGameplayDebuggerCategory_AI::FRepDataPath_*_&>
          (FRepDataPath **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerCategory_EQS,FGameplayDebuggerCategory_EQS_*_&> @ 146f17770

FGameplayDebuggerCategory_EQS * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerCategory_EQS,FGameplayDebuggerCategory_EQS_*_&>
          (FGameplayDebuggerCategory_EQS **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAIAsyncTaskBlueprintProxy,UAIAsyncTaskBlueprintProxy_*_&> @ 146f17790

UAIAsyncTaskBlueprintProxy * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAIAsyncTaskBlueprintProxy,UAIAsyncTaskBlueprintProxy_*_&>
          (UAIAsyncTaskBlueprintProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UEnvQueryInstanceBlueprintWrapper,UEnvQueryInstanceBlueprintWrapper_*_&> @ 146f177b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEnvQueryInstanceBlueprintWrapper * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UEnvQueryInstanceBlueprintWrapper,UEnvQueryInstanceBlueprintWrapper_*_&>
          (UEnvQueryInstanceBlueprintWrapper **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UEnvQueryTest_Pathfinding,UEnvQueryTest_Pathfinding_*_&> @ 146f177d0

UEnvQueryTest_Pathfinding * __cdecl
UE::Core::Private::DereferenceIfNecessary<UEnvQueryTest_Pathfinding,UEnvQueryTest_Pathfinding_*_&>
          (UEnvQueryTest_Pathfinding **param_1)

{
  return *param_1;
}

// Construct<FActorPerceptionUpdateInfo> @ 146f82510

void __cdecl UE::CoreUObject::Private::Construct<FActorPerceptionUpdateInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  FAIStimulus::FAIStimulus((FAIStimulus *)((longlong)param_1 + 0x10));
  return;
}

// ConstructForTests<FActorPerceptionUpdateInfo> @ 146f82550

void __cdecl UE::CoreUObject::Private::ConstructForTests<FActorPerceptionUpdateInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  FAIStimulus::FAIStimulus((FAIStimulus *)((longlong)param_1 + 0x10));
  return;
}

// Destruct<FActorPerceptionUpdateInfo> @ 146f82570

void __cdecl UE::CoreUObject::Private::Destruct<FActorPerceptionUpdateInfo>(void *param_1)

{
  return;
}

// Copy<FActorPerceptionUpdateInfo> @ 146f82580

bool __cdecl
UE::CoreUObject::Private::Copy<FActorPerceptionUpdateInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    puVar4 = param_1;
    do {
      *puVar4 = *(undefined4 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      *(undefined8 *)(puVar4 + 1) = *(undefined8 *)((longlong)pvVar3 + 4);
      puVar4[4] = *(undefined4 *)((longlong)pvVar3 + 0x10);
      puVar4[5] = *(undefined4 *)((longlong)pvVar3 + 0x14);
      puVar4[6] = *(undefined4 *)((longlong)pvVar3 + 0x18);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x28);
      *(undefined8 *)(puVar4 + 8) = *(undefined8 *)((longlong)pvVar3 + 0x20);
      *(undefined8 *)(puVar4 + 10) = uVar1;
      *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)((longlong)pvVar3 + 0x30);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x40);
      *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)((longlong)pvVar3 + 0x38);
      *(undefined8 *)(puVar4 + 0x10) = uVar1;
      *(undefined8 *)(puVar4 + 0x12) = *(undefined8 *)((longlong)pvVar3 + 0x48);
      *(undefined8 *)(puVar4 + 0x14) = *(undefined8 *)((longlong)pvVar3 + 0x50);
      *(undefined1 *)(puVar4 + 0x16) = *(undefined1 *)((longlong)pvVar3 + 0x58);
      *(undefined8 *)(puVar4 + 0x17) = *(undefined8 *)((longlong)pvVar3 + 0x5c);
      uVar2 = (puVar4[0x19] ^ *(uint *)((longlong)pvVar3 + 100)) & 1 ^ puVar4[0x19];
      puVar4[0x19] = uVar2;
      uVar2 = (uVar2 ^ *(uint *)((longlong)pvVar3 + 100)) & 2 ^ uVar2;
      puVar4[0x19] = uVar2;
      puVar4[0x19] = (uVar2 ^ *(uint *)((longlong)pvVar3 + 100)) & 4 ^ uVar2;
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x68);
      puVar4 = puVar4 + 0x1a;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRecastGraphWrapper> @ 146f82cb0

void __cdecl UE::CoreUObject::Private::Construct<FRecastGraphWrapper>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  dtNavMeshQuery::dtNavMeshQuery((dtNavMeshQuery *)((longlong)param_1 + 0x10));
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0xffffffff;
  return;
}

// ConstructForTests<FRecastGraphWrapper> @ 146f82cf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRecastGraphWrapper>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  dtNavMeshQuery::dtNavMeshQuery((dtNavMeshQuery *)((longlong)param_1 + 0x10));
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0xffffffff;
  return;
}

// Destruct<FRecastGraphWrapper> @ 146f82d30

void __cdecl UE::CoreUObject::Private::Destruct<FRecastGraphWrapper>(void *param_1)

{
  dtNavMeshQuery::~dtNavMeshQuery((dtNavMeshQuery *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FRecastGraphWrapper> @ 146f82d80

bool __cdecl
UE::CoreUObject::Private::Copy<FRecastGraphWrapper>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      uVar2 = puVar1[0xb];
      puVar3[10] = puVar1[10];
      puVar3[0xb] = uVar2;
      uVar2 = puVar1[0xd];
      puVar3[0xc] = puVar1[0xc];
      puVar3[0xd] = uVar2;
      uVar2 = puVar1[0xf];
      puVar3[0xe] = puVar1[0xe];
      puVar3[0xf] = uVar2;
      uVar2 = puVar1[0x11];
      puVar3[0x10] = puVar1[0x10];
      puVar3[0x11] = uVar2;
      uVar2 = puVar1[0x13];
      puVar3[0x12] = puVar1[0x12];
      puVar3[0x13] = uVar2;
      uVar2 = puVar1[0x15];
      puVar3[0x14] = puVar1[0x14];
      puVar3[0x15] = uVar2;
      *(undefined4 *)(puVar3 + 0x16) = *(undefined4 *)(puVar1 + 0x16);
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x17;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCrowdAvoidanceSamplingPattern> @ 146f836e0

void __cdecl UE::CoreUObject::Private::Construct<FCrowdAvoidanceSamplingPattern>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCrowdAvoidanceSamplingPattern> @ 146f83700

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCrowdAvoidanceSamplingPattern>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCrowdAvoidanceSamplingPattern> @ 146f83720

void __cdecl UE::CoreUObject::Private::Destruct<FCrowdAvoidanceSamplingPattern>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCrowdAvoidanceSamplingPattern> @ 146f83760

bool __cdecl
UE::CoreUObject::Private::Copy<FCrowdAvoidanceSamplingPattern>
          (void *param_1,void *param_2,int param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<float,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=(this + 1,pTVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAISightEvent> @ 146f837e0

void __cdecl UE::CoreUObject::Private::Construct<FAISightEvent>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FAISightEvent> @ 146f83800

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAISightEvent>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FAISightEvent> @ 146f83820

void __cdecl UE::CoreUObject::Private::Destruct<FAISightEvent>(void *param_1)

{
  return;
}

// Copy<FAISightEvent> @ 146f83830

bool __cdecl UE::CoreUObject::Private::Copy<FAISightEvent>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x10);
      param_2 = (void *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCrowdAvoidanceConfig> @ 146f83d20

void __cdecl UE::CoreUObject::Private::Construct<FCrowdAvoidanceConfig>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x50207ff;
  return;
}

// ConstructForTests<FCrowdAvoidanceConfig> @ 146f83d60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCrowdAvoidanceConfig>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x50207ff;
  return;
}

// Destruct<FCrowdAvoidanceConfig> @ 146f83da0

void __cdecl UE::CoreUObject::Private::Destruct<FCrowdAvoidanceConfig>(void *param_1)

{
  return;
}

// Copy<FCrowdAvoidanceConfig> @ 146f83df0

bool __cdecl
UE::CoreUObject::Private::Copy<FCrowdAvoidanceConfig>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAIPredictionEvent> @ 146f84460

void __cdecl UE::CoreUObject::Private::Construct<FAIPredictionEvent>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FAIPredictionEvent> @ 146f844b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIPredictionEvent>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FAIPredictionEvent> @ 146f84500

void __cdecl UE::CoreUObject::Private::Destruct<FAIPredictionEvent>(void *param_1)

{
  return;
}

// Copy<FAIPredictionEvent> @ 146f84610

bool __cdecl
UE::CoreUObject::Private::Copy<FAIPredictionEvent>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAINoiseEvent> @ 146f849d0

void __cdecl UE::CoreUObject::Private::Construct<FAINoiseEvent>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(uchar *)((longlong)param_1 + 0x38) = FGenericTeamId::NoTeam.TeamID;
  return;
}

// ConstructForTests<FAINoiseEvent> @ 146f84a50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAINoiseEvent>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(uchar *)((longlong)param_1 + 0x38) = FGenericTeamId::NoTeam.TeamID;
  return;
}

// Destruct<FAINoiseEvent> @ 146f84a90

void __cdecl UE::CoreUObject::Private::Destruct<FAINoiseEvent>(void *param_1)

{
  return;
}

// Copy<FAINoiseEvent> @ 146f84aa0

bool __cdecl UE::CoreUObject::Private::Copy<FAINoiseEvent>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x10);
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)((longlong)pvVar2 + 8);
      *(undefined8 *)(puVar3 + 4) = uVar1;
      *(undefined8 *)(puVar3 + 6) = *(undefined8 *)((longlong)pvVar2 + 0x18);
      puVar3[8] = *(undefined4 *)((longlong)pvVar2 + 0x20);
      puVar3[9] = *(undefined4 *)((longlong)pvVar2 + 0x24);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar2 + 0x28) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar2 + 0x28));
      }
      *(undefined8 *)(puVar3 + 10) = *(undefined8 *)((longlong)pvVar2 + 0x28);
      *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)((longlong)pvVar2 + 0x30);
      *(undefined1 *)(puVar3 + 0xe) = *(undefined1 *)((longlong)pvVar2 + 0x38);
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x40);
      puVar3 = puVar3 + 0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAIDamageEvent> @ 146f85020

void __cdecl UE::CoreUObject::Private::Construct<FAIDamageEvent>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0x3f800000;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FAIDamageEvent> @ 146f85070

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIDamageEvent>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0x3f800000;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FAIDamageEvent> @ 146f850c0

void __cdecl UE::CoreUObject::Private::Destruct<FAIDamageEvent>(void *param_1)

{
  return;
}

// Copy<FAIDamageEvent> @ 146f850d0

bool __cdecl UE::CoreUObject::Private::Copy<FAIDamageEvent>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x10);
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)((longlong)pvVar2 + 8);
      *(undefined8 *)(puVar3 + 4) = uVar1;
      *(undefined8 *)(puVar3 + 6) = *(undefined8 *)((longlong)pvVar2 + 0x18);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x28);
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)((longlong)pvVar2 + 0x20);
      *(undefined8 *)(puVar3 + 10) = uVar1;
      *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)((longlong)pvVar2 + 0x30);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar2 + 0x38) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar2 + 0x38));
      }
      *(undefined8 *)(puVar3 + 0xe) = *(undefined8 *)((longlong)pvVar2 + 0x38);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar2 + 0x40) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar2 + 0x40));
      }
      *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)((longlong)pvVar2 + 0x40);
      *(undefined8 *)(puVar3 + 0x12) = *(undefined8 *)((longlong)pvVar2 + 0x48);
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x50);
      puVar3 = puVar3 + 0x14;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAISenseAffiliationFilter> @ 146f857d0

void __cdecl UE::CoreUObject::Private::Construct<FAISenseAffiliationFilter>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FAISenseAffiliationFilter> @ 146f857e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAISenseAffiliationFilter>(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 & 0xfffffff8;
  return;
}

// Destruct<FAISenseAffiliationFilter> @ 146f857f0

void __cdecl UE::CoreUObject::Private::Destruct<FAISenseAffiliationFilter>(void *param_1)

{
  return;
}

// Copy<FAISenseAffiliationFilter> @ 146f85800

bool __cdecl
UE::CoreUObject::Private::Copy<FAISenseAffiliationFilter>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAIStimulus> @ 146f859d0

void __cdecl UE::CoreUObject::Private::Construct<FAIStimulus>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0xbf800000;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  FAINamedID<FAISenseCounter>::InvalidID((FAINamedID<FAISenseCounter> *)((longlong)param_1 + 0x48));
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffff8;
  return;
}

// ConstructForTests<FAIStimulus> @ 146f859e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAIStimulus>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0xbf800000;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  FAINamedID<FAISenseCounter>::InvalidID((FAINamedID<FAISenseCounter> *)((longlong)param_1 + 0x48));
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffff8;
  return;
}

// Destruct<FAIStimulus> @ 146f859f0

void __cdecl UE::CoreUObject::Private::Destruct<FAIStimulus>(void *param_1)

{
  return;
}

// Copy<FAIStimulus> @ 146f85a00

bool __cdecl UE::CoreUObject::Private::Copy<FAIStimulus>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    puVar4 = param_1;
    do {
      *puVar4 = *(undefined4 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      puVar4[1] = *(undefined4 *)((longlong)pvVar3 + 4);
      puVar4[2] = *(undefined4 *)((longlong)pvVar3 + 8);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x18);
      *(undefined8 *)(puVar4 + 4) = *(undefined8 *)((longlong)pvVar3 + 0x10);
      *(undefined8 *)(puVar4 + 6) = uVar1;
      *(undefined8 *)(puVar4 + 8) = *(undefined8 *)((longlong)pvVar3 + 0x20);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x30);
      *(undefined8 *)(puVar4 + 10) = *(undefined8 *)((longlong)pvVar3 + 0x28);
      *(undefined8 *)(puVar4 + 0xc) = uVar1;
      *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)((longlong)pvVar3 + 0x38);
      *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)((longlong)pvVar3 + 0x40);
      *(undefined1 *)(puVar4 + 0x12) = *(undefined1 *)((longlong)pvVar3 + 0x48);
      *(undefined8 *)(puVar4 + 0x13) = *(undefined8 *)((longlong)pvVar3 + 0x4c);
      uVar2 = (puVar4[0x15] ^ *(uint *)((longlong)pvVar3 + 0x54)) & 1 ^ puVar4[0x15];
      puVar4[0x15] = uVar2;
      uVar2 = (uVar2 ^ *(uint *)((longlong)pvVar3 + 0x54)) & 2 ^ uVar2;
      puVar4[0x15] = uVar2;
      puVar4[0x15] = (uVar2 ^ *(uint *)((longlong)pvVar3 + 0x54)) & 4 ^ uVar2;
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x58);
      puVar4 = puVar4 + 0x16;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FActorPerceptionBlueprintInfo> @ 146f86400

void __cdecl UE::CoreUObject::Private::Construct<FActorPerceptionBlueprintInfo>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffc;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FActorPerceptionBlueprintInfo> @ 146f86420

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FActorPerceptionBlueprintInfo>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffc;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FActorPerceptionBlueprintInfo> @ 146f86440

void __cdecl UE::CoreUObject::Private::Destruct<FActorPerceptionBlueprintInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FActorPerceptionBlueprintInfo> @ 146f86460

bool __cdecl
UE::CoreUObject::Private::Copy<FActorPerceptionBlueprintInfo>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      TArray<FAIStimulus,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FAIStimulus,TSizedDefaultAllocator<32>_> *)(puVar3 + 1),
                 (TArray<FAIStimulus,TSizedDefaultAllocator<32>_> *)(puVar1 + 1));
      uVar2 = (*(uint *)(puVar3 + 3) ^ *(uint *)(puVar1 + 3)) & 1 ^ *(uint *)(puVar3 + 3);
      *(uint *)(puVar3 + 3) = uVar2;
      *(uint *)(puVar3 + 3) = (uVar2 ^ *(uint *)(puVar1 + 3)) & 2 ^ uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// ConvertArrayType<double,float,TSizedDefaultAllocator<32>_> @ 146f88130

TArray<double,TSizedDefaultAllocator<32>_> * __cdecl
UE::LWC::ConvertArrayType<double,float,TSizedDefaultAllocator<32>_>
          (TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  double local_28 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar4 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar2) break;
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_28[0] = (double)*(float *)pFVar10;
    if ((pFVar5 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pFVar10 = pFVar10 + 4;
    *(double *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_28[0];
  }
  return __return_storage_ptr__;
}

// DereferenceIfNecessary<FNavMeshSceneProxyData,FNavMeshSceneProxyData_*_&> @ 146f88500

FNavMeshSceneProxyData * __cdecl
UE::Core::Private::DereferenceIfNecessary<FNavMeshSceneProxyData,FNavMeshSceneProxyData_*_&>
          (FNavMeshSceneProxyData **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData_*_&> @ 146f88520

FRepAgentData * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData_*_&>
          (FRepAgentData **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerCategory_NavLocalGrid::FRepData,FGameplayDebuggerCategory_NavLocalGrid::FRepData_*_&> @ 146f88540

FRepData * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerCategory_NavLocalGrid::FRepData,FGameplayDebuggerCategory_NavLocalGrid::FRepData_*_&>
          (FRepData **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerCategory_Navmesh::FRepData,FGameplayDebuggerCategory_Navmesh::FRepData_*_&> @ 146f88560

FRepData * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerCategory_Navmesh::FRepData,FGameplayDebuggerCategory_Navmesh::FRepData_*_&>
          (FRepData **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<ANavLinkProxy,ANavLinkProxy_*_&> @ 146f88580

ANavLinkProxy * __cdecl
UE::Core::Private::DereferenceIfNecessary<ANavLinkProxy,ANavLinkProxy_*_&>(ANavLinkProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerCategory_Navmesh,FGameplayDebuggerCategory_Navmesh_*_&> @ 146f885a0

FGameplayDebuggerCategory_Navmesh * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerCategory_Navmesh,FGameplayDebuggerCategory_Navmesh_*_&>
          (FGameplayDebuggerCategory_Navmesh **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAIPerceptionComponent,UAIPerceptionComponent_*_&> @ 146f885c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAIPerceptionComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAIPerceptionComponent,UAIPerceptionComponent_*_&>
          (UAIPerceptionComponent **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAIPerceptionSystem,UAIPerceptionSystem_*_&> @ 146f885e0

UAIPerceptionSystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAIPerceptionSystem,UAIPerceptionSystem_*_&>
          (UAIPerceptionSystem **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAISense_Blueprint,UAISense_Blueprint_*_&> @ 146f88600

UAISense_Blueprint * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAISense_Blueprint,UAISense_Blueprint_*_&>
          (UAISense_Blueprint **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAISense_Hearing,UAISense_Hearing_*_&> @ 146f88620

UAISense_Hearing * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAISense_Hearing,UAISense_Hearing_*_&>
          (UAISense_Hearing **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAISense_Sight,UAISense_Sight_*_&> @ 146f88640

UAISense_Sight * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAISense_Sight,UAISense_Sight_*_&>
          (UAISense_Sight **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCrowdFollowingComponent,UCrowdFollowingComponent_*_&> @ 146f88660

UCrowdFollowingComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCrowdFollowingComponent,UCrowdFollowingComponent_*_&>
          (UCrowdFollowingComponent **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCrowdManager,UCrowdManager_*_&> @ 146f88680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UCrowdManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCrowdManager,UCrowdManager_*_&>(UCrowdManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UPathFollowingComponent,UPathFollowingComponent_*_&> @ 146f886a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPathFollowingComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UPathFollowingComponent,UPathFollowingComponent_*_&>
          (UPathFollowingComponent **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectKey<AActor>_>_> @ 146f8e140

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectKey<AActor>_>_>
          (ushort param_1,ForElementType<TObjectKey<AActor>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectKey<AActor>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// Rehash<TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>::ForElementType<FSetElementId>_> @ 146f8e210

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  ulonglong uVar1;
  ForElementType<FSetElementId> FVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(uint)param_2;
  if (param_1->SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_1->SecondaryData,0,0,4);
  }
  if (param_2 != 0) {
    TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>::ForElementType<FSetElementId>::
    ResizeAllocation(param_1,0,param_2,4);
    if (0 < param_2) {
      uVar3 = 0;
      do {
        FVar2 = (ForElementType<FSetElementId>)param_1;
        if (param_1->SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar2 = param_1->SecondaryData;
        }
        uVar1 = uVar3 & (longlong)param_2 - 1U;
        uVar3 = uVar3 + 1;
        *(undefined4 *)((longlong)FVar2 + uVar1 * 4) = 0xffffffff;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}

// NarrowWorldPositionChecked @ 146fbc7f0

TVector<float> * __cdecl
UE::LWC::NarrowWorldPositionChecked(TVector<float> *__return_storage_ptr__,TVector<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TVector<float> *pTVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  dVar2 = __real_3fb0000000000000;
  dVar5 = (param_1->field0_0x0)._s_0.X;
  fVar8 = (float)dVar5;
  dVar5 = (double)fVar8 - dVar5;
  if ((__real_3fb0000000000000 <
       (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar1)();
    return pTVar4;
  }
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar8;
  fVar8 = (float)dVar5;
  dVar5 = (double)fVar8 - dVar5;
  if ((dVar2 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar7,SUB84(dVar5,0) & uVar6)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"),
     uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar1)();
    return pTVar4;
  }
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar8;
  fVar8 = (float)dVar5;
  dVar5 = (double)fVar8 - dVar5;
  if ((dVar2 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar7,SUB84(dVar5,0) & uVar6)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar1)();
    return pTVar4;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar8;
  return __return_storage_ptr__;
}

// Construct<FAITouchEvent> @ 146fe9120

void __cdecl UE::CoreUObject::Private::Construct<FAITouchEvent>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(uchar *)((longlong)param_1 + 0x28) = FGenericTeamId::NoTeam.TeamID;
  return;
}

// ConstructForTests<FAITouchEvent> @ 146fe9160

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAITouchEvent>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(uchar *)((longlong)param_1 + 0x28) = FGenericTeamId::NoTeam.TeamID;
  return;
}

// Destruct<FAITouchEvent> @ 146fe91a0

void __cdecl UE::CoreUObject::Private::Destruct<FAITouchEvent>(void *param_1)

{
  return;
}

// Copy<FAITouchEvent> @ 146fe91b0

bool __cdecl UE::CoreUObject::Private::Copy<FAITouchEvent>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_1;
  puVar4 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar2;
    puVar3[2] = puVar4[2];
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[3] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[4] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)(puVar3 + 5) =
         *(undefined1 *)((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    puVar3 = puVar3 + 6;
    puVar4 = puVar4 + 6;
  }
  return true;
}

// Construct<FAITeamStimulusEvent> @ 146fe9730

void __cdecl UE::CoreUObject::Private::Construct<FAITeamStimulusEvent>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 0xff;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FAITeamStimulusEvent> @ 146fe9750

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAITeamStimulusEvent>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 0xff;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FAITeamStimulusEvent> @ 146fe9770

void __cdecl UE::CoreUObject::Private::Destruct<FAITeamStimulusEvent>(void *param_1)

{
  return;
}

// Copy<FAITeamStimulusEvent> @ 146fe9900

bool __cdecl
UE::CoreUObject::Private::Copy<FAITeamStimulusEvent>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_1;
  puVar4 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar2;
    puVar3[2] = puVar4[2];
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    puVar3[3] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    puVar3[4] = uVar2;
    puVar3[5] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)(puVar3 + 6) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)((longlong)puVar3 + 0x34) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined1 *)(puVar3 + 7) =
         *(undefined1 *)((longlong)puVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined4 *)((longlong)puVar3 + 0x3c) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x3c - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x40 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[8] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x48 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[9] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    puVar3 = puVar3 + 10;
    puVar4 = puVar4 + 10;
  }
  return true;
}

// DereferenceIfNecessary<UAISense_Touch,UAISense_Touch_*_&> @ 146fe9de0

UAISense_Touch * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAISense_Touch,UAISense_Touch_*_&>
          (UAISense_Touch **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAITask_MoveTo,UAITask_MoveTo_*_&> @ 146fe9e00

UAITask_MoveTo * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAITask_MoveTo,UAITask_MoveTo_*_&>
          (UAITask_MoveTo **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAITask_RunEQS,UAITask_RunEQS_*_&> @ 146fe9e20

UAITask_RunEQS * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAITask_RunEQS,UAITask_RunEQS_*_&>
          (UAITask_RunEQS **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UPawnSensingComponent,UPawnSensingComponent_*_&> @ 146fe9e40

UPawnSensingComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UPawnSensingComponent,UPawnSensingComponent_*_&>
          (UPawnSensingComponent **param_1)

{
  return *param_1;
}

