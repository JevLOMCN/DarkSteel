// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Create @ 1417be3f0

TSharedRef<FDynamicTextToken,1> * __cdecl
FDynamicTextToken::Create
          (TSharedRef<FDynamicTextToken,1> *__return_storage_ptr__,TAttribute<FText> *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FText *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined1 local_res8 [8];
  
  pTVar3 = ::operator_new(0x80);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDynamicTextToken___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7IMessageToken__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar3 + 4));
    pTVar3[1]._padding_ = (longlong)&___7FDynamicTextToken__6B_;
    pTVar3[5]._padding_ = 0;
    pIVar1 = (param_1->Value).TextData.Reference;
    pTVar3[5]._padding_ = (longlong)pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    pTVar3[5].SharedReferenceCount = (atomic<int>)(param_1->Value).Flags;
    *(bool *)&pTVar3[6]._padding_ = param_1->bIsSet;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pTVar3[6].SharedReferenceCount,&param_1->Getter);
    pFVar4 = TAttribute<FText>::Get(param_1);
    pIVar1 = (ITextData *)pTVar3[4]._padding_;
    pIVar2 = (pFVar4->TextData).Reference;
    if (pIVar1 != pIVar2) {
      pTVar3[4]._padding_ = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    pTVar3[4].SharedReferenceCount = (atomic<int>)pFVar4->Flags;
    pTVar5 = pTVar3;
  }
  TSharedRef<FDynamicTextToken,1>::TSharedRef<FDynamicTextToken,1>
            (__return_storage_ptr__,(FDynamicTextToken *)(pTVar5 + 1),pTVar5);
  return __return_storage_ptr__;
}

// GetType @ 1417d8740

Type __thiscall FDynamicTextToken::GetType(FDynamicTextToken *this)

{
  return DynamicText;
}

// ToText @ 141807e90

FText * __thiscall FDynamicTextToken::ToText(FDynamicTextToken *this)

{
  FText *pFVar1;
  
  pFVar1 = TAttribute<FText>::Get(&this->Message);
  return pFVar1;
}

