// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// GetCriticalSection @ 1492a1400

FWindowsRecursiveMutex * __thiscall
FMemoryRuntimeEstimation::GetCriticalSection(FMemoryRuntimeEstimation *this)

{
  code *pcVar1;
  bool bVar2;
  FWindowsRecursiveMutex *pFVar3;
  
  if ((this->EstimationCriticalSection).Object != (FWindowsRecursiveMutex *)0x0) {
    return (this->EstimationCriticalSection).Object;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8166792025996259970>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitter.cpp"
                     ,0xd7e,"EstimationCriticalSection.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWindowsRecursiveMutex *)(*pcVar1)();
    return pFVar3;
  }
  return (this->EstimationCriticalSection).Object;
}

// Init @ 1492aa1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FMemoryRuntimeEstimation::Init(FMemoryRuntimeEstimation *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar3 = ::operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_18 = ___xmm_00000000000000000000000000000010;
    pTVar4 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWindowsRecursiveMutex_UE___00_SharedPointerInternals__6B_
    ;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar4 = pTVar3 + 1;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar3;
    local_18 = pTVar4;
  }
  if (&this->EstimationCriticalSection != (TSharedPtr<UE::FWindowsRecursiveMutex,1> *)&local_18) {
    (this->EstimationCriticalSection).Object = (FWindowsRecursiveMutex *)pTVar4;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EstimationCriticalSection).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

