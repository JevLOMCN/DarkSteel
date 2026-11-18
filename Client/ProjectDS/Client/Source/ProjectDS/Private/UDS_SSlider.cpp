// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ~UDS_SSlider @ 14bc84bb0

void __thiscall UDS_SSlider::~UDS_SSlider(UDS_SSlider *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseLeaveHandler);
  pvVar1 = *(void **)&(this->OnMouseLeaveHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseLeaveHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseEnterHandler);
  pvVar1 = *(void **)&(this->OnMouseEnterHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseEnterHandler);
  SSlider::~SSlider((SSlider *)this);
  return;
}

// OnMouseEnter @ 14bcb7160

void __thiscall
UDS_SSlider::OnMouseEnter(UDS_SSlider *this,FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseEnterHandler,
             &local_28);
  if ((*(int *)&(this->OnMouseEnterHandler).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnMouseEnterHandler).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnMouseLeave @ 14bcb71b0

void __thiscall UDS_SSlider::OnMouseLeave(UDS_SSlider *this,FPointerEvent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseLeaveHandler,
             &local_28);
  if ((*(int *)&(this->OnMouseLeaveHandler).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnMouseLeaveHandler).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

