// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 4

// Matches @ 142c640d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches
          (FToolMenuAutomationTestAdapter *this,FMenu *param_1,UToolMenu *param_2)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  FScriptContainerElement *pFVar3;
  FMenuSection *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FToolMenuSection *pFVar16;
  uint uVar17;
  longlong lVar18;
  int local_res20;
  uint local_f4;
  longlong local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar11 = false;
  if (param_1->_padding_ == 0) {
LAB_142c64152:
    bVar6 = true;
  }
  else {
    pFVar2 = this->TestInstance;
    ::FString::FString(&local_d8,"ToolMenu Name");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar14.Data = local_d8.Data.AllocatorInstance.Data;
    }
    bVar11 = true;
    bVar6 = FAutomationTestBase::TestEqual
                      (pFVar2,(wchar_t *)FVar14.Data,param_2->MenuName,(FName)param_1->_padding_);
    if (bVar6) goto LAB_142c64152;
    bVar6 = false;
  }
  if ((bVar11) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  bVar9 = false;
  bVar11 = false;
  bVar8 = false;
  if (((this->Parameters).SectionMatchParameters.bActualHasAllExpectedItems == false) ||
     (bVar8 = bVar6, (this->Parameters).SectionMatchParameters.bExpectedHasAllActualItems == false))
  {
LAB_142c641fb:
    bVar6 = bVar8;
    bVar8 = false;
  }
  else {
    pFVar2 = this->TestInstance;
    iVar1 = (param_2->Sections).ArrayNum;
    iVar13 = (param_1->Sections).ArrayNum;
    ::FName::ToString(&param_2->MenuName,&local_78);
    bVar9 = true;
    bVar11 = true;
    ::FString::PrintfImpl(&local_c8,L"Section Count (for menu \"%s\")");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar14.Data = local_c8.Data.AllocatorInstance.Data;
    }
    bVar7 = FAutomationTestBase::TestEqual(pFVar2,(wchar_t *)FVar14.Data,iVar1,iVar13);
    if (bVar7) goto LAB_142c641fb;
    bVar8 = true;
  }
  if ((bVar11) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((bVar9) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar9 = false;
  bVar11 = false;
  if (bVar8) {
    bVar6 = false;
  }
  if ((this->Parameters).SectionMatchParameters.bActualHasAllExpectedItems == false) {
LAB_142c642b6:
    bVar8 = false;
  }
  else {
    pFVar2 = this->TestInstance;
    iVar1 = (param_1->Sections).ArrayNum;
    iVar13 = (param_2->Sections).ArrayNum;
    ::FName::ToString(&param_2->MenuName,&local_68);
    bVar9 = true;
    bVar11 = true;
    ::FString::PrintfImpl(&local_b8,L"Section Count (for menu \"%s\")");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar14.Data = local_b8.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestGreaterEqual(pFVar2,(wchar_t *)FVar14.Data,iVar13,iVar1);
    if (bVar8) goto LAB_142c642b6;
    bVar8 = true;
  }
  if ((bVar11) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((bVar9) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar9 = false;
  bVar11 = false;
  if (bVar8) {
    bVar6 = false;
  }
  if ((this->Parameters).SectionMatchParameters.bExpectedHasAllActualItems != false) {
    pFVar2 = this->TestInstance;
    iVar1 = (param_2->Sections).ArrayNum;
    iVar13 = (param_1->Sections).ArrayNum;
    ::FName::ToString((FName *)&param_1->_padding_,&local_58);
    bVar9 = true;
    bVar11 = true;
    ::FString::PrintfImpl(&local_a8,L"Section Count (for menu \"%s\")");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar14.Data = local_a8.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestGreaterEqual(pFVar2,(wchar_t *)FVar14.Data,iVar13,iVar1);
    if (!bVar8) {
      bVar8 = true;
      goto LAB_142c6438b;
    }
  }
  bVar8 = false;
LAB_142c6438b:
  if ((bVar11) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((bVar9) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    bVar6 = false;
  }
  iVar1 = (param_1->Sections).ArrayNum;
  local_res20 = 0;
  bVar11 = true;
  local_f4 = 0xffffffff;
  uVar17 = 0;
  iVar13 = 0;
  if (0 < iVar1) {
    local_e0 = 0;
    bVar11 = true;
    do {
      uVar15 = 0;
      if ((int)uVar17 < (param_1->Sections).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      pFVar3 = (param_1->Sections).AllocatorInstance.Data;
      uVar15 = 0;
      if (0 < (param_2->Sections).ArrayNum) {
        lVar18 = 0;
        do {
          ::FName::ToString(&param_2->MenuName,&local_48);
          ::FString::PrintfImpl(&local_98,L"Section (for menu \"%s\")");
          if (((int)uVar15 < 0) || ((param_2->Sections).ArrayNum <= (int)uVar15)) {
            pFVar2 = this->TestInstance;
            pcVar5 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::PrintfImpl
                      (&local_88,
                       L"Expected %s at Index %d, but the array only contains %d elements.");
            (*pcVar5)(pFVar2,&local_88,1);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          uVar12 = 0;
          if ((int)uVar15 < (param_2->Sections).ArrayNum) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          pFVar4 = *(FMenuSection **)(pFVar3 + local_e0);
          pFVar16 = (FToolMenuSection *)((param_2->Sections).AllocatorInstance.Data + lVar18);
          if (pFVar4->Name == (FName)0x0) {
LAB_142c64626:
            local_res20 = local_res20 + 1;
            if (((this->Parameters).SectionMatchParameters.bActualHasExpectedOrder != false) &&
               (bVar9 = (int)uVar15 < (int)local_f4, local_f4 = uVar15, bVar9)) {
              bVar11 = false;
            }
            break;
          }
          if (pFVar4->Name == pFVar16->Name) {
            if (((this->Parameters).SectionMatchParameters.bMatchChildrenIfAnyExpected == false) ||
               ((pFVar4->Entries).ArrayNum < 1)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            bVar9 = Matches(this,pFVar4,pFVar16,bVar9);
            if (bVar9) goto LAB_142c64626;
            bVar6 = false;
          }
          uVar15 = uVar15 + 1;
          lVar18 = lVar18 + 0x238;
        } while ((int)uVar15 < (param_2->Sections).ArrayNum);
      }
      uVar17 = uVar17 + 1;
      local_e0 = local_e0 + 0x10;
      iVar13 = local_res20;
    } while ((int)uVar17 < (param_1->Sections).ArrayNum);
  }
  if (((bVar6) ||
      ((((this->Parameters).SectionMatchParameters.bActualHasAllExpectedItems == false &&
        (0 < iVar13)) || (iVar1 <= iVar13)))) &&
     (((this->Parameters).SectionMatchParameters.bActualHasExpectedOrder == false || (bVar11)))) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  return bVar11;
}

// Matches @ 142c64680

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches
          (FToolMenuAutomationTestAdapter *this,FMenuEntry *param_1,FToolMenuEntry *param_2)

{
  EMultiBlockType EVar1;
  EMultiBlockType EVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  UEnum *pUVar8;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  FText local_38;
  FString local_28;
  
  bVar6 = false;
  bVar5 = false;
  local_res20 = (FName)((ulonglong)local_res20 & 0xffffffff00000000);
  bVar7 = Matches(this,(FMenuEntryBase *)param_1,param_2);
  if (!bVar7) {
    return false;
  }
  if ((param_1->Type).bIsSet != false) {
    pFVar3 = this->TestInstance;
    EVar1 = param_2->Type;
    EVar2 = (param_1->Type).TypedValue;
    ::FName::ToString(&param_2->Name,&local_28);
    ::FString::PrintfImpl(&local_68,L"Entry (\"%s\") MultiBlockType");
    if (EVar1 != EVar2) {
      pUVar8 = StaticEnum<enum_EMultiBlockType>();
      local_res20 = (FName)pUVar8->_padding_;
      ::FName::ToString(&local_res20,&local_78);
      (**(code **)(pUVar8->_padding_ + 0x2c0))(pUVar8,&local_38,EVar1);
      (**(code **)(pUVar8->_padding_ + 0x2c0))(pUVar8,&local_48,EVar2);
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      FText::ToString(&local_38);
      FText::ToString(&local_48);
      ::FString::PrintfImpl(&local_58,L"Expected \'%s\' to be %s::%s, but it was %s::%s.");
      (*pcVar4)(pFVar3,&local_58,1);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      goto LAB_142c64852;
    }
    bVar6 = true;
    bVar5 = true;
  }
  bVar7 = false;
LAB_142c64852:
  if ((bVar5) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return !bVar7;
}

// Matches @ 142c648c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches
          (FToolMenuAutomationTestAdapter *this,FMenuSection *param_1,FToolMenuSection *param_2,
          bool param_3)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMenuEntry *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  FName *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  FToolMenuEntry *pFVar21;
  uint local_res20;
  int local_100;
  uint local_fc;
  longlong local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [8];
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar7 = false;
  if (param_1->Name == (FName)0x0) {
LAB_142c64943:
    bVar8 = true;
  }
  else {
    pFVar2 = this->TestInstance;
    ::FString::FString(&local_e8,"Section Name");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar16.Data = local_e8.Data.AllocatorInstance.Data;
    }
    bVar7 = true;
    bVar8 = FAutomationTestBase::TestEqual
                      (pFVar2,(wchar_t *)FVar16.Data,param_2->Name,param_1->Name);
    if (bVar8) goto LAB_142c64943;
    bVar8 = false;
  }
  if ((bVar7) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  bVar11 = false;
  bVar7 = false;
  if (!param_3) {
    return true;
  }
  bVar10 = false;
  if (((this->Parameters).EntryMatchParameters.bActualHasAllExpectedItems == false) ||
     (bVar10 = bVar8, (this->Parameters).EntryMatchParameters.bExpectedHasAllActualItems == false))
  {
LAB_142c649e8:
    bVar8 = bVar10;
    bVar10 = false;
  }
  else {
    iVar1 = (param_1->Entries).ArrayNum;
    iVar15 = (param_2->Blocks).ArrayNum;
    pFVar2 = this->TestInstance;
    ::FName::ToString(&param_2->Name,&local_80);
    bVar11 = true;
    bVar7 = true;
    ::FString::PrintfImpl(&local_d8,L"Entry Count (for section \"%s\")");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar16.Data = local_d8.Data.AllocatorInstance.Data;
    }
    bVar9 = FAutomationTestBase::TestEqual(pFVar2,(wchar_t *)FVar16.Data,iVar15,iVar1);
    if (bVar9) goto LAB_142c649e8;
    bVar10 = true;
  }
  if ((bVar7) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((bVar11) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  bVar11 = false;
  bVar7 = false;
  if (bVar10) {
    bVar8 = false;
  }
  if ((this->Parameters).EntryMatchParameters.bActualHasAllExpectedItems == false) {
LAB_142c64a95:
    bVar10 = false;
  }
  else {
    pFVar2 = this->TestInstance;
    iVar1 = (param_2->Blocks).ArrayNum;
    iVar15 = (param_1->Entries).ArrayNum;
    ::FName::ToString(&param_2->Name,&local_70);
    bVar11 = true;
    bVar7 = true;
    ::FString::PrintfImpl(&local_c8,L"Entry Count (for section \"%s\")");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar16.Data = local_c8.Data.AllocatorInstance.Data;
    }
    bVar10 = FAutomationTestBase::TestGreaterEqual(pFVar2,(wchar_t *)FVar16.Data,iVar1,iVar15);
    if (bVar10) goto LAB_142c64a95;
    bVar10 = true;
  }
  if ((bVar7) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((bVar11) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  bVar11 = false;
  bVar7 = false;
  if (bVar10) {
    bVar8 = false;
  }
  if ((this->Parameters).EntryMatchParameters.bExpectedHasAllActualItems != false) {
    pFVar2 = this->TestInstance;
    iVar1 = (param_2->Blocks).ArrayNum;
    iVar15 = (param_1->Entries).ArrayNum;
    ::FName::ToString(&param_2->Name,&local_60);
    bVar11 = true;
    bVar7 = true;
    ::FString::PrintfImpl(&local_b8,L"Entry Count (for section \"%s\")");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar16.Data = local_b8.Data.AllocatorInstance.Data;
    }
    bVar10 = FAutomationTestBase::TestGreaterEqual(pFVar2,(wchar_t *)FVar16.Data,iVar15,iVar1);
    if (!bVar10) {
      bVar10 = true;
      goto LAB_142c64b5d;
    }
  }
  bVar10 = false;
LAB_142c64b5d:
  if ((bVar7) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((bVar11) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (bVar10) {
    bVar8 = false;
  }
  iVar1 = (param_1->Entries).ArrayNum;
  local_100 = 0;
  bVar7 = true;
  local_fc = 0xffffffff;
  local_res20 = 0;
  iVar15 = 0;
  if (0 < iVar1) {
    local_f0 = 0;
    bVar7 = true;
    do {
      uVar18 = 0;
      uVar17 = 0;
      if ((int)local_res20 < (param_1->Entries).ArrayNum) {
        uVar17 = ~local_res20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      pFVar19 = (param_1->Entries).AllocatorInstance.Data + local_f0;
      uVar20 = uVar18;
      if (0 < (param_2->Blocks).ArrayNum) {
        do {
          ::FName::ToString(&param_2->Name,&local_50);
          ::FString::PrintfImpl(&local_a8,L"Entry (for section \"%s\")");
          uVar17 = (uint)uVar18;
          if (((int)uVar17 < 0) || ((param_2->Blocks).ArrayNum <= (int)uVar17)) {
            pFVar2 = this->TestInstance;
            pcVar6 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::PrintfImpl
                      (&local_98,
                       L"Expected %s at Index %d, but the array only contains %d elements.");
            (*pcVar6)(pFVar2,&local_98,1);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          uVar13 = 0;
          if ((int)uVar17 < (param_2->Blocks).ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          plVar3 = *(longlong **)pFVar19;
          pFVar21 = (FToolMenuEntry *)((param_2->Blocks).AllocatorInstance.Data + uVar20);
          if (*(FName *)(plVar3 + 1) == (FName)0x0) {
LAB_142c64e2c:
            local_100 = local_100 + 1;
            if (((this->Parameters).EntryMatchParameters.bActualHasExpectedOrder != false) &&
               (bVar11 = (int)uVar17 < (int)local_fc, local_fc = uVar17, bVar11)) {
              bVar7 = false;
            }
            break;
          }
          if (*(FName *)(plVar3 + 1) == pFVar21->Name) {
            pFVar14 = (FName *)(**(code **)(*plVar3 + 8))(plVar3,local_88);
            if (*pFVar14 == FMenuEntry::TypeName) {
              pTVar4 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
              pFVar5 = *(FMenuEntry **)pFVar19;
              if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                UNLOCK();
              }
              bVar11 = Matches(this,pFVar5,pFVar21);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar4);
              if (!bVar11) {
                bVar8 = false;
              }
            }
            bVar11 = Matches(this,*(FMenuEntryBase **)pFVar19,pFVar21);
            if (bVar11) goto LAB_142c64e2c;
            bVar8 = false;
          }
          uVar18 = (ulonglong)(uVar17 + 1);
          uVar20 = uVar20 + 0x780;
        } while ((int)(uVar17 + 1) < (param_2->Blocks).ArrayNum);
      }
      local_res20 = local_res20 + 1;
      local_f0 = local_f0 + 0x10;
      iVar15 = local_100;
    } while ((int)local_res20 < (param_1->Entries).ArrayNum);
  }
  if (((bVar8) ||
      ((((this->Parameters).EntryMatchParameters.bActualHasAllExpectedItems == false && (0 < iVar15)
        ) || (iVar1 <= iVar15)))) &&
     (((this->Parameters).EntryMatchParameters.bActualHasExpectedOrder == false || (bVar7)))) {
    return true;
  }
  return false;
}

// Matches @ 142c64e90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
UE::ToolMenus::FToolMenuAutomationTestAdapter::Matches
          (FToolMenuAutomationTestAdapter *this,FMenuEntryBase *param_1,FToolMenuEntry *param_2)

{
  FAutomationTestBase *this_00;
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1->Name != (FName)0x0) {
    this_00 = this->TestInstance;
    pFVar2 = ::FName::ToString(&param_1->Name,&local_18);
    pFVar3 = ::FName::ToString(&param_2->Name,&local_28);
    ::FString::FString(&local_38,"Entry Name");
    pwVar5 = L"";
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    if ((pFVar3->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    bVar1 = FAutomationTestBase::TestEqual(this_00,(wchar_t *)FVar4.Data,pwVar5,pwVar6);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return bVar1;
  }
  return true;
}

