// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// HandleNetResult @ 1484742f0

/* WARNING: Enum "Type": Some values do not have unique names */

EHandleNetResult __thiscall
FReplayResultHandler::HandleNetResult(FReplayResultHandler *this,FNetResult *param_1)

{
  UEnum *pUVar1;
  FReplayHelper *this_00;
  longlong *plVar2;
  UEnum *pUVar3;
  TPimplPtr<UE::Net::FNetResult,1> this_01;
  void *local_28 [4];
  
  if (1 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  this_01 = (TPimplPtr<UE::Net::FNetResult,1>)param_1;
  if (param_1 == (FNetResult *)0x0) {
    return Handled;
  }
  do {
    if (1 < (byte)LogDemo._0_1_) {
      UE::Net::FNetResult::DynamicToString((FNetResult *)this_01,(FString *)local_28,WithoutChain);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      if (local_28[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0]);
      }
      if (this_01 == (TPimplPtr<UE::Net::FNetResult,1>)0x0) break;
    }
    this_01 = *(TPimplPtr<UE::Net::FNetResult,1> *)((longlong)this_01 + 0x28);
  } while (this_01 != (TPimplPtr<UE::Net::FNetResult,1>)0x0);
  pUVar1 = param_1->RawResultEnumObj;
  pUVar3 = StaticEnum<enum_EReplayResult>();
  if (pUVar1 != pUVar3) {
    return Handled;
  }
  this_00 = this->ReplayHelper;
  if (this_00 == (FReplayHelper *)0x0) {
    return Handled;
  }
  if (this_00->bRecording == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnReplayPlaybackError,(FReadAccessScope *)local_28);
    if (*(int *)&(this_00->OnReplayPlaybackError).field_0x10 == 0) goto LAB_1484743ea;
    plVar2 = *(longlong **)&(this_00->OnReplayPlaybackError).field_0x8;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)local_28);
    if (*(int *)&(this_00->OnReplayRecordError).field_0x10 == 0) goto LAB_1484743ea;
    plVar2 = *(longlong **)&(this_00->OnReplayRecordError).field_0x8;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x68))(plVar2,param_1);
  }
LAB_1484743ea:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_28);
  return Handled;
}

// InitResultHandler @ 148476a70

void __thiscall
FReplayResultHandler::InitResultHandler(FReplayResultHandler *this,FReplayHelper *param_1)

{
  this->ReplayHelper = param_1;
  return;
}

