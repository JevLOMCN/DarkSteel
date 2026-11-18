// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 37

// StaticClass @ 147d4b6e0

UClass * __cdecl UKismetInternationalizationLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetInternationalizationLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetInternationalizationLibrary",
               &Z_Registration_Info_UClass_UKismetInternationalizationLibrary.InnerSingleton,
               StaticRegisterNativesUKismetInternationalizationLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UKismetInternationalizationLibrary>,
               InternalVTableHelperCtorCaller<UKismetInternationalizationLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetInternationalizationLibrary.InnerSingleton;
}

// UKismetInternationalizationLibrary @ 147d7a090

UKismetInternationalizationLibrary * __thiscall
UKismetInternationalizationLibrary::UKismetInternationalizationLibrary
          (UKismetInternationalizationLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetInternationalizationLibrary__6B_;
  return this;
}

// UKismetInternationalizationLibrary @ 147d7a0c0

UKismetInternationalizationLibrary * __thiscall
UKismetInternationalizationLibrary::UKismetInternationalizationLibrary
          (UKismetInternationalizationLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetInternationalizationLibrary__6B_;
  return this;
}

// ~UKismetInternationalizationLibrary @ 147d7ba90

void __thiscall
UKismetInternationalizationLibrary::~UKismetInternationalizationLibrary
          (UKismetInternationalizationLibrary *this)

{
  *(undefined ***)this = &___7UKismetInternationalizationLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ClearCurrentAssetGroupCulture @ 147d8e5e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::ClearCurrentAssetGroupCulture(FName param_1,bool param_2)

{
  FInternationalization *this;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  this = FInternationalization::Get();
  FInternationalization::ClearCurrentAssetGroupCulture(this,local_res8);
  if (param_2) {
    FConfigCacheIni::RemoveKeyFromSection
              (GConfig,L"Internationalization.AssetGroupCultures",local_res8[0],
               &GGameUserSettingsIni);
    FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
  }
  return;
}

// GetCultureDisplayName @ 147da4f90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
UKismetInternationalizationLibrary::GetCultureDisplayName
          (FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FInternationalization *this;
  FString *pFVar3;
  TSharedPtr<FCulture,1> local_18;
  
  this = FInternationalization::Get();
  FInternationalization::GetCulture(this,&local_18,param_1);
  if (local_18.Object != (FCulture *)0x0) {
    if (param_2) {
      if ((local_18.Object == (FCulture *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
      param_1 = FCulture::GetDisplayName(local_18.Object);
    }
    else {
      if ((local_18.Object == (FCulture *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
      param_1 = FCulture::GetNativeName(local_18.Object);
    }
  }
  ::FString::FString(__return_storage_ptr__,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetCurrentAssetGroupCulture @ 147da5080

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
UKismetInternationalizationLibrary::GetCurrentAssetGroupCulture
          (FString *__return_storage_ptr__,FName param_1)

{
  FInternationalization *this;
  TSharedRef<FCulture,1> *pTVar1;
  FString *pFVar2;
  FName local_res10 [3];
  TSharedRef<FCulture,1> local_18;
  
  local_res10[0] = param_1;
  this = FInternationalization::Get();
  pTVar1 = FInternationalization::GetCurrentAssetGroupCulture(this,&local_18,local_res10);
  pFVar2 = FCulture::GetName(pTVar1->Object);
  ::FString::FString(__return_storage_ptr__,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetCurrentCulture @ 147da5160

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
UKismetInternationalizationLibrary::GetCurrentCulture(FString *__return_storage_ptr__)

{
  FCulture *this;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  
  pFVar4 = FInternationalization::Get();
  if ((pFVar4->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = (pFVar4->CurrentLanguage).Object;
  pTVar1 = (pFVar4->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = FCulture::GetName(this);
  ::FString::FString(__return_storage_ptr__,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetCurrentLanguage @ 147da5220

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
UKismetInternationalizationLibrary::GetCurrentLanguage(FString *__return_storage_ptr__)

{
  FCulture *this;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  
  pFVar4 = FInternationalization::Get();
  if ((pFVar4->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = (pFVar4->CurrentLanguage).Object;
  pTVar1 = (pFVar4->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = FCulture::GetName(this);
  ::FString::FString(__return_storage_ptr__,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetCurrentLocale @ 147da52e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
UKismetInternationalizationLibrary::GetCurrentLocale(FString *__return_storage_ptr__)

{
  FCulture *this;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  
  pFVar4 = FInternationalization::Get();
  if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = (pFVar4->CurrentLocale).Object;
  pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = FCulture::GetName(this);
  ::FString::FString(__return_storage_ptr__,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetLocalizedCultures @ 147da6630

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UKismetInternationalizationLibrary::GetLocalizedCultures
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ELocalizationLoadFlags param_1)

{
  FTextLocalizationManager *this;
  
  this = FTextLocalizationManager::Get();
  FTextLocalizationManager::GetLocalizedCultureNames(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetLocalizedCultures @ 147da6670

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UKismetInternationalizationLibrary::GetLocalizedCultures
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1,
          bool param_2,bool param_3,bool param_4)

{
  FTextLocalizationManager *this;
  
  this = FTextLocalizationManager::Get();
  FTextLocalizationManager::GetLocalizedCultureNames
            (this,__return_storage_ptr__,
             param_3 * '\x02' | param_1 << 2 | param_2 << 3 | param_4 << 4);
  return __return_storage_ptr__;
}

// GetNativeCulture @ 147da69a0

FString * __cdecl
UKismetInternationalizationLibrary::GetNativeCulture
          (FString *__return_storage_ptr__,ELocalizedTextSourceCategory param_1)

{
  FTextLocalizationManager *this;
  
  this = FTextLocalizationManager::Get();
  FTextLocalizationManager::GetNativeCultureName(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147da7f30

UClass * __cdecl UKismetInternationalizationLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetInternationalizationLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetInternationalizationLibrary",
               &Z_Registration_Info_UClass_UKismetInternationalizationLibrary.InnerSingleton,
               StaticRegisterNativesUKismetInternationalizationLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UKismetInternationalizationLibrary>,
               InternalVTableHelperCtorCaller<UKismetInternationalizationLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetInternationalizationLibrary.InnerSingleton;
}

// GetSuitableCulture @ 147da9760

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
UKismetInternationalizationLibrary::GetSuitableCulture
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2,FString *param_3)

{
  int iVar1;
  int iVar2;
  FInternationalization *this;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_48 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_40;
  
  this = FInternationalization::Get();
  FInternationalization::GetPrioritizedCultureNames(this,&local_40,param_2);
  iVar1 = local_40.ArrayNum;
  pFVar7 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 0x10;
  FVar6.Data = local_40.AllocatorInstance.Data;
  while( true ) {
    if (local_40.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_48);
    }
    pFVar3 = (FScriptContainerElement *)param_3;
    if (FVar6.Data == pFVar7) break;
    pFVar4 = (param_1->AllocatorInstance).Data;
    pFVar5 = pFVar4 + (longlong)param_1->ArrayNum * 0x10;
    for (; pFVar4 != pFVar5; pFVar4 = pFVar4 + 0x10) {
      iVar2 = *(int *)(pFVar4 + 8);
      pFVar3 = FVar6.Data;
      if (iVar2 == *(int *)(FVar6.Data + 8)) {
        if (iVar2 < 2) goto LAB_147da9821;
        iVar2 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar4,*(wchar_t **)FVar6.Data);
        bVar8 = iVar2 == 0;
      }
      else {
        bVar8 = iVar2 + *(int *)(FVar6.Data + 8) == 1;
      }
      if (bVar8) goto LAB_147da9821;
    }
    FVar6.Data = FVar6.Data + 0x10;
  }
LAB_147da9821:
  ::FString::FString(__return_storage_ptr__,(FString *)pFVar3);
  DestructItems<FString,int>((FString *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsCultureRightToLeft @ 147dad3b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl UKismetInternationalizationLibrary::IsCultureRightToLeft(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FInternationalization *this;
  TSharedPtr<FCulture,1> local_18;
  
  this = FInternationalization::Get();
  FInternationalization::GetCulture(this,&local_18,param_1);
  if (local_18.Object != (FCulture *)0x0) {
    if ((local_18.Object == (FCulture *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = FCulture::IsRightToLeft(local_18.Object);
    if (bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return false;
}

// SetCurrentAssetGroupCulture @ 147dbfaa0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
UKismetInternationalizationLibrary::SetCurrentAssetGroupCulture
          (FName param_1,FString *param_2,bool param_3)

{
  bool bVar1;
  FInternationalization *this;
  FName local_res8;
  
  local_res8 = param_1;
  this = FInternationalization::Get();
  bVar1 = FInternationalization::SetCurrentAssetGroupCulture(this,&local_res8,param_2);
  if (bVar1) {
    if (param_3) {
      FConfigCacheIni::RemoveKeyFromSection
                (GConfig,L"Internationalization.AssetGroupCultures",local_res8,&GGameUserSettingsIni
                );
      FConfigCacheIni::AddToSection
                (GConfig,L"Internationalization.AssetGroupCultures",local_res8,param_2,
                 &GGameUserSettingsIni);
      FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
    }
    return true;
  }
  return false;
}

// SetCurrentCulture @ 147dbfb50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl UKismetInternationalizationLibrary::SetCurrentCulture(FString *param_1,bool param_2)

{
  bool bVar1;
  FInternationalization *this;
  wchar_t *pwVar2;
  
  this = FInternationalization::Get();
  bVar1 = FInternationalization::SetCurrentCulture(this,param_1);
  if (bVar1) {
    if (param_2) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar2 = L"";
      }
      else {
        pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,L"Internationalization",L"Culture",pwVar2,&GGameUserSettingsIni);
      FConfigCacheIni::EmptySection
                (GConfig,L"Internationalization.AssetGroupCultures",&GGameUserSettingsIni);
      FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
    }
    return true;
  }
  return false;
}

// SetCurrentLanguage @ 147dbfc00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl UKismetInternationalizationLibrary::SetCurrentLanguage(FString *param_1,bool param_2)

{
  bool bVar1;
  FInternationalization *this;
  wchar_t *pwVar2;
  
  this = FInternationalization::Get();
  bVar1 = FInternationalization::SetCurrentLanguage(this,param_1);
  if (bVar1) {
    if (param_2) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar2 = L"";
      }
      else {
        pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,L"Internationalization",L"Language",pwVar2,&GGameUserSettingsIni);
      FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
    }
    return true;
  }
  return false;
}

// SetCurrentLanguageAndLocale @ 147dbfca0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(FString *param_1,bool param_2)

{
  bool bVar1;
  FInternationalization *this;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  this = FInternationalization::Get();
  bVar1 = FInternationalization::SetCurrentLanguageAndLocale(this,param_1);
  if (bVar1) {
    if (param_2) {
      pwVar2 = L"";
      if ((param_1->Data).ArrayNum == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,L"Internationalization",L"Language",pwVar3,&GGameUserSettingsIni);
      if ((param_1->Data).ArrayNum != 0) {
        pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,L"Internationalization",L"Locale",pwVar2,&GGameUserSettingsIni);
      FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
    }
    return true;
  }
  return false;
}

// SetCurrentLocale @ 147dbfd80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl UKismetInternationalizationLibrary::SetCurrentLocale(FString *param_1,bool param_2)

{
  bool bVar1;
  FInternationalization *this;
  wchar_t *pwVar2;
  
  this = FInternationalization::Get();
  bVar1 = FInternationalization::SetCurrentLocale(this,param_1);
  if (bVar1) {
    if (param_2) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar2 = L"";
      }
      else {
        pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,L"Internationalization",L"Locale",pwVar2,&GGameUserSettingsIni);
      FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
    }
    return true;
  }
  return false;
}

// StaticRegisterNativesUKismetInternationalizationLibrary @ 147dc4150

void __cdecl
UKismetInternationalizationLibrary::StaticRegisterNativesUKismetInternationalizationLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClearCurrentAssetGroupCulture @ 147ddf0a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execClearCurrentAssetGroupCulture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInternationalization *this;
  bool bVar2;
  int local_res10 [2];
  FName local_res20;
  FName local_18 [2];
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_18[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FInternationalization::Get();
  FInternationalization::ClearCurrentAssetGroupCulture(this,local_18);
  if (bVar2) {
    FConfigCacheIni::RemoveKeyFromSection
              (GConfig,L"Internationalization.AssetGroupCultures",local_18[0],&GGameUserSettingsIni)
    ;
    FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
  }
  return;
}

// execGetCultureDisplayName @ 147df8d30

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execGetCultureDisplayName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FInternationalization *this;
  FString *pFVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int local_res10 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FString local_38;
  TSharedPtr<FCulture,1> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FInternationalization::Get();
  FInternationalization::GetCulture(this,&local_28,&local_38);
  if (local_28.Object == (FCulture *)0x0) {
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = CONCAT44(local_40._4_4_,local_38.Data.ArrayNum);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    iVar1 = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum == 0) {
      local_40 = local_38.Data._8_8_ & 0xffffffff;
      goto LAB_147df8ee1;
    }
  }
  else {
    if (bVar5) {
      if ((local_28.Object == (FCulture *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = FCulture::GetNativeName(local_28.Object);
    }
    else {
      if ((local_28.Object == (FCulture *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = FCulture::GetDisplayName(local_28.Object);
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar4->Data).ArrayNum;
    local_40 = CONCAT44(local_40._4_4_,iVar1);
    _Src.Data = (pFVar4->Data).AllocatorInstance.Data;
    if (iVar1 == 0) {
      local_40 = 0;
      goto LAB_147df8ee1;
    }
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar1,0,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,_Src.Data,(longlong)iVar1 * 2);
LAB_147df8ee1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCurrentAssetGroupCulture @ 147df8f60

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execGetCurrentAssetGroupCulture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *_Src;
  FInternationalization *this;
  TSharedRef<FCulture,1> *pTVar3;
  FString *pFVar4;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  TSharedRef<FCulture,1> local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FInternationalization::Get();
  pTVar3 = FInternationalization::GetCurrentAssetGroupCulture(this,&local_28,local_res18);
  pFVar4 = FCulture::GetName(pTVar3->Object);
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar4->Data).ArrayNum;
  _Src = (pFVar4->Data).AllocatorInstance.Data;
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  if (iVar1 == 0) {
    local_30 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetCurrentCulture @ 147df9290

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execGetCurrentCulture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FCulture *this;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FInternationalization *pFVar5;
  FString *pFVar6;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FInternationalization::Get();
  if (((pFVar5->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this = (pFVar5->CurrentLanguage).Object;
  pTVar2 = (pFVar5->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this == (FCulture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = FCulture::GetName(this);
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar6->Data).ArrayNum;
  _Src = (pFVar6->Data).AllocatorInstance.Data;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetCurrentLanguage @ 147df9410

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execGetCurrentLanguage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FCulture *this;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FInternationalization *pFVar5;
  FString *pFVar6;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FInternationalization::Get();
  if (((pFVar5->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this = (pFVar5->CurrentLanguage).Object;
  pTVar2 = (pFVar5->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this == (FCulture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = FCulture::GetName(this);
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar6->Data).ArrayNum;
  _Src = (pFVar6->Data).AllocatorInstance.Data;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetCurrentLocale @ 147df9590

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execGetCurrentLocale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FCulture *this;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FInternationalization *pFVar5;
  FString *pFVar6;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FInternationalization::Get();
  if (((pFVar5->CurrentLocale).Object == (FCulture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this = (pFVar5->CurrentLocale).Object;
  pTVar2 = (pFVar5->CurrentLocale).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this == (FCulture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = FCulture::GetName(this);
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar6->Data).ArrayNum;
  _Src = (pFVar6->Data).AllocatorInstance.Data;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetLocalizedCultures @ 147dfb510

void __cdecl
UKismetInternationalizationLibrary::execGetLocalizedCultures
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTextLocalizationManager *this;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_58 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_50;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar3 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_58[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = local_58[0] != 0;
  this = FTextLocalizationManager::Get();
  FTextLocalizationManager::GetLocalizedCultureNames
            (this,&local_50,-bVar5 & Additional | bVar2 << 2 | bVar3 << 3 | bVar4 * '\x02');
  if (param_3 != &local_50) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_50.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_50.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_50.ArrayMax;
    local_50.ArrayMax = 0;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
  }
  DestructItems<FString,int>((FString *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// execGetNativeCulture @ 147dfc000

void __cdecl
UKismetInternationalizationLibrary::execGetNativeCulture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ELocalizedTextSourceCategory EVar2;
  FTextLocalizationManager *this;
  ELocalizedTextSourceCategory local_res10 [8];
  FString local_18;
  
  local_res10[0] = Game;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FTextLocalizationManager::Get();
  FTextLocalizationManager::GetNativeCultureName(this,&local_18,EVar2);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSuitableCulture @ 147dff210

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execGetSuitableCulture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  ForAnyElementType *pFVar5;
  int iVar6;
  FInternationalization *this;
  FString *pFVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  void *_Src;
  FScriptContainerElement *pFVar10;
  FString **ppFVar11;
  bool bVar12;
  undefined1 local_res10 [8];
  ForAnyElementType *local_res18;
  ForAnyElementType local_88;
  undefined8 local_80;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString *local_68;
  undefined8 local_60;
  void *local_58;
  ulonglong local_50;
  FString local_48;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_68 = (FString *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ppFVar11 = &local_68;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar11 = (FString **)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FInternationalization::Get();
  FInternationalization::GetPrioritizedCultureNames(this,&local_78,&local_48);
  iVar2 = local_78.ArrayNum;
  pFVar10 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10;
  FVar9.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if (local_78.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar9.Data == pFVar10) break;
    pFVar7 = *ppFVar11;
    pFVar8 = pFVar7 + *(int *)(ppFVar11 + 1);
    uVar4 = local_80;
    for (; local_80 = uVar4, pFVar7 != pFVar8; pFVar7 = pFVar7 + 1) {
      local_80._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      iVar6 = (pFVar7->Data).ArrayNum;
      if (iVar6 == *(int *)(FVar9.Data + 8)) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                             *(wchar_t **)FVar9.Data);
          bVar12 = iVar6 == 0;
          goto LAB_147dff383;
        }
LAB_147dff399:
        local_88.Data = (FScriptContainerElement *)0x0;
        iVar2 = *(int *)(FVar9.Data + 8);
        local_80 = CONCAT44(local_80._4_4_,iVar2);
        _Src = *(void **)FVar9.Data;
        if (iVar2 != 0) goto LAB_147dff3ca;
        local_80 = 0;
        goto LAB_147dff404;
      }
      bVar12 = iVar6 + *(int *)(FVar9.Data + 8) == 1;
LAB_147dff383:
      if (bVar12) goto LAB_147dff399;
      uVar4 = local_80;
    }
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = CONCAT44(local_80._4_4_,(int)local_50);
  _Src = local_58;
  iVar2 = (int)local_50;
  if ((int)local_50 == 0) {
    local_80 = local_50 & 0xffffffff;
  }
  else {
LAB_147dff3ca:
    local_88.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_88,iVar2,(int *)((longlong)&local_80 + 4));
    memcpy(local_88.Data,_Src,(longlong)iVar2 * 2);
  }
LAB_147dff404:
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pFVar5 = local_res18;
  if (local_res18 != &local_88) {
    if (local_res18->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_res18->Data);
    }
    pFVar5->Data = local_88.Data;
    *(undefined4 *)&pFVar5[1].Data = (undefined4)local_80;
    *(undefined4 *)((longlong)&pFVar5[1].Data + 4) = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>(local_68,(int)local_60);
  if (local_68 != (FString *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execIsCultureRightToLeft @ 147e04740

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execIsCultureRightToLeft
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *this;
  undefined1 uVar4;
  FString local_28;
  TSharedPtr<FCulture,1> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FInternationalization::Get();
  FInternationalization::GetCulture(this,&local_18,&local_28);
  if (local_18.Object != (FCulture *)0x0) {
    if ((local_18.Object == (FCulture *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = FCulture::IsRightToLeft(local_18.Object);
    if (bVar3) {
      uVar4 = 1;
      goto LAB_147e04812;
    }
  }
  uVar4 = 0;
LAB_147e04812:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(undefined1 *)param_3 = uVar4;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCurrentAssetGroupCulture @ 147e2ed40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execSetCurrentAssetGroupCulture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FInternationalization *this;
  bool bVar4;
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  FString local_28;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res20 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FInternationalization::Get();
  bVar2 = FInternationalization::SetCurrentAssetGroupCulture(this,&local_res20,&local_28);
  if (bVar2) {
    if (bVar4) {
      FConfigCacheIni::RemoveKeyFromSection
                (GConfig,L"Internationalization.AssetGroupCultures",local_res20,
                 &GGameUserSettingsIni);
      FConfigCacheIni::AddToSection
                (GConfig,L"Internationalization.AssetGroupCultures",local_res20,&local_28,
                 &GGameUserSettingsIni);
      FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCurrentCulture @ 147e2eee0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execSetCurrentCulture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FInternationalization *this;
  ForAnyElementType FVar4;
  bool bVar5;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FInternationalization::Get();
  bVar2 = FInternationalization::SetCurrentCulture(this,&local_18);
  if (bVar2) {
    if (bVar5) {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,L"Internationalization",L"Culture",(wchar_t *)FVar4.Data,
                 &GGameUserSettingsIni);
      FConfigCacheIni::EmptySection
                (GConfig,L"Internationalization.AssetGroupCultures",&GGameUserSettingsIni);
      FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCurrentLanguage @ 147e2f050

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execSetCurrentLanguage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FInternationalization *this;
  ForAnyElementType FVar4;
  bool bVar5;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FInternationalization::Get();
  bVar2 = FInternationalization::SetCurrentLanguage(this,&local_18);
  if (bVar2) {
    if (bVar5) {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,L"Internationalization",L"Language",(wchar_t *)FVar4.Data,
                 &GGameUserSettingsIni);
      FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCurrentLanguageAndLocale @ 147e2f1b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execSetCurrentLanguageAndLocale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FInternationalization *this;
  ForAnyElementType FVar4;
  bool bVar5;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FInternationalization::Get();
  bVar2 = FInternationalization::SetCurrentLanguageAndLocale(this,&local_18);
  if (bVar2) {
    if (bVar5) {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,L"Internationalization",L"Language",(wchar_t *)FVar4.Data,
                 &GGameUserSettingsIni);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,L"Internationalization",L"Locale",(wchar_t *)FVar4.Data,
                 &GGameUserSettingsIni);
      FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCurrentLocale @ 147e2f340

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
UKismetInternationalizationLibrary::execSetCurrentLocale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FInternationalization *this;
  ForAnyElementType FVar4;
  bool bVar5;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FInternationalization::Get();
  bVar2 = FInternationalization::SetCurrentLocale(this,&local_18);
  if (bVar2) {
    if (bVar5) {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,L"Internationalization",L"Locale",(wchar_t *)FVar4.Data,
                 &GGameUserSettingsIni);
      FConfigCacheIni::Flush(GConfig,false,&GGameUserSettingsIni);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

