// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// SetData @ 14ba6d130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_MountTableStatusInfo::SetData(FDS_MountTableStatusInfo *this,FDS_MountList *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDS_MountBaseTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  FDS_ItemBaseTableRow *pFVar6;
  FDS_ItemAbilityTableRow *pFVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStackY_418 [32];
  undefined1 local_3d8 [8];
  ForAnyElementType local_3d0;
  int local_3c8;
  int local_3c4;
  FDS_MountBaseTableRow *local_3c0;
  FDS_MountTableStatusInfo *local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_3b8 = this;
  pFVar4 = FDS_MountBaseTableRow::GetRef((longlong)param_1->MountTID,true);
  local_3c0 = pFVar4;
  bVar3 = FDS_MountBaseTableRow::IsValid(pFVar4);
  if (bVar3) {
    iVar14 = 0;
    this->StandardSpeed = (int)pFVar4->StandardSpeed;
    this->StandardSprintSpeed = (int)pFVar4->StandardSprintSpeed;
    this->InventorySlot = pFVar4->InventorySlot;
    local_3c8 = (param_1->EquipItemIDList).ArrayNum;
    lVar11 = (longlong)local_3c8;
    pFVar1 = (param_1->EquipItemIDList).AllocatorInstance.Data;
    local_3d0.Data = (FScriptContainerElement *)0x0;
    if (local_3c8 == 0) {
      local_3c4 = 0;
      iVar8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_3c8,0,&local_3d0,local_3c8,&local_3c4);
      memcpy(local_3d0.Data,pFVar1,lVar11 << 2);
      iVar8 = local_3c8;
    }
    pFVar1 = local_3d0.Data + (longlong)iVar8 * 4;
    FVar13.Data = local_3d0.Data;
    iVar9 = iVar8;
LAB_14ba6d296:
    do {
      if (iVar9 != iVar8) {
        local_3d8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3d8);
      }
      pFVar4 = local_3c0;
      if (FVar13.Data == pFVar1) goto LAB_14ba6d434;
      pFVar6 = FDS_ItemBaseTableRow::Get((longlong)*(int *)FVar13.Data,true);
      if (pFVar6 != (FDS_ItemBaseTableRow *)0x0) {
        pFVar7 = FDS_ItemAbilityTableRow::Get((longlong)pFVar6->ID_Ability,true);
        if (pFVar7 == (FDS_ItemAbilityTableRow *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"FDS_MountTableStatusInfo::SetData",0x21,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,local_168.Ptr,0xbd,
                       L"itemAbilityTableRow is nullptr : item_AbilityTID = %d");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
              FVar13.Data = FVar13.Data + 4;
              iVar9 = local_3c8;
              goto LAB_14ba6d296;
            }
          }
        }
        else if (((0 < (pFVar7->StatusType).ArrayNum) &&
                 (*(int *)(pFVar7->StatusType).AllocatorInstance.Data == 0x197)) &&
                (0 < (pFVar7->StatusValue).ArrayNum)) {
          iVar14 = iVar14 + *(int *)(pFVar7->StatusValue).AllocatorInstance.Data;
        }
LAB_14ba6d427:
        FVar13.Data = FVar13.Data + 4;
        iVar9 = local_3c8;
        goto LAB_14ba6d296;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14ba6d427;
      pUVar5 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"FDS_MountTableStatusInfo::SetData",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_288.Ptr,0xb6,L"itemBaseTableRow is nullptr : itemTID = %d");
      if ((void *)local_288._padding_ == (void *)0x0) goto LAB_14ba6d427;
      FMemory::Free((void *)local_288._padding_);
      FVar13.Data = FVar13.Data + 4;
      iVar9 = local_3c8;
    } while( true );
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar5 = UDS_LogManager::GetInst();
  local_3a8._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_3a8,"FDS_MountTableStatusInfo::SetData",0x21,Yes);
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_3a8.Ptr,0xa6,L"mountBaseTableRow IsValid false.");
  FVar13.Data = (FScriptContainerElement *)local_3a8._padding_;
  goto LAB_14ba6d505;
LAB_14ba6d434:
  pFVar1 = (local_3c0->StatusType).AllocatorInstance.Data;
  for (pFVar12 = pFVar1; FVar13.Data = local_3d0.Data,
      pFVar12 != pFVar1 + (longlong)(local_3c0->StatusType).ArrayNum * 4; pFVar12 = pFVar12 + 4) {
    if (*(int *)pFVar12 == 0x197) {
      uVar10 = (uint)((longlong)pFVar12 - (longlong)pFVar1 >> 2);
      if ((-1 < (int)uVar10) && ((int)uVar10 < (local_3c0->StatusValue).ArrayNum)) {
        uVar15 = 0;
        if ((int)uVar10 < (local_3c0->StatusValue).ArrayNum) {
          uVar15 = ~uVar10 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_3b8->MountLoadCapacity =
             *(int *)((pFVar4->StatusValue).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) +
             iVar14;
        FVar13.Data = local_3d0.Data;
      }
      break;
    }
  }
LAB_14ba6d505:
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return;
}

