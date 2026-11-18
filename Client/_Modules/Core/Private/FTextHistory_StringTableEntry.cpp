// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// FTextHistory_StringTableEntry @ 141737360

FTextHistory_StringTableEntry * __thiscall
FTextHistory_StringTableEntry::FTextHistory_StringTableEntry
          (FTextHistory_StringTableEntry *this,FName param_1,FTextKey *param_2,
          EStringTableLoadingPolicy param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FTextHistory_StringTableEntry *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FStringTableReferenceData *pFVar9;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTextHistory_StringTableEntry__6B_;
  pTVar6 = ::operator_new(0x70);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FStringTableReferenceData *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStringTableReferenceData_FTextHistory_StringTableEntry___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0xffffffff;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6[4].SharedReferenceCount,4000);
    pFVar9 = (FStringTableReferenceData *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pFVar9 == (FStringTableReferenceData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FTextHistory_StringTableEntry *)(*pcVar4)();
        return pFVar7;
      }
      goto LAB_1417374ab;
    }
  }
  if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
     (*(int *)(pFVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_1417374ab:
  (this->StringTableReferenceData).Object = pFVar9;
  (this->StringTableReferenceData).SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->StringTableReferenceData).Object == (FStringTableReferenceData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTextHistory_StringTableEntry *)(*pcVar4)();
      return pFVar7;
    }
  }
  FStringTableReferenceData::Initialize
            ((this->StringTableReferenceData).Object,param_1,param_2,param_3);
  FTextHistory::MarkDisplayStringUpToDate((FTextHistory *)this);
  return this;
}

// BuildInvariantDisplayString @ 141749fb0

FString * __thiscall
FTextHistory_StringTableEntry::BuildInvariantDisplayString
          (FTextHistory_StringTableEntry *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = (FString *)(**(code **)(this->_padding_ + 0x20))();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetDisplayString @ 14175c960

FString * __thiscall
FTextHistory_StringTableEntry::GetDisplayString(FTextHistory_StringTableEntry *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int *piVar5;
  int *local_res10 [3];
  
  if ((TextLocalizationManager::DisplayStringSupport != 0) &&
     (TextLocalizationManager::DisplayStringSupport != 1)) {
    if (TextLocalizationManager::DisplayStringSupport == 2) goto LAB_14175ca35;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x2b7,L"Unknown EDisplayStringSupport!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  (**(code **)(this->_padding_ + 0x30))(this,local_res10);
  if (local_res10[0] != (int *)0x0) {
    piVar5 = local_res10[0];
    if ((local_res10[0] == (int *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                           ,0x9d,L""), piVar5 = local_res10[0], bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (*(void **)(piVar5 + 2) != (void *)0x0) {
          FMemory::Free(*(void **)(piVar5 + 2));
        }
        ::operator_delete(piVar5,0x18);
      }
    }
    return (FString *)(piVar5 + 2);
  }
LAB_14175ca35:
                    /* WARNING: Could not recover jumptable at 0x00014175ca45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x20))(this);
  return pFVar4;
}

// GetLocalizedString @ 14175f730

TDisplayStringPtr<FString_const_> __thiscall
FTextHistory_StringTableEntry::GetLocalizedString(FTextHistory_StringTableEntry *this)

{
  int iVar1;
  FStringTableReferenceData *this_00;
  TDisplayStringPtr<FString_const_> TVar2;
  TDisplayStringPtr<FString_const_> in_RDX;
  int *local_res8;
  
  this_00 = (this->StringTableReferenceData).Object;
  if (this_00 == (FStringTableReferenceData *)0x0) {
    *(undefined8 *)in_RDX = 0;
  }
  else {
    TVar2 = FStringTableReferenceData::ResolveDisplayString(this_00,true);
    *(undefined8 *)in_RDX = 0;
    *(undefined8 *)in_RDX = *(undefined8 *)TVar2;
    *(undefined8 *)TVar2 = 0;
    if (local_res8 != (int *)0x0) {
      LOCK();
      iVar1 = *local_res8;
      *local_res8 = *local_res8 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (*(void **)(local_res8 + 2) != (void *)0x0) {
          FMemory::Free(*(void **)(local_res8 + 2));
        }
        ::operator_delete(local_res8,0x18);
        return in_RDX;
      }
    }
  }
  return in_RDX;
}

// GetSourceString @ 141760f90

FString * __thiscall
FTextHistory_StringTableEntry::GetSourceString(FTextHistory_StringTableEntry *this)

{
  FStringTableReferenceData *this_00;
  FStringTableEntry *pFVar1;
  TSharedPtr<FStringTableEntry_const_,1> *pTVar2;
  FString *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FStringTableEntry_const_,1> local_18;
  
  this_00 = (this->StringTableReferenceData).Object;
  if (this_00 == (FStringTableReferenceData *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar2 = FStringTableReferenceData::ResolveStringTableEntry(this_00,&local_18);
    pFVar1 = pTVar2->Object;
    pTVar4 = (pTVar2->SharedReferenceCount).ReferenceController;
    (pTVar2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar2->Object = (FStringTableEntry *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pFVar1 != (FStringTableEntry *)0x0) {
      pFVar3 = &pFVar1->SourceString;
      goto LAB_14176100b;
    }
  }
  pFVar3 = &MissingSourceString;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&MissingSourceString,L"<MISSING STRING TABLE ENTRY>");
      atexit(`FStringTableEntry::GetPlaceholderSourceString'::__l2::
             _dynamic_atexit_destructor_for__MissingSourceString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
LAB_14176100b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return pFVar3;
}

// GetTableIdAndKey @ 141761380

void __thiscall
FTextHistory_StringTableEntry::GetTableIdAndKey
          (FTextHistory_StringTableEntry *this,FName *param_1,FTextKey *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FStringTableReferenceData *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->StringTableReferenceData).Object;
  if (pFVar1 == (FStringTableReferenceData *)0x0) {
    return;
  }
  lpCriticalSection = &pFVar1->DataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *param_1 = pFVar1->TableId;
  param_2->Index = (pFVar1->Key).Index;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetTextId @ 141761790

FTextId __thiscall FTextHistory_StringTableEntry::GetTextId(FTextHistory_StringTableEntry *this)

{
  FStringTableReferenceData *this_00;
  code *pcVar1;
  bool bVar2;
  FTextId FVar3;
  FTextId in_RDX;
  TSharedPtr<FStringTableEntry_const_,1> local_18;
  
  this_00 = (this->StringTableReferenceData).Object;
  if (this_00 == (FStringTableReferenceData *)0x0) {
    *(undefined8 *)in_RDX = 0xffffffffffffffff;
    return in_RDX;
  }
  FStringTableReferenceData::ResolveStringTableEntry(this_00,&local_18);
  if (local_18.Object != (FStringTableEntry *)0x0) {
    if (local_18.Object == (FStringTableEntry *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FTextId)(*pcVar1)();
        return FVar3;
      }
    }
    *(FTextId *)in_RDX = (local_18.Object)->DisplayStringId;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return in_RDX;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(undefined8 *)in_RDX = 0xffffffffffffffff;
  return in_RDX;
}

// GetType @ 141761c20

ETextHistoryType __thiscall
FTextHistory_StringTableEntry::GetType(FTextHistory_StringTableEntry *this)

{
  return StringTableEntry;
}

// IdenticalTo @ 1417636c0

bool __thiscall
FTextHistory_StringTableEntry::IdenticalTo
          (FTextHistory_StringTableEntry *this,FTextHistory *param_1,ETextIdenticalModeFlags param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FStringTableReferenceData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if ((this->StringTableReferenceData).Object == (FStringTableReferenceData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->StringTableReferenceData).Object;
  if (param_1[1]._padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar2 = param_1[1]._padding_;
  lpCriticalSection = &pFVar1->DataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar2 + 0x38);
  if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  EnterCriticalSection(lpCriticalSection_00);
  if ((pFVar1->TableId == *(FName *)(lVar2 + 0x10)) &&
     ((pFVar1->Key).Index == *(int *)(lVar2 + 0x18))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection_00);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar4;
}

// ReadFromBuffer @ 1417708c0

wchar_t * __thiscall
FTextHistory_StringTableEntry::ReadFromBuffer
          (FTextHistory_StringTableEntry *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  TSharedPtr<FTextHistory_StringTableEntry::FStringTableReferenceData,1> *this_00;
  wchar_t wVar2;
  int iVar3;
  wchar_t *pwVar4;
  TSharedRef<FTextHistory_StringTableEntry::FStringTableReferenceData,1> *pTVar5;
  FStringTableReferenceData *this_01;
  FTextKeyState *this_02;
  size_t sVar6;
  ulong64 uVar7;
  int iVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FTextKey local_78 [2];
  FName local_70;
  FString local_68;
  FString local_58;
  TSharedPtr<FTextHistory_StringTableEntry::FStringTableReferenceData,1> local_48;
  undefined1 local_38 [16];
  
  iVar3 = wcsncmp(param_1,*TextStringificationUtil::LocTableMarker,8);
  if (iVar3 == 0) {
    pwVar9 = param_1 + 8;
    wVar2 = param_1[8];
    while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
      pwVar4 = pwVar9 + 1;
      pwVar9 = pwVar9 + 1;
      wVar2 = *pwVar4;
    }
    if (*pwVar9 == L'(') {
      pwVar4 = pwVar9 + 1;
      if (pwVar9 == (wchar_t *)0x0) {
        pwVar4 = (wchar_t *)0x0;
      }
      if (pwVar4 != (wchar_t *)0x0) {
        wVar2 = *pwVar4;
        pwVar9 = (wchar_t *)0x0;
        iVar3 = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
          pwVar1 = pwVar4 + 1;
          pwVar4 = pwVar4 + 1;
          wVar2 = *pwVar1;
        }
        pwVar4 = TextStringificationUtil::ReadQuotedStringFromBuffer(pwVar4,&local_58);
        if (pwVar4 != (wchar_t *)0x0) {
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_58.Data.ArrayNum != 0) {
            FVar10.Data = local_58.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_70,(wchar_t *)FVar10.Data);
          pwVar4 = TextStringificationUtil::SkipWhitespaceAndCharacter(pwVar4,L',');
          if (pwVar4 != (wchar_t *)0x0) {
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_68.Data.ArrayNum = 0;
            local_68.Data.ArrayMax = 0;
            wVar2 = *pwVar4;
            while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
              pwVar1 = pwVar4 + 1;
              pwVar4 = pwVar4 + 1;
              wVar2 = *pwVar1;
            }
            pwVar4 = TextStringificationUtil::ReadQuotedStringFromBuffer(pwVar4,&local_68);
            if ((pwVar4 != (wchar_t *)0x0) &&
               (pwVar4 = TextStringificationUtil::SkipWhitespaceAndCharacter(pwVar4,L')'),
               pwVar4 != (wchar_t *)0x0)) {
              pTVar5 = MakeShared<FTextHistory_StringTableEntry::FStringTableReferenceData,1>
                                 ((TSharedRef<FTextHistory_StringTableEntry::FStringTableReferenceData,1>
                                   *)local_38);
              local_48.SharedReferenceCount.ReferenceController =
                   (pTVar5->SharedReferenceCount).ReferenceController;
              local_48.Object = pTVar5->Object;
              if (local_48.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              this_00 = &this->StringTableReferenceData;
              if (this_00 != &local_48) {
                this_00->Object = local_48.Object;
                local_48.Object = (FStringTableReferenceData *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          (&(this->StringTableReferenceData).SharedReferenceCount,
                           &local_48.SharedReferenceCount);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_48.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_38._8_8_);
              this_01 = TSharedPtr<FTextHistory_StringTableEntry::FStringTableReferenceData,1>::
                        operator->(this_00);
              FVar10.Data = local_68.Data.AllocatorInstance.Data;
              local_38._0_8_ = local_68.Data.AllocatorInstance.Data;
              iVar8 = local_68.Data.ArrayNum + -1;
              if (local_68.Data.ArrayNum == 0) {
                iVar8 = 0;
              }
              local_78[0].Index = -1;
              local_38._8_4_ = iVar8;
              if (iVar8 != 0) {
                this_02 = FTextKeyState::GetState();
                if (FVar10.Data == (FScriptContainerElement *)0x0) {
                  FVar10.Data = (FScriptContainerElement *)0x0;
                }
                else {
                  iVar3 = iVar8;
                  if ((0 < iVar8) && (*(short *)(FVar10.Data + (longlong)iVar8 * 2 + -2) == 0)) {
                    iVar3 = iVar8 + -1;
                  }
                  if (iVar3 == -1) {
                    sVar6 = wcslen((wchar_t *)FVar10.Data);
                    iVar3 = (int)sVar6;
                  }
                }
                uVar7 = CityHash64((char *)FVar10.Data,iVar3 * 2);
                FTextKeyState::FindOrAddImpl
                          (this_02,(TStringView<wchar_t> *)local_38,
                           (int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,local_78);
              }
              this_01->TableId = local_70;
              (this_01->Key).Index = local_78[0].Index;
              FStringTableRedirects::RedirectTableIdAndKey(&this_01->TableId,&this_01->Key);
              this_01->LoadingPhase = PendingLoad;
              FStringTableReferenceData::ConditionalBeginAssetLoad(this_01);
              FTextHistory::MarkDisplayStringUpToDate((FTextHistory *)this);
              pwVar9 = pwVar4;
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        return pwVar9;
      }
    }
  }
  return (wchar_t *)0x0;
}

// Serialize @ 14177b6c0

void __thiscall
FTextHistory_StringTableEntry::Serialize
          (FTextHistory_StringTableEntry *this,FStructuredArchiveRecord param_1)

{
  int *piVar1;
  TSharedPtr<FTextHistory_StringTableEntry::FStringTableReferenceData,1> *pTVar2;
  FWindowsRecursiveMutex *pFVar3;
  atomic<int> *paVar4;
  int iVar5;
  atomic<int> aVar6;
  longlong *plVar7;
  FName FVar8;
  code *pcVar9;
  bool bVar10;
  FArchive *pFVar11;
  FArchive *pFVar12;
  longlong lVar13;
  TReferenceControllerBase<1> *pTVar14;
  FStringTableReferenceData *pFVar15;
  EStringTableLoadingPolicy EVar16;
  FTextKey local_res8 [2];
  FSlotBase local_res10;
  FTextKey local_res18 [2];
  FName local_res20;
  FName local_88;
  FSlotBase local_80;
  FSlotBase local_78;
  FSlotBase local_70;
  FStringTableReferenceData *local_68;
  FSharedReferencer<1> local_60;
  undefined8 local_58 [3];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar11 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  EVar16 = Find;
  if ((pFVar11->field_0x28 & 1) == 0) {
    if ((pFVar11->field_0x28 & 4) != 0) {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
      local_res8[0].Index = -1;
      if ((this->StringTableReferenceData).Object != (FStringTableReferenceData *)0x0) {
        pFVar15 = TSharedPtr<FTextHistory_StringTableEntry::FStringTableReferenceData,1>::operator->
                            (&this->StringTableReferenceData);
        pFVar3 = &pFVar15->DataCS;
        if ((pFVar3 == (FWindowsRecursiveMutex *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
        local_res20 = pFVar15->TableId;
        local_res8[0].Index = (pFVar15->Key).Index;
        if (pFVar3 != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
        }
      }
      pFVar11 = (local_res10.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar11 + 0x178))(pFVar11,&local_res20);
      local_78.StructuredArchive = local_res10.StructuredArchive;
      UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_78);
      pFVar11 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_78);
      FTextKey::SerializeAsString(local_res8,pFVar11);
    }
    goto LAB_14177b9c8;
  }
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  local_res18[0].Index = -1;
  pFVar12 = (local_res10.StructuredArchive)->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar12 + 0x178))(pFVar12,&local_88);
  local_80.StructuredArchive = local_res10.StructuredArchive;
  UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_80);
  pFVar12 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_80);
  FTextKey::SerializeAsString(local_res18,pFVar12);
  if ((GEventDrivenLoaderEnabled == false) ||
     (lVar13 = (**(code **)(*(longlong *)pFVar11 + 0x20))(pFVar11), lVar13 == 0)) {
    EVar16 = FindOrLoad;
  }
  pTVar14 = ::operator_new(0x70);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = (FStringTableReferenceData *)&DAT_00000010;
LAB_14177b801:
    if (((pFVar15->_padding_ == 0) || (pFVar15->_padding_ == 0)) ||
       (*(int *)(pFVar15->_padding_ + 8) < 1)) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar15->_padding_ = (longlong)pFVar15;
      if (pTVar14 != (TReferenceControllerBase<1> *)pFVar15->_padding_) {
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar7 = (longlong *)pFVar15->_padding_;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
        pFVar15->_padding_ = (longlong)pTVar14;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStringTableReferenceData_FTextHistory_StringTableEntry___00_SharedPointerInternals__6B_
    ;
    pTVar14[1]._padding_ = 0;
    pTVar14[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[2]._padding_ = 0;
    pTVar14[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[3]._padding_ = 0;
    pTVar14[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[4]._padding_ = 0;
    pTVar14[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[5]._padding_ = 0;
    pTVar14[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[6]._padding_ = 0;
    pTVar14[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[2].SharedReferenceCount = (atomic<int>)0xffffffff;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar14[4].SharedReferenceCount,4000)
    ;
    pFVar15 = (FStringTableReferenceData *)(pTVar14 + 1);
    if (pFVar15 != (FStringTableReferenceData *)0x0) goto LAB_14177b801;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->StringTableReferenceData;
  local_68 = pFVar15;
  local_60.ReferenceController = pTVar14;
  if (pTVar2 != (TSharedPtr<FTextHistory_StringTableEntry::FStringTableReferenceData,1> *)&local_68)
  {
    pTVar2->Object = pFVar15;
    local_68 = (FStringTableReferenceData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StringTableReferenceData).SharedReferenceCount,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  if ((pTVar2->Object == (FStringTableReferenceData *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FStringTableReferenceData::Initialize(pTVar2->Object,local_88,local_res18,EVar16);
  FTextHistory::MarkDisplayStringUpToDate((FTextHistory *)this);
LAB_14177b9c8:
  pFVar15 = (this->StringTableReferenceData).Object;
  if (pFVar15 != (FStringTableReferenceData *)0x0) {
    local_70.StructuredArchive = local_res10.StructuredArchive;
    pFVar11 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_70);
    if ((pFVar11->field_0x2b & 1) != 0) {
      pFVar3 = &pFVar15->DataCS;
      if ((pFVar3 == (FWindowsRecursiveMutex *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      FVar8 = pFVar15->TableId;
      if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
        (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 0x28))
                  (IStringTableEngineBridge::InstancePtr,&pFVar15->TableId,
                   local_70.StructuredArchive);
      }
      if (pFVar15->TableId != FVar8) {
        if (&pFVar15->StringTableEntry != (TWeakPtr<FStringTableEntry_const_,1> *)local_58) {
          pTVar14 = (pFVar15->StringTableEntry).WeakReferenceCount.ReferenceController;
          (pFVar15->StringTableEntry).Object = (FStringTableEntry *)0x0;
          (pFVar15->StringTableEntry).WeakReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar4 = &pTVar14->WeakReferenceCount;
            aVar6 = *paVar4;
            *paVar4 = (atomic<int>)((int)*paVar4 + -1);
            UNLOCK();
            if (aVar6 == (atomic<int>)0x1) {
              (**(code **)(pTVar14->_padding_ + 8))(pTVar14,1);
            }
          }
        }
        UE::Text::Private::TDisplayStringPtr<FString_const_>::Reset(&pFVar15->DisplayString);
      }
      if (pFVar3 != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
      }
    }
    if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
      (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 0x30))
                (IStringTableEngineBridge::InstancePtr,pFVar15->TableId,(pFVar15->Key).Index,pFVar11
                );
    }
  }
  return;
}

// ShouldReadFromBuffer @ 14177e170

bool __thiscall
FTextHistory_StringTableEntry::ShouldReadFromBuffer
          (FTextHistory_StringTableEntry *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocTableMarker,8);
  return iVar1 == 0;
}

// StaticShouldReadFromBuffer @ 14177ebe0

bool __cdecl FTextHistory_StringTableEntry::StaticShouldReadFromBuffer(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocTableMarker,8);
  return iVar1 == 0;
}

// UpdateDisplayString @ 1417822c0

void __thiscall
FTextHistory_StringTableEntry::UpdateDisplayString(FTextHistory_StringTableEntry *this)

{
  int iVar1;
  FStringTableReferenceData *this_00;
  int *local_res8;
  
  this_00 = (this->StringTableReferenceData).Object;
  if ((this_00 != (FStringTableReferenceData *)0x0) &&
     (FStringTableReferenceData::ResolveDisplayString(this_00,true), local_res8 != (int *)0x0)) {
    LOCK();
    iVar1 = *local_res8;
    *local_res8 = *local_res8 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)(local_res8 + 2) != (void *)0x0) {
        FMemory::Free(*(void **)(local_res8 + 2));
      }
      ::operator_delete(local_res8,0x18);
      return;
    }
  }
  return;
}

// WriteToBuffer @ 1417855a0

bool __thiscall
FTextHistory_StringTableEntry::WriteToBuffer
          (FTextHistory_StringTableEntry *this,FString *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FStringTableReferenceData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  undefined1 uVar5;
  FTextKeyState *SRWLock;
  FKeyData *pFVar6;
  FString *this_00;
  longlong lVar7;
  int iVar8;
  int iVar9;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = (this->StringTableReferenceData).Object;
  if (pFVar1 == (FStringTableReferenceData *)0x0) {
    return false;
  }
  lpCriticalSection = &pFVar1->DataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8 = pFVar1->TableId;
  iVar9 = (pFVar1->Key).Index;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (iVar9 != -1) {
    SRWLock = FTextKeyState::GetState();
    if (SRWLock == (FTextKeyState *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pFVar6 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                       (&(SRWLock->KeyDataAllocations).Elements,iVar9);
    iVar9 = pFVar6->StrLen;
    if (iVar9 < 0) {
      if (iVar9 != -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsGuid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                           ,0x157,L"AsGuid called on a FKeyData that doesn\'t reference a GUID!");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      FGuid::AppendString(pFVar6->DataPtr,&local_28,Digits);
    }
    else {
      ::FString::AppendChars(&local_28,pFVar6->DataPtr,iVar9);
    }
    if (SRWLock != (FTextKeyState *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  ::FString::AppendChars(param_1,L"LOCTABLE(\"",10);
  this_00 = ::FName::ToString(&local_res8,&local_18);
  ::FString::ReplaceCharWithEscapedCharInline
            (this_00,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
  pFVar2 = (this_00->Data).AllocatorInstance.Data;
  (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = (this_00->Data).ArrayNum;
  (this_00->Data).ArrayNum = 0;
  (this_00->Data).ArrayMax = 0;
  iVar8 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)pFVar2,iVar8);
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(param_1,L"\", \"",4);
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  lVar7 = (longlong)local_28.Data.ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_28.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,lVar7 * 2);
  }
  ::FString::ReplaceCharWithEscapedCharInline
            (&local_38,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
  iVar9 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar9);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(param_1,L"\")",2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

