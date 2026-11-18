// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 12

// CoerceValue<unsigned_char> @ 14d3865d0

uchar __cdecl UE::Trace::IAnalyzer::CoerceValue<unsigned_char>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
  case '\x02':
  case '\x04':
  case '\b':
    return *(uchar *)param_1;
  case -8:
    return (uchar)(int)*(double *)param_1;
  default:
    return '\0';
  case -4:
    return (uchar)(int)*(float *)param_1;
  }
}

// CoerceValue<int> @ 14d386650

int __cdecl UE::Trace::IAnalyzer::CoerceValue<int>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
    return (int)*(char *)param_1;
  case '\x02':
    return (int)*(short *)param_1;
  case '\x04':
  case '\b':
    return *(int *)param_1;
  case -8:
    return (int)*(double *)param_1;
  default:
    return 0;
  case -4:
    return (int)*(float *)param_1;
  }
}

// CoerceValue<unsigned_int> @ 14d3866e0

uint __cdecl UE::Trace::IAnalyzer::CoerceValue<unsigned_int>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
    return (uint)*(byte *)param_1;
  case '\x02':
    return (uint)*(ushort *)param_1;
  case '\x04':
  case '\b':
    return *(uint *)param_1;
  case -8:
    return (uint)(longlong)*(double *)param_1;
  default:
    return 0;
  case -4:
    return (uint)(longlong)*(float *)param_1;
  }
}

// CoerceValue<double> @ 14d386770

double __cdecl UE::Trace::IAnalyzer::CoerceValue<double>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
    return (double)(int)*(char *)param_1;
  case '\x02':
    return (double)(int)*(short *)param_1;
  case '\x04':
    return (double)*(int *)param_1;
  case '\b':
    return (double)*(longlong *)param_1;
  case -8:
    return *(double *)param_1;
  default:
    return 0.0;
  case -4:
    return (double)*(float *)param_1;
  }
}

// CoerceValue<__int64> @ 14d386820

long64 __cdecl UE::Trace::IAnalyzer::CoerceValue<__int64>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
    return (longlong)*(char *)param_1;
  case '\x02':
    return (longlong)*(short *)param_1;
  case '\x04':
    return (longlong)*(int *)param_1;
  case '\b':
    return *(long64 *)param_1;
  case -8:
    return (longlong)*(double *)param_1;
  default:
    return 0;
  case -4:
    return (longlong)*(float *)param_1;
  }
}

// CoerceValue<unsigned___int64> @ 14d3868b0

ulong64 __cdecl UE::Trace::IAnalyzer::CoerceValue<unsigned___int64>(void *param_1,schar param_2)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  
  switch(param_2) {
  case '\x01':
    return (ulonglong)*(byte *)param_1;
  case '\x02':
    return (ulonglong)*(ushort *)param_1;
  case '\x04':
    return (ulonglong)*(uint *)param_1;
  case '\b':
    return *(ulong64 *)param_1;
  case -8:
    dVar3 = *(double *)param_1;
    lVar1 = 0;
    if ((__real_43e0000000000000 <= dVar3) &&
       (dVar3 = dVar3 - __real_43e0000000000000, dVar3 < __real_43e0000000000000)) {
      lVar1 = -0x8000000000000000;
    }
    break;
  default:
    return 0;
  case -4:
    fVar2 = *(float *)param_1;
    lVar1 = 0;
    if ((__real_5f000000 <= fVar2) && (fVar2 = fVar2 - __real_5f000000, fVar2 < __real_5f000000)) {
      lVar1 = -0x8000000000000000;
    }
    return (longlong)fVar2 + lVar1;
  }
  return (longlong)dVar3 + lVar1;
}

// ~IAnalyzer @ 14d392a30

void __thiscall UE::Trace::IAnalyzer::~IAnalyzer(IAnalyzer *this)

{
  return;
}

// OnAnalysisBegin @ 14d3a0a10

void __thiscall UE::Trace::IAnalyzer::OnAnalysisBegin(IAnalyzer *this,FOnAnalysisContext *param_1)

{
  return;
}

// OnAnalysisEnd @ 14d3a0a20

void __thiscall UE::Trace::IAnalyzer::OnAnalysisEnd(IAnalyzer *this)

{
  return;
}

// OnEvent @ 14d3a3fd0

bool __thiscall
UE::Trace::IAnalyzer::OnEvent
          (IAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  return true;
}

// OnNewEvent @ 14d3a3fe0

bool __thiscall
UE::Trace::IAnalyzer::OnNewEvent(IAnalyzer *this,ushort param_1,FEventTypeInfo *param_2)

{
  return true;
}

// OnThreadInfo @ 14d3a45a0

void __thiscall UE::Trace::IAnalyzer::OnThreadInfo(IAnalyzer *this,FThreadInfo *param_1)

{
  return;
}

