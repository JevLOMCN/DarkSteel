// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FSlimHorizontalUniformToolBarBuilder @ 1427b43f0

FSlimHorizontalUniformToolBarBuilder * __thiscall
FSlimHorizontalUniformToolBarBuilder::FSlimHorizontalUniformToolBarBuilder
          (FSlimHorizontalUniformToolBarBuilder *this,TSharedPtr<FUICommandList_const_,1> *param_1,
          FMultiBoxCustomization param_2,TSharedPtr<FExtender,1> *param_3,bool param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  atomic<int> *paVar4;
  TSharedPtr<FUICommandList_const_,1> local_48;
  TSharedPtr<FExtender,1> local_38;
  
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  local_38.Object = param_3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
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
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  FMultiBoxBuilder::FMultiBoxBuilder
            ((FMultiBoxBuilder *)this,SlimHorizontalUniformToolBar,param_2,false,&local_48,&local_38
             ,(FName)0x0,(FName)0x0);
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
  *(undefined ***)this = &___7FSlimHorizontalUniformToolBarBuilder__6B_;
  plVar2 = *(longlong **)(*(longlong *)&this->field_0x8 + 0x60);
  lVar3 = (**(code **)(*plVar2 + 0xa0))
                    (plVar2,FToolBarStyle::TypeName,
                     *(undefined8 *)(*(longlong *)&this->field_0x8 + 0x68),0,1);
  if (lVar3 == 0) {
    FToolBarStyle::GetDefault();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// AddToolBarButton @ 1427cb400

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FSlimHorizontalUniformToolBarBuilder::AddToolBarButton
          (FSlimHorizontalUniformToolBarBuilder *this,FButtonArgs *param_1)

{
  FToolBarButtonBlock *this_00;
  FButtonArgs *pFVar1;
  FToolBarButtonBlock *pFVar2;
  TSharedPtr<FToolBarButtonBlock,1> local_1e8;
  FButtonArgs local_1d8;
  
  (**(code **)(*(longlong *)this + 0x18))();
  (**(code **)(*(longlong *)this + 0x10))(this,param_1->ExtensionHook,0);
  this_00 = ::operator_new(0x328);
  pFVar2 = (FToolBarButtonBlock *)0x0;
  if (this_00 != (FToolBarButtonBlock *)0x0) {
    pFVar1 = FButtonArgs::FButtonArgs(&local_1d8,param_1);
    pFVar2 = FToolBarButtonBlock::FToolBarButtonBlock(this_00,pFVar1);
  }
  TSharedPtr<FToolBarButtonBlock,1>::TSharedPtr<FToolBarButtonBlock,1><FToolBarButtonBlock>
            (&local_1e8,pFVar2);
  if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FToolBarBuilder::InitializeToolBarButtonBlock((FToolBarBuilder *)this,&local_1e8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  return;
}

