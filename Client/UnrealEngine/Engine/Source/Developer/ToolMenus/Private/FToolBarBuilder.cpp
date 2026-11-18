// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// FToolBarBuilder @ 142c38150

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolBarBuilder * __thiscall
FToolBarBuilder::FToolBarBuilder
          (FToolBarBuilder *this,EMultiBoxType param_1,TSharedPtr<FUICommandList_const_,1> *param_2,
          FMultiBoxCustomization param_3,TSharedPtr<FExtender,1> *param_4,bool param_5)

{
  TSharedPtr<FExtender,1> local_28;
  
  local_28.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  local_28.Object = param_4->Object;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBoxBuilder::FMultiBoxBuilder
            ((FMultiBoxBuilder *)this,param_1,param_3,false,param_2,&local_28,(FName)0x0,(FName)0x0)
  ;
  this->_padding_ = (longlong)&___7FToolBarBuilder__6B_;
  (this->CurrentSectionExtensionHook).ComparisonIndex = 0;
  (this->CurrentSectionExtensionHook).Number = 0;
  memset(&this->CurrentSectionResizeParams,0,200);
  (this->CurrentSectionResizeParams).bIsSet = false;
  *(undefined8 *)&(this->CurrentSectionResizeParams).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CurrentSectionResizeParams).Getter = 0;
  *(undefined8 *)&(this->CurrentSectionResizeParams).Getter.field_0x8 = 0;
  this->bForceSmallIcons = param_5;
  (this->CurrentStyleOverride).ComparisonIndex = 0;
  (this->CurrentStyleOverride).Number = 0;
  *(undefined4 *)&(this->LabelVisibility).bIsSet = 0x10000;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

