// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// ConvertValue @ 142172d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TConvertIntToEnumProperty<signed_char>::ConvertValue
          (schar param_1,FByteProperty *param_2,UEnum *param_3,void *param_4,FPropertyTag *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName this;
  ulonglong uVar4;
  ulonglong uVar5;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar5 = (ulonglong)param_1;
  if (((byte)param_1 < 0x80) ||
     (bVar3 = UEnum::IsValidEnumValue(param_3,(ulonglong)(byte)param_1), !bVar3)) {
    if (2 < (byte)LogClass._0_1_) {
      UEnum::GetMaxEnumValue(param_3);
      this = UEnum::GetNameByValue(param_3,(long64)local_res20);
      ::FName::ToString((FName *)this,&local_38);
      bVar3 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      local_res10[0] = (FName)param_3->_padding_;
      ::FName::ToString(local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_void___cdecl_TConvertIntToEnumProperty<signed_char>::ConvertValue(signed_char,FByteProperty*___ptr64,UEnum*___ptr64,void*___ptr64,FPropertyTag_const&___ptr64)'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = UEnum::GetMaxEnumValue(param_3);
    uVar5 = uVar4 & 0xff;
    if (((uVar4 != uVar5) || ((longlong)uVar4 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_5->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_2->_padding_ <= iVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_4 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(char *)((longlong)param_4 +
           (longlong)*(int *)((longlong)&param_2->_padding_ + 4) +
           (longlong)iVar1 * (longlong)*(int *)((longlong)&param_2->_padding_ + 4)) = (char)uVar5;
  return;
}

// ConvertValue @ 142172f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TConvertIntToEnumProperty<short>::ConvertValue
          (short param_1,FByteProperty *param_2,UEnum *param_3,void *param_4,FPropertyTag *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName this;
  ulonglong uVar4;
  ulonglong uVar5;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar5 = (ulonglong)param_1;
  if ((0xff < param_1) || (bVar3 = UEnum::IsValidEnumValue(param_3,uVar5 & 0xff), !bVar3)) {
    if (2 < (byte)LogClass._0_1_) {
      UEnum::GetMaxEnumValue(param_3);
      this = UEnum::GetNameByValue(param_3,(long64)local_res20);
      ::FName::ToString((FName *)this,&local_38);
      bVar3 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      local_res10[0] = (FName)param_3->_padding_;
      ::FName::ToString(local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_void___cdecl_TConvertIntToEnumProperty<short>::ConvertValue(short,FByteProperty*___ptr64,UEnum*___ptr64,void*___ptr64,FPropertyTag_const&___ptr64)'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = UEnum::GetMaxEnumValue(param_3);
    uVar5 = uVar4 & 0xff;
    if (((uVar4 != uVar5) || ((longlong)uVar4 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_5->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_2->_padding_ <= iVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_4 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(char *)((longlong)param_4 +
           (longlong)*(int *)((longlong)&param_2->_padding_ + 4) +
           (longlong)iVar1 * (longlong)*(int *)((longlong)&param_2->_padding_ + 4)) = (char)uVar5;
  return;
}

// ConvertValue @ 1421731c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TConvertIntToEnumProperty<unsigned_short>::ConvertValue
          (ushort param_1,FByteProperty *param_2,UEnum *param_3,void *param_4,FPropertyTag *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName this;
  ulonglong uVar4;
  ulonglong uVar5;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar5 = (ulonglong)param_1;
  if ((0xff < param_1) || (bVar3 = UEnum::IsValidEnumValue(param_3,uVar5 & 0xff), !bVar3)) {
    if (2 < (byte)LogClass._0_1_) {
      UEnum::GetMaxEnumValue(param_3);
      this = UEnum::GetNameByValue(param_3,(long64)local_res20);
      ::FName::ToString((FName *)this,&local_38);
      bVar3 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      local_res10[0] = (FName)param_3->_padding_;
      ::FName::ToString(local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_void___cdecl_TConvertIntToEnumProperty<unsigned_short>::ConvertValue(unsigned_short,FByteProperty*___ptr64,UEnum*___ptr64,void*___ptr64,FPropertyTag_const&___ptr64)'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = UEnum::GetMaxEnumValue(param_3);
    uVar5 = uVar4 & 0xff;
    if (((uVar4 != uVar5) || ((longlong)uVar4 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_5->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_2->_padding_ <= iVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_4 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(char *)((longlong)param_4 +
           (longlong)*(int *)((longlong)&param_2->_padding_ + 4) +
           (longlong)iVar1 * (longlong)*(int *)((longlong)&param_2->_padding_ + 4)) = (char)uVar5;
  return;
}

// ConvertValue @ 142173400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TConvertIntToEnumProperty<int>::ConvertValue
          (int param_1,FByteProperty *param_2,UEnum *param_3,void *param_4,FPropertyTag *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName this;
  ulonglong uVar4;
  ulonglong uVar5;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar5 = (ulonglong)param_1;
  if ((0xff < param_1) || (bVar3 = UEnum::IsValidEnumValue(param_3,uVar5 & 0xff), !bVar3)) {
    if (2 < (byte)LogClass._0_1_) {
      UEnum::GetMaxEnumValue(param_3);
      this = UEnum::GetNameByValue(param_3,(long64)local_res20);
      ::FName::ToString((FName *)this,&local_38);
      bVar3 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      local_res10[0] = (FName)param_3->_padding_;
      ::FName::ToString(local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_void___cdecl_TConvertIntToEnumProperty<int>::ConvertValue(int,FByteProperty*___ptr64,UEnum*___ptr64,void*___ptr64,FPropertyTag_const&___ptr64)'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = UEnum::GetMaxEnumValue(param_3);
    uVar5 = uVar4 & 0xff;
    if (((uVar4 != uVar5) || ((longlong)uVar4 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_5->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_2->_padding_ <= iVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_4 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(char *)((longlong)param_4 +
           (longlong)*(int *)((longlong)&param_2->_padding_ + 4) +
           (longlong)iVar1 * (longlong)*(int *)((longlong)&param_2->_padding_ + 4)) = (char)uVar5;
  return;
}

// ConvertValue @ 142173640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TConvertIntToEnumProperty<unsigned_int>::ConvertValue
          (uint param_1,FByteProperty *param_2,UEnum *param_3,void *param_4,FPropertyTag *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName this;
  ulonglong uVar4;
  ulonglong uVar5;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar5 = (ulonglong)param_1;
  if ((0xff < param_1) || (bVar3 = UEnum::IsValidEnumValue(param_3,uVar5 & 0xff), !bVar3)) {
    if (2 < (byte)LogClass._0_1_) {
      UEnum::GetMaxEnumValue(param_3);
      this = UEnum::GetNameByValue(param_3,(long64)local_res20);
      ::FName::ToString((FName *)this,&local_38);
      bVar3 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      local_res10[0] = (FName)param_3->_padding_;
      ::FName::ToString(local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_void___cdecl_TConvertIntToEnumProperty<unsigned_int>::ConvertValue(unsigned_int,FByteProperty*___ptr64,UEnum*___ptr64,void*___ptr64,FPropertyTag_const&___ptr64)'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = UEnum::GetMaxEnumValue(param_3);
    uVar5 = uVar4 & 0xff;
    if (((uVar4 != uVar5) || ((longlong)uVar4 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_5->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_2->_padding_ <= iVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_4 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(char *)((longlong)param_4 +
           (longlong)*(int *)((longlong)&param_2->_padding_ + 4) +
           (longlong)iVar1 * (longlong)*(int *)((longlong)&param_2->_padding_ + 4)) = (char)uVar5;
  return;
}

// ConvertValue @ 142173880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TConvertIntToEnumProperty<__int64>::ConvertValue
          (long64 param_1,FByteProperty *param_2,UEnum *param_3,void *param_4,FPropertyTag *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName this;
  ulonglong uVar4;
  FName local_res8;
  undefined1 local_res10 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((0xff < param_1) || (bVar3 = UEnum::IsValidEnumValue(param_3,param_1 & 0xff), !bVar3)) {
    if (2 < (byte)LogClass._0_1_) {
      UEnum::GetMaxEnumValue(param_3);
      this = UEnum::GetNameByValue(param_3,(long64)local_res10);
      ::FName::ToString((FName *)this,&local_38);
      bVar3 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      local_res8 = (FName)param_3->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_void___cdecl_TConvertIntToEnumProperty<__int64>::ConvertValue(__int64,FByteProperty*___ptr64,UEnum*___ptr64,void*___ptr64,FPropertyTag_const&___ptr64)'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = UEnum::GetMaxEnumValue(param_3);
    param_1 = uVar4 & 0xff;
    if (((uVar4 != param_1) || ((longlong)uVar4 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_5->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_2->_padding_ <= iVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_4 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(char *)((longlong)param_4 +
           (longlong)*(int *)((longlong)&param_2->_padding_ + 4) +
           (longlong)iVar1 * (longlong)*(int *)((longlong)&param_2->_padding_ + 4)) = (char)param_1;
  return;
}

// ConvertValue @ 142173ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TConvertIntToEnumProperty<unsigned___int64>::ConvertValue
          (ulong64 param_1,FByteProperty *param_2,UEnum *param_3,void *param_4,FPropertyTag *param_5
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName this;
  ulonglong uVar4;
  FName local_res8;
  undefined1 local_res10 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((0xff < param_1) || (bVar3 = UEnum::IsValidEnumValue(param_3,param_1 & 0xff), !bVar3)) {
    if (2 < (byte)LogClass._0_1_) {
      UEnum::GetMaxEnumValue(param_3);
      this = UEnum::GetNameByValue(param_3,(long64)local_res10);
      ::FName::ToString((FName *)this,&local_38);
      bVar3 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      local_res8 = (FName)param_3->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_void___cdecl_TConvertIntToEnumProperty<unsigned___int64>::ConvertValue(unsigned___int64,FByteProperty*___ptr64,UEnum*___ptr64,void*___ptr64,FPropertyTag_const&___ptr64)'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = UEnum::GetMaxEnumValue(param_3);
    param_1 = uVar4 & 0xff;
    if (((uVar4 != param_1) || ((longlong)uVar4 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_5->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_2->_padding_ <= iVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_4 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(char *)((longlong)param_4 +
           (longlong)*(int *)((longlong)&param_2->_padding_ + 4) +
           (longlong)iVar1 * (longlong)*(int *)((longlong)&param_2->_padding_ + 4)) = (char)param_1;
  return;
}

