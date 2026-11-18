// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FRemoteObjectReference @ 1421b33d0

FRemoteObjectReference * __thiscall
FRemoteObjectReference::FRemoteObjectReference(FRemoteObjectReference *this,FObjectPtr *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  (this->ServerId).Id = 0;
  (this->ObjectId).field0_0x0.Id = 0;
  FRemoteServerId::VerifyComparableServerIds(0,0);
  uVar1 = (this->ObjectId).field0_0x0.Id;
  uVar2 = uVar1 >> 0x36;
  if ((uint)(uVar1 >> 0x36) == 0x3fd) {
    uVar2 = (ulonglong)FRemoteServerId::GlobalServerId.Id;
  }
  if ((uVar2 & 0x7ff) != 0 || (uVar1 >> 1 & 0x1fffffffffffff) != 0) {
    (this->ServerId).Id = 0x3fd;
  }
  return this;
}

// FRemoteObjectReference @ 1421b3430

FRemoteObjectReference * __thiscall
FRemoteObjectReference::FRemoteObjectReference(FRemoteObjectReference *this,FWeakObjectPtr *param_1)

{
  (this->ObjectId).field0_0x0.Id = 0;
  (this->ServerId).Id = 0;
  return this;
}

// NetDequantize @ 1421d6390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FRemoteObjectReference::NetDequantize
          (FRemoteObjectReference *this,FRemoteObjectId param_1,FRemoteServerId param_2,
          FRemoteObjectPathName *param_3)

{
  UObject *pUVar1;
  
  (this->ObjectId).field0_0x0._s_0 = (FRemoteObjectId_u_0_s_0)param_1.field0_0x0;
  (this->ServerId).Id = param_2.Id;
  UE::RemoteObject::Private::RegisterRemoteObjectId(param_1,param_2);
  if (*(int *)&param_3->field_0x8 != 0) {
    pUVar1 = StaticFindObjectFastInternal
                       ((FRemoteObjectId)*(FRemoteObjectId_u_0 *)&(this->ObjectId).field0_0x0._s_0,
                        RF_NoFlags,Borrowed);
    if (pUVar1 == (UObject *)0x0) {
      pUVar1 = UE::RemoteObject::Private::ResolveRemotePathName<FRemoteObjectPathName>
                         (param_3,(FRemoteObjectTables *)param_3);
      if (pUVar1 != (UObject *)0x0) {
        (this->ObjectId).field0_0x0.Id = 0;
      }
    }
  }
  return;
}

// NetSerialize @ 1421d6410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FRemoteObjectReference::NetSerialize
          (FRemoteObjectReference *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  long64 lVar1;
  UObject *pUVar2;
  FRemoteObjectTables local_58;
  FScriptContainerElement *local_38;
  undefined8 local_30;
  FScriptContainerElement *local_28;
  undefined8 local_20;
  
  FRemoteObjectId::Serialize(&this->ObjectId,param_1);
  FRemoteServerId::Serialize(&this->ServerId,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    UE::RemoteObject::Private::RegisterRemoteObjectId
              ((FRemoteObjectId)*(FRemoteObjectId_u_0 *)&(this->ObjectId).field0_0x0._s_0,
               (FRemoteServerId)(this->ServerId).Id);
  }
  local_58.Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Names.ArrayNum = 0;
  local_58.Names.ArrayMax = 0;
  local_58.RemoteIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.RemoteIds.ArrayNum = 0;
  local_58.RemoteIds.ArrayMax = 0;
  if ((((param_1->field_0x28 & 4) != 0) &&
      (lVar1 = FRemoteObjectId::Compare(&this->ObjectId,(FRemoteObjectId)0x0), lVar1 != 0)) &&
     (pUVar2 = StaticFindObjectFastInternal
                         ((FRemoteObjectId)*(FRemoteObjectId_u_0 *)&(this->ObjectId).field0_0x0._s_0
                          ,RF_NoFlags,Borrowed), pUVar2 != (UObject *)0x0)) {
    UE::RemoteObject::Private::RegisterSharedObject(pUVar2);
    local_38 = (FScriptContainerElement *)0x0;
    local_30 = 0;
    local_28 = (FScriptContainerElement *)0x0;
    local_20._0_4_ = 0;
    local_20._4_4_ = 0;
    AppendObjectToPathName(pUVar2,(FRemoteObjectPathName *)&local_38);
    if (local_58.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Names.AllocatorInstance.Data);
    }
    local_58.Names.AllocatorInstance.Data = local_38;
    local_58.Names._8_8_ = local_30;
    local_38 = (void *)0x0;
    local_30 = 0;
    if (local_58.RemoteIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.RemoteIds.AllocatorInstance.Data);
    }
    local_58.RemoteIds.AllocatorInstance.Data = local_28;
    local_58.RemoteIds.ArrayNum = (int)local_20;
    local_58.RemoteIds.ArrayMax = local_20._4_4_;
    local_20 = 0;
    local_28 = (FScriptContainerElement *)0x0;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&local_58.Names);
  TArrayPrivateFriend::Serialize<FRemoteObjectId,TSizedDefaultAllocator<32>_>
            (param_1,&local_58.RemoteIds);
  if ((((param_1->field_0x28 & 1) != 0) && (local_58.Names.ArrayNum != 0)) &&
     ((pUVar2 = StaticFindObjectFastInternal
                          ((FRemoteObjectId)
                           *(FRemoteObjectId_u_0 *)&(this->ObjectId).field0_0x0._s_0,RF_NoFlags,
                           Borrowed), pUVar2 == (UObject *)0x0 &&
      (pUVar2 = UE::RemoteObject::Private::ResolveRemotePathName<FRemoteObjectPathName>
                          ((FRemoteObjectPathName *)&local_58,&local_58), pUVar2 != (UObject *)0x0))
     )) {
    (this->ObjectId).field0_0x0.Id = 0;
  }
  *param_3 = true;
  if (local_58.RemoteIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.RemoteIds.AllocatorInstance.Data);
  }
  if (local_58.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Names.AllocatorInstance.Data);
  }
  return true;
}

// Resolve @ 1421e17c0

UObject * __thiscall FRemoteObjectReference::Resolve(FRemoteObjectReference *this)

{
  return (UObject *)0x0;
}

// Serialize @ 1421e6c50

bool __thiscall FRemoteObjectReference::Serialize(FRemoteObjectReference *this,FArchive *param_1)

{
  FRemoteObjectId::Serialize(&this->ObjectId,param_1);
  FRemoteServerId::Serialize(&this->ServerId,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    UE::RemoteObject::Private::RegisterRemoteObjectId
              ((FRemoteObjectId)*(FRemoteObjectId_u_0 *)&(this->ObjectId).field0_0x0._s_0,
               (FRemoteServerId)(this->ServerId).Id);
  }
  return true;
}

// ToObjectPtr @ 1421e95c0

FObjectPtr __thiscall FRemoteObjectReference::ToObjectPtr(FRemoteObjectReference *this)

{
  FObjectPtr_u_0 in_RDX;
  
  *(undefined8 *)in_RDX.Handle = 0;
  return (FObjectPtr)in_RDX;
}

// ToWeakPtr @ 1421ea320

FWeakObjectPtr __thiscall FRemoteObjectReference::ToWeakPtr(FRemoteObjectReference *this)

{
  FWeakObjectPtr in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

