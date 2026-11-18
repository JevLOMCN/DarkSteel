// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// BeginArray @ 14ae252a0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
Metasound::TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_>::BeginArray
          (TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_> *this,
          FStructSerializerState *param_1)

{
  FProperty *pFVar1;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this_00;
  bool bVar2;
  FFieldClass *pFVar3;
  FString local_18;
  
  pFVar1 = param_1->ValueProperty;
  pFVar3 = FArrayProperty::StaticClass();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
  if ((bVar2) && (pFVar1->_padding_ != 0)) {
    TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayStart((this->JsonWriter).Object);
    return;
  }
  pFVar1 = param_1->KeyProperty;
  if (pFVar1 == (FProperty *)0x0) {
    pFVar1 = param_1->ValueProperty;
    this_00 = (this->JsonWriter).Object;
    bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayStart<FString>(this_00,&local_18);
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_1->KeyData,0,0,0,0,0);
    TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayStart<FString_&>
              ((this->JsonWriter).Object,&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// BeginStructure @ 14ae253b0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
Metasound::TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_>::BeginStructure
          (TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_> *this,
          FStructSerializerState *param_1)

{
  longlong *this_00;
  FProperty *pFVar1;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this_01;
  bool bVar2;
  FFieldClass *pFVar3;
  FString local_18;
  
  if (param_1->ValueProperty == (FProperty *)0x0) {
    TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart((this->JsonWriter).Object);
    return;
  }
  this_00 = &param_1->ValueProperty->_padding_;
  pFVar3 = FArrayProperty::StaticClass();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)this_00,pFVar3);
  if ((!bVar2) || (*this_00 == 0)) {
    pFVar1 = param_1->ValueProperty;
    pFVar3 = FSetProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((!bVar2) || (pFVar1->_padding_ == 0)) {
      pFVar1 = param_1->KeyProperty;
      if (pFVar1 == (FProperty *)0x0) {
        this_01 = (this->JsonWriter).Object;
        pFVar1 = param_1->ValueProperty;
        bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
        if (bVar2) {
          ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
        }
        else {
          ::FString::FString(&local_18,L"None");
        }
        TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart<FString>
                  (this_01,&local_18);
      }
      else {
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_1->KeyData,0,0,0,0,0);
        TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart<FString_&>
                  ((this->JsonWriter).Object,&local_18);
      }
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectStart((this->JsonWriter).Object);
  return;
}

// EndArray @ 14ae30ba0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
Metasound::TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_>::EndArray
          (TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_> *this,
          FStructSerializerState *param_1)

{
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteArrayEnd((this->JsonWriter).Object);
  return;
}

// EndStructure @ 14ae30bb0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
Metasound::TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_>::EndStructure
          (TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_> *this,
          FStructSerializerState *param_1)

{
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteObjectEnd((this->JsonWriter).Object);
  return;
}

// WriteComment @ 14ae48030

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
Metasound::TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_>::WriteComment
          (TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_> *this,FString *param_1)

{
  return;
}

// WriteProperty @ 14ae48210

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_>::WriteProperty
          (TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_> *this,
          FStructSerializerState *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  UEnum *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FFieldClass *pFVar7;
  long64 lVar8;
  FString *pFVar9;
  longlong lVar10;
  ushort *puVar11;
  uint *puVar12;
  ulonglong *puVar13;
  FName *this_01;
  FText *this_02;
  TPersistentObjectPtr<FSoftObjectPath> *this_03;
  UObject *pUVar14;
  FWeakObjectPtr *this_04;
  void *pvVar15;
  UObjectBaseUtility *this_05;
  longlong lVar16;
  FProperty *pFVar17;
  FProperty *pFVar18;
  undefined4 local_res10 [4];
  FName local_res20;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  code *local_278;
  UEnum *local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  FName local_228;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_220;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_210;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_200;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_1f0;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_1e0;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_1d0;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_1c0;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_1b0;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_1a0;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_190;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_180;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_170;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_160;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_150;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_140;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_130;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_120;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_110;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_100;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_f0;
  FString local_e0;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pFVar17 = (FProperty *)0x0;
  lVar16 = (longlong)param_2;
  local_res10[0] = 0;
  pFVar7 = FBoolProperty::StaticClass();
  if (param_1->FieldType == pFVar7) {
    pFVar18 = param_1->ValueProperty;
    if (((pFVar18 == (FProperty *)0x0) || ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x11 & 1) == 0))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("CastResult",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                              ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar17,
          bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pvVar15 = param_1->ValueData;
    if (((param_2 < 0) || (pFVar18->ArrayDim <= param_2)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6)
       ) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pvVar15 == (void *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = pFVar18->ElementSize;
    iVar2 = pFVar18->Offset_Internal;
    if (((char)pFVar18[1]._padding_ == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa4b,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_220.Object = (this->JsonWriter).Object;
    local_220.SharedReferenceCount.ReferenceController =
         (this->JsonWriter).SharedReferenceCount.ReferenceController;
    local_res10[0] =
         CONCAT31(local_res10[0]._1_3_,
                  (*(byte *)((longlong)&pFVar18[1]._padding_ + 3) &
                  *(byte *)((longlong)pvVar15 +
                           (ulonglong)*(byte *)((longlong)&pFVar18[1]._padding_ + 1) +
                           (longlong)iVar2 + lVar16 * iVar1)) != 0);
    if (local_220.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_220.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_220.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    JsonStructSerializerBackend::
    WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,bool>
              (&local_220,param_1,(bool *)local_res10);
    return;
  }
  pFVar7 = FEnumProperty::StaticClass();
  if (param_1->FieldType == pFVar7) {
    pFVar18 = param_1->ValueProperty;
    if (((pFVar18 == (FProperty *)0x0) ||
        ((*(ulonglong *)(pFVar18->_padding_ + 0x18) & 0x1000000000000) == 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar17,
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_270 = (UEnum *)pFVar18[1]._padding_;
    plVar3 = (longlong *)pFVar18[1]._padding_;
    pvVar15 = param_1->ValueData;
    local_278 = *(code **)(*plVar3 + 0x210);
    if (((param_2 < 0) || (pFVar18->ArrayDim <= param_2)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6)
       ) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pvVar15 == (void *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar8 = (*local_278)(plVar3,(longlong)pvVar15 +
                                (longlong)pFVar18->Offset_Internal + lVar16 * pFVar18->ElementSize);
    pFVar9 = UEnum::GetNameStringByValue(local_270,&local_c0,lVar8);
    local_210.Object = (this->JsonWriter).Object;
    local_210.SharedReferenceCount.ReferenceController =
         (this->JsonWriter).SharedReferenceCount.ReferenceController;
    if (local_210.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_210.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_210.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    JsonStructSerializerBackend::
    WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
              (&local_210,param_1,pFVar9);
  }
  else {
    pFVar7 = FByteProperty::StaticClass();
    if (param_1->FieldType == pFVar7) {
      pFVar18 = param_1->ValueProperty;
      if (((pFVar18 == (FProperty *)0x0) || ((*(byte *)(pFVar18->_padding_ + 0x18) & 0x40) == 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar17,
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar10 = (**(code **)(pFVar18->_padding_ + 0x1e0))(pFVar18);
      pvVar15 = param_1->ValueData;
      if (lVar10 == 0) {
        if (((param_2 < 0) || (pFVar18->ArrayDim <= param_2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar15 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1f0.Object = (this->JsonWriter).Object;
        local_1f0.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        local_268 = (double)*(byte *)((longlong)pvVar15 +
                                     (longlong)pFVar18->Offset_Internal +
                                     lVar16 * pFVar18->ElementSize);
        if (local_1f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double>
                  (&local_1f0,param_1,&local_268);
        return;
      }
      this_00 = (UEnum *)pFVar18[1]._padding_;
      if (((param_2 < 0) || (pFVar18->ArrayDim <= param_2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pvVar15 == (void *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = UEnum::GetNameStringByValue
                         (this_00,&local_b0,
                          (ulonglong)
                          *(byte *)((longlong)pvVar15 +
                                   (longlong)pFVar18->Offset_Internal +
                                   lVar16 * pFVar18->ElementSize));
      local_200.Object = (this->JsonWriter).Object;
      local_200.SharedReferenceCount.ReferenceController =
           (this->JsonWriter).SharedReferenceCount.ReferenceController;
      if (local_200.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_200.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_200.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      JsonStructSerializerBackend::
      WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
                (&local_200,param_1,pFVar9);
      local_c0.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
    }
    else {
      pFVar7 = FDoubleProperty::StaticClass();
      if (param_1->FieldType == pFVar7) {
        pFVar18 = param_1->ValueProperty;
        if (((pFVar18 == (FProperty *)0x0) ||
            ((*(ulonglong *)(pFVar18->_padding_ + 0x18) & 0x100000000) == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar17,
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar15 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar18->ArrayDim <= param_2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar15 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar1 = pFVar18->ElementSize;
        iVar2 = pFVar18->Offset_Internal;
        local_1e0.Object = (this->JsonWriter).Object;
        local_1e0.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        if (local_1e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double>
                  (&local_1e0,param_1,
                   (double *)((longlong)pvVar15 + (longlong)iVar2 + lVar16 * iVar1));
        return;
      }
      pFVar7 = FFloatProperty::StaticClass();
      if (param_1->FieldType == pFVar7) {
        pFVar18 = param_1->ValueProperty;
        if (((pFVar18 == (FProperty *)0x0) || ((*(uint *)(pFVar18->_padding_ + 0x18) >> 8 & 1) == 0)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                 pFVar18 = pFVar17, bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar15 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar18->ArrayDim <= param_2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar15 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar1 = pFVar18->ElementSize;
        iVar2 = pFVar18->Offset_Internal;
        local_1d0.Object = (this->JsonWriter).Object;
        local_1d0.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        if (local_1d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,float>
                  (&local_1d0,param_1,
                   (float *)((longlong)pvVar15 + (longlong)iVar2 + lVar16 * iVar1));
        return;
      }
      pFVar7 = FIntProperty::StaticClass();
      if (param_1->FieldType == pFVar7) {
        pFVar18 = param_1->ValueProperty;
        if (((pFVar18 == (FProperty *)0x0) || ((*(byte *)(pFVar18->_padding_ + 0x18) & 0x80) == 0))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CastResult",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x472,L"CastFieldChecked failed with 0x%016llx"),
              pFVar18 = pFVar17, bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar15 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar18->ArrayDim <= param_2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar15 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1c0.Object = (this->JsonWriter).Object;
        local_260 = (double)*(int *)((longlong)pvVar15 +
                                    (longlong)pFVar18->Offset_Internal +
                                    lVar16 * pFVar18->ElementSize);
        local_1c0.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        if (local_1c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double>
                  (&local_1c0,param_1,&local_260);
        return;
      }
      pFVar7 = FInt8Property::StaticClass();
      if (param_1->FieldType == pFVar7) {
        pFVar18 = param_1->ValueProperty;
        if (((pFVar18 == (FProperty *)0x0) || ((*(byte *)(pFVar18->_padding_ + 0x18) & 2) == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar17,
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar15 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar18->ArrayDim <= param_2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar15 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1b0.Object = (this->JsonWriter).Object;
        local_1b0.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        local_258 = (double)(int)*(char *)((longlong)pvVar15 +
                                          (longlong)pFVar18->Offset_Internal +
                                          lVar16 * pFVar18->ElementSize);
        if (local_1b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double>
                  (&local_1b0,param_1,&local_258);
        return;
      }
      pFVar7 = FInt16Property::StaticClass();
      if (param_1->FieldType == pFVar7) {
        pFVar18 = param_1->ValueProperty;
        if (((pFVar18 == (FProperty *)0x0) || (-1 < *(int *)(pFVar18->_padding_ + 0x18))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar17,
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar15 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar18->ArrayDim <= param_2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar15 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1a0.Object = (this->JsonWriter).Object;
        local_1a0.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        local_250 = (double)(int)*(short *)((longlong)pvVar15 +
                                           (longlong)pFVar18->Offset_Internal +
                                           lVar16 * pFVar18->ElementSize);
        if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double>
                  (&local_1a0,param_1,&local_250);
        return;
      }
      pFVar7 = FInt64Property::StaticClass();
      if (param_1->FieldType == pFVar7) {
        pFVar18 = param_1->ValueProperty;
        if (((pFVar18 == (FProperty *)0x0) ||
            ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x16 & 1) == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar17,
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar15 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar18->ArrayDim <= param_2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar15 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_248 = (double)*(longlong *)
                             ((longlong)pvVar15 +
                             (longlong)pFVar18->Offset_Internal + lVar16 * pFVar18->ElementSize);
        local_190.Object = (this->JsonWriter).Object;
        local_190.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        if (local_190.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double>
                  (&local_190,param_1,&local_248);
        return;
      }
      pFVar7 = FUInt16Property::StaticClass();
      if (param_1->FieldType == pFVar7) {
        pFVar18 = param_1->ValueProperty;
        if (((pFVar18 == (FProperty *)0x0) ||
            ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x12 & 1) == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar17,
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar11 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar18,param_1->ValueData,param_2);
        local_180.Object = (this->JsonWriter).Object;
        local_180.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        local_240 = (double)*puVar11;
        if (local_180.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double>
                  (&local_180,param_1,&local_240);
        return;
      }
      pFVar7 = FUInt32Property::StaticClass();
      if (param_1->FieldType == pFVar7) {
        pFVar18 = param_1->ValueProperty;
        if (((pFVar18 == (FProperty *)0x0) ||
            ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0xb & 1) == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar17,
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar12 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar18,param_1->ValueData,param_2);
        local_170.Object = (this->JsonWriter).Object;
        local_170.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        local_238 = (double)*puVar12;
        if (local_170.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_170.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double>
                  (&local_170,param_1,&local_238);
        return;
      }
      pFVar7 = FUInt64Property::StaticClass();
      if (param_1->FieldType == pFVar7) {
        pFVar18 = param_1->ValueProperty;
        if (((pFVar18 == (FProperty *)0x0) || ((*(uint *)(pFVar18->_padding_ + 0x18) >> 9 & 1) == 0)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                 pFVar18 = pFVar17, bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar13 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar18,param_1->ValueData,param_2);
        local_230 = (double)*puVar13;
        local_160.Object = (this->JsonWriter).Object;
        local_160.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        if (local_160.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double>
                  (&local_160,param_1,&local_230);
        return;
      }
      pFVar7 = FNameProperty::StaticClass();
      if (param_1->FieldType == pFVar7) {
        pFVar18 = param_1->ValueProperty;
        if (((pFVar18 == (FProperty *)0x0) ||
            ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0xd & 1) == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar18 = pFVar17,
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar18,param_1->ValueData,param_2);
        pFVar9 = ::FName::ToString(this_01,&local_a0);
        local_150.Object = (this->JsonWriter).Object;
        local_150.SharedReferenceCount.ReferenceController =
             (this->JsonWriter).SharedReferenceCount.ReferenceController;
        if (local_150.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_150.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_150.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        JsonStructSerializerBackend::
        WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
                  (&local_150,param_1,pFVar9);
        local_c0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
      }
      else {
        pFVar7 = FStrProperty::StaticClass();
        if (param_1->FieldType == pFVar7) {
          pFVar18 = param_1->ValueProperty;
          if (((pFVar18 == (FProperty *)0x0) ||
              ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0xe & 1) == 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x472,L"CastFieldChecked failed with 0x%016llx"),
             pFVar18 = pFVar17, bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar9 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar18,param_1->ValueData,param_2)
          ;
          local_140.Object = (this->JsonWriter).Object;
          local_140.SharedReferenceCount.ReferenceController =
               (this->JsonWriter).SharedReferenceCount.ReferenceController;
          if (local_140.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          JsonStructSerializerBackend::
          WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
                    (&local_140,param_1,pFVar9);
          return;
        }
        pFVar7 = FTextProperty::StaticClass();
        if (param_1->FieldType == pFVar7) {
          pFVar18 = param_1->ValueProperty;
          if (((pFVar18 == (FProperty *)0x0) ||
              ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x1e & 1) == 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x472,L"CastFieldChecked failed with 0x%016llx"),
             pFVar18 = pFVar17, bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_02 = FProperty::ContainerVoidPtrToValuePtrInternal
                              (pFVar18,param_1->ValueData,param_2);
          if ((this->Flags & WriteTextAsComplexString) == Legacy) {
            pFVar9 = FText::ToString(this_02);
            local_120.Object = (this->JsonWriter).Object;
            local_120.SharedReferenceCount.ReferenceController =
                 (this->JsonWriter).SharedReferenceCount.ReferenceController;
            if (local_120.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            JsonStructSerializerBackend::
            WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
                      (&local_120,param_1,pFVar9);
            return;
          }
          local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2b8.Data.ArrayNum = 0;
          local_2b8.Data.ArrayMax = 0;
          FTextStringHelper::WriteToBuffer(&local_2b8,this_02,false,false);
          local_130.Object = (this->JsonWriter).Object;
          local_130.SharedReferenceCount.ReferenceController =
               (this->JsonWriter).SharedReferenceCount.ReferenceController;
          if (local_130.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          JsonStructSerializerBackend::
          WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
                    (&local_130,param_1,&local_2b8);
          local_c0.Data.AllocatorInstance.Data = local_2b8.Data.AllocatorInstance.Data;
        }
        else {
          pFVar7 = FSoftClassProperty::StaticClass();
          if (param_1->FieldType == pFVar7) {
            pFVar18 = param_1->ValueProperty;
            if (((pFVar18 == (FProperty *)0x0) ||
                ((*(ulonglong *)(pFVar18->_padding_ + 0x18) & 0x200000000) == 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pFVar18 = pFVar17, bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_03 = FProperty::ContainerVoidPtrToValuePtrInternal
                                (pFVar18,param_1->ValueData,param_2);
            pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_03);
            bVar6 = pUVar14 == (UObject *)0x0;
            if (bVar6) {
              local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              pFVar9 = &local_2a8;
              local_2a8.Data.ArrayNum = 0;
              local_2a8.Data.ArrayMax = 0;
            }
            else {
              pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_03);
              pFVar9 = UObjectBaseUtility::GetPathName
                                 ((UObjectBaseUtility *)pUVar14,&local_90,(UObject *)0x0);
            }
            FVar5.Data = local_2a8.Data.AllocatorInstance.Data;
            local_110.Object = (this->JsonWriter).Object;
            local_110.SharedReferenceCount.ReferenceController =
                 (this->JsonWriter).SharedReferenceCount.ReferenceController;
            if (local_110.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            JsonStructSerializerBackend::
            WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
                      (&local_110,param_1,pFVar9);
            local_c0.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
            if ((bVar6) && (FVar5.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(FVar5.Data);
              local_c0.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
            }
          }
          else {
            pFVar7 = FWeakObjectProperty::StaticClass();
            if (param_1->FieldType == pFVar7) {
              pFVar18 = param_1->ValueProperty;
              if (((pFVar18 == (FProperty *)0x0) ||
                  ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x1b & 1) == 0)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                 pFVar18 = pFVar17, bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              this_04 = FProperty::ContainerVoidPtrToValuePtrInternal
                                  (pFVar18,param_1->ValueData,param_2);
              bVar6 = FWeakObjectPtr::IsValid(this_04);
              bVar6 = !bVar6;
              if (bVar6) {
                local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                pFVar9 = &local_298;
                local_298.Data.ArrayNum = 0;
                local_298.Data.ArrayMax = 0;
              }
              else {
                pUVar14 = FWeakObjectPtr::Get(this_04);
                pFVar9 = UObjectBaseUtility::GetPathName
                                   ((UObjectBaseUtility *)pUVar14,&local_80,(UObject *)0x0);
              }
              FVar5.Data = local_298.Data.AllocatorInstance.Data;
              local_100.Object = (this->JsonWriter).Object;
              local_100.SharedReferenceCount.ReferenceController =
                   (this->JsonWriter).SharedReferenceCount.ReferenceController;
              if (local_100.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_100.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              JsonStructSerializerBackend::
              WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
                        (&local_100,param_1,pFVar9);
              if ((bVar6) && (FVar5.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(FVar5.Data);
              }
              local_c0.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
              if (bVar6) {
                return;
              }
              goto LAB_14ae49595;
            }
            pFVar7 = FSoftObjectProperty::StaticClass();
            pFVar18 = param_1->ValueProperty;
            if (param_1->FieldType == pFVar7) {
              if (((pFVar18 == (FProperty *)0x0) ||
                  ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x1d & 1) == 0)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                 pFVar18 = pFVar17, bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pvVar15 = FProperty::ContainerVoidPtrToValuePtrInternal
                                  (pFVar18,param_1->ValueData,param_2);
              FSoftObjectPath::ToString((FSoftObjectPath *)((longlong)pvVar15 + 8),&local_e0);
              local_f0.Object = (this->JsonWriter).Object;
              local_f0.SharedReferenceCount.ReferenceController =
                   (this->JsonWriter).SharedReferenceCount.ReferenceController;
              if (local_f0.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              JsonStructSerializerBackend::
              WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
                        (&local_f0,param_1,&local_e0);
              local_c0.Data.AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
              goto LAB_14ae49595;
            }
            if ((pFVar18 == (FProperty *)0x0) ||
               ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x10 & 1) == 0)) {
              if ((byte)LogSerialization._0_1_ < 6) {
                return;
              }
              local_228 = (FName)param_1->ValueType->_padding_;
              ::FName::ToString(&local_228,&local_50);
              pFVar17 = param_1->ValueProperty;
              bVar6 = IsThisNotNull(pFVar17,"FField::GetFName");
              if (bVar6) {
                local_res20 = (FName)pFVar17->_padding_;
              }
              else {
                local_res20.ComparisonIndex.Value = 0;
                local_res20.Number = 0;
              }
              ::FName::ToString(&local_res20,&local_60);
              UE::Logging::Private::BasicLog<6>
                        (&`public:_virtual_void___cdecl_Metasound::TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_>::WriteProperty(FStructSerializerState_const&___ptr64,int)___ptr64'
                          ::__l90::LOG_Static,(FLogCategoryBase *)&LogSerialization);
              local_c0.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
              if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60.Data.AllocatorInstance.Data);
                local_c0.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
              }
              goto LAB_14ae49595;
            }
            this_05 = (UObjectBaseUtility *)
                      (**(code **)(pFVar18->_padding_ + 0x208))(pFVar18,param_1->ValueData);
            bVar6 = this_05 == (UObjectBaseUtility *)0x0;
            if (bVar6) {
              local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              pFVar9 = &local_288;
              local_288.Data.ArrayNum = 0;
              local_288.Data.ArrayMax = 0;
            }
            else {
              pFVar9 = UObjectBaseUtility::GetPathName(this_05,&local_70,(UObject *)0x0);
            }
            FVar5.Data = local_288.Data.AllocatorInstance.Data;
            local_d0.Object = (this->JsonWriter).Object;
            local_d0.SharedReferenceCount.ReferenceController =
                 (this->JsonWriter).SharedReferenceCount.ReferenceController;
            if (local_d0.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            JsonStructSerializerBackend::
            WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
                      (&local_d0,param_1,pFVar9);
            local_c0.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
            if ((bVar6) && (FVar5.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(FVar5.Data);
              local_c0.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
            }
          }
          if (bVar6) {
            return;
          }
        }
      }
    }
  }
LAB_14ae49595:
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

