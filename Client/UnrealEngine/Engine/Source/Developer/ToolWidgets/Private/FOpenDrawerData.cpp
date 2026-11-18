// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// operator= @ 142d690c0

/* WARNING: Enum "Type": Some values do not have unique names */

FOpenDrawerData * __thiscall
FOpenDrawerData::operator=(FOpenDrawerData *this,FOpenDrawerData *param_1)

{
  TWeakPtr<SWindow,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<SDrawerOverlay,1> *pTVar6;
  
  this->DrawerId = param_1->DrawerId;
  pTVar6 = &param_1->DrawerOverlay;
  if (&this->DrawerOverlay != pTVar6) {
    (this->DrawerOverlay).Object = pTVar6->Object;
    pTVar6->Object = (SDrawerOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DrawerOverlay).SharedReferenceCount,
               &(param_1->DrawerOverlay).SharedReferenceCount);
  }
  pTVar1 = &param_1->WindowWithOverlayContent;
  if (&this->WindowWithOverlayContent != pTVar1) {
    (this->WindowWithOverlayContent).Object = pTVar1->Object;
    pTVar4 = (param_1->WindowWithOverlayContent).WeakReferenceCount.ReferenceController;
    pTVar1->Object = (SWindow *)0x0;
    pTVar5 = (this->WindowWithOverlayContent).WeakReferenceCount.ReferenceController;
    (this->WindowWithOverlayContent).WeakReferenceCount.ReferenceController = pTVar4;
    (param_1->WindowWithOverlayContent).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  return this;
}

