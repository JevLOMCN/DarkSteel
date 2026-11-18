// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 3

// FScopedQueryForEachTrace @ 1471dc430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FScopedQueryForEachTrace * __thiscall
FMassTrace::FScopedQueryForEachTrace::FScopedQueryForEachTrace
          (FScopedQueryForEachTrace *this,FMassEntityQuery *param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this->Query = param_1;
  this->ArchetypeCount = 0;
  this->ChunkCount = 0;
  this->EntityCount = 0;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryForEachStartedFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].s = (_struct_19)this->Query;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return this;
}

// ~FScopedQueryForEachTrace @ 1471e0a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMassTrace::FScopedQueryForEachTrace::~FScopedQueryForEachTrace(FScopedQueryForEachTrace *this)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryForEachCompleteFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].s = (_struct_19)this->Query;
    local_20[2].s.LowPart = this->ArchetypeCount;
    *(int *)((longlong)local_20 + 0x14) = this->ChunkCount;
    local_20[3].s.LowPart = this->EntityCount;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// ReportArchetype @ 147248620

void __thiscall
FMassTrace::FScopedQueryForEachTrace::ReportArchetype
          (FScopedQueryForEachTrace *this,FMassArchetypeData *param_1)

{
  if (-1 < MassChannel->Enabled) {
    this->ArchetypeCount = this->ArchetypeCount + 1;
    this->ChunkCount = this->ChunkCount + (param_1->Chunks).ArrayNum;
    this->EntityCount =
         this->EntityCount +
         (*(int *)&(param_1->EntityMap).field_0x8 - *(int *)&(param_1->EntityMap).field_0x34);
  }
  return;
}

