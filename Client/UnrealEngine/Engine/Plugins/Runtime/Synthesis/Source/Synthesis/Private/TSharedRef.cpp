// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// TSharedRef<Audio::FEffectConvolutionReverb,1> @ 14f0b5ab0

TSharedRef<Audio::FEffectConvolutionReverb,1> * __thiscall
TSharedRef<Audio::FEffectConvolutionReverb,1>::TSharedRef<Audio::FEffectConvolutionReverb,1>
          (TSharedRef<Audio::FEffectConvolutionReverb,1> *this,FEffectConvolutionReverb *param_1,
          TReferenceControllerBase<1> *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TSharedRef<Audio::FEffectConvolutionReverb,1> *pTVar8;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FEffectConvolutionReverb *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TSharedRef<Audio::FEffectConvolutionReverb,1> *)(*pcVar6)();
      return pTVar8;
    }
  }
  else {
    plVar1 = &param_1->_padding_;
    if (((param_1->_padding_ == 0) || (*plVar1 == 0)) || (*(int *)(*plVar1 + 8) < 1)) {
      pTVar4 = (this->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_1->_padding_ = (longlong)param_1;
      if (pTVar4 != (TReferenceControllerBase<1> *)*plVar1) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)*plVar1;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *plVar1 = (longlong)pTVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  return this;
}

