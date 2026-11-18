// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 7

// ~FWmfMediaOverlaySample @ 14ea97640

void __thiscall FWmfMediaOverlaySample::~FWmfMediaOverlaySample(FWmfMediaOverlaySample *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7FWmfMediaOverlaySample__6B_;
  pIVar1 = (this->Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IMediaOverlaySample__6B_;
  return;
}

// GetDuration @ 14eaad020

FTimespan __thiscall FWmfMediaOverlaySample::GetDuration(FWmfMediaOverlaySample *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Duration).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetPosition @ 14eaaec40

TOptional<UE::Math::TVector2<double>_> * __thiscall
FWmfMediaOverlaySample::GetPosition
          (FWmfMediaOverlaySample *this,
          TOptional<UE::Math::TVector2<double>_> *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetText @ 14eab0620

FText * __thiscall
FWmfMediaOverlaySample::GetText(FWmfMediaOverlaySample *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *local_res10 [3];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->Text).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    local_res10[0] = __return_storage_ptr__;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = (this->Text).Flags;
  return __return_storage_ptr__;
}

// GetTime @ 14eab06c0

FMediaTimeStamp * __thiscall
FWmfMediaOverlaySample::GetTime
          (FWmfMediaOverlaySample *this,FMediaTimeStamp *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->Time).SequenceIndex;
  iVar2 = (this->Time).LoopIndex;
  (__return_storage_ptr__->Time).Ticks = (this->Time).Time.Ticks;
  __return_storage_ptr__->SequenceIndex = iVar1;
  __return_storage_ptr__->LoopIndex = iVar2;
  return __return_storage_ptr__;
}

// GetType @ 14eab12c0

EMediaOverlaySampleType __thiscall FWmfMediaOverlaySample::GetType(FWmfMediaOverlaySample *this)

{
  return Caption;
}

// Initialize @ 14eab3220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FWmfMediaOverlaySample::Initialize
          (FWmfMediaOverlaySample *this,char *param_1,FMediaTimeStamp *param_2,FTimespan param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  FString *pFVar5;
  FText *pFVar6;
  FTimespan FVar7;
  undefined1 auStack_1d8 [32];
  FText local_1b8;
  FString local_1a8;
  FString local_198;
  FRegexMatcher local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if (param_1 == (char *)0x0) {
    bVar1 = false;
  }
  else {
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_bool___cdecl_FWmfMediaOverlaySample::Initialize(char_const*___ptr64,FMediaTimeStamp,FTimespan)___ptr64'
        ::__l6::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_bool___cdecl_FWmfMediaOverlaySample::Initialize(char_const*___ptr64,FMediaTimeStamp,FTimespan)___ptr64'
                           ::__l6::_thread_safe_static_guard_0__);
      if (`public:_bool___cdecl_FWmfMediaOverlaySample::Initialize(char_const*___ptr64,FMediaTimeStamp,FTimespan)___ptr64'
          ::__l6::_thread_safe_static_guard_0__ == -1) {
        ::FString::FString((FString *)&local_1b8,
                           L"<(?:[^>=]|=\'[^\']*\'|=\"[^\"]*\"|=[^\'\"][^\\s>]*)*>");
        FRegexPattern::FRegexPattern
                  (&`public:_bool___cdecl_FWmfMediaOverlaySample::Initialize(char_const*___ptr64,FMediaTimeStamp,FTimespan)___ptr64'
                    ::__l6::StripHtmlPattern,(FString *)&local_1b8,None);
        if (local_1b8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_1b8.TextData.Reference);
        }
        atexit(`FWmfMediaOverlaySample::Initialize'::__l6::
               _dynamic_atexit_destructor_for__StripHtmlPattern__);
        _Init_thread_footer(&`public:_bool___cdecl_FWmfMediaOverlaySample::Initialize(char_const*___ptr64,FMediaTimeStamp,FTimespan)___ptr64'
                             ::__l6::_thread_safe_static_guard_0__);
      }
    }
    local_158._padding_ = 0;
    sVar4 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,param_1,(int)sVar4,Yes);
    ::FString::FString(&local_198,local_158.Ptr);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    FRegexMatcher::FRegexMatcher
              (&local_180,
               &`public:_bool___cdecl_FWmfMediaOverlaySample::Initialize(char_const*___ptr64,FMediaTimeStamp,FTimespan)___ptr64'
                ::__l6::StripHtmlPattern,&local_198);
    iVar3 = -1;
    bVar1 = FRegexMatcher::FindNext(&local_180);
    if (bVar1) {
      do {
        if (iVar3 != -1) {
          iVar2 = FRegexMatcher::GetMatchBeginning(&local_180);
          pFVar5 = ::FString::Mid(&local_198,(FString *)&local_1b8,iVar3,iVar2 - iVar3);
          iVar2 = (pFVar5->Data).ArrayNum;
          iVar3 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar3 = 0;
          }
          ::FString::AppendChars(&local_1a8,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar3);
          if (local_1b8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_1b8.TextData.Reference);
          }
        }
        iVar3 = FRegexMatcher::GetMatchEnding(&local_180);
        bVar1 = FRegexMatcher::FindNext(&local_180);
      } while (bVar1);
      if (-1 < iVar3) {
        ::FString::RightChop(&local_198,(FString *)&local_1b8,iVar3);
        iVar3 = local_1b8.Flags - 1;
        if (local_1b8.Flags == 0) {
          iVar3 = 0;
        }
        ::FString::AppendChars(&local_1a8,(wchar_t *)local_1b8.TextData.Reference,iVar3);
        if (local_1b8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_1b8.TextData.Reference);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.Pattern.Implementation.SharedReferenceCount.ReferenceController);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    FVar7.Ticks = 0x7fffffffffffffff;
    if (-1 < param_3.Ticks) {
      FVar7.Ticks = param_3.Ticks;
    }
    (this->Duration).Ticks = FVar7.Ticks;
    pFVar6 = FText::FromString(&local_1b8,&local_1a8);
    FText::operator=(&this->Text,pFVar6);
    if (local_1b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
    }
    iVar3 = param_2->SequenceIndex;
    iVar2 = param_2->LoopIndex;
    (this->Time).Time.Ticks = (param_2->Time).Ticks;
    (this->Time).SequenceIndex = iVar3;
    (this->Time).LoopIndex = iVar2;
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  return bVar1;
}

