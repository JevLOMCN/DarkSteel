// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 9

// FPortableObjectCulture @ 146b43310

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FPortableObjectCulture * __thiscall
FPortableObjectCulture::FPortableObjectCulture
          (FPortableObjectCulture *this,FString *param_1,FString *param_2)

{
  FInternationalization *this_00;
  
  ::FString::FString(&this->LanguageCode,param_1);
  ::FString::FString(&this->LanguagePluralForms,param_2);
  this_00 = FInternationalization::Get();
  FInternationalization::GetCulture(this_00,&this->Culture,param_1);
  return this;
}

// Country @ 146b53620

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FPortableObjectCulture::Country(FPortableObjectCulture *this,FString *__return_storage_ptr__)

{
  FCulture *this_00;
  FString *pFVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = (this->Culture).Object;
  if (this_00 != (FCulture *)0x0) {
    pFVar1 = FCulture::GetRegion(this_00);
    ::FString::operator=(__return_storage_ptr__,pFVar1);
  }
  return __return_storage_ptr__;
}

// DisplayName @ 146b56fb0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FPortableObjectCulture::DisplayName(FPortableObjectCulture *this,FString *__return_storage_ptr__)

{
  FCulture *this_00;
  FString *pFVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = (this->Culture).Object;
  if (this_00 != (FCulture *)0x0) {
    pFVar1 = FCulture::GetDisplayName(this_00);
    ::FString::operator=(__return_storage_ptr__,pFVar1);
  }
  return __return_storage_ptr__;
}

// EnglishName @ 146b577d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FPortableObjectCulture::EnglishName(FPortableObjectCulture *this,FString *__return_storage_ptr__)

{
  FCulture *this_00;
  FString *pFVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = (this->Culture).Object;
  if (this_00 != (FCulture *)0x0) {
    pFVar1 = FCulture::GetEnglishName(this_00);
    ::FString::operator=(__return_storage_ptr__,pFVar1);
  }
  return __return_storage_ptr__;
}

// GetDefaultPluralForms @ 146b72ae0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FPortableObjectCulture::GetDefaultPluralForms
          (FPortableObjectCulture *this,FString *__return_storage_ptr__)

{
  FCulture *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FPOCulturePluralForm *pFVar7;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (1 < (this->LanguageCode).Data.ArrayNum) {
    pwVar4 = GetPluralForm((wchar_t *)(this->LanguageCode).Data.AllocatorInstance.Data);
    if (pwVar4 != (wchar_t *)0x0) {
      ::FString::operator=(__return_storage_ptr__,pwVar4);
      return __return_storage_ptr__;
    }
    pFVar1 = (this->Culture).Object;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    if ((pFVar1 != (FCulture *)0x0) && (pFVar5 = FCulture::GetVariant(pFVar1), &local_98 != pFVar5))
    {
      iVar3 = (pFVar5->Data).ArrayNum;
      pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
      local_98.Data.ArrayNum = iVar3;
      if (((iVar3 != 0) || (local_98.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,local_98.Data.ArrayMax,(ForAnyElementType *)&local_98,iVar3,
                     &local_98.Data.ArrayMax), iVar3 != 0)) {
        memcpy(local_98.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar3 * 2);
      }
    }
    pFVar1 = (this->Culture).Object;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    if ((pFVar1 != (FCulture *)0x0) && (pFVar5 = FCulture::GetRegion(pFVar1), &local_a8 != pFVar5))
    {
      iVar3 = (pFVar5->Data).ArrayNum;
      pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
      local_a8.Data.ArrayNum = iVar3;
      if (((iVar3 != 0) || (local_a8.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,local_a8.Data.ArrayMax,(ForAnyElementType *)&local_a8,iVar3,
                     &local_a8.Data.ArrayMax), iVar3 != 0)) {
        memcpy(local_a8.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar3 * 2);
      }
    }
    pFVar1 = (this->Culture).Object;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    if ((pFVar1 != (FCulture *)0x0) &&
       (pFVar5 = FCulture::GetTwoLetterISOLanguageName(pFVar1), &local_b8 != pFVar5)) {
      iVar3 = (pFVar5->Data).ArrayNum;
      pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
      local_b8.Data.ArrayNum = iVar3;
      if (((iVar3 != 0) || (local_b8.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,local_b8.Data.ArrayMax,(ForAnyElementType *)&local_b8,iVar3,
                     &local_b8.Data.ArrayMax), iVar3 != 0)) {
        memcpy(local_b8.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar3 * 2);
      }
    }
    ::FString::ConcatFC(&local_58,&local_b8,L"_");
    ::FString::ConcatFF(&local_38,&local_58,&local_a8);
    ::FString::ConcatFC(&local_48,&local_38,L"@");
    ::FString::ConcatFF(&local_68,&local_48,&local_98);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    pwVar4 = GetPluralForm((wchar_t *)FVar6.Data);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (pwVar4 == (wchar_t *)0x0) {
      pFVar1 = (this->Culture).Object;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      if ((pFVar1 != (FCulture *)0x0) && (pFVar5 = FCulture::GetRegion(pFVar1), &local_78 != pFVar5)
         ) {
        iVar3 = (pFVar5->Data).ArrayNum;
        pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
        local_78.Data.ArrayNum = iVar3;
        if (((iVar3 != 0) || (local_78.Data.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar3,local_78.Data.ArrayMax,(ForAnyElementType *)&local_78,iVar3,
                       &local_78.Data.ArrayMax), iVar3 != 0)) {
          memcpy(local_78.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar3 * 2);
        }
      }
      pFVar1 = (this->Culture).Object;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      if ((pFVar1 != (FCulture *)0x0) &&
         (pFVar5 = FCulture::GetTwoLetterISOLanguageName(pFVar1), &local_88 != pFVar5)) {
        iVar3 = (pFVar5->Data).ArrayNum;
        pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
        local_88.Data.ArrayNum = iVar3;
        if (((iVar3 != 0) || (local_88.Data.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar3,local_88.Data.ArrayMax,(ForAnyElementType *)&local_88,iVar3,
                       &local_88.Data.ArrayMax), iVar3 != 0)) {
          memcpy(local_88.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar3 * 2);
        }
      }
      ::FString::ConcatFC(&local_58,&local_88,L"_");
      ::FString::ConcatFF(&local_68,&local_58,&local_78);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar6.Data = local_68.Data.AllocatorInstance.Data;
      }
      pwVar4 = GetPluralForm((wchar_t *)FVar6.Data);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (pwVar4 == (wchar_t *)0x0) {
        pFVar1 = (this->Culture).Object;
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
        FVar6.Data = (FScriptContainerElement *)L"";
        if (pFVar1 != (FCulture *)0x0) {
          pFVar5 = FCulture::GetTwoLetterISOLanguageName(pFVar1);
          if (&local_c8 != pFVar5) {
            iVar3 = (pFVar5->Data).ArrayNum;
            pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
            local_c8.Data.ArrayNum = iVar3;
            if (((iVar3 != 0) || (local_c8.Data.ArrayMax != 0)) &&
               (UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar3,local_c8.Data.ArrayMax,(ForAnyElementType *)&local_c8,iVar3,
                           &local_c8.Data.ArrayMax), iVar3 != 0)) {
              memcpy(local_c8.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar3 * 2);
            }
          }
          if (local_c8.Data.ArrayNum != 0) {
            FVar6.Data = local_c8.Data.AllocatorInstance.Data;
          }
        }
        pwVar4 = GetPluralForm((wchar_t *)FVar6.Data);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (pwVar4 == (wchar_t *)0x0) {
          pFVar7 = POCulturePluralForms;
          do {
            iVar3 = FGenericPlatformStricmp::Stricmp(pFVar7->CultureName,L"en");
            if (iVar3 == 0) {
              pwVar4 = pFVar7->PluralForm;
              if (pwVar4 != (wchar_t *)0x0) goto LAB_146b72fae;
              break;
            }
            pFVar7 = pFVar7 + 1;
          } while (pFVar7 != (FPOCulturePluralForm *)L"ach");
          pwVar4 = L"nplurals=2; plural=(n != 1);";
        }
      }
    }
LAB_146b72fae:
    ::FString::operator=(__return_storage_ptr__,pwVar4);
  }
  return __return_storage_ptr__;
}

// GetPluralForms @ 146b763f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FPortableObjectCulture::GetPluralForms(FPortableObjectCulture *this,FString *__return_storage_ptr__)

{
  if (1 < (this->LanguagePluralForms).Data.ArrayNum) {
    ::FString::FString(__return_storage_ptr__,&this->LanguagePluralForms);
    return __return_storage_ptr__;
  }
  GetDefaultPluralForms(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Language @ 146b7d3a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FPortableObjectCulture::Language(FPortableObjectCulture *this,FString *__return_storage_ptr__)

{
  FCulture *this_00;
  FString *pFVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = (this->Culture).Object;
  if (this_00 != (FCulture *)0x0) {
    pFVar1 = FCulture::GetTwoLetterISOLanguageName(this_00);
    ::FString::operator=(__return_storage_ptr__,pFVar1);
  }
  return __return_storage_ptr__;
}

// SetLanguageCode @ 146b88940

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FPortableObjectCulture::SetLanguageCode(FPortableObjectCulture *this,FString *param_1)

{
  FInternationalization *this_00;
  TSharedPtr<FCulture,1> *pTVar1;
  TSharedPtr<FCulture,1> local_18;
  
  ::FString::operator=(&this->LanguageCode,param_1);
  this_00 = FInternationalization::Get();
  pTVar1 = FInternationalization::GetCulture(this_00,&local_18,param_1);
  if (&this->Culture != pTVar1) {
    (this->Culture).Object = pTVar1->Object;
    pTVar1->Object = (FCulture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Culture).SharedReferenceCount,&pTVar1->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// Variant @ 146b91ca0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FPortableObjectCulture::Variant(FPortableObjectCulture *this,FString *__return_storage_ptr__)

{
  FCulture *this_00;
  FString *pFVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = (this->Culture).Object;
  if (this_00 != (FCulture *)0x0) {
    pFVar1 = FCulture::GetVariant(this_00);
    ::FString::operator=(__return_storage_ptr__,pFVar1);
  }
  return __return_storage_ptr__;
}

