// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 33

// CloneDynamicState @ 1443284f0

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<UObject_*>::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  FNetCloneDynamicStateArgs local_38;
  
  uVar1 = param_2->Source;
  uVar2 = param_2->Target;
  if (*(longlong *)(uVar1 + 0x10) != 0) {
    puVar3 = FMemory::Malloc(0x30,8);
    *(undefined8 **)(uVar2 + 0x10) = puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38._padding_ = (longlong)RemoteObjectReferenceNetSerializerConfig;
    local_38.Source = *(ulong64 *)(uVar1 + 0x10);
    local_38.Target = *(ulong64 *)(uVar2 + 0x10);
    (*RemoteObjectReferenceNetSerializer->CloneDynamicState)(param_1,&local_38);
  }
  return;
}

// CloneDynamicState @ 1443285a0

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  FNetCloneDynamicStateArgs local_38;
  
  uVar1 = param_2->Source;
  uVar2 = param_2->Target;
  if (*(longlong *)(uVar1 + 0x10) != 0) {
    puVar3 = FMemory::Malloc(0x30,8);
    *(undefined8 **)(uVar2 + 0x10) = puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38._padding_ = (longlong)RemoteObjectReferenceNetSerializerConfig;
    local_38.Source = *(ulong64 *)(uVar1 + 0x10);
    local_38.Target = *(ulong64 *)(uVar2 + 0x10);
    (*RemoteObjectReferenceNetSerializer->CloneDynamicState)(param_1,&local_38);
  }
  return;
}

// CloneDynamicState @ 144328650

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::
CloneDynamicState(FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  FNetCloneDynamicStateArgs local_38;
  
  uVar1 = param_2->Source;
  uVar2 = param_2->Target;
  if (*(longlong *)(uVar1 + 0x10) != 0) {
    puVar3 = FMemory::Malloc(0x30,8);
    *(undefined8 **)(uVar2 + 0x10) = puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38._padding_ = (longlong)RemoteObjectReferenceNetSerializerConfig;
    local_38.Source = *(ulong64 *)(uVar1 + 0x10);
    local_38.Target = *(ulong64 *)(uVar2 + 0x10);
    (*RemoteObjectReferenceNetSerializer->CloneDynamicState)(param_1,&local_38);
  }
  return;
}

// CloneDynamicState @ 144328700

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  FNetCloneDynamicStateArgs local_38;
  
  uVar1 = param_2->Source;
  uVar2 = param_2->Target;
  if (*(longlong *)(uVar1 + 0x10) != 0) {
    puVar3 = FMemory::Malloc(0x30,8);
    *(undefined8 **)(uVar2 + 0x10) = puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38._padding_ = (longlong)RemoteObjectReferenceNetSerializerConfig;
    local_38.Source = *(ulong64 *)(uVar1 + 0x10);
    local_38.Target = *(ulong64 *)(uVar2 + 0x10);
    (*RemoteObjectReferenceNetSerializer->CloneDynamicState)(param_1,&local_38);
  }
  return;
}

// Dequantize @ 144329a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<UObject_*>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  FObjectReferenceCache *this;
  UObjectBaseUtility *this_00;
  UObjectBaseUtility *pUVar3;
  UObjectBaseUtility *pUVar4;
  UObject *this_01;
  UObject *local_res10;
  FString local_38;
  FString local_28;
  
  lVar1 = param_2->_padding_;
  puVar2 = (undefined8 *)param_2->Target;
  if (((FNetObjectReference *)param_2->Source)[1].RefHandle.field0_0x0.Value != 0) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<UObject*___ptr64>::Dequantize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDequantizeArgs_const&___ptr64)'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
    return;
  }
  pUVar3 = (UObjectBaseUtility *)0x0;
  this = param_1->InternalContext->ObjectReferenceCache;
  this_01 = (UObject *)pUVar3;
  if (this != (FObjectReferenceCache *)0x0) {
    local_res10 = (UObject *)0x0;
    FObjectReferenceCache::ResolveObjectReference
              (this,(FNetObjectReference *)param_2->Source,&param_1->InternalContext->ResolveContext
               ,&local_res10);
    this_01 = local_res10;
  }
  this_00 = *(UObjectBaseUtility **)(lVar1 + 0x10);
  pUVar4 = (UObjectBaseUtility *)this_01;
  if ((this_00 != (UObjectBaseUtility *)0x0) && (this_01 != (UObject *)0x0)) {
    if (((*(int *)(*(longlong *)&((UObjectBaseUtility *)this_01)->field_0x10 + 0x38) <
          *(int *)&this_00[1].field_0x10) ||
        (*(undefined1 **)
          (*(longlong *)(*(longlong *)&((UObjectBaseUtility *)this_01)->field_0x10 + 0x30) +
          (longlong)*(int *)&this_00[1].field_0x10 * 8) != &this_00[1].field_0x8)) &&
       (pUVar4 = pUVar3, 2 < (byte)LogIris._0_1_)) {
      UObjectBaseUtility::GetFullName(this_00,&local_28,(UObject *)0x0,None);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_38,(UObject *)0x0,None);
      Logging::Private::BasicLog<3>
                (&`protected:_static_class_UObject*___ptr64___cdecl_UE::Net::Private::FObjectNetSerializerBase<UObject*___ptr64>::GetValidatedRawPtrValue(UObject*___ptr64,UClass_const*___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        *puVar2 = 0;
        return;
      }
    }
  }
  *puVar2 = pUVar4;
  return;
}

// Dequantize @ 144329c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  FObjectReferenceCache *this;
  UObjectBaseUtility *this_00;
  UObject *pUVar3;
  UObject *pUVar4;
  UObject *this_01;
  UObject *local_res10;
  FString local_38;
  FString local_28;
  
  lVar1 = param_2->_padding_;
  puVar2 = (undefined8 *)param_2->Target;
  if (((FNetObjectReference *)param_2->Source)[1].RefHandle.field0_0x0.Value != 0) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Dequantize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDequantizeArgs_const&___ptr64)'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
    return;
  }
  pUVar3 = (UObject *)0x0;
  this = param_1->InternalContext->ObjectReferenceCache;
  this_01 = pUVar3;
  if (this != (FObjectReferenceCache *)0x0) {
    local_res10 = (UObject *)0x0;
    FObjectReferenceCache::ResolveObjectReference
              (this,(FNetObjectReference *)param_2->Source,&param_1->InternalContext->ResolveContext
               ,&local_res10);
    this_01 = local_res10;
  }
  this_00 = *(UObjectBaseUtility **)(lVar1 + 0x10);
  pUVar4 = this_01;
  if ((this_00 != (UObjectBaseUtility *)0x0) && (this_01 != (UObject *)0x0)) {
    if (((*(int *)(*(longlong *)&((UObjectBaseUtility *)this_01)->field_0x10 + 0x38) <
          *(int *)&this_00[1].field_0x10) ||
        (*(undefined1 **)
          (*(longlong *)(*(longlong *)&((UObjectBaseUtility *)this_01)->field_0x10 + 0x30) +
          (longlong)*(int *)&this_00[1].field_0x10 * 8) != &this_00[1].field_0x8)) &&
       (pUVar4 = pUVar3, 2 < (byte)LogIris._0_1_)) {
      UObjectBaseUtility::GetFullName(this_00,&local_28,(UObject *)0x0,None);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_38,(UObject *)0x0,None);
      Logging::Private::BasicLog<3>
                (&`protected:_static_class_UObject*___ptr64___cdecl_UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::GetValidatedRawPtrValue(UObject*___ptr64,UClass_const*___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar4);
  }
  *puVar2 = pUVar4;
  return;
}

// Dequantize @ 144329da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  longlong lVar1;
  FWeakObjectPtr *pFVar2;
  FObjectReferenceCache *this;
  UObjectBaseUtility *this_00;
  UObject *this_01;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  FString local_38;
  FString local_28;
  
  lVar1 = param_2->_padding_;
  pFVar2 = (FWeakObjectPtr *)param_2->Target;
  if (((FNetObjectReference *)param_2->Source)[1].RefHandle.field0_0x0.Value == 0) {
    this = param_1->InternalContext->ObjectReferenceCache;
    if (this == (FObjectReferenceCache *)0x0) {
      this_01 = (UObject *)0x0;
    }
    else {
      local_res18[0] = (UObject *)0x0;
      FObjectReferenceCache::ResolveObjectReference
                (this,(FNetObjectReference *)param_2->Source,
                 &param_1->InternalContext->ResolveContext,local_res18);
      this_01 = local_res18[0];
    }
    this_00 = *(UObjectBaseUtility **)(lVar1 + 0x10);
    if ((this_00 != (UObjectBaseUtility *)0x0) && (this_01 != (UObject *)0x0)) {
      if ((*(int *)(*(longlong *)&((UObjectBaseUtility *)this_01)->field_0x10 + 0x38) <
           *(int *)&this_00[1].field_0x10) ||
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)&((UObjectBaseUtility *)this_01)->field_0x10 + 0x30) +
           (longlong)*(int *)&this_00[1].field_0x10 * 8) != &this_00[1].field_0x8)) {
        if (2 < (byte)LogIris._0_1_) {
          UObjectBaseUtility::GetFullName(this_00,&local_28,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_01,&local_38,(UObject *)0x0,None);
          Logging::Private::BasicLog<3>
                    (&`protected:_static_class_UObject*___ptr64___cdecl_UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::GetValidatedRawPtrValue(UObject*___ptr64,UClass_const*___ptr64)'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        this_01 = (UObject *)0x0;
      }
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UObject *)0x0)) {
      GC::MarkAsReachable(this_01);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = this_01;
    if ((GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UObject *)0x0)) {
      GC::MarkAsReachable(this_01);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    *pFVar2 = local_res10;
    return;
  }
  if (1 < (byte)LogIris._0_1_) {
    Logging::Private::BasicLog<2>
              (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Dequantize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDequantizeArgs_const&___ptr64)'
                ::__l11::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
  return;
}

// Deserialize @ 14432be20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<UObject_*>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetRefHandle_u_0 *pFVar1;
  FObjectReferenceCache *this;
  uint uVar2;
  FNetRefHandle_u_0 local_38;
  ulong64 uStack_30;
  FNetFreeDynamicStateArgs local_28;
  
  pFVar1 = (FNetRefHandle_u_0 *)param_2->Target;
  uVar2 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar2 & 1) == 0) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<UObject*___ptr64>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
    return;
  }
  local_38.Value = 0;
  uStack_30 = 0;
  this = param_1->InternalContext->ObjectReferenceCache;
  if (param_1->InternalContext->bInlineObjectReferenceExports == 0) {
    FObjectReferenceCache::ReadReference(this,param_1,(FNetObjectReference *)&local_38._s_0);
  }
  else {
    FObjectReferenceCache::ReadFullReference(this,param_1,(FNetObjectReference *)&local_38._s_0);
  }
  local_28.Source = pFVar1[2].Value;
  if (local_28.Source != 0) {
    local_28._padding_ = param_2->_padding_;
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
    (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
              (param_1,&local_28);
    FMemory::Free((void *)pFVar1[2]);
    pFVar1[2].Value = 0;
  }
  pFVar1->Value = (ulong64)local_38;
  pFVar1[1].Value = uStack_30;
  return;
}

// Deserialize @ 14432bf30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetRefHandle_u_0 *pFVar1;
  FObjectReferenceCache *this;
  uint uVar2;
  FNetRefHandle_u_0 local_38;
  ulong64 uStack_30;
  FNetFreeDynamicStateArgs local_28;
  
  pFVar1 = (FNetRefHandle_u_0 *)param_2->Target;
  uVar2 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar2 & 1) == 0) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
    return;
  }
  local_38.Value = 0;
  uStack_30 = 0;
  this = param_1->InternalContext->ObjectReferenceCache;
  if (param_1->InternalContext->bInlineObjectReferenceExports == 0) {
    FObjectReferenceCache::ReadReference(this,param_1,(FNetObjectReference *)&local_38._s_0);
  }
  else {
    FObjectReferenceCache::ReadFullReference(this,param_1,(FNetObjectReference *)&local_38._s_0);
  }
  local_28.Source = pFVar1[2].Value;
  if (local_28.Source != 0) {
    local_28._padding_ = param_2->_padding_;
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
    (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
              (param_1,&local_28);
    FMemory::Free((void *)pFVar1[2]);
    pFVar1[2].Value = 0;
  }
  pFVar1->Value = (ulong64)local_38;
  pFVar1[1].Value = uStack_30;
  return;
}

// Deserialize @ 14432c040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetRefHandle_u_0 *pFVar1;
  FObjectReferenceCache *this;
  uint uVar2;
  FNetRefHandle_u_0 local_38;
  ulong64 uStack_30;
  FNetFreeDynamicStateArgs local_28;
  
  pFVar1 = (FNetRefHandle_u_0 *)param_2->Target;
  uVar2 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar2 & 1) == 0) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
    return;
  }
  local_38.Value = 0;
  uStack_30 = 0;
  this = param_1->InternalContext->ObjectReferenceCache;
  if (param_1->InternalContext->bInlineObjectReferenceExports == 0) {
    FObjectReferenceCache::ReadReference(this,param_1,(FNetObjectReference *)&local_38._s_0);
  }
  else {
    FObjectReferenceCache::ReadFullReference(this,param_1,(FNetObjectReference *)&local_38._s_0);
  }
  local_28.Source = pFVar1[2].Value;
  if (local_28.Source != 0) {
    local_28._padding_ = param_2->_padding_;
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
    (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
              (param_1,&local_28);
    FMemory::Free((void *)pFVar1[2]);
    pFVar1[2].Value = 0;
  }
  pFVar1->Value = (ulong64)local_38;
  pFVar1[1].Value = uStack_30;
  return;
}

// Deserialize @ 14432c150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetRefHandle_u_0 *pFVar1;
  FObjectReferenceCache *this;
  uint uVar2;
  FNetRefHandle_u_0 local_38;
  ulong64 uStack_30;
  FNetFreeDynamicStateArgs local_28;
  
  pFVar1 = (FNetRefHandle_u_0 *)param_2->Target;
  uVar2 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar2 & 1) == 0) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
    return;
  }
  local_38.Value = 0;
  uStack_30 = 0;
  this = param_1->InternalContext->ObjectReferenceCache;
  if (param_1->InternalContext->bInlineObjectReferenceExports == 0) {
    FObjectReferenceCache::ReadReference(this,param_1,(FNetObjectReference *)&local_38._s_0);
  }
  else {
    FObjectReferenceCache::ReadFullReference(this,param_1,(FNetObjectReference *)&local_38._s_0);
  }
  local_28.Source = pFVar1[2].Value;
  if (local_28.Source != 0) {
    local_28._padding_ = param_2->_padding_;
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
    (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
              (param_1,&local_28);
    FMemory::Free((void *)pFVar1[2]);
    pFVar1[2].Value = 0;
  }
  pFVar1->Value = (ulong64)local_38;
  pFVar1[1].Value = uStack_30;
  return;
}

// FreeDynamicState @ 14432fab0

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<UObject_*>::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  ulong64 uVar1;
  FNetFreeDynamicStateArgs local_28;
  
  uVar1 = param_2->Source;
  local_28.Source = *(ulong64 *)(uVar1 + 0x10);
  if (local_28.Source != 0) {
    local_28._padding_ = param_2->_padding_;
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
    (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
              (param_1,&local_28);
    FMemory::Free(*(void **)(uVar1 + 0x10));
    *(undefined8 *)(uVar1 + 0x10) = 0;
  }
  return;
}

// FreeDynamicState @ 14432fb10

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  ulong64 uVar1;
  FNetFreeDynamicStateArgs local_28;
  
  uVar1 = param_2->Source;
  local_28.Source = *(ulong64 *)(uVar1 + 0x10);
  if (local_28.Source != 0) {
    local_28._padding_ = param_2->_padding_;
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
    (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
              (param_1,&local_28);
    FMemory::Free(*(void **)(uVar1 + 0x10));
    *(undefined8 *)(uVar1 + 0x10) = 0;
  }
  return;
}

// FreeDynamicState @ 14432fb70

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::
FreeDynamicState(FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  ulong64 uVar1;
  FNetFreeDynamicStateArgs local_28;
  
  uVar1 = param_2->Source;
  local_28.Source = *(ulong64 *)(uVar1 + 0x10);
  if (local_28.Source != 0) {
    local_28._padding_ = param_2->_padding_;
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
    (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
              (param_1,&local_28);
    FMemory::Free(*(void **)(uVar1 + 0x10));
    *(undefined8 *)(uVar1 + 0x10) = 0;
  }
  return;
}

// FreeDynamicState @ 14432fbd0

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  ulong64 uVar1;
  FNetFreeDynamicStateArgs local_28;
  
  uVar1 = param_2->Source;
  local_28.Source = *(ulong64 *)(uVar1 + 0x10);
  if (local_28.Source != 0) {
    local_28._padding_ = param_2->_padding_;
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
    (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
              (param_1,&local_28);
    FMemory::Free(*(void **)(uVar1 + 0x10));
    *(undefined8 *)(uVar1 + 0x10) = 0;
  }
  return;
}

// GetValidatedRawPtrValue @ 144331610

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
UE::Net::Private::FObjectNetSerializerBase<UObject_*>::GetValidatedRawPtrValue
          (UObject *param_1,UClass *param_2)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  if ((param_2 != (UClass *)0x0) && (param_1 != (UObject *)0x0)) {
    iVar1 = (int)param_2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &param_2->_padding_)) {
      if (2 < (byte)LogIris._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_18,(UObject *)0x0,None)
        ;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None)
        ;
        Logging::Private::BasicLog<3>
                  (&`protected:_static_class_UObject*___ptr64___cdecl_UE::Net::Private::FObjectNetSerializerBase<UObject*___ptr64>::GetValidatedRawPtrValue(UObject*___ptr64,UClass_const*___ptr64)'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return (UObject *)0x0;
    }
  }
  return param_1;
}

// GetValidatedRawPtrValue @ 144331700

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::GetValidatedRawPtrValue
          (UObject *param_1,UClass *param_2)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  if ((param_2 != (UClass *)0x0) && (param_1 != (UObject *)0x0)) {
    iVar1 = (int)param_2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &param_2->_padding_)) {
      if (2 < (byte)LogIris._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_18,(UObject *)0x0,None)
        ;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None)
        ;
        Logging::Private::BasicLog<3>
                  (&`protected:_static_class_UObject*___ptr64___cdecl_UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::GetValidatedRawPtrValue(UObject*___ptr64,UClass_const*___ptr64)'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return (UObject *)0x0;
    }
  }
  return param_1;
}

// GetValidatedRawPtrValue @ 1443317f0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::
GetValidatedRawPtrValue(UObject *param_1,UClass *param_2)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  if ((param_2 != (UClass *)0x0) && (param_1 != (UObject *)0x0)) {
    iVar1 = (int)param_2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &param_2->_padding_)) {
      if (2 < (byte)LogIris._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_18,(UObject *)0x0,None)
        ;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None)
        ;
        Logging::Private::BasicLog<3>
                  (&`protected:_static_class_UObject*___ptr64___cdecl_UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::GetValidatedRawPtrValue(UObject*___ptr64,UClass_const*___ptr64)'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return (UObject *)0x0;
    }
  }
  return param_1;
}

// IsEqual @ 1443334c0

bool __cdecl
UE::Net::Private::FObjectNetSerializerBase<UObject_*>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  
  puVar1 = (ulonglong *)param_2->Source0;
  puVar2 = (ulonglong *)param_2->Source1;
  if (param_2->bStateIsQuantized == false) {
    return *puVar1 == *puVar2;
  }
  if ((longlong *)puVar1[2] == (longlong *)0x0) {
    if (((puVar2[2] == 0) && (((*puVar1 ^ *puVar2) & 0x3fffffffffffff) == 0)) &&
       ((int)puVar1[1] == (int)puVar2[1])) {
      return true;
    }
  }
  else if ((longlong *)puVar2[2] != (longlong *)0x0) {
    return *(longlong *)puVar1[2] == *(longlong *)puVar2[2];
  }
  return false;
}

// IsEqual @ 144333530

bool __cdecl
UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  FWeakObjectPtr *this;
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  
  this = (FWeakObjectPtr *)param_2->Source0;
  pFVar1 = (FWeakObjectPtr *)param_2->Source1;
  if (param_2->bStateIsQuantized == false) {
    bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                      ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)this,
                       (TWeakObjectPtr<UObject,FWeakObjectPtr> *)pFVar1);
    return bVar2;
  }
  if (this[2] == (FWeakObjectPtr)0x0) {
    if (((pFVar1[2] == (FWeakObjectPtr)0x0) &&
        ((((ulonglong)*pFVar1 ^ (ulonglong)*this) & 0x3fffffffffffff) == 0)) &&
       (this[1].ObjectIndex == pFVar1[1].ObjectIndex)) {
      return true;
    }
  }
  else if (pFVar1[2] != (FWeakObjectPtr)0x0) {
    return *(longlong *)this[2] == *(longlong *)pFVar1[2];
  }
  return false;
}

// IsEqual @ 1443335a0

bool __cdecl
UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  puVar1 = (ulonglong *)param_2->Source0;
  puVar2 = (ulonglong *)param_2->Source1;
  if (param_2->bStateIsQuantized == false) {
    uVar3 = *puVar1;
    uVar5 = 0;
    uVar6 = uVar5;
    if (uVar3 != 0) {
      uVar6 = puVar1[1];
    }
    uVar4 = *puVar2;
    if (uVar4 != 0) {
      uVar5 = puVar2[1];
    }
    if (uVar6 == uVar5) {
      if (uVar3 == 0) {
        bVar7 = uVar4 == 0;
      }
      else {
        bVar7 = uVar3 == uVar4;
      }
      if (bVar7) {
        return true;
      }
    }
  }
  else if ((longlong *)puVar1[2] == (longlong *)0x0) {
    if (((puVar2[2] == 0) && (((*puVar1 ^ *puVar2) & 0x3fffffffffffff) == 0)) &&
       ((int)puVar1[1] == (int)puVar2[1])) {
      return true;
    }
  }
  else if ((longlong *)puVar2[2] != (longlong *)0x0) {
    return *(longlong *)puVar1[2] == *(longlong *)puVar2[2];
  }
  return false;
}

// Quantize @ 144335690

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<UObject_*>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  FQuantizedObjectReference *this;
  FNetRefHandle_u_0 *pFVar1;
  FNetRefHandle_u_0 local_28;
  undefined8 local_20;
  FNetObjectReference local_18;
  
  this = (FQuantizedObjectReference *)param_2->Target;
  if (param_1->bIsInitializingDefaultState == 0) {
    pFVar1 = (FNetRefHandle_u_0 *)
             FObjectReferenceCache::GetOrCreateObjectReference
                       (param_1->InternalContext->ObjectReferenceCache,&local_18,
                        *(UObject **)param_2->Source);
  }
  else {
    local_28.Value = 0;
    local_20 = 0;
    pFVar1 = &local_28;
  }
  FQuantizedObjectReference::SetNetReference
            (this,param_1,(FNetSerializerBaseArgs *)param_2,(FNetObjectReference *)&pFVar1->_s_0);
  return;
}

// Quantize @ 144335710

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  FQuantizedObjectReference *this;
  FNetRefHandle_u_0 *pFVar1;
  FNetRefHandle_u_0 local_28;
  undefined8 local_20;
  FNetObjectReference local_18;
  
  this = (FQuantizedObjectReference *)param_2->Target;
  if (param_1->bIsInitializingDefaultState == 0) {
    pFVar1 = (FNetRefHandle_u_0 *)
             FObjectReferenceCache::GetOrCreateObjectReference
                       (param_1->InternalContext->ObjectReferenceCache,&local_18,
                        *(UObject **)param_2->Source);
  }
  else {
    local_28.Value = 0;
    local_20 = 0;
    pFVar1 = &local_28;
  }
  FQuantizedObjectReference::SetNetReference
            (this,param_1,(FNetSerializerBaseArgs *)param_2,(FNetObjectReference *)&pFVar1->_s_0);
  return;
}

// Quantize @ 144335790

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  FInternalNetSerializationContext *pFVar1;
  FQuantizedObjectReference *this;
  UObject *pUVar2;
  FNetRefHandle_u_0 *pFVar3;
  FNetRefHandle_u_0 local_28;
  undefined8 local_20;
  FNetObjectReference local_18;
  
  pFVar1 = param_1->InternalContext;
  this = (FQuantizedObjectReference *)param_2->Target;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2->Source);
  if (param_1->bIsInitializingDefaultState == 0) {
    pFVar3 = (FNetRefHandle_u_0 *)
             FObjectReferenceCache::GetOrCreateObjectReference
                       (pFVar1->ObjectReferenceCache,&local_18,pUVar2);
  }
  else {
    local_28.Value = 0;
    local_20 = 0;
    pFVar3 = &local_28;
  }
  FQuantizedObjectReference::SetNetReference
            (this,param_1,(FNetSerializerBaseArgs *)param_2,(FNetObjectReference *)&pFVar3->_s_0);
  return;
}

// Quantize @ 144335820

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  FQuantizedObjectReference *this;
  FNetRefHandle_u_0 *pFVar1;
  FNetRefHandle_u_0 local_28;
  undefined8 local_20;
  FNetObjectReference local_18;
  
  this = (FQuantizedObjectReference *)param_2->Target;
  if (param_1->bIsInitializingDefaultState == 0) {
    pFVar1 = (FNetRefHandle_u_0 *)
             FObjectReferenceCache::GetOrCreateObjectReference
                       (param_1->InternalContext->ObjectReferenceCache,&local_18,
                        *(UObject **)param_2->Source);
  }
  else {
    local_28.Value = 0;
    local_20 = 0;
    pFVar1 = &local_28;
  }
  FQuantizedObjectReference::SetNetReference
            (this,param_1,(FNetSerializerBaseArgs *)param_2,(FNetObjectReference *)&pFVar1->_s_0);
  return;
}

// ResolveObjectReference @ 14433a5b0

UObject * __cdecl
UE::Net::Private::FObjectNetSerializerBase<UObject_*>::ResolveObjectReference
          (FNetSerializationContext *param_1,FNetObjectReference *param_2)

{
  FObjectReferenceCache *this;
  UObject *local_res8 [4];
  
  this = param_1->InternalContext->ObjectReferenceCache;
  if (this != (FObjectReferenceCache *)0x0) {
    local_res8[0] = (UObject *)0x0;
    FObjectReferenceCache::ResolveObjectReference
              (this,param_2,&param_1->InternalContext->ResolveContext,local_res8);
    return local_res8[0];
  }
  return (UObject *)0x0;
}

// ResolveObjectReference @ 14433a600

UObject * __cdecl
UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::ResolveObjectReference
          (FNetSerializationContext *param_1,FNetObjectReference *param_2)

{
  FObjectReferenceCache *this;
  UObject *local_res8 [4];
  
  this = param_1->InternalContext->ObjectReferenceCache;
  if (this != (FObjectReferenceCache *)0x0) {
    local_res8[0] = (UObject *)0x0;
    FObjectReferenceCache::ResolveObjectReference
              (this,param_2,&param_1->InternalContext->ResolveContext,local_res8);
    return local_res8[0];
  }
  return (UObject *)0x0;
}

// ResolveObjectReference @ 14433a650

UObject * __cdecl
UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::
ResolveObjectReference(FNetSerializationContext *param_1,FNetObjectReference *param_2)

{
  FObjectReferenceCache *this;
  UObject *local_res8 [4];
  
  this = param_1->InternalContext->ObjectReferenceCache;
  if (this != (FObjectReferenceCache *)0x0) {
    local_res8[0] = (UObject *)0x0;
    FObjectReferenceCache::ResolveObjectReference
              (this,param_2,&param_1->InternalContext->ResolveContext,local_res8);
    return local_res8[0];
  }
  return (UObject *)0x0;
}

// ResolveObjectReference @ 14433a6a0

UObject * __cdecl
UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::ResolveObjectReference
          (FNetSerializationContext *param_1,FNetObjectReference *param_2)

{
  FObjectReferenceCache *this;
  UObject *local_res8 [4];
  
  this = param_1->InternalContext->ObjectReferenceCache;
  if (this != (FObjectReferenceCache *)0x0) {
    local_res8[0] = (UObject *)0x0;
    FObjectReferenceCache::ResolveObjectReference
              (this,param_2,&param_1->InternalContext->ResolveContext,local_res8);
    return local_res8[0];
  }
  return (UObject *)0x0;
}

// Serialize @ 14433b3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<UObject_*>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FQuantizedObjectReference *this;
  FObjectReferenceCache *this_00;
  FNetRefHandle_u_0 local_18;
  undefined8 uStack_10;
  
  this = (FQuantizedObjectReference *)param_2->Source;
  if (this->RemoteReferencePtr != (FQuantizedRemoteObjectReference *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      FQuantizedObjectReference::ToString(this,(FString *)&local_18._s_0);
      Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<UObject*___ptr64>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
      if ((void *)local_18.Value != (void *)0x0) {
        FMemory::Free((void *)local_18);
      }
    }
    FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
    return;
  }
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,1,1);
  local_18 = (this->NetReference).RefHandle.field0_0x0;
  uStack_10._0_4_ = (this->NetReference).PathToken;
  uStack_10._4_4_ = (this->NetReference).Traits;
  this_00 = param_1->InternalContext->ObjectReferenceCache;
  if (param_1->InternalContext->bInlineObjectReferenceExports == 0) {
    FObjectReferenceCache::WriteReference(this_00,param_1,(FNetObjectReference *)&local_18._s_0);
    return;
  }
  FObjectReferenceCache::WriteFullReference(this_00,param_1,(FNetObjectReference *)&local_18._s_0);
  return;
}

// Serialize @ 14433b4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FQuantizedObjectReference *this;
  FObjectReferenceCache *this_00;
  FNetRefHandle_u_0 local_18;
  undefined8 uStack_10;
  
  this = (FQuantizedObjectReference *)param_2->Source;
  if (this->RemoteReferencePtr != (FQuantizedRemoteObjectReference *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      FQuantizedObjectReference::ToString(this,(FString *)&local_18._s_0);
      Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
      if ((void *)local_18.Value != (void *)0x0) {
        FMemory::Free((void *)local_18);
      }
    }
    FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
    return;
  }
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,1,1);
  local_18 = (this->NetReference).RefHandle.field0_0x0;
  uStack_10._0_4_ = (this->NetReference).PathToken;
  uStack_10._4_4_ = (this->NetReference).Traits;
  this_00 = param_1->InternalContext->ObjectReferenceCache;
  if (param_1->InternalContext->bInlineObjectReferenceExports == 0) {
    FObjectReferenceCache::WriteReference(this_00,param_1,(FNetObjectReference *)&local_18._s_0);
    return;
  }
  FObjectReferenceCache::WriteFullReference(this_00,param_1,(FNetObjectReference *)&local_18._s_0);
  return;
}

// Serialize @ 14433b5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FQuantizedObjectReference *this;
  FObjectReferenceCache *this_00;
  FNetRefHandle_u_0 local_18;
  undefined8 uStack_10;
  
  this = (FQuantizedObjectReference *)param_2->Source;
  if (this->RemoteReferencePtr != (FQuantizedRemoteObjectReference *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      FQuantizedObjectReference::ToString(this,(FString *)&local_18._s_0);
      Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
      if ((void *)local_18.Value != (void *)0x0) {
        FMemory::Free((void *)local_18);
      }
    }
    FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
    return;
  }
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,1,1);
  local_18 = (this->NetReference).RefHandle.field0_0x0;
  uStack_10._0_4_ = (this->NetReference).PathToken;
  uStack_10._4_4_ = (this->NetReference).Traits;
  this_00 = param_1->InternalContext->ObjectReferenceCache;
  if (param_1->InternalContext->bInlineObjectReferenceExports == 0) {
    FObjectReferenceCache::WriteReference(this_00,param_1,(FNetObjectReference *)&local_18._s_0);
    return;
  }
  FObjectReferenceCache::WriteFullReference(this_00,param_1,(FNetObjectReference *)&local_18._s_0);
  return;
}

// Serialize @ 14433b6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FQuantizedObjectReference *this;
  FObjectReferenceCache *this_00;
  FNetRefHandle_u_0 local_18;
  undefined8 uStack_10;
  
  this = (FQuantizedObjectReference *)param_2->Source;
  if (this->RemoteReferencePtr != (FQuantizedRemoteObjectReference *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      FQuantizedObjectReference::ToString(this,(FString *)&local_18._s_0);
      Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
      if ((void *)local_18.Value != (void *)0x0) {
        FMemory::Free((void *)local_18);
      }
    }
    FNetSerializationContext::SetError(param_1,GNetError_InvalidNetHandle,true);
    return;
  }
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,1,1);
  local_18 = (this->NetReference).RefHandle.field0_0x0;
  uStack_10._0_4_ = (this->NetReference).PathToken;
  uStack_10._4_4_ = (this->NetReference).Traits;
  this_00 = param_1->InternalContext->ObjectReferenceCache;
  if (param_1->InternalContext->bInlineObjectReferenceExports == 0) {
    FObjectReferenceCache::WriteReference(this_00,param_1,(FNetObjectReference *)&local_18._s_0);
    return;
  }
  FObjectReferenceCache::WriteFullReference(this_00,param_1,(FNetObjectReference *)&local_18._s_0);
  return;
}

