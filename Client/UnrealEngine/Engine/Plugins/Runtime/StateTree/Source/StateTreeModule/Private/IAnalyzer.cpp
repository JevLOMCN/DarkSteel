// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 6

// CoerceValue<enum_EStateTreeRunStatus> @ 14d4aa440

EStateTreeRunStatus __cdecl
UE::Trace::IAnalyzer::CoerceValue<enum_EStateTreeRunStatus>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
  case '\x02':
  case '\x04':
  case '\b':
    return *(EStateTreeRunStatus *)param_1;
  case -8:
    return (EStateTreeRunStatus)(int)*(double *)param_1;
  default:
    return Running;
  case -4:
    return (EStateTreeRunStatus)(int)*(float *)param_1;
  }
}

// CoerceValue<enum_EStateTreeTraceEventType> @ 14d4aa4c0

EStateTreeTraceEventType __cdecl
UE::Trace::IAnalyzer::CoerceValue<enum_EStateTreeTraceEventType>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
  case '\x02':
  case '\x04':
  case '\b':
    return *(EStateTreeTraceEventType *)param_1;
  case -8:
    return (EStateTreeTraceEventType)(int)*(double *)param_1;
  default:
    return Unset;
  case -4:
    return (EStateTreeTraceEventType)(int)*(float *)param_1;
  }
}

// CoerceValue<enum_EStateTreeTransitionPriority> @ 14d4aa540

EStateTreeTransitionPriority __cdecl
UE::Trace::IAnalyzer::CoerceValue<enum_EStateTreeTransitionPriority>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
  case '\x02':
  case '\x04':
  case '\b':
    return *(EStateTreeTransitionPriority *)param_1;
  case -8:
    return (EStateTreeTransitionPriority)(int)*(double *)param_1;
  default:
    return None;
  case -4:
    return (EStateTreeTransitionPriority)(int)*(float *)param_1;
  }
}

// CoerceValue<enum_EStateTreeTransitionSourceType> @ 14d4aa5c0

EStateTreeTransitionSourceType __cdecl
UE::Trace::IAnalyzer::CoerceValue<enum_EStateTreeTransitionSourceType>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
  case '\x02':
  case '\x04':
  case '\b':
    return *(EStateTreeTransitionSourceType *)param_1;
  case -8:
    return (EStateTreeTransitionSourceType)(int)*(double *)param_1;
  default:
    return Unset;
  case -4:
    return (EStateTreeTransitionSourceType)(int)*(float *)param_1;
  }
}

// CoerceValue<enum_EStateTreeUpdatePhase> @ 14d4aa640

EStateTreeUpdatePhase __cdecl
UE::Trace::IAnalyzer::CoerceValue<enum_EStateTreeUpdatePhase>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
  case '\x02':
  case '\x04':
  case '\b':
    return *(EStateTreeUpdatePhase *)param_1;
  case -8:
    return (EStateTreeUpdatePhase)(int)*(double *)param_1;
  default:
    return Unset;
  case -4:
    return (EStateTreeUpdatePhase)(int)*(float *)param_1;
  }
}

// CoerceValue<enum_ELogVerbosity::Type> @ 14d4aa6c0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl
UE::Trace::IAnalyzer::CoerceValue<enum_ELogVerbosity::Type>(void *param_1,schar param_2)

{
  switch(param_2) {
  case '\x01':
  case '\x02':
  case '\x04':
  case '\b':
    return *(Type *)param_1;
  case -8:
    return (Type)(int)*(double *)param_1;
  default:
    return NoLogging;
  case -4:
    return (Type)(int)*(float *)param_1;
  }
}

