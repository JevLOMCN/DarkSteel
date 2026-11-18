// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// Dequantize @ 14432aef0

void __cdecl
UE::Net::FSoftClassPathNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  Net::Private::FStringNetSerializerBase::Dequantize(param_1,param_2,&local_28);
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath((FSoftObjectPath *)param_2->Target,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// IsEqual @ 144334200

bool __cdecl
UE::Net::FSoftClassPathNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  FSoftObjectPath *this;
  uint uVar3;
  int iVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FString local_28;
  FString local_18;
  
  if (param_2->bStateIsQuantized == false) {
    this = (FSoftObjectPath *)param_2->Source1;
    FSoftObjectPath::ToString((FSoftObjectPath *)param_2->Source0,&local_18);
    FSoftObjectPath::ToString(this,&local_28);
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == local_28.Data.ArrayNum) {
      if (local_18.Data.ArrayNum < 2) {
        bVar6 = true;
      }
      else {
        iVar4 = wcscmp((wchar_t *)local_18.Data.AllocatorInstance.Data,
                       (wchar_t *)local_28.Data.AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
    }
    else {
      bVar6 = local_18.Data.ArrayNum + local_28.Data.ArrayNum == 1;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar5.Data = local_18.Data.AllocatorInstance.Data;
    }
    if (FVar5.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar5.Data);
    }
    return bVar6;
  }
  puVar1 = (uint *)param_2->Source0;
  puVar2 = (uint *)param_2->Source1;
  uVar3 = (*puVar1 ^ *puVar2) & 1;
  if (*(ushort *)((longlong)puVar1 + 6) != *(ushort *)((longlong)puVar2 + 6)) {
    uVar3 = 1;
  }
  if (uVar3 != 0) {
    return false;
  }
  iVar4 = memcmp(*(void **)(puVar1 + 2),*(void **)(puVar2 + 2),
                 (ulonglong)*(ushort *)((longlong)puVar1 + 6));
  return iVar4 == 0;
}

// Quantize @ 144337040

void __cdecl
UE::Net::FSoftClassPathNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  FString local_18;
  
  FSoftObjectPath::ToString((FSoftObjectPath *)param_2->Source,&local_18);
  Net::Private::FStringNetSerializerBase::Quantize(param_1,param_2,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Validate @ 14433f830

bool __cdecl
UE::Net::FSoftClassPathNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  int iVar1;
  FString local_18;
  
  FSoftObjectPath::ToString((FSoftObjectPath *)param_2->Source,&local_18);
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (uint)((iVar1 + 1) * 3) < 0x10000;
}

