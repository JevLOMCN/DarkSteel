// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// FInternalNetSerializationContext @ 144326b10

FInternalNetSerializationContext * __thiscall
UE::Net::Private::FInternalNetSerializationContext::FInternalNetSerializationContext
          (FInternalNetSerializationContext *this,UReplicationSystem *param_1)

{
  undefined1 *puVar1;
  UIrisObjectReferencePackageMap *pUVar2;
  bool bVar3;
  FReplicationSystemInternal *pFVar4;
  
  this->ReplicationSystem = param_1;
  pFVar4 = UReplicationSystem::GetReplicationSystemInternal(param_1);
  (this->ResolveContext).AsyncLoadingPriority = -1;
  this->ObjectReferenceCache = &pFVar4->ObjectReferenceCache;
  (this->ResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  (this->ResolveContext).ConnectionId = 0;
  (this->ResolveContext).bForceSyncLoad = false;
  pFVar4 = UReplicationSystem::GetReplicationSystemInternal(param_1);
  pUVar2 = pFVar4->IrisObjectReferencePackageMap;
  this->bDowngradeAutonomousProxyRole = 0;
  this->bInlineObjectReferenceExports = 0;
  this->PackageMap = pUVar2;
  bVar3 = UReplicationSystem::IsUsingRemoteObjectReferences(param_1);
  this->bSerializeObjectReferencesAsRemoteIds = 0;
  *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 | (uint)bVar3 * 4;
  return this;
}

// Alloc @ 144328260

void * __thiscall
UE::Net::Private::FInternalNetSerializationContext::Alloc
          (FInternalNetSerializationContext *this,ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(param_1,(uint)param_2);
  return pvVar1;
}

// Free @ 14432fa60

void __thiscall
UE::Net::Private::FInternalNetSerializationContext::Free
          (FInternalNetSerializationContext *this,void *param_1)

{
  FMemory::Free(param_1);
  return;
}

// Init @ 144331970

void __thiscall
UE::Net::Private::FInternalNetSerializationContext::Init
          (FInternalNetSerializationContext *this,FInitParameters *param_1)

{
  uint uVar1;
  int iVar2;
  undefined7 uVar3;
  FReplicationSystemInternal *pFVar4;
  
  this->ReplicationSystem = param_1->ReplicationSystem;
  pFVar4 = UReplicationSystem::GetReplicationSystemInternal(param_1->ReplicationSystem);
  this->ObjectReferenceCache = &pFVar4->ObjectReferenceCache;
  this->PackageMap = param_1->PackageMap;
  uVar1 = (param_1->ObjectResolveContext).ConnectionId;
  iVar2 = (param_1->ObjectResolveContext).AsyncLoadingPriority;
  (this->ResolveContext).RemoteNetTokenStoreState =
       (param_1->ObjectResolveContext).RemoteNetTokenStoreState;
  (this->ResolveContext).ConnectionId = uVar1;
  (this->ResolveContext).AsyncLoadingPriority = iVar2;
  uVar3 = *(undefined7 *)&(param_1->ObjectResolveContext).field_0x11;
  (this->ResolveContext).bForceSyncLoad = (param_1->ObjectResolveContext).bForceSyncLoad;
  *(undefined7 *)&(this->ResolveContext).field_0x11 = uVar3;
  return;
}

// Realloc @ 144338e40

void * __thiscall
UE::Net::Private::FInternalNetSerializationContext::Realloc
          (FInternalNetSerializationContext *this,void *param_1,ulong64 param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Realloc(param_1,param_2,param_3);
  return pvVar1;
}

