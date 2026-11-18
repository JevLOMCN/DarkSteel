// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FAnimGroupInstance> @ 147431470

TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FAnimGroupInstance> * __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FAnimGroupInstance>::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FAnimGroupInstance>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FAnimGroupInstance> *this,
          TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FAnimGroupInstance> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FAnimTickRecord *pFVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  puVar1 = &this->field_0x8;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x10;
  pFVar3 = *(FAnimTickRecord **)&param_1->field_0x8;
  *(int *)&this->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x14);
    ConstructItems<FAnimTickRecord,FAnimTickRecord,int>(*(void **)puVar1,pFVar3,iVar2);
  }
  puVar1 = &this->field_0x20;
  *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x28;
  pvVar4 = *(void **)&param_1->field_0x20;
  *(int *)&this->field_0x28 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x2c = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x2c);
    memcpy(*(void **)puVar1,pvVar4,(longlong)iVar2 << 3);
  }
  puVar1 = &this->field_0x38;
  this->field_0x30 = param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x40;
  pvVar4 = *(void **)&param_1->field_0x38;
  *(int *)&this->field_0x40 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x44 = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x44);
    memcpy(*(void **)puVar1,pvVar4,(longlong)iVar2 * 0xc);
  }
  uVar5 = *(undefined8 *)&param_1->field_0x50;
  *(undefined8 *)&this->field_0x48 = *(undefined8 *)&param_1->field_0x48;
  *(undefined8 *)&this->field_0x50 = uVar5;
  *(undefined4 *)&this->field_0x58 = *(undefined4 *)&param_1->field_0x58;
  uVar5 = *(undefined8 *)&param_1->field_0x64;
  *(undefined8 *)&this->field_0x5c = *(undefined8 *)&param_1->field_0x5c;
  *(undefined8 *)&this->field_0x64 = uVar5;
  *(undefined4 *)&this->field_0x6c = *(undefined4 *)&param_1->field_0x6c;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x70;
  *(undefined4 *)&this->field_0x78 = *(undefined4 *)&param_1->field_0x78;
  *(undefined4 *)&this->field_0x7c = *(undefined4 *)&param_1->field_0x7c;
  return this;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FRollbackNetStartupActorInfo> @ 147abeb70

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FRollbackNetStartupActorInfo>::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FRollbackNetStartupActorInfo>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FRollbackNetStartupActorInfo> *this
          )

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  *(undefined4 *)&this->field_0xc8 = 0;
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FRepState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FRepState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FRepState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x78);
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1>,TObjectPtr<UParticleSystem>,FPSCPool> @ 1481c6bc0

/* WARNING: Enum "Type": Some values do not have unique names */

TTupleBase<TIntegerSequence<unsigned_int,0,1>,TObjectPtr<UParticleSystem>,FPSCPool> * __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,TObjectPtr<UParticleSystem>,FPSCPool>::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,TObjectPtr<UParticleSystem>,FPSCPool>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,TObjectPtr<UParticleSystem>,FPSCPool> *this
          ,TTupleBase<TIntegerSequence<unsigned_int,0,1>,TObjectPtr<UParticleSystem>,FPSCPool>
           *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UObject *pUVar3;
  FPSCPoolElem *pFVar4;
  void *pvVar5;
  
  pUVar3 = *(UObject **)param_1;
  *(UObject **)this = pUVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar3);
  }
  puVar1 = &this->field_0x8;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x10;
  pFVar4 = *(FPSCPoolElem **)&param_1->field_0x8;
  *(int *)&this->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x14);
    ConstructItems<FPSCPoolElem,FPSCPoolElem,int>(*(void **)puVar1,pFVar4,iVar2);
  }
  puVar1 = &this->field_0x18;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x20;
  pvVar5 = *(void **)&param_1->field_0x18;
  *(int *)&this->field_0x20 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x24 = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x24);
    memcpy(*(void **)puVar1,pvVar5,(longlong)iVar2 << 3);
  }
  puVar1 = &this->field_0x28;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x30;
  pvVar5 = *(void **)&param_1->field_0x28;
  *(int *)&this->field_0x30 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x34 = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x34);
    memcpy(*(void **)puVar1,pvVar5,(longlong)iVar2 << 3);
  }
  *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  return this;
}

// SerializeStructured @ 148215de0

void __cdecl
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int>::
SerializeStructured(FStructuredArchiveSlot param_1,
                   TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int> *param_2)

{
  undefined1 *puVar1;
  FArchive *pFVar2;
  undefined4 *puVar3;
  
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x4;
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
  if (puVar3 + 1 <= (undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    return;
  }
  if ((pFVar2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148215e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,puVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)puVar1);
  return;
}

// SerializeStructured @ 148215eb0

void __cdecl
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float>::
SerializeStructured(FStructuredArchiveSlot param_1,
                   TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float> *param_2)

{
  undefined1 *puVar1;
  FArchive *pFVar2;
  undefined4 *puVar3;
  
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x4;
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
  if (puVar3 + 1 <= (undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    return;
  }
  if ((pFVar2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148215f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,puVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)puVar1);
  return;
}

// ApplyAfter<void_(__cdecl_UNetworkPhysicsSystem::*const_&)(UWorld_*,FWorldInitializationValues),UNetworkPhysicsSystem_*_&,UWorld_*,FWorldInitializationValues> @ 1482d0ea0

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
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<void_(__cdecl_UNetworkPhysicsSystem::*const_&)(UWorld_*,FWorldInitializationValues),UNetworkPhysicsSystem_*_&,UWorld_*,FWorldInitializationValues>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,pmf_09af4697 *param_1,
          UNetworkPhysicsSystem **param_2,UWorld **param_3,FWorldInitializationValues *param_4)

{
  undefined4 uVar1;
  pmf_09af4697 pVar2;
  UNetworkPhysicsSystem *pUVar3;
  uint local_18 [2];
  UClass *local_10;
  
  pVar2 = *param_1;
  pUVar3 = DereferenceIfNecessary<UNetworkPhysicsSystem,UNetworkPhysicsSystem_*_&>(param_2);
  uVar1 = *(undefined4 *)param_4;
  local_18[0] = (((undefined4 *)param_4)->bInitializeScenes ^ local_18[0]) & 1 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 2 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 4 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 8 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x10 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x20 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x40 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x80 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x100 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x200 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x400 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x800 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x1000 ^ local_18[0];
  local_10 = (param_4->DefaultGameMode).Class.field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_10);
  }
  (*(code *)pVar2)(pUVar3,*param_3,local_18);
  return;
}

// ApplyAfter<void_(__cdecl_UWorld::*const_&)(FString_const_&,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FUniqueNetIdRepl,FString),UWorld_*_&,FString_const_&> @ 1489a16c0

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
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FUniqueNetIdRepl,FString>
::
ApplyAfter<void_(__cdecl_UWorld::*const_&)(FString_const_&,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FUniqueNetIdRepl,FString),UWorld_*_&,FString_const_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FUniqueNetIdRepl,FString>
           *this,pmf_63fb0b56 *param_1,UWorld **param_2,FString *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  UWorld *pUVar3;
  FString *pFVar4;
  int iStack_50;
  FString local_48;
  undefined **local_38;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_30;
  undefined8 local_18;
  undefined8 local_10;
  
  pcVar1 = *(code **)param_1;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  pUVar3 = DereferenceIfNecessary<UWorld,UWorld_*_&>(param_2);
  iStack_50 = (int)uVar2;
  pFVar4 = ::FString::FString(&local_48,(FString *)&this->field_0x38);
  local_38 = &___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            (&local_30,
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&this->field_0x10);
  local_38 = &___7FUniqueNetIdRepl__6B_;
  local_18 = 0;
  local_10 = 0;
  (*pcVar1)((longlong)&pUVar3->_padding_ + (longlong)iStack_50,param_3,*(undefined8 *)this,&local_38
            ,pFVar4);
  return;
}

// ApplyAfter<void_(__cdecl_UContentBundleEngineSubsystem::*const_&)(UWorld_*,FWorldInitializationValues),UContentBundleEngineSubsystem_*_&,UWorld_*,FWorldInitializationValues> @ 148a2d660

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
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<void_(__cdecl_UContentBundleEngineSubsystem::*const_&)(UWorld_*,FWorldInitializationValues),UContentBundleEngineSubsystem_*_&,UWorld_*,FWorldInitializationValues>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,pmf_391bcd59 *param_1,
          UContentBundleEngineSubsystem **param_2,UWorld **param_3,
          FWorldInitializationValues *param_4)

{
  undefined4 uVar1;
  pmf_391bcd59 pVar2;
  UContentBundleEngineSubsystem *pUVar3;
  uint local_18 [2];
  UClass *local_10;
  
  pVar2 = *param_1;
  pUVar3 = DereferenceIfNecessary<UContentBundleEngineSubsystem,UContentBundleEngineSubsystem_*_&>
                     (param_2);
  uVar1 = *(undefined4 *)param_4;
  local_18[0] = (((undefined4 *)param_4)->bInitializeScenes ^ local_18[0]) & 1 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 2 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 4 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 8 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x10 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x20 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x40 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x80 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x100 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x200 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x400 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x800 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x1000 ^ local_18[0];
  local_10 = (param_4->DefaultGameMode).Class.field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_10);
  }
  (*(code *)pVar2)(pUVar3,*param_3,local_18);
  return;
}

