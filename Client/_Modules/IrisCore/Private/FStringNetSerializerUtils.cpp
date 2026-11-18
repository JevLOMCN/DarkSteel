// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// AdjustArraySize<UE::Net::FNameNetSerializer::FQuantizedType,unsigned_char> @ 144323430

void __cdecl
UE::Net::Private::FStringNetSerializerUtils::
AdjustArraySize<UE::Net::FNameNetSerializer::FQuantizedType,unsigned_char>
          (FNetSerializationContext *param_1,FQuantizedType *param_2,ushort param_3)

{
  void *pvVar1;
  
  if (param_3 == 0) {
    FMemory::Free(param_2->ElementStorage);
    *(undefined8 *)param_2 = 0;
    param_2->ElementCapacityCount = 0;
    param_2->ElementCount = 0;
    *(undefined4 *)&param_2->field_0xc = 0;
    param_2->ElementStorage = (void *)0x0;
    return;
  }
  if (param_2->ElementCapacityCount < param_3) {
    FMemory::Free(param_2->ElementStorage);
    pvVar1 = FMemory::Malloc((ulonglong)param_3 + 3 & 0xfffffffffffffffc,4);
    param_2->ElementStorage = pvVar1;
    param_2->ElementCapacityCount = param_3;
    param_2->ElementCount = param_3;
    return;
  }
  param_2->ElementCount = param_3;
  return;
}

// AdjustArraySize<UE::Net::Private::FStringNetSerializerBase::FQuantizedType,unsigned_char> @ 1443234c0

void __cdecl
UE::Net::Private::FStringNetSerializerUtils::
AdjustArraySize<UE::Net::Private::FStringNetSerializerBase::FQuantizedType,unsigned_char>
          (FNetSerializationContext *param_1,FQuantizedType *param_2,ushort param_3)

{
  void *pvVar1;
  
  if (param_3 == 0) {
    FMemory::Free(param_2->ElementStorage);
    *(undefined8 *)param_2 = 0;
    param_2->ElementStorage = (void *)0x0;
    return;
  }
  if (param_2->ElementCapacityCount < param_3) {
    FMemory::Free(param_2->ElementStorage);
    pvVar1 = FMemory::Malloc((ulonglong)param_3 + 3 & 0xfffffffffffffffc,4);
    param_2->ElementStorage = pvVar1;
    param_2->ElementCapacityCount = param_3;
    param_2->ElementCount = param_3;
    return;
  }
  param_2->ElementCount = param_3;
  return;
}

