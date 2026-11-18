// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FScopeCycleCounterSWidget @ 1424741a0

/* WARNING: Enum "Type": Some values do not have unique names */

FScopeCycleCounterSWidget * __thiscall
FScopeCycleCounterSWidget::FScopeCycleCounterSWidget
          (FScopeCycleCounterSWidget *this,SWidget *param_1)

{
  int iVar1;
  TAtomic<FMinimalName> TVar2;
  FName FVar3;
  TStatIdData *pTVar4;
  FName local_res8;
  
  *(undefined8 *)this = 0;
  this->field_0x8 = 0;
  if (param_1 != (SWidget *)0x0) {
    iVar1 = CpuChannel->Enabled;
    if ((iVar1 < 0) && (FThreadStats::bPrimaryEnable == false)) {
      pTVar4 = &TStatId::TStatId_NAME_None;
    }
    else {
      TVar2 = ((param_1->StatID).StatIdPtr)->Name;
      if ((TVar2._0_4_ == 0) && (TVar2._4_4_ == 0)) {
        SWidget::CreateStatID(param_1);
      }
      pTVar4 = (param_1->StatID).StatIdPtr;
    }
    if (((SUB84(pTVar4->Name,0) == 0) && (SUB84(pTVar4->Name,4) == 0)) ||
       (FThreadStats::bPrimaryEnable == false)) {
      if ((-1 < iVar1) && ((SUB84(pTVar4->Name,0) != 0 || (SUB84(pTVar4->Name,4) != 0)))) {
        local_res8 = *(FName *)&pTVar4->Name;
        if (-1 < CpuChannel->Enabled) {
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_res8,(pTVar4->StatDescriptionWide).Ptr,(char *)0x0,0);
          this->field_0x8 = this->field_0x8 | 2;
        }
      }
    }
    else {
      FVar3 = *(FName *)&pTVar4->Name;
      if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res8 = (FName)((ulonglong)local_res8.Number << 0x20);
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res8,(pTVar4->StatDescriptionAnsi).Ptr);
          this->field_0x8 = this->field_0x8 | 1;
          if (-1 < CpuChannel->Enabled) {
            local_res8 = FVar3;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_res8,(pTVar4->StatDescriptionWide).Ptr,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\SWidgetUtils.h"
                       ,0x1d);
            this->field_0x8 = this->field_0x8 | 2;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          *(uint *)&this->field_0x0 = FVar3.ComparisonIndex.Value;
          *(uint *)&this->field_0x4 = FVar3.Number;
          local_res8 = FVar3;
          FThreadStats::AddMessage(FVar3,CycleScopeStart);
          this->field_0x8 = this->field_0x8 | 4;
          return this;
        }
      }
    }
  }
  return this;
}

