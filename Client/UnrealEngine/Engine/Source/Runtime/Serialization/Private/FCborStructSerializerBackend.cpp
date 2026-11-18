// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 10

// FCborStructSerializerBackend @ 148b9bb90

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

FCborStructSerializerBackend * __thiscall
FCborStructSerializerBackend::FCborStructSerializerBackend
          (FCborStructSerializerBackend *this,FArchive *param_1)

{
  this->_padding_ = (longlong)&___7FCborStructSerializerBackend__6B_;
  FCborWriter::FCborWriter(&this->CborWriter,param_1,Platform);
  this->Flags = Legacy;
  (this->AccumulatedBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulatedBytes).ArrayNum = 0;
  (this->AccumulatedBytes).ArrayMax = 0;
  this->bSerializingByteArray = false;
  return this;
}

// FCborStructSerializerBackend @ 148b9bbd0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

FCborStructSerializerBackend * __thiscall
FCborStructSerializerBackend::FCborStructSerializerBackend
          (FCborStructSerializerBackend *this,FArchive *param_1,
          EStructSerializerBackendFlags param_2)

{
  this->_padding_ = (longlong)&___7FCborStructSerializerBackend__6B_;
  FCborWriter::FCborWriter(&this->CborWriter,param_1,param_2 >> 2 & BigEndian);
  this->Flags = param_2;
  (this->AccumulatedBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulatedBytes).ArrayNum = 0;
  (this->AccumulatedBytes).ArrayMax = 0;
  this->bSerializingByteArray = false;
  return this;
}

// ~FCborStructSerializerBackend @ 148ba0530

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FCborStructSerializerBackend::~FCborStructSerializerBackend(FCborStructSerializerBackend *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCborStructSerializerBackend__6B_;
  pFVar1 = (this->AccumulatedBytes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCborWriter::~FCborWriter(&this->CborWriter);
  this->_padding_ = (longlong)&___7IStructSerializerBackend__6B_;
  return;
}

// BeginArray @ 148ba23e0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall
FCborStructSerializerBackend::BeginArray
          (FCborStructSerializerBackend *this,FStructSerializerState *param_1)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FFieldClass *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((((((this->Flags & WriteByteArrayAsByteStream) != Legacy) &&
        (pFVar1 = param_1->ValueProperty, pFVar1 != (FProperty *)0x0)) &&
       ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0)) &&
      (lVar2 = pFVar1[1]._padding_, lVar2 != 0)) &&
     (((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) != 0 ||
      ((lVar2 != 0 && ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 2) != 0)))))) {
    if ((this->bSerializingByteArray != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bSerializingByteArray",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\Backends\\CborStructSerializerBackend.cpp"
                           ,0x23,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this->bSerializingByteArray = true;
  }
  pFVar1 = param_1->ValueProperty;
  pFVar5 = FArrayProperty::StaticClass();
  bVar4 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar5);
  if ((!bVar4) || (pFVar1->_padding_ == 0)) {
    pFVar1 = param_1->ValueProperty;
    pFVar5 = FSetProperty::StaticClass();
    bVar4 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar5);
    if ((!bVar4) || (pFVar1->_padding_ == 0)) {
      pFVar1 = param_1->KeyProperty;
      if (pFVar1 == (FProperty *)0x0) {
        pFVar1 = param_1->ValueProperty;
        bVar4 = IsThisNotNull(pFVar1,"FField::GetName");
        if (bVar4) {
          ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
        }
        else {
          ::FString::FString(&local_18,L"None");
        }
        FCborWriter::WriteValue(&this->CborWriter,&local_18);
      }
      else {
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_28,param_1->KeyData,0,0,0,0,0);
        FCborWriter::WriteValue(&this->CborWriter,&local_28);
        local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  if (this->bSerializingByteArray != false) {
    return;
  }
  FCborWriter::WriteContainerStart(&this->CborWriter,Array,-1);
  return;
}

// BeginStructure @ 148ba2700

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall
FCborStructSerializerBackend::BeginStructure
          (FCborStructSerializerBackend *this,FStructSerializerState *param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  FMapProperty *pFVar4;
  FString local_18;
  
  pFVar1 = param_1->ValueProperty;
  if (pFVar1 == (FProperty *)0x0) goto LAB_148ba2856;
  if (pFVar1->ArrayDim < 2) {
    pFVar3 = FArrayProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((bVar2) && (pFVar1->_padding_ != 0)) goto LAB_148ba277b;
    pFVar1 = param_1->ValueProperty;
    pFVar3 = FSetProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if (((bVar2) && (pFVar1->_padding_ != 0)) ||
       ((pFVar4 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty),
        pFVar4 != (FMapProperty *)0x0 && (param_1->KeyProperty == (FProperty *)0x0))))
    goto LAB_148ba277b;
  }
  else {
LAB_148ba277b:
    if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148ba2856;
  }
  pFVar1 = param_1->KeyProperty;
  if (pFVar1 != (FProperty *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_1->KeyData,0,0,0,0,0);
    FCborWriter::WriteValue(&this->CborWriter,&local_18);
    FCborWriter::WriteContainerStart(&this->CborWriter,Map,-1);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  pFVar1 = param_1->ValueProperty;
  bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  FCborWriter::WriteValue(&this->CborWriter,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148ba2856:
  FCborWriter::WriteContainerStart(&this->CborWriter,Map,-1);
  return;
}

// EndArray @ 148ba7d20

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FCborStructSerializerBackend::EndArray
          (FCborStructSerializerBackend *this,FStructSerializerState *param_1)

{
  if (this->bSerializingByteArray != false) {
    FCborWriter::WriteValue
              (&this->CborWriter,(uchar *)(this->AccumulatedBytes).AllocatorInstance.Data,
               (longlong)(this->AccumulatedBytes).ArrayNum);
    this->bSerializingByteArray = false;
    return;
  }
  FCborWriter::WriteContainerEnd(&this->CborWriter);
  return;
}

// EndStructure @ 148ba7db0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FCborStructSerializerBackend::EndStructure
          (FCborStructSerializerBackend *this,FStructSerializerState *param_1)

{
  FCborWriter::WriteContainerEnd(&this->CborWriter);
  return;
}

// WriteComment @ 148bb64c0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FCborStructSerializerBackend::WriteComment(FCborStructSerializerBackend *this,FString *param_1)

{
  return;
}

// WritePODArray @ 148bb6ba0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

bool __thiscall
FCborStructSerializerBackend::WritePODArray
          (FCborStructSerializerBackend *this,FStructSerializerState *param_1)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  ulonglong *puVar8;
  FProperty *pFVar9;
  FProperty *pFVar10;
  
  pFVar9 = param_1->ValueProperty;
  pFVar10 = (FProperty *)0x0;
  if ((pFVar9 == (FProperty *)0x0) || ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    pFVar9 = pFVar10;
  }
  if ((((this->bSerializingByteArray != false) && (pFVar9 != (FProperty *)0x0)) &&
      (lVar2 = pFVar9[1]._padding_, lVar2 != 0)) &&
     (((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) != 0 ||
      ((lVar2 != 0 && ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 2) != 0)))))) {
    pvVar3 = param_1->ValueData;
    if (pFVar9->ArrayDim < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    if (pvVar3 == (void *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    iVar1 = pFVar9->Offset_Internal;
    lVar5 = pFVar9[1]._padding_;
    (**(code **)(*(longlong *)pFVar9[1]._padding_ + 0x168))();
    lVar2 = pFVar9[1]._padding_;
    puVar8 = (ulonglong *)((longlong)iVar1 + (longlong)pvVar3);
    if (*(int *)(lVar2 + 0x34) < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    if (lVar2 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    if ((((int)puVar8[1] != 0) && (pFVar10 = (FProperty *)*puVar8, (lVar5 & 1) != 0)) &&
       (((ulonglong)pFVar10 & 1) != 0)) {
      pFVar10 = (FProperty *)(((longlong)pFVar10 >> 0x18) + (longlong)puVar8);
    }
    FCborWriter::WriteValue(&this->CborWriter,(uchar *)pFVar10,(longlong)(int)puVar8[1]);
    this->bSerializingByteArray = false;
    return true;
  }
  return false;
}

// WriteProperty @ 148bb6fc0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCborStructSerializerBackend::WriteProperty
          (FCborStructSerializerBackend *this,FStructSerializerState *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  UEnum *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FFieldClass *pFVar9;
  FMapProperty *pFVar10;
  FFieldClass *pFVar11;
  long64 lVar12;
  FString *pFVar13;
  longlong lVar14;
  UStruct *pUVar15;
  FProperty *pFVar16;
  long64 *plVar17;
  FName *this_01;
  FAnsiString *pFVar18;
  FSetProperty *pFVar19;
  FUtf8String *pFVar20;
  FText *this_02;
  FSoftClassProperty *this_03;
  void *pvVar21;
  FWeakObjectProperty *this_04;
  FWeakObjectPtr *this_05;
  UObject *this_06;
  FSoftObjectProperty *this_07;
  UObjectBaseUtility *this_08;
  FName this_09;
  FScriptContainerElement *pFVar22;
  double *pdVar23;
  FProperty *pFVar24;
  longlong lVar25;
  FCborWriter *pFVar26;
  float local_res10 [4];
  code *local_res20;
  undefined8 in_stack_fffffffffffffe08;
  uint uVar27;
  FScriptContainerElement local_1d8 [8];
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  UEnum *local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  long64 local_138;
  ulonglong local_130;
  ulonglong local_128;
  long64 local_120;
  FName local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar27 = (uint)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
  lVar25 = (longlong)param_2;
  pFVar16 = (FProperty *)0x0;
  pFVar9 = FBoolProperty::StaticClass();
  if (param_1->FieldType == pFVar9) {
    pFVar24 = param_1->ValueProperty;
    if (((pFVar24 == (FProperty *)0x0) || ((*(uint *)(pFVar24->_padding_ + 0x18) >> 0x11 & 1) == 0))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("CastResult",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                              ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar24 = pFVar16,
          bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pvVar21 = param_1->ValueData;
    if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6)
       ) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pvVar21 == (void *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = pFVar24->ElementSize;
    iVar2 = pFVar24->Offset_Internal;
    if (((char)pFVar24[1]._padding_ == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa4b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = (*(byte *)((longlong)&pFVar24[1]._padding_ + 3) &
            *(byte *)((longlong)pvVar21 +
                     (ulonglong)*(byte *)((longlong)&pFVar24[1]._padding_ + 1) +
                     (longlong)iVar2 + lVar25 * iVar8)) != 0;
    pFVar16 = param_1->ValueProperty;
    pFVar26 = &this->CborWriter;
    if (pFVar16 != (FProperty *)0x0) {
      if (pFVar16->ArrayDim < 2) {
        pFVar9 = FArrayProperty::StaticClass();
        bVar7 = FFieldVariant::IsA((FFieldVariant *)&pFVar16->_padding_,pFVar9);
        if ((bVar7) && (pFVar16->_padding_ != 0)) goto LAB_148bb7168;
        pFVar16 = param_1->ValueProperty;
        pFVar9 = FSetProperty::StaticClass();
        bVar7 = FFieldVariant::IsA((FFieldVariant *)&pFVar16->_padding_,pFVar9);
        if (((bVar7) && (pFVar16->_padding_ != 0)) ||
           ((pFVar10 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty),
            pFVar10 != (FMapProperty *)0x0 && (param_1->KeyProperty == (FProperty *)0x0))))
        goto LAB_148bb7168;
      }
      else {
LAB_148bb7168:
        if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148bb721f;
      }
      pFVar16 = param_1->KeyProperty;
      if (pFVar16 != (FProperty *)0x0) {
        local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.Data.ArrayNum = 0;
        local_1d0.Data.ArrayMax = 0;
        (**(code **)(pFVar16->_padding_ + 0xe0))
                  (pFVar16,&local_1d0,param_1->KeyData,0,0,0,(ulonglong)uVar27 << 0x20,0);
        FCborWriter::WriteValue(pFVar26,&local_1d0);
        FCborWriter::WriteValue(pFVar26,bVar6);
        local_a8.Data.AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
        goto LAB_148bb86b4;
      }
      pFVar16 = param_1->ValueProperty;
      bVar7 = IsThisNotNull(pFVar16,"FField::GetName");
      if (bVar7) {
        ::FName::ToString((FName *)&pFVar16->_padding_,&local_110);
      }
      else {
        ::FString::FString(&local_110,L"None");
      }
      FCborWriter::WriteValue(pFVar26,&local_110);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
LAB_148bb721f:
    FCborWriter::WriteValue(pFVar26,bVar6);
  }
  else {
    pFVar9 = param_1->FieldType;
    pFVar11 = FEnumProperty::StaticClass();
    if (pFVar9 == pFVar11) {
      pFVar24 = param_1->ValueProperty;
      if (((pFVar24 == (FProperty *)0x0) ||
          ((*(ulonglong *)(pFVar24->_padding_ + 0x18) & 0x1000000000000) == 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar24 = pFVar16,
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_160 = (UEnum *)pFVar24[1]._padding_;
      plVar3 = (longlong *)pFVar24[1]._padding_;
      pvVar21 = param_1->ValueData;
      local_res20 = *(code **)(*plVar3 + 0x210);
      if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pvVar21 == (void *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar12 = (*local_res20)(plVar3,(longlong)pvVar21 +
                                     (longlong)pFVar24->Offset_Internal +
                                     lVar25 * pFVar24->ElementSize);
      pFVar13 = UEnum::GetNameStringByValue(local_160,&local_c8,lVar12);
      CborStructSerializerBackend::WritePropertyValue<FString>(&this->CborWriter,param_1,pFVar13);
      local_a8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    }
    else {
      pFVar9 = param_1->FieldType;
      pFVar11 = FByteProperty::StaticClass();
      if (pFVar9 == pFVar11) {
        pFVar24 = param_1->ValueProperty;
        if (((pFVar24 == (FProperty *)0x0) || ((*(byte *)(pFVar24->_padding_ + 0x18) & 0x40) == 0))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CastResult",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x472,L"CastFieldChecked failed with 0x%016llx"),
              pFVar24 = pFVar16, bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar14 = (**(code **)(pFVar24->_padding_ + 0x1e0))(pFVar24);
        pvVar21 = param_1->ValueData;
        if (lVar14 == 0) {
          if (this->bSerializingByteArray == false) {
            if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pvVar21 == (void *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_158 = (ulonglong)
                        *(byte *)((longlong)pvVar21 +
                                 (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize)
            ;
            CborStructSerializerBackend::WritePropertyValue<__int64>
                      (&this->CborWriter,param_1,(long64 *)&local_158);
            return;
          }
          if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((pvVar21 == (void *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->AccumulatedBytes).AllocatorInstance.Data;
          pFVar22 = (FScriptContainerElement *)
                    ((longlong)pvVar21 +
                    (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize);
          if (((pFVar4 <= pFVar22) && (pFVar22 < pFVar4 + (this->AccumulatedBytes).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (this->AccumulatedBytes).ArrayNum;
          piVar1 = &(this->AccumulatedBytes).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&(this->AccumulatedBytes).AllocatorInstance,piVar1);
          }
          (this->AccumulatedBytes).ArrayNum = iVar8 + 1;
          (this->AccumulatedBytes).AllocatorInstance.Data[iVar8] = *pFVar22;
          return;
        }
        this_00 = (UEnum *)pFVar24[1]._padding_;
        if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((pvVar21 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = UEnum::GetNameStringByValue
                            (this_00,&local_b8,
                             (ulonglong)
                             *(byte *)((longlong)pvVar21 +
                                      (longlong)pFVar24->Offset_Internal +
                                      lVar25 * pFVar24->ElementSize));
        CborStructSerializerBackend::WritePropertyValue<FString>(&this->CborWriter,param_1,pFVar13);
        local_a8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      }
      else {
        pFVar9 = param_1->FieldType;
        pFVar11 = FDoubleProperty::StaticClass();
        if (pFVar9 == pFVar11) {
          if ((this->Flags & WriteLWCTypesAsFloats) != Legacy) {
            pUVar15 = FField::GetOwnerStruct((FField *)param_1->ValueProperty);
            bVar6 = StructSerializationUtilities::IsLWCType(pUVar15);
            if (bVar6) {
              pFVar24 = param_1->ValueProperty;
              if (((pFVar24 == (FProperty *)0x0) ||
                  ((*(ulonglong *)(pFVar24->_padding_ + 0x18) & 0x100000000) == 0)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                 pFVar24 = pFVar16, bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pvVar21 = param_1->ValueData;
              if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((pvVar21 == (void *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_res10[0] =
                   (float)*(double *)
                           ((longlong)pvVar21 +
                           (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize);
              CborStructSerializerBackend::WritePropertyValue<float>
                        (&this->CborWriter,param_1,local_res10);
              return;
            }
          }
          pFVar24 = param_1->ValueProperty;
          if (((pFVar24 == (FProperty *)0x0) ||
              ((*(ulonglong *)(pFVar24->_padding_ + 0x18) & 0x100000000) == 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x472,L"CastFieldChecked failed with 0x%016llx"),
             pFVar24 = pFVar16, bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pvVar21 = param_1->ValueData;
          if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((pvVar21 == (void *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar26 = &this->CborWriter;
          pdVar23 = (double *)
                    ((longlong)pvVar21 +
                    (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize);
          pFVar16 = param_1->ValueProperty;
          if (pFVar16 == (FProperty *)0x0) goto LAB_148bb793e;
          if (pFVar16->ArrayDim < 2) {
            pFVar9 = FArrayProperty::StaticClass();
            bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar16->_padding_,pFVar9);
            if ((bVar6) && (pFVar16->_padding_ != 0)) goto LAB_148bb7886;
            pFVar16 = param_1->ValueProperty;
            pFVar9 = FSetProperty::StaticClass();
            bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar16->_padding_,pFVar9);
            if (((bVar6) && (pFVar16->_padding_ != 0)) ||
               ((pFVar10 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty),
                pFVar10 != (FMapProperty *)0x0 && (param_1->KeyProperty == (FProperty *)0x0))))
            goto LAB_148bb7886;
          }
          else {
LAB_148bb7886:
            if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148bb793e;
          }
          pFVar16 = param_1->KeyProperty;
          if (pFVar16 == (FProperty *)0x0) {
            pFVar16 = param_1->ValueProperty;
            bVar6 = IsThisNotNull(pFVar16,"FField::GetName");
            if (bVar6) {
              ::FName::ToString((FName *)&pFVar16->_padding_,&local_100);
            }
            else {
              ::FString::FString(&local_100,L"None");
            }
            FCborWriter::WriteValue(pFVar26,&local_100);
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
LAB_148bb793e:
            FCborWriter::WriteValue(pFVar26,*pdVar23);
            return;
          }
          local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c0.Data.ArrayNum = 0;
          local_1c0.Data.ArrayMax = 0;
          (**(code **)(pFVar16->_padding_ + 0xe0))
                    (pFVar16,&local_1c0,param_1->KeyData,0,0,0,(ulonglong)uVar27 << 0x20,0);
          FCborWriter::WriteValue(pFVar26,&local_1c0);
          FCborWriter::WriteValue(pFVar26,*pdVar23);
          local_a8.Data.AllocatorInstance.Data = local_1c0.Data.AllocatorInstance.Data;
        }
        else {
          pFVar9 = FFloatProperty::StaticClass();
          if (param_1->FieldType == pFVar9) {
            pFVar24 = param_1->ValueProperty;
            if (((pFVar24 == (FProperty *)0x0) ||
                ((*(uint *)(pFVar24->_padding_ + 0x18) >> 8 & 1) == 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pFVar24 = pFVar16, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar21 = param_1->ValueData;
            if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pvVar21 == (void *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            CborStructSerializerBackend::WritePropertyValue<float>
                      (&this->CborWriter,param_1,
                       (float *)((longlong)pvVar21 +
                                (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize))
            ;
            return;
          }
          pFVar9 = FIntProperty::StaticClass();
          if (param_1->FieldType == pFVar9) {
            pFVar24 = param_1->ValueProperty;
            if (((pFVar24 == (FProperty *)0x0) ||
                ((*(byte *)(pFVar24->_padding_ + 0x18) & 0x80) == 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pFVar24 = pFVar16, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar21 = param_1->ValueData;
            if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pvVar21 == (void *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_150 = (longlong)
                        *(int *)((longlong)pvVar21 +
                                (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize);
            CborStructSerializerBackend::WritePropertyValue<__int64>
                      (&this->CborWriter,param_1,&local_150);
            return;
          }
          pFVar9 = FInt8Property::StaticClass();
          if (param_1->FieldType == pFVar9) {
            pFVar24 = param_1->ValueProperty;
            if (((pFVar24 == (FProperty *)0x0) || ((*(byte *)(pFVar24->_padding_ + 0x18) & 2) == 0))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CastResult",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                      ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                  pFVar24 = pFVar16, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar21 = param_1->ValueData;
            if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pvVar21 == (void *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_1d8[0] = *(FScriptContainerElement *)
                            ((longlong)pvVar21 +
                            (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize);
            local_148 = (longlong)(char)local_1d8[0];
            if (this->bSerializingByteArray == false) {
              CborStructSerializerBackend::WritePropertyValue<__int64>
                        (&this->CborWriter,param_1,&local_148);
              return;
            }
            pFVar4 = (this->AccumulatedBytes).AllocatorInstance.Data;
            if (((pFVar4 <= local_1d8) && (local_1d8 < pFVar4 + (this->AccumulatedBytes).ArrayMax))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = (this->AccumulatedBytes).ArrayNum;
            piVar1 = &(this->AccumulatedBytes).ArrayMax;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x101,&(this->AccumulatedBytes).AllocatorInstance,piVar1);
            }
            (this->AccumulatedBytes).ArrayNum = iVar8 + 1;
            (this->AccumulatedBytes).AllocatorInstance.Data[iVar8] = local_1d8[0];
            return;
          }
          pFVar9 = FInt16Property::StaticClass();
          if (param_1->FieldType == pFVar9) {
            pFVar24 = param_1->ValueProperty;
            if (((pFVar24 == (FProperty *)0x0) || (-1 < *(int *)(pFVar24->_padding_ + 0x18))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pFVar24 = pFVar16, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar21 = param_1->ValueData;
            if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pvVar21 == (void *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_140 = (longlong)
                        *(short *)((longlong)pvVar21 +
                                  (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize
                                  );
            CborStructSerializerBackend::WritePropertyValue<__int64>
                      (&this->CborWriter,param_1,&local_140);
            return;
          }
          pFVar9 = FInt64Property::StaticClass();
          if (param_1->FieldType == pFVar9) {
            pFVar24 = param_1->ValueProperty;
            if (((pFVar24 == (FProperty *)0x0) ||
                ((*(uint *)(pFVar24->_padding_ + 0x18) >> 0x16 & 1) == 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pFVar24 = pFVar16, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar21 = param_1->ValueData;
            if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pvVar21 == (void *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_138 = *(long64 *)
                         ((longlong)pvVar21 +
                         (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize);
            CborStructSerializerBackend::WritePropertyValue<__int64>
                      (&this->CborWriter,param_1,&local_138);
            return;
          }
          pFVar9 = FUInt16Property::StaticClass();
          if (param_1->FieldType == pFVar9) {
            pFVar24 = param_1->ValueProperty;
            if (((pFVar24 == (FProperty *)0x0) ||
                ((*(uint *)(pFVar24->_padding_ + 0x18) >> 0x12 & 1) == 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pFVar24 = pFVar16, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar21 = param_1->ValueData;
            if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pvVar21 == (void *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_130 = (ulonglong)
                        *(ushort *)
                         ((longlong)pvVar21 +
                         (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize);
            CborStructSerializerBackend::WritePropertyValue<__int64>
                      (&this->CborWriter,param_1,(long64 *)&local_130);
            return;
          }
          pFVar9 = FUInt32Property::StaticClass();
          if (param_1->FieldType == pFVar9) {
            pFVar24 = param_1->ValueProperty;
            if (((pFVar24 == (FProperty *)0x0) ||
                ((*(uint *)(pFVar24->_padding_ + 0x18) >> 0xb & 1) == 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pFVar24 = pFVar16, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar21 = param_1->ValueData;
            if (((param_2 < 0) || (pFVar24->ArrayDim <= param_2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pvVar21 == (void *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_128 = (ulonglong)
                        *(uint *)((longlong)pvVar21 +
                                 (longlong)pFVar24->Offset_Internal + lVar25 * pFVar24->ElementSize)
            ;
            CborStructSerializerBackend::WritePropertyValue<__int64>
                      (&this->CborWriter,param_1,(long64 *)&local_128);
            return;
          }
          pFVar9 = FUInt64Property::StaticClass();
          if (param_1->FieldType == pFVar9) {
            pFVar16 = (FProperty *)
                      CastFieldChecked<FUInt64Property>((FField *)param_1->ValueProperty);
            plVar17 = FProperty::ContainerVoidPtrToValuePtrInternal
                                (pFVar16,param_1->ValueData,param_2);
            local_120 = *plVar17;
            CborStructSerializerBackend::WritePropertyValue<__int64>
                      (&this->CborWriter,param_1,&local_120);
            return;
          }
          pFVar9 = FNameProperty::StaticClass();
          if (param_1->FieldType == pFVar9) {
            pFVar16 = (FProperty *)CastFieldChecked<FNameProperty>((FField *)param_1->ValueProperty)
            ;
            this_01 = FProperty::ContainerVoidPtrToValuePtrInternal
                                (pFVar16,param_1->ValueData,param_2);
            pFVar13 = ::FName::ToString(this_01,&local_a8);
            CborStructSerializerBackend::WritePropertyValue<FString>
                      (&this->CborWriter,param_1,pFVar13);
            goto LAB_148bb86b4;
          }
          pFVar9 = FStrProperty::StaticClass();
          if (param_1->FieldType == pFVar9) {
            pFVar16 = (FProperty *)CastFieldChecked<FStrProperty>((FField *)param_1->ValueProperty);
            pFVar13 = FProperty::ContainerVoidPtrToValuePtrInternal
                                (pFVar16,param_1->ValueData,param_2);
            CborStructSerializerBackend::WritePropertyValue<FString>
                      (&this->CborWriter,param_1,pFVar13);
            return;
          }
          pFVar9 = FAnsiStrProperty::StaticClass();
          if (param_1->FieldType != pFVar9) {
            pFVar9 = FUtf8StrProperty::StaticClass();
            if (param_1->FieldType != pFVar9) {
              pFVar9 = FTextProperty::StaticClass();
              if (param_1->FieldType == pFVar9) {
                pFVar16 = (FProperty *)
                          CastFieldChecked<FTextProperty>((FField *)param_1->ValueProperty);
                this_02 = FProperty::ContainerVoidPtrToValuePtrInternal
                                    (pFVar16,param_1->ValueData,param_2);
                if ((this->Flags & WriteTextAsComplexString) == Legacy) {
                  pFVar13 = FText::ToString(this_02);
                  CborStructSerializerBackend::WritePropertyValue<FString>
                            (&this->CborWriter,param_1,pFVar13);
                  return;
                }
                local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_190.Data.ArrayNum = 0;
                local_190.Data.ArrayMax = 0;
                FTextStringHelper::WriteToBuffer(&local_190,this_02,false,false);
                CborStructSerializerBackend::WritePropertyValue<FString>
                          (&this->CborWriter,param_1,&local_190);
                local_a8.Data.AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
              }
              else {
                pFVar9 = FSoftClassProperty::StaticClass();
                if (param_1->FieldType == pFVar9) {
                  this_03 = CastFieldChecked<FSoftClassProperty>((FField *)param_1->ValueProperty);
                  pvVar21 = FProperty::ContainerVoidPtrToValuePtrInternal
                                      ((FProperty *)this_03,param_1->ValueData,param_2);
                  FSoftObjectPath::ToString((FSoftObjectPath *)((longlong)pvVar21 + 8),&local_f0);
                  CborStructSerializerBackend::WritePropertyValue<FString>
                            (&this->CborWriter,param_1,&local_f0);
                  local_a8.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
                }
                else {
                  pFVar9 = FWeakObjectProperty::StaticClass();
                  if (param_1->FieldType == pFVar9) {
                    this_04 = CastFieldChecked<FWeakObjectProperty>
                                        ((FField *)param_1->ValueProperty);
                    this_05 = FProperty::ContainerVoidPtrToValuePtrInternal
                                        ((FProperty *)this_04,param_1->ValueData,param_2);
                    bVar6 = FWeakObjectPtr::IsValid(this_05);
                    if (bVar6) {
                      this_06 = FWeakObjectPtr::Get(this_05);
                      pFVar13 = UObjectBaseUtility::GetPathName
                                          ((UObjectBaseUtility *)this_06,&local_78,(UObject *)0x0);
                      CborStructSerializerBackend::WritePropertyValue<FString>
                                (&this->CborWriter,param_1,pFVar13);
                      local_a8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
                    }
                    else {
                      local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_180.Data.ArrayNum = 0;
                      local_180.Data.ArrayMax = 0;
                      CborStructSerializerBackend::WritePropertyValue<FString>
                                (&this->CborWriter,param_1,&local_180);
                      local_a8.Data.AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
                    }
                  }
                  else {
                    pFVar9 = FSoftObjectProperty::StaticClass();
                    pFVar16 = param_1->ValueProperty;
                    if (param_1->FieldType == pFVar9) {
                      this_07 = CastFieldChecked<FSoftObjectProperty>((FField *)pFVar16);
                      pvVar21 = FProperty::ContainerVoidPtrToValuePtrInternal
                                          ((FProperty *)this_07,param_1->ValueData,param_2);
                      FSoftObjectPath::ToString
                                ((FSoftObjectPath *)((longlong)pvVar21 + 8),&local_e0);
                      CborStructSerializerBackend::WritePropertyValue<FString>
                                (&this->CborWriter,param_1,&local_e0);
                      local_a8.Data.AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
                    }
                    else if ((pFVar16 == (FProperty *)0x0) ||
                            (((uint)(int)((FFieldClass *)pFVar16->_padding_)->CastFlags >> 0x10 & 1)
                             == 0)) {
                      if ((byte)LogSerialization._0_1_ < 6) {
                        return;
                      }
                      local_118 = (FName)param_1->ValueType->_padding_;
                      ::FName::ToString(&local_118,&local_48);
                      this_09 = FField::GetFName((FField *)param_1->ValueProperty);
                      ::FName::ToString((FName *)this_09,&local_58);
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
                      local_a8.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
                      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_58.Data.AllocatorInstance.Data);
                        local_a8.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
                      }
                    }
                    else {
                      this_08 = (UObjectBaseUtility *)
                                (**(code **)(pFVar16->_padding_ + 0x208))
                                          (pFVar16,param_1->ValueData);
                      if (this_08 == (UObjectBaseUtility *)0x0) {
                        local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_170.Data.ArrayNum = 0;
                        local_170.Data.ArrayMax = 0;
                        CborStructSerializerBackend::WritePropertyValue<FString>
                                  (&this->CborWriter,param_1,&local_170);
                        local_a8.Data.AllocatorInstance.Data = local_170.Data.AllocatorInstance.Data
                        ;
                      }
                      else {
                        pFVar13 = UObjectBaseUtility::GetPathName(this_08,&local_68,(UObject *)0x0);
                        CborStructSerializerBackend::WritePropertyValue<FString>
                                  (&this->CborWriter,param_1,pFVar13);
                        local_a8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
                      }
                    }
                  }
                }
              }
              goto LAB_148bb86b4;
            }
            pFVar24 = param_1->ValueProperty;
            if (((pFVar24 == (FProperty *)0x0) ||
                ((*(ulonglong *)(pFVar24->_padding_ + 0x18) & 0x1000000000000000) == 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pFVar24 = pFVar16, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar20 = FProperty::ContainerVoidPtrToValuePtrInternal
                                (pFVar24,param_1->ValueData,param_2);
            pFVar16 = param_1->ValueProperty;
            pFVar26 = &this->CborWriter;
            if (pFVar16 == (FProperty *)0x0) goto LAB_148bb8408;
            if (pFVar16->ArrayDim < 2) {
              pFVar9 = FArrayProperty::StaticClass();
              bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar16->_padding_,pFVar9);
              if (((bVar6) && (pFVar16->_padding_ != 0)) ||
                 ((pFVar19 = FField::GetOwner<FSetProperty>((FField *)param_1->ValueProperty),
                  pFVar19 != (FSetProperty *)0x0 ||
                  ((pFVar10 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty),
                   pFVar10 != (FMapProperty *)0x0 && (param_1->KeyProperty == (FProperty *)0x0))))))
              goto LAB_148bb837a;
            }
            else {
LAB_148bb837a:
              if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148bb8408;
            }
            pFVar16 = param_1->KeyProperty;
            if (pFVar16 == (FProperty *)0x0) {
              pFVar13 = FField::GetName((FField *)param_1->ValueProperty,&local_88);
              FCborWriter::WriteValue(pFVar26,pFVar13);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
LAB_148bb8408:
              FCborWriter::WriteValue(pFVar26,pFVar20);
              return;
            }
            local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a0.Data.ArrayNum = 0;
            local_1a0.Data.ArrayMax = 0;
            (**(code **)(pFVar16->_padding_ + 0xe0))
                      (pFVar16,&local_1a0,param_1->KeyData,0,0,0,(ulonglong)uVar27 << 0x20,0);
            FCborWriter::WriteValue(pFVar26,&local_1a0);
            FCborWriter::WriteValue(pFVar26,pFVar20);
            local_a8.Data.AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
            goto LAB_148bb86b4;
          }
          pFVar24 = param_1->ValueProperty;
          if (((pFVar24 == (FProperty *)0x0) ||
              ((*(ulonglong *)(pFVar24->_padding_ + 0x18) & 0x2000000000000000) == 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x472,L"CastFieldChecked failed with 0x%016llx"),
             pFVar24 = pFVar16, bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar18 = FProperty::ContainerVoidPtrToValuePtrInternal
                              (pFVar24,param_1->ValueData,param_2);
          pFVar16 = param_1->ValueProperty;
          pFVar26 = &this->CborWriter;
          if (pFVar16 == (FProperty *)0x0) goto LAB_148bb82a3;
          if (pFVar16->ArrayDim < 2) {
            pFVar9 = FArrayProperty::StaticClass();
            bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar16->_padding_,pFVar9);
            if (((bVar6) && (pFVar16->_padding_ != 0)) ||
               ((pFVar19 = FField::GetOwner<FSetProperty>((FField *)param_1->ValueProperty),
                pFVar19 != (FSetProperty *)0x0 ||
                ((pFVar10 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty),
                 pFVar10 != (FMapProperty *)0x0 && (param_1->KeyProperty == (FProperty *)0x0))))))
            goto LAB_148bb8211;
          }
          else {
LAB_148bb8211:
            if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148bb82a3;
          }
          pFVar16 = param_1->KeyProperty;
          if (pFVar16 == (FProperty *)0x0) {
            pFVar13 = FField::GetName((FField *)param_1->ValueProperty,&local_98);
            FCborWriter::WriteValue(pFVar26,pFVar13);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
LAB_148bb82a3:
            FCborWriter::WriteValue(pFVar26,pFVar18);
            return;
          }
          local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1b0.Data.ArrayNum = 0;
          local_1b0.Data.ArrayMax = 0;
          (**(code **)(pFVar16->_padding_ + 0xe0))
                    (pFVar16,&local_1b0,param_1->KeyData,0,0,0,(ulonglong)uVar27 << 0x20,0);
          FCborWriter::WriteValue(pFVar26,&local_1b0);
          FCborWriter::WriteValue(pFVar26,pFVar18);
          local_a8.Data.AllocatorInstance.Data = local_1b0.Data.AllocatorInstance.Data;
        }
      }
    }
LAB_148bb86b4:
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

