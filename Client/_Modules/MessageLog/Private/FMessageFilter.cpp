// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 6

// FMessageFilter @ 142bc8260

FMessageFilter * __thiscall
FMessageFilter::FMessageFilter(FMessageFilter *this,FText *param_1,FSlateIcon *param_2)

{
  ITextData *pIVar1;
  FName FVar2;
  FName FVar3;
  undefined1 local_res8 [8];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMessageFilter__6B_;
  (this->Name).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->Name).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Name).Flags = param_1->Flags;
  FVar2 = param_2->StyleName;
  (this->Icon).StyleSetName = param_2->StyleSetName;
  (this->Icon).StyleName = FVar2;
  FVar2 = param_2->SmallStyleName;
  FVar3 = param_2->StatusOverlayStyleName;
  this->Display = true;
  (this->Icon).SmallStyleName = FVar2;
  (this->Icon).StatusOverlayStyleName = FVar3;
  *(undefined8 *)&this->RefreshCallback = 0;
  *(undefined8 *)&(this->RefreshCallback).field_0x8 = 0;
  *(undefined8 *)&(this->RefreshCallback).field_0x10 = 0;
  *(undefined8 *)&(this->RefreshCallback).field_0x18 = 2;
  return this;
}

// ~FMessageFilter @ 142bcc620

void __thiscall FMessageFilter::~FMessageFilter(FMessageFilter *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ITextData *pIVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FMessageFilter__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RefreshCallback).field_0x8,*(int *)&(this->RefreshCallback).field_0x10);
  pvVar3 = *(void **)&(this->RefreshCallback).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RefreshCallback);
  pIVar4 = (this->Name).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// OnDisplayCheckStateChanged @ 142c0c0f0

void __thiscall
FMessageFilter::OnDisplayCheckStateChanged(FMessageFilter *this,ECheckBoxState param_1)

{
  this->Display = param_1 == Checked;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->RefreshCallback);
  return;
}

// OnFilterChanged @ 142c0dc90

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FMessageFilter::OnFilterChanged(FMessageFilter *this)

{
  return &this->RefreshCallback;
}

// OnGetDisplayCheckState @ 142c0dcb0

ECheckBoxState __thiscall FMessageFilter::OnGetDisplayCheckState(FMessageFilter *this)

{
  return this->Display != false;
}

// OnMouseButtonUp @ 142c15080

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FMessageFilter::OnMouseButtonUp
          (FMessageFilter *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->RefreshCallback);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

