// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// HandleMouseButtonUpEvent @ 14bd00240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
FTooltipInputProcessor::HandleMouseButtonUpEvent
          (FTooltipInputProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  UDS_WindowManager *this_00;
  UObject *pUVar5;
  float local_res20 [2];
  uint local_18 [2];
  FWeakObjectPtr local_10;
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bd002c3;
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
LAB_14bd002c3:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7923606300477358038>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                         ,0x2a,"false");
      if (!bVar2) {
        return false;
      }
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_10);
  bVar2 = FWeakObjectPtr::IsValid(&local_10);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_10);
    cVar4 = (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5);
    if (cVar4 != '\0') {
      pUVar5 = FWeakObjectPtr::Get(&local_10);
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar5[5].field_0x10);
      if (bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&local_10);
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[5].field_0x10);
        cVar4 = (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5);
        if (cVar4 == '\0') {
          local_res20[0] = 0.0;
          local_18[0] = 0;
          UDS_WindowManager::CloseWindow(this_00,ContextMenu,local_18,local_res20);
        }
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7923606300477358031>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                           ,0x31,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477358035>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x2d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// Tick @ 14bd233b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTooltipInputProcessor::Tick
          (FTooltipInputProcessor *this,float param_1,FSlateApplication *param_2,
          TSharedRef<ICursor,1> *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

