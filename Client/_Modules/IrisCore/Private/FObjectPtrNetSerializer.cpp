// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// IsEqual @ 144333f90

bool __cdecl
UE::Net::FObjectPtrNetSerializer::IsEqual
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

