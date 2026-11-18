// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// FKeysCulture @ 1416d5960

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FKeysCulture * __thiscall
FKeysCulture::FKeysCulture(FKeysCulture *this,TSharedRef<FCulture,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FKeysCulture__6B_;
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

// GetBaseCulture @ 1416f26b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<FCulture,1> * __thiscall
FKeysCulture::GetBaseCulture(FKeysCulture *this,TSharedRef<FCulture,1> *__return_storage_ptr__)

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

// GetDisplayName @ 1416f7fc0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FKeysCulture::GetDisplayName(FKeysCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetEnglishName @ 1416f8260

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FKeysCulture::GetEnglishName(FKeysCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetName @ 1416f8c60

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FKeysCulture::GetName(FKeysCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetNativeLanguage @ 1416f9050

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FKeysCulture::GetNativeLanguage(FKeysCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetNativeName @ 1416f9250

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FKeysCulture::GetNativeName(FKeysCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetNativeRegion @ 1416f9600

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FKeysCulture::GetNativeRegion(FKeysCulture *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetRegion @ 1416fb6c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FKeysCulture::GetRegion(FKeysCulture *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetScript @ 1416fb770

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FKeysCulture::GetScript(FKeysCulture *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetThreeLetterISOLanguageName @ 1416fbd50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FKeysCulture::GetThreeLetterISOLanguageName(FKeysCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetTwoLetterISOLanguageName @ 1416fc640

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FKeysCulture::GetTwoLetterISOLanguageName(FKeysCulture *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = StaticGetName();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetUnrealLegacyThreeLetterISOLanguageName @ 1416fc8d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FKeysCulture::GetUnrealLegacyThreeLetterISOLanguageName
          (FKeysCulture *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"INT");
  return __return_storage_ptr__;
}

// GetVariant @ 1416fc9e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FKeysCulture::GetVariant(FKeysCulture *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsRightToLeft @ 141702970

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall FKeysCulture::IsRightToLeft(FKeysCulture *this)

{
  return false;
}

// StaticGetName @ 141712b60

FString * __cdecl FKeysCulture::StaticGetName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&KeysCultureName,L"keys");
      atexit(`FKeysCulture::StaticGetName'::__l2::_dynamic_atexit_destructor_for__KeysCultureName__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &KeysCultureName;
    }
  }
  return &KeysCultureName;
}

