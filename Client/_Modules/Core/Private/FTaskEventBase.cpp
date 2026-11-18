// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Create @ 1417be7a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskEventBase * __cdecl UE::Tasks::Private::FTaskEventBase::Create(wchar_t *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  FTaskBase *this;
  undefined8 *puVar6;
  FTaskEventBase *pFVar7;
  longlong lVar8;
  longlong *lpTlsValue;
  
  plVar5 = TlsGetValue(TaskEventBaseAllocator._0_4_);
  lpTlsValue = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = ::operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(TaskEventBaseAllocator._0_4_,lpTlsValue);
    plVar5 = lpTlsValue;
  }
  this = (FTaskBase *)plVar5[1];
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)*plVar5;
    if (this == (FTaskBase *)0x0) {
      this = (FTaskBase *)
             TLockFreePointerListLIFOPad<void_*,64>::Pop
                       ((TLockFreePointerListLIFOPad<void_*,64> *)&TaskEventBaseAllocator.field_0x40
                       );
      plVar5[1] = (longlong)this;
      if (this == (FTaskBase *)0x0) {
        puVar6 = FMemory::Malloc(0x10000,0);
        plVar5[1] = (longlong)puVar6;
        lVar8 = 0x12e;
        do {
          puVar1 = puVar6 + 0x1b;
          *puVar6 = puVar1;
          lVar8 = lVar8 + -1;
          puVar6 = puVar1;
        } while (lVar8 != 0);
        *puVar1 = 0;
        this = (FTaskBase *)plVar5[1];
      }
    }
    else {
      plVar5[1] = (longlong)this;
      *plVar5 = 0;
    }
    *(undefined4 *)(plVar5 + 2) = 0x12f;
  }
  lVar8 = this->_padding_;
  iVar4 = (int)plVar5[2] + -1;
  *(int *)(plVar5 + 2) = iVar4;
  plVar5[1] = lVar8;
  if (((iVar4 < 0) || ((iVar4 != 0) != (lVar8 != 0))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FTaskEventBase *)(*pcVar2)();
    return pFVar7;
  }
  FTaskBase::FTaskBase(this,1,true);
  this->_padding_ = (longlong)&___7FTaskEventBase_Private_Tasks_UE__6B_;
  TaskTrace::Created((ulong64)this->TraceId,0xd8);
  FTaskBase::Init(this,param_1,Default,TaskEvent,None);
  return (FTaskEventBase *)this;
}

// ExecuteTask @ 1417cbe70

void __thiscall UE::Tasks::Private::FTaskEventBase::ExecuteTask(FTaskEventBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                     ,0x3d8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

