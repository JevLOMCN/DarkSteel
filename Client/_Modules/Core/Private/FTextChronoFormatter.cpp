// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// AsDate @ 1416e0c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FTextChronoFormatter::AsDate
          (FString *__return_storage_ptr__,FDateTime *param_1,Type param_2,FString *param_3,
          FCulture *param_4)

{
  int iVar1;
  code *pcVar2;
  size_t _Size;
  bool bVar3;
  uint uVar4;
  FInternationalization *pFVar5;
  FString *pFVar6;
  undefined8 _Src;
  undefined4 uVar7;
  double dVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  TSharedRef<icu_64::DateFormat_const_,1> local_98;
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar5 = FInternationalization::Get();
  if ((pFVar5->bIsInitialized != true) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUText.cpp"
                         ,0x22,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  dVar8 = FICUInternationalization::UEDateTimeToICUDate((pFVar5->Implementation).Obj.Ptr,param_1);
  FICUCultureImplementation::GetDateFormatter
            ((param_4->Implementation).Ptr,&local_98,param_2,param_3);
  local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_88.fUnion.fStackFields.fLengthAndFlags = 2;
  icu_64::DateFormat::format(local_98.Object,dVar8,&local_88);
  _Src = (wchar16 *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar7 = local_88.fUnion.fFields.fLength;
  if (local_88.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar7 = (int)local_88.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar7 == 0) {
    ::FString::Empty(__return_storage_ptr__);
  }
  else if ((int)uVar7 < 1) {
    ::FString::Reset(__return_storage_ptr__,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&__return_storage_ptr__->Data,uVar7 + 1,Default);
    if (((local_88.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src = (wchar16 *)((longlong)&local_88.fUnion + 2),
       (local_88.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src = local_88.fUnion.fFields.fArray;
    }
    _Size = (longlong)(int)uVar7 * 2;
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,(void *)_Src,_Size);
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    uVar4 = 0;
    if ((int)uVar7 < iVar1) {
      uVar4 = (uint)~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (local_a8 = (longlong)(int)uVar7, local_a0 = (longlong)iVar1,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    *(undefined2 *)((__return_storage_ptr__->Data).AllocatorInstance.Data + _Size) = 0;
  }
  icu_64::UnicodeString::~UnicodeString(&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsDateTime @ 1416e0e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FTextChronoFormatter::AsDateTime
          (FString *__return_storage_ptr__,FDateTime *param_1,FString *param_2,FString *param_3,
          FCulture *param_4)

{
  int iVar1;
  code *pcVar2;
  size_t _Size;
  bool bVar3;
  uint uVar4;
  FInternationalization *pFVar5;
  FString *pFVar6;
  undefined8 _Src;
  undefined4 uVar7;
  double dVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  TSharedRef<icu_64::DateFormat_const_,1> local_a8;
  UnicodeString local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar5 = FInternationalization::Get();
  if ((pFVar5->bIsInitialized != true) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUText.cpp"
                         ,0x49,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  dVar8 = FICUInternationalization::UEDateTimeToICUDate((pFVar5->Implementation).Obj.Ptr,param_1);
  FICUCultureImplementation::GetDateTimeFormatter
            ((param_4->Implementation).Ptr,&local_a8,param_2,param_3);
  local_98._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_98.fUnion.fStackFields.fLengthAndFlags = 2;
  icu_64::DateFormat::format(local_a8.Object,dVar8,&local_98);
  _Src = (wchar16 *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar7 = local_98.fUnion.fFields.fLength;
  if (local_98.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar7 = (int)local_98.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar7 == 0) {
    ::FString::Empty(__return_storage_ptr__);
  }
  else if ((int)uVar7 < 1) {
    ::FString::Reset(__return_storage_ptr__,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&__return_storage_ptr__->Data,uVar7 + 1,Default);
    if (((local_98.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src = (wchar16 *)((longlong)&local_98.fUnion + 2),
       (local_98.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src = local_98.fUnion.fFields.fArray;
    }
    _Size = (longlong)(int)uVar7 * 2;
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,(void *)_Src,_Size);
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    uVar4 = 0;
    if ((int)uVar7 < iVar1) {
      uVar4 = (uint)~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (local_b8 = (longlong)(int)uVar7, local_b0 = (longlong)iVar1,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    *(undefined2 *)((__return_storage_ptr__->Data).AllocatorInstance.Data + _Size) = 0;
  }
  icu_64::UnicodeString::~UnicodeString(&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsDateTime @ 1416e0fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FTextChronoFormatter::AsDateTime
          (FString *__return_storage_ptr__,FDateTime *param_1,Type param_2,Type param_3,
          FString *param_4,FCulture *param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  undefined8 _Src;
  undefined4 uVar6;
  double dVar7;
  undefined1 auStackY_c8 [32];
  TSharedRef<icu_64::DateFormat_const_,1> local_98;
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar4 = FInternationalization::Get();
  if ((pFVar4->bIsInitialized != true) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUText.cpp"
                         ,0x3c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  dVar7 = FICUInternationalization::UEDateTimeToICUDate((pFVar4->Implementation).Obj.Ptr,param_1);
  FICUCultureImplementation::GetDateTimeFormatter
            ((param_5->Implementation).Ptr,&local_98,param_2,param_3,param_4);
  local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_88.fUnion.fStackFields.fLengthAndFlags = 2;
  icu_64::DateFormat::format(local_98.Object,dVar7,&local_88);
  _Src = (wchar16 *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar6 = local_88.fUnion.fFields.fLength;
  if (local_88.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar6 = (int)local_88.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar6 == 0) {
    ::FString::Empty(__return_storage_ptr__);
  }
  else if ((int)uVar6 < 1) {
    ::FString::Reset(__return_storage_ptr__,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&__return_storage_ptr__->Data,uVar6 + 1,Default);
    if (((local_88.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src = (wchar16 *)((longlong)&local_88.fUnion + 2),
       (local_88.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src = local_88.fUnion.fFields.fArray;
    }
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,(void *)_Src,
           (longlong)(int)uVar6 * 2);
    uVar3 = 0;
    if ((int)uVar6 < (__return_storage_ptr__->Data).ArrayNum) {
      uVar3 = (uint)~uVar6 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined2 *)
     ((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)(int)uVar6 * 2) = 0;
  }
  icu_64::UnicodeString::~UnicodeString(&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsTime @ 1416e13b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FTextChronoFormatter::AsTime
          (FString *__return_storage_ptr__,FDateTime *param_1,Type param_2,FString *param_3,
          FCulture *param_4)

{
  int iVar1;
  code *pcVar2;
  size_t _Size;
  bool bVar3;
  uint uVar4;
  FInternationalization *pFVar5;
  FString *pFVar6;
  undefined8 _Src;
  undefined4 uVar7;
  double dVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  TSharedRef<icu_64::DateFormat_const_,1> local_98;
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar5 = FInternationalization::Get();
  if ((pFVar5->bIsInitialized != true) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUText.cpp"
                         ,0x2f,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  dVar8 = FICUInternationalization::UEDateTimeToICUDate((pFVar5->Implementation).Obj.Ptr,param_1);
  FICUCultureImplementation::GetTimeFormatter
            ((param_4->Implementation).Ptr,&local_98,param_2,param_3);
  local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_88.fUnion.fStackFields.fLengthAndFlags = 2;
  icu_64::DateFormat::format(local_98.Object,dVar8,&local_88);
  _Src = (wchar16 *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar7 = local_88.fUnion.fFields.fLength;
  if (local_88.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar7 = (int)local_88.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar7 == 0) {
    ::FString::Empty(__return_storage_ptr__);
  }
  else if ((int)uVar7 < 1) {
    ::FString::Reset(__return_storage_ptr__,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&__return_storage_ptr__->Data,uVar7 + 1,Default);
    if (((local_88.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src = (wchar16 *)((longlong)&local_88.fUnion + 2),
       (local_88.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src = local_88.fUnion.fFields.fArray;
    }
    _Size = (longlong)(int)uVar7 * 2;
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,(void *)_Src,_Size);
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    uVar4 = 0;
    if ((int)uVar7 < iVar1) {
      uVar4 = (uint)~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (local_a8 = (longlong)(int)uVar7, local_a0 = (longlong)iVar1,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    *(undefined2 *)((__return_storage_ptr__->Data).AllocatorInstance.Data + _Size) = 0;
  }
  icu_64::UnicodeString::~UnicodeString(&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

