// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// FMenuBarBuilder @ 142c37880

FMenuBarBuilder * __thiscall
FMenuBarBuilder::FMenuBarBuilder
          (FMenuBarBuilder *this,TSharedPtr<FUICommandList_const_,1> *param_1,
          TSharedPtr<FExtender,1> *param_2,ISlateStyle *param_3,FName param_4)

{
  longlong lVar1;
  FName local_res8;
  TSharedPtr<FExtender,1> local_38;
  TSharedPtr<FUICommandList_const_,1> local_28;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_38.Object = param_2->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)this,MenuBar,false,&local_28,false,&local_38,param_3,(FName)0x0,
             param_4);
  lVar1 = *(longlong *)&this->field_0x8;
  *(undefined ***)this = &___7FMenuBarBuilder__6B_;
  ::FName::FName(&local_res8,"WindowMenuBar");
  *(ISlateStyle **)(lVar1 + 0x60) = param_3;
  *(FName *)(lVar1 + 0x68) = local_res8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

