// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_ChattingCommandData @ 14b9d72e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_ChattingCommandData * __thiscall
FDS_ChattingCommandData::FDS_ChattingCommandData
          (FDS_ChattingCommandData *this,int param_1,EDS_ChattingType param_2,int param_3)

{
  EDS_ChattingType EVar1;
  FDS_ChatRoomManager *this_00;
  UDS_M_ChatOption *this_01;
  code *pcVar2;
  FDS_ChatRoomData *pFVar3;
  bool bVar4;
  UDS_ChattingManager *pUVar5;
  EDS_ChattingType *pEVar6;
  EDS_ChattingType *pEVar7;
  FDS_ChattingCommandData *pFVar8;
  FDS_ChattingGroupIconListTableRow *pFVar9;
  FLinearColor *pFVar10;
  UDS_LogManager *pUVar11;
  EDS_ChattingType *pEVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  EDS_ChattingType *pEVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_1c8 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_188;
  undefined **local_178;
  EDS_ChattingType *local_170;
  FLinearColor local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pEVar18 = (EDS_ChattingType *)0x0;
  uVar17 = None;
  this->CommandNumber = 0;
  (this->Command)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->Command).ID = 0;
  (this->CommandName)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->CommandName).ID = 0;
  this->CommandIconID = 0;
  this->SubIndex = 0;
  this->ChattingType = param_2;
  pUVar5 = UDS_ChattingManager::GetInst();
  if (pUVar5 == (UDS_ChattingManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_ChattingCommandData::FDS_ChattingCommandData",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_158.Ptr,0xef,L"chattingManager == nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    goto LAB_14b9d76b4;
  }
  EVar1 = this->ChattingType;
  uVar16 = (ulonglong)EVar1;
  this->CommandNumber = param_1;
  pEVar7 = pEVar18;
  if (*(int *)&(pUVar5->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(pUVar5->ChattingCommonDataMap).field_0x34) {
    puVar13 = *(undefined1 **)&(pUVar5->ChattingCommonDataMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(pUVar5->ChattingCommonDataMap).field_0x38;
    }
    uVar15 = *(undefined4 *)
              (puVar13 + (*(int *)&(pUVar5->ChattingCommonDataMap).field_0x48 - 1 & uVar16) * 4);
    if (uVar15 != 0xffffffff) {
      do {
        pEVar6 = (EDS_ChattingType *)
                 ((longlong)(int)uVar15 * 0x58 + *(longlong *)&pUVar5->ChattingCommonDataMap);
        if (*pEVar6 == EVar1) {
          if (uVar15 != 0xffffffff) {
            pEVar12 = pEVar6 + 8;
            if (pEVar6 == (EDS_ChattingType *)0x0) {
              pEVar12 = pEVar18;
            }
            if ((pEVar12 != (EDS_ChattingType *)0x0) && (0 < (int)*(undefined4 *)(pEVar12 + 0x30)))
            {
              pEVar7 = *(EDS_ChattingType **)(*(undefined8 *)(pEVar12 + 0x28) + 8);
            }
          }
          break;
        }
        uVar15 = *(undefined4 *)(pEVar6 + 0x50);
      } while (uVar15 != 0xffffffff);
    }
  }
  puVar13 = &(pUVar5->ChattingCommonDataMap).field_0x40;
  (this->Command).ID = (long64)pEVar7;
  local_170 = pEVar18;
  if (*(int *)&(pUVar5->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(pUVar5->ChattingCommonDataMap).field_0x34) {
    puVar14 = *(undefined1 **)puVar13;
    if (*(undefined1 **)puVar13 == (undefined1 *)0x0) {
      puVar14 = &(pUVar5->ChattingCommonDataMap).field_0x38;
    }
    uVar15 = *(undefined4 *)
              (puVar14 + (*(int *)&(pUVar5->ChattingCommonDataMap).field_0x48 - 1 & uVar16) * 4);
    if (uVar15 != 0xffffffff) {
      do {
        pEVar7 = (EDS_ChattingType *)
                 ((longlong)(int)uVar15 * 0x58 + *(longlong *)&pUVar5->ChattingCommonDataMap);
        if (*pEVar7 == EVar1) {
          pEVar6 = pEVar7 + 8;
          if (pEVar7 == (EDS_ChattingType *)0x0) {
            pEVar6 = pEVar18;
          }
          if (pEVar6 != (EDS_ChattingType *)0x0) {
            local_170 = *(EDS_ChattingType **)(pEVar6 + 0x18);
          }
          break;
        }
        uVar15 = *(undefined4 *)(pEVar7 + 0x50);
      } while (uVar15 != 0xffffffff);
    }
  }
  local_178 = &___7FDS_StringBaseID__6B_;
  (this->CommandName).ID = (long64)local_170;
  switch(EVar1 - 0xe) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    this_00 = (pUVar5->ChatRoomManager).Object;
    if (this_00 == (FDS_ChatRoomManager *)0x0) {
      local_188.Object = (FDS_ChatRoomData *)0x0;
      local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatRoomManager::FindChatRoom(this_00,&local_188,Group,EVar1 - 0xe);
    }
    pFVar3 = local_188.Object;
    if (local_188.Object == (FDS_ChatRoomData *)0x0) {
LAB_14b9d7540:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      goto switchD_14b9d7451_default;
    }
    if ((local_188.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDS_ChattingCommandData *)(*pcVar2)();
      return pFVar8;
    }
    if (pFVar3->GroupIconID < 1) goto LAB_14b9d7540;
    pFVar9 = FDS_ChattingGroupIconListTableRow::GetRef((longlong)pFVar3->GroupIconID,true);
    uVar17 = pFVar9->ID_Icon;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    break;
  default:
switchD_14b9d7451_default:
    if (*(int *)&(pUVar5->ChattingCommonDataMap).field_0x8 !=
        *(int *)&(pUVar5->ChattingCommonDataMap).field_0x34) {
      puVar14 = *(undefined1 **)puVar13;
      if (*(undefined1 **)puVar13 == (undefined1 *)0x0) {
        puVar14 = &(pUVar5->ChattingCommonDataMap).field_0x38;
      }
      uVar15 = *(undefined4 *)
                (puVar14 + (*(int *)&(pUVar5->ChattingCommonDataMap).field_0x48 - 1 & uVar16) * 4);
      if (uVar15 != 0xffffffff) {
        do {
          pEVar7 = (EDS_ChattingType *)
                   ((longlong)(int)uVar15 * 0x58 + *(longlong *)&pUVar5->ChattingCommonDataMap);
          if (*pEVar7 == EVar1) {
            pEVar6 = pEVar7 + 8;
            if (pEVar7 == (EDS_ChattingType *)0x0) {
              pEVar6 = pEVar18;
            }
            if (pEVar6 != (EDS_ChattingType *)0x0) {
              uVar17 = *(undefined4 *)(pEVar6 + 8);
            }
            break;
          }
          uVar15 = *(undefined4 *)(pEVar7 + 0x50);
        } while (uVar15 != 0xffffffff);
      }
    }
  }
  EVar1 = this->ChattingType;
  this->CommandIconID = uVar17;
  fVar19 = FLinearColor::White.field0_0x0._0_4_;
  fVar20 = FLinearColor::White.field0_0x0._4_4_;
  fVar21 = FLinearColor::White.field0_0x0._8_4_;
  fVar22 = FLinearColor::White.field0_0x0._12_4_;
  if (*(int *)&(pUVar5->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(pUVar5->ChattingCommonDataMap).field_0x34) {
    puVar14 = *(undefined1 **)puVar13;
    if (*(undefined1 **)puVar13 == (undefined1 *)0x0) {
      puVar14 = &(pUVar5->ChattingCommonDataMap).field_0x38;
    }
    uVar17 = *(undefined4 *)
              (puVar14 +
              ((ulonglong)(*(int *)&(pUVar5->ChattingCommonDataMap).field_0x48 - 1) &
              (ulonglong)EVar1) * 4);
    if (uVar17 != 0xffffffff) {
      do {
        pEVar7 = (EDS_ChattingType *)
                 ((longlong)(int)uVar17 * 0x58 + *(longlong *)&pUVar5->ChattingCommonDataMap);
        if (*pEVar7 == EVar1) {
          pEVar6 = pEVar7 + 8;
          if (pEVar7 == (EDS_ChattingType *)0x0) {
            pEVar6 = pEVar18;
          }
          if (pEVar6 != (EDS_ChattingType *)0x0) {
            fVar19 = *(float *)(pEVar6 + 0x38);
            fVar20 = *(float *)(pEVar6 + 0x3c);
            fVar21 = *(float *)(pEVar6 + 0x40);
            fVar22 = *(float *)(pEVar6 + 0x44);
          }
          break;
        }
        uVar17 = *(undefined4 *)(pEVar7 + 0x50);
      } while (uVar17 != 0xffffffff);
    }
  }
  this_01 = (pUVar5->ChatOption).field0_0x0.DebugPtr;
  if (this_01 != (UDS_M_ChatOption *)0x0) {
    pFVar10 = UDS_M_ChatOption::GetChattingTypeColor(this_01,&local_168,EVar1);
    fVar19 = (pFVar10->field0_0x0)._s_0.R;
    fVar20 = (pFVar10->field0_0x0)._s_0.G;
    fVar21 = (pFVar10->field0_0x0)._s_0.B;
    fVar22 = (pFVar10->field0_0x0)._s_0.A;
  }
  (this->CommandColor).field0_0x0._s_0.R = fVar19;
  (this->CommandColor).field0_0x0._s_0.G = fVar20;
  (this->CommandColor).field0_0x0._s_0.B = fVar21;
  (this->CommandColor).field0_0x0._s_0.A = fVar22;
LAB_14b9d76b4:
  this->SubIndex = param_3;
  return this;
}

