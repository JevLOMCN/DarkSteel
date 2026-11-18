// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// TJsonStructDeserializerBackend<char> @ 14ad948f0

TJsonStructDeserializerBackend<char> * __thiscall
Metasound::TJsonStructDeserializerBackend<char>::TJsonStructDeserializerBackend<char>
          (TJsonStructDeserializerBackend<char> *this,FArchive *param_1)

{
  TJsonReader<char> *pTVar1;
  TJsonReader<char> *pTVar2;
  TRawPtrProxy<TJsonReader<char>_> local_res8;
  
  pTVar2 = (TJsonReader<char> *)0x0;
  this->_padding_ = (longlong)&___7__TJsonStructDeserializerBackend_D_Metasound__6B_;
  (this->LastIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastIdentifier).Data.ArrayNum = 0;
  (this->LastIdentifier).Data.ArrayMax = 0;
  pTVar1 = ::operator_new(0x70);
  if (pTVar1 != (TJsonReader<char> *)0x0) {
    (pTVar1->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->ParseState).ArrayNum = 0;
    (pTVar1->ParseState).ArrayMax = 0;
    pTVar1->_padding_ = (longlong)&___7__TJsonReader_D__6B_;
    pTVar1->CurrentToken = None;
    pTVar1->Stream = param_1;
    (pTVar1->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Identifier).Data.ArrayNum = 0;
    (pTVar1->Identifier).Data.ArrayMax = 0;
    (pTVar1->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->ErrorMessage).Data.ArrayNum = 0;
    (pTVar1->ErrorMessage).Data.ArrayMax = 0;
    (pTVar1->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->StringValue).Data.ArrayNum = 0;
    (pTVar1->StringValue).Data.ArrayMax = 0;
    pTVar1->NumberValue = 0.0;
    pTVar1->LineNumber = 1;
    pTVar1->CharacterNumber = 0;
    pTVar1->BoolValue = false;
    pTVar1->FinishedReadingRootObject = false;
    pTVar2 = pTVar1;
  }
  local_res8.Object = pTVar2;
  TSharedRef<TJsonReader<char>,1>::TSharedRef<TJsonReader<char>,1><TJsonReader<char>_>
            (&this->JsonReader,&local_res8);
  return this;
}

// GetCurrentPropertyName @ 14adbd750

FString * __thiscall
Metasound::TJsonStructDeserializerBackend<char>::GetCurrentPropertyName
          (TJsonStructDeserializerBackend<char> *this)

{
  FString *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014adbd757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FString *)(**(code **)(((this->JsonReader).Object)->_padding_ + 8))();
  return pFVar1;
}

// GetDebugString @ 14adbdd00

FString * __thiscall
Metasound::TJsonStructDeserializerBackend<char>::GetDebugString
          (TJsonStructDeserializerBackend<char> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Line: %u, Ch: %u");
  return __return_storage_ptr__;
}

// GetLastErrorMessage @ 14adc0640

FString * __thiscall
Metasound::TJsonStructDeserializerBackend<char>::GetLastErrorMessage
          (TJsonStructDeserializerBackend<char> *this)

{
  return &((this->JsonReader).Object)->ErrorMessage;
}

// GetNextToken @ 14adc0830

bool __thiscall
Metasound::TJsonStructDeserializerBackend<char>::GetNextToken
          (TJsonStructDeserializerBackend<char> *this,EStructDeserializerBackendTokens *param_1)

{
  bool bVar1;
  
  bVar1 = TJsonReader<char>::ReadNext((this->JsonReader).Object,&this->LastNotation);
  if (bVar1) {
    switch(this->LastNotation) {
    case ObjectStart:
      *param_1 = StructureStart;
      return true;
    case ObjectEnd:
      *param_1 = StructureEnd;
      return true;
    case ArrayStart:
      *param_1 = ArrayStart;
      return true;
    case ArrayEnd:
      *param_1 = ArrayEnd;
      return true;
    case Boolean:
    case String:
    case Number:
    case Null:
      *param_1 = Property;
      return true;
    case Error:
      *param_1 = Error;
      return true;
    default:
      *param_1 = None;
      return true;
    }
  }
  return false;
}

// ReadProperty @ 14adcb2a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TJsonStructDeserializerBackend<char>::ReadProperty
          (TJsonStructDeserializerBackend<char> *this,FProperty *param_1,FProperty *param_2,
          void *param_3,int param_4)

{
  double dVar1;
  EArrayPropertyFlags EVar2;
  byte bVar3;
  EJsonNotation EVar4;
  uint uVar5;
  EJsonToken EVar6;
  TJsonReader<char> *pTVar7;
  ITextData *pIVar8;
  UEnum *pUVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined1 *puVar14;
  double *pdVar15;
  float *pfVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined2 *puVar19;
  longlong *plVar20;
  FString *this_00;
  FName *pFVar21;
  FName *pFVar22;
  wchar_t *pwVar23;
  FText *pFVar24;
  long64 lVar25;
  void *pvVar26;
  size_t sVar27;
  UClass *pUVar28;
  UObject *pUVar29;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar30;
  undefined8 *puVar31;
  FWeakObjectPtr *pFVar32;
  FCoreTexts *pFVar33;
  longlong lVar34;
  ForAnyElementType FVar35;
  ulonglong uVar36;
  FScriptArrayHelper_u_8 FVar37;
  undefined1 local_res8 [8];
  FString local_2b8;
  FName local_2a8;
  FWeakObjectPtr local_2a0;
  FName local_298;
  FName local_290;
  FText local_288;
  FSoftObjectPath local_278;
  TPersistentObjectPtr<FSoftObjectPath> local_258;
  UObject *local_230;
  UObject *local_228;
  FString local_220;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FString local_1c8;
  FString local_1b8;
  FScriptArrayHelper local_1a8;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FString local_158;
  void *local_148 [2];
  FText local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  void *local_a8 [2];
  FString local_98;
  void *local_88 [2];
  FName local_78;
  FName local_70;
  FName local_68;
  TPersistentObjectPtr<FSoftObjectPath> local_60;
  
  EVar4 = this->LastNotation;
  if (EVar4 == Boolean) {
    pTVar7 = (this->JsonReader).Object;
    EVar6 = pTVar7->CurrentToken;
    if (((EVar6 != True) && (EVar6 != False)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(CurrentToken == EJsonToken::True) || (CurrentToken == EJsonToken::False)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                            ,0xce,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    bVar11 = pTVar7->BoolValue;
    if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x11 & 1) != 0))
    {
      pvVar26 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                          (param_1,param_2,param_3,param_4);
      if (pvVar26 == (void *)0x0) {
        return false;
      }
      if (((char)param_1[1]._padding_ == '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("FieldSize != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0xa61,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      uVar36 = (ulonglong)*(byte *)((longlong)&param_1[1]._padding_ + 1);
      bVar3 = *(byte *)((longlong)&param_1[1]._padding_ + 3);
      if (bVar11 == false) {
        *(byte *)(uVar36 + (longlong)pvVar26) = ~bVar3 & *(byte *)(uVar36 + (longlong)pvVar26);
        return true;
      }
      *(byte *)(uVar36 + (longlong)pvVar26) =
           ~bVar3 & *(byte *)(uVar36 + (longlong)pvVar26) |
           *(byte *)((longlong)&param_1[1]._padding_ + 2);
      return true;
    }
    pFVar33 = FCoreTexts::Get();
    if ((byte)LogSerialization._0_1_ < 6) {
      return false;
    }
    (**(code **)(this->_padding_ + 8))(this,local_88);
    ::FName::ToString((FName *)param_1->_padding_,&local_1b8);
    if (bVar11 == false) {
      pFVar24 = pFVar33->False;
    }
    else {
      pFVar24 = pFVar33->True;
    }
    FText::ToString(pFVar24);
    bVar11 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar11) {
      local_290 = (FName)param_1->_padding_;
    }
    else {
      local_290.ComparisonIndex.Value = 0;
      local_290.Number = 0;
    }
    ::FName::ToString(&local_290,&local_98);
    UE::Logging::Private::BasicLog<6>
              (&`public:_virtual_bool___cdecl_Metasound::TJsonStructDeserializerBackend<char>::ReadProperty(FProperty*___ptr64,FProperty*___ptr64,void*___ptr64,int)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
LAB_14adcc13c:
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
    return false;
  }
  if (EVar4 != String) {
    if (EVar4 != Number) {
      if (EVar4 == Null) {
        if ((param_2 != (FProperty *)0x0) &&
           ((*(uint *)(param_2->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
          if ((FProperty *)param_2[1]._padding_ != param_1) {
            return false;
          }
          if ((param_2->ArrayDim < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          if ((param_3 == (void *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          EVar2 = (EArrayPropertyFlags)param_2[1]._padding_;
          FVar37.HeapArray =
               (FScriptArray *)((longlong)param_2->Offset_Internal + (longlong)param_3);
          local_1a8.ElementAlignment = (**(code **)(*(longlong *)param_2[1]._padding_ + 0x168))();
          local_1a8.InnerProperty = (FProperty *)param_2[1]._padding_;
          local_1a8.ElementSize = (local_1a8.InnerProperty)->ElementSize;
          local_1a8.field1_0x8.HeapArray = FVar37.HeapArray;
          local_1a8.ArrayFlags = EVar2;
          if ((local_1a8.ElementSize < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ElementSize > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1177,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          if ((local_1a8.InnerProperty == (FProperty *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InnerProperty",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1178,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          param_4 = FScriptArrayHelper::AddValues(&local_1a8,1);
        }
        FProperty::ClearValue_InContainer(param_1,param_3,param_4);
      }
      return true;
    }
    pTVar7 = (this->JsonReader).Object;
    if ((pTVar7->CurrentToken != Number) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentToken == EJsonToken::Number",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                            ,0xc2,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    dVar1 = pTVar7->NumberValue;
    if (param_1 != (FProperty *)0x0) {
      if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) {
LAB_14adcb47d:
        puVar14 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                            (param_1,param_2,param_3,param_4);
        if (puVar14 == (undefined1 *)0x0) {
          return false;
        }
        *puVar14 = (char)(int)dVar1;
        return true;
      }
      if (param_1 != (FProperty *)0x0) {
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x100000000) != 0) {
          pdVar15 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              (param_1,param_2,param_3,param_4);
          if (pdVar15 == (double *)0x0) {
            return false;
          }
          *pdVar15 = dVar1;
          return true;
        }
        if ((*(uint *)(param_1->_padding_ + 0x18) >> 8 & 1) != 0) {
          pfVar16 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              (param_1,param_2,param_3,param_4);
          if (pfVar16 == (float *)0x0) {
            return false;
          }
          *pfVar16 = (float)dVar1;
          return true;
        }
        if ((*(byte *)(param_1->_padding_ + 0x18) & 0x80) != 0) {
          piVar17 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              (param_1,param_2,param_3,param_4);
          if (piVar17 == (int *)0x0) {
            return false;
          }
          *piVar17 = (int)dVar1;
          return true;
        }
        if (param_1 != (FProperty *)0x0) {
          if ((*(uint *)(param_1->_padding_ + 0x18) >> 0xb & 1) != 0) {
            puVar18 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            if (puVar18 == (undefined4 *)0x0) {
              return false;
            }
            *puVar18 = (int)(longlong)dVar1;
            return true;
          }
          if ((*(int *)(param_1->_padding_ + 0x18) < 0) ||
             ((*(uint *)(param_1->_padding_ + 0x18) >> 0x12 & 1) != 0)) {
            puVar19 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            if (puVar19 == (undefined2 *)0x0) {
              return false;
            }
            *puVar19 = (short)(int)dVar1;
            return true;
          }
          if (param_1 != (FProperty *)0x0) {
            if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x16 & 1) != 0) {
              plVar20 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                  (param_1,param_2,param_3,param_4);
              if (plVar20 == (longlong *)0x0) {
                return false;
              }
              *plVar20 = (longlong)dVar1;
              return true;
            }
            if ((*(uint *)(param_1->_padding_ + 0x18) >> 9 & 1) != 0) {
              plVar20 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                  (param_1,param_2,param_3,param_4);
              if (plVar20 == (longlong *)0x0) {
                return false;
              }
              lVar34 = 0;
              if ((__real_43e0000000000000 <= dVar1) &&
                 (dVar1 = dVar1 - __real_43e0000000000000, dVar1 < __real_43e0000000000000)) {
                lVar34 = -0x8000000000000000;
              }
              *plVar20 = (longlong)dVar1 + lVar34;
              return true;
            }
            if ((*(byte *)(param_1->_padding_ + 0x18) & 2) != 0) goto LAB_14adcb47d;
          }
        }
      }
    }
    if ((byte)LogSerialization._0_1_ < 6) {
      return false;
    }
    (**(code **)(this->_padding_ + 8))(this,local_148);
    ::FName::ToString((FName *)param_1->_padding_,&local_220);
    bVar11 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar11) {
      local_2a8 = (FName)param_1->_padding_;
    }
    else {
      local_2a8.ComparisonIndex.Value = 0;
      local_2a8.Number = 0;
    }
    ::FName::ToString(&local_2a8,&local_158);
    UE::Logging::Private::BasicLog<6>
              (&`public:_virtual_bool___cdecl_Metasound::TJsonStructDeserializerBackend<char>::ReadProperty(FProperty*___ptr64,FProperty*___ptr64,void*___ptr64,int)___ptr64'
                ::__l57::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    local_88[0] = local_148[0];
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
      local_88[0] = local_148[0];
    }
    goto LAB_14adcc13c;
  }
  (**(code **)(((this->JsonReader).Object)->_padding_ + 0x10))();
  if (param_1 == (FProperty *)0x0) {
LAB_14adcbe6b:
    if (5 < (byte)LogSerialization._0_1_) {
      (**(code **)(this->_padding_ + 8))(this,local_a8);
      ::FName::ToString((FName *)param_1->_padding_,&local_1c8);
      bVar11 = IsThisNotNull(param_1,"FField::GetFName");
      if (bVar11) {
        local_298 = (FName)param_1->_padding_;
      }
      else {
        local_298.ComparisonIndex.Value = 0;
        local_298.Number = 0;
      }
      ::FName::ToString(&local_298,&local_b8);
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_bool___cdecl_Metasound::TJsonStructDeserializerBackend<char>::ReadProperty(FProperty*___ptr64,FProperty*___ptr64,void*___ptr64,int)___ptr64'
                  ::__l120::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_a8[0] != (void *)0x0) {
        FMemory::Free(local_a8[0]);
      }
    }
  }
  else if ((*(uint *)(param_1->_padding_ + 0x18) >> 0xe & 1) == 0) {
    if (param_1 == (FProperty *)0x0) goto LAB_14adcbe6b;
    uVar5 = *(uint *)(param_1->_padding_ + 0x18);
    if ((uVar5 >> 0xd & 1) != 0) {
      FVar35.Data = (FScriptContainerElement *)L"";
      if (local_2b8.Data.ArrayNum != 0) {
        FVar35.Data = local_2b8.Data.AllocatorInstance.Data;
      }
      pFVar21 = ::FName::FName(&local_68,(wchar_t *)FVar35.Data);
      pFVar22 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                          (param_1,param_2,param_3,param_4);
      if (pFVar22 != (FName *)0x0) {
        bVar11 = true;
        *pFVar22 = *pFVar21;
        goto LAB_14adcbf58;
      }
      goto LAB_14adcbf56;
    }
    if ((uVar5 >> 0x1e & 1) != 0) {
      FText::FText(&local_288);
      FVar35.Data = (FScriptContainerElement *)L"";
      if (local_2b8.Data.ArrayNum != 0) {
        FVar35.Data = local_2b8.Data.AllocatorInstance.Data;
      }
      pwVar23 = FTextStringHelper::ReadFromBuffer
                          ((wchar_t *)FVar35.Data,&local_288,(wchar_t *)0x0,(wchar_t *)0x0,false);
      if (pwVar23 == (wchar_t *)0x0) {
        pFVar24 = FText::FromString(&local_138,&local_2b8);
        FText::operator=(&local_288,pFVar24);
        if (local_138.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
        }
      }
      plVar20 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                          (param_1,param_2,param_3,param_4);
      if (plVar20 == (longlong *)0x0) {
        bVar11 = false;
      }
      else {
        pIVar8 = (ITextData *)*plVar20;
        if (pIVar8 != local_288.TextData.Reference) {
          *plVar20 = (longlong)local_288.TextData.Reference;
          if (local_288.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_288.TextData.Reference + 8))
                      (local_288.TextData.Reference,local_res8);
          }
          if (pIVar8 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
          }
        }
        bVar11 = true;
        *(uint *)(plVar20 + 1) = local_288.Flags;
      }
      if (local_288.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
      }
      goto LAB_14adcbf58;
    }
    if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) {
      pUVar9 = (UEnum *)param_1[1]._padding_;
      if (pUVar9 != (UEnum *)0x0) {
        FVar35.Data = (FScriptContainerElement *)L"";
        if (local_2b8.Data.ArrayNum != 0) {
          FVar35.Data = local_2b8.Data.AllocatorInstance.Data;
        }
        pFVar21 = ::FName::FName(&local_70,(wchar_t *)FVar35.Data);
        lVar25 = UEnum::GetValueByName(pUVar9,*pFVar21,None);
        if (((int)lVar25 != -1) &&
           (puVar14 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4), puVar14 != (undefined1 *)0x0)) {
          *puVar14 = (char)lVar25;
          bVar11 = true;
          goto LAB_14adcbf58;
        }
      }
      goto LAB_14adcbf56;
    }
    if (param_1 == (FProperty *)0x0) goto LAB_14adcbe6b;
    if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
      pUVar9 = (UEnum *)param_1[1]._padding_;
      FVar35.Data = (FScriptContainerElement *)L"";
      if (local_2b8.Data.ArrayNum != 0) {
        FVar35.Data = local_2b8.Data.AllocatorInstance.Data;
      }
      pFVar21 = ::FName::FName(&local_78,(wchar_t *)FVar35.Data);
      lVar25 = UEnum::GetValueByName(pUVar9,*pFVar21,None);
      if ((lVar25 != -1) &&
         (pvVar26 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                              (param_1,param_2,param_3,param_4), pvVar26 != (void *)0x0)) {
        (**(code **)(*(longlong *)param_1[1]._padding_ + 0x1e8))
                  ((longlong *)param_1[1]._padding_,pvVar26,lVar25);
        bVar11 = true;
        goto LAB_14adcbf58;
      }
      goto LAB_14adcbf56;
    }
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 10 & 1) == 0) {
      if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x200000000) != 0) {
        local_178 = (wchar_t *)0x0;
        iStack_1f0 = 0;
        iStack_170 = 0;
        if (local_2b8.Data.ArrayNum == 0) {
          local_1f8 = (FScriptContainerElement *)0x15060d16c;
LAB_14adcbb04:
          sVar27 = wcslen((wchar_t *)local_1f8);
          iStack_1f0 = (int)sVar27;
        }
        else {
          local_1f8 = local_2b8.Data.AllocatorInstance.Data;
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14adcbb04;
        }
        pUVar28 = Z_Construct_UClass_UClass_NoRegister();
        local_108._12_4_ = uStack_16c;
        local_108.Size = iStack_170;
        local_f8._12_4_ = uStack_1ec;
        local_f8.Size = iStack_1f0;
        local_108.DataPtr = local_178;
        local_f8.DataPtr = (wchar_t *)local_1f8;
        pUVar29 = StaticLoadObject(pUVar28,(UObject *)0x0,&local_f8,&local_108,2,(UPackageMap *)0x0,
                                   true,(FLinkerInstancingContext *)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar29);
        }
        local_258.ObjectID.SubPathString.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_258.ObjectID.SubPathString.Data.ArrayNum = 0;
        local_258.ObjectID.SubPathString.Data.ArrayMax = 0;
        local_258.WeakPtr.ObjectIndex = 0;
        local_258.WeakPtr.ObjectSerialNumber = 0;
        local_258.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_258.ObjectID.AssetPath.AssetName.Number = 0;
        local_258.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_258.ObjectID.AssetPath.PackageName.Number = 0;
        FUtf8String::Reset(&local_258.ObjectID.SubPathString,0);
        local_230 = pUVar29;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar29);
        }
        FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_258,(FObjectPtr)&local_230);
        pTVar30 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                            (param_1,param_2,param_3,param_4);
        bVar11 = pTVar30 != (TPersistentObjectPtr<FSoftObjectPath> *)0x0;
        if (bVar11) {
          TPersistentObjectPtr<FSoftObjectPath>::operator=(pTVar30,&local_258);
        }
        if (local_258.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.ObjectID.SubPathString.Data.AllocatorInstance.Data);
        }
        goto LAB_14adcbf58;
      }
      if (param_1 == (FProperty *)0x0) goto LAB_14adcbe6b;
      if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x10 & 1) == 0) {
        if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x1b & 1) == 0) {
          if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x1d & 1) != 0) {
            local_168 = local_2b8.Data.AllocatorInstance.Data;
            local_278.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_278.AssetPath.PackageName.Number = 0;
            local_278.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_278.AssetPath.AssetName.Number = 0;
            local_278.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iStack_160 = local_2b8.Data.ArrayNum + -1;
            local_278.SubPathString.Data.ArrayNum = 0;
            local_278.SubPathString.Data.ArrayMax = 0;
            if (local_2b8.Data.ArrayNum == 0) {
              iStack_160 = 0;
            }
            local_c8._12_4_ = uStack_15c;
            local_c8.Size = iStack_160;
            local_c8.DataPtr = (wchar_t *)local_2b8.Data.AllocatorInstance.Data;
            FSoftObjectPath::SetPath(&local_278,&local_c8);
            local_60.WeakPtr.ObjectIndex = 0;
            local_60.WeakPtr.ObjectSerialNumber = 0;
            FSoftObjectPath::FSoftObjectPath(&local_60.ObjectID,&local_278);
            pTVar30 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                                (param_1,param_2,param_3,param_4);
            bVar11 = pTVar30 != (TPersistentObjectPtr<FSoftObjectPath> *)0x0;
            if (bVar11) {
              TPersistentObjectPtr<FSoftObjectPath>::operator=(pTVar30,&local_60);
            }
            if (local_60.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.ObjectID.SubPathString.Data.AllocatorInstance.Data);
            }
            if (local_278.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_278.SubPathString.Data.AllocatorInstance.Data);
            }
            goto LAB_14adcbf58;
          }
          goto LAB_14adcbe6b;
        }
        bVar11 = false;
        iStack_1d0 = 0;
        if (local_2b8.Data.ArrayNum == 0) {
          local_1d8 = (FScriptContainerElement *)0x15060d16c;
LAB_14adcbcfc:
          sVar27 = wcslen((wchar_t *)local_1d8);
          iStack_1d0 = (int)sVar27;
        }
        else {
          local_1d8 = local_2b8.Data.AllocatorInstance.Data;
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14adcbcfc;
        }
        local_d8._12_4_ = uStack_1cc;
        local_d8.Size = iStack_1d0;
        local_d8.DataPtr = (wchar_t *)local_1d8;
        local_228 = StaticFindObject((UClass *)param_1[1]._padding_,(UObject *)0x0,&local_d8,None);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_228);
        }
        local_2a0.ObjectIndex = 0;
        local_2a0.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_228);
        }
        FWeakObjectPtr::operator=(&local_2a0,(FObjectPtr)&local_228);
        pFVar32 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                            (param_1,param_2,param_3,param_4);
        if (pFVar32 != (FWeakObjectPtr *)0x0) {
          bVar11 = true;
          *pFVar32 = local_2a0;
        }
        goto LAB_14adcbf58;
      }
      if (local_2b8.Data.ArrayNum == 0) {
        local_1e8 = (FScriptContainerElement *)0x15060d16c;
LAB_14adcbc39:
        sVar27 = wcslen((wchar_t *)local_1e8);
        iStack_1e0 = (int)sVar27;
      }
      else {
        iStack_1e0 = 0;
        local_1e8 = local_2b8.Data.AllocatorInstance.Data;
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14adcbc39;
      }
      local_e8._12_4_ = uStack_1dc;
      local_e8.Size = iStack_1e0;
      local_e8.DataPtr = (wchar_t *)local_1e8;
      pUVar29 = StaticFindObject((UClass *)param_1[1]._padding_,(UObject *)0x0,&local_e8,None);
    }
    else {
      local_188 = (wchar_t *)0x0;
      iStack_200 = 0;
      iStack_180 = 0;
      if (local_2b8.Data.ArrayNum == 0) {
        local_208 = (FScriptContainerElement *)0x15060d16c;
LAB_14adcba5e:
        sVar27 = wcslen((wchar_t *)local_208);
        iStack_200 = (int)sVar27;
      }
      else {
        local_208 = local_2b8.Data.AllocatorInstance.Data;
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14adcba5e;
      }
      pUVar28 = Z_Construct_UClass_UClass_NoRegister();
      local_128._12_4_ = uStack_17c;
      local_128.Size = iStack_180;
      local_118._12_4_ = uStack_1fc;
      local_118.Size = iStack_200;
      local_128.DataPtr = local_188;
      local_118.DataPtr = (wchar_t *)local_208;
      pUVar29 = StaticLoadObject(pUVar28,(UObject *)0x0,&local_118,&local_128,2,(UPackageMap *)0x0,
                                 true,(FLinkerInstancingContext *)0x0);
    }
    puVar31 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                        (param_1,param_2,param_3,param_4);
    if (puVar31 != (undefined8 *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar29 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar29);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar29);
        }
      }
      *puVar31 = pUVar29;
      bVar11 = true;
      goto LAB_14adcbf58;
    }
  }
  else {
    this_00 = StructDeserializerBackendUtilities::GetPropertyValuePtr
                        (param_1,param_2,param_3,param_4);
    if (this_00 != (FString *)0x0) {
      ::FString::operator=(this_00,&local_2b8);
      bVar11 = true;
      goto LAB_14adcbf58;
    }
  }
LAB_14adcbf56:
  bVar11 = false;
LAB_14adcbf58:
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    return bVar11;
  }
  return bVar11;
}

// SkipArray @ 14add1160

void __thiscall
Metasound::TJsonStructDeserializerBackend<char>::SkipArray
          (TJsonStructDeserializerBackend<char> *this)

{
  TJsonReader<char>::ReadUntilMatching((this->JsonReader).Object,ArrayEnd);
  return;
}

// SkipStructure @ 14add1180

void __thiscall
Metasound::TJsonStructDeserializerBackend<char>::SkipStructure
          (TJsonStructDeserializerBackend<char> *this)

{
  TJsonReader<char>::ReadUntilMatching((this->JsonReader).Object,ObjectEnd);
  return;
}

