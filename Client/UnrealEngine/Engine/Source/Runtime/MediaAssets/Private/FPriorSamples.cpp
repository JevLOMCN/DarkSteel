// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// Create @ 146c25180

TSharedRef<FPriorSamples,1> * __cdecl
FPriorSamples::Create(TSharedRef<FPriorSamples,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FPriorSamples,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FPriorSamples *pFVar9;
  
  pTVar6 = ::operator_new(0x60);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FPriorSamples *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TGPUsyncedDataDeleter_V__TSharedPtr_VIMediaTextureSample___00_____00_SharedPointerInternals__6B_
    ;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ =
         (longlong)&___7__TGPUsyncedDataDeleter_V__TSharedPtr_VIMediaTextureSample___00____6B_;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6[3].SharedReferenceCount,4000);
    pFVar9 = (FPriorSamples *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pFVar9 == (FPriorSamples *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<FPriorSamples,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
  }
  *(FPriorSamples **)&pFVar9->field_0x8 = pFVar9;
  if (pTVar8 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar3 = *(longlong **)&pFVar9->field_0x10;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar8;
  }
  __return_storage_ptr__->Object = pFVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

