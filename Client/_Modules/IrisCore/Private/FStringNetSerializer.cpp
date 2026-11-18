// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// Dequantize @ 14432b110

void __cdecl
UE::Net::FStringNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  Net::Private::FStringNetSerializerBase::Dequantize(param_1,param_2,(FString *)param_2->Target);
  return;
}

// IsEqual @ 144334530

bool __cdecl
UE::Net::FStringNetSerializer::IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (uint *)param_2->Source0;
  puVar2 = (uint *)param_2->Source1;
  if (param_2->bStateIsQuantized != false) {
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
  uVar3 = puVar1[2];
  if (uVar3 != puVar2[2]) {
    return uVar3 + puVar2[2] == 1;
  }
  if (1 < (int)uVar3) {
    iVar4 = wcscmp(*(wchar_t **)puVar1,*(wchar_t **)puVar2);
    return iVar4 == 0;
  }
  return true;
}

// Quantize @ 144337300

void __cdecl
UE::Net::FStringNetSerializer::Quantize(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  Net::Private::FStringNetSerializerBase::Quantize(param_1,param_2,(FString *)param_2->Source);
  return;
}

// Validate @ 14433f930

bool __cdecl
UE::Net::FStringNetSerializer::Validate(FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2->Source + 8);
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return (uint)((iVar2 + 1) * 3) < 0x10000;
}

