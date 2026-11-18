// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// FWidgetDrawerConfig @ 142d63910

FWidgetDrawerConfig * __thiscall
FWidgetDrawerConfig::FWidgetDrawerConfig(FWidgetDrawerConfig *this,FWidgetDrawerConfig *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  this->UniqueId = param_1->UniqueId;
  *(undefined8 *)&this->GetDrawerContentDelegate = 0;
  *(undefined8 *)&(this->GetDrawerContentDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GetDrawerContentDelegate).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->GetDrawerContentDelegate,&param_1->GetDrawerContentDelegate);
  TDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy>
            (&this->OnDrawerOpenedDelegate,&param_1->OnDrawerOpenedDelegate);
  TDelegate<void___cdecl(TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
            (&this->OnDrawerDismissedDelegate,&param_1->OnDrawerDismissedDelegate);
  (this->CustomWidget).Object = (param_1->CustomWidget).Object;
  pTVar1 = (param_1->CustomWidget).SharedReferenceCount.ReferenceController;
  (this->CustomWidget).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ButtonText).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->ButtonText).TextData.Reference;
  (this->ButtonText).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  (this->ButtonText).Flags = (param_1->ButtonText).Flags;
  (this->ToolTipText).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->ToolTipText).TextData.Reference;
  (this->ToolTipText).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  (this->ToolTipText).Flags = (param_1->ToolTipText).Flags;
  this->Icon = param_1->Icon;
  (this->CustomButtonWidgets).Object = (param_1->CustomButtonWidgets).Object;
  pTVar1 = (param_1->CustomButtonWidgets).SharedReferenceCount.ReferenceController;
  (this->CustomButtonWidgets).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

