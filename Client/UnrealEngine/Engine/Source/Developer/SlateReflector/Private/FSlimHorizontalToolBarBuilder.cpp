// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// FSlimHorizontalToolBarBuilder @ 142e0ac70

FSlimHorizontalToolBarBuilder * __thiscall
FSlimHorizontalToolBarBuilder::FSlimHorizontalToolBarBuilder
          (FSlimHorizontalToolBarBuilder *this,TSharedPtr<FUICommandList_const_,1> *param_1,
          FMultiBoxCustomization param_2,TSharedPtr<FExtender,1> *param_3,bool param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> *paVar2;
  TSharedPtr<FUICommandList_const_,1> local_48;
  TSharedPtr<FExtender,1> local_38;
  
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  local_38.Object = param_3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar2 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar2 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  FMultiBoxBuilder::FMultiBoxBuilder
            ((FMultiBoxBuilder *)this,SlimHorizontalToolBar,param_2,false,&local_48,&local_38,
             (FName)0x0,(FName)0x0);
  *(undefined ***)this = &___7FToolBarBuilder__6B_;
  *(undefined8 *)&this->field_0x58 = 0;
  memset(&this->field_0x60,0,200);
  this->field_0x128 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  this->field_0x155 = param_4;
  *(undefined8 *)&this->field_0x148 = 0;
  *(undefined4 *)&this->field_0x151 = 0x10000;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)this = &___7FSlimHorizontalToolBarBuilder__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

