// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// WaitForUpdateCompletion @ 147d399a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FInstanceDataUpdateTaskInfo::WaitForUpdateCompletion(FInstanceDataUpdateTaskInfo *this)

{
  EExtendedTaskPriority EVar1;
  FTaskBase *this_00;
  Type TVar2;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER aLStackX_18 [2];
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  
  this_00 = (this->UpdateTaskHandle).Pimpl.Reference;
  if (this_00 == (FTaskBase *)0x0) {
    return;
  }
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport) {
LAB_141a99947:
    if ((this_00->Subsequents).bIsClosed.field_0x0 == '\0') {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&LStackX_10.s,(ulong64)this_00->TraceId);
      QueryPerformanceCounter(aLStackX_18);
      LStack_28 = aLStackX_18[0];
      uStack_20 = 0xffffffffffffffff;
      UE::Tasks::Private::FTaskBase::TryRetractAndExecute(this_00,(FTimeout *)&LStack_28.s,0);
      if ((this_00->Subsequents).bIsClosed.field_0x0 == '\0') {
        bVar4 = UE::Tasks::Private::TryWaitOnNamedThread(this_00);
        if (!bVar4) {
          QueryPerformanceCounter(aLStackX_18);
          LStack_28 = aLStackX_18[0];
          uStack_20 = 0xffffffffffffffff;
          UE::Tasks::Private::FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = this_00->ExtendedPriority;
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = UE::Tasks::Private::TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&LStackX_10);
  LStack_28 = LStackX_10;
  uStack_20 = 0xffffffffffffffff;
  UE::Tasks::Private::FTaskBase::WaitImpl(this_00,(FTimeout *)&LStack_28.s);
  return;
}

