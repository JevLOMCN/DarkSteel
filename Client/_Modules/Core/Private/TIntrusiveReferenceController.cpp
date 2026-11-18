// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 46

// DestroyObject @ 1414921e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'::__l2::FSharedData,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 1414921f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<LowLevelTasks::FTask,1>::DestroyObject
          (TIntrusiveReferenceController<LowLevelTasks::FTask,1> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((*(ulonglong *)((this->ObjectStorage).Pad + 0x38) & 0x20) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                       ,0x204,L"State: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141492244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)((this->ObjectStorage).Pad + 0x28) + 0x18))
            ((this->ObjectStorage).Pad + 0x28,&this->ObjectStorage);
  return;
}

// DestroyObject @ 141634690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::FWindowsRecursiveMutex,1>::DestroyObject
          (TIntrusiveReferenceController<UE::FWindowsRecursiveMutex,1> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141634694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1416c8b10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::TEventCount<unsigned_int>,1>::
DestroyObject(TIntrusiveReferenceController<UE::TEventCount<unsigned_int>,1> *this)

{
  return;
}

// TIntrusiveReferenceController<FRegexPatternImplementation,1><FString_const_&,enum_ERegexPatternFlags_&> @ 1416c8c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TIntrusiveReferenceController<FRegexPatternImplementation,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRegexPatternImplementation,1>::
TIntrusiveReferenceController<FRegexPatternImplementation,1><FString_const_&,enum_ERegexPatternFlags_&>
          (TIntrusiveReferenceController<FRegexPatternImplementation,1> *this,FString *param_1,
          ERegexPatternFlags *param_2)

{
  ERegexPatternFlags EVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  FICURegexManager *lpCriticalSection;
  bool bVar4;
  TIntrusiveReferenceController<FRegexPatternImplementation,1> *pTVar5;
  wchar16 *_Dst;
  RegexPattern *pRVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  UErrorCode local_98;
  undefined1 local_94 [4];
  RegexPattern *local_90;
  TReferenceControllerBase<1> *local_88;
  UnicodeString local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_VFRegexPatternImplementation___00_SharedPointerInternals__6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  EVar1 = *param_2;
  if ((FICURegexManager::Singleton == (FICURegexManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICURegex.cpp"
                         ,0x68,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TIntrusiveReferenceController<FRegexPatternImplementation,1> *)(*pcVar3)();
    return pTVar5;
  }
  lpCriticalSection = FICURegexManager::Singleton;
  _Src = (param_1->Data).AllocatorInstance.Data;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_78._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_78.fUnion.fStackFields.fLengthAndFlags = 2;
  iVar2 = (param_1->Data).ArrayNum;
  iVar9 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar9 = 0;
  }
  if (0 < iVar9) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_78,iVar9 + 1);
    memcpy(_Dst,_Src,(longlong)iVar9 * 2);
    _Dst[iVar9] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_78,iVar9);
  }
  local_98 = U_ZERO_ERROR;
  pRVar6 = icu_64::RegexPattern::compile(&local_78,(EVar1 & CaseInsensitive) * 2,&local_98);
  local_90 = pRVar6;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VRegexPattern_icu_64__U__DefaultDeleter_VRegexPattern_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = (longlong)pRVar6;
    pTVar8 = pTVar7;
  }
  local_88 = pTVar8;
  if (pRVar6 != (RegexPattern *)0x0) {
    if (lpCriticalSection == (FICURegexManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TSharedPtr<icu_64::RegexPattern_const_,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexPattern_const_,1>,0>,FDefaultSetAllocator>
    ::Emplace<TSharedPtr<icu_64::RegexPattern_const_,1>_const_&>
              (&lpCriticalSection->AllocatedRegexPatterns,
               (TSharedPtr<icu_64::RegexPattern_const_,1> *)local_94,(bool *)(local_94 + 4));
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  *(RegexPattern **)(this->ObjectStorage).Pad = pRVar6;
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8) = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
    UNLOCK();
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  icu_64::UnicodeString::~UnicodeString(&local_78);
  return this;
}

// DestroyObject @ 1416eb3d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDecimalNumberFormattingRules,1>::
DestroyObject(TIntrusiveReferenceController<FDecimalNumberFormattingRules,1> *this)

{
  FDecimalNumberFormattingRules::~FDecimalNumberFormattingRules
            ((FDecimalNumberFormattingRules *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1416eb3e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FKeysCulture,1>::DestroyObject
          (TIntrusiveReferenceController<FKeysCulture,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 1416eb3f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLeetCulture,1>::DestroyObject
          (TIntrusiveReferenceController<FLeetCulture,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 1416eb400

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRegexMatcherImplementation,1>::DestroyObject
          (TIntrusiveReferenceController<FRegexMatcherImplementation,1> *this)

{
  FRegexMatcherImplementation::~FRegexMatcherImplementation
            ((FRegexMatcherImplementation *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1416eb410

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRegexPatternImplementation,1>::DestroyObject
          (TIntrusiveReferenceController<FRegexPatternImplementation,1> *this)

{
  FRegexPatternImplementation::~FRegexPatternImplementation
            ((FRegexPatternImplementation *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1416eb420

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FThreadImpl,1>::DestroyObject
          (TIntrusiveReferenceController<FThreadImpl,1> *this)

{
  FThreadImpl::~FThreadImpl((FThreadImpl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417512a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLocalizationResourceTextSource,1>::
DestroyObject(TIntrusiveReferenceController<FLocalizationResourceTextSource,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 1417512c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPolyglotTextSource,1>::DestroyObject
          (TIntrusiveReferenceController<FPolyglotTextSource,1> *this)

{
  FPolyglotTextSource::~FPolyglotTextSource((FPolyglotTextSource *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417512d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStringTable,1>::DestroyObject
          (TIntrusiveReferenceController<FStringTable,1> *this)

{
  FStringTable::~FStringTable((FStringTable *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417512e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStringTableEntry,1>::DestroyObject
          (TIntrusiveReferenceController<FStringTableEntry,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014175131c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 141751330

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FTextHistory_StringTableEntry::FStringTableReferenceData,1>::
DestroyObject(TIntrusiveReferenceController<FTextHistory_StringTableEntry::FStringTableReferenceData,1>
              *this)

{
  FTextHistory_StringTableEntry::FStringTableReferenceData::~FStringTableReferenceData
            ((FStringTableReferenceData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141751340

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTextFormatData,1>::DestroyObject
          (TIntrusiveReferenceController<FTextFormatData,1> *this)

{
  FTextFormatData::~FTextFormatData((FTextFormatData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141751350

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTextFormatPatternDefinition,1>::DestroyObject
          (TIntrusiveReferenceController<FTextFormatPatternDefinition,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            (*(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
               **)((this->ObjectStorage).Pad + 0x20),*(int *)((this->ObjectStorage).Pad + 0x28));
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141751398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 1417c3b60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FIoDispatcherBackendContext,1>::DestroyObject
          (TIntrusiveReferenceController<FIoDispatcherBackendContext,1> *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 0x20),*(int *)((this->ObjectStorage).Pad + 0x28));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ObjectStorage);
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3bc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActionToken,1>::DestroyObject
          (TIntrusiveReferenceController<FActionToken,1> *this)

{
  FActionToken::~FActionToken((FActionToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3bd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActorToken,1>::DestroyObject
          (TIntrusiveReferenceController<FActorToken,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  IMessageToken::~IMessageToken((IMessageToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3c00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAssetNameToken,1>::DestroyObject
          (TIntrusiveReferenceController<FAssetNameToken,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  IMessageToken::~IMessageToken((IMessageToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3c30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDocumentationToken,1>::DestroyObject
          (TIntrusiveReferenceController<FDocumentationToken,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  IMessageToken::~IMessageToken((IMessageToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3c80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDynamicTextToken,1>::DestroyObject
          (TIntrusiveReferenceController<FDynamicTextToken,1> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x58));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x58));
  plVar2 = *(longlong **)((this->ObjectStorage).Pad + 0x40);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  IMessageToken::~IMessageToken((IMessageToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3ce0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFixToken,1>::DestroyObject
          (TIntrusiveReferenceController<FFixToken,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x48));
  IMessageToken::~IMessageToken((IMessageToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3d10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImageToken,1>::DestroyObject
          (TIntrusiveReferenceController<FImageToken,1> *this)

{
  IMessageToken::~IMessageToken((IMessageToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3d20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSeverityToken,1>::DestroyObject
          (TIntrusiveReferenceController<FSeverityToken,1> *this)

{
  IMessageToken::~IMessageToken((IMessageToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3d30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTextToken,1>::DestroyObject
          (TIntrusiveReferenceController<FTextToken,1> *this)

{
  IMessageToken::~IMessageToken((IMessageToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3d40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTokenizedMessage,1>::DestroyObject
          (TIntrusiveReferenceController<FTokenizedMessage,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
  DestructItems<TSharedRef<IMessageToken,1>,int>
            (*(TSharedRef<IMessageToken,1> **)((this->ObjectStorage).Pad + 0x10),
             *(int *)((this->ObjectStorage).Pad + 0x18));
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 1417c3db0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTutorialToken,1>::DestroyObject
          (TIntrusiveReferenceController<FTutorialToken,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  IMessageToken::~IMessageToken((IMessageToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1417c3de0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FURLToken,1>::DestroyObject
          (TIntrusiveReferenceController<FURLToken,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  IMessageToken::~IMessageToken((IMessageToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141820e30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTextFilterExpressionEvaluator,1>::
DestroyObject(TIntrusiveReferenceController<FTextFilterExpressionEvaluator,1> *this)

{
  FTextFilterExpressionEvaluator::~FTextFilterExpressionEvaluator
            ((FTextFilterExpressionEvaluator *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141869ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCoreAsyncTaskNotificationImpl,1>::
DestroyObject(TIntrusiveReferenceController<FCoreAsyncTaskNotificationImpl,1> *this)

{
  FCoreAsyncTaskNotificationImpl::~FCoreAsyncTaskNotificationImpl
            ((FCoreAsyncTaskNotificationImpl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141934580

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FRunnableThread_*>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<FRunnableThread_*>,1> *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001419345c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1419345e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FString>,1>::DestroyObject
          (TIntrusiveReferenceController<TFutureState<FString>,1> *this)

{
  TFutureState<FString>::~TFutureState<FString>((TFutureState<FString> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1419345f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<void>,1>::DestroyObject
          (TIntrusiveReferenceController<TFutureState<void>,1> *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000141934639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141934650

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCsvProfilerThreadData,1>::DestroyObject
          (TIntrusiveReferenceController<FCsvProfilerThreadData,1> *this)

{
  FCsvProfilerThreadData::~FCsvProfilerThreadData((FCsvProfilerThreadData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141934660

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTrackedActivity,1>::DestroyObject
          (TIntrusiveReferenceController<FTrackedActivity,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FTrackedActivityManager *this_00;
  
  this_00 = FTrackedActivityManager::Get();
  FTrackedActivityManager::Destroy(this_00,*(FActivity **)((this->ObjectStorage).Pad + 0x10));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014193469f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 1419ed2e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStatsTreeElement,1>::DestroyObject
          (TIntrusiveReferenceController<FStatsTreeElement,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<FStatsTreeElement,1>,int>
            (*(TSharedPtr<FStatsTreeElement,1> **)((this->ObjectStorage).Pad + 0x48),
             *(int *)((this->ObjectStorage).Pad + 0x50));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 141b3d600

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<int>,1>::DestroyObject
          (TIntrusiveReferenceController<TFutureState<int>,1> *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000141b3d649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141cfbc60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<int,1>::DestroyObject
          (TIntrusiveReferenceController<int,1> *this)

{
  return;
}

// DestroyObject @ 141cfbc70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`FTVariantDestructorTest::TestBody'::__l2::FTestItem,1>::DestroyObject
          (void *this)

{
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  return;
}

// DestroyObject @ 141cfbc80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<TTwoSmoothies<1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<TTwoSmoothies<1>_>,1> *this)

{
  TFutureState<TTwoSmoothies<1>_>::~TFutureState<TTwoSmoothies<1>_>
            ((TFutureState<TTwoSmoothies<1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141cfbc90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<bool>,1>::DestroyObject
          (TIntrusiveReferenceController<TFutureState<bool>,1> *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000141cfbcd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141d78da0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::Tasks::WaitAny<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::FSharedData,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 141d78db0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *this)

{
  UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::~FPimpl((FPimpl *)&this->ObjectStorage);
  return;
}

