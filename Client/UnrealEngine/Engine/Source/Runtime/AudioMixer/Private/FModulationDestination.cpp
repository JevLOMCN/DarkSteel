// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// FModulationDestination @ 1464d96f0

FModulationDestination * __thiscall
Audio::FModulationDestination::FModulationDestination(FModulationDestination *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FModulationDestination *pFVar4;
  
  pTVar3 = ::operator_new(0x160);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->DestinationData).Object = (FModulationDestinationData *)0x10;
    (this->DestinationData).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFModulationDestinationData_FModulationDestination_Audio___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&pTVar3[1].SharedReferenceCount.field_0x3 = 0;
    pTVar3[1].WeakReferenceCount.field_0x3 = 0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    memset(&pTVar3[7].WeakReferenceCount,0,0xe4);
    *(undefined4 *)&pTVar3[1]._padding_ = 0xffffffff;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[1]._padding_ + 4) = 0x3f800000;
    *(undefined2 *)&pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].SharedReferenceCount.field_0x2 = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[6]._padding_ + 4) = 0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    FModulationParameter::FModulationParameter((FModulationParameter *)(pTVar3 + 8));
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 0x13),4000);
    (this->DestinationData).SharedReferenceCount.ReferenceController = pTVar3;
    (this->DestinationData).Object = (FModulationDestinationData *)(pTVar3 + 1);
    if ((FModulationDestinationData *)(pTVar3 + 1) == (FModulationDestinationData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FModulationDestination *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  return this;
}

