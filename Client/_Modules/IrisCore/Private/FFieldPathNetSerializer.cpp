// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 12

// CloneDynamicState @ 1442fcae0

void __cdecl
UE::Net::FFieldPathNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  FNetCloneDynamicStateArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38.Source = param_2->Source;
  local_38._padding_ = (longlong)&StructNetSerializerConfig;
  local_38.Target = param_2->Target;
  (*StructNetSerializer->CloneDynamicState)(param_1,&local_38);
  return;
}

// CollectNetReferences @ 1442fd3e0

void __cdecl
UE::Net::FFieldPathNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  FNetCollectReferencesArgs local_38;
  
  if ((StructNetSerializerConfig.StateDescriptor.Reference != (FReplicationStateDescriptor *)0x0) &&
     (((StructNetSerializerConfig.StateDescriptor.Reference)->Traits & HasObjectReference) != None))
  {
    local_38._padding_ = param_2->_padding_;
    local_38._padding_ = param_2->_padding_;
    local_38.Source = param_2->Source;
    local_38._padding_ = (longlong)&StructNetSerializerConfig;
    local_38.Collector = param_2->Collector;
    (*StructNetSerializer->CollectNetReferences)(param_1,&local_38);
  }
  return;
}

// Dequantize @ 1442fee20

void __cdecl
UE::Net::FFieldPathNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ForAnyElementType *pFVar1;
  undefined8 *puVar2;
  ForAnyElementType _Src;
  int iVar3;
  longlong lVar4;
  undefined8 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  FNetDequantizeArgs local_30;
  
  local_30._padding_ = param_2->_padding_;
  local_30.Target = (ulong64)&local_48;
  local_30._padding_ = param_2->_padding_;
  local_30.Source = param_2->Source;
  puVar2 = (undefined8 *)param_2->Target;
  local_30._padding_ = (longlong)&StructNetSerializerConfig;
  local_48 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  (*StructNetSerializer->Dequantize)(param_1,&local_30);
  _Src.Data = local_40.Data;
  pFVar1 = (ForAnyElementType *)(puVar2 + 2);
  puVar2[1] = local_48;
  if (pFVar1 != &local_40) {
    iVar3 = (int)local_38;
    lVar4 = (longlong)(int)local_38;
    *(int *)(puVar2 + 3) = (int)local_38;
    if (((int)local_38 == 0) && (*(int *)((longlong)puVar2 + 0x1c) == 0)) {
      *(int *)((longlong)puVar2 + 0x1c) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,(int)local_38,*(int *)((longlong)puVar2 + 0x1c),pFVar1,(int)local_38,
                 (int *)((longlong)puVar2 + 0x1c));
      if (iVar3 != 0) {
        memcpy(pFVar1->Data,_Src.Data,lVar4 << 3);
      }
    }
  }
  *puVar2 = 0;
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// Deserialize @ 1442ffad0

void __cdecl
UE::Net::FFieldPathNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetDeserializeArgs local_28;
  
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28.Target = param_2->Target;
  local_28._padding_ = (longlong)&StructNetSerializerConfig;
  (*StructNetSerializer->Deserialize)(param_1,&local_28);
  return;
}

// DeserializeDelta @ 144300ba0

void __cdecl
UE::Net::FFieldPathNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  FNetDeserializeDeltaArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = (longlong)&StructNetSerializerConfig;
  local_38.Prev = param_2->Prev;
  (*StructNetSerializer->DeserializeDelta)(param_1,&local_38);
  return;
}

// FieldPathToFieldPathNetSerializerSerializationHelper @ 144302160

void __cdecl
UE::Net::FFieldPathNetSerializer::FieldPathToFieldPathNetSerializerSerializationHelper
          (FFieldPathForNetSerializer *param_1,FFieldPathNetSerializerSerializationHelper *param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  
  local_res8.ObjectIndex = *(int *)&param_1->field_0x8;
  local_res8.ObjectSerialNumber = *(int *)&param_1->field_0xc;
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    (param_2->Owner).WeakPtr = local_res8;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&param_2->PropertyPath,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->field_0x10);
  }
  return;
}

// FreeDynamicState @ 144302ce0

void __cdecl
UE::Net::FFieldPathNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  FNetFreeDynamicStateArgs local_28;
  
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28.Source = param_2->Source;
  local_28._padding_ = (longlong)&StructNetSerializerConfig;
  (*StructNetSerializer->FreeDynamicState)(param_1,&local_28);
  return;
}

// IsEqual @ 1443087f0

bool __cdecl
UE::Net::FFieldPathNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  bool bVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_78;
  TArray<FName,TSizedDefaultAllocator<32>_> local_70;
  FWeakObjectPtr local_60;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FNetIsEqualArgs local_48;
  
  if (param_2->bStateIsQuantized != false) {
    local_48._padding_ = param_2->_padding_;
    local_48._padding_ = param_2->_padding_;
    local_48.Source0 = param_2->Source0;
    local_48._padding_ = (longlong)&StructNetSerializerConfig;
    local_48.Source1 = param_2->Source1;
    local_48.bStateIsQuantized = param_2->bStateIsQuantized;
    local_48._41_7_ = *(undefined7 *)&param_2->field_0x29;
    bVar3 = (*StructNetSerializer->IsEqual)(param_1,&local_48);
    return bVar3;
  }
  uVar1 = param_2->Source0;
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  local_res10 = *(FWeakObjectPtr *)(uVar1 + 8);
  uVar2 = param_2->Source1;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    local_60 = local_res10;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&local_58,(TArray<FName,TSizedDefaultAllocator<32>_> *)(uVar1 + 0x10));
  }
  local_res10 = *(FWeakObjectPtr *)(uVar2 + 8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    local_78 = local_res10;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&local_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(uVar2 + 0x10));
  }
  local_48._padding_ = param_2->_padding_;
  local_48.Source0 = (ulong64)&local_60;
  local_48._padding_ = param_2->_padding_;
  local_48.bStateIsQuantized = param_2->bStateIsQuantized;
  local_48._41_7_ = *(undefined7 *)&param_2->field_0x29;
  local_48.Source1 = (ulong64)&local_78;
  local_48._padding_ = (longlong)&StructNetSerializerConfig;
  bVar3 = (*StructNetSerializer->IsEqual)(param_1,&local_48);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return bVar3;
}

// Quantize @ 14430cb00

void __cdecl
UE::Net::FFieldPathNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ulong64 uVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> local_40;
  FNetQuantizeArgs local_30;
  
  uVar1 = param_2->Source;
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_res10 = *(FWeakObjectPtr *)(uVar1 + 8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    local_48 = local_res10;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&local_40,(TArray<FName,TSizedDefaultAllocator<32>_> *)(uVar1 + 0x10));
  }
  local_30._padding_ = param_2->_padding_;
  local_30.Source = (ulong64)&local_48;
  local_30._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_30._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_30.Target = param_2->Target;
  local_30._padding_ = (longlong)&StructNetSerializerConfig;
  (*StructNetSerializer->Quantize)(param_1,&local_30);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 144310a50

void __cdecl
UE::Net::FFieldPathNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetSerializeArgs local_28;
  
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28.Source = param_2->Source;
  local_28._padding_ = (longlong)&StructNetSerializerConfig;
  (*StructNetSerializer->Serialize)(param_1,&local_28);
  return;
}

// SerializeDelta @ 144311930

void __cdecl
UE::Net::FFieldPathNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetSerializeDeltaArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = (longlong)&StructNetSerializerConfig;
  local_38.Prev = param_2->Prev;
  (*StructNetSerializer->SerializeDelta)(param_1,&local_38);
  return;
}

// Validate @ 1443181c0

bool __cdecl
UE::Net::FFieldPathNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ulong64 uVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> local_40;
  FNetValidateArgs local_30;
  
  uVar1 = param_2->Source;
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_res10 = *(FWeakObjectPtr *)(uVar1 + 8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    local_48 = local_res10;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&local_40,(TArray<FName,TSizedDefaultAllocator<32>_> *)(uVar1 + 0x10));
  }
  local_30._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_30._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_30.Source = (ulong64)&local_48;
  local_30._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_30._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_30._padding_ = (longlong)&StructNetSerializerConfig;
  bVar2 = (*StructNetSerializer->Validate)(param_1,&local_30);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return bVar2;
}

