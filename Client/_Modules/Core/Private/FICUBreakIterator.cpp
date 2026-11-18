// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FICUBreakIterator @ 1416d4e90

FICUBreakIterator * __thiscall
FICUBreakIterator::FICUBreakIterator
          (FICUBreakIterator *this,TWeakPtr<icu_64::BreakIterator,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FICUBreakIterator__6B_;
  (this->ICUBreakIteratorHandle).Object = param_1->Object;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->ICUBreakIteratorHandle).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FICUBreakIterator @ 1416d8930

void __thiscall FICUBreakIterator::~FICUBreakIterator(FICUBreakIterator *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FICUBreakIterator__6B_;
  if (FICUBreakIteratorManager::Singleton != (FICUBreakIteratorManager *)0x0) {
    FICUBreakIteratorManager::DestroyIterator
              (FICUBreakIteratorManager::Singleton,&this->ICUBreakIteratorHandle);
  }
  pTVar3 = (this->ICUBreakIteratorHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001416d897d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// GetCurrentPosition @ 1416f6130

int __thiscall FICUBreakIterator::GetCurrentPosition(FICUBreakIterator *this)

{
  int iVar1;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalBreakIterator(this,&local_18);
  iVar1 = (**(code **)((local_18.Object)->_padding_ + 0x70))(local_18.Object);
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar1;
}

// GetInternalBreakIterator @ 1416f8690

TSharedRef<icu_64::BreakIterator,1> * __thiscall
FICUBreakIterator::GetInternalBreakIterator
          (FICUBreakIterator *this,TSharedRef<icu_64::BreakIterator,1> *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<icu_64::BreakIterator,1> *pTVar4;
  BreakIterator *pBVar5;
  BreakIterator *pBVar6;
  BreakIterator *pBVar7;
  bool bVar8;
  
  pBVar6 = (BreakIterator *)(this->ICUBreakIteratorHandle).WeakReferenceCount.ReferenceController;
  pBVar7 = (BreakIterator *)0x0;
  pBVar5 = pBVar6;
  if (pBVar6 != (BreakIterator *)0x0) {
    aVar2 = *(atomic<int> *)pBVar6->actualLocale;
    do {
      pBVar5 = pBVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1416f86d1;
      LOCK();
      aVar3 = *(atomic<int> *)pBVar6->actualLocale;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        *(atomic<int> *)pBVar6->actualLocale = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pBVar7 = (this->ICUBreakIteratorHandle).Object;
    pBVar5 = pBVar6;
    if (pBVar7 != (BreakIterator *)0x0) goto LAB_1416f86f7;
  }
LAB_1416f86d1:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  pBVar6 = pBVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<icu_64::BreakIterator,1> *)(*pcVar1)();
    return pTVar4;
  }
LAB_1416f86f7:
  __return_storage_ptr__->Object = pBVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pBVar6;
  if ((pBVar7 == (BreakIterator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<icu_64::BreakIterator,1> *)(*pcVar1)();
    return pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// MoveToCandidateAfter @ 141705420

int __thiscall FICUBreakIterator::MoveToCandidateAfter(FICUBreakIterator *this,int param_1)

{
  int iVar1;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalBreakIterator(this,&local_18);
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  iVar1 = (**(code **)((local_18.Object)->_padding_ + 0x78))(local_18.Object,param_1);
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar1;
}

// MoveToCandidateBefore @ 141705580

int __thiscall FICUBreakIterator::MoveToCandidateBefore(FICUBreakIterator *this,int param_1)

{
  int iVar1;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalBreakIterator(this,&local_18);
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  iVar1 = (**(code **)((local_18.Object)->_padding_ + 0x80))(local_18.Object,param_1);
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar1;
}

// MoveToNext @ 141705610

int __thiscall FICUBreakIterator::MoveToNext(FICUBreakIterator *this)

{
  int iVar1;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalBreakIterator(this,&local_18);
  iVar1 = (**(code **)((local_18.Object)->_padding_ + 0x68))(local_18.Object);
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar1;
}

// MoveToPrevious @ 141705770

int __thiscall FICUBreakIterator::MoveToPrevious(FICUBreakIterator *this)

{
  int iVar1;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalBreakIterator(this,&local_18);
  iVar1 = (**(code **)((local_18.Object)->_padding_ + 0x58))(local_18.Object);
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar1;
}

// ResetToBeginning @ 14170dc70

int __thiscall FICUBreakIterator::ResetToBeginning(FICUBreakIterator *this)

{
  int iVar1;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalBreakIterator(this,&local_18);
  iVar1 = (**(code **)((local_18.Object)->_padding_ + 0x48))(local_18.Object);
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar1;
}

// ResetToEnd @ 14170dd30

int __thiscall FICUBreakIterator::ResetToEnd(FICUBreakIterator *this)

{
  int iVar1;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalBreakIterator(this,&local_18);
  iVar1 = (**(code **)((local_18.Object)->_padding_ + 0x50))(local_18.Object);
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar1;
}

// SetString @ 141711a70

void __thiscall FICUBreakIterator::SetString(FICUBreakIterator *this,FString *param_1)

{
  BreakIterator *pBVar1;
  code *pcVar2;
  TSharedRef<icu_64::BreakIterator,1> *pTVar3;
  FICUTextCharacterIterator_NativeUTF16 *this_00;
  FICUTextCharacterIterator_NativeUTF16 *pFVar4;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  pTVar3 = GetInternalBreakIterator(this,&local_18);
  pBVar1 = pTVar3->Object;
  pcVar2 = *(code **)(pBVar1->_padding_ + 0x40);
  this_00 = icu_64::UMemory::operator_new(0x40);
  pFVar4 = (FICUTextCharacterIterator_NativeUTF16 *)0x0;
  if (this_00 != (FICUTextCharacterIterator_NativeUTF16 *)0x0) {
    pFVar4 = FICUTextCharacterIterator_NativeUTF16::FICUTextCharacterIterator_NativeUTF16
                       (this_00,param_1);
  }
  (*pcVar2)(pBVar1,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000141711ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x60))(this);
  return;
}

// SetStringRef @ 141711e40

void __thiscall
FICUBreakIterator::SetStringRef(FICUBreakIterator *this,TStringView<wchar_t> *param_1)

{
  BreakIterator *pBVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  wchar16 *pwVar4;
  TSharedRef<icu_64::BreakIterator,1> *pTVar5;
  UCharCharacterIterator *this_00;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  pTVar5 = GetInternalBreakIterator(this,&local_18);
  pBVar1 = pTVar5->Object;
  pcVar2 = *(code **)(pBVar1->_padding_ + 0x40);
  this_00 = icu_64::UMemory::operator_new(0x40);
  if (this_00 != (UCharCharacterIterator *)0x0) {
    icu_64::UCharCharacterIterator::UCharCharacterIterator(this_00);
    pwVar3 = param_1->DataPtr;
    pwVar4 = *(wchar16 **)&param_1->Size;
    this_00->_padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = (longlong)pwVar3;
    this_00[1].text = pwVar4;
    icu_64::UCharCharacterIterator::setText
              (this_00,(ConstChar16Ptr)this_00[1]._padding_,*(int *)&this_00[1].text);
  }
  (*pcVar2)(pBVar1,this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000141711ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x60))(this);
  return;
}

