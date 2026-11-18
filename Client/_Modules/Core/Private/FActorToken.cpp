// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FActorToken @ 1417a0700

FActorToken * __thiscall
FActorToken::FActorToken(FActorToken *this,FString *param_1,FGuid *param_2,FText *param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FText *pFVar7;
  undefined1 local_res8 [8];
  FText local_28;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IMessageToken__6B_;
  FText::FText((FText *)&this->_padding_);
  this->_padding_ = (longlong)&___7FActorToken__6B_;
  ::FString::FString(&this->ActorPath,param_1);
  uVar3 = param_2->B;
  uVar4 = param_2->C;
  uVar5 = param_2->D;
  (this->ActorGuid).A = param_2->A;
  (this->ActorGuid).B = uVar3;
  (this->ActorGuid).C = uVar4;
  (this->ActorGuid).D = uVar5;
  bVar6 = FText::IsEmpty(param_3);
  if (bVar6) {
    pFVar7 = FText::FromString(&local_28,&this->ActorPath);
    FText::operator=((FText *)&this->_padding_,pFVar7);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  else {
    pIVar1 = (param_3->TextData).Reference;
    pIVar2 = (ITextData *)this->_padding_;
    if (pIVar2 != pIVar1) {
      this->_padding_ = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = param_3->Flags;
  }
  return this;
}

// Create @ 1417be030

TSharedRef<FActorToken,1> * __cdecl
FActorToken::Create(TSharedRef<FActorToken,1> *__return_storage_ptr__,FString *param_1,
                   FGuid *param_2,FText *param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FText *pFVar7;
  undefined1 local_res8 [8];
  FText local_38;
  
  pTVar6 = ::operator_new(0x70);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFActorToken___00_SharedPointerInternals__6B_;
    pTVar6[1]._padding_ = (longlong)&___7IMessageToken__6B_;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar6 + 4));
    pTVar6[1]._padding_ = (longlong)&___7FActorToken__6B_;
    ::FString::FString((FString *)(pTVar6 + 5),param_1);
    uVar3 = param_2->C;
    uVar4 = param_2->D;
    pTVar6[6]._padding_ = *(longlong *)param_2;
    pTVar6[6].SharedReferenceCount = (atomic<int>)uVar3;
    pTVar6[6].WeakReferenceCount = (atomic<int>)uVar4;
    bVar5 = FText::IsEmpty(param_3);
    if (bVar5) {
      pFVar7 = FText::FromString(&local_38,(FString *)(pTVar6 + 5));
      FText::operator=((FText *)(pTVar6 + 4),pFVar7);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    else {
      pIVar1 = (param_3->TextData).Reference;
      pIVar2 = (ITextData *)pTVar6[4]._padding_;
      if (pIVar2 != pIVar1) {
        pTVar6[4]._padding_ = (longlong)pIVar1;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
        }
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
      }
      pTVar6[4].SharedReferenceCount = (atomic<int>)param_3->Flags;
    }
    pTVar6[1]._padding_ = (longlong)&___7FActorToken__6B_;
  }
  TSharedRef<FActorToken,1>::TSharedRef<FActorToken,1>
            (__return_storage_ptr__,(FActorToken *)(pTVar6 + 1),pTVar6);
  return __return_storage_ptr__;
}

// GetOnMessageTokenActivated @ 1417d4d60

TDelegate<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy> * __thiscall
FActorToken::GetOnMessageTokenActivated(FActorToken *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (TDelegate<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
              *)&this->_padding_;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &DefaultMessageTokenActivated;
}

// GetType @ 1417d8710

Type __thiscall FActorToken::GetType(FActorToken *this)

{
  return Actor;
}

