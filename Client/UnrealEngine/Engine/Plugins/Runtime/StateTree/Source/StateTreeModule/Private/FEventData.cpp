// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 7

// GetArrayView<unsigned_short> @ 14d4ad0a0

TArrayView<unsigned_short_const_,int> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_short>
          (FEventData *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          char *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FArrayReader *this_00;
  ushort *puVar4;
  TArrayView<unsigned_short_const_,int> *pTVar5;
  int iVar6;
  char local_res10 [8];
  
  this_00 = GetArrayImpl(this,param_1);
  uVar3 = FArrayReader::Num(this_00);
  puVar4 = FArrayReader::GetImpl(this_00,0,local_res10);
  if (puVar4 != (ushort *)0x0) {
    iVar6 = -(int)local_res10[0];
    if (iVar6 < 0) {
      iVar6 = (int)local_res10[0];
    }
    if (iVar6 == 2) goto LAB_14d4ad0ee;
  }
  puVar4 = (ushort *)0x0;
LAB_14d4ad0ee:
  __return_storage_ptr__->DataPtr = puVar4;
  __return_storage_ptr__->ArrayNum = uVar3;
  if ((int)uVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_short_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetValue<enum_EStateTreeRunStatus> @ 14d4af2c0

EStateTreeRunStatus __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeRunStatus>
          (FEventData *this,char *param_1,EStateTreeRunStatus param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 != (double *)0x0) {
    switch(local_res20[0]) {
    case '\x01':
    case '\x02':
    case '\x04':
    case '\b':
      return *(EStateTreeRunStatus *)pdVar1;
    case -8:
      return (EStateTreeRunStatus)(int)*pdVar1;
    default:
      return Running;
    case -4:
      return (EStateTreeRunStatus)(int)*(float *)pdVar1;
    }
  }
  return param_2;
}

// GetValue<enum_EStateTreeTraceEventType> @ 14d4af380

EStateTreeTraceEventType __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeTraceEventType>
          (FEventData *this,char *param_1,EStateTreeTraceEventType param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 != (double *)0x0) {
    switch(local_res20[0]) {
    case '\x01':
    case '\x02':
    case '\x04':
    case '\b':
      return *(EStateTreeTraceEventType *)pdVar1;
    case -8:
      return (EStateTreeTraceEventType)(int)*pdVar1;
    default:
      return Unset;
    case -4:
      return (EStateTreeTraceEventType)(int)*(float *)pdVar1;
    }
  }
  return param_2;
}

// GetValue<enum_EStateTreeTransitionPriority> @ 14d4af440

EStateTreeTransitionPriority __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeTransitionPriority>
          (FEventData *this,char *param_1,EStateTreeTransitionPriority param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 != (double *)0x0) {
    switch(local_res20[0]) {
    case '\x01':
    case '\x02':
    case '\x04':
    case '\b':
      return *(EStateTreeTransitionPriority *)pdVar1;
    case -8:
      return (EStateTreeTransitionPriority)(int)*pdVar1;
    default:
      return None;
    case -4:
      return (EStateTreeTransitionPriority)(int)*(float *)pdVar1;
    }
  }
  return param_2;
}

// GetValue<enum_EStateTreeTransitionSourceType> @ 14d4af500

EStateTreeTransitionSourceType __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeTransitionSourceType>
          (FEventData *this,char *param_1,EStateTreeTransitionSourceType param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 != (double *)0x0) {
    switch(local_res20[0]) {
    case '\x01':
    case '\x02':
    case '\x04':
    case '\b':
      return *(EStateTreeTransitionSourceType *)pdVar1;
    case -8:
      return (EStateTreeTransitionSourceType)(int)*pdVar1;
    default:
      return Unset;
    case -4:
      return (EStateTreeTransitionSourceType)(int)*(float *)pdVar1;
    }
  }
  return param_2;
}

// GetValue<enum_EStateTreeUpdatePhase> @ 14d4af5c0

EStateTreeUpdatePhase __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeUpdatePhase>
          (FEventData *this,char *param_1,EStateTreeUpdatePhase param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 != (double *)0x0) {
    switch(local_res20[0]) {
    case '\x01':
    case '\x02':
    case '\x04':
    case '\b':
      return *(EStateTreeUpdatePhase *)pdVar1;
    case -8:
      return (EStateTreeUpdatePhase)(int)*pdVar1;
    default:
      return Unset;
    case -4:
      return (EStateTreeUpdatePhase)(int)*(float *)pdVar1;
    }
  }
  return param_2;
}

// GetValue<enum_ELogVerbosity::Type> @ 14d4af680

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<enum_ELogVerbosity::Type>
          (FEventData *this,char *param_1,Type param_2)

{
  double *pdVar1;
  schar local_res20 [8];
  
  pdVar1 = GetValueImpl(this,param_1,local_res20);
  if (pdVar1 != (double *)0x0) {
    switch(local_res20[0]) {
    case '\x01':
    case '\x02':
    case '\x04':
    case '\b':
      return *(Type *)pdVar1;
    case -8:
      return (Type)(int)*pdVar1;
    default:
      return NoLogging;
    case -4:
      return (Type)(int)*(float *)pdVar1;
    }
  }
  return param_2;
}

