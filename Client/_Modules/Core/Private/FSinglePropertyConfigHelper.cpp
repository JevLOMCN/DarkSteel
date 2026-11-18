// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// AppendPropertyLine @ 141862850

void __thiscall
FSinglePropertyConfigHelper::AppendPropertyLine(FSinglePropertyConfigHelper *this,FString *param_1)

{
  char cVar1;
  FConfigCommandStreamSection *this_00;
  FString *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  FName local_res10;
  FScriptContainerElement *local_res18;
  TArray<FConfigValue_*,TSizedDefaultAllocator<32>_> local_d8;
  FString local_c8;
  TMap<wchar_t,FConfigValue::EValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<wchar_t,FConfigValue::EValueType,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  TMap<wchar_t,FConfigValue::EValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<wchar_t,FConfigValue::EValueType,0>_>
  *local_90;
  uint uStack_88;
  uint uStack_84;
  undefined8 local_80;
  undefined4 uStack_78;
  int iStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_44;
  
  pwVar13 = L"";
  if (((*(int *)((longlong)&(this->PropertyValue).field0_0x0 + 0xc) == -1) &&
      (this->bUpdateLayer == false)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyValue.IsSet() || bUpdateLayer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                         ,0x2ab,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ClearTrailingWhitespace(this,param_1);
  ::FString::AppendChars(param_1,L"\r\n",2);
  if (this->bUpdateLayer == false) {
    if ((*(int *)((longlong)&(this->PropertyValue).field0_0x0 + 0xc) == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    FConfigFile::AppendExportedPropertyLine
              (&local_c8,&this->PropertyName,(FString *)&this->PropertyValue);
    iVar18 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar18 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar18);
    FVar10.Data = local_c8.Data.AllocatorInstance.Data;
  }
  else {
    pwVar15 = (wchar_t *)0x0;
    this_00 = this->LayerSection;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    if ((this->PropertyName).Data.ArrayNum != 0) {
      pwVar13 = (wchar_t *)(this->PropertyName).Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_res10,pwVar13);
    TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::MultiFindPointer<TSizedDefaultAllocator<32>_>
              ((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)this_00,*pFVar8,&local_d8,true);
    uVar9 = (ulonglong)local_d8.ArrayNum;
    local_res10.ComparisonIndex.Value = local_d8.ArrayNum;
    local_res18 = local_d8.AllocatorInstance.Data + uVar9 * 8;
    uVar12 = uVar9;
    FVar14.Data = local_d8.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_res18;
      if ((int)uVar9 != (int)uVar12) {
        `TCheckedPointerIterator<FConfigValue_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      FVar10.Data = local_d8.AllocatorInstance.Data;
      if (FVar14.Data == pFVar5) break;
      pFVar2 = *(FString **)FVar14.Data;
      cVar1 = *(char *)((longlong)&pFVar2[1].Data.AllocatorInstance.Data + 4);
      if (cVar1 != '\0') {
        uStack_84 = 1;
        local_70 = 0;
        iVar18 = CommandLookup._40_4_;
        pwVar13 = pwVar15;
        uStack_88 = 0;
        if (iVar18 != 0) {
          puVar17 = (uint *)&CommandLookup.field_0x10;
          if (CommandLookup._32_8_ != 0) {
            puVar17 = (uint *)CommandLookup._32_8_;
          }
          uVar7 = *puVar17;
          pwVar11 = pwVar15;
          local_70 = 0;
          while (uVar7 == 0) {
            iVar16 = (int)pwVar13;
            local_70 = (int)pwVar11 + 0x20;
            pwVar11 = (wchar_t *)(ulonglong)local_70;
            uStack_88 = iVar16 + 1;
            pwVar13 = (wchar_t *)(ulonglong)uStack_88;
            if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_88) {
              pwVar13 = (wchar_t *)(CommandLookup._40_8_ & 0xffffffff);
              goto LAB_1418629ee;
            }
            uVar7 = puVar17[(longlong)iVar16 + 1];
          }
          uStack_84 = -uVar7 & uVar7;
          uVar12 = (ulonglong)uStack_84 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uVar7 = (local_70 - 1) + (int)lVar3;
          pwVar13 = (wchar_t *)(ulonglong)uVar7;
          if (iVar18 < (int)uVar7) {
            pwVar13 = (wchar_t *)(CommandLookup._40_8_ & 0xffffffff);
          }
        }
LAB_1418629ee:
        local_90 = &CommandLookup;
        local_80 = 0x154f06180;
        uStack_78 = 0xffffffff;
        iStack_74 = (int)pwVar13;
        uStack_6c = local_44;
        TStack_b0._padding_ = CONCAT44(uStack_84,uStack_88);
        TStack_b0.CurrentBitIndex = iStack_74;
        TStack_b0.UnvisitedBitMask = 0xffffffff;
        local_b8 = &CommandLookup;
        TStack_b0._28_4_ = local_44;
        TStack_b0.BaseBitIndex = local_70;
        TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&CommandLookup.field_0x10;
        pwVar11 = pwVar15;
        if (iStack_74 < iVar18) {
          do {
            pwVar11 = (wchar_t *)(*(longlong *)local_b8 + (longlong)(int)pwVar13 * 0xc);
            if (*(char *)(*(longlong *)local_b8 + 2 + (longlong)(int)pwVar13 * 0xc) == cVar1) break;
            TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
            pwVar13 = (wchar_t *)(ulonglong)(uint)TStack_b0.CurrentBitIndex;
            pwVar11 = pwVar15;
          } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
        }
        ::FString::AppendChar(param_1,*pwVar11);
      }
      FConfigFile::AppendExportedPropertyLine(param_1,&this->PropertyName,pFVar2);
      uVar9 = local_d8._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 8;
      uVar12 = (ulonglong)local_res10.ComparisonIndex.Value;
    }
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return;
}

// ClearTrailingWhitespace @ 141866c90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSinglePropertyConfigHelper::ClearTrailingWhitespace
          (FSinglePropertyConfigHelper *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FString local_18;
  
  ::FString::FString(&local_18,L"\r\n");
  while( true ) {
    bVar2 = ::FString::EndsWith(param_1,L"\r\n",2,CaseSensitive);
    if (!bVar2) break;
    iVar4 = local_18.Data.ArrayNum + -1;
    iVar1 = (param_1->Data).ArrayNum;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    if (iVar3 - iVar4 < iVar3) {
      iVar3 = iVar3 - iVar4;
    }
    iVar1 = 0;
    if (0 < iVar3) {
      iVar1 = iVar3;
    }
    ::FString::RemoveAt(param_1,iVar1,iVar4,No);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// PopulateFileContentHelper @ 141885500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSinglePropertyConfigHelper::PopulateFileContentHelper(FSinglePropertyConfigHelper *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  IniFileContent *this_00;
  int iVar10;
  FScriptContainerElement *local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if ((this->IniFilename).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->IniFilename).Data.AllocatorInstance.Data;
  }
  bVar4 = LoadConfigFileWrapper(pwVar8,&local_48,false);
  if (bVar4) {
    ::FString::PrintfImpl(&local_28,L"[%s]");
    iVar6 = local_28.Data.ArrayNum + -1;
    FVar9.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar9.Data = (FScriptContainerElement *)L"";
    }
    iVar6 = ::FString::Find(&local_48,(wchar_t *)FVar9.Data,iVar6,IgnoreCase,FromStart,-1);
    if (iVar6 == -1) {
      iVar6 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AssignRange
                (&(this->IniFileMakeup).BeforeSection,
                 (wchar_t *)local_48.Data.AllocatorInstance.Data,iVar6);
    }
    else {
      iVar10 = 0;
      iVar7 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar7 = iVar10;
      }
      if (iVar6 < iVar7) {
        iVar7 = iVar6;
      }
      iVar6 = iVar10;
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar9.Data = local_48.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_38,(wchar_t *)FVar9.Data,iVar6);
      pFVar1 = &(this->IniFileMakeup).BeforeSection;
      if (pFVar1 != &local_38) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        (this->IniFileMakeup).BeforeSection.Data.ArrayNum = local_38.Data.ArrayNum;
        (this->IniFileMakeup).BeforeSection.Data.ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      iVar6 = (this->IniFileMakeup).BeforeSection.Data.ArrayNum;
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = iVar10;
      }
      ::FString::RemoveAt(&local_48,0,iVar7,Default);
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      iVar6 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar6 = iVar10;
      }
      if (iVar6 < 1) {
        local_res8 = (FScriptContainerElement *)0x0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      else {
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_res8 = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          local_res8 = local_48.Data.AllocatorInstance.Data;
        }
        bVar4 = false;
        while ((local_res8 != (FScriptContainerElement *)0x0 &&
               (bVar5 = FParse::Line((wchar_t **)&local_res8,&local_58,true), bVar5))) {
          bVar5 = ::FString::StartsWith(&local_58,L"[",1,IgnoreCase);
          iVar6 = local_58.Data.ArrayNum;
          if (bVar5) {
            if (local_58.Data.ArrayNum == local_28.Data.ArrayNum) {
              if (local_58.Data.ArrayNum < 2) goto LAB_1418856f9;
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_58.Data.AllocatorInstance.Data,
                                 (wchar_t *)local_28.Data.AllocatorInstance.Data);
              bVar5 = iVar6 == 0;
            }
            else {
              bVar5 = local_28.Data.ArrayNum + local_58.Data.ArrayNum == 1;
            }
            iVar6 = local_58.Data.ArrayNum;
            if (bVar5) goto LAB_1418856f9;
            bVar3 = 1;
          }
          else {
LAB_1418856f9:
            bVar3 = 0;
          }
          bVar4 = (bool)(bVar4 | bVar3);
          this_00 = &this->IniFileMakeup;
          if (bVar4) {
            this_00 = (IniFileContent *)&(this->IniFileMakeup).AfterSection;
          }
          iVar7 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar7 = 0;
          }
          ::FString::AppendChars
                    (&this_00->Section,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar7);
          ::FString::AppendChars(&this_00->Section,L"\r\n",2);
        }
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateConfigFile @ 1418963a0

bool __thiscall FSinglePropertyConfigHelper::UpdateConfigFile(FSinglePropertyConfigHelper *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  FString local_28;
  FString local_18;
  
  UpdatePropertyInSection(this);
  ::FString::ConcatFF(&local_18,&(this->IniFileMakeup).BeforeSection,&(this->IniFileMakeup).Section)
  ;
  ::FString::ConcatFF(&local_28,&local_18,&(this->IniFileMakeup).AfterSection);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar1 = ::FString::EndsWith(&local_28,L"\r\n\r\n",4,IgnoreCase);
  if (!bVar1) {
    ::FString::AppendChars(&local_28,L"\r\n",2);
  }
  if ((this->IniFilename).Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(this->IniFilename).Data.AllocatorInstance.Data;
  }
  bVar1 = SaveConfigFileWrapper(pwVar2,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// UpdatePropertyInSection @ 141896470

void __thiscall
FSinglePropertyConfigHelper::UpdatePropertyInSection(FSinglePropertyConfigHelper *this)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *local_res8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar6 = false;
  local_res8 = (FScriptContainerElement *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  iVar7 = 0;
  if ((this->IniFileMakeup).Section.Data.ArrayNum < 2) {
    if ((*(int *)((longlong)&(this->PropertyValue).field0_0x0 + 0xc) == -1) &&
       (this->bUpdateLayer == false)) goto LAB_1418967c4;
    ::FString::PrintfImpl(&local_48,L"[%s]");
    ClearTrailingWhitespace(this,&(this->IniFileMakeup).BeforeSection);
    ::FString::AppendChars(&local_78,L"\r\n",2);
    ::FString::AppendChars(&local_78,L"\r\n",2);
    iVar8 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_78,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar8);
    AppendPropertyLine(this,&local_78);
  }
  else {
    local_res8 = (this->IniFileMakeup).Section.Data.AllocatorInstance.Data;
    bVar2 = false;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    if (local_res8 != (FScriptContainerElement *)0x0) {
      do {
        bVar4 = FParse::Line((wchar_t **)&local_res8,&local_68,true);
        if (!bVar4) break;
        ::FString::ConcatFC(&local_58,&this->PropertyName,L"=");
        iVar8 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar8 = iVar7;
        }
        if (iVar8 < 1) {
LAB_14189675b:
          ::FString::AppendChars(&local_78,L"\r\n",2);
        }
        else {
          iVar8 = local_58.Data.ArrayNum + -1;
          FVar3.Data = local_58.Data.AllocatorInstance.Data;
          if (local_58.Data.ArrayNum == 0) {
            iVar8 = iVar7;
            FVar3.Data = (FScriptContainerElement *)L"";
          }
          bVar4 = ::FString::StartsWith(&local_68,(wchar_t *)FVar3.Data,iVar8,IgnoreCase);
          if (bVar4) {
LAB_141896700:
            bVar4 = true;
          }
          else {
            if (this->bUpdateLayer != false) {
              iVar8 = local_68.Data.ArrayNum + -1;
              if (local_68.Data.ArrayNum == 0) {
                iVar8 = iVar7;
              }
              if ((iVar8 < 1) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                     ,0x107,
                                     L"String index out of bounds: Index %i from a string with a length of %i"
                                    ), bVar4)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              if (CommandLookup._8_4_ != CommandLookup._52_4_) {
                lVar5 = 0x154f061a8;
                if (CommandLookup._64_8_ != 0) {
                  lVar5 = CommandLookup._64_8_;
                }
                iVar8 = *(int *)(lVar5 + ((ulonglong)(CommandLookup._72_4_ - 1) &
                                         (ulonglong)
                                         (ushort)*(wchar_t *)local_68.Data.AllocatorInstance.Data) *
                                         4);
                if (iVar8 != -1) {
                  do {
                    if (*(wchar_t *)(CommandLookup._0_8_ + (longlong)iVar8 * 0xc) ==
                        *(wchar_t *)local_68.Data.AllocatorInstance.Data) {
                      bVar6 = true;
                      ::FString::RightChop(&local_68,&local_38,1);
                      iVar8 = local_58.Data.ArrayNum + -1;
                      FVar3.Data = local_58.Data.AllocatorInstance.Data;
                      if (local_58.Data.ArrayNum == 0) {
                        iVar8 = iVar7;
                        FVar3.Data = (FScriptContainerElement *)L"";
                      }
                      bVar4 = ::FString::StartsWith
                                        (&local_38,(wchar_t *)FVar3.Data,iVar8,IgnoreCase);
                      if (bVar4) goto LAB_141896700;
                      goto LAB_1418966fb;
                    }
                    iVar8 = *(int *)(CommandLookup._0_8_ + 4 + (longlong)iVar8 * 0xc);
                  } while (iVar8 != -1);
                  bVar4 = false;
                  goto LAB_141896703;
                }
              }
            }
LAB_1418966fb:
            bVar4 = false;
          }
LAB_141896703:
          if ((bVar6) &&
             (bVar6 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (!bVar4) {
            iVar8 = local_68.Data.ArrayNum + -1;
            if (local_68.Data.ArrayNum == 0) {
              iVar8 = iVar7;
            }
            ::FString::AppendChars(&local_78,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar8);
            goto LAB_14189675b;
          }
          if ((!bVar2) &&
             ((*(int *)((longlong)&(this->PropertyValue).field0_0x0 + 0xc) != -1 ||
              (this->bUpdateLayer != false)))) {
            AppendPropertyLine(this,&local_78);
          }
          bVar2 = true;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      } while (local_res8 != (FScriptContainerElement *)0x0);
      local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      if (bVar2) goto LAB_1418967ba;
    }
    if ((this->bUpdateLayer != false) ||
       (local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data,
       *(int *)((longlong)&(this->PropertyValue).field0_0x0 + 0xc) != -1)) {
      AppendPropertyLine(this,&local_78);
      local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    }
  }
LAB_1418967ba:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_1418967c4:
  ::FString::AppendChars(&local_78,L"\r\n",2);
  iVar8 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar8 = iVar7;
  }
  ::FString::AssignRange
            (&(this->IniFileMakeup).Section,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar8);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

