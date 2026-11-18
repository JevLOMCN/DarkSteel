// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// FICULineBreakIterator @ 1416d54c0

FICULineBreakIterator * __thiscall
FICULineBreakIterator::FICULineBreakIterator(FICULineBreakIterator *this)

{
  code *pcVar1;
  bool bVar2;
  FICULineBreakIterator *pFVar3;
  
  this->_padding_ = (longlong)&___7FICULineBreakIterator__6B_;
  if (FICUBreakIteratorManager::Singleton == (FICUBreakIteratorManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUBreakIterator.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FICULineBreakIterator *)(*pcVar1)();
      return pFVar3;
    }
  }
  FICUBreakIteratorManager::CreateLineBreakIterator
            (FICUBreakIteratorManager::Singleton,&this->ICULineBreakIteratorHandle);
  this->CurrentPosition = 0;
  return this;
}

// ~FICULineBreakIterator @ 1416d8cb0

void __thiscall FICULineBreakIterator::~FICULineBreakIterator(FICULineBreakIterator *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FICULineBreakIterator__6B_;
  if (FICUBreakIteratorManager::Singleton != (FICUBreakIteratorManager *)0x0) {
    FICUBreakIteratorManager::DestroyIterator
              (FICUBreakIteratorManager::Singleton,&this->ICULineBreakIteratorHandle);
  }
  pTVar3 = (this->ICULineBreakIteratorHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001416d8cfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// GetCurrentPosition @ 1416f6180

int __thiscall FICULineBreakIterator::GetCurrentPosition(FICULineBreakIterator *this)

{
  return this->CurrentPosition;
}

// GetInternalLineBreakIterator @ 1416f8760

TSharedRef<icu_64::BreakIterator,1> * __thiscall
FICULineBreakIterator::GetInternalLineBreakIterator
          (FICULineBreakIterator *this,TSharedRef<icu_64::BreakIterator,1> *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<icu_64::BreakIterator,1> *pTVar4;
  BreakIterator *pBVar5;
  BreakIterator *pBVar6;
  BreakIterator *pBVar7;
  bool bVar8;
  
  pBVar6 = (BreakIterator *)
           (this->ICULineBreakIteratorHandle).WeakReferenceCount.ReferenceController;
  pBVar7 = (BreakIterator *)0x0;
  pBVar5 = pBVar6;
  if (pBVar6 != (BreakIterator *)0x0) {
    aVar2 = *(atomic<int> *)pBVar6->actualLocale;
    do {
      pBVar5 = pBVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1416f87a1;
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
    pBVar7 = (this->ICULineBreakIteratorHandle).Object;
    pBVar5 = pBVar6;
    if (pBVar7 != (BreakIterator *)0x0) goto LAB_1416f87c7;
  }
LAB_1416f87a1:
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
LAB_1416f87c7:
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

// MoveToCandidateAfter @ 141705480

int __thiscall FICULineBreakIterator::MoveToCandidateAfter(FICULineBreakIterator *this,int param_1)

{
  int iVar1;
  
  this->CurrentPosition = param_1;
  iVar1 = MoveToNextImpl(this);
  return iVar1;
}

// MoveToCandidateBefore @ 1417055e0

int __thiscall FICULineBreakIterator::MoveToCandidateBefore(FICULineBreakIterator *this,int param_1)

{
  int iVar1;
  
  this->CurrentPosition = param_1;
  iVar1 = MoveToPreviousImpl(this);
  return iVar1;
}

// MoveToNext @ 141705660

int __thiscall FICULineBreakIterator::MoveToNext(FICULineBreakIterator *this)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  TSharedRef<icu_64::BreakIterator,1> TStack_18;
  
  GetInternalLineBreakIterator(this,&TStack_18);
  plVar5 = (longlong *)(**(code **)((TStack_18.Object)->_padding_ + 0x20))(TStack_18.Object);
  iVar4 = this->CurrentPosition;
  uVar2 = (**(code **)(*(longlong *)CVarHangulTextWrappingMethod._padding_ + 200))();
  if ((1 < uVar2) || ((char)uVar2 == '\x01')) {
    (**(code **)(*plVar5 + 0x78))(plVar5,iVar4);
    iVar3 = (**(code **)(*plVar5 + 0x88))(plVar5);
    if (iVar3 - 0xac00U < 0x2ba4) {
      cVar1 = (**(code **)(*plVar5 + 0x30))(plVar5);
      while ((cVar1 != '\0' &&
             (iVar3 = (**(code **)(*plVar5 + 0x98))(plVar5), iVar3 - 0xac00U < 0x2ba4))) {
        iVar4 = *(int *)((longlong)plVar5 + 0xc);
        cVar1 = (**(code **)(*plVar5 + 0x30))(plVar5);
      }
    }
  }
  iVar4 = (**(code **)((TStack_18.Object)->_padding_ + 0x78))(TStack_18.Object,iVar4);
  this->CurrentPosition = iVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return iVar4;
}

// MoveToNextImpl @ 141705670

int __thiscall FICULineBreakIterator::MoveToNextImpl(FICULineBreakIterator *this)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalLineBreakIterator(this,&local_18);
  plVar5 = (longlong *)(**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  iVar4 = this->CurrentPosition;
  uVar2 = (**(code **)(*(longlong *)CVarHangulTextWrappingMethod._padding_ + 200))();
  if ((1 < uVar2) || ((char)uVar2 == '\x01')) {
    (**(code **)(*plVar5 + 0x78))(plVar5,iVar4);
    iVar3 = (**(code **)(*plVar5 + 0x88))(plVar5);
    if (iVar3 - 0xac00U < 0x2ba4) {
      cVar1 = (**(code **)(*plVar5 + 0x30))(plVar5);
      while ((cVar1 != '\0' &&
             (iVar3 = (**(code **)(*plVar5 + 0x98))(plVar5), iVar3 - 0xac00U < 0x2ba4))) {
        iVar4 = *(int *)((longlong)plVar5 + 0xc);
        cVar1 = (**(code **)(*plVar5 + 0x30))(plVar5);
      }
    }
  }
  iVar4 = (**(code **)((local_18.Object)->_padding_ + 0x78))(local_18.Object,iVar4);
  this->CurrentPosition = iVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar4;
}

// MoveToPrevious @ 1417057c0

int __thiscall FICULineBreakIterator::MoveToPrevious(FICULineBreakIterator *this)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  TSharedRef<icu_64::BreakIterator,1> TStack_18;
  
  GetInternalLineBreakIterator(this,&TStack_18);
  plVar5 = (longlong *)(**(code **)((TStack_18.Object)->_padding_ + 0x20))(TStack_18.Object);
  iVar4 = this->CurrentPosition;
  uVar2 = (**(code **)(*(longlong *)CVarHangulTextWrappingMethod._padding_ + 200))();
  if ((1 < uVar2) || ((char)uVar2 == '\x01')) {
    (**(code **)(*plVar5 + 0x78))(plVar5,iVar4);
    iVar3 = (**(code **)(*plVar5 + 0x88))(plVar5);
    if (iVar3 - 0xac00U < 0x2ba4) {
      cVar1 = (**(code **)(*plVar5 + 0xb0))(plVar5);
      while ((cVar1 != '\0' &&
             (iVar3 = (**(code **)(*plVar5 + 0xa8))(plVar5), iVar3 - 0xac00U < 0x2ba4))) {
        iVar4 = *(int *)((longlong)plVar5 + 0xc);
        cVar1 = (**(code **)(*plVar5 + 0xb0))(plVar5);
      }
    }
  }
  iVar4 = (**(code **)((TStack_18.Object)->_padding_ + 0x80))(TStack_18.Object,iVar4);
  this->CurrentPosition = iVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return iVar4;
}

// MoveToPreviousImpl @ 1417057d0

int __thiscall FICULineBreakIterator::MoveToPreviousImpl(FICULineBreakIterator *this)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalLineBreakIterator(this,&local_18);
  plVar5 = (longlong *)(**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  iVar4 = this->CurrentPosition;
  uVar2 = (**(code **)(*(longlong *)CVarHangulTextWrappingMethod._padding_ + 200))();
  if ((1 < uVar2) || ((char)uVar2 == '\x01')) {
    (**(code **)(*plVar5 + 0x78))(plVar5,iVar4);
    iVar3 = (**(code **)(*plVar5 + 0x88))(plVar5);
    if (iVar3 - 0xac00U < 0x2ba4) {
      cVar1 = (**(code **)(*plVar5 + 0xb0))(plVar5);
      while ((cVar1 != '\0' &&
             (iVar3 = (**(code **)(*plVar5 + 0xa8))(plVar5), iVar3 - 0xac00U < 0x2ba4))) {
        iVar4 = *(int *)((longlong)plVar5 + 0xc);
        cVar1 = (**(code **)(*plVar5 + 0xb0))(plVar5);
      }
    }
  }
  iVar4 = (**(code **)((local_18.Object)->_padding_ + 0x80))(local_18.Object,iVar4);
  this->CurrentPosition = iVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar4;
}

// ResetToBeginning @ 14170dcc0

int __thiscall FICULineBreakIterator::ResetToBeginning(FICULineBreakIterator *this)

{
  int iVar1;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalLineBreakIterator(this,&local_18);
  iVar1 = (**(code **)((local_18.Object)->_padding_ + 0x48))(local_18.Object);
  this->CurrentPosition = iVar1;
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  iVar1 = this->CurrentPosition;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar1;
}

// ResetToEnd @ 14170dd80

int __thiscall FICULineBreakIterator::ResetToEnd(FICULineBreakIterator *this)

{
  int iVar1;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  GetInternalLineBreakIterator(this,&local_18);
  iVar1 = (**(code **)((local_18.Object)->_padding_ + 0x50))(local_18.Object);
  this->CurrentPosition = iVar1;
  (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object);
  iVar1 = this->CurrentPosition;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar1;
}

// SetString @ 141711af0

void __thiscall FICULineBreakIterator::SetString(FICULineBreakIterator *this,FString *param_1)

{
  BreakIterator *pBVar1;
  code *pcVar2;
  TSharedRef<icu_64::BreakIterator,1> *pTVar3;
  FICUTextCharacterIterator_NativeUTF16 *this_00;
  FICUTextCharacterIterator_NativeUTF16 *pFVar4;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  pTVar3 = GetInternalLineBreakIterator(this,&local_18);
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
                    /* WARNING: Could not recover jumptable at 0x000141711b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x60))(this);
  return;
}

// SetStringRef @ 141711f00

void __thiscall
FICULineBreakIterator::SetStringRef(FICULineBreakIterator *this,TStringView<wchar_t> *param_1)

{
  BreakIterator *pBVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  wchar16 *pwVar4;
  TSharedRef<icu_64::BreakIterator,1> *pTVar5;
  UCharCharacterIterator *this_00;
  TSharedRef<icu_64::BreakIterator,1> local_18;
  
  pTVar5 = GetInternalLineBreakIterator(this,&local_18);
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
                    /* WARNING: Could not recover jumptable at 0x000141711fb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x60))(this);
  return;
}

