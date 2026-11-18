// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// FLeetCulture @ 1416d5990

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FLeetCulture * __thiscall
FLeetCulture::FLeetCulture(FLeetCulture *this,TSharedRef<FCulture,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FLeetCulture__6B_;
  (this->InvariantCulture).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->InvariantCulture).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// GetBaseCulture @ 1416f26e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<FCulture,1> * __thiscall
FLeetCulture::GetBaseCulture(FLeetCulture *this,TSharedRef<FCulture,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->InvariantCulture).Object;
  pTVar1 = (this->InvariantCulture).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDisplayName @ 1416f7ff0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FLeetCulture::GetDisplayName(FLeetCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetEnglishName @ 1416f8290

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FLeetCulture::GetEnglishName(FLeetCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetName @ 1416f8c90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FLeetCulture::GetName(FLeetCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetNativeLanguage @ 1416f9080

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FLeetCulture::GetNativeLanguage(FLeetCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetNativeName @ 1416f9280

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FLeetCulture::GetNativeName(FLeetCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetNativeRegion @ 1416f9620

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FLeetCulture::GetNativeRegion(FLeetCulture *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetRegion @ 1416fb6e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FLeetCulture::GetRegion(FLeetCulture *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetScript @ 1416fb790

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FLeetCulture::GetScript(FLeetCulture *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetThreeLetterISOLanguageName @ 1416fbd80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FLeetCulture::GetThreeLetterISOLanguageName(FLeetCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetTwoLetterISOLanguageName @ 1416fc670

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FLeetCulture::GetTwoLetterISOLanguageName(FLeetCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetUnrealLegacyThreeLetterISOLanguageName @ 1416fc900

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FLeetCulture::GetUnrealLegacyThreeLetterISOLanguageName
          (FLeetCulture *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"INT");
  return __return_storage_ptr__;
}

// GetVariant @ 1416fca00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FLeetCulture::GetVariant(FLeetCulture *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsRightToLeft @ 141702980

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall FLeetCulture::IsRightToLeft(FLeetCulture *this)

{
  return false;
}

// StaticGetName @ 141712bf0

FString * __cdecl FLeetCulture::StaticGetName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&LeetCultureName,L"LEET");
      atexit(`FLeetCulture::StaticGetName'::__l2::_dynamic_atexit_destructor_for__LeetCultureName__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &LeetCultureName;
    }
  }
  return &LeetCultureName;
}

