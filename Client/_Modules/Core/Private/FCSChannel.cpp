// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// OnToggle @ 14197d8e0

bool __thiscall FCSChannel::OnToggle(FCSChannel *this,bool param_1,wchar_t **param_2)

{
  bool bVar1;
  
  bVar1 = FPlatformEventsTrace::CanEnable(ContextSwitch,param_2);
  return bVar1;
}

// OnToggled @ 14197d900

/* WARNING: Removing unreachable block (ram,0x000141992d43) */
/* WARNING: Removing unreachable block (ram,0x000141992d48) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCSChannel::OnToggled(FCSChannel *this,bool param_1)

{
  ulong *puVar1;
  FEvent *pFVar2;
  FPlatformEvents *pFVar3;
  int iVar4;
  FRunnableThread *pFVar5;
  
  pFVar3 = GPlatformEvents;
  if (!param_1) {
    FPlatformEventsTrace::Disable(ContextSwitch);
    return;
  }
  if (GPlatformEvents != (FPlatformEvents *)0x0) {
    if (GPlatformEvents->bStarting != false) {
      pFVar2 = (GPlatformEvents->ReadyEvent).Event;
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0xffffffff);
    }
    if ((pFVar3->bError == false) && ((pFVar3->EnabledEvents & ContextSwitch) == None)) {
      if (pFVar3->TraceHandle == 0xffffffffffffffff) {
        (**(code **)(((pFVar3->ReadyEvent).Event)->_padding_ + 0x18))();
        pFVar3->bStarting = true;
        pFVar3->bError = false;
        pFVar5 = FRunnableThread::Create
                           ((FRunnable *)pFVar3,L"PlatformEvents",0,TPri_Normal,0xffffffffffffffff,
                            None);
        pFVar3->Thread = pFVar5;
        pFVar3->EnabledEvents = pFVar3->EnabledEvents | ContextSwitch;
        return;
      }
      puVar1 = &(pFVar3->Trace).Properties.EnableFlags;
      *puVar1 = *puVar1 | 0x10;
      iVar4 = ControlTraceW(0,L"NT Kernel Logger",&pFVar3->Trace,2);
      if ((iVar4 != 0) && (1 < (byte)LogPlatformEvents._0_1_)) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Unable_to_updat_1506c3e88,
                   (FLogCategoryBase *)&LogPlatformEvents);
      }
      pFVar3->EnabledEvents = pFVar3->EnabledEvents | ContextSwitch;
    }
  }
  return;
}

