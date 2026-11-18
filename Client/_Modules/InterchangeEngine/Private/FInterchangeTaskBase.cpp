// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// FInterchangeTaskBase @ 14e4d79e0

FInterchangeTaskBase * __thiscall
UE::Interchange::FInterchangeTaskBase::FInterchangeTaskBase(FInterchangeTaskBase *this)

{
  this->_padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TaskStatusCriticalSection,4000);
  this->TaskId = 0xffffffffffffffff;
  (this->PrerequisiteTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrerequisiteTasks).ArrayNum = 0;
  (this->PrerequisiteTasks).ArrayMax = 0;
  *(undefined8 *)&this->Future = 0;
  *(undefined8 *)&(this->Future).field_0x8 = 0;
  this->TaskStatus = Waiting;
  return this;
}

// ~FInterchangeTaskBase @ 14e4da930

void __thiscall
UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase(FInterchangeTaskBase *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EInterchangeTaskStatus EVar1;
  longlong lVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  
  lpCriticalSection = &this->TaskStatusCriticalSection;
  this->_padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->TaskStatus;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((EVar1 == Executing) && (*(longlong *)&this->Future != 0)) {
      lVar2 = *(longlong *)&this->Future;
      while (*(char *)(lVar2 + 0x68) == '\0') {
        plVar3 = *(longlong **)(lVar2 + 0x60);
        (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(this->Future).field_0x8);
    pFVar4 = (this->PrerequisiteTasks).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e4da9c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// GetTaskThread @ 14e4f9710

EInterchangeTaskThread __thiscall
UE::Interchange::FInterchangeTaskBase::GetTaskThread(FInterchangeTaskBase *this)

{
  return GameThread;
}

