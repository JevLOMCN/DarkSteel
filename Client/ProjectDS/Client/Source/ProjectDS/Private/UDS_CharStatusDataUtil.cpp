// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetCurrentCharStatusCurrentValue @ 14ba46ba0

int __cdecl UDS_CharStatusDataUtil::GetCurrentCharStatusCurrentValue(EDS_StatusType *param_1)

{
  FDS_StatusInfo *pFVar1;
  
  pFVar1 = GetCurrentCharStatusInfo(param_1);
  if (pFVar1 == (FDS_StatusInfo *)0x0) {
    return 0;
  }
  return pFVar1->CurrentValue;
}

// GetCurrentCharStatusInfo @ 14ba46bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_StatusInfo * __cdecl UDS_CharStatusDataUtil::GetCurrentCharStatusInfo(EDS_StatusType *param_1)

{
  EDS_StatusType EVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_StatusInfo *pFVar7;
  undefined1 *puVar8;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetData((ulong64)&local_148,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar3) {
    FWeakObjectPtr::Get(&local_148);
  }
  UDS_CharStatusData::GetData((ulong64)&local_140);
  bVar3 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&local_140);
    EVar1 = *param_1;
    if (*(int *)&pUVar6[2].field_0x10 != *(int *)&pUVar6[3].field_0x14) {
      puVar8 = *(undefined1 **)&pUVar6[3].field_0x20;
      if (*(undefined1 **)&pUVar6[3].field_0x20 == (undefined1 *)0x0) {
        puVar8 = &pUVar6[3].field_0x18;
      }
      iVar4 = *(int *)(puVar8 + (ulonglong)(*(int *)(pUVar6 + 4) - Hp & EVar1) * 4);
      if (iVar4 != -1) {
        lVar2 = *(longlong *)&pUVar6[2].field_0x8;
        do {
          if (*(EDS_StatusType *)((longlong)iVar4 * 0x100 + lVar2) == EVar1) {
            pFVar7 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                     ::FindChecked(&pUVar6[2].field_0x8,EVar1);
            return pFVar7;
          }
          iVar4 = *(int *)((longlong)iVar4 * 0x100 + 0xf8 + lVar2);
        } while (iVar4 != -1);
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      UDS_PlayerData::GetData((ulong64)&local_148,UDS_PlayerData::MainPlayerEntityID,false);
      bVar3 = FWeakObjectPtr::IsValid(&local_148);
      if (bVar3) {
        FWeakObjectPtr::Get(&local_148);
      }
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CharStatusDataUtil::GetCurrentCharStatusInfo",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x3c6,
                 L"UDS_CharStatusData is invalid. EntityID - %lld");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (FDS_StatusInfo *)0x0;
}

// GetCurrentCharStatusMaxValue @ 14ba46dc0

float __cdecl UDS_CharStatusDataUtil::GetCurrentCharStatusMaxValue(EDS_StatusType *param_1)

{
  FDS_StatusInfo *pFVar1;
  
  pFVar1 = GetCurrentCharStatusInfo(param_1);
  if (pFVar1 == (FDS_StatusInfo *)0x0) {
    return 0.0;
  }
  return pFVar1->MaxValue;
}

// GetCurrentCharStatusMaxValueAsInt32 @ 14ba46df0

int __cdecl UDS_CharStatusDataUtil::GetCurrentCharStatusMaxValueAsInt32(EDS_StatusType *param_1)

{
  FDS_StatusInfo *pFVar1;
  
  pFVar1 = GetCurrentCharStatusInfo(param_1);
  if (pFVar1 == (FDS_StatusInfo *)0x0) {
    return 0;
  }
  return (int)pFVar1->MaxValue;
}

// GetCurrentCharStatusOriginalValue @ 14ba46e20

int __cdecl UDS_CharStatusDataUtil::GetCurrentCharStatusOriginalValue(EDS_StatusType *param_1)

{
  FDS_StatusInfo *pFVar1;
  
  pFVar1 = GetCurrentCharStatusInfo(param_1);
  if (pFVar1 == (FDS_StatusInfo *)0x0) {
    return 0;
  }
  return pFVar1->OriginValue;
}

