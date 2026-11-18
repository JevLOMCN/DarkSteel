// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FFixToken @ 1417a0fa0

FFixToken * __thiscall
FFixToken::FFixToken
          (FFixToken *this,FText *param_1,TSharedPtr<UE::DataValidation::IFixer,1> *param_2,
          int param_3)

{
  ITextData *pIVar1;
  bool bVar2;
  bool bVar3;
  FText *pFVar4;
  ITextData *pIVar5;
  TRefCountPtr<ITextData> TVar6;
  undefined4 local_res20 [2];
  FText local_48;
  FText local_38;
  
  local_res20[0] = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IMessageToken__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  FText::FText((FText *)&this->_padding_);
  this->_padding_ = (longlong)&___7FFixToken__6B_;
  (this->Fixer).Object = param_2->Object;
  (this->Fixer).SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IFixer *)0x0;
  this->FixIndex = param_3;
  bVar3 = FText::IsEmpty(param_1);
  if (bVar3) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"Core.MessageLog",L"FixLabelEmpty",L"Fix Issue");
    bVar2 = true;
    bVar3 = false;
    pIVar5 = (pFVar4->TextData).Reference;
    TVar6.Reference = local_48.TextData.Reference;
  }
  else {
    pIVar5 = (param_1->TextData).Reference;
    local_48.TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res20);
    }
    pFVar4 = &local_48;
    local_48.Flags = param_1->Flags;
    bVar2 = false;
    bVar3 = true;
    TVar6.Reference = pIVar5;
  }
  pIVar1 = (ITextData *)this->_padding_;
  if (pIVar1 != pIVar5) {
    this->_padding_ = (longlong)pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res20);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(uint *)&this->_padding_ = pFVar4->Flags;
  if ((bVar3) && (TVar6.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
  }
  if ((bVar2) && (local_38.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FFixToken @ 1417a1130

FFixToken * __thiscall
FFixToken::FFixToken
          (FFixToken *this,FPrivateToken param_1,FText *param_2,
          TSharedPtr<UE::DataValidation::IFixer,1> *param_3,int param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  IFixer *pIVar2;
  ITextData *pIVar3;
  bool bVar4;
  bool bVar5;
  FText *pFVar6;
  ITextData *pIVar7;
  TRefCountPtr<ITextData> TVar8;
  FText local_48;
  FText local_38;
  
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  (param_3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pIVar2 = param_3->Object;
  param_3->Object = (IFixer *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IMessageToken__6B_;
  FText::FText((FText *)&this->_padding_);
  this->_padding_ = (longlong)&___7FFixToken__6B_;
  this->FixIndex = param_4;
  (this->Fixer).Object = pIVar2;
  (this->Fixer).SharedReferenceCount.ReferenceController = pTVar1;
  bVar5 = FText::IsEmpty(param_2);
  if (bVar5) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"Core.MessageLog",L"FixLabelEmpty",L"Fix Issue");
    bVar4 = true;
    bVar5 = false;
    pIVar7 = (pFVar6->TextData).Reference;
    TVar8.Reference = local_48.TextData.Reference;
  }
  else {
    pIVar7 = (param_2->TextData).Reference;
    local_48.TextData.Reference = pIVar7;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&param_4);
    }
    pFVar6 = &local_48;
    local_48.Flags = param_2->Flags;
    bVar4 = false;
    bVar5 = true;
    TVar8.Reference = pIVar7;
  }
  pIVar3 = (ITextData *)this->_padding_;
  if (pIVar3 != pIVar7) {
    this->_padding_ = (longlong)pIVar7;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&param_4);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
  }
  *(uint *)&this->_padding_ = pFVar6->Flags;
  if ((bVar5) && (TVar8.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  if ((bVar4) && (local_38.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->_padding_ = (longlong)&___7FFixToken__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// Create @ 1417be520

TSharedRef<FFixToken,1> * __cdecl
FFixToken::Create(TSharedRef<FFixToken,1> *__return_storage_ptr__,FText *param_1,
                 TSharedRef<UE::DataValidation::IFixer,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FPrivateToken local_res8;
  TSharedPtr<UE::DataValidation::IFixer,1> local_28;
  
  pTVar1 = ::operator_new(0x68);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFFixToken___00_SharedPointerInternals__6B_;
    local_28.Object = param_2->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FFixToken((FFixToken *)(pTVar1 + 1),local_res8,param_1,&local_28,param_3);
  }
  TSharedRef<FFixToken,1>::TSharedRef<FFixToken,1>
            (__return_storage_ptr__,(FFixToken *)(pTVar1 + 1),pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetType @ 1417d8750

Type __thiscall FFixToken::GetType(FFixToken *this)

{
  return Fix;
}

