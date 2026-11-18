// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 8

// ~IGeometrySelector @ 14cb64bc0

void __thiscall IGeometrySelector::~IGeometrySelector(IGeometrySelector *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IGeometrySelector__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectableElementsChanged).field_0x8,
             *(int *)&(this->OnSelectableElementsChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnSelectableElementsChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectableElementsChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGeometryModifed).field_0x8,*(int *)&(this->OnGeometryModifed).field_0x10);
  pvVar1 = *(void **)&(this->OnGeometryModifed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGeometryModifed);
  return;
}

// GetConditionalSelectionPreviewForRaycast @ 14cb952d0

void __thiscall
IGeometrySelector::GetConditionalSelectionPreviewForRaycast
          (IGeometrySelector *this,FWorldRayQueryInfo *param_1,FGeometrySelectionEditor *param_2,
          FGeometrySelection *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb952d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x68))();
  return;
}

// IsLockable @ 14cba4230

bool __thiscall IGeometrySelector::IsLockable(IGeometrySelector *this)

{
  return false;
}

// IsLocked @ 14cba4240

bool __thiscall IGeometrySelector::IsLocked(IGeometrySelector *this)

{
  return false;
}

// Restore @ 14cbad420

bool __thiscall IGeometrySelector::Restore(IGeometrySelector *this)

{
  return false;
}

// SetLockedState @ 14cbaf610

void __thiscall IGeometrySelector::SetLockedState(IGeometrySelector *this,bool param_1)

{
  return;
}

// Sleep @ 14cbb34c0

bool __thiscall IGeometrySelector::Sleep(IGeometrySelector *this)

{
  return false;
}

// SupportsSleep @ 14cbb4660

bool __thiscall IGeometrySelector::SupportsSleep(IGeometrySelector *this)

{
  return false;
}

