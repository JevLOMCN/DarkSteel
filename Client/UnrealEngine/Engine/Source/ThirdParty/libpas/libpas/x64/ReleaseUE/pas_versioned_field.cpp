// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_versioned_field_minimize @ 140d9d2a0

ulong64 __cdecl pas_versioned_field_minimize(pas_versioned_field *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  pas_versioned_field pVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  do {
    do {
      uVar5 = param_1->version;
      do {
        uVar3 = uVar5;
        uVar1 = param_1->value;
        uVar5 = param_1->version;
      } while (param_1->version != uVar3);
      uVar5 = uVar1;
      if (param_2 < uVar1) {
        uVar5 = param_2;
      }
    } while (uVar3 == 0xffffffffffffffff);
    if ((uVar3 & 1) == 0) {
      uVar4 = uVar3;
      if (uVar1 <= param_2) {
        return uVar1;
      }
    }
    else {
      uVar4 = uVar3 + 1;
    }
    LOCK();
    pVar2.version = uVar3;
    pVar2.value = uVar1;
    if (pVar2 == *param_1) {
      param_1->value = uVar5;
      param_1->version = uVar4;
    }
    UNLOCK();
  } while (pVar2 != *param_1);
  return uVar1;
}

// pas_versioned_field_maximize @ 140d9d310

ulong64 __cdecl pas_versioned_field_maximize(pas_versioned_field *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  pas_versioned_field pVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  do {
    do {
      uVar5 = param_1->version;
      do {
        uVar3 = uVar5;
        uVar1 = param_1->value;
        uVar5 = param_1->version;
      } while (param_1->version != uVar3);
      uVar5 = uVar1;
      if (uVar1 < param_2) {
        uVar5 = param_2;
      }
    } while (uVar3 == 0xffffffffffffffff);
    if ((uVar3 & 1) == 0) {
      uVar4 = uVar3;
      if (param_2 <= uVar1) {
        return uVar1;
      }
    }
    else {
      uVar4 = uVar3 + 1;
    }
    LOCK();
    pVar2.version = uVar3;
    pVar2.value = uVar1;
    if (pVar2 == *param_1) {
      param_1->value = uVar5;
      param_1->version = uVar4;
    }
    UNLOCK();
  } while (pVar2 != *param_1);
  return uVar1;
}

// pas_versioned_field_minimize_watched @ 140d9d380

void __cdecl
pas_versioned_field_minimize_watched
          (pas_versioned_field *param_1,pas_versioned_field *param_2,ulong64 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  pas_versioned_field pVar3;
  
  if ((param_3 < param_2->value) && (uVar1 = param_2->version, uVar1 != 0xffffffffffffffff)) {
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    LOCK();
    pVar3.version = uVar1;
    pVar3.value = param_2->value;
    if (pVar3 == *param_1) {
      param_1->value = param_3;
      param_1->version = uVar1 + 2;
    }
    UNLOCK();
  }
  return;
}

// pas_versioned_field_maximize_watched @ 140d9d3c0

void __cdecl
pas_versioned_field_maximize_watched
          (pas_versioned_field *param_1,pas_versioned_field *param_2,ulong64 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  pas_versioned_field pVar3;
  
  if ((param_2->value < param_3) && (uVar1 = param_2->version, uVar1 != 0xffffffffffffffff)) {
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    LOCK();
    pVar3.version = uVar1;
    pVar3.value = param_2->value;
    if (pVar3 == *param_1) {
      param_1->value = param_3;
      param_1->version = uVar1 + 2;
    }
    UNLOCK();
  }
  return;
}

