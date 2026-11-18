// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 6

// ConvertScalarFPropertyToVariant @ 14ebbf630

bool __cdecl
FVariantDataConverter::ConvertScalarFPropertyToVariant
          (FProperty *param_1,void *param_2,FVariantData *param_3,long64 param_4,long64 param_5)

{
  Type TVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  FStructOpsFakeVTable *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  undefined1 uVar15;
  long64 lVar16;
  size_t sVar17;
  ulong64 uVar18;
  wchar_t *pwVar19;
  UEnum *pUVar20;
  FString *pFVar21;
  ICppStructOps *pIVar22;
  UScriptStruct *pUVar23;
  wchar_t *pwVar24;
  EStructOpsFakeVTableFlags EVar25;
  FScriptContainerElement *pFVar26;
  size_t sVar27;
  ForAnyElementType FVar28;
  int iVar29;
  bool bVar30;
  size_t local_res8;
  undefined8 in_stack_ffffffffffffff18;
  uint uVar31;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FString local_68;
  FString local_58 [2];
  
  uVar31 = (uint)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  TVar1 = param_3->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((param_3->Value).AsTCHAR);
  }
  pFVar26 = (FScriptContainerElement *)0x0;
  iVar29 = 0;
  param_3->Type = Empty;
  (param_3->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
  param_3->CachedEstimatedMaxEscapedStringSize = 0;
  if (param_1 == (FProperty *)0x0) {
LAB_14ebbfddb:
    bVar30 = param_3->Type == Empty;
    if (!bVar30) goto LAB_14ebbfeb0;
    local_b8 = (wchar_t *)0x0;
    local_b0 = 0;
    (**(code **)(param_1->_padding_ + 0xe0))(param_1,&local_b8,param_2,0,0,0,0,0);
    TVar1 = param_3->Type;
    pwVar19 = L"";
    if ((int)local_b0 != 0) {
      pwVar19 = local_b8;
    }
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((param_3->Value).AsTCHAR);
    }
    (param_3->Value).AsInt64 = 0;
    *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
    param_3->CachedEstimatedMaxEscapedStringSize = 0;
    param_3->Type = String;
    if (pwVar19 != (wchar_t *)0x0) {
      sVar17 = wcslen(pwVar19);
      sVar27 = (size_t)(int)sVar17;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = sVar27 + 1;
      uVar18 = SUB168(ZEXT816(2) * auVar13,0);
      if (SUB168(ZEXT816(2) * auVar13,8) != 0) {
        uVar18 = 0xffffffffffffffff;
      }
      pwVar24 = operator_new__(uVar18);
      (param_3->Value).AsTCHAR = pwVar24;
      if ((int)sVar17 < 1) {
        *pwVar24 = L'\0';
      }
      else {
        wcsncpy(pwVar24,pwVar19,sVar27);
        pwVar24[sVar27] = L'\0';
      }
    }
    if (local_b8 != (wchar_t *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  else {
    if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
      pUVar20 = (UEnum *)param_1[1]._padding_;
      lVar16 = (**(code **)(*(longlong *)param_1[1]._padding_ + 0x210))
                         ((longlong *)param_1[1]._padding_,param_2);
      UEnum::GetNameStringByValue(pUVar20,&local_a8,lVar16);
      TVar1 = param_3->Type;
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar28.Data = local_a8.Data.AllocatorInstance.Data;
      }
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((param_3->Value).AsTCHAR);
      }
      (param_3->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
      param_3->CachedEstimatedMaxEscapedStringSize = 0;
      param_3->Type = String;
      if (FVar28.Data != (FScriptContainerElement *)0x0) {
        sVar17 = wcslen((wchar_t *)FVar28.Data);
        sVar27 = (size_t)(int)sVar17;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = sVar27 + 1;
        uVar18 = SUB168(ZEXT816(2) * auVar7,0);
        if (SUB168(ZEXT816(2) * auVar7,8) != 0) {
          uVar18 = 0xffffffffffffffff;
        }
        pwVar19 = operator_new__(uVar18);
        (param_3->Value).AsTCHAR = pwVar19;
        if ((int)sVar17 < 1) {
          *pwVar19 = L'\0';
        }
        else {
          wcsncpy(pwVar19,(wchar_t *)FVar28.Data,sVar27);
          pwVar19[sVar27] = L'\0';
        }
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      goto LAB_14ebbfddb;
    }
    if (param_1 == (FProperty *)0x0) goto LAB_14ebbfddb;
    uVar4 = *(uint *)(param_1->_padding_ + 0x18);
    if ((uVar4 >> 0x18 & 1) == 0) {
      if ((uVar4 >> 0x11 & 1) != 0) {
        if (((char)param_1[1]._padding_ == '\0') &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("FieldSize != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0xa4b,L""), bVar30)) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        bVar2 = *(byte *)((ulonglong)*(byte *)((longlong)&param_1[1]._padding_ + 1) +
                         (longlong)param_2);
        bVar3 = *(byte *)((longlong)&param_1[1]._padding_ + 3);
        TVar1 = param_3->Type;
        if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
          operator_delete__((param_3->Value).AsTCHAR);
        }
        (param_3->Value).AsInt64 = 0;
        *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
        param_3->CachedEstimatedMaxEscapedStringSize = 0;
        param_3->Type = Bool;
        (param_3->Value).AsBool = (bVar3 & bVar2) != 0;
        goto LAB_14ebbfead;
      }
      if ((uVar4 >> 0xe & 1) == 0) {
        if (param_1 != (FProperty *)0x0) {
          uVar4 = *(uint *)(param_1->_padding_ + 0x18);
          if ((uVar4 >> 0x1e & 1) == 0) {
            if ((uVar4 >> 0x15 & 1) == 0) {
              if ((uVar4 >> 0x14 & 1) != 0) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                  ::FName::FName(&NAME_DateTime,L"DateTime");
                  _Init_thread_footer(&::_TSS0);
                }
                if ((FName)((UScriptStruct *)param_1[1]._padding_)->_padding_ == NAME_DateTime) {
                  if (param_2 == (void *)0x0) {
LAB_14ebbfbd6:
                    pwVar19 = L"";
                  }
                  else {
                    pFVar21 = FDateTime::ToIso8601(param_2,&local_68);
                    if (local_58 != pFVar21) {
                      pFVar26 = (pFVar21->Data).AllocatorInstance.Data;
                      (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      iVar29 = (pFVar21->Data).ArrayNum;
                      (pFVar21->Data).ArrayNum = 0;
                      (pFVar21->Data).ArrayMax = 0;
                    }
                    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_68.Data.AllocatorInstance.Data);
                    }
                    pwVar19 = (wchar_t *)pFVar26;
                    if (iVar29 == 0) goto LAB_14ebbfbd6;
                  }
                  TVar1 = param_3->Type;
                  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
                    operator_delete__((param_3->Value).AsTCHAR);
                  }
                  (param_3->Value).AsInt64 = 0;
                  *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
                  param_3->CachedEstimatedMaxEscapedStringSize = 0;
                  param_3->Type = String;
                  if ((FScriptContainerElement *)pwVar19 != (FScriptContainerElement *)0x0) {
                    sVar17 = wcslen(pwVar19);
                    sVar27 = (size_t)(int)sVar17;
                    auVar11._8_8_ = 0;
                    auVar11._0_8_ = sVar27 + 1;
                    uVar18 = SUB168(ZEXT816(2) * auVar11,0);
                    if (SUB168(ZEXT816(2) * auVar11,8) != 0) {
                      uVar18 = 0xffffffffffffffff;
                    }
                    local_res8 = sVar27;
                    pwVar24 = operator_new__(uVar18);
                    (param_3->Value).AsTCHAR = pwVar24;
                    if ((int)sVar17 < 1) {
                      *pwVar24 = L'\0';
                    }
                    else {
                      wcsncpy(pwVar24,pwVar19,local_res8);
                      pwVar24[sVar27] = L'\0';
                    }
                  }
                  if (pFVar26 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar26);
                  }
                }
                else {
                  pIVar22 = UScriptStruct::GetCppStructOps((UScriptStruct *)param_1[1]._padding_);
                  pUVar23 = FJsonObjectWrapper::StaticStruct();
                  if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
                    bVar30 = pUVar23 == (UScriptStruct *)0x0;
                  }
                  else {
                    bVar30 = (UScriptStruct *)param_1[1]._padding_ == pUVar23;
                  }
                  if (((bVar30) || (pIVar22 == (ICppStructOps *)0x0)) ||
                     (pFVar5 = pIVar22->FakeVPtr, !(pFVar5->Capabilities).HasExportTextItem))
                  goto LAB_14ebbfdcd;
                  local_c8 = (wchar_t *)0x0;
                  local_c0 = 0;
                  if (((pFVar5->Flags & ExportTextItem) == None) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!!(this->Flags & FuncFlag)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                          ,0x660,L""), bVar30)) {
                    pcVar6 = (code *)swi(3);
                    uVar15 = (*pcVar6)();
                    return (bool)uVar15;
                  }
                  for (EVar25 = pFVar5->Flags &
                                (Identical|Copy|GetPreloadDependencies|PostScriptConstruct|
                                 NetDeltaSerialize|NetSerialize|PostSerialize|SerializeSlot|
                                 SerializeArchive|Destruct|ConstructForTests|Construct);
                      EVar25 != None; EVar25 = EVar25 & EVar25 - Construct) {
                    pFVar26 = (FScriptContainerElement *)(ulonglong)((int)pFVar26 + 1);
                  }
                  (**(code **)(&pFVar5[1].Flags + (longlong)pFVar26 * 2))
                            (&local_c8,param_2,0,0,(ulonglong)uVar31 << 0x20,0);
                  TVar1 = param_3->Type;
                  pwVar19 = L"";
                  if ((int)local_c0 != 0) {
                    pwVar19 = local_c8;
                  }
                  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
                    operator_delete__((param_3->Value).AsTCHAR);
                  }
                  (param_3->Value).AsInt64 = 0;
                  *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
                  param_3->CachedEstimatedMaxEscapedStringSize = 0;
                  param_3->Type = String;
                  if (pwVar19 != (wchar_t *)0x0) {
                    sVar17 = wcslen(pwVar19);
                    sVar27 = (size_t)(int)sVar17;
                    auVar12._8_8_ = 0;
                    auVar12._0_8_ = sVar27 + 1;
                    uVar18 = SUB168(ZEXT816(2) * auVar12,0);
                    if (SUB168(ZEXT816(2) * auVar12,8) != 0) {
                      uVar18 = 0xffffffffffffffff;
                    }
                    pwVar24 = operator_new__(uVar18);
                    (param_3->Value).AsTCHAR = pwVar24;
                    if ((int)sVar17 < 1) {
                      *pwVar24 = L'\0';
                    }
                    else {
                      wcsncpy(pwVar24,pwVar19,sVar27);
                      pwVar24[sVar27] = L'\0';
                    }
                  }
                  if (local_c8 != (wchar_t *)0x0) {
                    FMemory::Free(local_c8);
                  }
                }
              }
            }
            else {
LAB_14ebbfdcd:
              ConvertScalarFPropertyToJsonObject_Helper(param_1,param_2,param_3);
            }
          }
          else {
            local_78.TextData.Reference = *(ITextData **)param_2;
            if (local_78.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_78.TextData.Reference + 8))
                        (local_78.TextData.Reference,&local_res8);
            }
            local_78.Flags = *(uint *)((longlong)param_2 + 8);
            pFVar21 = FText::ToString(&local_78);
            if ((pFVar21->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
            }
            TVar1 = param_3->Type;
            if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
              operator_delete__((param_3->Value).AsTCHAR);
            }
            (param_3->Value).AsInt64 = 0;
            *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
            param_3->CachedEstimatedMaxEscapedStringSize = 0;
            param_3->Type = String;
            if ((FScriptContainerElement *)pwVar19 != (FScriptContainerElement *)0x0) {
              sVar17 = wcslen(pwVar19);
              sVar27 = (size_t)(int)sVar17;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = sVar27 + 1;
              uVar18 = SUB168(ZEXT816(2) * auVar10,0);
              if (SUB168(ZEXT816(2) * auVar10,8) != 0) {
                uVar18 = 0xffffffffffffffff;
              }
              pwVar24 = operator_new__(uVar18);
              (param_3->Value).AsTCHAR = pwVar24;
              if ((int)sVar17 < 1) {
                *pwVar24 = L'\0';
              }
              else {
                wcsncpy(pwVar24,pwVar19,sVar27);
                pwVar24[sVar27] = L'\0';
              }
            }
            if (local_78.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
            }
          }
        }
      }
      else {
        ::FString::FString(&local_88,param_2);
        TVar1 = param_3->Type;
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar28.Data = local_88.Data.AllocatorInstance.Data;
        }
        if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
          operator_delete__((param_3->Value).AsTCHAR);
        }
        (param_3->Value).AsInt64 = 0;
        *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
        param_3->CachedEstimatedMaxEscapedStringSize = 0;
        param_3->Type = String;
        if (FVar28.Data != (FScriptContainerElement *)0x0) {
          sVar17 = wcslen((wchar_t *)FVar28.Data);
          sVar27 = (size_t)(int)sVar17;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = sVar27 + 1;
          uVar18 = SUB168(ZEXT816(2) * auVar9,0);
          if (SUB168(ZEXT816(2) * auVar9,8) != 0) {
            uVar18 = 0xffffffffffffffff;
          }
          pwVar19 = operator_new__(uVar18);
          (param_3->Value).AsTCHAR = pwVar19;
          if ((int)sVar17 < 1) {
            *pwVar19 = L'\0';
          }
          else {
            wcsncpy(pwVar19,(wchar_t *)FVar28.Data,sVar27);
            pwVar19[sVar27] = L'\0';
          }
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14ebbfddb;
    }
    pUVar20 = (UEnum *)(**(code **)(param_1->_padding_ + 0x1e0))(param_1);
    if (pUVar20 != (UEnum *)0x0) {
      lVar16 = (**(code **)(param_1->_padding_ + 0x210))(param_1,param_2);
      UEnum::GetNameStringByValue(pUVar20,&local_98,lVar16);
      TVar1 = param_3->Type;
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar28.Data = local_98.Data.AllocatorInstance.Data;
      }
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((param_3->Value).AsTCHAR);
      }
      (param_3->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
      param_3->CachedEstimatedMaxEscapedStringSize = 0;
      param_3->Type = String;
      if (FVar28.Data != (FScriptContainerElement *)0x0) {
        sVar17 = wcslen((wchar_t *)FVar28.Data);
        sVar27 = (size_t)(int)sVar17;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = sVar27 + 1;
        uVar18 = SUB168(ZEXT816(2) * auVar8,0);
        if (SUB168(ZEXT816(2) * auVar8,8) != 0) {
          uVar18 = 0xffffffffffffffff;
        }
        pwVar19 = operator_new__(uVar18);
        (param_3->Value).AsTCHAR = pwVar19;
        if ((int)sVar17 < 1) {
          *pwVar19 = L'\0';
        }
        else {
          wcsncpy(pwVar19,(wchar_t *)FVar28.Data,sVar27);
          pwVar19[sVar27] = L'\0';
        }
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      goto LAB_14ebbfddb;
    }
    cVar14 = (**(code **)(param_1->_padding_ + 0x1d0))(param_1);
    if (cVar14 == '\0') {
      cVar14 = (**(code **)(param_1->_padding_ + 0x1d8))(param_1);
      if (cVar14 == '\0') goto LAB_14ebbfddb;
      lVar16 = (**(code **)(param_1->_padding_ + 0x210))(param_1,param_2);
      TVar1 = param_3->Type;
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((param_3->Value).AsTCHAR);
      }
      (param_3->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
      param_3->CachedEstimatedMaxEscapedStringSize = 0;
      param_3->Type = UInt64;
      (param_3->Value).AsInt64 = lVar16;
    }
    else {
      lVar16 = (**(code **)(param_1->_padding_ + 0x230))(param_1,param_2);
      TVar1 = param_3->Type;
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((param_3->Value).AsTCHAR);
      }
      (param_3->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&param_3->Value + 8) = 0;
      param_3->CachedEstimatedMaxEscapedStringSize = 0;
      (param_3->Value).AsInt64 = lVar16;
      param_3->Type = Double;
    }
  }
LAB_14ebbfead:
  bVar30 = param_3->Type == Empty;
LAB_14ebbfeb0:
  return !bVar30;
}

// ConvertScalarVariantToFProperty @ 14ebbff20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FVariantDataConverter::ConvertScalarVariantToFProperty
          (FVariantData *param_1,FProperty *param_2,void *param_3,long64 param_4,long64 param_5)

{
  int *piVar1;
  Type TVar2;
  byte bVar3;
  uint uVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  UScriptStruct *pUVar7;
  FStructOpsFakeVTable *pFVar8;
  code *pcVar9;
  FFeedbackContext *pFVar10;
  FJsonObject *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  FName *pFVar16;
  long64 lVar17;
  longlong lVar18;
  UEnum *pUVar19;
  FString *pFVar20;
  FText *pFVar21;
  FDateTime FVar22;
  ICppStructOps *pIVar23;
  UScriptStruct *pUVar24;
  wchar_t *pwVar25;
  EStructOpsFakeVTableFlags EVar26;
  ForAnyElementType FVar27;
  ulonglong uVar28;
  undefined1 local_res10 [8];
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  TSharedPtr<FJsonObject,1> local_298;
  TSharedPtr<FJsonObject,1> local_288;
  FScriptContainerElement *local_278;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  TSharedRef<TJsonReader<wchar_t>,1> local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  TSharedRef<TJsonReader<wchar_t>,1> local_190;
  FString local_180;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  TSharedPtr<FJsonValue,1> local_158;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  TSharedPtr<FJsonValue,1> local_138;
  FName local_128;
  FName local_120 [2];
  FString local_110;
  FString local_100;
  FString local_f0;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  FString local_b8;
  FText local_a8;
  FString local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((param_2 == (FProperty *)0x0) ||
     ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x1000000000000) == 0)) {
    if (param_2 == (FProperty *)0x0) goto LAB_14ebc0e81;
    uVar4 = *(uint *)(param_2->_padding_ + 0x18);
    if ((uVar4 >> 0x18 & 1) == 0) {
      if ((uVar4 >> 0x11 & 1) != 0) {
        if (param_1->Type == Bool) {
          cVar14 = (param_1->Value).AsBool;
        }
        else {
          cVar14 = '\0';
        }
        if (((char)param_2[1]._padding_ == '\0') &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("FieldSize != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0xa61,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        uVar28 = (ulonglong)*(byte *)((longlong)&param_2[1]._padding_ + 1);
        bVar3 = *(byte *)((longlong)&param_2[1]._padding_ + 3);
        if (cVar14 == '\0') {
          *(byte *)(uVar28 + (longlong)param_3) = ~bVar3 & *(byte *)(uVar28 + (longlong)param_3);
        }
        else {
          *(byte *)(uVar28 + (longlong)param_3) =
               ~bVar3 & *(byte *)(uVar28 + (longlong)param_3) |
               *(byte *)((longlong)&param_2[1]._padding_ + 2);
        }
        goto LAB_14ebc1069;
      }
      if ((uVar4 >> 0xe & 1) == 0) {
        if (param_2 == (FProperty *)0x0) {
LAB_14ebc0e81:
          if (param_1->Type == String) {
            local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2c8.Data.ArrayNum = 0;
            local_2c8.Data.ArrayMax = 0;
            if ((param_1->Value).AsTCHAR == (wchar_t *)0x0) {
              ::FString::Reset(&local_2c8,0);
            }
            else {
              ::FString::operator=(&local_2c8,(param_1->Value).AsTCHAR);
            }
            FVar27.Data = (FScriptContainerElement *)L"";
            if (local_2c8.Data.ArrayNum != 0) {
              FVar27.Data = local_2c8.Data.AllocatorInstance.Data;
            }
            pwVar25 = FProperty::ImportText_Direct
                                (param_2,(wchar_t *)FVar27.Data,param_3,(UObject *)0x0,0,
                                 (FOutputDevice *)GWarn);
            local_38.Data.AllocatorInstance.Data = local_2c8.Data.AllocatorInstance.Data;
            if (pwVar25 == (wchar_t *)0x0) {
              local_98.Data.AllocatorInstance.Data = local_2c8.Data.AllocatorInstance.Data;
              if (1 < (byte)LogOnline._0_1_) {
                FProperty::GetNameCPP(param_2,&local_48);
                ::FName::ToString((FName *)param_2->_padding_,&local_270);
                ::FString::PrintfImpl
                          (&local_180,
                           L"ConvertScalarVariantToFProperty - Unable import property type %s from string value for property %s"
                          );
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
                if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_180.Data.AllocatorInstance.Data);
                }
                if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_270.Data.AllocatorInstance.Data);
                }
                local_98.Data.AllocatorInstance.Data = local_2c8.Data.AllocatorInstance.Data;
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                  local_98.Data.AllocatorInstance.Data = local_2c8.Data.AllocatorInstance.Data;
                }
              }
              goto LAB_14ebc0f9f;
            }
          }
          else {
            if ((byte)LogOnline._0_1_ < 2) goto LAB_14ebc1069;
            FProperty::GetNameCPP(param_2,&local_38);
            ::FName::ToString((FName *)param_2->_padding_,&local_250);
            ::FString::PrintfImpl
                      (&local_260,
                       L"ConvertScalarVariantToFProperty - Unable import property type %s from string value for property %s"
                      );
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
            if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_260.Data.AllocatorInstance.Data);
            }
            if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          uVar4 = *(uint *)(param_2->_padding_ + 0x18);
          if ((uVar4 >> 0x15 & 1) != 0) {
            local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2e8.Data.ArrayNum = 0;
            local_2e8.Data.ArrayMax = 0;
            if (((param_1->Type == String) || (param_1->Type == Json)) &&
               ((param_1->Value).AsTCHAR != (wchar_t *)0x0)) {
              ::FString::operator=(&local_2e8,(param_1->Value).AsTCHAR);
            }
            else {
              ::FString::Reset(&local_2e8,0);
            }
            local_288.Object = (FJsonObject *)0x0;
            local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            TJsonReaderFactory<wchar_t>::Create(&local_1e0,&local_2e8);
            bVar12 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                               (&local_1e0,&local_288,None);
            if ((bVar12) && (local_288.Object != (FJsonObject *)0x0)) {
              if ((local_288.Object == (FJsonObject *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              pFVar11 = local_288.Object;
              pFVar20 = FProperty::GetNameCPP(param_2,&local_c8);
              local_168 = (pFVar20->Data).AllocatorInstance.Data;
              iVar15 = (pFVar20->Data).ArrayNum;
              iStack_160 = iVar15 + -1;
              if (iVar15 == 0) {
                iStack_160 = 0;
              }
              local_d8._12_4_ = uStack_15c;
              local_d8.Size = iStack_160;
              local_d8.DataPtr = (wchar_t *)local_168;
              FJsonObject::GetField(pFVar11,&local_158,&local_d8,Array);
              bVar12 = FJsonObjectConverter::JsonValueToUProperty
                                 (&local_158,param_2,param_3,0,0,false,(FText *)0x0,
                                  (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                                   *)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_158.SharedReferenceCount.ReferenceController);
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              if (bVar12) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_1e0.SharedReferenceCount.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_288.SharedReferenceCount.ReferenceController);
                local_38.Data.AllocatorInstance.Data = local_2e8.Data.AllocatorInstance.Data;
                goto joined_r0x00014ebc056a;
              }
              if (2 < (byte)LogOnline._0_1_) {
                FProperty::GetNameCPP(param_2,&local_b8);
                ::FString::PrintfImpl
                          (&local_200,
                           L"ConvertScalarVariantToFProperty - Unable to parse %s from JSON");
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
                local_1f0.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
                if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_200.Data.AllocatorInstance.Data);
                  local_1f0.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
                }
                goto LAB_14ebc07cc;
              }
            }
            else if (2 < (byte)LogOnline._0_1_) {
              ::FString::PrintfImpl
                        (&local_1f0,L"ConvertScalarVariantToFProperty - Unable to parse json=[%s]");
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
LAB_14ebc07cc:
              if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1e0.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_288.SharedReferenceCount.ReferenceController);
            local_98.Data.AllocatorInstance.Data = local_2e8.Data.AllocatorInstance.Data;
            goto LAB_14ebc0f9f;
          }
          if ((uVar4 >> 0x1e & 1) != 0) {
            if (param_1->Type != String) {
              if ((byte)LogOnline._0_1_ < 2) goto LAB_14ebc0fa9;
              FProperty::GetNameCPP(param_2,&local_98);
              ::FString::PrintfImpl
                        (&local_1d0,
                         L"ConvertScalarVariantToFProperty - Attempted to import FText from variant that was not a string for property %s"
                        );
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
              if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
              }
              goto LAB_14ebc0f9f;
            }
            local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a8.Data.ArrayNum = 0;
            local_2a8.Data.ArrayMax = 0;
            if ((param_1->Value).AsTCHAR == (wchar_t *)0x0) {
              ::FString::Reset(&local_2a8,0);
            }
            else {
              ::FString::operator=(&local_2a8,(param_1->Value).AsTCHAR);
            }
            pFVar21 = FText::FromString(&local_a8,&local_2a8);
            pIVar5 = *(ITextData **)param_3;
            pIVar6 = (pFVar21->TextData).Reference;
            if (pIVar5 != pIVar6) {
              *(ITextData **)param_3 = pIVar6;
              if (pIVar6 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_res10);
              }
              if (pIVar5 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
              }
            }
            *(uint *)((longlong)param_3 + 8) = pFVar21->Flags;
            local_38.Data.AllocatorInstance.Data = local_2a8.Data.AllocatorInstance.Data;
            if (local_a8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
              local_38.Data.AllocatorInstance.Data = local_2a8.Data.AllocatorInstance.Data;
            }
            goto joined_r0x00014ebc056a;
          }
          if ((uVar4 >> 0x14 & 1) == 0) goto LAB_14ebc0e81;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::FName::FName(&NAME_DateTime,L"DateTime");
            _Init_thread_footer(&::_TSS0);
          }
          uVar28 = 0;
          if (param_1->Type == String) {
            if (*(FName *)(param_2[1]._padding_ + 0x18) == NAME_DateTime) {
              local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_328.Data.ArrayNum = 0;
              local_328.Data.ArrayMax = 0;
              if ((param_1->Value).AsTCHAR == (wchar_t *)0x0) {
                ::FString::Reset(&local_328,0);
              }
              else {
                ::FString::operator=(&local_328,(param_1->Value).AsTCHAR);
              }
              FVar27.Data = (FScriptContainerElement *)L"";
              if (local_328.Data.ArrayNum != 0) {
                FVar27.Data = local_328.Data.AllocatorInstance.Data;
              }
              iVar15 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar27.Data,L"min");
              if (iVar15 == 0) {
                *(undefined8 *)param_3 = 0;
                local_38.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
              }
              else {
                FVar27.Data = (FScriptContainerElement *)L"";
                if (local_328.Data.ArrayNum != 0) {
                  FVar27.Data = local_328.Data.AllocatorInstance.Data;
                }
                iVar15 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar27.Data,L"max");
                if (iVar15 == 0) {
                  *(undefined8 *)param_3 = 0x2bca2875f4373fff;
                  local_38.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
                }
                else {
                  FVar27.Data = (FScriptContainerElement *)L"";
                  if (local_328.Data.ArrayNum != 0) {
                    FVar27.Data = local_328.Data.AllocatorInstance.Data;
                  }
                  iVar15 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar27.Data,L"now");
                  if (iVar15 == 0) {
                    FVar22 = FDateTime::UtcNow();
                    *(undefined8 *)param_3 = *(undefined8 *)FVar22.Ticks;
                    local_38.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
                  }
                  else {
                    FVar27.Data = (FScriptContainerElement *)L"";
                    if (local_328.Data.ArrayNum != 0) {
                      FVar27.Data = local_328.Data.AllocatorInstance.Data;
                    }
                    bVar12 = FDateTime::ParseIso8601((wchar_t *)FVar27.Data,param_3);
                    local_38.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
                    if (!bVar12) {
                      local_98.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
                      if (1 < (byte)LogOnline._0_1_) {
                        FProperty::GetNameCPP(param_2,&local_88);
                        ::FString::PrintfImpl
                                  (&local_1c0,
                                   L"ConvertScalarVariantToFProperty - Unable to import FDateTime from Iso8601 String for property %s"
                                  );
                        UE::Logging::Private::BasicLog<2>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogOnline);
                        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                        }
                        local_98.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data
                        ;
                        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_88.Data.AllocatorInstance.Data);
                          local_98.Data.AllocatorInstance.Data =
                               local_328.Data.AllocatorInstance.Data;
                        }
                      }
                      goto LAB_14ebc0f9f;
                    }
                  }
                }
              }
              goto joined_r0x00014ebc056a;
            }
LAB_14ebc0b0a:
            local_318.Data.ArrayNum = 0;
            local_318.Data.ArrayMax = 0;
            local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if ((param_1->Value).AsTCHAR == (wchar_t *)0x0) goto LAB_14ebc0b1f;
            ::FString::operator=(&local_318,(param_1->Value).AsTCHAR);
          }
          else {
            if (param_1->Type == Json) goto LAB_14ebc0b0a;
LAB_14ebc0b1f:
            local_318.Data.ArrayNum = 0;
            local_318.Data.ArrayMax = 0;
            local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            ::FString::Reset(&local_318,0);
          }
          pIVar23 = UScriptStruct::GetCppStructOps((UScriptStruct *)param_2[1]._padding_);
          pUVar24 = FJsonObjectWrapper::StaticStruct();
          pFVar10 = GWarn;
          pUVar7 = (UScriptStruct *)param_2[1]._padding_;
          if (pUVar7 == (UScriptStruct *)0x0) {
            bVar12 = pUVar24 == (UScriptStruct *)0x0;
          }
          else {
            bVar12 = pUVar7 == pUVar24;
          }
          if (((bVar12) || (pIVar23 == (ICppStructOps *)0x0)) ||
             (pFVar8 = pIVar23->FakeVPtr, !(pFVar8->Capabilities).HasImportTextItem)) {
            local_298.Object = (FJsonObject *)0x0;
            local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            TJsonReaderFactory<wchar_t>::Create(&local_190,&local_318);
            bVar12 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                               (&local_190,&local_298,None);
            if ((bVar12) && (local_298.Object != (FJsonObject *)0x0)) {
              if ((local_298.Object == (FJsonObject *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                uVar13 = (*pcVar9)();
                return (bool)uVar13;
              }
              pFVar11 = local_298.Object;
              pFVar20 = FProperty::GetNameCPP(param_2,&local_68);
              local_148 = (pFVar20->Data).AllocatorInstance.Data;
              iVar15 = (pFVar20->Data).ArrayNum;
              iStack_140 = iVar15 + -1;
              if (iVar15 == 0) {
                iStack_140 = 0;
              }
              local_78._12_4_ = uStack_13c;
              local_78.Size = iStack_140;
              local_78.DataPtr = (wchar_t *)local_148;
              FJsonObject::GetField(pFVar11,&local_138,&local_78,Object);
              bVar12 = FJsonObjectConverter::JsonValueToUProperty
                                 (&local_138,param_2,param_3,0,0,false,(FText *)0x0,
                                  (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                                   *)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_138.SharedReferenceCount.ReferenceController);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (bVar12) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_190.SharedReferenceCount.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_298.SharedReferenceCount.ReferenceController);
                local_38.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
                goto joined_r0x00014ebc056a;
              }
              if (2 < (byte)LogOnline._0_1_) {
                FProperty::GetNameCPP(param_2,&local_58);
                ::FString::PrintfImpl
                          (&local_1b0,
                           L"ConvertScalarVariantToFProperty - Unable to parse %s from JSON");
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
                local_1a0.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
                if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                  local_1a0.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
                }
                goto LAB_14ebc0e58;
              }
            }
            else if (2 < (byte)LogOnline._0_1_) {
              ::FString::PrintfImpl
                        (&local_1a0,L"ConvertScalarVariantToFProperty - Unable to parse json=[%s]");
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
LAB_14ebc0e58:
              if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_190.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_298.SharedReferenceCount.ReferenceController);
            local_98.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
            goto LAB_14ebc0f9f;
          }
          local_278 = (FScriptContainerElement *)L"";
          if (local_318.Data.ArrayNum != 0) {
            local_278 = local_318.Data.AllocatorInstance.Data;
          }
          if (((pFVar8->Flags & ImportTextItem) == None) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!!(this->Flags & FuncFlag)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0x660,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            uVar13 = (*pcVar9)();
            return (bool)uVar13;
          }
          for (EVar26 = pFVar8->Flags &
                        (ExportTextItem|Identical|Copy|GetPreloadDependencies|PostScriptConstruct|
                         NetDeltaSerialize|NetSerialize|PostSerialize|SerializeSlot|SerializeArchive
                         |Destruct|ConstructForTests|Construct); EVar26 != None;
              EVar26 = EVar26 & EVar26 - Construct) {
            uVar28 = (ulonglong)((int)uVar28 + 1);
          }
          cVar14 = (**(code **)(&pFVar8[1].Flags + uVar28 * 2))(&local_278,param_3,0,0,pFVar10);
          local_38.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
          if (cVar14 == '\0') {
            FProperty::ImportText_Direct
                      (param_2,(wchar_t *)local_278,param_3,(UObject *)0x0,0,(FOutputDevice *)GWarn)
            ;
            local_38.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
          }
        }
      }
      else {
        local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2f8.Data.ArrayNum = 0;
        local_2f8.Data.ArrayMax = 0;
        if (((param_1->Type == String) || (param_1->Type == Json)) &&
           ((param_1->Value).AsTCHAR != (wchar_t *)0x0)) {
          ::FString::operator=(&local_2f8,(param_1->Value).AsTCHAR);
        }
        else {
          ::FString::Reset(&local_2f8,0);
        }
        FVar27.Data = local_2f8.Data.AllocatorInstance.Data;
        local_38.Data.AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
        if (param_3 != &local_2f8) {
          iVar15 = local_2f8.Data.ArrayNum;
          lVar18 = (longlong)local_2f8.Data.ArrayNum;
          piVar1 = (int *)((longlong)param_3 + 0xc);
          *(int *)((longlong)param_3 + 8) = local_2f8.Data.ArrayNum;
          if ((local_2f8.Data.ArrayNum == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_2f8.Data.ArrayNum,*piVar1,param_3,local_2f8.Data.ArrayNum,piVar1);
            local_38.Data.AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
            if (iVar15 != 0) {
              memcpy(*(void **)param_3,FVar27.Data,lVar18 * 2);
              local_38.Data.AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
            }
          }
        }
      }
joined_r0x00014ebc056a:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      lVar18 = (**(code **)(param_2->_padding_ + 0x1e0))(param_2);
      if ((lVar18 != 0) && (param_1->Type == String)) {
        pUVar19 = (UEnum *)(**(code **)(param_2->_padding_ + 0x1e0))(param_2);
        if ((pUVar19 == (UEnum *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Enum",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Private\\OnlineKeyValuePair.cpp"
                                ,0x585,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_308.Data.ArrayNum = 0;
        local_308.Data.ArrayMax = 0;
        if (((param_1->Type == String) || (param_1->Type == Json)) &&
           ((param_1->Value).AsTCHAR != (wchar_t *)0x0)) {
          ::FString::operator=(&local_308,(param_1->Value).AsTCHAR);
        }
        else {
          ::FString::Reset(&local_308,0);
        }
        FVar27.Data = (FScriptContainerElement *)L"";
        if (local_308.Data.ArrayNum != 0) {
          FVar27.Data = local_308.Data.AllocatorInstance.Data;
        }
        pFVar16 = ::FName::FName(local_120,(wchar_t *)FVar27.Data);
        lVar17 = UEnum::GetValueByName(pUVar19,*pFVar16,None);
        if ((int)lVar17 != -1) {
          (**(code **)(param_2->_padding_ + 0x1e8))(param_2,param_3,(longlong)(int)lVar17);
          local_38.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
          goto joined_r0x00014ebc056a;
        }
        local_98.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
        if (1 < (byte)LogOnline._0_1_) {
          FProperty::GetNameCPP(param_2,&local_100);
          ::FString::PrintfImpl
                    (&local_230,
                     L"ConvertScalarVariantToFProperty - Unable import enum %s from string value %s for property %s"
                    );
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
          local_98.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
            local_98.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
          }
        }
LAB_14ebc0f9f:
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        goto LAB_14ebc0fa9;
      }
      cVar14 = (**(code **)(param_2->_padding_ + 0x1d0))(param_2);
      if (cVar14 == '\0') {
        cVar14 = (**(code **)(param_2->_padding_ + 0x1d8))(param_2);
        if (cVar14 == '\0') {
          if ((byte)LogOnline._0_1_ < 2) goto LAB_14ebc0fa9;
          FProperty::GetNameCPP(param_2,&local_f0);
          ::FName::ToString((FName *)param_2->_padding_,&local_210);
          ::FString::PrintfImpl
                    (&local_220,
                     L"ConvertScalarVariantToFProperty - Unable to set numeric property type %s for property %s"
                    );
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u__s_s_153021590,(FLogCategoryBase *)&LogOnline);
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          local_98.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
            local_98.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
          }
          goto LAB_14ebc0f9f;
        }
        TVar2 = param_1->Type;
        uVar28 = 0;
        if (TVar2 == String) {
          local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2b8.Data.ArrayNum = 0;
          local_2b8.Data.ArrayMax = 0;
          if ((param_1->Value).AsTCHAR == (wchar_t *)0x0) {
            ::FString::Reset(&local_2b8,0);
          }
          else {
            ::FString::operator=(&local_2b8,(param_1->Value).AsTCHAR);
          }
          FVar27.Data = (FScriptContainerElement *)L"";
          if (local_2b8.Data.ArrayNum != 0) {
            FVar27.Data = local_2b8.Data.AllocatorInstance.Data;
          }
          pcVar9 = *(code **)(param_2->_padding_ + 0x1e8);
          lVar18 = _wtoi64((wchar_t *)FVar27.Data);
          (*pcVar9)(param_2,param_3,lVar18);
          local_38.Data.AllocatorInstance.Data = local_2b8.Data.AllocatorInstance.Data;
          goto joined_r0x00014ebc056a;
        }
        if (TVar2 == Double) {
          uVar28 = (ulonglong)(param_1->Value).AsDouble;
        }
        else if (TVar2 == Float) {
          uVar28 = (ulonglong)(param_1->Value).AsFloat;
        }
        else if (TVar2 == Int32) {
          uVar28 = (ulonglong)(param_1->Value).AsInt;
        }
        else if (TVar2 == UInt32) {
          uVar28 = (ulonglong)(param_1->Value).AsUInt;
        }
        else if ((TVar2 == Int64) || (TVar2 == UInt64)) {
          uVar28 = (param_1->Value).AsInt64;
        }
        (**(code **)(param_2->_padding_ + 0x1e8))(param_2,param_3,uVar28);
      }
      else if (param_1->Type == Double) {
        (**(code **)(param_2->_padding_ + 0x1f8))(param_2,param_3,(param_1->Value).AsInt64);
      }
      else if (param_1->Type == Float) {
        (**(code **)(param_2->_padding_ + 0x1f8))(param_2,param_3,(double)(param_1->Value).AsFloat);
      }
    }
LAB_14ebc1069:
    bVar12 = true;
  }
  else {
    TVar2 = param_1->Type;
    pUVar19 = (UEnum *)param_2[1]._padding_;
    uVar28 = 0;
    if (TVar2 == String) {
      local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.Data.ArrayNum = 0;
      local_2d8.Data.ArrayMax = 0;
      if ((param_1->Value).AsTCHAR == (wchar_t *)0x0) {
        ::FString::Reset(&local_2d8,0);
      }
      else {
        ::FString::operator=(&local_2d8,(param_1->Value).AsTCHAR);
      }
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_2d8.Data.ArrayNum != 0) {
        FVar27.Data = local_2d8.Data.AllocatorInstance.Data;
      }
      pFVar16 = ::FName::FName(&local_128,(wchar_t *)FVar27.Data);
      lVar17 = UEnum::GetValueByName(pUVar19,*pFVar16,None);
      if (lVar17 != -1) {
        (**(code **)(*(longlong *)param_2[1]._padding_ + 0x1e8))
                  ((longlong *)param_2[1]._padding_,param_3,lVar17);
        local_38.Data.AllocatorInstance.Data = local_2d8.Data.AllocatorInstance.Data;
        goto joined_r0x00014ebc056a;
      }
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
    }
    else {
      if (TVar2 == Double) {
        uVar28 = (ulonglong)(param_1->Value).AsDouble;
      }
      else if (TVar2 == Float) {
        uVar28 = (ulonglong)(param_1->Value).AsFloat;
      }
      else if (TVar2 == Int32) {
        uVar28 = (ulonglong)(param_1->Value).AsInt;
      }
      else if (TVar2 == UInt32) {
        uVar28 = (ulonglong)(param_1->Value).AsUInt;
      }
      else if ((TVar2 == Int64) || (TVar2 == UInt64)) {
        uVar28 = (param_1->Value).AsInt64;
      }
      (**(code **)(*(longlong *)param_2[1]._padding_ + 0x1e8))
                ((longlong *)param_2[1]._padding_,param_3,uVar28);
    }
    if (1 < (byte)LogOnline._0_1_) {
      FProperty::GetNameCPP(param_2,&local_110);
      EOnlineKeyValuePairDataType::ToString(param_1->Type);
      ::FString::PrintfImpl
                (&local_240,
                 L"ConvertScalarVariantToFProperty - Unable to import enum %s from %s value for property %s"
                );
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      local_98.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
        local_98.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
      }
      goto LAB_14ebc0f9f;
    }
LAB_14ebc0fa9:
    bVar12 = false;
  }
  return bVar12;
}

// FPropertyToVariantData @ 14ebf83a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FVariantDataConverter::FPropertyToVariantData
          (FProperty *param_1,void *param_2,long64 param_3,long64 param_4,FVariantData *param_5)

{
  FName *this;
  bool bVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1->ArrayDim == 1) {
    bVar1 = ConvertScalarFPropertyToVariant(param_1,param_2,param_5,param_3,param_4);
    return bVar1;
  }
  this = (FName *)param_1->_padding_;
  if (1 < (byte)LogOnline._0_1_) {
    FField::GetPathName((FField *)param_1,&local_18,(UObject *)0x0);
    ::FName::ToString(this,&local_28);
    ::FString::PrintfImpl(&local_38,L"FPropertyToVariantData - ArrayDim > 1 for \'%s\': %s");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// UStructToVariantMap @ 14ec1aab0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FVariantDataConverter::UStructToVariantMap
          (UStruct *param_1,void *param_2,FOnlineKeyValuePairs<FString,FVariantData> *param_3,
          long64 param_4,long64 param_5)

{
  char cVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  FProperty *this;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  TKeyInitializer<FString_const_&> local_res8;
  void *local_res10;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  *local_res18;
  TFieldIterator<FProperty> local_c8;
  FString local_b0;
  FString *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1 == (UStruct *)0x0) {
    local_c8.Field = (FField *)0x0;
  }
  else {
    local_c8.Field = param_1->ChildProperties;
  }
  local_c8.InterfaceIndex = -1;
  local_c8.bIncludeSuper = true;
  local_c8.bIncludeDeprecated = true;
  local_c8.bIncludeInterface = false;
  local_res10 = param_2;
  local_res18 = (TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                 *)param_3;
  local_c8.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_c8);
  this = (FProperty *)local_c8.Field;
  do {
    if (this == (FProperty *)0x0) {
      return true;
    }
    if ((((param_4 == 0) || ((this->PropertyFlags & param_4) != CPF_None)) || (param_4 == -1)) &&
       (((this->PropertyFlags & param_5) == CPF_None && (param_5 != -1)))) {
      local_c8.Field = (FField *)this;
      bVar6 = IsThisNotNull(this,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&this->_padding_,&local_b0);
      }
      else {
        ::FString::FString(&local_b0,L"None");
      }
      if ((this->ArrayDim < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if ((param_2 == (void *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pTVar5 = local_res18;
      iVar2 = this->Offset_Internal;
      local_a0 = &local_b0;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FString_const_&>_>(local_res18,&local_res8,(bool *)&local_a0);
      lVar8 = *(longlong *)&pTVar5->Elements + (longlong)(int)local_res8.Key * 0x38;
      if (this->ArrayDim != 1) {
        pFVar3 = (FName *)this->_padding_;
        if (1 < (byte)LogOnline._0_1_) {
          FField::GetPathName((FField *)this,&local_58,(UObject *)0x0);
          ::FName::ToString(pFVar3,&local_88);
          ::FString::PrintfImpl(&local_98,L"FPropertyToVariantData - ArrayDim > 1 for \'%s\': %s");
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
LAB_14ec1ad67:
        cVar1 = *(char *)(lVar8 + 0x10);
        if (((cVar1 == '\x06') || (cVar1 == '\b')) || (cVar1 == '\n')) {
          operator_delete__(*(void **)(lVar8 + 0x18));
        }
        *(undefined1 *)(lVar8 + 0x10) = 0;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined4 *)(lVar8 + 0x28) = 0;
        pFVar3 = (FName *)this->_padding_;
        if (1 < (byte)LogOnline._0_1_) {
          FField::GetPathName((FField *)this,&local_48,(UObject *)0x0);
          ::FName::ToString(pFVar3,&local_68);
          ::FString::PrintfImpl
                    (&local_78,L"UStructToVariantMap - Unhandled property type \'%s\': %s");
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        return false;
      }
      bVar6 = ConvertScalarFPropertyToVariant
                        (this,(void *)((longlong)iVar2 + (longlong)param_2),
                         (FVariantData *)(lVar8 + 0x10),param_4,param_5);
      if (!bVar6) goto LAB_14ec1ad67;
      param_2 = local_res10;
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        param_2 = local_res10;
      }
    }
    local_c8.Field = (FField *)this->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_c8);
    this = (FProperty *)local_c8.Field;
  } while( true );
}

// VariantDataToFProperty @ 14ec1c460

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FVariantDataConverter::VariantDataToFProperty
          (FVariantData *param_1,FProperty *param_2,void *param_3,long64 param_4,long64 param_5)

{
  bool bVar1;
  FString local_28;
  FString local_18;
  
  if (param_1 == (FVariantData *)0x0) {
    if (1 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_28,L"VariantDataToFProperty - Invalid value");
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    bVar1 = false;
  }
  else {
    if ((param_2->ArrayDim != 1) && (2 < (byte)LogOnline._0_1_)) {
      bVar1 = IsThisNotNull(param_2,"FField::GetName");
      if (bVar1) {
        ::FName::ToString((FName *)&param_2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      ::FString::PrintfImpl(&local_18,L"Ignoring excess properties when deserializing %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    bVar1 = ConvertScalarVariantToFProperty(param_1,param_2,param_3,param_4,param_5);
  }
  return bVar1;
}

// VariantMapToUStruct @ 14ec1c5e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FVariantDataConverter::VariantMapToUStruct
          (FOnlineKeyValuePairs<FString,FVariantData> *param_1,UStruct *param_2,void *param_3,
          long64 param_4,long64 param_5)

{
  FVariantData *pFVar1;
  code *pcVar2;
  FProperty *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  TFieldIterator<FProperty> local_50;
  
  if (param_2 == (UStruct *)0x0) {
    local_50.Field = (FField *)0x0;
  }
  else {
    local_50.Field = param_2->ChildProperties;
  }
  local_50.InterfaceIndex = -1;
  local_50.bIncludeSuper = true;
  local_50.bIncludeDeprecated = true;
  local_50.bIncludeInterface = false;
  local_50.Struct = param_2;
  TFieldIterator<FProperty>::IterateToNext(&local_50);
  pFVar3 = (FProperty *)local_50.Field;
  do {
    if (pFVar3 == (FProperty *)0x0) {
      return true;
    }
    local_50.Field = (FField *)pFVar3;
    bVar4 = IsThisNotNull(pFVar3,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&pFVar3->_padding_,&local_a0);
    }
    else {
      ::FString::FString(&local_a0,L"None");
    }
    if ((((param_4 == 0) || ((pFVar3->PropertyFlags & param_4) != CPF_None)) || (param_4 == -1)) &&
       (((pFVar3->PropertyFlags & param_5) == CPF_None && (param_5 != -1)))) {
      pwVar9 = L"";
      if (local_a0.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = local_a0.Data.ArrayNum + -1;
        pwVar9 = (wchar_t *)local_a0.Data.AllocatorInstance.Data;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
      iVar7 = TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                          *)param_1,uVar6,&local_a0);
      if (((iVar7 == -1) || (lVar8 = (longlong)iVar7 * 0x38 + *(longlong *)param_1, lVar8 == 0)) ||
         (pFVar1 = (FVariantData *)(lVar8 + 0x10), pFVar1 == (FVariantData *)0x0))
      goto LAB_14ec1c6b6;
      if ((pFVar3->ArrayDim < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar7 = pFVar3->Offset_Internal;
      if ((pFVar3->ArrayDim != 1) && (2 < (byte)LogOnline._0_1_)) {
        bVar4 = IsThisNotNull(pFVar3,"FField::GetName");
        if (bVar4) {
          ::FName::ToString((FName *)&pFVar3->_padding_,&local_90);
        }
        else {
          ::FString::FString(&local_90,L"None");
        }
        ::FString::PrintfImpl(&local_80,L"Ignoring excess properties when deserializing %s");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      bVar4 = ConvertScalarVariantToFProperty
                        (pFVar1,pFVar3,(void *)((longlong)iVar7 + (longlong)param_3),param_4,param_5
                        );
      if (!bVar4) {
        if (1 < (byte)LogOnline._0_1_) {
          local_a8 = (FName)param_2->_padding_;
          ::FName::ToString(&local_a8,&local_60);
          ::FString::PrintfImpl
                    (&local_70,L"VariantMapToUStruct - Unable to parse %s.%s from Variant");
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        return false;
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    else {
LAB_14ec1c6b6:
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    local_50.Field = (FField *)pFVar3->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_50);
    pFVar3 = (FProperty *)local_50.Field;
  } while( true );
}

