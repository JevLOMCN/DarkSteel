// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FSortPredicate @ 1416d6980

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FSortPredicate * __thiscall FText::FSortPredicate::FSortPredicate(FSortPredicate *this,Type param_1)

{
  FCulture *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<icu_64::Collator_const_,1> *__return_storage_ptr__;
  FInternationalization *pFVar4;
  FSortPredicate *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  __return_storage_ptr__ = ::operator_new(0x10);
  if (__return_storage_ptr__ == (TSharedRef<icu_64::Collator_const_,1> *)0x0) {
    __return_storage_ptr__ = (TSharedRef<icu_64::Collator_const_,1> *)0x0;
  }
  else {
    pFVar4 = FInternationalization::Get();
    if ((pFVar4->CurrentLanguage).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSortPredicate *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar1 = (pFVar4->CurrentLanguage).Object;
    pTVar6 = (pFVar4->CurrentLanguage).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSortPredicate *)(*pcVar2)();
        return pFVar5;
      }
    }
    FICUCultureImplementation::GetCollator
              ((pFVar1->Implementation).Ptr,__return_storage_ptr__,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  (this->Implementation).Object = (FSortPredicateImplementation *)__return_storage_ptr__;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSortPredicateImplementation_FSortPredicate_FText__U__DefaultDeleter_VFSortPredicateImplementation_FSortPredicate_FText___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)__return_storage_ptr__;
  }
  (this->Implementation).SharedReferenceCount.ReferenceController = pTVar6;
  if (__return_storage_ptr__ == (TSharedRef<icu_64::Collator_const_,1> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSortPredicate *)(*pcVar2)();
      return pFVar5;
    }
  }
  return this;
}

// operator() @ 1416dd140

bool __thiscall
FText::FSortPredicate::operator()(FSortPredicate *this,FText *param_1,FText *param_2)

{
  FSortPredicateImplementation *pFVar1;
  Collator *pCVar2;
  int iVar3;
  <unnamed_type_u_> *p<Var4;
  undefined4 local_res8 [2];
  undefined4 uStack_18c;
  UCharCharacterIterator local_188;
  void *local_168;
  undefined8 local_160;
  <unnamed_type_u_> local_158;
  undefined8 uStack_150;
  UCharCharacterIterator local_148;
  void *local_128;
  undefined8 local_120;
  <unnamed_type_u_> local_118;
  undefined8 uStack_110;
  undefined1 local_108 [112];
  undefined1 local_98 [112];
  
  pFVar1 = (this->Implementation).Object;
  p<Var4 = (<unnamed_type_u_> *)FText::ToString(param_1);
  local_118 = *p<Var4;
  iVar3 = *(int *)(p<Var4 + 1) + -1;
  if (*(int *)(p<Var4 + 1) == 0) {
    iVar3 = 0;
  }
  icu_64::UCharCharacterIterator::UCharCharacterIterator(&local_148);
  uStack_110 = CONCAT44(uStack_18c,iVar3);
  local_128 = (void *)0x0;
  local_148._padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  local_120 = 0;
  icu_64::UCharCharacterIterator::setText(&local_148,(ConstChar16Ptr)local_118,iVar3);
  uiter_setCharacterIterator_64(local_98,&local_148);
  p<Var4 = (<unnamed_type_u_> *)FText::ToString(param_2);
  local_158 = *p<Var4;
  iVar3 = *(int *)(p<Var4 + 1) + -1;
  if (*(int *)(p<Var4 + 1) == 0) {
    iVar3 = 0;
  }
  icu_64::UCharCharacterIterator::UCharCharacterIterator(&local_188);
  uStack_150 = CONCAT44(uStack_18c,iVar3);
  local_188._padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  local_168 = (void *)0x0;
  local_160 = 0;
  icu_64::UCharCharacterIterator::setText(&local_188,(ConstChar16Ptr)local_158,iVar3);
  uiter_setCharacterIterator_64(local_108,&local_188);
  pCVar2 = (pFVar1->ICUCollator).Object;
  local_res8[0] = 0;
  iVar3 = (**(code **)((longlong)*pCVar2 + 0x28))(pCVar2,local_98,local_108,local_res8);
  local_188._padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  icu_64::UCharCharacterIterator::~UCharCharacterIterator(&local_188);
  local_148._padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  icu_64::UCharCharacterIterator::~UCharCharacterIterator(&local_148);
  return iVar3 != 1;
}

