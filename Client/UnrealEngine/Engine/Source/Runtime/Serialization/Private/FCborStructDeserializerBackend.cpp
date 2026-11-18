// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 11

// FCborStructDeserializerBackend @ 148b9bb30

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FCborStructDeserializerBackend * __thiscall
FCborStructDeserializerBackend::FCborStructDeserializerBackend
          (FCborStructDeserializerBackend *this,FArchive *param_1,ECborEndianness param_2,
          bool param_3)

{
  this->_padding_ = (longlong)&___7FCborStructDeserializerBackend__6B_;
  FCborReader::FCborReader(&this->CborReader,param_1,param_2);
  (this->LastContext).Header.Header = '\x1c';
  (this->LastContext).field1_0x8.IntValue = 0;
  (this->LastContext).RawTextValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastContext).RawTextValue.ArrayNum = 0;
  (this->LastContext).RawTextValue.ArrayMax = 0;
  (this->LastMapKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastMapKey).Data.ArrayNum = 0;
  (this->LastMapKey).Data.ArrayMax = 0;
  this->DeserializingByteArrayIndex = 0;
  this->bDeserializingByteArray = false;
  this->bIsLWCCompatibilityMode = param_3;
  return this;
}

// ~FCborStructDeserializerBackend @ 148ba04e0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
FCborStructDeserializerBackend::~FCborStructDeserializerBackend
          (FCborStructDeserializerBackend *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCborStructDeserializerBackend__6B_;
  pFVar1 = (this->LastMapKey).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastContext).RawTextValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCborReader::~FCborReader(&this->CborReader);
  this->_padding_ = (longlong)&___7IStructDeserializerBackend__6B_;
  return;
}

// GetCurrentPropertyName @ 148ba83f0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FString * __thiscall
FCborStructDeserializerBackend::GetCurrentPropertyName(FCborStructDeserializerBackend *this)

{
  return &this->LastMapKey;
}

// GetDebugString @ 148ba8420

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FString * __thiscall
FCborStructDeserializerBackend::GetDebugString
          (FCborStructDeserializerBackend *this,FString *__return_storage_ptr__)

{
  FArchive *pFVar1;
  
  pFVar1 = FCborReader::GetArchive(&this->CborReader);
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Offset: %llu");
  return __return_storage_ptr__;
}

// GetLastErrorMessage @ 148ba8580

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FString * __thiscall
FCborStructDeserializerBackend::GetLastErrorMessage(FCborStructDeserializerBackend *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCborStructDeserializerBackend::GetLastErrorMessage'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Dummy;
}

// GetNextToken @ 148ba8600

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

bool __thiscall
FCborStructDeserializerBackend::GetNextToken
          (FCborStructDeserializerBackend *this,EStructDeserializerBackendTokens *param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EStructDeserializerBackendTokens EVar5;
  FCborContext *pFVar6;
  FString *pFVar7;
  byte bVar8;
  int iVar9;
  FString local_28;
  
  ::FString::Reset(&this->LastMapKey,0);
  if (this->bDeserializingByteArray != false) {
    if ((((this->LastContext).Header.Header & 0xe0) != 0x40) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MajorType() == ECborCode::ByteString",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                           ,0x11d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar9 = (this->LastContext).RawTextValue.ArrayNum + -1;
    if ((iVar9 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (iVar9 <= this->DeserializingByteArrayIndex) {
      this->bDeserializingByteArray = false;
      *param_1 = ArrayEnd;
      return true;
    }
    *param_1 = Property;
    return true;
  }
  bVar3 = FCborReader::ReadNext(&this->CborReader,&this->LastContext);
  bVar8 = (this->LastContext).Header.Header;
  if (bVar3) {
    if (bVar8 == 0xff) {
      if (((this->LastContext).RawTextValue.ArrayNum != 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Header.RawCode() == ECborCode::Break && RawTextValue.Num() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                             ,0xcf,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (((this->LastContext).RawTextValue.ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FVar1 = *(this->LastContext).RawTextValue.AllocatorInstance.Data;
      if (((FVar1 != (FScriptContainerElement)0x80) && (FVar1 != (FScriptContainerElement)0xa0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerEndType == ECborCode::Array || ContainerEndType == ECborCode::Map"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\Backends\\CborStructDeserializerBackend.cpp"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      EVar5 = StructureEnd;
      if (FVar1 == (FScriptContainerElement)0x80) {
        EVar5 = ArrayEnd;
      }
      *param_1 = EVar5;
    }
    else {
      pFVar6 = FCborReader::GetContext(&this->CborReader);
      if (((pFVar6->Header).Header & 0xe0) == 0xa0) {
        pFVar6 = FCborReader::GetContext(&this->CborReader);
        bVar8 = (pFVar6->Header).Header;
        if ((((bVar8 != 0xff) && (bVar8 = bVar8 & 0xe0, bVar8 != 0x80)) &&
            (((bVar8 - 0x40 & 0x9f) != 0 || (bVar8 == 0x80)))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawCode() == ECborCode::Break || MajorType() == ECborCode::Array || MajorType() == ECborCode::Map || MajorType() == ECborCode::ByteString || MajorType() == ECborCode::TextString"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                               ,0xd6,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (((pFVar6->field1_0x8).BoolValue & 1U) != 0) {
          if ((((this->LastContext).Header.Header & 0xe0) != 0x60) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("LastContext.MajorType() == ECborCode::TextString",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\Backends\\CborStructDeserializerBackend.cpp"
                                 ,0x4e,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          pFVar7 = FCborContext::AsString(&this->LastContext,&local_28);
          ::FString::operator=(&this->LastMapKey,pFVar7);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          bVar3 = FCborReader::ReadNext(&this->CborReader,&this->LastContext);
          if (!bVar3) {
            bVar8 = (this->LastContext).Header.Header & 0x1f;
            if ((bVar8 == 0x1d) || (EVar5 = None, bVar8 == 0x1e)) goto LAB_148ba88b0;
            goto LAB_148ba88b5;
          }
        }
      }
      switch((this->LastContext).Header.Header & 0xe0) {
      default:
        *param_1 = Property;
        break;
      case 0x40:
        *param_1 = ArrayStart;
        this->DeserializingByteArrayIndex = 0;
        this->bDeserializingByteArray = true;
        break;
      case 0x80:
        *param_1 = ArrayStart;
        break;
      case 0xa0:
        *param_1 = StructureStart;
        break;
      case 0xc0:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\Backends\\CborStructDeserializerBackend.cpp"
                           ,0x71,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
    bVar3 = true;
  }
  else {
    bVar8 = bVar8 & 0x1f;
    if (bVar8 == 0x1d) {
LAB_148ba88b0:
      EVar5 = Error;
    }
    else {
      EVar5 = None;
      if (bVar8 == 0x1e) {
        *param_1 = Error;
        return false;
      }
    }
LAB_148ba88b5:
    *param_1 = EVar5;
    bVar3 = false;
  }
  return bVar3;
}

// ReadPODArray @ 148ba95f0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

bool __thiscall
FCborStructDeserializerBackend::ReadPODArray
          (FCborStructDeserializerBackend *this,FArrayProperty *param_1,void *param_2)

{
  EArrayPropertyFlags EVar1;
  FProperty *pFVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  void *_Dst;
  FScriptArrayHelper_u_8 FVar7;
  FScriptArrayHelper local_28;
  
  if (((this->bDeserializingByteArray == false) ||
      (pFVar2 = param_1->Inner, pFVar2 == (FProperty *)0x0)) ||
     (((*(byte *)(pFVar2->_padding_ + 0x18) & 0x40) == 0 &&
      ((pFVar2 == (FProperty *)0x0 || ((*(byte *)(pFVar2->_padding_ + 0x18) & 2) == 0)))))) {
    return false;
  }
  _Dst = (void *)0x0;
  if ((int)param_1->_padding_ < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (param_2 == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar7.HeapArray =
       (FScriptArray *)((longlong)*(int *)((longlong)&param_1->_padding_ + 4) + (longlong)param_2);
  EVar1 = param_1->ArrayFlags;
  local_28.ElementAlignment = (**(code **)(param_1->Inner->_padding_ + 0x168))();
  local_28.InnerProperty = param_1->Inner;
  local_28.ElementSize = (local_28.InnerProperty)->ElementSize;
  local_28.field1_0x8.HeapArray = FVar7.HeapArray;
  local_28.ArrayFlags = EVar1;
  if (local_28.ElementSize < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (local_28.InnerProperty == (FProperty *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (((this->LastContext).Header.Header & 0xe0) != 0x40) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MajorType() == ECborCode::ByteString",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                       ,0x11d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = (this->LastContext).RawTextValue.ArrayNum + -1;
  _Src = (this->LastContext).RawTextValue.AllocatorInstance.Data;
  if (iVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else if (iVar6 == 0) goto LAB_148ba97de;
  FScriptArrayHelper::AddUninitializedValues(&local_28,iVar6);
  if ((((local_28.field1_0x8.FreezableArray)->ArrayNum != 0) &&
      (_Dst = (void *)(local_28.field1_0x8.FreezableArray)->_padding_,
      (local_28.ArrayFlags & UsesMemoryImageAllocator) != None)) && (((ulonglong)_Dst & 1) != 0)) {
    _Dst = &(local_28.field1_0x8.HeapArray)->field_0x0 + ((longlong)_Dst >> 0x18);
  }
  memcpy(_Dst,_Src,(longlong)iVar6);
LAB_148ba97de:
  this->bDeserializingByteArray = false;
  return true;
}

// ReadProperty @ 148ba9830

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCborStructDeserializerBackend::ReadProperty
          (FCborStructDeserializerBackend *this,FProperty *param_1,FProperty *param_2,void *param_3,
          int param_4)

{
  FCborContext *this_00;
  uchar uVar1;
  uint uVar2;
  ITextData *pIVar3;
  UEnum *this_01;
  code *pcVar4;
  double dVar5;
  int *piVar6;
  FSoftClassProperty *pFVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  uint uVar12;
  undefined4 uVar13;
  double *pdVar14;
  UStruct *pUVar15;
  float *pfVar16;
  FCoreTexts *pFVar17;
  FAnsiString *pFVar18;
  FUtf8String *pFVar19;
  FString *pFVar20;
  FName *pFVar21;
  FName *pFVar22;
  wchar_t *pwVar23;
  FText *pFVar24;
  longlong *plVar25;
  long64 lVar26;
  undefined1 *puVar27;
  void *pvVar28;
  size_t sVar29;
  UClass *pUVar30;
  UObject *pUVar31;
  undefined8 *puVar32;
  FWeakObjectPtr *pFVar33;
  uchar *puVar34;
  undefined2 *puVar35;
  undefined4 *puVar36;
  ulong64 *puVar37;
  ulong64 uVar38;
  byte bVar39;
  ForAnyElementType FVar40;
  float fVar41;
  bool local_res8 [8];
  FSoftClassProperty *local_res10;
  FString local_3b8;
  FName local_3a8;
  FName local_3a0;
  FName local_398;
  FName local_390;
  FName local_388;
  FWeakObjectPtr local_380;
  FName local_378;
  FName local_370;
  FText local_368;
  FSoftObjectPath local_358;
  FSoftObjectPath local_338;
  FAnsiString local_318;
  FUtf8String local_308;
  UObject *local_2f8;
  FString local_2f0;
  undefined1 local_2e0 [8];
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FScriptContainerElement *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  FScriptContainerElement *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FScriptContainerElement *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  FString local_268;
  TArrayView<unsigned_char_const_,int> local_258;
  FString local_248;
  FScriptContainerElement *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FSoftClassProperty **local_228;
  FCborStructDeserializerBackend *local_220;
  wchar_t *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FName local_1f8;
  FString local_1f0;
  FScriptContainerElement *local_1e0 [2];
  FString local_1d0;
  FScriptContainerElement *local_1c0 [2];
  FString local_1b0;
  FScriptContainerElement *local_1a0 [2];
  FString local_190;
  FScriptContainerElement *local_180 [2];
  FText local_170;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  FString local_f8;
  void *local_e8 [2];
  FString local_d8;
  FString local_c8;
  FScriptContainerElement *local_b8 [2];
  FName local_a8;
  FName local_a0;
  undefined1 local_98 [24];
  void *local_80;
  undefined1 local_70 [24];
  void *local_58;
  
  this_00 = &this->LastContext;
  bVar39 = (this_00->Header).Header;
  bVar8 = bVar39 & 0xe0;
  local_res10 = (FSoftClassProperty *)param_1;
  if (bVar8 == 0) {
    if (param_1 != (FProperty *)0x0) {
      if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) {
        uVar10 = (this->LastContext).field1_0x8.BoolValue;
        goto LAB_148baaa05;
      }
      if (param_1 != (FProperty *)0x0) {
        if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x12 & 1) != 0) {
          uVar38 = FCborContext::AsUInt(this_00);
          uVar11 = (undefined2)uVar38;
          goto LAB_148baaa4b;
        }
        if (param_1 != (FProperty *)0x0) {
          if ((*(uint *)(param_1->_padding_ + 0x18) >> 0xb & 1) != 0) {
            uVar38 = FCborContext::AsUInt(this_00);
            uVar13 = (undefined4)uVar38;
            goto LAB_148baaa95;
          }
          if (param_1 != (FProperty *)0x0) {
            if ((*(uint *)(param_1->_padding_ + 0x18) >> 9 & 1) != 0) {
              uVar38 = FCborContext::AsUInt(this_00);
              goto LAB_148baaade;
            }
            goto LAB_148baab09;
          }
        }
      }
    }
  }
  else {
    if (bVar8 != 0x20) {
      if (bVar8 == 0x40) {
        if ((this->bDeserializingByteArray == false) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("bDeserializingByteArray",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\Backends\\CborStructDeserializerBackend.cpp"
                               ,0x114,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        FCborContext::AsByteArray(this_00,&local_258);
        if ((local_258.ArrayNum <= this->DeserializingByteArrayIndex) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("DeserializingByteArrayIndex < DeserializedByteArray.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\Backends\\CborStructDeserializerBackend.cpp"
                               ,0x118,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        uVar2 = this->DeserializingByteArrayIndex;
        this->DeserializingByteArrayIndex = uVar2 + 1;
        uVar12 = 0;
        if ((int)uVar2 < local_258.ArrayNum) {
          uVar12 = ~uVar2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        uVar1 = local_258.DataPtr[(int)uVar2];
        if ((local_res10 != (FSoftClassProperty *)0x0) &&
           (((*(byte *)(local_res10->_padding_ + 0x18) & 0x40) != 0 ||
            ((local_res10 != (FSoftClassProperty *)0x0 &&
             ((*(byte *)(local_res10->_padding_ + 0x18) & 2) != 0)))))) {
          puVar34 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              ((FProperty *)local_res10,param_2,param_3,param_4);
          if (puVar34 == (uchar *)0x0) {
            return false;
          }
          *puVar34 = uVar1;
          return true;
        }
        if ((byte)LogSerialization._0_1_ < 6) {
          return false;
        }
        ::FName::ToString((FName *)local_res10->_padding_,&local_248);
        pFVar7 = local_res10;
        bVar9 = IsThisNotNull(local_res10,"FField::GetFName");
        if (bVar9) {
          local_3a8 = (FName)pFVar7->_padding_;
        }
        else {
          local_3a8.ComparisonIndex.Value = 0;
          local_3a8.Number = 0;
        }
        ::FName::ToString(&local_3a8,&local_d8);
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Error_while_des_151c72158,
                   (FLogCategoryBase *)&LogSerialization);
        local_b8[0] = local_248.Data.AllocatorInstance.Data;
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          local_b8[0] = local_248.Data.AllocatorInstance.Data;
        }
        goto LAB_148baac6d;
      }
      if (bVar8 == 0x60) {
        if (param_1 != (FProperty *)0x0) {
          if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x2000000000000000) != 0) {
            FAnsiString::FAnsiString
                      (&local_318,(char *)(this->LastContext).RawTextValue.AllocatorInstance.Data);
            pFVar18 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            FVar40.Data = local_318.Data.AllocatorInstance.Data;
            local_308.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
            if (pFVar18 == (FAnsiString *)0x0) {
              bVar9 = false;
            }
            else {
              if (pFVar18 != &local_318) {
                piVar6 = &(pFVar18->Data).ArrayMax;
                (pFVar18->Data).ArrayNum = local_318.Data.ArrayNum;
                if ((local_318.Data.ArrayNum == 0) && (*piVar6 == 0)) {
                  *piVar6 = 0;
                  bVar9 = true;
                  goto LAB_148ba9ee4;
                }
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,local_318.Data.ArrayNum,*piVar6,(ForAnyElementType *)pFVar18,
                           local_318.Data.ArrayNum,piVar6);
                if (local_318.Data.ArrayNum != 0) {
                  memcpy((pFVar18->Data).AllocatorInstance.Data,FVar40.Data,
                         (longlong)local_318.Data.ArrayNum);
                }
              }
              bVar9 = true;
              local_308.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
            }
            goto LAB_148ba9ee4;
          }
          if (((param_1 != (FProperty *)0x0) &&
              ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000000) != 0)) &&
             (param_1 != (FProperty *)0x0)) {
            FUtf8String::FUtf8String
                      (&local_308,(char *)(this->LastContext).RawTextValue.AllocatorInstance.Data);
            pFVar19 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            FVar40.Data = local_308.Data.AllocatorInstance.Data;
            if (pFVar19 == (FUtf8String *)0x0) {
              bVar9 = false;
            }
            else {
              if (pFVar19 != &local_308) {
                piVar6 = &(pFVar19->Data).ArrayMax;
                (pFVar19->Data).ArrayNum = local_308.Data.ArrayNum;
                if ((local_308.Data.ArrayNum == 0) && (*piVar6 == 0)) {
                  *piVar6 = 0;
                  bVar9 = true;
                  goto LAB_148ba9ee4;
                }
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,local_308.Data.ArrayNum,*piVar6,(ForAnyElementType *)pFVar19,
                           local_308.Data.ArrayNum,piVar6);
                if (local_308.Data.ArrayNum != 0) {
                  memcpy((pFVar19->Data).AllocatorInstance.Data,FVar40.Data,
                         (longlong)local_308.Data.ArrayNum);
                }
              }
              bVar9 = true;
            }
            goto LAB_148ba9ee4;
          }
        }
        FCborContext::AsString(this_00,&local_3b8);
        pFVar7 = local_res10;
        if (local_res10 == (FSoftClassProperty *)0x0) goto LAB_148baa71b;
        if ((*(uint *)(local_res10->_padding_ + 0x18) >> 0xe & 1) == 0) {
          if (local_res10 == (FSoftClassProperty *)0x0) goto LAB_148baa71b;
          if ((*(uint *)(local_res10->_padding_ + 0x18) >> 0xd & 1) != 0) {
            FVar40.Data = (FScriptContainerElement *)L"";
            if (local_3b8.Data.ArrayNum != 0) {
              FVar40.Data = local_3b8.Data.AllocatorInstance.Data;
            }
            pFVar21 = ::FName::FName(&local_1f8,(wchar_t *)FVar40.Data);
            pFVar22 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                ((FProperty *)pFVar7,param_2,param_3,param_4);
            if (pFVar22 != (FName *)0x0) {
              bVar9 = true;
              *pFVar22 = *pFVar21;
              local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
              goto LAB_148ba9ee4;
            }
            goto LAB_148baa81d;
          }
          if (local_res10 == (FSoftClassProperty *)0x0) goto LAB_148baa71b;
          if ((*(uint *)(local_res10->_padding_ + 0x18) >> 0x1e & 1) != 0) {
            FText::FText(&local_368);
            FVar40.Data = (FScriptContainerElement *)L"";
            if (local_3b8.Data.ArrayNum != 0) {
              FVar40.Data = local_3b8.Data.AllocatorInstance.Data;
            }
            pwVar23 = FTextStringHelper::ReadFromBuffer
                                ((wchar_t *)FVar40.Data,&local_368,(wchar_t *)0x0,(wchar_t *)0x0,
                                 false);
            if (pwVar23 == (wchar_t *)0x0) {
              pFVar24 = FText::FromString(&local_170,&local_3b8);
              FText::operator=(&local_368,pFVar24);
              if (local_170.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
              }
            }
            plVar25 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                ((FProperty *)pFVar7,param_2,param_3,param_4);
            if (plVar25 == (longlong *)0x0) {
              bVar9 = false;
            }
            else {
              pIVar3 = (ITextData *)*plVar25;
              if (pIVar3 != local_368.TextData.Reference) {
                *plVar25 = (longlong)local_368.TextData.Reference;
                if (local_368.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_368.TextData.Reference + 8))
                            (local_368.TextData.Reference,local_2e0);
                }
                if (pIVar3 != (ITextData *)0x0) {
                  (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
                }
              }
              bVar9 = true;
              *(uint *)(plVar25 + 1) = local_368.Flags;
            }
            local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
            if (local_368.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
              local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
            }
            goto LAB_148ba9ee4;
          }
          if (local_res10 == (FSoftClassProperty *)0x0) goto LAB_148baa71b;
          if ((*(byte *)(local_res10->_padding_ + 0x18) & 0x40) != 0) {
            this_01 = (UEnum *)local_res10->_padding_;
            if (this_01 != (UEnum *)0x0) {
              FVar40.Data = (FScriptContainerElement *)L"";
              if (local_3b8.Data.ArrayNum != 0) {
                FVar40.Data = local_3b8.Data.AllocatorInstance.Data;
              }
              pFVar21 = ::FName::FName(&local_a0,(wchar_t *)FVar40.Data);
              lVar26 = UEnum::GetValueByName(this_01,*pFVar21,None);
              if ((lVar26 != -1) &&
                 (puVar27 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                      ((FProperty *)pFVar7,param_2,param_3,param_4),
                 puVar27 != (undefined1 *)0x0)) {
                *puVar27 = (char)lVar26;
                bVar9 = true;
                local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
                goto LAB_148ba9ee4;
              }
            }
            goto LAB_148baa81d;
          }
          if (local_res10 == (FSoftClassProperty *)0x0) goto LAB_148baa71b;
          if ((*(ulonglong *)(local_res10->_padding_ + 0x18) & 0x1000000000000) != 0) {
            pUVar30 = (local_res10->MetaClass).field0_0x0.DebugPtr;
            FVar40.Data = (FScriptContainerElement *)L"";
            if (local_3b8.Data.ArrayNum != 0) {
              FVar40.Data = local_3b8.Data.AllocatorInstance.Data;
            }
            pFVar21 = ::FName::FName(&local_a8,(wchar_t *)FVar40.Data);
            lVar26 = UEnum::GetValueByName((UEnum *)pUVar30,*pFVar21,None);
            if ((lVar26 != -1) &&
               (pvVar28 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                    ((FProperty *)pFVar7,param_2,param_3,param_4),
               pvVar28 != (void *)0x0)) {
              (**(code **)(*(longlong *)pFVar7->_padding_ + 0x1e8))
                        ((longlong *)pFVar7->_padding_,pvVar28,lVar26);
              bVar9 = true;
              local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
              goto LAB_148ba9ee4;
            }
            goto LAB_148baa81d;
          }
          if (local_res10 == (FSoftClassProperty *)0x0) goto LAB_148baa71b;
          if ((*(uint *)(local_res10->_padding_ + 0x18) >> 10 & 1) == 0) {
            if (local_res10 == (FSoftClassProperty *)0x0) goto LAB_148baa71b;
            if ((*(ulonglong *)(local_res10->_padding_ + 0x18) & 0x200000000) != 0) {
              local_208 = local_3b8.Data.AllocatorInstance.Data;
              local_338.AssetPath.PackageName.ComparisonIndex.Value = 0;
              local_338.AssetPath.PackageName.Number = 0;
              local_338.AssetPath.AssetName.ComparisonIndex.Value = 0;
              local_338.AssetPath.AssetName.Number = 0;
              local_338.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iStack_200 = local_3b8.Data.ArrayNum + -1;
              local_338.SubPathString.Data.ArrayNum = 0;
              local_338.SubPathString.Data.ArrayMax = 0;
              if (local_3b8.Data.ArrayNum == 0) {
                iStack_200 = 0;
              }
              local_138._12_4_ = uStack_1fc;
              local_138.Size = iStack_200;
              local_138.DataPtr = (wchar_t *)local_3b8.Data.AllocatorInstance.Data;
              FSoftObjectPath::SetPath(&local_338,&local_138);
              local_98._0_8_ = 0;
              FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_98 + 8),&local_338);
              bVar9 = StructDeserializerBackendUtilities::
                      SetPropertyValue<FSoftClassProperty,FSoftObjectPtr>
                                (pFVar7,param_2,param_3,param_4,(FSoftObjectPtr *)local_98);
              if (local_80 != (void *)0x0) {
                FMemory::Free(local_80);
              }
              local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
              if (local_338.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_338.SubPathString.Data.AllocatorInstance.Data);
                local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
              }
              goto LAB_148ba9ee4;
            }
            if (local_res10 == (FSoftClassProperty *)0x0) goto LAB_148baa71b;
            if ((*(uint *)(local_res10->_padding_ + 0x18) >> 0x10 & 1) == 0) {
              if (local_res10 != (FSoftClassProperty *)0x0) {
                if ((*(uint *)(local_res10->_padding_ + 0x18) >> 0x1b & 1) != 0) {
                  bVar9 = false;
                  iStack_270 = 0;
                  if (local_3b8.Data.ArrayNum == 0) {
                    local_278 = (FScriptContainerElement *)0x15060d16c;
LAB_148baa59a:
                    sVar29 = wcslen((wchar_t *)local_278);
                    iStack_270 = (int)sVar29;
                  }
                  else {
                    local_278 = local_3b8.Data.AllocatorInstance.Data;
                    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                    goto LAB_148baa59a;
                  }
                  local_118._12_4_ = uStack_26c;
                  local_118.Size = iStack_270;
                  local_118.DataPtr = (wchar_t *)local_278;
                  local_2f8 = StaticFindObject((UClass *)pFVar7->_padding_,(UObject *)0x0,&local_118
                                               ,None);
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_2f8 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_2f8);
                  }
                  local_380.ObjectIndex = 0;
                  local_380.ObjectSerialNumber = 0;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_2f8 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_2f8);
                  }
                  FWeakObjectPtr::operator=(&local_380,(FObjectPtr)&local_2f8);
                  pFVar33 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                      ((FProperty *)pFVar7,param_2,param_3,param_4);
                  local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
                  if (pFVar33 != (FWeakObjectPtr *)0x0) {
                    bVar9 = true;
                    *pFVar33 = local_380;
                  }
                  goto LAB_148ba9ee4;
                }
                if ((local_res10 != (FSoftClassProperty *)0x0) &&
                   ((*(uint *)(local_res10->_padding_ + 0x18) >> 0x1d & 1) != 0)) {
                  local_238 = local_3b8.Data.AllocatorInstance.Data;
                  local_358.AssetPath.PackageName.ComparisonIndex.Value = 0;
                  local_358.AssetPath.PackageName.Number = 0;
                  local_358.AssetPath.AssetName.ComparisonIndex.Value = 0;
                  local_358.AssetPath.AssetName.Number = 0;
                  local_358.SubPathString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  iStack_230 = local_3b8.Data.ArrayNum + -1;
                  local_358.SubPathString.Data.ArrayNum = 0;
                  local_358.SubPathString.Data.ArrayMax = 0;
                  if (local_3b8.Data.ArrayNum == 0) {
                    iStack_230 = 0;
                  }
                  local_108._12_4_ = uStack_22c;
                  local_108.Size = iStack_230;
                  local_108.DataPtr = (wchar_t *)local_3b8.Data.AllocatorInstance.Data;
                  FSoftObjectPath::SetPath(&local_358,&local_108);
                  local_70._0_8_ = 0;
                  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_70 + 8),&local_358);
                  bVar9 = StructDeserializerBackendUtilities::
                          SetPropertyValue<FSoftObjectProperty,FSoftObjectPtr>
                                    ((FSoftObjectProperty *)pFVar7,param_2,param_3,param_4,
                                     (FSoftObjectPtr *)local_70);
                  if (local_58 != (void *)0x0) {
                    FMemory::Free(local_58);
                  }
                  local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
                  if (local_358.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_358.SubPathString.Data.AllocatorInstance.Data);
                    local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
                  }
                  goto LAB_148ba9ee4;
                }
              }
LAB_148baa71b:
              if (5 < (byte)LogSerialization._0_1_) {
                (**(code **)(this->_padding_ + 8))(this,local_e8);
                ::FName::ToString((FName *)local_res10->_padding_,&local_268);
                pFVar7 = local_res10;
                bVar9 = IsThisNotNull(local_res10,"FField::GetFName");
                if (bVar9) {
                  local_378 = (FName)pFVar7->_padding_;
                }
                else {
                  local_378.ComparisonIndex.Value = 0;
                  local_378.Number = 0;
                }
                ::FName::ToString(&local_378,&local_f8);
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
                if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                }
                if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_268.Data.AllocatorInstance.Data);
                }
                if (local_e8[0] != (void *)0x0) {
                  FMemory::Free(local_e8[0]);
                }
              }
              goto LAB_148baa81d;
            }
            if (local_3b8.Data.ArrayNum == 0) {
              local_288 = (FScriptContainerElement *)0x15060d16c;
LAB_148baa4c3:
              sVar29 = wcslen((wchar_t *)local_288);
              iStack_280 = (int)sVar29;
            }
            else {
              iStack_280 = 0;
              local_288 = local_3b8.Data.AllocatorInstance.Data;
              if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_148baa4c3;
            }
            local_128._12_4_ = uStack_27c;
            local_128.Size = iStack_280;
            local_128.DataPtr = (wchar_t *)local_288;
            pUVar31 = StaticFindObject((UClass *)pFVar7->_padding_,(UObject *)0x0,&local_128,None);
          }
          else {
            local_218 = (wchar_t *)0x0;
            iStack_290 = 0;
            iStack_210 = 0;
            if (local_3b8.Data.ArrayNum == 0) {
              local_298 = (FScriptContainerElement *)0x15060d16c;
LAB_148baa34c:
              sVar29 = wcslen((wchar_t *)local_298);
              iStack_290 = (int)sVar29;
            }
            else {
              local_298 = local_3b8.Data.AllocatorInstance.Data;
              if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_148baa34c;
            }
            pUVar30 = Z_Construct_UClass_UClass_NoRegister();
            local_158._12_4_ = uStack_20c;
            local_158.Size = iStack_210;
            local_148._12_4_ = uStack_28c;
            local_148.Size = iStack_290;
            local_158.DataPtr = local_218;
            local_148.DataPtr = (wchar_t *)local_298;
            pUVar31 = StaticLoadObject(pUVar30,(UObject *)0x0,&local_148,&local_158,2,
                                       (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
          }
          puVar32 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              ((FProperty *)pFVar7,param_2,param_3,param_4);
          if (puVar32 != (undefined8 *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar31 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar31);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar31 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar31);
              }
            }
            *puVar32 = pUVar31;
            bVar9 = true;
            local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
            goto LAB_148ba9ee4;
          }
        }
        else {
          pFVar20 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              ((FProperty *)local_res10,param_2,param_3,param_4);
          FVar40.Data = local_3b8.Data.AllocatorInstance.Data;
          if (pFVar20 != (FString *)0x0) {
            if (pFVar20 != &local_3b8) {
              piVar6 = &(pFVar20->Data).ArrayMax;
              (pFVar20->Data).ArrayNum = local_3b8.Data.ArrayNum;
              if ((local_3b8.Data.ArrayNum == 0) && (*piVar6 == 0)) {
                *piVar6 = 0;
                bVar9 = true;
                local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
                goto LAB_148ba9ee4;
              }
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_3b8.Data.ArrayNum,*piVar6,(ForAnyElementType *)pFVar20,
                         local_3b8.Data.ArrayNum,piVar6);
              if (local_3b8.Data.ArrayNum != 0) {
                memcpy((pFVar20->Data).AllocatorInstance.Data,FVar40.Data,
                       (longlong)local_3b8.Data.ArrayNum * 2);
              }
            }
            bVar9 = true;
            local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
            goto LAB_148ba9ee4;
          }
        }
LAB_148baa81d:
        bVar9 = false;
        local_308.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
LAB_148ba9ee4:
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
          return bVar9;
        }
        return bVar9;
      }
      if (bVar8 != 0xe0) {
        return true;
      }
      bVar39 = bVar39 & 0x1f;
      if ((bVar39 == 0x14) || (bVar39 == 0x15)) {
        pFVar17 = FCoreTexts::Get();
        pFVar7 = local_res10;
        if ((local_res10 != (FSoftClassProperty *)0x0) &&
           ((*(uint *)(local_res10->_padding_ + 0x18) >> 0x11 & 1) != 0)) {
          local_res8[0] = FCborContext::AsBool(this_00);
          bVar9 = StructDeserializerBackendUtilities::SetPropertyValue<FBoolProperty,bool>
                            ((FBoolProperty *)pFVar7,param_2,param_3,param_4,local_res8);
          return bVar9;
        }
        if ((byte)LogSerialization._0_1_ < 6) {
          return false;
        }
        (**(code **)(this->_padding_ + 8))(this,local_180);
        ::FName::ToString((FName *)local_res10->_padding_,&local_2a8);
        bVar9 = FCborContext::AsBool(this_00);
        if (bVar9) {
          pFVar24 = pFVar17->True;
        }
        else {
          pFVar24 = pFVar17->False;
        }
        FText::ToString(pFVar24);
        pFVar7 = local_res10;
        bVar9 = IsThisNotNull(local_res10,"FField::GetFName");
        if (bVar9) {
          local_388 = (FName)pFVar7->_padding_;
        }
        else {
          local_388.ComparisonIndex.Value = 0;
          local_388.Number = 0;
        }
        ::FName::ToString(&local_388,&local_190);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        local_b8[0] = local_180[0];
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          local_b8[0] = local_180[0];
        }
        goto LAB_148baac6d;
      }
      if (bVar39 == 0x16) {
        bVar9 = StructDeserializerBackendUtilities::ClearPropertyValue
                          (param_1,param_2,param_3,param_4);
        return bVar9;
      }
      if (bVar39 != 0x1a) {
        if (bVar39 == 0x1b) {
          if ((param_1 == (FProperty *)0x0) ||
             ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x100000000) == 0)) {
            if ((byte)LogSerialization._0_1_ < 6) {
              return false;
            }
            (**(code **)(this->_padding_ + 8))(this,local_1c0);
            ::FName::ToString((FName *)local_res10->_padding_,&local_2c8);
            FCborContext::AsDouble(this_00);
            pFVar7 = local_res10;
            bVar9 = IsThisNotNull(local_res10,"FField::GetFName");
            if (bVar9) {
              local_398 = (FName)pFVar7->_padding_;
            }
            else {
              local_398.ComparisonIndex.Value = 0;
              local_398.Number = 0;
            }
            ::FName::ToString(&local_398,&local_1d0);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
            if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            }
            local_b8[0] = local_1c0[0];
            if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
              local_b8[0] = local_1c0[0];
            }
            goto LAB_148baac6d;
          }
          dVar5 = FCborContext::AsDouble(this_00);
          goto LAB_148ba99e0;
        }
        if ((byte)LogSerialization._0_1_ < 6) {
          return false;
        }
        (**(code **)(this->_padding_ + 8))(this,local_1e0);
        ::FName::ToString((FName *)local_res10->_padding_,&local_2d8);
        FCborContext::AsDouble(this_00);
        pFVar7 = local_res10;
        bVar9 = IsThisNotNull(local_res10,"FField::GetFName");
        if (bVar9) {
          local_3a0 = (FName)pFVar7->_padding_;
        }
        else {
          local_3a0.ComparisonIndex.Value = 0;
          local_3a0.Number = 0;
        }
        ::FName::ToString(&local_3a0,&local_1f0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        local_b8[0] = local_1e0[0];
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
          local_b8[0] = local_1e0[0];
        }
        goto LAB_148baac6d;
      }
      if (this->bIsLWCCompatibilityMode == true) {
        pUVar15 = FField::GetOwnerStruct((FField *)param_1);
        bVar9 = StructSerializationUtilities::IsLWCType(pUVar15);
        if (!bVar9) goto LAB_148ba9b78;
        if ((local_res10 != (FSoftClassProperty *)0x0) &&
           (param_1 = (FProperty *)local_res10,
           (*(ulonglong *)(local_res10->_padding_ + 0x18) & 0x100000000) != 0)) {
LAB_148ba9b64:
          fVar41 = FCborContext::AsFloat(this_00);
          dVar5 = (double)fVar41;
LAB_148ba99e0:
          pdVar14 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              (param_1,param_2,param_3,param_4);
          if (pdVar14 == (double *)0x0) {
            return false;
          }
          *pdVar14 = dVar5;
          return true;
        }
        local_228 = &local_res10;
        local_220 = this;
        bVar9 = `FCborStructDeserializerBackend::ReadProperty'::__l187::<lambda_1>::operator()
                          (&local_228);
        param_1 = (FProperty *)(FSoftClassProperty *)0x0;
        if (bVar9) goto LAB_148ba9b64;
      }
      else {
LAB_148ba9b78:
        pFVar7 = local_res10;
        if ((local_res10 != (FSoftClassProperty *)0x0) &&
           ((*(uint *)(local_res10->_padding_ + 0x18) >> 8 & 1) != 0)) {
          fVar41 = FCborContext::AsFloat(this_00);
          pfVar16 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              ((FProperty *)pFVar7,param_2,param_3,param_4);
          if (pfVar16 == (float *)0x0) {
            return false;
          }
          *pfVar16 = fVar41;
          return true;
        }
      }
      if ((byte)LogSerialization._0_1_ < 6) {
        return false;
      }
      (**(code **)(this->_padding_ + 8))(this,local_1a0);
      ::FName::ToString((FName *)local_res10->_padding_,&local_2b8);
      FCborContext::AsFloat(this_00);
      pFVar7 = local_res10;
      bVar9 = IsThisNotNull(local_res10,"FField::GetFName");
      if (bVar9) {
        local_390 = (FName)pFVar7->_padding_;
      }
      else {
        local_390.ComparisonIndex.Value = 0;
        local_390.Number = 0;
      }
      ::FName::ToString(&local_390,&local_1b0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      local_b8[0] = local_1a0[0];
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        local_b8[0] = local_1a0[0];
      }
      goto LAB_148baac6d;
    }
LAB_148baab09:
    if (param_1 != (FProperty *)0x0) {
      if ((*(byte *)(param_1->_padding_ + 0x18) & 2) != 0) {
        lVar26 = FCborContext::AsInt(this_00);
        uVar10 = (undefined1)lVar26;
LAB_148baaa05:
        puVar27 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                            (param_1,param_2,param_3,param_4);
        if (puVar27 == (undefined1 *)0x0) {
          return false;
        }
        *puVar27 = uVar10;
        return true;
      }
      if (param_1 != (FProperty *)0x0) {
        if (*(int *)(param_1->_padding_ + 0x18) < 0) {
          lVar26 = FCborContext::AsInt(this_00);
          uVar11 = (undefined2)lVar26;
LAB_148baaa4b:
          puVar35 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              (param_1,param_2,param_3,param_4);
          if (puVar35 == (undefined2 *)0x0) {
            return false;
          }
          *puVar35 = uVar11;
          return true;
        }
        if (param_1 != (FProperty *)0x0) {
          if ((*(byte *)(param_1->_padding_ + 0x18) & 0x80) != 0) {
            lVar26 = FCborContext::AsInt(this_00);
            uVar13 = (undefined4)lVar26;
LAB_148baaa95:
            puVar36 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            if (puVar36 == (undefined4 *)0x0) {
              return false;
            }
            *puVar36 = uVar13;
            return true;
          }
          if ((param_1 != (FProperty *)0x0) &&
             ((*(uint *)(param_1->_padding_ + 0x18) >> 0x16 & 1) != 0)) {
            uVar38 = FCborContext::AsInt(this_00);
LAB_148baaade:
            puVar37 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            if (puVar37 == (ulong64 *)0x0) {
              return false;
            }
            *puVar37 = uVar38;
            return true;
          }
        }
      }
    }
  }
  if ((byte)LogSerialization._0_1_ < 6) {
    return false;
  }
  (**(code **)(this->_padding_ + 8))(this,local_b8);
  ::FName::ToString((FName *)local_res10->_padding_,&local_2f0);
  FCborContext::AsUInt(this_00);
  pFVar7 = local_res10;
  bVar9 = IsThisNotNull(local_res10,"FField::GetFName");
  if (bVar9) {
    local_370 = (FName)pFVar7->_padding_;
  }
  else {
    local_370.ComparisonIndex.Value = 0;
    local_370.Number = 0;
  }
  ::FName::ToString(&local_370,&local_c8);
  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
LAB_148baac6d:
  if (local_b8[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8[0]);
  }
  return false;
}

// SkipArray @ 148badf60

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborStructDeserializerBackend::SkipArray(FCborStructDeserializerBackend *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bDeserializingByteArray == false) {
    FCborReader::SkipContainer(&this->CborReader,Array);
    return;
  }
  if (this->DeserializingByteArrayIndex != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DeserializingByteArrayIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\Backends\\CborStructDeserializerBackend.cpp"
                       ,0x17b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bDeserializingByteArray = false;
  return;
}

// SkipStructure @ 148badfe0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborStructDeserializerBackend::SkipStructure(FCborStructDeserializerBackend *this)

{
  FCborReader::SkipContainer(&this->CborReader,Map);
  return;
}

// operator() @ 150536e30

bool __thiscall
`FCborStructDeserializerBackend::ReadProperty'::__l187::<lambda_1>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  UStruct *pUVar9;
  FName local_res10;
  FName local_res18;
  FString local_78;
  FString local_68;
  FString local_58;
  void *local_48 [4];
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar7 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar6 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6897061275092647612>);
  if (bVar6) {
    (**(code **)(**(longlong **)((longlong)this + 8) + 8))
              (*(longlong **)((longlong)this + 8),local_48);
    ::FName::ToString(*(FName **)(**(longlong **)this + 8),&local_68);
    pUVar9 = FField::GetOwnerStruct((FField *)**(undefined8 **)this);
    local_res18 = (FName)pUVar9->_padding_;
    ::FName::ToString(&local_res18,&local_78);
    if ((*(char *)(*(longlong *)((longlong)this + 8) + 0x28) != -6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header.RawCode() == (ECborCode::Prim | ECborCode::Value_4Bytes)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                           ,0xf2,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    pvVar1 = (void *)**(undefined8 **)this;
    bVar7 = IsThisNotNull(pvVar1,"FField::GetFName");
    if (bVar7) {
      local_res10 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    ::FName::ToString(&local_res10,&local_58);
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar7 = true;
    bVar6 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6897061275092647612>,&::ENSURE_Static);
    if (bVar6) {
      bVar6 = true;
      goto LAB_150536fef;
    }
  }
  bVar6 = false;
LAB_150536fef:
  if ((bVar7) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_48[0] != (void *)0x0)) {
    FMemory::Free(local_48[0]);
  }
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  return false;
}

