// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// operator== @ 144327420

bool __thiscall
UE::Net::FQuantizedObjectReference::operator==
          (FQuantizedObjectReference *this,FQuantizedObjectReference *param_1)

{
  if (this->RemoteReferencePtr == (FQuantizedRemoteObjectReference *)0x0) {
    if (((param_1->RemoteReferencePtr == (FQuantizedRemoteObjectReference *)0x0) &&
        ((((param_1->NetReference).RefHandle.field0_0x0.Value ^
          (this->NetReference).RefHandle.field0_0x0.Value) & 0x3fffffffffffff) == 0)) &&
       ((this->NetReference).PathToken.field0_0x0.Value ==
        (param_1->NetReference).PathToken.field0_0x0.Value)) {
      return true;
    }
  }
  else if (param_1->RemoteReferencePtr != (FQuantizedRemoteObjectReference *)0x0) {
    return this->RemoteReferencePtr->ObjectId == param_1->RemoteReferencePtr->ObjectId;
  }
  return false;
}

// FreeRemoteReference @ 144330110

void __thiscall
UE::Net::FQuantizedObjectReference::FreeRemoteReference
          (FQuantizedObjectReference *this,FNetSerializationContext *param_1,
          FNetSerializerBaseArgs *param_2)

{
  FNetFreeDynamicStateArgs local_28;
  
  local_28.Source = (ulong64)this->RemoteReferencePtr;
  if ((FQuantizedRemoteObjectReference *)local_28.Source != (FQuantizedRemoteObjectReference *)0x0)
  {
    local_28._padding_ = *(longlong *)&param_2->ChangeMaskInfo;
    local_28._padding_._0_4_ = param_2->Version;
    local_28._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
    (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
              (param_1,&local_28);
    FMemory::Free(this->RemoteReferencePtr);
    this->RemoteReferencePtr = (FQuantizedRemoteObjectReference *)0x0;
  }
  return;
}

// IsValid @ 144334940

bool __thiscall UE::Net::FQuantizedObjectReference::IsValid(FQuantizedObjectReference *this)

{
  FQuantizedRemoteObjectReference *pFVar1;
  
  pFVar1 = this->RemoteReferencePtr;
  if (pFVar1 == (FQuantizedRemoteObjectReference *)0x0) {
    if (((this->NetReference).RefHandle.field0_0x0.Value == 0) &&
       (((this->NetReference).PathToken.field0_0x0.Value & 0xfffff) == 0)) {
      return false;
    }
  }
  else if ((pFVar1->ObjectId == 0) || (pFVar1->ServerId == 0)) {
    return false;
  }
  return true;
}

// SetNetReference @ 14433eb20

void __thiscall
UE::Net::FQuantizedObjectReference::SetNetReference
          (FQuantizedObjectReference *this,FNetSerializationContext *param_1,
          FNetSerializerBaseArgs *param_2,FNetObjectReference *param_3)

{
  FNetToken FVar1;
  ENetObjectReferenceTraits EVar2;
  FNetFreeDynamicStateArgs local_28;
  
  local_28.Source = (ulong64)this->RemoteReferencePtr;
  if ((FQuantizedRemoteObjectReference *)local_28.Source != (FQuantizedRemoteObjectReference *)0x0)
  {
    local_28._padding_ = *(longlong *)&param_2->ChangeMaskInfo;
    local_28._padding_._0_4_ = param_2->Version;
    local_28._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
    (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
              (param_1,&local_28);
    FMemory::Free(this->RemoteReferencePtr);
    this->RemoteReferencePtr = (FQuantizedRemoteObjectReference *)0x0;
  }
  FVar1.field0_0x0 = (param_3->PathToken).field0_0x0;
  EVar2 = param_3->Traits;
  (this->NetReference).RefHandle.field0_0x0 = (param_3->RefHandle).field0_0x0;
  (this->NetReference).PathToken = (FNetToken)FVar1.field0_0x0;
  (this->NetReference).Traits = EVar2;
  return;
}

// ToString @ 14433ee40

/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */

FString * __thiscall
UE::Net::FQuantizedObjectReference::ToString
          (FQuantizedObjectReference *this,FString *__return_storage_ptr__)

{
  FNetToken *this_00;
  FRemoteObjectId_u_0 local_res8;
  FString local_28;
  FString local_18;
  
  if ((FRemoteObjectId_u_0 *)this->RemoteReferencePtr != (FRemoteObjectId_u_0 *)0x0) {
    local_res8 = *(FRemoteObjectId_u_0 *)this->RemoteReferencePtr;
    FRemoteObjectId::ToString((FRemoteObjectId *)&local_res8._s_0,&local_18,Default);
    ::FString::PrintfImpl(__return_storage_ptr__,L"Remote: %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  this_00 = &(this->NetReference).PathToken;
  if (((this_00->field0_0x0).Value & 0xfffff) != 0) {
    if ((this->NetReference).RefHandle.field0_0x0.Value != 0) {
      FNetToken::ToString(this_00,&local_28);
      FNetRefHandle::ToString((FNetRefHandle *)this,&local_18);
      ::FString::AppendfImpl(&local_28,L" : %s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      return __return_storage_ptr__;
    }
    FNetToken::ToString(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FNetRefHandle::ToString((FNetRefHandle *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

