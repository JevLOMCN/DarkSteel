// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// Dequantize @ 14432add0

void __cdecl
UE::Net::FScriptInterfaceNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FObjectReferenceCache *this;
  UObject *this_00;
  UObjectBaseUtility *pUVar3;
  UObject *local_res10;
  FRemoteObjectId_u_0 local_48;
  undefined4 local_40;
  FNetDequantizeArgs local_38;
  
  pUVar3 = (UObjectBaseUtility *)0x0;
  puVar1 = (undefined8 *)param_2->Target;
  uVar2 = ((FNetObjectReference *)param_2->Source)[1].RefHandle.field0_0x0.Value;
  if (uVar2 == 0) {
    this = param_1->InternalContext->ObjectReferenceCache;
    this_00 = (UObject *)pUVar3;
    if (this != (FObjectReferenceCache *)0x0) {
      local_res10 = (UObject *)0x0;
      Net::Private::FObjectReferenceCache::ResolveObjectReference
                (this,(FNetObjectReference *)param_2->Source,
                 &param_1->InternalContext->ResolveContext,&local_res10);
      this_00 = local_res10;
    }
  }
  else {
    local_38._padding_ = param_2->_padding_;
    local_48.Id = 0;
    local_38._padding_ = param_2->_padding_;
    local_40 = 0;
    local_38._padding_ =
         (longlong)
         Net::Private::FObjectNetSerializerBase<FScriptInterface>::
         RemoteObjectReferenceNetSerializerConfig;
    local_38.Target = (ulong64)&local_48;
    local_38.Source = uVar2;
    (*Net::Private::FObjectNetSerializerBase<FScriptInterface>::RemoteObjectReferenceNetSerializer->
      Dequantize)(param_1,&local_38);
    this_00 = FRemoteObjectReference::Resolve((FRemoteObjectReference *)&local_48._s_0);
  }
  if (this_00 == (UObject *)0x0) {
    *puVar1 = 0;
  }
  else {
    pUVar3 = UObjectBaseUtility::GetInterfaceAddress
                       ((UObjectBaseUtility *)this_00,*(UClass **)(param_2->_padding_ + 0x10));
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(this_00);
    }
    *puVar1 = this_00;
  }
  puVar1[1] = pUVar3;
  return;
}

// Validate @ 14433f7f0

bool __cdecl
UE::Net::FScriptInterfaceNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  UObjectBaseUtility *this;
  void *pvVar1;
  void *pvVar2;
  
  this = *(UObjectBaseUtility **)param_2->Source;
  if (this != (UObjectBaseUtility *)0x0) {
    pvVar1 = (void *)((undefined8 *)param_2->Source)[1];
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress(this,*(UClass **)(param_2->_padding_ + 0x10));
    return pvVar1 == pvVar2;
  }
  return true;
}

