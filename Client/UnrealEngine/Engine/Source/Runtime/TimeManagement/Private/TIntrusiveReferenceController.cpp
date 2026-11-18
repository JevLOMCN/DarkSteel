// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 3

// DestroyObject @ 146038bb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SFrameRatePicker,1>::DestroyObject
          (TIntrusiveReferenceController<SFrameRatePicker,1> *this)

{
  SFrameRatePicker::~SFrameRatePicker((SFrameRatePicker *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146047c00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SErrorHint,1>::DestroyObject
          (TIntrusiveReferenceController<SErrorHint,1> *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x350);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x348));
  FCurveSequence::~FCurveSequence((FCurveSequence *)((this->ObjectStorage).Pad + 0x2d0));
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x2b8));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146047c60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SFrameRateEntryBox,1>::DestroyObject
          (TIntrusiveReferenceController<SFrameRateEntryBox,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x310));
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x2f0));
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x2d0));
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x2b8));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

