// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// CoerceValue<unsigned_short> @ 14d3c2980

ushort __cdecl UE::Trace::IAnalyzer::CoerceValue<unsigned_short>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
    return (ushort)*(byte *)param_1;
  case '\x02':
  case '\x04':
  case '\b':
    return *(ushort *)param_1;
  case -8:
    return (ushort)(int)*(double *)param_1;
  default:
    return 0;
  case -4:
    return (ushort)(int)*(float *)param_1;
  }
}

// CoerceValue<float> @ 14d3c2a10

float __cdecl UE::Trace::IAnalyzer::CoerceValue<float>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
    return (float)(int)*(char *)param_1;
  case '\x02':
    return (float)(int)*(short *)param_1;
  case '\x04':
    return (float)*(int *)param_1;
  case '\b':
    return (float)*(longlong *)param_1;
  case -8:
    return (float)*(double *)param_1;
  default:
    return 0.0;
  case -4:
    return *(float *)param_1;
  }
}

// CoerceValue<enum_EMemoryTraceHeapAllocationFlags> @ 14d3c2ac0

EMemoryTraceHeapAllocationFlags __cdecl
UE::Trace::IAnalyzer::CoerceValue<enum_EMemoryTraceHeapAllocationFlags>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
  case '\x02':
  case '\x04':
  case '\b':
    return *(EMemoryTraceHeapAllocationFlags *)param_1;
  case -8:
    return (EMemoryTraceHeapAllocationFlags)(int)*(double *)param_1;
  default:
    return None;
  case -4:
    return (EMemoryTraceHeapAllocationFlags)(int)*(float *)param_1;
  }
}

// CoerceValue<enum_EMemoryTraceHeapFlags> @ 14d3c2b40

EMemoryTraceHeapFlags __cdecl
UE::Trace::IAnalyzer::CoerceValue<enum_EMemoryTraceHeapFlags>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
    return (EMemoryTraceHeapFlags)*(byte *)param_1;
  case '\x02':
  case '\x04':
  case '\b':
    return *(EMemoryTraceHeapFlags *)param_1;
  case -8:
    return (EMemoryTraceHeapFlags)(int)*(double *)param_1;
  default:
    return None;
  case -4:
    return (EMemoryTraceHeapFlags)(int)*(float *)param_1;
  }
}

// CoerceValue<bool> @ 14d3c2bd0

bool __cdecl UE::Trace::IAnalyzer::CoerceValue<bool>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
    return *(char *)param_1 != '\0';
  case '\x02':
    return *(short *)param_1 != 0;
  case '\x04':
    return *(int *)param_1 != 0;
  case '\b':
    return *(longlong *)param_1 != 0;
  case -8:
    if (*(double *)param_1 != 0.0) {
      return true;
    }
    break;
  default:
    return false;
  case -4:
    if (*(float *)param_1 != 0.0) {
      return true;
    }
  }
  return false;
}

