// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 2

// ~IHttpRequest @ 1431511f0

void __thiscall IHttpRequest::~IHttpRequest(IHttpRequest *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000143151210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// SetResponseBodyReceiveStreamDelegateV2 @ 14317f2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
IHttpRequest::SetResponseBodyReceiveStreamDelegateV2
          (IHttpRequest *this,
          TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 local_68 [40];
  ForAnyElementType local_40;
  int local_38;
  
  pcVar1 = *(code **)(*(longlong *)this + 0xa8);
  pTVar4 = ::operator_new(0xd8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFArchiveWithDelegateV2___00_SharedPointerInternals__6B_
    ;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_68,4000);
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy>::
    CopyFrom<FDefaultTSDelegateUserPolicy>
              ((TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *)local_68,
               param_1);
    FArchiveState::FArchiveState((FArchiveState *)(pTVar4 + 1));
    pTVar4[1]._padding_ = (longlong)&___7FArchiveWithDelegateV2__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar4 + 10),4000);
    pTVar4[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[0xd]._padding_ = 0;
    TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy>::
    CopyFrom<FDefaultTSDelegateUserPolicy>
              ((TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *)
               (pTVar4 + 10),
               (TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *)local_68);
    EnterCriticalSection((LPCRITICAL_SECTION)local_68);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)local_68);
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)local_68);
    if (pTVar4 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar1)(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (param_1 == (TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  if ((*(int *)&param_1->field_0x30 != 0) &&
     (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)&param_1->field_0x28)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_1->field_0x28,0,0,0x10);
    *(undefined4 *)&param_1->field_0x30 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  if (*(void **)&param_1->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x28);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)param_1);
  return (bool)uVar3;
}

