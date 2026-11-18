// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b4dc410

UClass * __cdecl UDS_LanguageManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LanguageManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LanguageManager",
               &Z_Registration_Info_UClass_UDS_LanguageManager.InnerSingleton,
               StaticRegisterNativesUDS_LanguageManager,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LanguageManager>,
               InternalVTableHelperCtorCaller<UDS_LanguageManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LanguageManager.InnerSingleton;
}

// UDS_LanguageManager @ 14b4df890

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

UDS_LanguageManager * __thiscall
UDS_LanguageManager::UDS_LanguageManager(UDS_LanguageManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LanguageManager__6B_;
  *(undefined8 *)&this->OnLanguageChanged = 0;
  *(undefined8 *)&(this->OnLanguageChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnLanguageChanged).field_0x10 = 0;
  this->IsLanguageChanaged = false;
  this->CurrentLanguage = None;
  (this->BanWordPatterns).Object = (FRegexPattern *)0x0;
  (this->BanWordPatterns).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BanNamePatterns).Object = (FRegexPattern *)0x0;
  (this->BanNamePatterns).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->OnLanguageChanged).field_0x18 = 2;
  return this;
}

// UDS_LanguageManager @ 14b4df8f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

UDS_LanguageManager * __thiscall
UDS_LanguageManager::UDS_LanguageManager(UDS_LanguageManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LanguageManager__6B_;
  *(undefined8 *)&this->OnLanguageChanged = 0;
  *(undefined8 *)&(this->OnLanguageChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnLanguageChanged).field_0x10 = 0;
  this->IsLanguageChanaged = false;
  this->CurrentLanguage = None;
  (this->BanWordPatterns).Object = (FRegexPattern *)0x0;
  (this->BanWordPatterns).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BanNamePatterns).Object = (FRegexPattern *)0x0;
  (this->BanNamePatterns).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->OnLanguageChanged).field_0x18 = 2;
  return this;
}

// ~UDS_LanguageManager @ 14b4e01c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_LanguageManager::~UDS_LanguageManager(UDS_LanguageManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_LanguageManager__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BanNamePatterns).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BanWordPatterns).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLanguageChanged).field_0x8,*(int *)&(this->OnLanguageChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnLanguageChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLanguageChanged);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e1cd0

UClass * __cdecl UDS_LanguageManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LanguageManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LanguageManager",
               &Z_Registration_Info_UClass_UDS_LanguageManager.InnerSingleton,
               StaticRegisterNativesUDS_LanguageManager,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LanguageManager>,
               InternalVTableHelperCtorCaller<UDS_LanguageManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LanguageManager.InnerSingleton;
}

// StaticRegisterNativesUDS_LanguageManager @ 14b4e27e0

void __cdecl UDS_LanguageManager::StaticRegisterNativesUDS_LanguageManager(void)

{
  return;
}

// ApplyBanWord @ 14baf2010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UDS_LanguageManager::ApplyBanWord
          (UDS_LanguageManager *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  ForAnyElementType _Src_00;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  FRegexPattern *pFVar7;
  FString *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStackY_428 [32];
  ForAnyElementType local_3e8;
  undefined8 local_3e0;
  FString local_3d8;
  FRegexMatcher local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  if ((this->BanWordPatterns).Object == (FRegexPattern *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_LanguageManager::ApplyBanWord",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_3a8.Ptr,0x46,L"BanWordPatterns.IsValid() == false");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
        ::FString::FString(__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
    }
  }
  else {
    local_3d8.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar11 = (longlong)local_3d8.Data.ArrayNum;
    if (1 < local_3d8.Data.ArrayNum) {
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3d8.Data.ArrayNum,0,(ForAnyElementType *)&local_3d8,
                 local_3d8.Data.ArrayNum,&local_3d8.Data.ArrayMax);
      memcpy(local_3d8.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
      ::FString::ReplaceInline(&local_3d8,L"\x200b",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_3d8,L"\x200c",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_3d8,L"\x200d",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_3d8,L"",L"",IgnoreCase);
      _Src_00.Data = local_3d8.Data.AllocatorInstance.Data;
      lVar11 = (longlong)local_3d8.Data.ArrayNum;
      if (local_3d8.Data.ArrayNum < 2) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_LanguageManager::ApplyBanWord",0x21,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_288.Ptr,0x53,L"sanitizedMessage.IsEmpty() == true");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
        ::FString::FString(__return_storage_ptr__,param_1);
      }
      else {
        local_3e8.Data = (FScriptContainerElement *)0x0;
        local_3e0 = CONCAT44(local_3e0._4_4_,local_3d8.Data.ArrayNum);
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_3d8.Data.ArrayNum,0,&local_3e8,local_3d8.Data.ArrayNum,
                   (int *)((longlong)&local_3e0 + 4));
        memcpy(local_3e8.Data,_Src_00.Data,lVar11 * 2);
        pFVar7 = TSharedPtr<FRegexPattern,1>::operator*<FRegexPattern>(&this->BanWordPatterns);
        FRegexMatcher::FRegexMatcher(&local_3c8,pFVar7,&local_3d8);
        bVar2 = FRegexMatcher::FindNext(&local_3c8);
        if (bVar2) {
          do {
            iVar3 = FRegexMatcher::GetMatchBeginning(&local_3c8);
            uVar9 = (ulonglong)iVar3;
            iVar4 = FRegexMatcher::GetMatchEnding(&local_3c8);
            if (iVar4 - iVar3 < 1) {
              pUVar6 = UDS_LogManager::GetInst();
              if (pUVar6 != (UDS_LogManager *)0x0) {
                pUVar6 = UDS_LogManager::GetInst();
                local_168._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_168,"UDS_LanguageManager::ApplyBanWord",0x21,Yes);
                UDS_LogManager::PrintLog
                          (pUVar6,1,Warning,local_168.Ptr,99,
                           L"Zero-length regex match detected. Breaking to avoid infinite loop.");
                if ((void *)local_168._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_168._padding_);
                }
              }
              break;
            }
            uVar10 = uVar9;
            for (; (longlong)uVar9 < (longlong)iVar4; uVar9 = uVar9 + 1) {
              iVar3 = (int)uVar10;
              if (iVar3 < 0) {
code_r0x00014baf2329:
                bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  );
                if (bVar2) {
                  pcVar1 = (code *)swi(3);
                  pFVar8 = (FString *)(*pcVar1)();
                  return pFVar8;
                }
              }
              else {
                iVar5 = (int)local_3e0 + -1;
                if ((int)local_3e0 == 0) {
                  iVar5 = 0;
                }
                if (iVar5 <= iVar3) goto code_r0x00014baf2329;
              }
              uVar10 = (ulonglong)(iVar3 + 1);
              *(undefined2 *)(local_3e8.Data + uVar9 * 2) = 0x2a;
            }
            bVar2 = FRegexMatcher::FindNext(&local_3c8);
          } while (bVar2);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_3e8.Data;
        (__return_storage_ptr__->Data).ArrayNum = (int)local_3e0;
        (__return_storage_ptr__->Data).ArrayMax = local_3e0._4_4_;
        local_3e0 = 0;
        local_3e8.Data = (FScriptContainerElement *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3c8.Implementation.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3c8.Pattern.Implementation.SharedReferenceCount.ReferenceController);
        if (local_3e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data);
        }
      }
      if (local_3d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CheckBanName @ 14baf6b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_LanguageManager::CheckBanName(UDS_LanguageManager *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  UDS_LogManager *pUVar2;
  FRegexPattern *pFVar3;
  longlong lVar4;
  undefined1 auStackY_1a8 [32];
  FString local_168;
  FRegexMatcher local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((this->BanNamePatterns).Object == (FRegexPattern *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LanguageManager::CheckBanName",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x92,L"BanNamePatterns.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    local_168.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar4 = (longlong)local_168.Data.ArrayNum;
    if (local_168.Data.ArrayNum < 2) {
      bVar1 = true;
    }
    else {
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_168.Data.ArrayNum,0,(ForAnyElementType *)&local_168,
                 local_168.Data.ArrayNum,&local_168.Data.ArrayMax);
      memcpy(local_168.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
      ::FString::ReplaceInline(&local_168,L"\x200b",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_168,L"\x200c",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_168,L"\x200d",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_168,L"",L"",IgnoreCase);
      if (local_168.Data.ArrayNum < 2) {
        bVar1 = true;
      }
      else {
        pFVar3 = TSharedPtr<FRegexPattern,1>::operator*<FRegexPattern>(&this->BanNamePatterns);
        FRegexMatcher::FRegexMatcher(&local_158,pFVar3,&local_168);
        bVar1 = FRegexMatcher::FindNext(&local_158);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_158.Implementation.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_158.Pattern.Implementation.SharedReferenceCount.ReferenceController);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
  }
  return bVar1;
}

// CheckBanWord @ 14baf6da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_LanguageManager::CheckBanWord(UDS_LanguageManager *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  UDS_LogManager *pUVar2;
  FRegexPattern *pFVar3;
  longlong lVar4;
  undefined1 auStackY_1b8 [32];
  FString local_178;
  FRegexMatcher local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((this->BanWordPatterns).Object == (FRegexPattern *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_LanguageManager::CheckBanWord",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x74,L"BanWordPatterns.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
        return false;
      }
    }
  }
  else {
    local_178.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar4 = (longlong)local_178.Data.ArrayNum;
    if (1 < local_178.Data.ArrayNum) {
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_178.Data.ArrayNum,0,(ForAnyElementType *)&local_178,
                 local_178.Data.ArrayNum,&local_178.Data.ArrayMax);
      memcpy(local_178.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
      ::FString::ReplaceInline(&local_178,L"\x200b",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_178,L"\x200c",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_178,L"\x200d",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_178,L"",L"",IgnoreCase);
      if (local_178.Data.ArrayNum < 2) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_LanguageManager::CheckBanWord",0x21,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,local_148.Ptr,0x81,L"sanitizedMessage.IsEmpty() == true");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        bVar1 = false;
      }
      else {
        pFVar3 = TSharedPtr<FRegexPattern,1>::operator*<FRegexPattern>(&this->BanWordPatterns);
        FRegexMatcher::FRegexMatcher(&local_168,pFVar3,&local_178);
        bVar1 = FRegexMatcher::FindNext(&local_168);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.Implementation.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.Pattern.Implementation.SharedReferenceCount.ReferenceController);
      }
      if (local_178.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return bVar1;
      }
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
      return bVar1;
    }
  }
  return false;
}

// CheckLanguageChanged @ 14baf7640

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_LanguageManager::CheckLanguageChanged(UDS_LanguageManager *this)

{
  if (this->IsLanguageChanaged == true) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnLanguageChanged);
    this->IsLanguageChanaged = false;
  }
  return;
}

// Created @ 14bb01540

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_LanguageManager::Created(UDS_LanguageManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_LanguageManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrame,(UDS_LanguageManager *)&stack0x00000008,(pmf_8f8f944c)this)
  ;
  return;
}

// Destroyed @ 14bb02ea0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_LanguageManager::Destroyed(UDS_LanguageManager *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,this)
  ;
  return;
}

// GetCurrentLanguageCodeString @ 14bb09e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UDS_LanguageManager::GetCurrentLanguageCodeString
          (UDS_LanguageManager *this,FString *__return_storage_ptr__)

{
  UDS_LogManager *pUVar1;
  wchar_t *pwVar2;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  switch(this->CurrentLanguage) {
  default:
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LanguageManager::GetCurrentLanguageCodeString",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xd1,L"Invalid CurrentLanguage : %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  case Eng:
    pwVar2 = L"en";
    break;
  case Kor:
    pwVar2 = L"ko";
    break;
  case Cht:
  case Chs:
    pwVar2 = L"zh";
  }
  ::FString::FString(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// GetInst @ 14bb0bb00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

UDS_LanguageManager * __cdecl UDS_LanguageManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_LanguageManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_LanguageManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_LanguageManager_NoRegister();
  pUVar3 = (UDS_LanguageManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_LanguageManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_LanguageManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_LanguageManager *)0x0;
}

// GetLanguageTypeByGameOptionData @ 14bb0c130

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

EDS_LanguageType __thiscall
UDS_LanguageManager::GetLanguageTypeByGameOptionData
          (UDS_LanguageManager *this,UDS_GameOptionData *param_1)

{
  EDS_LanguageType EVar1;
  int iVar2;
  
  if (param_1 == (UDS_GameOptionData *)0x0) {
    return English;
  }
  iVar2 = UDS_GameOptionData::GetGameOptionValue(param_1,0);
  EVar1 = (EDS_LanguageType)iVar2;
  if (EVar1 == None) {
    EVar1 = English;
  }
  return EVar1;
}

// GetLanguageTypeByLanguage @ 14bb0c170

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

EDS_LanguageType __thiscall
UDS_LanguageManager::GetLanguageTypeByLanguage(UDS_LanguageManager *this,EDS_Language param_1)

{
  EDS_LanguageType EVar1;
  
  if ((param_1 == Eng) || (EVar1 = Korean, param_1 != Kor)) {
    EVar1 = English;
  }
  return EVar1;
}

// Init @ 14bb13730

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_LanguageManager::Init(UDS_LanguageManager *this)

{
  int iVar1;
  UDS_GameInstance *this_00;
  UClass *pUVar2;
  UDS_GameOptionManager *this_01;
  UDS_GameOptionData *pUVar3;
  
  InitBanWordPatterns(this);
  InitBanNamePatterns(this);
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 != (UDS_GameInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
    this_01 = (UDS_GameOptionManager *)
              UDS_GameInstance::GetManager(this_00,(FName)pUVar2->_padding_);
    if (this_01 != (UDS_GameOptionManager *)0x0) {
      pUVar2 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) goto LAB_14bb13795;
    }
  }
  this_01 = (UDS_GameOptionManager *)0x0;
LAB_14bb13795:
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UDS_GameOptionManager *)0x0) {
      return;
    }
  }
  else {
    if (this_01 == (UDS_GameOptionManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  pUVar3 = UDS_GameOptionManager::GetGameOptionData(this_01,GameOptionLanguageType);
  SetCurrentLanguageByGameOptionData(this,pUVar3);
  if (pUVar3 != (UDS_GameOptionData *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_LanguageManager>
              ((TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
                *)&pUVar3->GameOptionDataChangedFromVM,(UDS_LanguageManager *)&stack0x00000010,
               (pmf_8cad4e1a)this);
    TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_LanguageManager>
              ((TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*),FDefaultDelegateUserPolicy>
                *)&pUVar3->GameOptionDataChangedToVM,(UDS_LanguageManager *)&stack0x00000010,
               (pmf_220d43a4)this);
  }
  return;
}

// InitBanNamePatterns @ 14bb13ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LanguageManager::InitBanNamePatterns(UDS_LanguageManager *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  UDS_GameInstance *this_00;
  UClass *pUVar7;
  UDS_ManagerBase *pUVar8;
  UDS_LogManager *this_01;
  ulonglong uVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7;
  FIdentityFunctor local_1b6 [6];
  ForAnyElementType local_1b0;
  uint local_1a8;
  uint local_1a4;
  FString local_1a0;
  TReferenceControllerBase<1> *local_190;
  FSharedReferencer<1> FStack_188;
  TArray<FDS_BanNameTableRow_const_*,TSizedDefaultAllocator<32>_> local_180;
  undefined8 local_170;
  FSharedReferencer<1> aFStack_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  FDS_BanNameTableRow::GetAll(&local_180);
  local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)&this->BanNamePatterns;
  local_170 = 0;
  aFStack_168[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)&local_170) {
    ((TSharedPtr<FRegexPattern,1> *)local_1a0.Data.AllocatorInstance.Data)->Object =
         (FRegexPattern *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BanNamePatterns).SharedReferenceCount,aFStack_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_168[0].ReferenceController);
  iVar15 = local_180.ArrayNum;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a4 = 0;
  if (local_180.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_180.ArrayNum);
  }
  DestructItems<FString,int>((FString *)0x0,0);
  local_1a8 = 0;
  if ((0 < iVar15) && (local_1a4 != iVar15)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar15,&local_1b0,0,(int *)&local_1a4);
  }
  iVar15 = local_180.ArrayNum;
  pFVar13 = local_180.AllocatorInstance.Data + (longlong)local_180.ArrayNum * 8;
  FVar12.Data = local_180.AllocatorInstance.Data;
LAB_14bb13fd8:
  do {
    if (local_180.ArrayNum != iVar15) {
      local_1b8 = 0;
      `TCheckedPointerIterator<FDS_BanNameTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1b8);
    }
    FVar5.Data = local_1a0.Data.AllocatorInstance.Data;
    if (FVar12.Data == pFVar13) {
      pTVar16 = (TReferenceControllerBase<1> *)&DAT_00000010;
      if (0 < (int)local_1a8) {
        AlgoImpl::
        IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_UDS_LanguageManager::InitBanNamePatterns_::__l17::<lambda_1>_>_>
                  ((FString *)local_1b0.Data,local_1a8,local_1b6[0],(<lambda_1> *)local_1b6);
        uVar4 = local_1a8;
        uVar9 = (ulonglong)(int)local_1a8;
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        bVar6 = true;
        pFVar13 = local_1b0.Data + uVar9 * 0x10;
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        FVar12.Data = local_1b0.Data;
        while( true ) {
          if ((uint)uVar9 != uVar4) {
            local_1b7 = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1b7);
          }
          if (FVar12.Data == pFVar13) break;
          if (bVar6) {
            bVar6 = false;
          }
          else {
            ::FString::AppendChars(&local_1a0,L"|",1);
          }
          iVar15 = *(int *)(FVar12.Data + 8) + -1;
          if (*(int *)(FVar12.Data + 8) == 0) {
            iVar15 = 0;
          }
          ::FString::AppendChars(&local_1a0,*(wchar_t **)FVar12.Data,iVar15);
          uVar9 = (ulonglong)local_1a8;
          FVar12.Data = FVar12.Data + 0x10;
        }
        pTVar10 = ::operator_new(0x20);
        if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
          local_190 = ___xmm_00000000000000000000000000000010;
          FStack_188.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar10->SharedReferenceCount = (atomic<int>)0x1;
          pTVar10->WeakReferenceCount = (atomic<int>)0x1;
          pTVar10->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFRegexPattern___00_SharedPointerInternals__6B_;
          FRegexPattern::FRegexPattern((FRegexPattern *)(pTVar10 + 1),&local_1a0,CaseInsensitive);
          pTVar16 = pTVar10 + 1;
          if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
          FStack_188.ReferenceController = pTVar10;
          pTVar14 = pTVar10;
          local_190 = pTVar16;
        }
        if (FVar5.Data != (FScriptContainerElement *)&local_190) {
          *(TReferenceControllerBase<1> **)FVar5.Data = pTVar16;
          local_190 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(FVar5.Data + 8),&FStack_188);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_188.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      DestructItems<FString,int>((FString *)local_1b0.Data,local_1a8);
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      return;
    }
    lVar2 = *(longlong *)FVar12.Data;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) < 2) {
        this_00 = UDS_GameInstance::GetInst();
        if (this_00 != (UDS_GameInstance *)0x0) {
          pUVar7 = Z_Construct_UClass_UDS_LogManager_NoRegister();
          pUVar8 = UDS_GameInstance::GetManager(this_00,(FName)pUVar7->_padding_);
          if (pUVar8 == (UDS_ManagerBase *)0x0) {
LAB_14bb14059:
            pUVar8 = (UDS_ManagerBase *)0x0;
          }
          else {
            pUVar7 = Z_Construct_UClass_UDS_LogManager_NoRegister();
            iVar1 = (int)pUVar7->_padding_;
            if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar7->_padding_)) goto LAB_14bb14059;
          }
          if (pUVar8 != (UDS_ManagerBase *)0x0) {
            this_01 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_LanguageManager::InitBanNamePatterns",0x28,Yes);
            UDS_LogManager::PrintLog
                      (this_01,1,Warning,local_158.Ptr,0x10e,
                       L"banNameTable->Text.IsEmpty() == true  (ID : %d)");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
              FVar12.Data = FVar12.Data + 8;
              goto LAB_14bb13fd8;
            }
          }
        }
      }
      else {
        if (local_1a8 == local_1a4) {
          local_1a8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_1b0,(int *)&local_1a4);
        }
        lVar11 = (longlong)(int)local_1a8;
        local_1a8 = local_1a8 + 1;
        ::FString::FString((FString *)(local_1b0.Data + lVar11 * 0x10),(FString *)(lVar2 + 0x10));
      }
    }
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// InitBanWordPatterns @ 14bb14340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LanguageManager::InitBanWordPatterns(UDS_LanguageManager *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  UDS_GameInstance *this_00;
  UClass *pUVar7;
  UDS_ManagerBase *pUVar8;
  UDS_LogManager *this_01;
  ulonglong uVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7;
  FIdentityFunctor local_1b6 [6];
  ForAnyElementType local_1b0;
  uint local_1a8;
  uint local_1a4;
  FString local_1a0;
  TReferenceControllerBase<1> *local_190;
  FSharedReferencer<1> FStack_188;
  TArray<FDS_BanWordTableRow_const_*,TSizedDefaultAllocator<32>_> local_180;
  undefined8 local_170;
  FSharedReferencer<1> aFStack_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  FDS_BanWordTableRow::GetAll(&local_180);
  local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)&this->BanWordPatterns;
  local_170 = 0;
  aFStack_168[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)&local_170) {
    ((TSharedPtr<FRegexPattern,1> *)local_1a0.Data.AllocatorInstance.Data)->Object =
         (FRegexPattern *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BanWordPatterns).SharedReferenceCount,aFStack_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_168[0].ReferenceController);
  iVar15 = local_180.ArrayNum;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a4 = 0;
  if (local_180.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_180.ArrayNum);
  }
  DestructItems<FString,int>((FString *)0x0,0);
  local_1a8 = 0;
  if ((0 < iVar15) && (local_1a4 != iVar15)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar15,&local_1b0,0,(int *)&local_1a4);
  }
  iVar15 = local_180.ArrayNum;
  pFVar13 = local_180.AllocatorInstance.Data + (longlong)local_180.ArrayNum * 8;
  FVar12.Data = local_180.AllocatorInstance.Data;
LAB_14bb14438:
  do {
    if (local_180.ArrayNum != iVar15) {
      local_1b8 = 0;
      `TCheckedPointerIterator<FDS_BanWordTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1b8);
    }
    FVar5.Data = local_1a0.Data.AllocatorInstance.Data;
    if (FVar12.Data == pFVar13) {
      pTVar16 = (TReferenceControllerBase<1> *)&DAT_00000010;
      if (0 < (int)local_1a8) {
        AlgoImpl::
        IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_UDS_LanguageManager::InitBanWordPatterns_::__l17::<lambda_1>_>_>
                  ((FString *)local_1b0.Data,local_1a8,local_1b6[0],(<lambda_1> *)local_1b6);
        uVar4 = local_1a8;
        uVar9 = (ulonglong)(int)local_1a8;
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        bVar6 = true;
        pFVar13 = local_1b0.Data + uVar9 * 0x10;
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        FVar12.Data = local_1b0.Data;
        while( true ) {
          if ((uint)uVar9 != uVar4) {
            local_1b7 = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1b7);
          }
          if (FVar12.Data == pFVar13) break;
          if (bVar6) {
            bVar6 = false;
          }
          else {
            ::FString::AppendChars(&local_1a0,L"|",1);
          }
          iVar15 = *(int *)(FVar12.Data + 8) + -1;
          if (*(int *)(FVar12.Data + 8) == 0) {
            iVar15 = 0;
          }
          ::FString::AppendChars(&local_1a0,*(wchar_t **)FVar12.Data,iVar15);
          uVar9 = (ulonglong)local_1a8;
          FVar12.Data = FVar12.Data + 0x10;
        }
        pTVar10 = ::operator_new(0x20);
        if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
          local_190 = ___xmm_00000000000000000000000000000010;
          FStack_188.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar10->SharedReferenceCount = (atomic<int>)0x1;
          pTVar10->WeakReferenceCount = (atomic<int>)0x1;
          pTVar10->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFRegexPattern___00_SharedPointerInternals__6B_;
          FRegexPattern::FRegexPattern((FRegexPattern *)(pTVar10 + 1),&local_1a0,CaseInsensitive);
          pTVar16 = pTVar10 + 1;
          if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
          FStack_188.ReferenceController = pTVar10;
          pTVar14 = pTVar10;
          local_190 = pTVar16;
        }
        if (FVar5.Data != (FScriptContainerElement *)&local_190) {
          *(TReferenceControllerBase<1> **)FVar5.Data = pTVar16;
          local_190 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(FVar5.Data + 8),&FStack_188);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_188.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      DestructItems<FString,int>((FString *)local_1b0.Data,local_1a8);
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      return;
    }
    lVar2 = *(longlong *)FVar12.Data;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) < 2) {
        this_00 = UDS_GameInstance::GetInst();
        if (this_00 != (UDS_GameInstance *)0x0) {
          pUVar7 = Z_Construct_UClass_UDS_LogManager_NoRegister();
          pUVar8 = UDS_GameInstance::GetManager(this_00,(FName)pUVar7->_padding_);
          if (pUVar8 == (UDS_ManagerBase *)0x0) {
LAB_14bb144b9:
            pUVar8 = (UDS_ManagerBase *)0x0;
          }
          else {
            pUVar7 = Z_Construct_UClass_UDS_LogManager_NoRegister();
            iVar1 = (int)pUVar7->_padding_;
            if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar7->_padding_)) goto LAB_14bb144b9;
          }
          if (pUVar8 != (UDS_ManagerBase *)0x0) {
            this_01 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_LanguageManager::InitBanWordPatterns",0x28,Yes);
            UDS_LogManager::PrintLog
                      (this_01,1,Warning,local_158.Ptr,0xe9,
                       L"BanWordTable->Text.IsEmpty() == true  (ID : %d)");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
              FVar12.Data = FVar12.Data + 8;
              goto LAB_14bb14438;
            }
          }
        }
      }
      else {
        if (local_1a8 == local_1a4) {
          local_1a8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_1b0,(int *)&local_1a4);
        }
        lVar11 = (longlong)(int)local_1a8;
        local_1a8 = local_1a8 + 1;
        ::FString::FString((FString *)(local_1b0.Data + lVar11 * 0x10),(FString *)(lVar2 + 0x10));
      }
    }
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// OnCancelLanguageChange @ 14bb1b5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LanguageManager::OnCancelLanguageChange
          (UDS_LanguageManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          UDS_GameOptionData *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *this_00;
  undefined4 uVar3;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_198 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((this->CurrentLanguage == Eng) || (uVar3 = 1, this->CurrentLanguage != Kor)) {
    uVar3 = 2;
  }
  local_158[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158[0].ArrayNum = 1;
  local_res10[0] = param_1.WeakPtr;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_158[0].AllocatorInstance,1,&local_158[0].ArrayMax);
  *(undefined4 *)local_158[0].AllocatorInstance.Data = uVar3;
  UDS_GameOptionData::SetGameOptionValues(param_2,local_158);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
    UDS_M_CommonPopup::CloseCommonPopup(this_00);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LanguageManager::OnCancelLanguageChange",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x155,L"InOwner(UDS_M_CommonPopup) is Invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnChangedLanguageOptionData @ 14bb1c0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LanguageManager::OnChangedLanguageOptionData
          (UDS_LanguageManager *this,UDS_GameOptionData *param_1)

{
  char cVar1;
  EDS_Language EVar2;
  int iVar3;
  UDS_TableManager *this_00;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1 == (UDS_GameOptionData *)0x0) {
    cVar1 = '\x02';
  }
  else {
    iVar3 = UDS_GameOptionData::GetGameOptionValue(param_1,0);
    cVar1 = (char)iVar3;
    if (cVar1 == '\0') {
      cVar1 = '\x02';
    }
    else if (cVar1 == '\x03') {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_LanguageManager::SetCurrentLanguageByGameOptionData",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,0x161,L"languageType is Invalid");
      if ((void *)TStack_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)TStack_138._padding_);
      return;
    }
  }
  EVar2 = Eng;
  if (cVar1 == '\x01') {
    EVar2 = Kor;
  }
  if (EVar2 != this->CurrentLanguage) {
    this->CurrentLanguage = EVar2;
    this_00 = UDS_TableManager::GetInst();
    if (this_00 != (UDS_TableManager *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      UDS_TableManager::RequestSyncLoadStringTable(this_00,this->CurrentLanguage);
    }
    this->IsLanguageChanaged = true;
  }
  return;
}

// OnChangedLanguageOptionData @ 14bb1c0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LanguageManager::OnChangedLanguageOptionData
          (UDS_LanguageManager *this,UDS_GameOptionData *param_1,int param_2,int param_3,
          FString *param_4)

{
  FDS_TextFormatArg *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  ERoundingMode EVar4;
  int iVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  UDS_CommonPopupManager *this_01;
  UDS_LogManager *pUVar9;
  UDS_M_CommonPopup *pUVar10;
  UEnum *pUVar11;
  FNumberFormattingOptions *pFVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined1 auStackY_288 [32];
  uint uVar15;
  wchar_t *pwVar16;
  FWeakObjectPtr local_258;
  undefined1 local_250 [24];
  FDelegateAllocation local_238;
  FDS_Text local_228;
  FDestructionSentinel local_1d8;
  FDelegateAllocation *local_1c0;
  FDS_Text local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  this_01 = UDS_CommonPopupManager::GetInst();
  if (this_01 == (UDS_CommonPopupManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14bb1c60c;
    pUVar9 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_LanguageManager::OnChangedLanguageOptionData",0x30,Yes);
    pwVar16 = L"commonPopupManager == nullptr";
    uVar15 = 299;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this_01);
    bVar7 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_258,(void *)0x0);
    if (!bVar7) {
      if (param_1 != (UDS_GameOptionData *)0x0) {
        UDS_GameOptionData::GetGameOptionValue(param_1,0);
      }
      pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_258);
      local_228.StringTableType = None;
      local_228.StringTableID = 0;
      local_228.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_228.StringEnumTableNameID.Number = 0;
      local_228.TimeExpressionType = None;
      local_228.IsExpression = false;
      local_228.DateTime.Ticks = 0;
      local_228.TimeSpan.Ticks = 0;
      local_228.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.UniqueString.Data.ArrayNum = 0;
      local_228.UniqueString.Data.ArrayMax = 0;
      local_228.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.FormatArgs.ArrayNum = 0;
      local_228.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_228,StringUi,0x6f);
      UDS_M_CommonPopup::SetTitle(pUVar10,&local_228);
      pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_258);
      UDS_M_CommonPopup::SetButton(pUVar10,ButtonCancel,StringUi,0x66,false);
      pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_258);
      UDS_M_CommonPopup::SetButton(pUVar10,ButtonConfirm,StringUi,0x67,false);
      pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_258);
      pUVar11 = StaticEnum<enum_EDS_LanguageType>();
      DS_Util::GetStringEnumTableKey((UEnum *)local_250,(int)pUVar11);
      local_228.StringEnumTableNameID.ComparisonIndex.Value = local_250._0_4_;
      local_228.StringEnumTableNameID.Number = local_250._4_4_;
      local_228.StringTableType = None;
      local_228.StringTableID = 0;
      local_228.DateTime.Ticks = 0;
      local_228.TimeSpan.Ticks = 0;
      local_228.TimeExpressionType = None;
      local_228.IsExpression = false;
      local_228.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.UniqueString.Data.ArrayNum = 0;
      local_228.UniqueString.Data.ArrayMax = 0;
      local_228.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.FormatArgs.ArrayNum = 0;
      local_228.FormatArgs.ArrayMax = 0;
      local_1b8.StringTableType = None;
      local_1b8.StringTableID = 0;
      local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1b8.StringEnumTableNameID.Number = 0;
      local_1b8.DateTime.Ticks = 0;
      local_1b8.TimeSpan.Ticks = 0;
      local_1b8.TimeExpressionType = None;
      local_1b8.IsExpression = false;
      local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.UniqueString.Data.ArrayNum = 0;
      local_1b8.UniqueString.Data.ArrayMax = 0;
      local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.FormatArgs.ArrayNum = 0;
      local_1b8.FormatArgs.ArrayMax = 0;
      local_250._0_4_ = 0;
      local_250._4_4_ = 0;
      local_250._8_8_ = 0;
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,(ForAnyElementType *)local_250,(int *)(local_250 + 0xc));
      local_250._8_4_ = iVar8 + 1;
      this_00 = (FDS_TextFormatArg *)(local_250._0_8_ + (longlong)iVar8 * 0x28);
      FInstancedStruct::FInstancedStruct((FInstancedStruct *)this_00);
      pFVar12 = FNumberFormattingOptions::DefaultWithGrouping();
      bVar7 = pFVar12->UseGrouping;
      bVar2 = pFVar12->IndicateNearlyInteger;
      uVar3 = pFVar12->field_0x3;
      EVar4 = pFVar12->RoundingMode;
      iVar8 = pFVar12->MinimumIntegralDigits;
      iVar5 = pFVar12->MaximumIntegralDigits;
      (this_00->NumberFormatOption).AlwaysSign = pFVar12->AlwaysSign;
      (this_00->NumberFormatOption).UseGrouping = bVar7;
      (this_00->NumberFormatOption).IndicateNearlyInteger = bVar2;
      (this_00->NumberFormatOption).field_0x3 = uVar3;
      (this_00->NumberFormatOption).RoundingMode = EVar4;
      (this_00->NumberFormatOption).MinimumIntegralDigits = iVar8;
      (this_00->NumberFormatOption).MaximumIntegralDigits = iVar5;
      iVar8 = pFVar12->MaximumFractionalDigits;
      (this_00->NumberFormatOption).MinimumFractionalDigits = pFVar12->MinimumFractionalDigits;
      (this_00->NumberFormatOption).MaximumFractionalDigits = iVar8;
      FDS_TextFormatArg::SetArg<FDS_Text_&>(this_00,&local_228);
      FDS_Text::SetTextFormatFromStringTable
                (&local_1b8,StringUi,0x318f9,
                 (TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)local_250);
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_250._0_8_,local_250._8_4_);
      if ((FName)local_250._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_250._0_8_);
      }
      UDS_M_CommonPopup::SetMainContent(pUVar10,&local_1b8);
      FVar6.Data = local_228.FormatArgs.AllocatorInstance.Data;
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_228.FormatArgs.AllocatorInstance.Data,
                 local_228.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)FVar6.Data != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      if (local_228.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.UniqueString.Data.AllocatorInstance.Data);
      }
      pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_258);
      local_250._16_8_ = 0;
      local_238.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_238.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_250 + 0x10),
                 (FWriteAccessScope *)&local_1d8);
      local_1c0 = &local_238;
      puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_238);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__PEAVUDS_GameOptionData____6B_
        ;
        puVar13[1] = param_1;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_LanguageManager____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__PEAVUDS_GameOptionData____6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_LanguageManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        local_250._0_8_ = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_LanguageManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)local_250);
        puVar13[4] = OnCancelLanguageChange;
      }
      if (local_1d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar10,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)(local_250 + 0x10));
      pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_258);
      local_250._16_8_ = 0;
      local_238.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_238.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_250 + 0x10),
                 (FWriteAccessScope *)&local_1d8);
      local_1c0 = &local_238;
      puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_238);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__PEAVUDS_GameOptionData____6B_
        ;
        puVar13[1] = param_1;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_LanguageManager____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__PEAVUDS_GameOptionData____6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_LanguageManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        local_250._0_8_ = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_LanguageManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)local_250);
        puVar13[4] = OnConfirmLanguageChange;
      }
      if (local_1d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar10,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)(local_250 + 0x10));
      pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_258);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar10);
      goto LAB_14bb1c60c;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14bb1c60c;
    pUVar9 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_LanguageManager::OnChangedLanguageOptionData",0x30,Yes);
    pwVar16 = L"CommonPopupModel == nullptr";
    uVar15 = 0x132;
  }
  UDS_LogManager::PrintLog(pUVar9,1,Warning,local_168.Ptr,uVar15,pwVar16);
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
LAB_14bb1c60c:
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnConfirmLanguageChange @ 14bb1d3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LanguageManager::OnConfirmLanguageChange
          (UDS_LanguageManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          UDS_GameOptionData *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *this_00;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10[0] = param_1.WeakPtr;
  SetCurrentLanguageByGameOptionData(this,param_2);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
    UDS_M_CommonPopup::CloseCommonPopup(this_00);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LanguageManager::OnConfirmLanguageChange",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x146,L"InOwner(UDS_M_CommonPopup) is Invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  return;
}

// SanitizeZeroWidthChar @ 14bb346b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
UDS_LanguageManager::SanitizeZeroWidthChar
          (UDS_LanguageManager *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  ::FString::ReplaceInline(__return_storage_ptr__,L"\x200b",L"",IgnoreCase);
  ::FString::ReplaceInline(__return_storage_ptr__,L"\x200c",L"",IgnoreCase);
  ::FString::ReplaceInline(__return_storage_ptr__,L"\x200d",L"",IgnoreCase);
  ::FString::ReplaceInline(__return_storage_ptr__,L"",L"",IgnoreCase);
  return __return_storage_ptr__;
}

// SetCurrentLanguageByGameOptionData @ 14bb36040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LanguageManager::SetCurrentLanguageByGameOptionData
          (UDS_LanguageManager *this,UDS_GameOptionData *param_1)

{
  char cVar1;
  EDS_Language EVar2;
  int iVar3;
  UDS_TableManager *this_00;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1 == (UDS_GameOptionData *)0x0) {
    cVar1 = '\x02';
  }
  else {
    iVar3 = UDS_GameOptionData::GetGameOptionValue(param_1,0);
    cVar1 = (char)iVar3;
    if (cVar1 == '\0') {
      cVar1 = '\x02';
    }
    else if (cVar1 == '\x03') {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LanguageManager::SetCurrentLanguageByGameOptionData",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x161,L"languageType is Invalid");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
  }
  EVar2 = Eng;
  if (cVar1 == '\x01') {
    EVar2 = Kor;
  }
  if (EVar2 != this->CurrentLanguage) {
    this->CurrentLanguage = EVar2;
    this_00 = UDS_TableManager::GetInst();
    if (this_00 != (UDS_TableManager *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      UDS_TableManager::RequestSyncLoadStringTable(this_00,this->CurrentLanguage);
    }
    this->IsLanguageChanaged = true;
  }
  return;
}

// Update @ 14bb3f040

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_LanguageManager::Update(UDS_LanguageManager *this,float *param_1)

{
  return;
}

