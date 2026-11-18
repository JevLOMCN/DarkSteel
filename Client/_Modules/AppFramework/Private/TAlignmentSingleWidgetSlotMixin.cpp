// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// HAlign @ 1430cee40

TSingleWidgetChildrenWithBasicLayoutSlot<0> * __thiscall
TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::HAlign
          (TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,
          EHorizontalAlignment param_1)

{
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar1;
  
  this->HAlignment = param_1;
  pTVar1 = (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)(this + -10);
  if (this == (TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)0x0)
  {
    pTVar1 = (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)0x0;
  }
  return pTVar1;
}

// VAlign @ 143107170

TSingleWidgetChildrenWithBasicLayoutSlot<0> * __thiscall
TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::VAlign
          (TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,
          EVerticalAlignment param_1)

{
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar1;
  
  this->VAlignment = param_1;
  pTVar1 = (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)(this + -10);
  if (this == (TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)0x0)
  {
    pTVar1 = (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)0x0;
  }
  return pTVar1;
}

