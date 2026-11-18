// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~FActionToken @ 1417a6ba0

void __thiscall FActionToken::~FActionToken(FActionToken *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  pIVar1 = (this->ActionDescription).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CanExecuteActionDelegate);
  pvVar2 = *(void **)&(this->CanExecuteActionDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CanExecuteActionDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ActionDelegate);
  pvVar2 = *(void **)&(this->ActionDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ActionDelegate);
  IMessageToken::~IMessageToken((IMessageToken *)this);
  return;
}

// Create @ 1417bdd80

TSharedRef<FActionToken,1> * __cdecl
FActionToken::Create
          (TSharedRef<FActionToken,1> *__return_storage_ptr__,FText *param_1,FText *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_4,bool param_5)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 local_res8 [8];
  
  pTVar3 = ::operator_new(0x98);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFActionToken___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7IMessageToken__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar3 + 4));
    pTVar3[1]._padding_ = (longlong)&___7FActionToken__6B_;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar3 + 5),param_3);
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pTVar3[6].SharedReferenceCount,param_4);
    pTVar3[8]._padding_ = 0;
    pIVar1 = (param_2->TextData).Reference;
    pTVar3[8]._padding_ = (longlong)pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    pTVar3[8].SharedReferenceCount = (atomic<int>)param_2->Flags;
    *(bool *)&pTVar3[9]._padding_ = param_5;
    *(undefined1 *)((longlong)&pTVar3[9]._padding_ + 1) = 0;
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (ITextData *)pTVar3[4]._padding_;
    if (pIVar2 != pIVar1) {
      pTVar3[4]._padding_ = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    pTVar3[4].SharedReferenceCount = (atomic<int>)param_1->Flags;
    pTVar3[1]._padding_ = (longlong)&___7FActionToken__6B_;
    pTVar4 = pTVar3;
  }
  TSharedRef<FActionToken,1>::TSharedRef<FActionToken,1>
            (__return_storage_ptr__,(FActionToken *)(pTVar4 + 1),pTVar4);
  return __return_storage_ptr__;
}

// Create @ 1417bdee0

TSharedRef<FActionToken,1> * __cdecl
FActionToken::Create
          (TSharedRef<FActionToken,1> *__return_storage_ptr__,FText *param_1,FText *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,bool param_4)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 local_res8 [8];
  
  pTVar3 = ::operator_new(0x98);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFActionToken___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7IMessageToken__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar3 + 4));
    pTVar3[1]._padding_ = (longlong)&___7FActionToken__6B_;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar3 + 5),param_3);
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8]._padding_ = 0;
    pIVar1 = (param_2->TextData).Reference;
    pTVar3[8]._padding_ = (longlong)pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    pTVar3[8].SharedReferenceCount = (atomic<int>)param_2->Flags;
    *(bool *)&pTVar3[9]._padding_ = param_4;
    *(undefined1 *)((longlong)&pTVar3[9]._padding_ + 1) = 0;
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (ITextData *)pTVar3[4]._padding_;
    if (pIVar2 != pIVar1) {
      pTVar3[4]._padding_ = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    pTVar3[4].SharedReferenceCount = (atomic<int>)param_1->Flags;
    pTVar3[1]._padding_ = (longlong)&___7FActionToken__6B_;
    pTVar4 = pTVar3;
  }
  TSharedRef<FActionToken,1>::TSharedRef<FActionToken,1>
            (__return_storage_ptr__,(FActionToken *)(pTVar4 + 1),pTVar4);
  return __return_storage_ptr__;
}

// GetType @ 1417d8700

Type __thiscall FActionToken::GetType(FActionToken *this)

{
  return Action;
}

