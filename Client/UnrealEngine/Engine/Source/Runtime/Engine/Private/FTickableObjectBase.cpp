// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SimpleTickObjects @ 1488e0350

void __cdecl
FTickableObjectBase::SimpleTickObjects
          (FTickableStatics *param_1,TFunctionRef<void___cdecl(FTickableObjectBase_*)> *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  longlong *local_res18 [2];
  
  if (param_1 == (FTickableStatics *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  FTickableStatics::StartTicking(param_1);
  iVar1 = (param_1->TickableObjects).ArrayNum;
  pFVar6 = (param_1->TickableObjects).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  do {
    if ((param_1->TickableObjects).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTickableObjectBase::FTickableObjectEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) {
      FTickableStatics::FinishTicking(param_1);
      if (param_1 != (FTickableStatics *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488e043a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
        return;
      }
      return;
    }
    plVar2 = *(longlong **)pFVar6;
    if (plVar2 != (longlong *)0x0) {
      if (pFVar6[8] != (FScriptContainerElement)0x1) {
        cVar5 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (cVar5 == '\0') goto LAB_1488e0406;
      }
      local_res18[0] = plVar2;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res18);
    }
LAB_1488e0406:
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

