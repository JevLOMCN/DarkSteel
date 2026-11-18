// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 89

// TConvertAndSet<signed_char,unsigned_char> @ 141f5bda0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<signed_char,unsigned_char> * __thiscall
TProperty_Numeric<unsigned_char>::TConvertAndSet<signed_char,unsigned_char>::
TConvertAndSet<signed_char,unsigned_char>
          (TConvertAndSet<signed_char,unsigned_char> *this,TProperty_Numeric<unsigned_char> *param_1
          ,FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  TConvertAndSet<signed_char,unsigned_char> *pTVar7;
  FArchive *pFVar8;
  char local_res8 [8];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  plVar2 = *(longlong **)(*(longlong *)param_2 + 8);
  pcVar3 = *(char **)plVar2[1];
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((char *)((undefined8 *)plVar2[1])[1] < pcVar3 + 1) {
    (**(code **)(*plVar2 + 0x188))(plVar2,local_res8,1);
  }
  else {
    local_res8[0] = *pcVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  cVar5 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,unsigned_char> *)(*pcVar4)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,unsigned_char> *)(*pcVar4)();
    return pTVar7;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = cVar5;
  if ((2 < (byte)LogClass._0_1_) && ((local_res8[0] < '\0' || (cVar5 != local_res8[0])))) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_char>::TConvertAndSet<signed_char,unsigned_char>::TConvertAndSet<signed_char,unsigned_char>(TProperty_Numeric<unsigned_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<signed_char,int> @ 141f5c010

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<signed_char,int> * __thiscall
TProperty_Numeric<int>::TConvertAndSet<signed_char,int>::TConvertAndSet<signed_char,int>
          (TConvertAndSet<signed_char,int> *this,TProperty_Numeric<int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  TConvertAndSet<signed_char,int> *pTVar7;
  FArchive *pFVar8;
  int iVar9;
  char local_res8 [8];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  plVar2 = *(longlong **)(*(longlong *)param_2 + 8);
  pcVar3 = *(char **)plVar2[1];
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((char *)((undefined8 *)plVar2[1])[1] < pcVar3 + 1) {
    (**(code **)(*plVar2 + 0x188))(plVar2,local_res8,1);
  }
  else {
    local_res8[0] = *pcVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  cVar5 = local_res8[0];
  iVar9 = (int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,int> *)(*pcVar4)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,int> *)(*pcVar4)();
    return pTVar7;
  }
  *(int *)((longlong)param_3 +
          (longlong)*(int *)&param_1->field_0x44 +
          (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = iVar9;
  if ((2 < (byte)LogClass._0_1_) && (cVar5 != local_res8[0])) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<int>::TConvertAndSet<signed_char,int>::TConvertAndSet<signed_char,int>(TProperty_Numeric<int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<signed_char,unsigned_int> @ 141f5c280

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<signed_char,unsigned_int> * __thiscall
TProperty_Numeric<unsigned_int>::TConvertAndSet<signed_char,unsigned_int>::
TConvertAndSet<signed_char,unsigned_int>
          (TConvertAndSet<signed_char,unsigned_int> *this,TProperty_Numeric<unsigned_int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  TConvertAndSet<signed_char,unsigned_int> *pTVar7;
  FArchive *pFVar8;
  int iVar9;
  char local_res8 [8];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  plVar2 = *(longlong **)(*(longlong *)param_2 + 8);
  pcVar3 = *(char **)plVar2[1];
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((char *)((undefined8 *)plVar2[1])[1] < pcVar3 + 1) {
    (**(code **)(*plVar2 + 0x188))(plVar2,local_res8,1);
  }
  else {
    local_res8[0] = *pcVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  cVar5 = local_res8[0];
  iVar9 = (int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,unsigned_int> *)(*pcVar4)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,unsigned_int> *)(*pcVar4)();
    return pTVar7;
  }
  *(int *)((longlong)param_3 +
          (longlong)*(int *)&param_1->field_0x44 +
          (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = iVar9;
  if ((2 < (byte)LogClass._0_1_) && ((local_res8[0] < '\0' || (cVar5 != local_res8[0])))) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_int>::TConvertAndSet<signed_char,unsigned_int>::TConvertAndSet<signed_char,unsigned_int>(TProperty_Numeric<unsigned_int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<signed_char,float> @ 141f5c4f0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<signed_char,float> * __thiscall
TProperty_Numeric<float>::TConvertAndSet<signed_char,float>::TConvertAndSet<signed_char,float>
          (TConvertAndSet<signed_char,float> *this,TProperty_Numeric<float> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TConvertAndSet<signed_char,float> *pTVar7;
  FArchive *pFVar8;
  char local_res8 [8];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  plVar2 = *(longlong **)(*(longlong *)param_2 + 8);
  pcVar3 = *(char **)plVar2[1];
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((char *)((undefined8 *)plVar2[1])[1] < pcVar3 + 1) {
    (**(code **)(*plVar2 + 0x188))(plVar2,local_res8,1);
  }
  else {
    local_res8[0] = *pcVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  iVar6 = (int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,float> *)(*pcVar4)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,float> *)(*pcVar4)();
    return pTVar7;
  }
  *(float *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (float)iVar6;
  if ((2 < (byte)LogClass._0_1_) && ((char)(int)(float)iVar6 != local_res8[0])) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_68);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<float>::TConvertAndSet<signed_char,float>::TConvertAndSet<signed_char,float>(TProperty_Numeric<float>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<signed_char,double> @ 141f5c790

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<signed_char,double> * __thiscall
TProperty_Numeric<double>::TConvertAndSet<signed_char,double>::TConvertAndSet<signed_char,double>
          (TConvertAndSet<signed_char,double> *this,TProperty_Numeric<double> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TConvertAndSet<signed_char,double> *pTVar7;
  FArchive *pFVar8;
  char local_res8 [8];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  plVar2 = *(longlong **)(*(longlong *)param_2 + 8);
  pcVar3 = *(char **)plVar2[1];
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((char *)((undefined8 *)plVar2[1])[1] < pcVar3 + 1) {
    (**(code **)(*plVar2 + 0x188))(plVar2,local_res8,1);
  }
  else {
    local_res8[0] = *pcVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  iVar6 = (int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,double> *)(*pcVar4)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,double> *)(*pcVar4)();
    return pTVar7;
  }
  *(double *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = (double)iVar6;
  if ((2 < (byte)LogClass._0_1_) && ((char)(int)(double)iVar6 != local_res8[0])) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_68);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<double>::TConvertAndSet<signed_char,double>::TConvertAndSet<signed_char,double>(TProperty_Numeric<double>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<signed_char,__int64> @ 141f5ca30

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<signed_char,__int64> * __thiscall
TProperty_Numeric<__int64>::TConvertAndSet<signed_char,__int64>::TConvertAndSet<signed_char,__int64>
          (TConvertAndSet<signed_char,__int64> *this,TProperty_Numeric<__int64> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  TConvertAndSet<signed_char,__int64> *pTVar7;
  FArchive *pFVar8;
  longlong lVar9;
  char local_res8 [8];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  plVar2 = *(longlong **)(*(longlong *)param_2 + 8);
  pcVar3 = *(char **)plVar2[1];
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((char *)((undefined8 *)plVar2[1])[1] < pcVar3 + 1) {
    (**(code **)(*plVar2 + 0x188))(plVar2,local_res8,1);
  }
  else {
    local_res8[0] = *pcVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  cVar5 = local_res8[0];
  lVar9 = (longlong)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,__int64> *)(*pcVar4)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,__int64> *)(*pcVar4)();
    return pTVar7;
  }
  *(longlong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = lVar9;
  if ((2 < (byte)LogClass._0_1_) && (cVar5 != local_res8[0])) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%lld");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<__int64>::TConvertAndSet<signed_char,__int64>::TConvertAndSet<signed_char,__int64>(TProperty_Numeric<__int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<signed_char,unsigned___int64> @ 141f5cca0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<signed_char,unsigned___int64> * __thiscall
TProperty_Numeric<unsigned___int64>::TConvertAndSet<signed_char,unsigned___int64>::
TConvertAndSet<signed_char,unsigned___int64>
          (TConvertAndSet<signed_char,unsigned___int64> *this,
          TProperty_Numeric<unsigned___int64> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  TConvertAndSet<signed_char,unsigned___int64> *pTVar7;
  FArchive *pFVar8;
  longlong lVar9;
  char local_res8 [8];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  plVar2 = *(longlong **)(*(longlong *)param_2 + 8);
  pcVar3 = *(char **)plVar2[1];
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((char *)((undefined8 *)plVar2[1])[1] < pcVar3 + 1) {
    (**(code **)(*plVar2 + 0x188))(plVar2,local_res8,1);
  }
  else {
    local_res8[0] = *pcVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  cVar5 = local_res8[0];
  lVar9 = (longlong)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,unsigned___int64> *)(*pcVar4)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,unsigned___int64> *)(*pcVar4)();
    return pTVar7;
  }
  *(longlong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = lVar9;
  if ((2 < (byte)LogClass._0_1_) && ((local_res8[0] < '\0' || (cVar5 != local_res8[0])))) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%llu");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned___int64>::TConvertAndSet<signed_char,unsigned___int64>::TConvertAndSet<signed_char,unsigned___int64>(TProperty_Numeric<unsigned___int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<short,unsigned_char> @ 141f5cf10

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<short,unsigned_char> * __thiscall
TProperty_Numeric<unsigned_char>::TConvertAndSet<short,unsigned_char>::
TConvertAndSet<short,unsigned_char>
          (TConvertAndSet<short,unsigned_char> *this,TProperty_Numeric<unsigned_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  TConvertAndSet<short,unsigned_char> *pTVar7;
  FArchive *pFVar8;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar8 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar8->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar8->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar8->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar8,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 2;
  }
  uVar5 = local_res8[0];
  uVar4 = (undefined1)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<short,unsigned_char> *)(*pcVar3)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<short,unsigned_char> *)(*pcVar3)();
    return pTVar7;
  }
  *(undefined1 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) &&
     (((short)local_res8[0] < 0 || ((uVar5 & 0xff) != local_res8[0])))) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_char>::TConvertAndSet<short,unsigned_char>::TConvertAndSet<short,unsigned_char>(TProperty_Numeric<unsigned_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<short,int> @ 141f5d190

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<short,int> * __thiscall
TProperty_Numeric<int>::TConvertAndSet<short,int>::TConvertAndSet<short,int>
          (TConvertAndSet<short,int> *this,TProperty_Numeric<int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<short,int> *pTVar6;
  FArchive *pFVar7;
  int iVar8;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  iVar8 = (int)(short)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,int> *)(*pcVar3)();
    return pTVar6;
  }
  *(int *)((longlong)param_3 +
          (longlong)*(int *)&param_1->field_0x44 +
          (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = iVar8;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<int>::TConvertAndSet<short,int>::TConvertAndSet<short,int>(TProperty_Numeric<int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<short,unsigned_int> @ 141f5d410

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<short,unsigned_int> * __thiscall
TProperty_Numeric<unsigned_int>::TConvertAndSet<short,unsigned_int>::
TConvertAndSet<short,unsigned_int>
          (TConvertAndSet<short,unsigned_int> *this,TProperty_Numeric<unsigned_int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<short,unsigned_int> *pTVar6;
  FArchive *pFVar7;
  int iVar8;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  iVar8 = (int)(short)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,unsigned_int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,unsigned_int> *)(*pcVar3)();
    return pTVar6;
  }
  *(int *)((longlong)param_3 +
          (longlong)*(int *)&param_1->field_0x44 +
          (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = iVar8;
  if ((2 < (byte)LogClass._0_1_) && (((short)local_res8[0] < 0 || (uVar4 != local_res8[0])))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_int>::TConvertAndSet<short,unsigned_int>::TConvertAndSet<short,unsigned_int>(TProperty_Numeric<unsigned_int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<short,float> @ 141f5d690

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<short,float> * __thiscall
TProperty_Numeric<float>::TConvertAndSet<short,float>::TConvertAndSet<short,float>
          (TConvertAndSet<short,float> *this,TProperty_Numeric<float> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TConvertAndSet<short,float> *pTVar6;
  FArchive *pFVar7;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  iVar5 = (int)(short)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,float> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,float> *)(*pcVar3)();
    return pTVar6;
  }
  *(float *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (float)iVar5;
  if ((2 < (byte)LogClass._0_1_) && ((ushort)(int)(float)iVar5 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_68);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<float>::TConvertAndSet<short,float>::TConvertAndSet<short,float>(TProperty_Numeric<float>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<short,double> @ 141f5d940

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<short,double> * __thiscall
TProperty_Numeric<double>::TConvertAndSet<short,double>::TConvertAndSet<short,double>
          (TConvertAndSet<short,double> *this,TProperty_Numeric<double> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TConvertAndSet<short,double> *pTVar6;
  FArchive *pFVar7;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  iVar5 = (int)(short)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,double> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,double> *)(*pcVar3)();
    return pTVar6;
  }
  *(double *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = (double)iVar5;
  if ((2 < (byte)LogClass._0_1_) && ((ushort)(int)(double)iVar5 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_68);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<double>::TConvertAndSet<short,double>::TConvertAndSet<short,double>(TProperty_Numeric<double>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<short,__int64> @ 141f5dbf0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<short,__int64> * __thiscall
TProperty_Numeric<__int64>::TConvertAndSet<short,__int64>::TConvertAndSet<short,__int64>
          (TConvertAndSet<short,__int64> *this,TProperty_Numeric<__int64> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<short,__int64> *pTVar6;
  FArchive *pFVar7;
  longlong lVar8;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  lVar8 = (longlong)(short)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,__int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,__int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(longlong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = lVar8;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%lld");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<__int64>::TConvertAndSet<short,__int64>::TConvertAndSet<short,__int64>(TProperty_Numeric<__int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<short,unsigned___int64> @ 141f5de70

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<short,unsigned___int64> * __thiscall
TProperty_Numeric<unsigned___int64>::TConvertAndSet<short,unsigned___int64>::
TConvertAndSet<short,unsigned___int64>
          (TConvertAndSet<short,unsigned___int64> *this,TProperty_Numeric<unsigned___int64> *param_1
          ,FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<short,unsigned___int64> *pTVar6;
  FArchive *pFVar7;
  longlong lVar8;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  lVar8 = (longlong)(short)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(longlong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = lVar8;
  if ((2 < (byte)LogClass._0_1_) && (((short)local_res8[0] < 0 || (uVar4 != local_res8[0])))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%llu");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned___int64>::TConvertAndSet<short,unsigned___int64>::TConvertAndSet<short,unsigned___int64>(TProperty_Numeric<unsigned___int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_short,unsigned_char> @ 141f5e0f0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_short,unsigned_char> * __thiscall
TProperty_Numeric<unsigned_char>::TConvertAndSet<unsigned_short,unsigned_char>::
TConvertAndSet<unsigned_short,unsigned_char>
          (TConvertAndSet<unsigned_short,unsigned_char> *this,
          TProperty_Numeric<unsigned_char> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  TConvertAndSet<unsigned_short,unsigned_char> *pTVar7;
  FArchive *pFVar8;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar8 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar8->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar8->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar8->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar8,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 2;
  }
  uVar5 = local_res8[0];
  uVar4 = (undefined1)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<unsigned_short,unsigned_char> *)(*pcVar3)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<unsigned_short,unsigned_char> *)(*pcVar3)();
    return pTVar7;
  }
  *(undefined1 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && ((uVar5 & 0xff) != local_res8[0])) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_char>::TConvertAndSet<unsigned_short,unsigned_char>::TConvertAndSet<unsigned_short,unsigned_char>(TProperty_Numeric<unsigned_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_short,int> @ 141f5e370

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_short,int> * __thiscall
TProperty_Numeric<int>::TConvertAndSet<unsigned_short,int>::TConvertAndSet<unsigned_short,int>
          (TConvertAndSet<unsigned_short,int> *this,TProperty_Numeric<int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<unsigned_short,int> *pTVar6;
  FArchive *pFVar7;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,int> *)(*pcVar3)();
    return pTVar6;
  }
  *(uint *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (uint)uVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<int>::TConvertAndSet<unsigned_short,int>::TConvertAndSet<unsigned_short,int>(TProperty_Numeric<int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_short,unsigned_int> @ 141f5e5f0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_short,unsigned_int> * __thiscall
TProperty_Numeric<unsigned_int>::TConvertAndSet<unsigned_short,unsigned_int>::
TConvertAndSet<unsigned_short,unsigned_int>
          (TConvertAndSet<unsigned_short,unsigned_int> *this,
          TProperty_Numeric<unsigned_int> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<unsigned_short,unsigned_int> *pTVar6;
  FArchive *pFVar7;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,unsigned_int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,unsigned_int> *)(*pcVar3)();
    return pTVar6;
  }
  *(uint *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (uint)uVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_int>::TConvertAndSet<unsigned_short,unsigned_int>::TConvertAndSet<unsigned_short,unsigned_int>(TProperty_Numeric<unsigned_int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_short,float> @ 141f5e870

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_short,float> * __thiscall
TProperty_Numeric<float>::TConvertAndSet<unsigned_short,float>::TConvertAndSet<unsigned_short,float>
          (TConvertAndSet<unsigned_short,float> *this,TProperty_Numeric<float> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TConvertAndSet<unsigned_short,float> *pTVar6;
  FArchive *pFVar7;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar5 = (uint)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,float> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,float> *)(*pcVar3)();
    return pTVar6;
  }
  *(float *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (float)uVar5;
  if ((2 < (byte)LogClass._0_1_) && ((ushort)(int)(float)uVar5 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_68);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<float>::TConvertAndSet<unsigned_short,float>::TConvertAndSet<unsigned_short,float>(TProperty_Numeric<float>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_short,double> @ 141f5eb20

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_short,double> * __thiscall
TProperty_Numeric<double>::TConvertAndSet<unsigned_short,double>::
TConvertAndSet<unsigned_short,double>
          (TConvertAndSet<unsigned_short,double> *this,TProperty_Numeric<double> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TConvertAndSet<unsigned_short,double> *pTVar6;
  FArchive *pFVar7;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar5 = (uint)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,double> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,double> *)(*pcVar3)();
    return pTVar6;
  }
  *(double *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = (double)uVar5;
  if ((2 < (byte)LogClass._0_1_) && ((ushort)(int)(double)uVar5 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_68);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<double>::TConvertAndSet<unsigned_short,double>::TConvertAndSet<unsigned_short,double>(TProperty_Numeric<double>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_short,__int64> @ 141f5edd0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_short,__int64> * __thiscall
TProperty_Numeric<__int64>::TConvertAndSet<unsigned_short,__int64>::
TConvertAndSet<unsigned_short,__int64>
          (TConvertAndSet<unsigned_short,__int64> *this,TProperty_Numeric<__int64> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<unsigned_short,__int64> *pTVar6;
  FArchive *pFVar7;
  ulonglong uVar8;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  uVar8 = (ulonglong)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,__int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,__int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(ulonglong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar8;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%lld");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<__int64>::TConvertAndSet<unsigned_short,__int64>::TConvertAndSet<unsigned_short,__int64>(TProperty_Numeric<__int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_short,unsigned___int64> @ 141f5f050

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_short,unsigned___int64> * __thiscall
TProperty_Numeric<unsigned___int64>::TConvertAndSet<unsigned_short,unsigned___int64>::
TConvertAndSet<unsigned_short,unsigned___int64>
          (TConvertAndSet<unsigned_short,unsigned___int64> *this,
          TProperty_Numeric<unsigned___int64> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<unsigned_short,unsigned___int64> *pTVar6;
  FArchive *pFVar7;
  ulonglong uVar8;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  uVar8 = (ulonglong)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(ulonglong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar8;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%llu");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned___int64>::TConvertAndSet<unsigned_short,unsigned___int64>::TConvertAndSet<unsigned_short,unsigned___int64>(TProperty_Numeric<unsigned___int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<int,unsigned_char> @ 141f5f2d0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<int,unsigned_char> * __thiscall
TProperty_Numeric<unsigned_char>::TConvertAndSet<int,unsigned_char>::
TConvertAndSet<int,unsigned_char>
          (TConvertAndSet<int,unsigned_char> *this,TProperty_Numeric<unsigned_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  TConvertAndSet<int,unsigned_char> *pTVar7;
  FArchive *pFVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar8 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar8->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar8->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar8->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar8,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 4;
  }
  uVar5 = local_res8[0];
  uVar4 = (undefined1)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<int,unsigned_char> *)(*pcVar3)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<int,unsigned_char> *)(*pcVar3)();
    return pTVar7;
  }
  *(undefined1 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (((int)local_res8[0] < 0 || ((uVar5 & 0xff) != local_res8[0]))))
  {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_char>::TConvertAndSet<int,unsigned_char>::TConvertAndSet<int,unsigned_char>(TProperty_Numeric<unsigned_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<int,int> @ 141f5f550

TConvertAndSet<int,int> * __thiscall
TProperty_Numeric<int>::TConvertAndSet<int,int>::TConvertAndSet<int,int>
          (TConvertAndSet<int,int> *this,TProperty_Numeric<int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  FArchive *this_00;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TConvertAndSet<int,int> *pTVar6;
  uint local_res8 [2];
  
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if ((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<int,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<int,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(uint *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = uVar4;
  return this;
}

// TConvertAndSet<int,unsigned_int> @ 141f5f660

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<int,unsigned_int> * __thiscall
TProperty_Numeric<unsigned_int>::TConvertAndSet<int,unsigned_int>::TConvertAndSet<int,unsigned_int>
          (TConvertAndSet<int,unsigned_int> *this,TProperty_Numeric<unsigned_int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TConvertAndSet<int,unsigned_int> *pTVar6;
  FArchive *pFVar7;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<int,unsigned_int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<int,unsigned_int> *)(*pcVar3)();
    return pTVar6;
  }
  *(uint *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (((int)local_res8[0] < 0 || (uVar4 != local_res8[0])))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_int>::TConvertAndSet<int,unsigned_int>::TConvertAndSet<int,unsigned_int>(TProperty_Numeric<unsigned_int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<int,float> @ 141f5f8e0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<int,float> * __thiscall
TProperty_Numeric<float>::TConvertAndSet<int,float>::TConvertAndSet<int,float>
          (TConvertAndSet<int,float> *this,TProperty_Numeric<float> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<int,float> *pTVar5;
  FArchive *pFVar6;
  float fVar7;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  fVar7 = (float)(int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<int,float> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<int,float> *)(*pcVar3)();
    return pTVar5;
  }
  *(float *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = fVar7;
  if ((2 < (byte)LogClass._0_1_) && ((int)fVar7 != local_res8[0])) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%d");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_68);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<float>::TConvertAndSet<int,float>::TConvertAndSet<int,float>(TProperty_Numeric<float>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<int,double> @ 141f5fb80

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<int,double> * __thiscall
TProperty_Numeric<double>::TConvertAndSet<int,double>::TConvertAndSet<int,double>
          (TConvertAndSet<int,double> *this,TProperty_Numeric<double> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<int,double> *pTVar5;
  FArchive *pFVar6;
  double dVar7;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  dVar7 = (double)(int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<int,double> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<int,double> *)(*pcVar3)();
    return pTVar5;
  }
  *(double *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = dVar7;
  if ((2 < (byte)LogClass._0_1_) && ((int)dVar7 != local_res8[0])) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%d");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_68);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<double>::TConvertAndSet<int,double>::TConvertAndSet<int,double>(TProperty_Numeric<double>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<int,__int64> @ 141f5fe20

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<int,__int64> * __thiscall
TProperty_Numeric<__int64>::TConvertAndSet<int,__int64>::TConvertAndSet<int,__int64>
          (TConvertAndSet<int,__int64> *this,TProperty_Numeric<__int64> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TConvertAndSet<int,__int64> *pTVar6;
  FArchive *pFVar7;
  longlong lVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  uVar4 = local_res8[0];
  lVar8 = (longlong)(int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<int,__int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<int,__int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(longlong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = lVar8;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%lld");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<__int64>::TConvertAndSet<int,__int64>::TConvertAndSet<int,__int64>(TProperty_Numeric<__int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<int,unsigned___int64> @ 141f600a0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<int,unsigned___int64> * __thiscall
TProperty_Numeric<unsigned___int64>::TConvertAndSet<int,unsigned___int64>::
TConvertAndSet<int,unsigned___int64>
          (TConvertAndSet<int,unsigned___int64> *this,TProperty_Numeric<unsigned___int64> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TConvertAndSet<int,unsigned___int64> *pTVar6;
  FArchive *pFVar7;
  longlong lVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  uVar4 = local_res8[0];
  lVar8 = (longlong)(int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<int,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<int,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(longlong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = lVar8;
  if ((2 < (byte)LogClass._0_1_) && (((int)local_res8[0] < 0 || (uVar4 != local_res8[0])))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%llu");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned___int64>::TConvertAndSet<int,unsigned___int64>::TConvertAndSet<int,unsigned___int64>(TProperty_Numeric<unsigned___int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_int,unsigned_char> @ 141f60320

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_int,unsigned_char> * __thiscall
TProperty_Numeric<unsigned_char>::TConvertAndSet<unsigned_int,unsigned_char>::
TConvertAndSet<unsigned_int,unsigned_char>
          (TConvertAndSet<unsigned_int,unsigned_char> *this,
          TProperty_Numeric<unsigned_char> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  TConvertAndSet<unsigned_int,unsigned_char> *pTVar7;
  FArchive *pFVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar8 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar8->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar8->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar8->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar8,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 4;
  }
  uVar5 = local_res8[0];
  uVar4 = (undefined1)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<unsigned_int,unsigned_char> *)(*pcVar3)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<unsigned_int,unsigned_char> *)(*pcVar3)();
    return pTVar7;
  }
  *(undefined1 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && ((uVar5 & 0xff) != local_res8[0])) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_char>::TConvertAndSet<unsigned_int,unsigned_char>::TConvertAndSet<unsigned_int,unsigned_char>(TProperty_Numeric<unsigned_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_int,int> @ 141f605a0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_int,int> * __thiscall
TProperty_Numeric<int>::TConvertAndSet<unsigned_int,int>::TConvertAndSet<unsigned_int,int>
          (TConvertAndSet<unsigned_int,int> *this,TProperty_Numeric<int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TConvertAndSet<unsigned_int,int> *pTVar6;
  FArchive *pFVar7;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,int> *)(*pcVar3)();
    return pTVar6;
  }
  *(uint *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<int>::TConvertAndSet<unsigned_int,int>::TConvertAndSet<unsigned_int,int>(TProperty_Numeric<int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_int,unsigned_int> @ 141f60820

TConvertAndSet<unsigned_int,unsigned_int> * __thiscall
TProperty_Numeric<unsigned_int>::TConvertAndSet<unsigned_int,unsigned_int>::
TConvertAndSet<unsigned_int,unsigned_int>
          (TConvertAndSet<unsigned_int,unsigned_int> *this,TProperty_Numeric<unsigned_int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  FArchive *this_00;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TConvertAndSet<unsigned_int,unsigned_int> *pTVar6;
  uint local_res8 [2];
  
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if ((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<unsigned_int,unsigned_int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<unsigned_int,unsigned_int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(uint *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = uVar4;
  return this;
}

// TConvertAndSet<unsigned_int,float> @ 141f60930

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_int,float> * __thiscall
TProperty_Numeric<float>::TConvertAndSet<unsigned_int,float>::TConvertAndSet<unsigned_int,float>
          (TConvertAndSet<unsigned_int,float> *this,TProperty_Numeric<float> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  TConvertAndSet<unsigned_int,float> *pTVar6;
  FArchive *pFVar7;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  uVar5 = (ulonglong)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,float> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,float> *)(*pcVar3)();
    return pTVar6;
  }
  *(float *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (float)uVar5;
  if ((2 < (byte)LogClass._0_1_) && ((uint)(longlong)(float)uVar5 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_68);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<float>::TConvertAndSet<unsigned_int,float>::TConvertAndSet<unsigned_int,float>(TProperty_Numeric<float>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_int,double> @ 141f60bd0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_int,double> * __thiscall
TProperty_Numeric<double>::TConvertAndSet<unsigned_int,double>::TConvertAndSet<unsigned_int,double>
          (TConvertAndSet<unsigned_int,double> *this,TProperty_Numeric<double> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  TConvertAndSet<unsigned_int,double> *pTVar6;
  FArchive *pFVar7;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  uVar5 = (ulonglong)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,double> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,double> *)(*pcVar3)();
    return pTVar6;
  }
  *(double *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = (double)uVar5;
  if ((2 < (byte)LogClass._0_1_) && ((uint)(longlong)(double)uVar5 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_68);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<double>::TConvertAndSet<unsigned_int,double>::TConvertAndSet<unsigned_int,double>(TProperty_Numeric<double>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_int,__int64> @ 141f60e70

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_int,__int64> * __thiscall
TProperty_Numeric<__int64>::TConvertAndSet<unsigned_int,__int64>::
TConvertAndSet<unsigned_int,__int64>
          (TConvertAndSet<unsigned_int,__int64> *this,TProperty_Numeric<__int64> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TConvertAndSet<unsigned_int,__int64> *pTVar6;
  FArchive *pFVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  uVar4 = local_res8[0];
  uVar8 = (ulonglong)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,__int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,__int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(ulonglong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar8;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%lld");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<__int64>::TConvertAndSet<unsigned_int,__int64>::TConvertAndSet<unsigned_int,__int64>(TProperty_Numeric<__int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_int,unsigned___int64> @ 141f610f0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_int,unsigned___int64> * __thiscall
TProperty_Numeric<unsigned___int64>::TConvertAndSet<unsigned_int,unsigned___int64>::
TConvertAndSet<unsigned_int,unsigned___int64>
          (TConvertAndSet<unsigned_int,unsigned___int64> *this,
          TProperty_Numeric<unsigned___int64> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TConvertAndSet<unsigned_int,unsigned___int64> *pTVar6;
  FArchive *pFVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  uVar4 = local_res8[0];
  uVar8 = (ulonglong)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(ulonglong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar8;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%llu");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned___int64>::TConvertAndSet<unsigned_int,unsigned___int64>::TConvertAndSet<unsigned_int,unsigned___int64>(TProperty_Numeric<unsigned___int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<float,unsigned_char> @ 141f61370

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<float,unsigned_char> * __thiscall
TProperty_Numeric<unsigned_char>::TConvertAndSet<float,unsigned_char>::
TConvertAndSet<float,unsigned_char>
          (TConvertAndSet<float,unsigned_char> *this,TProperty_Numeric<unsigned_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<float,unsigned_char> *pTVar5;
  FArchive *pFVar6;
  uint uVar7;
  float local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((float *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pfVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  uVar7 = (uint)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,unsigned_char> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,unsigned_char> *)(*pcVar3)();
    return pTVar5;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (char)uVar7;
  if ((2 < (byte)LogClass._0_1_) &&
     ((local_res8[0] < 0.0 || ((float)(uVar7 & 0xff) != local_res8[0])))) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_char>::TConvertAndSet<float,unsigned_char>::TConvertAndSet<float,unsigned_char>(TProperty_Numeric<unsigned_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<float,int> @ 141f61610

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<float,int> * __thiscall
TProperty_Numeric<int>::TConvertAndSet<float,int>::TConvertAndSet<float,int>
          (TConvertAndSet<float,int> *this,TProperty_Numeric<int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<float,int> *pTVar5;
  FArchive *pFVar6;
  int iVar7;
  float local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((float *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pfVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  iVar7 = (int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,int> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,int> *)(*pcVar3)();
    return pTVar5;
  }
  *(int *)((longlong)param_3 +
          (longlong)*(int *)&param_1->field_0x44 +
          (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = iVar7;
  if ((2 < (byte)LogClass._0_1_) && ((float)iVar7 != local_res8[0])) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<int>::TConvertAndSet<float,int>::TConvertAndSet<float,int>(TProperty_Numeric<int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<float,unsigned_int> @ 141f618a0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<float,unsigned_int> * __thiscall
TProperty_Numeric<unsigned_int>::TConvertAndSet<float,unsigned_int>::
TConvertAndSet<float,unsigned_int>
          (TConvertAndSet<float,unsigned_int> *this,TProperty_Numeric<unsigned_int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<float,unsigned_int> *pTVar5;
  FArchive *pFVar6;
  ulonglong uVar7;
  float local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((float *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pfVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  uVar7 = (ulonglong)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,unsigned_int> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,unsigned_int> *)(*pcVar3)();
    return pTVar5;
  }
  *(int *)((longlong)param_3 +
          (longlong)*(int *)&param_1->field_0x44 +
          (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (int)uVar7;
  if ((2 < (byte)LogClass._0_1_) &&
     ((local_res8[0] < 0.0 || ((float)(uVar7 & 0xffffffff) != local_res8[0])))) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_int>::TConvertAndSet<float,unsigned_int>::TConvertAndSet<float,unsigned_int>(TProperty_Numeric<unsigned_int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<float,float> @ 141f61b40

TConvertAndSet<float,float> * __thiscall
TProperty_Numeric<float>::TConvertAndSet<float,float>::TConvertAndSet<float,float>
          (TConvertAndSet<float,float> *this,TProperty_Numeric<float> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  FArchive *this_00;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TConvertAndSet<float,float> *pTVar6;
  uint local_res8 [2];
  
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if ((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<float,float> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<float,float> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(uint *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = uVar4;
  return this;
}

// TConvertAndSet<float,double> @ 141f61c60

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<float,double> * __thiscall
TProperty_Numeric<double>::TConvertAndSet<float,double>::TConvertAndSet<float,double>
          (TConvertAndSet<float,double> *this,TProperty_Numeric<double> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  TConvertAndSet<float,double> *pTVar7;
  FArchive *pFVar8;
  float local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar8 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar8->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((float *)(*(undefined8 **)&pFVar8->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar8->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar8,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pfVar2;
    **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 4;
  }
  fVar5 = local_res8[0];
  dVar4 = (double)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<float,double> *)(*pcVar3)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<float,double> *)(*pcVar3)();
    return pTVar7;
  }
  *(double *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = dVar4;
  if ((2 < (byte)LogClass._0_1_) && (fVar5 != local_res8[0])) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%f");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_68);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<double>::TConvertAndSet<float,double>::TConvertAndSet<float,double>(TProperty_Numeric<double>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<float,__int64> @ 141f61f10

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<float,__int64> * __thiscall
TProperty_Numeric<__int64>::TConvertAndSet<float,__int64>::TConvertAndSet<float,__int64>
          (TConvertAndSet<float,__int64> *this,TProperty_Numeric<__int64> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<float,__int64> *pTVar5;
  FArchive *pFVar6;
  longlong lVar7;
  float local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((float *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pfVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  lVar7 = (longlong)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,__int64> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,__int64> *)(*pcVar3)();
    return pTVar5;
  }
  *(longlong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = lVar7;
  if ((2 < (byte)LogClass._0_1_) && ((float)lVar7 != local_res8[0])) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%lld");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<__int64>::TConvertAndSet<float,__int64>::TConvertAndSet<float,__int64>(TProperty_Numeric<__int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<float,unsigned___int64> @ 141f621a0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<float,unsigned___int64> * __thiscall
TProperty_Numeric<unsigned___int64>::TConvertAndSet<float,unsigned___int64>::
TConvertAndSet<float,unsigned___int64>
          (TConvertAndSet<float,unsigned___int64> *this,TProperty_Numeric<unsigned___int64> *param_1
          ,FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TConvertAndSet<float,unsigned___int64> *pTVar6;
  FArchive *pFVar7;
  float fVar8;
  float local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((float *)(*(undefined8 **)&pFVar7->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pfVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  lVar5 = 0;
  fVar8 = local_res8[0];
  if ((__real_5f000000 <= local_res8[0]) &&
     (fVar8 = local_res8[0] - __real_5f000000, fVar8 < __real_5f000000)) {
    lVar5 = -0x8000000000000000;
  }
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<float,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<float,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(longlong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = (longlong)fVar8 + lVar5;
  if ((2 < (byte)LogClass._0_1_) &&
     ((local_res8[0] < 0.0 || ((float)(ulonglong)((longlong)fVar8 + lVar5) != local_res8[0])))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%llu");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned___int64>::TConvertAndSet<float,unsigned___int64>::TConvertAndSet<float,unsigned___int64>(TProperty_Numeric<unsigned___int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<double,unsigned_char> @ 141f62480

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<double,unsigned_char> * __thiscall
TProperty_Numeric<unsigned_char>::TConvertAndSet<double,unsigned_char>::
TConvertAndSet<double,unsigned_char>
          (TConvertAndSet<double,unsigned_char> *this,TProperty_Numeric<unsigned_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<double,unsigned_char> *pTVar5;
  FArchive *pFVar6;
  uint uVar7;
  double local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pdVar2 = (double *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((double *)(*(longlong **)&pFVar6->field_0x8)[1] < pdVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = *pdVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  uVar7 = (uint)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,unsigned_char> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,unsigned_char> *)(*pcVar3)();
    return pTVar5;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (char)uVar7;
  if ((2 < (byte)LogClass._0_1_) && ((local_res8 < 0.0 || ((double)(uVar7 & 0xff) != local_res8))))
  {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_char>::TConvertAndSet<double,unsigned_char>::TConvertAndSet<double,unsigned_char>(TProperty_Numeric<unsigned_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<double,int> @ 141f62720

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<double,int> * __thiscall
TProperty_Numeric<int>::TConvertAndSet<double,int>::TConvertAndSet<double,int>
          (TConvertAndSet<double,int> *this,TProperty_Numeric<int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<double,int> *pTVar5;
  FArchive *pFVar6;
  int iVar7;
  double local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pdVar2 = (double *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((double *)(*(longlong **)&pFVar6->field_0x8)[1] < pdVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = *pdVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  iVar7 = (int)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,int> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,int> *)(*pcVar3)();
    return pTVar5;
  }
  *(int *)((longlong)param_3 +
          (longlong)*(int *)&param_1->field_0x44 +
          (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = iVar7;
  if ((2 < (byte)LogClass._0_1_) && ((double)iVar7 != local_res8)) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<int>::TConvertAndSet<double,int>::TConvertAndSet<double,int>(TProperty_Numeric<int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<double,unsigned_int> @ 141f629b0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<double,unsigned_int> * __thiscall
TProperty_Numeric<unsigned_int>::TConvertAndSet<double,unsigned_int>::
TConvertAndSet<double,unsigned_int>
          (TConvertAndSet<double,unsigned_int> *this,TProperty_Numeric<unsigned_int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<double,unsigned_int> *pTVar5;
  FArchive *pFVar6;
  ulonglong uVar7;
  double local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pdVar2 = (double *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((double *)(*(longlong **)&pFVar6->field_0x8)[1] < pdVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = *pdVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  uVar7 = (ulonglong)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,unsigned_int> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,unsigned_int> *)(*pcVar3)();
    return pTVar5;
  }
  *(int *)((longlong)param_3 +
          (longlong)*(int *)&param_1->field_0x44 +
          (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (int)uVar7;
  if ((2 < (byte)LogClass._0_1_) &&
     ((local_res8 < 0.0 || ((double)(uVar7 & 0xffffffff) != local_res8)))) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_int>::TConvertAndSet<double,unsigned_int>::TConvertAndSet<double,unsigned_int>(TProperty_Numeric<unsigned_int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<double,float> @ 141f62c50

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<double,float> * __thiscall
TProperty_Numeric<float>::TConvertAndSet<double,float>::TConvertAndSet<double,float>
          (TConvertAndSet<double,float> *this,TProperty_Numeric<float> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<double,float> *pTVar5;
  FArchive *pFVar6;
  float fVar7;
  double local_res8;
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pdVar2 = (double *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((double *)(*(longlong **)&pFVar6->field_0x8)[1] < pdVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = *pdVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  fVar7 = (float)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,float> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,float> *)(*pcVar3)();
    return pTVar5;
  }
  *(float *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = fVar7;
  if ((2 < (byte)LogClass._0_1_) && ((double)fVar7 != local_res8)) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_68);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<float>::TConvertAndSet<double,float>::TConvertAndSet<double,float>(TProperty_Numeric<float>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<double,double> @ 141f62f00

TConvertAndSet<double,double> * __thiscall
TProperty_Numeric<double>::TConvertAndSet<double,double>::TConvertAndSet<double,double>
          (TConvertAndSet<double,double> *this,TProperty_Numeric<double> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  FArchive *this_00;
  ulong64 *puVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  TConvertAndSet<double,double> *pTVar6;
  ulong64 local_res8;
  
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&this_00->field_0x8;
  if ((ulong64 *)(*(longlong **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
  }
  uVar4 = local_res8;
  iVar1 = param_4->ArrayIndex;
  if ((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<double,double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<double,double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(ulong64 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  return this;
}

// TConvertAndSet<double,__int64> @ 141f63020

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<double,__int64> * __thiscall
TProperty_Numeric<__int64>::TConvertAndSet<double,__int64>::TConvertAndSet<double,__int64>
          (TConvertAndSet<double,__int64> *this,TProperty_Numeric<__int64> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<double,__int64> *pTVar5;
  FArchive *pFVar6;
  longlong lVar7;
  double local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pdVar2 = (double *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((double *)(*(longlong **)&pFVar6->field_0x8)[1] < pdVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = *pdVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  lVar7 = (longlong)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,__int64> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,__int64> *)(*pcVar3)();
    return pTVar5;
  }
  *(longlong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = lVar7;
  if ((2 < (byte)LogClass._0_1_) && ((double)lVar7 != local_res8)) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%lld");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<__int64>::TConvertAndSet<double,__int64>::TConvertAndSet<double,__int64>(TProperty_Numeric<__int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<double,unsigned___int64> @ 141f632b0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<double,unsigned___int64> * __thiscall
TProperty_Numeric<unsigned___int64>::TConvertAndSet<double,unsigned___int64>::
TConvertAndSet<double,unsigned___int64>
          (TConvertAndSet<double,unsigned___int64> *this,
          TProperty_Numeric<unsigned___int64> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TConvertAndSet<double,unsigned___int64> *pTVar6;
  FArchive *pFVar7;
  double dVar8;
  double local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  pdVar2 = (double *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((double *)(*(longlong **)&pFVar7->field_0x8)[1] < pdVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = *pdVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  lVar5 = 0;
  dVar8 = local_res8;
  if ((__real_43e0000000000000 <= local_res8) &&
     (dVar8 = local_res8 - __real_43e0000000000000, dVar8 < __real_43e0000000000000)) {
    lVar5 = -0x8000000000000000;
  }
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<double,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<double,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(longlong *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = (longlong)dVar8 + lVar5;
  if ((2 < (byte)LogClass._0_1_) &&
     ((local_res8 < 0.0 || ((double)(ulonglong)((longlong)dVar8 + lVar5) != local_res8)))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%llu");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned___int64>::TConvertAndSet<double,unsigned___int64>::TConvertAndSet<double,unsigned___int64>(TProperty_Numeric<unsigned___int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<__int64,unsigned_char> @ 141f63590

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<__int64,unsigned_char> * __thiscall
TProperty_Numeric<unsigned_char>::TConvertAndSet<__int64,unsigned_char>::
TConvertAndSet<__int64,unsigned_char>
          (TConvertAndSet<__int64,unsigned_char> *this,TProperty_Numeric<unsigned_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  TConvertAndSet<__int64,unsigned_char> *pTVar6;
  FArchive *pFVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulonglong *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulonglong *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  uVar4 = (undefined1)local_res8;
  uVar8 = local_res8 & 0xff;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,unsigned_char> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,unsigned_char> *)(*pcVar3)();
    return pTVar6;
  }
  *(undefined1 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (((longlong)local_res8 < 0 || (uVar8 != local_res8)))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%lld");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_char>::TConvertAndSet<__int64,unsigned_char>::TConvertAndSet<__int64,unsigned_char>(TProperty_Numeric<unsigned_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<__int64,int> @ 141f63810

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<__int64,int> * __thiscall
TProperty_Numeric<int>::TConvertAndSet<__int64,int>::TConvertAndSet<__int64,int>
          (TConvertAndSet<__int64,int> *this,TProperty_Numeric<int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  TConvertAndSet<__int64,int> *pTVar6;
  FArchive *pFVar7;
  ulong64 uVar8;
  ulong64 local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulong64 *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  iVar4 = (int)local_res8;
  uVar8 = (ulong64)(int)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,int> *)(*pcVar3)();
    return pTVar6;
  }
  *(int *)((longlong)param_3 +
          (longlong)*(int *)&param_1->field_0x44 +
          (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = iVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%lld");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<int>::TConvertAndSet<__int64,int>::TConvertAndSet<__int64,int>(TProperty_Numeric<int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<__int64,unsigned_int> @ 141f63a90

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<__int64,unsigned_int> * __thiscall
TProperty_Numeric<unsigned_int>::TConvertAndSet<__int64,unsigned_int>::
TConvertAndSet<__int64,unsigned_int>
          (TConvertAndSet<__int64,unsigned_int> *this,TProperty_Numeric<unsigned_int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  TConvertAndSet<__int64,unsigned_int> *pTVar6;
  FArchive *pFVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulonglong *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulonglong *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  uVar4 = (undefined4)local_res8;
  uVar8 = local_res8 & 0xffffffff;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,unsigned_int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,unsigned_int> *)(*pcVar3)();
    return pTVar6;
  }
  *(undefined4 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (((longlong)local_res8 < 0 || (uVar8 != local_res8)))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%lld");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_int>::TConvertAndSet<__int64,unsigned_int>::TConvertAndSet<__int64,unsigned_int>(TProperty_Numeric<unsigned_int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<__int64,float> @ 141f63d10

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<__int64,float> * __thiscall
TProperty_Numeric<float>::TConvertAndSet<__int64,float>::TConvertAndSet<__int64,float>
          (TConvertAndSet<__int64,float> *this,TProperty_Numeric<float> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<__int64,float> *pTVar5;
  FArchive *pFVar6;
  float fVar7;
  ulong64 local_res8;
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulong64 *)(*(longlong **)&pFVar6->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  fVar7 = (float)(longlong)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<__int64,float> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<__int64,float> *)(*pcVar3)();
    return pTVar5;
  }
  *(float *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = fVar7;
  if ((2 < (byte)LogClass._0_1_) && ((longlong)fVar7 != local_res8)) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%lld");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_68);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<float>::TConvertAndSet<__int64,float>::TConvertAndSet<__int64,float>(TProperty_Numeric<float>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<__int64,double> @ 141f63fb0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<__int64,double> * __thiscall
TProperty_Numeric<double>::TConvertAndSet<__int64,double>::TConvertAndSet<__int64,double>
          (TConvertAndSet<__int64,double> *this,TProperty_Numeric<double> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TConvertAndSet<__int64,double> *pTVar6;
  FArchive *pFVar7;
  ulong64 local_res8;
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulong64 *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  dVar4 = (double)(longlong)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,double> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,double> *)(*pcVar3)();
    return pTVar6;
  }
  *(double *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = dVar4;
  if ((2 < (byte)LogClass._0_1_) && ((longlong)dVar4 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    ::FString::PrintfImpl(&local_78,L"%f");
    ::FString::PrintfImpl(&local_88,L"%lld");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_68);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
    }
    else {
      ::FString::FString(&local_98,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<double>::TConvertAndSet<__int64,double>::TConvertAndSet<__int64,double>(TProperty_Numeric<double>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  return this;
}

// TConvertAndSet<__int64,__int64> @ 141f64250

TConvertAndSet<__int64,__int64> * __thiscall
TProperty_Numeric<__int64>::TConvertAndSet<__int64,__int64>::TConvertAndSet<__int64,__int64>
          (TConvertAndSet<__int64,__int64> *this,TProperty_Numeric<__int64> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  FArchive *this_00;
  ulong64 *puVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  TConvertAndSet<__int64,__int64> *pTVar6;
  ulong64 local_res8;
  
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&this_00->field_0x8;
  if ((ulong64 *)(*(longlong **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
  }
  uVar4 = local_res8;
  iVar1 = param_4->ArrayIndex;
  if ((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<__int64,__int64> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<__int64,__int64> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(ulong64 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  return this;
}

// TConvertAndSet<__int64,unsigned___int64> @ 141f64360

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<__int64,unsigned___int64> * __thiscall
TProperty_Numeric<unsigned___int64>::TConvertAndSet<__int64,unsigned___int64>::
TConvertAndSet<__int64,unsigned___int64>
          (TConvertAndSet<__int64,unsigned___int64> *this,
          TProperty_Numeric<unsigned___int64> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  TConvertAndSet<__int64,unsigned___int64> *pTVar6;
  FArchive *pFVar7;
  ulong64 local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulong64 *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  uVar4 = local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,unsigned___int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(ulong64 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (((longlong)local_res8 < 0 || (uVar4 != local_res8)))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%llu");
    ::FString::PrintfImpl(&local_78,L"%lld");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned___int64>::TConvertAndSet<__int64,unsigned___int64>::TConvertAndSet<__int64,unsigned___int64>(TProperty_Numeric<unsigned___int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned___int64,unsigned_char> @ 141f645e0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned___int64,unsigned_char> * __thiscall
TProperty_Numeric<unsigned_char>::TConvertAndSet<unsigned___int64,unsigned_char>::
TConvertAndSet<unsigned___int64,unsigned_char>
          (TConvertAndSet<unsigned___int64,unsigned_char> *this,
          TProperty_Numeric<unsigned_char> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  TConvertAndSet<unsigned___int64,unsigned_char> *pTVar6;
  FArchive *pFVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulonglong *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulonglong *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  uVar4 = (undefined1)local_res8;
  uVar8 = local_res8 & 0xff;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,unsigned_char> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,unsigned_char> *)(*pcVar3)();
    return pTVar6;
  }
  *(undefined1 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%llu");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_char>::TConvertAndSet<unsigned___int64,unsigned_char>::TConvertAndSet<unsigned___int64,unsigned_char>(TProperty_Numeric<unsigned_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned___int64,int> @ 141f64860

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned___int64,int> * __thiscall
TProperty_Numeric<int>::TConvertAndSet<unsigned___int64,int>::TConvertAndSet<unsigned___int64,int>
          (TConvertAndSet<unsigned___int64,int> *this,TProperty_Numeric<int> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  TConvertAndSet<unsigned___int64,int> *pTVar6;
  FArchive *pFVar7;
  ulong64 uVar8;
  ulong64 local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulong64 *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  iVar4 = (int)local_res8;
  uVar8 = (ulong64)(int)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,int> *)(*pcVar3)();
    return pTVar6;
  }
  *(int *)((longlong)param_3 +
          (longlong)*(int *)&param_1->field_0x44 +
          (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = iVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%llu");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<int>::TConvertAndSet<unsigned___int64,int>::TConvertAndSet<unsigned___int64,int>(TProperty_Numeric<int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned___int64,unsigned_int> @ 141f64ae0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned___int64,unsigned_int> * __thiscall
TProperty_Numeric<unsigned_int>::TConvertAndSet<unsigned___int64,unsigned_int>::
TConvertAndSet<unsigned___int64,unsigned_int>
          (TConvertAndSet<unsigned___int64,unsigned_int> *this,
          TProperty_Numeric<unsigned_int> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  TConvertAndSet<unsigned___int64,unsigned_int> *pTVar6;
  FArchive *pFVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulonglong *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulonglong *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  uVar4 = (undefined4)local_res8;
  uVar8 = local_res8 & 0xffffffff;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,unsigned_int> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,unsigned_int> *)(*pcVar3)();
    return pTVar6;
  }
  *(undefined4 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%llu");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_int>::TConvertAndSet<unsigned___int64,unsigned_int>::TConvertAndSet<unsigned___int64,unsigned_int>(TProperty_Numeric<unsigned_int>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned___int64,float> @ 141f64d60

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned___int64,float> * __thiscall
TProperty_Numeric<float>::TConvertAndSet<unsigned___int64,float>::
TConvertAndSet<unsigned___int64,float>
          (TConvertAndSet<unsigned___int64,float> *this,TProperty_Numeric<float> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<unsigned___int64,float> *pTVar5;
  FArchive *pFVar6;
  longlong lVar7;
  float fVar8;
  ulonglong local_res8;
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulonglong *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulonglong *)(*(longlong **)&pFVar6->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  fVar8 = (float)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<unsigned___int64,float> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<unsigned___int64,float> *)(*pcVar3)();
    return pTVar5;
  }
  *(float *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = fVar8;
  if (2 < (byte)LogClass._0_1_) {
    lVar7 = 0;
    if ((__real_5f000000 <= fVar8) && (fVar8 = fVar8 - __real_5f000000, fVar8 < __real_5f000000)) {
      lVar7 = -0x8000000000000000;
    }
    if ((longlong)fVar8 + lVar7 != local_res8) {
      pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
      (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
      ::FString::PrintfImpl(&local_78,L"%f");
      ::FString::PrintfImpl(&local_88,L"%llu");
      pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
      (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_68);
      bVar4 = IsThisNotNull(param_1,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
      }
      else {
        ::FString::FString(&local_98,L"None");
      }
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_TProperty_Numeric<float>::TConvertAndSet<unsigned___int64,float>::TConvertAndSet<unsigned___int64,float>(TProperty_Numeric<float>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_68[0] != (void *)0x0) {
        FMemory::Free(local_68[0]);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
  }
  return this;
}

// TConvertAndSet<unsigned___int64,double> @ 141f65050

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned___int64,double> * __thiscall
TProperty_Numeric<double>::TConvertAndSet<unsigned___int64,double>::
TConvertAndSet<unsigned___int64,double>
          (TConvertAndSet<unsigned___int64,double> *this,TProperty_Numeric<double> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<unsigned___int64,double> *pTVar5;
  FArchive *pFVar6;
  longlong lVar7;
  double dVar8;
  ulonglong local_res8;
  FSlotBase local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [4];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulonglong *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulonglong *)(*(longlong **)&pFVar6->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  dVar8 = (double)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<unsigned___int64,double> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<unsigned___int64,double> *)(*pcVar3)();
    return pTVar5;
  }
  *(double *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = dVar8;
  if (2 < (byte)LogClass._0_1_) {
    lVar7 = 0;
    if ((__real_43e0000000000000 <= dVar8) &&
       (dVar8 = dVar8 - __real_43e0000000000000, dVar8 < __real_43e0000000000000)) {
      lVar7 = -0x8000000000000000;
    }
    if ((longlong)dVar8 + lVar7 != local_res8) {
      pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
      (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
      ::FString::PrintfImpl(&local_78,L"%f");
      ::FString::PrintfImpl(&local_88,L"%llu");
      pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
      (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_68);
      bVar4 = IsThisNotNull(param_1,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&param_1->field_0x20,&local_98);
      }
      else {
        ::FString::FString(&local_98,L"None");
      }
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_TProperty_Numeric<double>::TConvertAndSet<unsigned___int64,double>::TConvertAndSet<unsigned___int64,double>(TProperty_Numeric<double>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_68[0] != (void *)0x0) {
        FMemory::Free(local_68[0]);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
  }
  return this;
}

// TConvertAndSet<unsigned___int64,__int64> @ 141f65340

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned___int64,__int64> * __thiscall
TProperty_Numeric<__int64>::TConvertAndSet<unsigned___int64,__int64>::
TConvertAndSet<unsigned___int64,__int64>
          (TConvertAndSet<unsigned___int64,__int64> *this,TProperty_Numeric<__int64> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  TConvertAndSet<unsigned___int64,__int64> *pTVar6;
  FArchive *pFVar7;
  ulong64 local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulong64 *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  uVar4 = local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,__int64> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,__int64> *)(*pcVar3)();
    return pTVar6;
  }
  *(ulong64 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%lld");
    ::FString::PrintfImpl(&local_78,L"%llu");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<__int64>::TConvertAndSet<unsigned___int64,__int64>::TConvertAndSet<unsigned___int64,__int64>(TProperty_Numeric<__int64>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned___int64,unsigned___int64> @ 141f655c0

TConvertAndSet<unsigned___int64,unsigned___int64> * __thiscall
TProperty_Numeric<unsigned___int64>::TConvertAndSet<unsigned___int64,unsigned___int64>::
TConvertAndSet<unsigned___int64,unsigned___int64>
          (TConvertAndSet<unsigned___int64,unsigned___int64> *this,
          TProperty_Numeric<unsigned___int64> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  FArchive *this_00;
  ulong64 *puVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  TConvertAndSet<unsigned___int64,unsigned___int64> *pTVar6;
  ulong64 local_res8;
  
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&this_00->field_0x8;
  if ((ulong64 *)(*(longlong **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
  }
  uVar4 = local_res8;
  iVar1 = param_4->ArrayIndex;
  if ((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<unsigned___int64,unsigned___int64> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<unsigned___int64,unsigned___int64> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(ulong64 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  return this;
}

// TConvertAndSet<signed_char,short> @ 14215b750

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<signed_char,short> * __thiscall
TProperty_Numeric<short>::TConvertAndSet<signed_char,short>::TConvertAndSet<signed_char,short>
          (TConvertAndSet<signed_char,short> *this,TProperty_Numeric<short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  TConvertAndSet<signed_char,short> *pTVar7;
  FArchive *pFVar8;
  char local_res8 [8];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  plVar2 = *(longlong **)(*(longlong *)param_2 + 8);
  pcVar3 = *(char **)plVar2[1];
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((char *)((undefined8 *)plVar2[1])[1] < pcVar3 + 1) {
    (**(code **)(*plVar2 + 0x188))(plVar2,local_res8,1);
  }
  else {
    local_res8[0] = *pcVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  cVar5 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,short> *)(*pcVar4)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,short> *)(*pcVar4)();
    return pTVar7;
  }
  *(short *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (short)cVar5;
  if ((2 < (byte)LogClass._0_1_) && (cVar5 != local_res8[0])) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<short>::TConvertAndSet<signed_char,short>::TConvertAndSet<signed_char,short>(TProperty_Numeric<short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<signed_char,unsigned_short> @ 14215b9c0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<signed_char,unsigned_short> * __thiscall
TProperty_Numeric<unsigned_short>::TConvertAndSet<signed_char,unsigned_short>::
TConvertAndSet<signed_char,unsigned_short>
          (TConvertAndSet<signed_char,unsigned_short> *this,
          TProperty_Numeric<unsigned_short> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  TConvertAndSet<signed_char,unsigned_short> *pTVar7;
  FArchive *pFVar8;
  char local_res8 [8];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  plVar2 = *(longlong **)(*(longlong *)param_2 + 8);
  pcVar3 = *(char **)plVar2[1];
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((char *)((undefined8 *)plVar2[1])[1] < pcVar3 + 1) {
    (**(code **)(*plVar2 + 0x188))(plVar2,local_res8,1);
  }
  else {
    local_res8[0] = *pcVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  cVar5 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,unsigned_short> *)(*pcVar4)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<signed_char,unsigned_short> *)(*pcVar4)();
    return pTVar7;
  }
  *(short *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (short)cVar5;
  if ((2 < (byte)LogClass._0_1_) && ((local_res8[0] < '\0' || (cVar5 != local_res8[0])))) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_short>::TConvertAndSet<signed_char,unsigned_short>::TConvertAndSet<signed_char,unsigned_short>(TProperty_Numeric<unsigned_short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<short,signed_char> @ 14215bc30

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<short,signed_char> * __thiscall
TProperty_Numeric<signed_char>::TConvertAndSet<short,signed_char>::TConvertAndSet<short,signed_char>
          (TConvertAndSet<short,signed_char> *this,TProperty_Numeric<signed_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  TConvertAndSet<short,signed_char> *pTVar6;
  FArchive *pFVar7;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  cVar4 = (char)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = cVar4;
  if ((2 < (byte)LogClass._0_1_) && ((short)cVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<signed_char>::TConvertAndSet<short,signed_char>::TConvertAndSet<short,signed_char>(TProperty_Numeric<signed_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<short,short> @ 14215beb0

TConvertAndSet<short,short> * __thiscall
TProperty_Numeric<short>::TConvertAndSet<short,short>::TConvertAndSet<short,short>
          (TConvertAndSet<short,short> *this,TProperty_Numeric<short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  FArchive *this_00;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<short,short> *pTVar6;
  ushort local_res8 [4];
  
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&this_00->field_0x8;
  if ((ushort *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if ((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<short,short> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<short,short> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(ushort *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  return this;
}

// TConvertAndSet<short,unsigned_short> @ 14215bfc0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<short,unsigned_short> * __thiscall
TProperty_Numeric<unsigned_short>::TConvertAndSet<short,unsigned_short>::
TConvertAndSet<short,unsigned_short>
          (TConvertAndSet<short,unsigned_short> *this,TProperty_Numeric<unsigned_short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<short,unsigned_short> *pTVar6;
  FArchive *pFVar7;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,unsigned_short> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<short,unsigned_short> *)(*pcVar3)();
    return pTVar6;
  }
  *(ushort *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (((short)local_res8[0] < 0 || (uVar4 != local_res8[0])))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_short>::TConvertAndSet<short,unsigned_short>::TConvertAndSet<short,unsigned_short>(TProperty_Numeric<unsigned_short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_short,signed_char> @ 14215c240

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_short,signed_char> * __thiscall
TProperty_Numeric<signed_char>::TConvertAndSet<unsigned_short,signed_char>::
TConvertAndSet<unsigned_short,signed_char>
          (TConvertAndSet<unsigned_short,signed_char> *this,TProperty_Numeric<signed_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  TConvertAndSet<unsigned_short,signed_char> *pTVar6;
  FArchive *pFVar7;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  cVar4 = (char)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = cVar4;
  if ((2 < (byte)LogClass._0_1_) && ((short)cVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<signed_char>::TConvertAndSet<unsigned_short,signed_char>::TConvertAndSet<unsigned_short,signed_char>(TProperty_Numeric<signed_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_short,short> @ 14215c4c0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_short,short> * __thiscall
TProperty_Numeric<short>::TConvertAndSet<unsigned_short,short>::TConvertAndSet<unsigned_short,short>
          (TConvertAndSet<unsigned_short,short> *this,TProperty_Numeric<short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<unsigned_short,short> *pTVar6;
  FArchive *pFVar7;
  ushort local_res8 [4];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,short> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_short,short> *)(*pcVar3)();
    return pTVar6;
  }
  *(ushort *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar4 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<short>::TConvertAndSet<unsigned_short,short>::TConvertAndSet<unsigned_short,short>(TProperty_Numeric<short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_short,unsigned_short> @ 14215c740

TConvertAndSet<unsigned_short,unsigned_short> * __thiscall
TProperty_Numeric<unsigned_short>::TConvertAndSet<unsigned_short,unsigned_short>::
TConvertAndSet<unsigned_short,unsigned_short>
          (TConvertAndSet<unsigned_short,unsigned_short> *this,
          TProperty_Numeric<unsigned_short> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  FArchive *this_00;
  ushort *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  TConvertAndSet<unsigned_short,unsigned_short> *pTVar6;
  ushort local_res8 [4];
  
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ushort *)**(undefined8 **)&this_00->field_0x8;
  if ((ushort *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 2;
  }
  uVar4 = local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if ((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<unsigned_short,unsigned_short> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TConvertAndSet<unsigned_short,unsigned_short> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(ushort *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  return this;
}

// TConvertAndSet<int,signed_char> @ 14215c850

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<int,signed_char> * __thiscall
TProperty_Numeric<signed_char>::TConvertAndSet<int,signed_char>::TConvertAndSet<int,signed_char>
          (TConvertAndSet<int,signed_char> *this,TProperty_Numeric<signed_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  TConvertAndSet<int,signed_char> *pTVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  cVar4 = (char)local_res8[0];
  uVar8 = (uint)(char)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<int,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<int,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = cVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<signed_char>::TConvertAndSet<int,signed_char>::TConvertAndSet<int,signed_char>(TProperty_Numeric<signed_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<int,short> @ 14215cad0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<int,short> * __thiscall
TProperty_Numeric<short>::TConvertAndSet<int,short>::TConvertAndSet<int,short>
          (TConvertAndSet<int,short> *this,TProperty_Numeric<short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  short sVar4;
  bool bVar5;
  TConvertAndSet<int,short> *pTVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  sVar4 = (short)local_res8[0];
  uVar8 = (uint)(short)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<int,short> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<int,short> *)(*pcVar3)();
    return pTVar6;
  }
  *(short *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = sVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<short>::TConvertAndSet<int,short>::TConvertAndSet<int,short>(TProperty_Numeric<short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<int,unsigned_short> @ 14215cd50

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<int,unsigned_short> * __thiscall
TProperty_Numeric<unsigned_short>::TConvertAndSet<int,unsigned_short>::
TConvertAndSet<int,unsigned_short>
          (TConvertAndSet<int,unsigned_short> *this,TProperty_Numeric<unsigned_short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  TConvertAndSet<int,unsigned_short> *pTVar7;
  FArchive *pFVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar8 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar8->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar8->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar8->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar8,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 4;
  }
  uVar5 = local_res8[0];
  uVar4 = (undefined2)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<int,unsigned_short> *)(*pcVar3)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<int,unsigned_short> *)(*pcVar3)();
    return pTVar7;
  }
  *(undefined2 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) &&
     (((int)local_res8[0] < 0 || ((uVar5 & 0xffff) != local_res8[0])))) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%d");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_short>::TConvertAndSet<int,unsigned_short>::TConvertAndSet<int,unsigned_short>(TProperty_Numeric<unsigned_short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_int,signed_char> @ 14215cfd0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_int,signed_char> * __thiscall
TProperty_Numeric<signed_char>::TConvertAndSet<unsigned_int,signed_char>::
TConvertAndSet<unsigned_int,signed_char>
          (TConvertAndSet<unsigned_int,signed_char> *this,TProperty_Numeric<signed_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  TConvertAndSet<unsigned_int,signed_char> *pTVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  cVar4 = (char)local_res8[0];
  uVar8 = (uint)(char)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = cVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<signed_char>::TConvertAndSet<unsigned_int,signed_char>::TConvertAndSet<unsigned_int,signed_char>(TProperty_Numeric<signed_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_int,short> @ 14215d250

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_int,short> * __thiscall
TProperty_Numeric<short>::TConvertAndSet<unsigned_int,short>::TConvertAndSet<unsigned_int,short>
          (TConvertAndSet<unsigned_int,short> *this,TProperty_Numeric<short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  short sVar4;
  bool bVar5;
  TConvertAndSet<unsigned_int,short> *pTVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  sVar4 = (short)local_res8[0];
  uVar8 = (uint)(short)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,short> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned_int,short> *)(*pcVar3)();
    return pTVar6;
  }
  *(short *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = sVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8[0])) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<short>::TConvertAndSet<unsigned_int,short>::TConvertAndSet<unsigned_int,short>(TProperty_Numeric<short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned_int,unsigned_short> @ 14215d4d0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned_int,unsigned_short> * __thiscall
TProperty_Numeric<unsigned_short>::TConvertAndSet<unsigned_int,unsigned_short>::
TConvertAndSet<unsigned_int,unsigned_short>
          (TConvertAndSet<unsigned_int,unsigned_short> *this,
          TProperty_Numeric<unsigned_short> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  TConvertAndSet<unsigned_int,unsigned_short> *pTVar7;
  FArchive *pFVar8;
  uint local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar8 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar8->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((uint *)(*(undefined8 **)&pFVar8->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar8->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar8,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 4;
  }
  uVar5 = local_res8[0];
  uVar4 = (undefined2)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<unsigned_int,unsigned_short> *)(*pcVar3)();
    return pTVar7;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TConvertAndSet<unsigned_int,unsigned_short> *)(*pcVar3)();
    return pTVar7;
  }
  *(undefined2 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && ((uVar5 & 0xffff) != local_res8[0])) {
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%u");
    pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar8 + 0x18))(pFVar8,local_58);
    bVar6 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_short>::TConvertAndSet<unsigned_int,unsigned_short>::TConvertAndSet<unsigned_int,unsigned_short>(TProperty_Numeric<unsigned_short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<float,signed_char> @ 14215d750

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<float,signed_char> * __thiscall
TProperty_Numeric<signed_char>::TConvertAndSet<float,signed_char>::TConvertAndSet<float,signed_char>
          (TConvertAndSet<float,signed_char> *this,TProperty_Numeric<signed_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<float,signed_char> *pTVar5;
  FArchive *pFVar6;
  int iVar7;
  float local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((float *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pfVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  iVar7 = (int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,signed_char> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,signed_char> *)(*pcVar3)();
    return pTVar5;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (char)iVar7;
  if ((2 < (byte)LogClass._0_1_) && ((float)(int)(char)iVar7 != local_res8[0])) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<signed_char>::TConvertAndSet<float,signed_char>::TConvertAndSet<float,signed_char>(TProperty_Numeric<signed_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<float,short> @ 14215d9e0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<float,short> * __thiscall
TProperty_Numeric<short>::TConvertAndSet<float,short>::TConvertAndSet<float,short>
          (TConvertAndSet<float,short> *this,TProperty_Numeric<short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<float,short> *pTVar5;
  FArchive *pFVar6;
  int iVar7;
  float local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((float *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pfVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  iVar7 = (int)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,short> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,short> *)(*pcVar3)();
    return pTVar5;
  }
  *(short *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (short)iVar7;
  if ((2 < (byte)LogClass._0_1_) && ((float)(int)(short)iVar7 != local_res8[0])) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<short>::TConvertAndSet<float,short>::TConvertAndSet<float,short>(TProperty_Numeric<short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<float,unsigned_short> @ 14215dc70

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<float,unsigned_short> * __thiscall
TProperty_Numeric<unsigned_short>::TConvertAndSet<float,unsigned_short>::
TConvertAndSet<float,unsigned_short>
          (TConvertAndSet<float,unsigned_short> *this,TProperty_Numeric<unsigned_short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<float,unsigned_short> *pTVar5;
  FArchive *pFVar6;
  uint uVar7;
  float local_res8 [2];
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((float *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pfVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  uVar7 = (uint)local_res8[0];
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,unsigned_short> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<float,unsigned_short> *)(*pcVar3)();
    return pTVar5;
  }
  *(short *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (short)uVar7;
  if ((2 < (byte)LogClass._0_1_) &&
     ((local_res8[0] < 0.0 || ((float)(uVar7 & 0xffff) != local_res8[0])))) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_short>::TConvertAndSet<float,unsigned_short>::TConvertAndSet<float,unsigned_short>(TProperty_Numeric<unsigned_short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<double,signed_char> @ 14215df10

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<double,signed_char> * __thiscall
TProperty_Numeric<signed_char>::TConvertAndSet<double,signed_char>::
TConvertAndSet<double,signed_char>
          (TConvertAndSet<double,signed_char> *this,TProperty_Numeric<signed_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<double,signed_char> *pTVar5;
  FArchive *pFVar6;
  int iVar7;
  double local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pdVar2 = (double *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((double *)(*(longlong **)&pFVar6->field_0x8)[1] < pdVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = *pdVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  iVar7 = (int)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,signed_char> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,signed_char> *)(*pcVar3)();
    return pTVar5;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (char)iVar7;
  if ((2 < (byte)LogClass._0_1_) && ((double)(int)(char)iVar7 != local_res8)) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<signed_char>::TConvertAndSet<double,signed_char>::TConvertAndSet<double,signed_char>(TProperty_Numeric<signed_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<double,short> @ 14215e1a0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<double,short> * __thiscall
TProperty_Numeric<short>::TConvertAndSet<double,short>::TConvertAndSet<double,short>
          (TConvertAndSet<double,short> *this,TProperty_Numeric<short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<double,short> *pTVar5;
  FArchive *pFVar6;
  int iVar7;
  double local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pdVar2 = (double *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((double *)(*(longlong **)&pFVar6->field_0x8)[1] < pdVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = *pdVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  iVar7 = (int)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,short> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,short> *)(*pcVar3)();
    return pTVar5;
  }
  *(short *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (short)iVar7;
  if ((2 < (byte)LogClass._0_1_) && ((double)(int)(short)iVar7 != local_res8)) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<short>::TConvertAndSet<double,short>::TConvertAndSet<double,short>(TProperty_Numeric<short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<double,unsigned_short> @ 14215e430

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<double,unsigned_short> * __thiscall
TProperty_Numeric<unsigned_short>::TConvertAndSet<double,unsigned_short>::
TConvertAndSet<double,unsigned_short>
          (TConvertAndSet<double,unsigned_short> *this,TProperty_Numeric<unsigned_short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TConvertAndSet<double,unsigned_short> *pTVar5;
  FArchive *pFVar6;
  uint uVar7;
  double local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
  pdVar2 = (double *)**(longlong **)&pFVar6->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((double *)(*(longlong **)&pFVar6->field_0x8)[1] < pdVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = *pdVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  uVar7 = (uint)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,unsigned_short> *)(*pcVar3)();
    return pTVar5;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TConvertAndSet<double,unsigned_short> *)(*pcVar3)();
    return pTVar5;
  }
  *(short *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = (short)uVar7;
  if ((2 < (byte)LogClass._0_1_) && ((local_res8 < 0.0 || ((double)(uVar7 & 0xffff) != local_res8)))
     ) {
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%f");
    pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar6 + 0x18))(pFVar6,local_58);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_short>::TConvertAndSet<double,unsigned_short>::TConvertAndSet<double,unsigned_short>(TProperty_Numeric<unsigned_short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<__int64,signed_char> @ 14215e6d0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<__int64,signed_char> * __thiscall
TProperty_Numeric<signed_char>::TConvertAndSet<__int64,signed_char>::
TConvertAndSet<__int64,signed_char>
          (TConvertAndSet<__int64,signed_char> *this,TProperty_Numeric<signed_char> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  TConvertAndSet<__int64,signed_char> *pTVar6;
  FArchive *pFVar7;
  ulong64 uVar8;
  ulong64 local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulong64 *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  cVar4 = (char)local_res8;
  uVar8 = (ulong64)(char)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = cVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%lld");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<signed_char>::TConvertAndSet<__int64,signed_char>::TConvertAndSet<__int64,signed_char>(TProperty_Numeric<signed_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<__int64,short> @ 14215e950

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<__int64,short> * __thiscall
TProperty_Numeric<short>::TConvertAndSet<__int64,short>::TConvertAndSet<__int64,short>
          (TConvertAndSet<__int64,short> *this,TProperty_Numeric<short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  short sVar4;
  bool bVar5;
  TConvertAndSet<__int64,short> *pTVar6;
  FArchive *pFVar7;
  ulong64 uVar8;
  ulong64 local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulong64 *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  sVar4 = (short)local_res8;
  uVar8 = (ulong64)(short)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,short> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,short> *)(*pcVar3)();
    return pTVar6;
  }
  *(short *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = sVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%lld");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<short>::TConvertAndSet<__int64,short>::TConvertAndSet<__int64,short>(TProperty_Numeric<short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<__int64,unsigned_short> @ 14215ebd0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<__int64,unsigned_short> * __thiscall
TProperty_Numeric<unsigned_short>::TConvertAndSet<__int64,unsigned_short>::
TConvertAndSet<__int64,unsigned_short>
          (TConvertAndSet<__int64,unsigned_short> *this,TProperty_Numeric<unsigned_short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  bool bVar5;
  TConvertAndSet<__int64,unsigned_short> *pTVar6;
  FArchive *pFVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulonglong *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulonglong *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  uVar4 = (undefined2)local_res8;
  uVar8 = local_res8 & 0xffff;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,unsigned_short> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<__int64,unsigned_short> *)(*pcVar3)();
    return pTVar6;
  }
  *(undefined2 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (((longlong)local_res8 < 0 || (uVar8 != local_res8)))) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%lld");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_short>::TConvertAndSet<__int64,unsigned_short>::TConvertAndSet<__int64,unsigned_short>(TProperty_Numeric<unsigned_short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned___int64,signed_char> @ 14215ee50

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned___int64,signed_char> * __thiscall
TProperty_Numeric<signed_char>::TConvertAndSet<unsigned___int64,signed_char>::
TConvertAndSet<unsigned___int64,signed_char>
          (TConvertAndSet<unsigned___int64,signed_char> *this,
          TProperty_Numeric<signed_char> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  TConvertAndSet<unsigned___int64,signed_char> *pTVar6;
  FArchive *pFVar7;
  ulong64 uVar8;
  ulong64 local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulong64 *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  cVar4 = (char)local_res8;
  uVar8 = (ulong64)(char)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,signed_char> *)(*pcVar3)();
    return pTVar6;
  }
  *(char *)((longlong)param_3 +
           (longlong)*(int *)&param_1->field_0x44 +
           (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = cVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%llu");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<signed_char>::TConvertAndSet<unsigned___int64,signed_char>::TConvertAndSet<unsigned___int64,signed_char>(TProperty_Numeric<signed_char>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned___int64,short> @ 14215f0d0

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned___int64,short> * __thiscall
TProperty_Numeric<short>::TConvertAndSet<unsigned___int64,short>::
TConvertAndSet<unsigned___int64,short>
          (TConvertAndSet<unsigned___int64,short> *this,TProperty_Numeric<short> *param_1,
          FStructuredArchiveSlot param_2,void *param_3,FPropertyTag *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  short sVar4;
  bool bVar5;
  TConvertAndSet<unsigned___int64,short> *pTVar6;
  FArchive *pFVar7;
  ulong64 uVar8;
  ulong64 local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulong64 *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulong64 *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  sVar4 = (short)local_res8;
  uVar8 = (ulong64)(short)local_res8;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,short> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,short> *)(*pcVar3)();
    return pTVar6;
  }
  *(short *)((longlong)param_3 +
            (longlong)*(int *)&param_1->field_0x44 +
            (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34) = sVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%llu");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<short>::TConvertAndSet<unsigned___int64,short>::TConvertAndSet<unsigned___int64,short>(TProperty_Numeric<short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

// TConvertAndSet<unsigned___int64,unsigned_short> @ 14215f350

/* WARNING: Enum "Type": Some values do not have unique names */

TConvertAndSet<unsigned___int64,unsigned_short> * __thiscall
TProperty_Numeric<unsigned_short>::TConvertAndSet<unsigned___int64,unsigned_short>::
TConvertAndSet<unsigned___int64,unsigned_short>
          (TConvertAndSet<unsigned___int64,unsigned_short> *this,
          TProperty_Numeric<unsigned_short> *param_1,FStructuredArchiveSlot param_2,void *param_3,
          FPropertyTag *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  bool bVar5;
  TConvertAndSet<unsigned___int64,unsigned_short> *pTVar6;
  FArchive *pFVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  FSlotBase local_res18 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (ulonglong *)**(longlong **)&pFVar7->field_0x8;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  if ((ulonglong *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&local_res8);
    }
  }
  else {
    local_res8 = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
  }
  uVar4 = (undefined2)local_res8;
  uVar8 = local_res8 & 0xffff;
  iVar1 = param_4->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&param_1->field_0x30 <= iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,unsigned_short> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_3 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TConvertAndSet<unsigned___int64,unsigned_short> *)(*pcVar3)();
    return pTVar6;
  }
  *(undefined2 *)
   ((longlong)param_3 +
   (longlong)*(int *)&param_1->field_0x44 + (longlong)iVar1 * (longlong)*(int *)&param_1->field_0x34
   ) = uVar4;
  if ((2 < (byte)LogClass._0_1_) && (uVar8 != local_res8)) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_48);
    ::FString::PrintfImpl(&local_68,L"%u");
    ::FString::PrintfImpl(&local_78,L"%llu");
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,local_58);
    bVar5 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_1->field_0x20,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_TProperty_Numeric<unsigned_short>::TConvertAndSet<unsigned___int64,unsigned_short>::TConvertAndSet<unsigned___int64,unsigned_short>(TProperty_Numeric<unsigned_short>_const&___ptr64,FStructuredArchiveSlot,void*___ptr64,FPropertyTag_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return this;
}

