// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DS_ConsoleCommander
// Functions: 82

// FDS_CommandLibrary @ 14c270180

FDS_CommandLibrary * __thiscall FDS_CommandLibrary::FDS_CommandLibrary(FDS_CommandLibrary *this)

{
  (this->CommandArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandArray).ArrayNum = 0;
  (this->CommandArray).ArrayMax = 0;
  return this;
}

// operator() @ 14c2701a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FDS_CommandLibrary::Command_FindPlayerByUID'::__l8::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  FDS_PlayerRepo *pFVar2;
  UDS_LogManager *pUVar3;
  ulonglong uVar4;
  size_t sVar5;
  uchar *_Str;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_2c8 [32];
  undefined1 local_288 [4];
  uint local_284;
  longlong *local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_280 = this;
  pFVar2 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  if ((pFVar2->PlayerList).ArrayNum == 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"FDS_CommandLibrary::Command_FindPlayerByUID::<lambda_1>::operator ()",
                 0x44,Yes);
      UDS_LogManager::PrintLog(pUVar3,3,Display,local_278.Ptr,0x403,L"No One Finded in Search");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    pFVar2 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
    pFVar6 = (pFVar2->PlayerList).AllocatorInstance.Data;
    local_284 = (pFVar2->PlayerList).ArrayNum;
    uVar4 = (ulonglong)(int)local_284;
    pFVar8 = pFVar6 + uVar4 * 0x90;
    while( true ) {
      if ((pFVar2->PlayerList).ArrayNum != (int)uVar4) {
        `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_288);
      }
      if (pFVar6 == pFVar8) break;
      if ((*(longlong *)this == *(longlong *)(pFVar6 + 0x50)) &&
         (pUVar3 = UDS_LogManager::GetInst(), pUVar3 != (UDS_LogManager *)0x0)) {
        pUVar3 = UDS_LogManager::GetInst();
        _Str = (uchar *)(*(ulonglong *)(pFVar6 + 0x18) & 0xfffffffffffffffc);
        if (0xf < *(ulonglong *)(_Str + 0x18)) {
          _Str = *(uchar **)_Str;
        }
        local_278._padding_ = 0;
        if (_Str == (uchar *)0x0) {
          local_278.Ptr = (wchar_t *)0x0;
          local_278.StringLength = 0;
        }
        else {
          sVar5 = strlen((char *)_Str);
          local_278.StringLength =
               UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar5);
          uVar1 = local_278.StringLength + 1;
          uVar7 = uVar1;
          if (uVar1 < 0x81) {
            if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
                (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
              uVar7 = 0;
              goto LAB_14c27034e;
            }
          }
          else {
LAB_14c27034e:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_278._padding_,0,uVar7,2);
          }
          local_278.Ptr = (wchar_t *)&local_278;
          if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
              (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
            local_278.Ptr = (wchar_t *)local_278._padding_;
          }
          UE::Core::Private::Convert(local_278.Ptr,uVar1,_Str,(int)sVar5 + 1);
        }
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_CommandLibrary::Command_FindPlayerByUID::<lambda_1>::operator ()"
                   ,0x44,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,3,Display,local_158.Ptr,0x40b,L"Found PlayerUID : %lld, Nickname : %s");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
        this = local_280;
        if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
            (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
          FMemory::Free((void *)local_278._padding_);
          this = local_280;
        }
      }
      uVar4 = (ulonglong)local_284;
      pFVar6 = pFVar6 + 0x90;
    }
  }
  return;
}

// operator() @ 14c2704a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FDS_CommandLibrary::Command_Party'::__l8::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FDS_PlayerRepo *pFVar4;
  UDS_LogManager *pUVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  uchar *puVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298 [4];
  uint local_294;
  undefined8 *local_290;
  FScriptContainerElement *local_288;
  FDS_PlayerRepo *local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_290 = this;
  pFVar4 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  if ((pFVar4->PlayerList).ArrayNum == 0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"FDS_CommandLibrary::Command_Party::<lambda_1>::operator ()",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar5,3,Display,local_278.Ptr,0x423,L"No One Finded in Search");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    local_280 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
    local_294 = (local_280->PlayerList).ArrayNum;
    uVar8 = (ulonglong)(int)local_294;
    pFVar10 = (local_280->PlayerList).AllocatorInstance.Data;
    local_288 = pFVar10 + uVar8 * 0x90;
    while( true ) {
      pFVar2 = local_288;
      if ((local_280->PlayerList).ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_298);
      }
      if (pFVar10 == pFVar2) break;
      puVar9 = (uchar *)(*(ulonglong *)(pFVar10 + 0x18) & 0xfffffffffffffffc);
      if (0xf < *(ulonglong *)(puVar9 + 0x18)) {
        puVar9 = *(uchar **)puVar9;
      }
      local_278._padding_ = 0;
      if (puVar9 == (uchar *)0x0) {
        local_278.StringLength = 0;
        local_278.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar6 = strlen((char *)puVar9);
        local_278.StringLength =
             UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar9,(int)sVar6);
        uVar1 = local_278.StringLength + 1;
        uVar11 = uVar1;
        if (uVar1 < 0x81) {
          if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
              (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
            uVar11 = 0;
            goto LAB_14c27060c;
          }
        }
        else {
LAB_14c27060c:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_278._padding_,0,uVar11,2);
        }
        local_278.Ptr = (wchar_t *)&local_278;
        if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
            (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
          local_278.Ptr = (wchar_t *)local_278._padding_;
        }
        UE::Core::Private::Convert(local_278.Ptr,uVar1,puVar9,(int)sVar6 + 1);
      }
      if (*(int *)((longlong)this + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)this;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,local_278.Ptr);
      if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
          (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
      if (iVar3 == 0) {
        FDS_PartyService::RequestPartyInvite(*(int *)(pFVar10 + 0x8c),*(long64 *)(pFVar10 + 0x50));
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          puVar9 = (uchar *)(*(ulonglong *)(pFVar10 + 0x18) & 0xfffffffffffffffc);
          if (0xf < *(ulonglong *)(puVar9 + 0x18)) {
            puVar9 = *(uchar **)puVar9;
          }
          local_278._padding_ = 0;
          if (puVar9 == (uchar *)0x0) {
            local_278.StringLength = 0;
            local_278.Ptr = (wchar_t *)0x0;
          }
          else {
            sVar6 = strlen((char *)puVar9);
            local_278.StringLength =
                 UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar9,(int)sVar6);
            uVar1 = local_278.StringLength + 1;
            uVar11 = uVar1;
            if (uVar1 < 0x81) {
              if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
                  (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
                uVar11 = 0;
                goto LAB_14c2706fe;
              }
            }
            else {
LAB_14c2706fe:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_278._padding_,0,uVar11,2);
            }
            local_278.Ptr = (wchar_t *)&local_278;
            if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
                (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
              local_278.Ptr = (wchar_t *)local_278._padding_;
            }
            UE::Core::Private::Convert(local_278.Ptr,uVar1,puVar9,(int)sVar6 + 1);
          }
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_CommandLibrary::Command_Party::<lambda_1>::operator ()",0x3a,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,3,Display,local_158.Ptr,0x42f,L"Invite PlayerName : %s, PlayerUID : %d")
          ;
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
          this = local_290;
          if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
              (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
            FMemory::Free((void *)local_278._padding_);
            this = local_290;
          }
        }
      }
      pFVar10 = pFVar10 + 0x90;
      uVar8 = (ulonglong)local_294;
    }
  }
  return;
}

// operator() @ 14c270820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FDS_CommandLibrary::Command_Party'::__l11::<lambda_2>::operator()(void *this)

{
  uint uVar1;
  FDS_PlayerRepo *pFVar2;
  UDS_LogManager *pUVar3;
  size_t sVar4;
  ulonglong uVar5;
  uchar *_Str;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_2c8 [32];
  undefined1 local_288 [4];
  uint local_284;
  FDS_PlayerRepo *local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pFVar2 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  if ((pFVar2->PlayerList).ArrayNum == 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"FDS_CommandLibrary::Command_Party::<lambda_2>::operator ()",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar3,3,Display,local_278.Ptr,0x441,L"No One Finded in Search");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    local_280 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
    local_284 = (local_280->PlayerList).ArrayNum;
    uVar5 = (ulonglong)(int)local_284;
    pFVar6 = (local_280->PlayerList).AllocatorInstance.Data;
    pFVar8 = pFVar6 + uVar5 * 0x90;
    while( true ) {
      if ((local_280->PlayerList).ArrayNum != (int)uVar5) {
        `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_288);
      }
      if (pFVar6 == pFVar8) break;
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        _Str = (uchar *)(*(ulonglong *)(pFVar6 + 0x18) & 0xfffffffffffffffc);
        if (0xf < *(ulonglong *)(_Str + 0x18)) {
          _Str = *(uchar **)_Str;
        }
        local_278._padding_ = 0;
        if (_Str == (uchar *)0x0) {
          local_278.StringLength = 0;
          local_278.Ptr = (wchar_t *)0x0;
        }
        else {
          sVar4 = strlen((char *)_Str);
          local_278.StringLength =
               UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar4);
          uVar1 = local_278.StringLength + 1;
          uVar7 = uVar1;
          if (uVar1 < 0x81) {
            if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
                (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
              uVar7 = 0;
              goto LAB_14c2709b9;
            }
          }
          else {
LAB_14c2709b9:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_278._padding_,0,uVar7,2);
          }
          local_278.Ptr = (wchar_t *)&local_278;
          if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
              (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
            local_278.Ptr = (wchar_t *)local_278._padding_;
          }
          UE::Core::Private::Convert(local_278.Ptr,uVar1,_Str,(int)sVar4 + 1);
        }
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_CommandLibrary::Command_Party::<lambda_2>::operator ()",0x3a,Yes)
        ;
        UDS_LogManager::PrintLog
                  (pUVar3,3,Display,local_158.Ptr,0x447,L"PlayerName : %s, PlayerUID : %d");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
        if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
            (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
      pFVar6 = pFVar6 + 0x90;
      uVar5 = (ulonglong)local_284;
    }
  }
  return;
}

// operator() @ 14c270b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FDS_CommandLibrary::Command_Party'::__l23::<lambda_3>::operator()(void *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FDS_PlayerRepo *pFVar4;
  UDS_LogManager *pUVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  uchar *puVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298 [4];
  uint local_294;
  undefined8 *local_290;
  FScriptContainerElement *local_288;
  FDS_PlayerRepo *local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_290 = this;
  pFVar4 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  if ((pFVar4->PlayerList).ArrayNum == 0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"FDS_CommandLibrary::Command_Party::<lambda_3>::operator ()",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar5,3,Display,local_278.Ptr,0x468,L"No One Finded in Search");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    local_280 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
    local_294 = (local_280->PlayerList).ArrayNum;
    uVar8 = (ulonglong)(int)local_294;
    pFVar10 = (local_280->PlayerList).AllocatorInstance.Data;
    local_288 = pFVar10 + uVar8 * 0x90;
    while( true ) {
      pFVar2 = local_288;
      if ((local_280->PlayerList).ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_298);
      }
      if (pFVar10 == pFVar2) break;
      puVar9 = (uchar *)(*(ulonglong *)(pFVar10 + 0x18) & 0xfffffffffffffffc);
      if (0xf < *(ulonglong *)(puVar9 + 0x18)) {
        puVar9 = *(uchar **)puVar9;
      }
      local_278._padding_ = 0;
      if (puVar9 == (uchar *)0x0) {
        local_278.StringLength = 0;
        local_278.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar6 = strlen((char *)puVar9);
        local_278.StringLength =
             UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar9,(int)sVar6);
        uVar1 = local_278.StringLength + 1;
        uVar11 = uVar1;
        if (uVar1 < 0x81) {
          if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
              (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
            uVar11 = 0;
            goto LAB_14c270c6c;
          }
        }
        else {
LAB_14c270c6c:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_278._padding_,0,uVar11,2);
        }
        local_278.Ptr = (wchar_t *)&local_278;
        if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
            (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
          local_278.Ptr = (wchar_t *)local_278._padding_;
        }
        UE::Core::Private::Convert(local_278.Ptr,uVar1,puVar9,(int)sVar6 + 1);
      }
      if (*(int *)((longlong)this + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)this;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,local_278.Ptr);
      if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
          (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
      if (iVar3 == 0) {
        FDS_PartyService::OpenPartyLeaderChangePopup(*(long64 *)(pFVar10 + 0x50));
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          puVar9 = (uchar *)(*(ulonglong *)(pFVar10 + 0x18) & 0xfffffffffffffffc);
          if (0xf < *(ulonglong *)(puVar9 + 0x18)) {
            puVar9 = *(uchar **)puVar9;
          }
          local_278._padding_ = 0;
          if (puVar9 == (uchar *)0x0) {
            local_278.StringLength = 0;
            local_278.Ptr = (wchar_t *)0x0;
          }
          else {
            sVar6 = strlen((char *)puVar9);
            local_278.StringLength =
                 UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar9,(int)sVar6);
            uVar1 = local_278.StringLength + 1;
            uVar11 = uVar1;
            if (uVar1 < 0x81) {
              if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
                  (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
                uVar11 = 0;
                goto LAB_14c270d58;
              }
            }
            else {
LAB_14c270d58:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_278._padding_,0,uVar11,2);
            }
            local_278.Ptr = (wchar_t *)&local_278;
            if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
                (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
              local_278.Ptr = (wchar_t *)local_278._padding_;
            }
            UE::Core::Private::Convert(local_278.Ptr,uVar1,puVar9,(int)sVar6 + 1);
          }
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_CommandLibrary::Command_Party::<lambda_3>::operator ()",0x3a,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,3,Display,local_158.Ptr,0x473,
                     L"Leader Change PlayerName : %s, PlayerUID : %d");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
          this = local_290;
          if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
              (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
            FMemory::Free((void *)local_278._padding_);
            this = local_290;
          }
        }
      }
      pFVar10 = pFVar10 + 0x90;
      uVar8 = (ulonglong)local_294;
    }
  }
  return;
}

// operator() @ 14c270e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FDS_CommandLibrary::Command_Party'::__l26::<lambda_4>::operator()(void *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FDS_PlayerRepo *pFVar4;
  UDS_LogManager *pUVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  uchar *puVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298 [4];
  uint local_294;
  undefined8 *local_290;
  FScriptContainerElement *local_288;
  FDS_PlayerRepo *local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_290 = this;
  pFVar4 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  if ((pFVar4->PlayerList).ArrayNum == 0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"FDS_CommandLibrary::Command_Party::<lambda_4>::operator ()",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar5,3,Display,local_278.Ptr,0x486,L"No One Finded in Search");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    local_280 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
    local_294 = (local_280->PlayerList).ArrayNum;
    uVar8 = (ulonglong)(int)local_294;
    pFVar10 = (local_280->PlayerList).AllocatorInstance.Data;
    local_288 = pFVar10 + uVar8 * 0x90;
    while( true ) {
      pFVar2 = local_288;
      if ((local_280->PlayerList).ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_298);
      }
      if (pFVar10 == pFVar2) break;
      puVar9 = (uchar *)(*(ulonglong *)(pFVar10 + 0x18) & 0xfffffffffffffffc);
      if (0xf < *(ulonglong *)(puVar9 + 0x18)) {
        puVar9 = *(uchar **)puVar9;
      }
      local_278._padding_ = 0;
      if (puVar9 == (uchar *)0x0) {
        local_278.StringLength = 0;
        local_278.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar6 = strlen((char *)puVar9);
        local_278.StringLength =
             UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar9,(int)sVar6);
        uVar1 = local_278.StringLength + 1;
        uVar11 = uVar1;
        if (uVar1 < 0x81) {
          if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
              (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
            uVar11 = 0;
            goto LAB_14c270fec;
          }
        }
        else {
LAB_14c270fec:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_278._padding_,0,uVar11,2);
        }
        local_278.Ptr = (wchar_t *)&local_278;
        if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
            (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
          local_278.Ptr = (wchar_t *)local_278._padding_;
        }
        UE::Core::Private::Convert(local_278.Ptr,uVar1,puVar9,(int)sVar6 + 1);
      }
      if (*(int *)((longlong)this + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)this;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,local_278.Ptr);
      if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
          (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
      if (iVar3 == 0) {
        FDS_PartyService::OpenPartyKickPopup(*(long64 *)(pFVar10 + 0x50));
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          puVar9 = (uchar *)(*(ulonglong *)(pFVar10 + 0x18) & 0xfffffffffffffffc);
          if (0xf < *(ulonglong *)(puVar9 + 0x18)) {
            puVar9 = *(uchar **)puVar9;
          }
          local_278._padding_ = 0;
          if (puVar9 == (uchar *)0x0) {
            local_278.StringLength = 0;
            local_278.Ptr = (wchar_t *)0x0;
          }
          else {
            sVar6 = strlen((char *)puVar9);
            local_278.StringLength =
                 UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar9,(int)sVar6);
            uVar1 = local_278.StringLength + 1;
            uVar11 = uVar1;
            if (uVar1 < 0x81) {
              if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
                  (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
                uVar11 = 0;
                goto LAB_14c2710d8;
              }
            }
            else {
LAB_14c2710d8:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_278._padding_,0,uVar11,2);
            }
            local_278.Ptr = (wchar_t *)&local_278;
            if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
                (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
              local_278.Ptr = (wchar_t *)local_278._padding_;
            }
            UE::Core::Private::Convert(local_278.Ptr,uVar1,puVar9,(int)sVar6 + 1);
          }
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_CommandLibrary::Command_Party::<lambda_4>::operator ()",0x3a,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,3,Display,local_158.Ptr,0x491,L"Kick PlayerName : %s, PlayerUID : %d");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
          this = local_290;
          if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278._padding_ !=
              (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
            FMemory::Free((void *)local_278._padding_);
            this = local_290;
          }
        }
      }
      pFVar10 = pFVar10 + 0x90;
      uVar8 = (ulonglong)local_294;
    }
  }
  return;
}

// CommandToggleShieldRotateCamera @ 14c2713a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::CommandToggleShieldRotateCamera
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  APlayerController *pAVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  APlayerCameraManager *pAVar7;
  FWeakObjectPtr local_res20;
  APlayerCameraManager *local_18 [2];
  
  pAVar4 = UWorld::GetFirstPlayerController(param_2);
  if (pAVar4 == (APlayerController *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
  iVar2 = (int)pUVar5->_padding_;
  if (*(int *)(pAVar4->_padding_ + 0x38) < iVar2) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  if ((pAVar4->PlayerCameraManager).field0_0x0.DebugPtr != (APlayerCameraManager *)0x0) {
    pUVar5 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&pAVar4->PlayerCameraManager,pUVar5);
    if (bVar3) {
      pAVar7 = (pAVar4->PlayerCameraManager).field0_0x0.DebugPtr;
      goto LAB_14c271412;
    }
  }
  pAVar7 = (APlayerCameraManager *)0x0;
LAB_14c271412:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar7 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_18[0] = pAVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar7 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    cVar1 = pUVar6[0x101].field_0x18;
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    pUVar6[0x101].field_0x18 = cVar1 != '\x01';
  }
  return;
}

// Command_AbnormalCancel @ 14c2714a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_AbnormalCancel
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_AbnormalAbilityData *this_00;
  wchar_t *_Str;
  wchar_t *_Str_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_150;
  longlong local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1->ArrayNum < 2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_CommandLibrary::Command_AbnormalCancel",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x7e0,L"InArgs is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    _Str_00 = L"";
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    local_148[0] = _wtoi64(_Str);
    if (param_1->ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 0x18) != 0) {
      _Str_00 = *(wchar_t **)(pFVar1 + 0x10);
    }
    iVar4 = _wtoi(_Str_00);
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)local_148);
    bVar3 = TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar3) {
      this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_150);
      UDS_AbnormalAbilityData::RemoveAbnormalInfoByID(this_00,iVar4);
    }
  }
  return;
}

// Command_AddMountFlyAbility @ 14c271640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_AddMountFlyAbility
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *this_00;
  EDS_AbilityTagType local_res20 [8];
  FWeakObjectPtr local_28;
  ulong64 local_20;
  undefined8 local_18 [3];
  
  UDS_PlayerData::GetData((ulong64)&local_28,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_28);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_28);
    local_20 = *(ulong64 *)&pUVar2[8].field_0x10;
    this_00 = FDS_EntityBase::GetEntityBase(&local_20);
    if (this_00 != (FDS_EntityBase *)0x0) {
      local_18[0] = 0;
      local_res20[0] = Mount_Flying;
      FDS_EntityBase::TryActivateAbility
                (this_00,local_res20,(TObjectPtr<UWN_AbilityContext>)local_18);
    }
  }
  return;
}

// Command_ApplyAbnormal @ 14c2716c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ApplyAbnormal
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FDS_EntityBase *this_00;
  UDS_LogManager *pUVar5;
  UDS_AbnormalAbilityData *this_01;
  wchar_t *_Str;
  undefined1 auStackY_288 [32];
  EDS_AbilityTagType local_248 [8];
  ulong64 local_240;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  undefined8 local_228 [2];
  FDS_AbnormalInfo local_218;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if (param_1->ArrayNum == 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar3 = _wtoi(_Str);
    UDS_PlayerData::GetData((ulong64)&local_238,UDS_PlayerData::MainPlayerEntityID,false);
    bVar2 = FWeakObjectPtr::IsValid(&local_238);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_238);
      local_248[0] = Abnormal_Process;
      local_240 = *(ulong64 *)&pUVar4[8].field_0x10;
      UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                ((ulong64 *)&local_230,(EDS_AbilityTagType *)&local_240);
      bVar2 = FWeakObjectPtr::IsValid(&local_230);
      if ((bVar2) &&
         (this_00 = FDS_EntityBase::GetEntityBase(&local_240), this_00 != (FDS_EntityBase *)0x0)) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"FDS_CommandLibrary::Command_ApplyAbnormal",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_148.Ptr,0x23a,
                     L"Command_ApplyAbnormal AbnormalActionID : %d");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        local_218.AbnormalType = None;
        local_218.AbnormalGroup = None;
        local_218.SkillAttackID = 0;
        local_218.AbnormalActionID = 0;
        local_218.ActionGrade = 0;
        local_218.AbnormalHeight = 0;
        local_218.AbnormalStartTime = 0.0;
        local_218.AbnormalMoveEndTime = 0.0;
        local_218.AbnormalEndTime = 0.0;
        local_218.AbnormalWaitTime = 0.0;
        local_218.AbnormalMoveTime = 0.0;
        local_218.AbnormalTime = 0.0;
        local_218.AbnormalGetupTime = 0.0;
        local_218.AttackerEntityID = 0;
        local_218.AbnormalValue = 0;
        local_218.IsAbnormalRotation = false;
        ::FString::FString(&local_218.AtkAttachSocket,L"");
        ::FString::FString(&local_218.DefAttachSocket,L"");
        local_218.AbnormalDestination.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_218.AbnormalDestination.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_218.IsDefenderKilled = false;
        local_218.IsDeadAbnormalCheck = false;
        local_218.AbnormalDestinationFloor.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_218.AbnormalDestinationFloor.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_218.AbnormalClientDestination.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_218.AbnormalClientDestination.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_218.CameraShakeID = 0;
        local_218.AbnormalDestination.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_218.AbnormalDestinationFloor.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_218.AbnormalClientDestination.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_218.bIsSkillUseUncancel = false;
        local_218.ID_HeightCondition = 0;
        local_218.AbnormalActionID = iVar3;
        local_218.AttackerEntityID = local_240;
        this_01 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_230);
        UDS_AbnormalAbilityData::AddAbnormalInfo(this_01,&local_218);
        local_228[0] = 0;
        local_248[0] = Abnormal_Process;
        FDS_EntityBase::TryActivateAbility
                  (this_00,local_248,(TObjectPtr<UWN_AbilityContext>)local_228);
        if (local_218.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_218.DefAttachSocket.Data.AllocatorInstance.Data);
        }
        if (local_218.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_218.AtkAttachSocket.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// Command_AutoPlayer @ 14c271950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_AutoPlayer
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  bool bVar1;
  UDS_GameInstance *pUVar2;
  
  pUVar2 = UDS_GameInstance::GetInst();
  if (pUVar2 != (UDS_GameInstance *)0x0) {
    bVar1 = UDS_GameInstance::IsAutoPlayer();
    UDS_GameInstance::SetAutoPlayer(!bVar1);
    return;
  }
  return;
}

// Command_BossCamera @ 14c271980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_BossCamera
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  APlayerController *pAVar5;
  UClass *pUVar6;
  ADS_CameraManager *this_00;
  wchar_t *_Str;
  APlayerCameraManager *pAVar7;
  FWeakObjectPtr local_res10 [2];
  APlayerCameraManager *local_res20;
  
  if (param_1->ArrayNum < 1) {
    return;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar2 + 8) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)pFVar2;
  }
  iVar4 = _wtoi(_Str);
  pAVar5 = UWorld::GetFirstPlayerController(param_2);
  if (pAVar5 == (APlayerController *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if (*(int *)(pAVar5->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_) {
    return;
  }
  if ((pAVar5->PlayerCameraManager).field0_0x0.DebugPtr != (APlayerCameraManager *)0x0) {
    pUVar6 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&pAVar5->PlayerCameraManager,pUVar6);
    if (bVar3) {
      pAVar7 = (pAVar5->PlayerCameraManager).field0_0x0.DebugPtr;
      goto LAB_14c271a1e;
    }
  }
  pAVar7 = (APlayerCameraManager *)0x0;
LAB_14c271a1e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar7 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_res20 = pAVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar7 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar3) {
    this_00 = (ADS_CameraManager *)FWeakObjectPtr::Get(local_res10);
    ADS_CameraManager::SetBossCamera(this_00,iVar4 != 0);
  }
  return;
}

// Command_CameraDebug @ 14c271ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_CameraDebug
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  APlayerController *pAVar5;
  UClass *pUVar6;
  ADS_CameraManager *this_00;
  wchar_t *_Str;
  APlayerCameraManager *pAVar7;
  FWeakObjectPtr local_res10 [2];
  APlayerCameraManager *local_res20;
  
  if (param_1->ArrayNum < 1) {
    return;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar2 + 8) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)pFVar2;
  }
  iVar4 = _wtoi(_Str);
  pAVar5 = UWorld::GetFirstPlayerController(param_2);
  if (pAVar5 == (APlayerController *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if (*(int *)(pAVar5->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_) {
    return;
  }
  if ((pAVar5->PlayerCameraManager).field0_0x0.DebugPtr != (APlayerCameraManager *)0x0) {
    pUVar6 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&pAVar5->PlayerCameraManager,pUVar6);
    if (bVar3) {
      pAVar7 = (pAVar5->PlayerCameraManager).field0_0x0.DebugPtr;
      goto LAB_14c271b4e;
    }
  }
  pAVar7 = (APlayerCameraManager *)0x0;
LAB_14c271b4e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar7 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_res20 = pAVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar7 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar3) {
    this_00 = (ADS_CameraManager *)FWeakObjectPtr::Get(local_res10);
    ADS_CameraManager::SetDebugMode(this_00,iVar4 != 0);
  }
  return;
}

// Command_CameraDepthOfField @ 14c271be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_CameraDepthOfField
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  TObjectPtr<APlayerCameraManager> *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  APlayerController *pAVar4;
  UClass *pUVar5;
  ADS_CameraManager *pAVar6;
  wchar_t *_Str;
  TObjectPtr<APlayerCameraManager>_u_0 TVar7;
  TObjectPtr<APlayerCameraManager>_u_0 local_res20;
  FWeakObjectPtr local_28;
  FWeakObjectPtr local_20;
  undefined8 local_18 [2];
  
  pAVar4 = UWorld::GetFirstPlayerController(param_2);
  if (pAVar4 != (APlayerController *)0x0) {
    this_00 = &pAVar4->PlayerCameraManager;
    TVar7.DebugPtr = (APlayerCameraManager *)0x0;
    if ((this_00->field0_0x0).DebugPtr != (APlayerCameraManager *)0x0) {
      pUVar5 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
      if (bVar2) {
        TVar7.ObjectPtr.field0_0x0 = (FObjectPtr)(this_00->field0_0x0).DebugPtr;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar7.DebugPtr != (APlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
    }
    local_28.ObjectIndex = 0;
    local_28.ObjectSerialNumber = 0;
    local_res20 = TVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar7.DebugPtr != (APlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res20);
    bVar2 = FWeakObjectPtr::IsValid(&local_28);
    if ((bVar2) && (0 < param_1->ArrayNum)) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)pFVar1;
      }
      iVar3 = _wtoi(_Str);
      if (iVar3 == 1) {
        pAVar6 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_28);
        local_20.ObjectIndex = 0;
        local_20.ObjectSerialNumber = 0;
        local_18[0] = 0;
        FWeakObjectPtr::operator=(&local_20,(FObjectPtr)local_18);
        local_res20._0_1_ = 1;
        ADS_CameraManager::EnableDepthOfField
                  (pAVar6,(EDS_DepthOfFieldType *)&local_res20,
                   (TWeakObjectPtr<AActor,FWeakObjectPtr>)local_20);
        return;
      }
      pAVar6 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_28);
      ADS_CameraManager::DisableDepthOfField(pAVar6);
    }
  }
  return;
}

// Command_CameraMotionBlur @ 14c271d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_CameraMotionBlur
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  TObjectPtr<APlayerCameraManager> *this_00;
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  APlayerController *pAVar6;
  UClass *pUVar7;
  ADS_CameraManager *this_01;
  longlong lVar8;
  wchar_t *_Str;
  APlayerCameraManager *pAVar9;
  FWeakObjectPtr local_res10 [2];
  APlayerCameraManager *local_res20;
  FString local_38;
  FString local_28;
  
  pAVar9 = (APlayerCameraManager *)0x0;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = *(int *)(pFVar1 + 8);
  lVar8 = (longlong)local_38.Data.ArrayNum;
  _Src = *(void **)pFVar1;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  ::FString::FString(&local_28,"0");
  if (local_28.Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      iVar4 = -1;
      goto LAB_14c271e26;
    }
  }
  sVar5 = wcslen(_Str);
  iVar4 = ::FString::Find(&local_38,_Str,(int)sVar5,IgnoreCase,FromStart,-1);
LAB_14c271e26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pAVar6 = UWorld::GetFirstPlayerController(param_2);
  if (pAVar6 != (APlayerController *)0x0) {
    this_00 = &pAVar6->PlayerCameraManager;
    if ((this_00->field0_0x0).DebugPtr != (APlayerCameraManager *)0x0) {
      pUVar7 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
      if (bVar3) {
        pAVar9 = (this_00->field0_0x0).DebugPtr;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar9 != (APlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar9);
    }
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_res20 = pAVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar9 != (APlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar9);
    }
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
    bVar3 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar3) {
      this_01 = (ADS_CameraManager *)FWeakObjectPtr::Get(local_res10);
      if (iVar4 == -1) {
        ADS_CameraManager::EnableMotionBlur(this_01);
      }
      else {
        ADS_CameraManager::DisableMotionBlur(this_01);
      }
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// Command_CameraShake @ 14c271f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_CameraShake
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  APlayerController *pAVar4;
  UClass *pUVar5;
  ADS_CameraManager *this_00;
  wchar_t *_Str;
  APlayerCameraManager *pAVar6;
  FWeakObjectPtr local_res20;
  APlayerCameraManager *local_18 [2];
  
  pAVar4 = UWorld::GetFirstPlayerController(param_2);
  if (pAVar4 == (APlayerController *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
  iVar3 = (int)pUVar5->_padding_;
  if (*(int *)(pAVar4->_padding_ + 0x38) < iVar3) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  if ((pAVar4->PlayerCameraManager).field0_0x0.DebugPtr != (APlayerCameraManager *)0x0) {
    pUVar5 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&pAVar4->PlayerCameraManager,pUVar5);
    if (bVar2) {
      pAVar6 = (pAVar4->PlayerCameraManager).field0_0x0.DebugPtr;
      goto LAB_14c271f99;
    }
  }
  pAVar6 = (APlayerCameraManager *)0x0;
LAB_14c271f99:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar6 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar6);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_18[0] = pAVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar6 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar6);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if ((bVar2) && (0 < param_1->ArrayNum)) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar3 = _wtoi(_Str);
    this_00 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_res20);
    ADS_CameraManager::CameraShake(this_00,iVar3);
  }
  return;
}

// Command_ChangePlatformWindow @ 14c272040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ChangePlatformWindow
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  ADS_PlayerController *this_00;
  wchar_t *_Str;
  FWeakObjectPtr local_res10 [3];
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar3 = _wtoi(_Str);
    ADS_PlayerController::GetPlayerController();
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar2) {
      this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res10);
      ADS_PlayerController::OnInputMethodChanged(this_00,(ECommonInputType)iVar3);
    }
  }
  return;
}

// Command_CharacterCollisionBlockDebug @ 14c2720b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_CharacterCollisionBlockDebug
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar2 = _wtoi(_Str);
    UDS_GameInstance::SetCharacterCollisionBlockDebug(iVar2 != 0);
    return;
  }
  return;
}

// Command_CharacterIDChange @ 14c2720f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_CharacterIDChange
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FDS_CharacterBaseTableRow *this_00;
  UDS_CustomizeData *this_01;
  ADS_MainCharacter *this_02;
  wchar_t *_Str;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar3 = _wtoi(_Str);
    ADS_MainCharacter::GetMainPlayer();
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(local_res10);
      UDS_CustomizeData::GetData((ulong64)&local_res20,*(ulong64 *)&pUVar4[0x29].field_0x18,false);
      bVar2 = TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *)&local_res20,
                         (void *)0x0);
      if (!bVar2) {
        this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)iVar3,true);
        bVar2 = FDS_CharacterBaseTableRow::IsValid(this_00);
        if (bVar2) {
          this_01 = (UDS_CustomizeData *)FWeakObjectPtr::Get(&local_res20);
          UDS_CustomizeData::SetCharID(this_01,iVar3);
          this_02 = (ADS_MainCharacter *)FWeakObjectPtr::Get(local_res10);
          ADS_MainCharacter::RefreshCOICoreAsync(this_02);
        }
      }
    }
  }
  return;
}

// Command_Chat @ 14c2721c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_Chat
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  FString local_18;
  
  if (param_1->ArrayNum != 0) {
    if (param_1->ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = *(int *)(pFVar2 + 8);
    lVar7 = (longlong)local_18.Data.ArrayNum;
    _Src = *(void **)pFVar2;
    if (local_18.Data.ArrayNum == 0) {
      local_18.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
                 &local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
    }
    uVar6 = 1;
    if (1 < param_1->ArrayNum) {
      lVar7 = 0x10;
      do {
        ::FString::AppendChars(&local_18,L" ",1);
        uVar5 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        iVar1 = *(int *)(pFVar2 + lVar7 + 8);
        iVar8 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(&local_18,*(wchar_t **)(pFVar2 + lVar7),iVar8);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < param_1->ArrayNum);
    }
    FDS_ChatService::SendChatMessage(None,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Command_CreateItem @ 14c272360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_CreateItem
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  return;
}

// Command_DelayMoveSync @ 14c272370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_DelayMoveSync
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  UDS_GameInstance *pUVar2;
  wchar_t *_Str;
  double dVar3;
  
  pUVar2 = UDS_GameInstance::GetInst();
  if ((pUVar2 != (UDS_GameInstance *)0x0) && (0 < param_1->ArrayNum)) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    dVar3 = _wtof(_Str);
    pUVar2->DelayMoveSync = (float)dVar3;
  }
  return;
}

// Command_DestroyItem @ 14c2723d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_DestroyItem
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  return;
}

// Command_DoNotActionMode @ 14c2723e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_DoNotActionMode
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str;
  
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)pFVar1;
  }
  iVar4 = _wtoi(_Str);
  UDS_GameInstance::SetDoNotActionMode(iVar4 != 0);
  return;
}

// Command_DrawFocusedWidget @ 14c272460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_DrawFocusedWidget
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  UDS_GameInstance *pUVar1;
  
  pUVar1 = UDS_GameInstance::GetInst();
  if (pUVar1 != (UDS_GameInstance *)0x0) {
    pUVar1->bFocusedWidgetDebug = pUVar1->bFocusedWidgetDebug == false;
  }
  return;
}

// Command_DropItemTest @ 14c272490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_DropItemTest
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined3 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UDS_DropDataSet *this_00;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  FWeakObjectPtr local_58;
  TArray<FDS_RewardData,TSizedDefaultAllocator<32>_> local_50;
  int local_40;
  int iStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  int iStack_34;
  
  TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)&local_58);
  bVar6 = TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> *)&local_58,(void *)0x0);
  if (bVar6) {
    return;
  }
  iVar8 = param_1->ArrayNum;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  uVar15 = 0;
  if (iVar8 < 1) {
    local_40 = 0x5f78eb1;
    iStack_3c = 5;
    uStack_38 = 1;
    uStack_37 = 0;
    uStack_36 = 0;
    iStack_34 = 0;
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_50.AllocatorInstance,&local_50.ArrayMax);
    uVar3 = CONCAT44(iStack_3c,local_40);
    uVar4 = CONCAT44(iStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,uStack_38)))
                    );
    local_40 = 0x5f78eb1;
    iStack_3c = 10;
    iVar8 = iVar7 + 1;
    uStack_38 = 0;
    uStack_37 = 0;
    uStack_36 = 0;
    iStack_34 = 1;
    *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)iVar7 * 0x10) = uVar3;
    *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) = uVar4;
    if (iVar8 == local_50.ArrayMax) {
      local_50.ArrayNum = iVar8;
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&local_50.AllocatorInstance,&local_50.ArrayMax);
    }
    uVar3 = CONCAT44(iStack_3c,local_40);
    uVar5 = CONCAT12(uStack_36,CONCAT11(uStack_37,uStack_38));
    local_50.ArrayNum = iVar8 + 1;
    local_40 = 0x2fcc541;
    iStack_3c = 1;
    uStack_38 = 0;
    uStack_37 = 1;
    uStack_36 = 0;
    *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)iVar8 * 0x10) = uVar3;
    *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) =
         CONCAT44(iStack_34,CONCAT13(uStack_35,uVar5));
    iStack_34 = 2;
    if (local_50.ArrayNum == local_50.ArrayMax) {
      local_50.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&local_50.AllocatorInstance,&local_50.ArrayMax);
    }
    uVar3 = CONCAT44(iStack_3c,local_40);
    uVar5 = CONCAT12(uStack_36,CONCAT11(uStack_37,uStack_38));
    iVar8 = local_50.ArrayNum + 1;
    local_40 = 0x2fcc541;
    iStack_3c = 1;
    uStack_38 = 0;
    uStack_37 = 1;
    uStack_36 = 0;
    *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x10) = uVar3;
    *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x10 + 8) =
         CONCAT44(iStack_34,CONCAT13(uStack_35,uVar5));
    iStack_34 = 3;
    if (iVar8 == local_50.ArrayMax) {
      local_50.ArrayNum = iVar8;
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&local_50.AllocatorInstance,&local_50.ArrayMax);
    }
    uVar3 = CONCAT44(iStack_3c,local_40);
    uVar5 = CONCAT12(uStack_36,CONCAT11(uStack_37,uStack_38));
    local_50.ArrayNum = iVar8 + 1;
    local_40 = 0x1cb7131;
    iStack_3c = 1;
    uStack_38 = 0;
    uStack_37 = 0;
    uStack_36 = 0;
    *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)iVar8 * 0x10) = uVar3;
    *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) =
         CONCAT44(iStack_34,CONCAT13(uStack_35,uVar5));
    iStack_34 = 4;
    if (local_50.ArrayNum == local_50.ArrayMax) {
      local_50.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&local_50.AllocatorInstance,&local_50.ArrayMax);
    }
    uVar3 = CONCAT44(iStack_3c,local_40);
    uVar5 = CONCAT12(uStack_36,CONCAT11(uStack_37,uStack_38));
    iVar8 = local_50.ArrayNum + 1;
    local_40 = 0xf827d53;
    iStack_3c = 0xc;
    uStack_38 = 1;
    uStack_37 = 0;
    uStack_36 = 0;
    *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x10) = uVar3;
    *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x10 + 8) =
         CONCAT44(iStack_34,CONCAT13(uStack_35,uVar5));
    iStack_34 = 5;
    if (iVar8 == local_50.ArrayMax) {
      local_50.ArrayNum = iVar8;
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&local_50.AllocatorInstance,&local_50.ArrayMax);
    }
    uVar3 = CONCAT44(iStack_3c,local_40);
    uVar5 = CONCAT12(uStack_36,CONCAT11(uStack_37,uStack_38));
    iVar7 = iVar8 + 1;
    local_40 = 0xf827d55;
    iStack_3c = 0x18;
    uStack_38 = 0;
    uStack_37 = 0;
    uStack_36 = 0;
    *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)iVar8 * 0x10) = uVar3;
    *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) =
         CONCAT44(iStack_34,CONCAT13(uStack_35,uVar5));
    iStack_34 = 6;
    if (iVar7 == local_50.ArrayMax) {
      local_50.ArrayNum = iVar7;
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&local_50.AllocatorInstance,&local_50.ArrayMax);
    }
    local_50.ArrayNum = iVar7 + 1;
    *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)iVar7 * 0x10) =
         CONCAT44(iStack_3c,local_40);
    *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
         CONCAT44(iStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,uStack_38))));
  }
  else {
    if (iVar8 != (iVar8 / 3 + (iVar8 >> 0x1f) +
                 (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3
       ) goto LAB_14c2729be;
    lVar14 = 0x20;
    uVar13 = 2;
    do {
      iVar7 = uVar13 - 2;
      uVar9 = uVar15;
      if (iVar7 < iVar8) {
        uVar9 = ~(uVar13 - 2) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + lVar14 + -0x18) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(pFVar1 + lVar14 + -0x20);
      }
      iVar8 = _wtoi(pwVar12);
      uVar9 = uVar15;
      if ((int)(uVar13 - 1) < param_1->ArrayNum) {
        uVar9 = ~(uVar13 - 1) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + lVar14 + -8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(pFVar1 + lVar14 + -0x10);
      }
      iVar10 = _wtoi(pwVar12);
      uVar9 = uVar15;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + lVar14 + 8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(pFVar1 + lVar14);
      }
      iVar11 = _wtoi(pwVar12);
      uVar9 = 0;
      if ((int)(uVar13 + 1) < param_1->ArrayNum) {
        uVar9 = ~(uVar13 + 1) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + lVar14 + 0x18) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(pFVar1 + lVar14 + 0x10);
      }
      local_40 = iVar8;
      iStack_3c = iVar10;
      uStack_38 = iVar11 != 0;
      iVar8 = _wtoi(pwVar12);
      uStack_37 = iVar8 != 0;
      uStack_36 = 0;
      iStack_34 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
      iVar8 = local_50.ArrayNum;
      if (local_50.ArrayNum == local_50.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      local_50.ArrayNum = iVar8 + 1;
      lVar14 = lVar14 + 0x40;
      *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)iVar8 * 0x10) =
           CONCAT44(iStack_3c,local_40);
      *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) =
           CONCAT44(iStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,uStack_38))))
      ;
      iVar8 = param_1->ArrayNum;
      iVar7 = uVar13 + 2;
      uVar13 = uVar13 + 4;
    } while (iVar7 < iVar8);
  }
  this_00 = (UDS_DropDataSet *)FWeakObjectPtr::Get(&local_58);
  UDS_DropDataSet::OnItemDropEnqueue(this_00,&local_50);
LAB_14c2729be:
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// Command_EquipItem @ 14c2729f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_EquipItem
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  return;
}

// Command_FindPlayerByUID @ 14c272a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_FindPlayerByUID
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ForAnyElementType _Str;
  longlong lVar6;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if (param_1->ArrayNum != 0) {
    if (param_1->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = *(int *)(pFVar1 + 8);
    lVar6 = (longlong)local_50;
    _Src = *(void **)pFVar1;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50,0,&local_58,local_50,&local_4c);
      memcpy(local_58.Data,_Src,lVar6 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_50 != 0) {
      _Str.Data = local_58.Data;
    }
    lVar6 = _wtoi64((wchar_t *)_Str.Data);
    if (0 < lVar6) {
      local_48 = (undefined1  [8])0x0;
      local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_40.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_30);
      local_18 = &local_40;
      puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_CommandLibrary::Command_FindPlayerByUID'::`8'::<lambda_1>_>
                   ::_vftable_;
        puVar4[3] = lVar6;
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      FDS_PlayerRepo::RequestSearchPlayersByPlayerUID
                (lVar6,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  return;
}

// Command_FixedSkillLocation @ 14c272b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_FixedSkillLocation
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_GameInstance *pUVar3;
  UDS_LogManager *pUVar4;
  wchar_t *_Str;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar3 = UDS_GameInstance::GetInst();
  if (pUVar3 != (UDS_GameInstance *)0x0) {
    if (param_1->ArrayNum < 1) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_CommandLibrary::Command_FixedSkillLocation",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x7c0,L"InArgs is invalid.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)pFVar1;
      }
      iVar2 = _wtoi(_Str);
      UDS_GameInstance::SetFixedSkillLocation(iVar2 != 0);
    }
  }
  return;
}

// Command_ForceFeedback @ 14c272c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ForceFeedback
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ADS_PlayerController *this_00;
  UClass *pUVar3;
  wchar_t *_Str;
  wchar_t *_Str_00;
  double dVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = __real_3f800000;
  _Str_00 = L"";
  fVar5 = __real_3f800000;
  if (0 < param_1->ArrayNum) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar2;
    }
    dVar4 = _wtof(_Str);
    fVar5 = (float)dVar4;
  }
  if (1 < param_1->ArrayNum) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 0x18) != 0) {
      _Str_00 = *(wchar_t **)(pFVar2 + 0x10);
    }
    dVar4 = _wtof(_Str_00);
    fVar6 = (float)dVar4;
  }
  this_00 = (ADS_PlayerController *)UWorld::GetFirstPlayerController(param_2);
  if (this_00 != (ADS_PlayerController *)0x0) {
    pUVar3 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      ADS_PlayerController::PlayForceFeedback(this_00,fVar5,fVar6);
    }
  }
  return;
}

// Command_ForceTransportWarpFail @ 14c272d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ForceTransportWarpFail
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  
  if (param_1->ArrayNum < 1) {
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) != 0) {
    bVar2 = FToBoolHelper::FromCStringWide(*(wchar_t **)pFVar1);
    UDS_GameInstance::SetForceTransportWarpFail(bVar2);
    return;
  }
  bVar2 = FToBoolHelper::FromCStringWide(L"");
  UDS_GameInstance::SetForceTransportWarpFail(bVar2);
  return;
}

// Command_HideMainPlayer @ 14c272dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_HideMainPlayer
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_GameInstance *pUVar4;
  UWorld *pUVar5;
  FDS_EntityBase *pFVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res20;
  
  pUVar4 = UDS_GameInstance::GetInst();
  if (pUVar4 != (UDS_GameInstance *)0x0) {
    pUVar5 = UDS_GameInstance::GetGameInstanceWorld();
    pFVar6 = GetMainPlayerEntity(this,pUVar5);
    if (pFVar6 != (FDS_EntityBase *)0x0) {
      (**(code **)(pFVar6->_padding_ + 0x150))(pFVar6,&local_res20);
      bVar2 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar2) {
        if (param_1->ArrayNum < 1) {
          IsShowMainPlayer = IsShowMainPlayer == false;
        }
        else {
          pFVar1 = (param_1->AllocatorInstance).Data;
          if (*(int *)(pFVar1 + 8) == 0) {
            iVar3 = _wtoi(L"");
            IsShowMainPlayer = iVar3 != 0;
          }
          else {
            iVar3 = _wtoi(*(wchar_t **)pFVar1);
            IsShowMainPlayer = iVar3 != 0;
          }
        }
        pUVar7 = FWeakObjectPtr::Get(&local_res20);
        (**(code **)(*(longlong *)pUVar7 + 0x368))(pUVar7,IsShowMainPlayer == false);
      }
    }
  }
  return;
}

// Command_MakeCapsuleComponent @ 14c272ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_MakeCapsuleComponent
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TQuat<double> *pTVar7;
  UDS_GameInstance *this_00;
  UWorld *pUVar8;
  wchar_t *_Str;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ForAnyElementType local_a8;
  int local_a0 [2];
  TVector<double>_u_0 local_98;
  TQuat<double> local_78 [3];
  
  if (0 < param_1->ArrayNum) {
    uVar9 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,3,&local_a8,local_a0,local_a0 + 1);
    *(undefined8 *)(local_a8.Data + (longlong)iVar6 * 4) = 0;
    *(undefined4 *)(local_a8.Data + (longlong)iVar6 * 4 + 8) = 0;
    iVar6 = param_1->ArrayNum;
    uVar10 = uVar9;
    uVar11 = uVar9;
    if (0 < iVar6) {
      do {
        uVar16 = (uint)uVar9;
        uVar15 = 0;
        if ((int)uVar16 < iVar6) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + uVar10 + 8) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)(pFVar1 + uVar10);
        }
        dVar13 = _wtof(_Str);
        uVar15 = 0;
        if ((int)uVar16 < local_a0[0]) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = (ulonglong)(uVar16 + 1);
        *(float *)(local_a8.Data + uVar11 * 4) = (float)dVar13;
        iVar6 = param_1->ArrayNum;
        uVar10 = uVar10 + 0x10;
        uVar11 = uVar11 + 1;
      } while ((int)(uVar16 + 1) < iVar6);
    }
    if (local_a0[0] < 3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar13 = (double)*(float *)(local_a8.Data + 8);
    iVar6 = local_a0[0];
    if (local_a0[0] < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = local_a0[0];
    }
    dVar3 = (double)*(float *)(local_a8.Data + 4);
    if ((iVar6 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    dVar4 = __real_3f1a36e2e0000000;
    uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_98._s_0.X = (double)*(float *)local_a8.Data;
    uVar12 = SUB84(local_98._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar14 = (uint)((ulonglong)local_98._s_0.X >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    local_98._s_0.Y = dVar3;
    local_98._s_0.Z = dVar13;
    if ((((double)CONCAT44(uVar14,uVar12) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar14,uVar12) == __real_3f1a36e2e0000000) &&
        (uVar12 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar14 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar14,uVar12) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar14,uVar12) == __real_3f1a36e2e0000000)) &&
       (uVar12 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar14 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar14,uVar12) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar14,uVar12) == __real_3f1a36e2e0000000)) {
      if ((param_1->ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Math::TVector<double>::InitFromString
                ((TVector<double> *)&local_98._s_0,(FString *)(param_1->AllocatorInstance).Data);
    }
    if (((dVar4 < (double)CONCAT44((uint)((ulonglong)local_98._0_8_ >> 0x20) & uVar16,
                                   SUB84(local_98._s_0.X,0) & uVar15)) ||
        (uVar12 = SUB84(local_98._s_0.Y,0) & uVar15,
        uVar14 = (uint)((ulonglong)local_98._8_8_ >> 0x20) & uVar16,
        dVar4 <= (double)CONCAT44(uVar14,uVar12) && (double)CONCAT44(uVar14,uVar12) != dVar4)) ||
       (uVar15 = SUB84(local_98._s_0.Z,0) & uVar15,
       uVar16 = (uint)((ulonglong)local_98._16_8_ >> 0x20) & uVar16,
       dVar4 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar4)) {
      pTVar7 = UE::Math::TRotator<double>::Quaternion
                         (&UE::Math::TRotator<double>::ZeroRotator,local_78);
      this_00 = UDS_GameInstance::GetInst();
      pUVar8 = UGameInstance::GetWorld((UGameInstance *)this_00);
      DrawDebugCapsule(pUVar8,(TVector<double> *)&local_98._s_0,__real_42c80000,__real_42480000,
                       pTVar7,&FColor::Red,false,__real_41200000,'\0',__real_40a00000);
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  return;
}

// Command_MakeDummyPlayer @ 14c273290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_MakeDummyPlayer
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_EntityManager *this_00;
  
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    if (param_1->ArrayNum < 1) {
      IsShowDummyPlayer = IsShowDummyPlayer == false;
    }
    else {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        iVar2 = _wtoi(L"");
        IsShowDummyPlayer = iVar2 != 0;
      }
      else {
        iVar2 = _wtoi(*(wchar_t **)pFVar1);
        IsShowDummyPlayer = iVar2 != 0;
      }
    }
    UDS_EntityManager::SpawnDummyNetCharacter(this_00,IsShowDummyPlayer,20000);
  }
  return;
}

// Command_MotionTrajectoryDebug @ 14c273310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_MotionTrajectoryDebug
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  UDS_GameInstance::bIsCharacterTrajectoryDebug = !UDS_GameInstance::bIsCharacterTrajectoryDebug;
  return;
}

// Command_MoveLocation @ 14c273330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_MoveLocation
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FDS_EntityBase *pFVar7;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *this_00;
  FWeakObjectPtr *this_01;
  UObject *pUVar8;
  wchar_t *_Str;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res20 [8];
  ForAnyElementType local_a8;
  int local_a0 [2];
  TVector<double>_u_0 local_98 [4];
  
  if (0 < param_1->ArrayNum) {
    uVar9 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,3,&local_a8,local_a0,local_a0 + 1);
    *(undefined8 *)(local_a8.Data + (longlong)iVar6 * 4) = 0;
    *(undefined4 *)(local_a8.Data + (longlong)iVar6 * 4 + 8) = 0;
    iVar6 = param_1->ArrayNum;
    uVar10 = uVar9;
    uVar11 = uVar9;
    if (0 < iVar6) {
      do {
        uVar16 = (uint)uVar9;
        uVar15 = 0;
        if ((int)uVar16 < iVar6) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + uVar10 + 8) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)(pFVar1 + uVar10);
        }
        dVar13 = _wtof(_Str);
        uVar15 = 0;
        if ((int)uVar16 < local_a0[0]) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = (ulonglong)(uVar16 + 1);
        *(float *)(local_a8.Data + uVar11 * 4) = (float)dVar13;
        iVar6 = param_1->ArrayNum;
        uVar10 = uVar10 + 0x10;
        uVar11 = uVar11 + 1;
      } while ((int)(uVar16 + 1) < iVar6);
    }
    if (local_a0[0] < 3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar13 = (double)*(float *)(local_a8.Data + 8);
    iVar6 = local_a0[0];
    if (local_a0[0] < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = local_a0[0];
    }
    dVar3 = (double)*(float *)(local_a8.Data + 4);
    if ((iVar6 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    dVar4 = __real_3f1a36e2e0000000;
    uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_98[0]._0_8_ = (undefined8)*(float *)local_a8.Data;
    uVar12 = (uint)local_98[0]._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar14 = (uint)((ulonglong)local_98[0]._0_8_ >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    local_98[0]._8_8_ = dVar3;
    local_98[0]._16_8_ = dVar13;
    if ((((double)CONCAT44(uVar14,uVar12) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar14,uVar12) == __real_3f1a36e2e0000000) &&
        (uVar12 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar14 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar14,uVar12) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar14,uVar12) == __real_3f1a36e2e0000000)) &&
       (uVar12 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar14 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar14,uVar12) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar14,uVar12) == __real_3f1a36e2e0000000)) {
      if ((param_1->ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Math::TVector<double>::InitFromString
                ((TVector<double> *)&local_98[0]._s_0,(FString *)(param_1->AllocatorInstance).Data);
    }
    if ((((dVar4 < (double)CONCAT44((uint)((ulonglong)local_98[0]._0_8_ >> 0x20) & uVar16,
                                    (uint)local_98[0]._s_0.X & uVar15)) ||
         (uVar12 = (uint)local_98[0]._s_0.Y & uVar15,
         uVar14 = (uint)((ulonglong)local_98[0]._8_8_ >> 0x20) & uVar16,
         dVar4 <= (double)CONCAT44(uVar14,uVar12) && (double)CONCAT44(uVar14,uVar12) != dVar4)) ||
        (uVar15 = (uint)local_98[0]._s_0.Z & uVar15,
        uVar16 = (uint)((ulonglong)local_98[0]._16_8_ >> 0x20) & uVar16,
        dVar4 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar4)) &&
       (pFVar7 = GetMainPlayerEntity(this,param_2), pFVar7 != (FDS_EntityBase *)0x0)) {
      this_00 = (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                (**(code **)(pFVar7->_padding_ + 0x78))(pFVar7);
      bVar5 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      if (!bVar5) {
        this_01 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x78))(pFVar7,local_res20);
        pUVar8 = FWeakObjectPtr::Get(this_01);
        (**(code **)(*(longlong *)pUVar8 + 0x358))(pUVar8,local_98);
      }
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  return;
}

// Command_OneEntitySync @ 14c273700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_OneEntitySync
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  ulong64 uVar2;
  
  if (param_1->ArrayNum != 1) {
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) != 0) {
    uVar2 = _wtoi64(*(wchar_t **)pFVar1);
    UDS_GameInstance::SetDebugEntityID(uVar2);
    return;
  }
  uVar2 = _wtoi64(L"");
  UDS_GameInstance::SetDebugEntityID(uVar2);
  return;
}

// Command_OpenHud @ 14c273750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_OpenHud
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_HudManager *this_00;
  wchar_t *_Str;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar2 = _wtoi(_Str);
    this_00 = UDS_HudManager::GetInst();
    if (this_00 != (UDS_HudManager *)0x0) {
      if (iVar2 != 0) {
        UDS_HudManager::ShowHUD(this_00,HudWindowUpper9);
        return;
      }
      UDS_HudManager::HideHUD(this_00,HudWindowUpper9);
      return;
    }
  }
  return;
}

// Command_Party @ 14c2737c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_Party
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  FString local_208;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  undefined1 local_158 [8];
  FDelegateAllocation local_150;
  undefined1 local_140 [8];
  FDelegateAllocation local_138;
  undefined1 local_128 [8];
  FDelegateAllocation local_120;
  undefined1 local_110 [8];
  FDelegateAllocation local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (param_1->ArrayNum == 0) {
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Data.ArrayNum = *(int *)(pFVar1 + 8);
  lVar10 = (longlong)local_208.Data.ArrayNum;
  pvVar2 = *(void **)pFVar1;
  if (local_208.Data.ArrayNum == 0) {
    local_208.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_208.Data.ArrayNum,0,(ForAnyElementType *)&local_208,local_208.Data.ArrayNum
               ,&local_208.Data.ArrayMax);
    memcpy(local_208.Data.AllocatorInstance.Data,pvVar2,lVar10 * 2);
  }
  ::FString::FString(&local_1a8,"invite");
  iVar6 = -1;
  if (local_1a8.Data.ArrayNum == 0) {
    FVar11.Data = (FScriptContainerElement *)L"";
LAB_14c2738b5:
    sVar7 = wcslen((wchar_t *)FVar11.Data);
    iVar5 = ::FString::Find(&local_208,(wchar_t *)FVar11.Data,(int)sVar7,IgnoreCase,FromStart,-1);
    if ((iVar5 == -1) || (param_1->ArrayNum < 2)) goto LAB_14c2738f5;
    bVar4 = true;
  }
  else {
    FVar11.Data = local_1a8.Data.AllocatorInstance.Data;
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14c2738b5;
LAB_14c2738f5:
    bVar4 = false;
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if ((param_1->ArrayNum < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Data.ArrayNum = *(int *)(pFVar1 + 0x18);
    lVar10 = (longlong)local_1b8.Data.ArrayNum;
    pvVar2 = *(void **)(pFVar1 + 0x10);
    if (local_1b8.Data.ArrayNum == 0) {
      local_1b8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1b8.Data.ArrayNum,0,(ForAnyElementType *)&local_1b8,
                 local_1b8.Data.ArrayNum,&local_1b8.Data.ArrayMax);
      memcpy(local_1b8.Data.AllocatorInstance.Data,pvVar2,lVar10 * 2);
    }
    iVar6 = local_1b8.Data.ArrayNum;
    FVar11.Data = local_1b8.Data.AllocatorInstance.Data;
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0 = CONCAT44(local_1f0._4_4_,local_1b8.Data.ArrayNum);
    if (local_1b8.Data.ArrayNum == 0) {
      local_1f0 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1b8.Data.ArrayNum,0,&local_1f8,local_1b8.Data.ArrayNum,
                 (int *)((longlong)&local_1f0 + 4));
      memcpy(local_1f8.Data,FVar11.Data,(longlong)iVar6 * 2);
    }
    local_158 = (undefined1  [8])0x0;
    local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_150.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
               (FWriteAccessScope *)&local_a8);
    local_90 = &local_150;
    puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_150);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_CommandLibrary::Command_Party'::`8'::<lambda_1>_>
                 ::_vftable_;
      puVar8[3] = 0;
      puVar8[3] = local_1f8.Data;
      local_1f8.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(puVar8 + 4) = (undefined4)local_1f0;
      *(undefined4 *)((longlong)puVar8 + 0x24) = local_1f0._4_4_;
      local_1f0 = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    FDS_PlayerRepo::RequestSearchPlayersByName
              (&local_1b8,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_158);
    local_188.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
    if (local_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data);
      local_188.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
    }
  }
  else {
    ::FString::FString(&local_198,"search");
    if (local_198.Data.ArrayNum == 0) {
      FVar11.Data = (FScriptContainerElement *)L"";
LAB_14c273ae0:
      sVar7 = wcslen((wchar_t *)FVar11.Data);
      iVar5 = ::FString::Find(&local_208,(wchar_t *)FVar11.Data,(int)sVar7,IgnoreCase,FromStart,-1);
      if ((iVar5 == -1) || (param_1->ArrayNum < 2)) goto LAB_14c273b20;
      bVar4 = true;
    }
    else {
      FVar11.Data = local_198.Data.AllocatorInstance.Data;
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14c273ae0;
LAB_14c273b20:
      bVar4 = false;
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      if ((param_1->ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::FString(&local_188,(FString *)((param_1->AllocatorInstance).Data + 0x10));
      FVar11.Data = local_188.Data.AllocatorInstance.Data;
      local_1e8.Data = (FScriptContainerElement *)0x0;
      iVar6 = local_188.Data.ArrayNum;
      local_1e0 = CONCAT44(local_1e0._4_4_,iVar6);
      if (iVar6 == 0) {
        local_1e0 = local_188.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar6,0,&local_1e8,iVar6,(int *)((longlong)&local_1e0 + 4));
        memcpy(local_1e8.Data,FVar11.Data,(longlong)iVar6 * 2);
      }
      local_140 = (undefined1  [8])0x0;
      local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_138.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_140,
                 (FWriteAccessScope *)&local_88);
      local_70 = &local_138;
      puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_138);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_CommandLibrary::Command_Party'::`11'::<lambda_2>_>
                   ::_vftable_;
        puVar8[3] = 0;
        puVar8[3] = local_1e8.Data;
        local_1e8.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(puVar8 + 4) = (undefined4)local_1e0;
        *(undefined4 *)((longlong)puVar8 + 0x24) = local_1e0._4_4_;
        local_1e0 = 0;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      FDS_PlayerRepo::RequestSearchPlayersByName
                (&local_188,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_140);
      if (local_1e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
    }
    else {
      ::FString::FString(&local_f8,"create");
      if (local_f8.Data.ArrayNum == 0) {
        pwVar12 = L"";
LAB_14c273cc6:
        sVar7 = wcslen(pwVar12);
        iVar5 = ::FString::Find(&local_208,pwVar12,(int)sVar7,IgnoreCase,FromStart,-1);
      }
      else {
        pwVar12 = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14c273cc6;
        iVar5 = -1;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (iVar5 != -1) {
        FDS_PartyService::OpenPartyCreatePopup();
        goto LAB_14c2741a3;
      }
      ::FString::FString(&local_e8,"dismiss");
      if (local_e8.Data.ArrayNum == 0) {
        pwVar12 = L"";
LAB_14c273d38:
        sVar7 = wcslen(pwVar12);
        iVar5 = ::FString::Find(&local_208,pwVar12,(int)sVar7,IgnoreCase,FromStart,-1);
      }
      else {
        pwVar12 = (wchar_t *)local_e8.Data.AllocatorInstance.Data;
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14c273d38;
        iVar5 = -1;
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (iVar5 != -1) {
        FDS_PartyService::OpenPartyDismissPopup();
        goto LAB_14c2741a3;
      }
      ::FString::FString(&local_d8,"leave");
      if (local_d8.Data.ArrayNum == 0) {
        pwVar12 = L"";
LAB_14c273daa:
        sVar7 = wcslen(pwVar12);
        iVar5 = ::FString::Find(&local_208,pwVar12,(int)sVar7,IgnoreCase,FromStart,-1);
      }
      else {
        pwVar12 = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14c273daa;
        iVar5 = -1;
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (iVar5 != -1) {
        FDS_PartyService::OpenPartyLeavePopup();
        goto LAB_14c2741a3;
      }
      ::FString::FString(&local_c8,"leaderchange");
      if (local_c8.Data.ArrayNum == 0) {
        pwVar12 = L"";
LAB_14c273e25:
        sVar7 = wcslen(pwVar12);
        iVar5 = ::FString::Find(&local_208,pwVar12,(int)sVar7,IgnoreCase,FromStart,-1);
      }
      else {
        pwVar12 = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14c273e25;
        iVar5 = -1;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (iVar5 == -1) {
        ::FString::FString(&local_b8,"kick");
        FVar11.Data = (FScriptContainerElement *)L"";
        if ((local_b8.Data.ArrayNum == 0) ||
           (FVar11.Data = local_b8.Data.AllocatorInstance.Data,
           local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          sVar7 = wcslen((wchar_t *)FVar11.Data);
          iVar6 = ::FString::Find(&local_208,(wchar_t *)FVar11.Data,(int)sVar7,IgnoreCase,FromStart,
                                  -1);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        if (iVar6 == -1) goto LAB_14c2741a3;
        if ((param_1->ArrayNum < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::FString(&local_168,(FString *)((param_1->AllocatorInstance).Data + 0x10));
        FVar11.Data = local_168.Data.AllocatorInstance.Data;
        local_1c8.Data = (FScriptContainerElement *)0x0;
        iVar6 = local_168.Data.ArrayNum;
        local_1c0 = CONCAT44(local_1c0._4_4_,iVar6);
        if (iVar6 == 0) {
          local_1c0 = local_168.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar6,0,&local_1c8,iVar6,(int *)((longlong)&local_1c0 + 4));
          memcpy(local_1c8.Data,FVar11.Data,(longlong)iVar6 * 2);
        }
        local_110 = (undefined1  [8])0x0;
        local_108.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_108.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
                   (FWriteAccessScope *)&local_48);
        local_30 = &local_108;
        puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_108);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_CommandLibrary::Command_Party'::`26'::<lambda_4>_>
                     ::_vftable_;
          puVar8[3] = 0;
          puVar8[3] = local_1c8.Data;
          local_1c8.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(puVar8 + 4) = (undefined4)local_1c0;
          *(undefined4 *)((longlong)puVar8 + 0x24) = local_1c0._4_4_;
          local_1c0 = 0;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        FDS_PlayerRepo::RequestSearchPlayersByName
                  (&local_168,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_110)
        ;
        local_188.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
        if (local_1c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data);
          local_188.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
        }
      }
      else {
        if ((param_1->ArrayNum < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::FString(&local_178,(FString *)((param_1->AllocatorInstance).Data + 0x10));
        FVar11.Data = local_178.Data.AllocatorInstance.Data;
        local_1d8.Data = (FScriptContainerElement *)0x0;
        iVar6 = local_178.Data.ArrayNum;
        local_1d0 = CONCAT44(local_1d0._4_4_,iVar6);
        if (iVar6 == 0) {
          local_1d0 = local_178.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar6,0,&local_1d8,iVar6,(int *)((longlong)&local_1d0 + 4));
          memcpy(local_1d8.Data,FVar11.Data,(longlong)iVar6 * 2);
        }
        local_128 = (undefined1  [8])0x0;
        local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_120.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
                   (FWriteAccessScope *)&local_68);
        local_50 = &local_120;
        puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_120);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_CommandLibrary::Command_Party'::`23'::<lambda_3>_>
                     ::_vftable_;
          puVar8[3] = 0;
          puVar8[3] = local_1d8.Data;
          local_1d8.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(puVar8 + 4) = (undefined4)local_1d0;
          *(undefined4 *)((longlong)puVar8 + 0x24) = local_1d0._4_4_;
          local_1d0 = 0;
        }
        if (local_68.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
        }
        FDS_PlayerRepo::RequestSearchPlayersByName
                  (&local_178,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_128)
        ;
        local_188.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
        if (local_1d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data);
          local_188.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
LAB_14c2741a3:
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  return;
}

// Command_PlayerCollisionBlock @ 14c2741f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_PlayerCollisionBlock
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_EntityBase *pFVar5;
  UDS_GameInstance *pUVar6;
  UObject *pUVar7;
  FName *pFVar8;
  wchar_t *_Str;
  FWeakObjectPtr local_res10;
  FName local_res20;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar4 = _wtoi(_Str);
    pFVar5 = GetMainPlayerEntity(this,param_2);
    if ((pFVar5 != (FDS_EntityBase *)0x0) &&
       (pUVar6 = UDS_GameInstance::GetInst(), pUVar6 != (UDS_GameInstance *)0x0)) {
      (**(code **)(pFVar5->_padding_ + 0x160))(pFVar5,&local_res10);
      bVar3 = FWeakObjectPtr::IsValid(&local_res10);
      if (iVar4 == 0) {
        if (bVar3) {
          pUVar7 = FWeakObjectPtr::Get(&local_res10);
          (**(code **)(*(longlong *)pUVar7 + 0x9f0))(pUVar7,0x14,0);
        }
        bVar3 = false;
      }
      else {
        if (bVar3) {
          pUVar7 = FWeakObjectPtr::Get(&local_res10);
          pcVar2 = *(code **)(*(longlong *)pUVar7 + 0x788);
          pFVar8 = ::FName::FName(&local_res20,"Player");
          (*pcVar2)(pUVar7,*pFVar8,1);
        }
        bVar3 = true;
      }
      UDS_GameInstance::SetPlayerCollisionBlock(bVar3);
    }
  }
  return;
}

// Command_PrintColliderType @ 14c274300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_PrintColliderType
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if (param_1->ArrayNum < 1) {
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) != 0) {
    iVar2 = _wtoi(*(wchar_t **)pFVar1);
    UDS_GameInstance::SetPrintCollisionType(iVar2);
    return;
  }
  iVar2 = _wtoi(L"");
  UDS_GameInstance::SetPrintCollisionType(iVar2);
  return;
}

// Command_PrintEntityVisble @ 14c274350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_PrintEntityVisble
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  longlong lVar6;
  wchar_t *_Str;
  FString local_28;
  FString local_18;
  
  if (param_1->ArrayNum == 0) {
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = *(int *)(pFVar1 + 8);
  lVar6 = (longlong)local_28.Data.ArrayNum;
  _Src = *(void **)pFVar1;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  ::FString::FString(&local_18,"0");
  if (local_18.Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      iVar4 = -1;
      goto LAB_14c27445f;
    }
  }
  sVar5 = wcslen(_Str);
  iVar4 = ::FString::Find(&local_28,_Str,(int)sVar5,IgnoreCase,FromStart,-1);
LAB_14c27445f:
  UDS_GameInstance::SetPrintEntityVisble(iVar4 == -1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Command_QuestSequencePlay @ 14c2744a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_QuestSequencePlay
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_QuestDialogueSceneManager *this_00;
  wchar_t *_Str;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar2 = _wtoi(_Str);
    if ((0 < iVar2) &&
       (this_00 = UDS_QuestDialogueSceneManager::GetInst(),
       this_00 != (UDS_QuestDialogueSceneManager *)0x0)) {
      UDS_QuestDialogueSceneManager::OpenDialogueScene_Test(this_00,iVar2);
      return;
    }
  }
  return;
}

// Command_RandomSpawnBattleNPC @ 14c274500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_RandomSpawnBattleNPC
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FDS_NpcBattleTableRow *pFVar12;
  wchar_t *pwVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 local_res10 [8];
  ForAnyElementType local_78;
  undefined8 local_70;
  TArray<FDS_NpcBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58 [3];
  
  uVar16 = 0;
  if ((param_1->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar2 + 8) == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = *(wchar_t **)pFVar2;
  }
  iVar8 = _wtoi(pwVar13);
  uVar9 = 0;
  if (1 < param_1->ArrayNum) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 0x18) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)(pFVar2 + 0x10);
    }
    uVar9 = _wtoi(pwVar13);
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  FDS_NpcBaseTableRow::GetAll(&local_68);
  iVar6 = local_68.ArrayNum;
  pFVar2 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
  FVar15.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if (local_68.ArrayNum != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_NpcBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    fVar5 = __real_38000100;
    if (FVar15.Data == pFVar2) break;
    lVar3 = *(longlong *)FVar15.Data;
    if ((((*(int *)(lVar3 + 0x7c) != 0) && (*(byte *)(lVar3 + 0x44) < 4)) &&
        (pFVar12 = FDS_NpcBattleTableRow::Get((longlong)*(int *)(lVar3 + 0x7c),true),
        pFVar12 != (FDS_NpcBattleTableRow *)0x0)) &&
       ((uVar9 != 1 || (pFVar12->IsSearchingType == true)))) {
      iVar10 = (int)local_70;
      if ((int)local_70 == local_70._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_78,(int *)((longlong)&local_70 + 4));
      }
      local_70 = CONCAT44(local_70._4_4_,iVar10 + 1);
      *(undefined4 *)(local_78.Data + (longlong)iVar10 * 4) = *(undefined4 *)(lVar3 + 0x7c);
    }
    FVar15.Data = FVar15.Data + 8;
  }
  iVar6 = (int)local_70;
  if ((int)local_70 != 0) {
    if (0 < (int)local_70) {
      iVar10 = (int)local_70 + -1;
      fVar20 = (float)(int)local_70;
      uVar19 = uVar16;
      uVar17 = uVar16;
      do {
        uVar9 = rand();
        iVar11 = (int)((float)(uVar9 & 0x7fff) * fVar20 * fVar5);
        iVar18 = iVar10;
        if (iVar11 < iVar10) {
          iVar18 = iVar11;
        }
        if ((((longlong)uVar17 < 0) || (iVar18 < 0)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0xce6,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (int)uVar19;
        if ((((int)local_70 <= iVar11) || ((int)local_70 <= iVar18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0xce7,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (iVar11 != iVar18) {
          uVar1 = *(undefined4 *)(local_78.Data + uVar17 * 4);
          *(undefined4 *)(local_78.Data + uVar17 * 4) =
               *(undefined4 *)(local_78.Data + (longlong)iVar18 * 4);
          *(undefined4 *)(local_78.Data + (longlong)iVar18 * 4) = uVar1;
        }
        uVar19 = (ulonglong)(iVar11 + 1U);
        uVar17 = uVar17 + 1;
      } while ((int)(iVar11 + 1U) < iVar6);
    }
    uVar19 = uVar16;
    if (0 < iVar8) {
      do {
        uVar14 = (uint)uVar16;
        uVar9 = 0;
        if ((int)uVar14 < (int)local_70) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ::FString::PrintfImpl(local_58,L"Npcmake %d %d");
        FDS_ChatService::SendChatMessage(None,local_58);
        if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
        }
        uVar16 = (ulonglong)(uVar14 + 1);
        uVar19 = uVar19 + 1;
      } while ((longlong)uVar19 < (longlong)iVar8);
    }
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// Command_RefreshAnimInstance @ 14c274850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_RefreshAnimInstance
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FDS_EntityBase *pFVar5;
  USkeletalMeshComponent *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  wchar_t *_Str;
  FWeakObjectPtr local_res10;
  ulong64 local_res20;
  
  if (param_1->ArrayNum < 1) {
LAB_14c27487a:
    local_res20 = FDS_EntityBase::GetMainPlayerEntityID(true);
  }
  else {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar2;
    }
    local_res20 = _wtoi64(_Str);
    if (local_res20 == 0) goto LAB_14c27487a;
  }
  pFVar5 = FDS_EntityBase::GetEntityBase(&local_res20);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    return;
  }
  (**(code **)(pFVar5->_padding_ + 0x80))(pFVar5);
  bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res10,
                     (void *)0x0);
  if (bVar4) {
    return;
  }
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res10);
  pUVar7 = USkeletalMeshComponent::GetAnimClass(pUVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res10);
  USkeletalMeshComponent::SetAnimationMode(pUVar6,AnimationBlueprint,true);
  pUVar8 = FWeakObjectPtr::Get(&local_res10);
  (**(code **)(*(longlong *)pUVar8 + 0xc70))(pUVar8,0);
  pUVar8 = FWeakObjectPtr::Get(&local_res10);
  pcVar3 = *(code **)(*(longlong *)pUVar8 + 0xc70);
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar9 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar1 = (int)pUVar9->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14c274978;
  }
  pUVar7 = (UClass *)0x0;
LAB_14c274978:
  (*pcVar3)(pUVar8,pUVar7);
  return;
}

// Command_SetCoiParamInt @ 14c2749a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_SetCoiParamInt
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  ADS_MainCharacter *this_00;
  longlong lVar5;
  FWeakObjectPtr local_res20;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  FString local_28;
  
  ADS_MainCharacter::GetMainPlayer();
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if ((bVar4) && (param_1->ArrayNum == 2)) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = *(int *)(pFVar1 + 8);
    lVar5 = (longlong)local_38.Data.ArrayNum;
    pvVar2 = *(void **)pFVar1;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pvVar2,lVar5 * 2);
    }
    if (param_1->ArrayNum < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = *(int *)(pFVar1 + 0x18);
    lVar5 = (longlong)local_40;
    pvVar2 = *(void **)(pFVar1 + 0x10);
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,pvVar2,lVar5 * 2);
    }
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res20);
    _Src.Data = local_48.Data;
    lVar5 = (longlong)local_40;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = local_40;
    if (local_40 == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,(ForAnyElementType *)&local_28,local_40,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
    }
    ADS_MainCharacter::SetCoiParamInt(this_00,&local_38,&local_28,true);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Command_SetRotationMain @ 14c274b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_SetRotationMain
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_EntityBase *pFVar4;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *this_00;
  FWeakObjectPtr *this_01;
  UObject *pUVar5;
  wchar_t *_Str;
  double dVar6;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  undefined8 local_160;
  double local_158;
  undefined8 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1->ArrayNum < 1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_CommandLibrary::Command_SetRotationMain",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x7f3,L"InArgs is invalid.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    dVar6 = _wtof(_Str);
    pFVar4 = GetMainPlayerEntity(this,param_2);
    if (pFVar4 != (FDS_EntityBase *)0x0) {
      this_00 = (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                (**(code **)(pFVar4->_padding_ + 0x78))(pFVar4);
      bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      if (!bVar2) {
        this_01 = (FWeakObjectPtr *)(**(code **)(pFVar4->_padding_ + 0x78))(pFVar4,local_168);
        pUVar5 = FWeakObjectPtr::Get(this_01);
        local_158 = (double)(float)dVar6;
        local_160 = 0;
        local_150 = 0;
        (**(code **)(*(longlong *)pUVar5 + 0x370))(pUVar5,&local_160);
      }
    }
  }
  return;
}

// Command_SetSkyTime @ 14c274d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_SetSkyTime
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UWN_UDS_Subsystem *this_00;
  wchar_t *_Str;
  double dVar7;
  double local_res10 [3];
  
  if (param_1->ArrayNum == 0) {
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar2 + 8) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)pFVar2;
  }
  dVar7 = _wtof(_Str);
  dVar7 = (double)(float)dVar7;
  local_res10[0] = __real_bff0000000000000;
  if (dVar7 != __real_bff0000000000000) {
    if (__real_40a2c00000000000 <= dVar7) {
      dVar7 = __real_40a2c00000000000;
    }
    local_res10[0] = dVar7;
    if (dVar7 <= 0.0) {
      local_res10[0] = 0.0;
    }
  }
  if (param_2 == (UWorld *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UWN_UDS_Subsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_14c274de9;
  }
  else if (pUVar5 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14c274de9:
    pUVar6 = Z_Construct_UClass_UWN_UDS_Subsystem_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_14c274e19;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14c274e19:
  this_00 = (UWN_UDS_Subsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&param_2->SubsystemCollection,pUVar5);
  if (this_00 != (UWN_UDS_Subsystem *)0x0) {
    UWN_UDS_Subsystem::SetForceTimeOfDay(this_00,local_res10);
  }
  return;
}

// Command_ShowConstructionMode @ 14c274e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowConstructionMode
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_ConstructionManager *this_00;
  wchar_t *_Str;
  wchar_t *_Str_00;
  bool local_res20 [8];
  int local_18 [4];
  
  this_00 = UDS_ConstructionManager::GetInst();
  if ((this_00 != (UDS_ConstructionManager *)0x0) && (0 < param_1->ArrayNum)) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    _Str_00 = L"";
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar2 = _wtoi(_Str);
    local_res20[0] = iVar2 != 0;
    local_18[0] = 0;
    if (1 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 0x18) != 0) {
        _Str_00 = *(wchar_t **)(pFVar1 + 0x10);
      }
      local_18[0] = _wtoi(_Str_00);
    }
    UDS_ConstructionManager::SetConstructionMode(this_00,local_res20,local_18);
  }
  return;
}

// Command_ShowCrossHairDebug @ 14c274ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowCrossHairDebug
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res20;
  
  UDS_CheatData::GetInst();
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    cVar1 = pUVar4[7].field_0x8;
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    pUVar4[7].field_0x8 = cVar1 == '\0';
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830765555446184750>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DS_ConsoleCommander\\Source\\DS_ConsoleCommander\\Private\\DS_CommandLibrary.cpp"
                       ,0x4d2,"cheatData.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Command_ShowEntityCollision @ 14c274f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowEntityCollision
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar7;
  FWeakObjectPtr *pFVar8;
  USceneComponent *pUVar9;
  int iVar10;
  wchar_t *_Str;
  FWeakObjectPtr *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 local_res10 [16];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  UObject *local_68 [2];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_58;
  FWeakObjectPtr *local_48 [2];
  ulonglong uVar14;
  
  IsShowEntityCollision = !IsShowEntityCollision;
  uVar12 = 0;
  uVar5 = 0;
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    uVar5 = _wtoi(_Str);
  }
  if (IsShowEntityCollision == false) {
    uVar5 = 0;
  }
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    UDS_EntityManager::GetAllEntityList(this_00,&local_58);
    uVar14 = uVar12;
    if (0 < local_58.ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar6 = 0;
        if ((int)uVar13 < local_58.ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar2 = *(UObject **)(local_58.AllocatorInstance.Data + uVar12);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_68[0] = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_68);
        pFVar7 = FDS_EntityBase::GetEntityBaseFromActor
                           ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res20);
        if (pFVar7 != (FDS_EntityBase *)0x0) {
          if (uVar5 < 2) {
            pFVar8 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x160))(pFVar7);
            local_78 = *pFVar8;
            bVar4 = TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UShapeComponent,FWeakObjectPtr> *)&local_78,
                               (void *)0x0);
            if (!bVar4) {
              pUVar9 = (USceneComponent *)FWeakObjectPtr::Get(&local_78);
              USceneComponent::SetHiddenInGame(pUVar9,IsShowEntityCollision == false,DirtyOnly);
            }
            if (uVar5 != 0) goto LAB_14c275130;
          }
          else {
LAB_14c275130:
            if (uVar5 != 2) goto LAB_14c2751b5;
          }
          (**(code **)(pFVar7->_padding_ + 0x168))(pFVar7,local_48);
          iVar10 = (int)local_48[1];
          pFVar8 = local_48[0] + iVar10;
          pFVar11 = local_48[0];
          while( true ) {
            if ((int)local_48[1] != iVar10) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res10);
            }
            if (pFVar11 == pFVar8) break;
            local_70 = *pFVar11;
            bVar4 = FWeakObjectPtr::IsValid(&local_70);
            if (bVar4) {
              pUVar9 = (USceneComponent *)FWeakObjectPtr::Get(&local_70);
              USceneComponent::SetHiddenInGame(pUVar9,IsShowEntityCollision == false,DirtyOnly);
            }
            pFVar11 = pFVar11 + 1;
          }
          if (local_48[0] != (FWeakObjectPtr *)0x0) {
            FMemory::Free(local_48[0]);
          }
        }
LAB_14c2751b5:
        uVar12 = uVar12 + 8;
        uVar14 = (ulonglong)(uVar13 + 1);
      } while ((int)(uVar13 + 1) < local_58.ArrayNum);
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return;
}

// Command_ShowFloorLineTrace @ 14c275210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowFloorLineTrace
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_GameInstance *pUVar3;
  wchar_t *_Str;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pUVar3 = UDS_GameInstance::GetInst();
  if (pUVar3 != (UDS_GameInstance *)0x0) {
    _Str = L"";
    if (param_1->ArrayNum < 1) {
      IsShowFloorLineTrace = IsShowFloorLineTrace == false;
    }
    else {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        iVar2 = _wtoi(L"");
        IsShowFloorLineTrace = iVar2 != 0;
      }
      else {
        iVar2 = _wtoi(*(wchar_t **)pFVar1);
        IsShowFloorLineTrace = iVar2 != 0;
      }
    }
    if (IsShowFloorLineTrace) {
      local_18.Data = (FScriptContainerElement *)0x0;
      local_10 = 0;
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_18,(int *)((longlong)&local_10 + 4));
      local_10 = CONCAT44(local_10._4_4_,iVar2 + 1);
      ::FString::FString((FString *)(local_18.Data + (longlong)iVar2 * 0x10),L"1");
      if ((int)local_10 < 1) {
        IsShowSyncDebug = IsShowSyncDebug == false;
      }
      else {
        if (*(int *)(local_18.Data + 8) != 0) {
          _Str = *(wchar_t **)local_18.Data;
        }
        iVar2 = _wtoi(_Str);
        IsShowSyncDebug = iVar2 != 0;
      }
      UDS_GameInstance::SetShowSyncDebug(IsShowSyncDebug);
      DestructItems<FString,int>((FString *)local_18.Data,(int)local_10);
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
    }
    pUVar3->ShowFloorLineTrace = IsShowFloorLineTrace;
  }
  return;
}

// Command_ShowGameTime @ 14c275340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowGameTime
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  bool bVar1;
  UDS_GameInstance *pUVar2;
  
  pUVar2 = UDS_GameInstance::GetInst();
  if (pUVar2 != (UDS_GameInstance *)0x0) {
    bVar1 = UDS_GameInstance::IsShowGameTime();
    UDS_GameInstance::SetShowGameTime(!bVar1);
    return;
  }
  return;
}

// Command_ShowLevelTrigger @ 14c275370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowLevelTrigger
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  UDS_GameInstance *pUVar1;
  
  pUVar1 = UDS_GameInstance::GetInst();
  if (pUVar1 != (UDS_GameInstance *)0x0) {
    pUVar1->bLevelTriggerDebug = pUVar1->bLevelTriggerDebug == false;
  }
  return;
}

// Command_ShowMultiHitCollision @ 14c2753a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowMultiHitCollision
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar6;
  wchar_t *_Str;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  FWeakObjectPtr local_38;
  UObject *local_30;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_28;
  
  if ((0 < param_1->ArrayNum) &&
     (this_00 = UDS_EntityManager::GetInst(), this_00 != (UDS_EntityManager *)0x0)) {
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar5 = _wtoi(_Str);
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res10[0] = iVar5 != 0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    UDS_EntityManager::GetAllEntityList(this_00,&local_28);
    iVar5 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar7.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar5) {
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar7.Data == pFVar1) break;
      pUVar2 = *(UObject **)FVar7.Data;
      if (pUVar2 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_38.ObjectIndex = 0;
        local_38.ObjectSerialNumber = 0;
        local_30 = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_30);
        pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                           ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_38);
        if (pFVar6 != (FDS_EntityBase *)0x0) {
          (**(code **)(pFVar6->_padding_ + 0x100))(pFVar6,local_res10);
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// Command_ShowNameDebug @ 14c275520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowNameDebug
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_GameInstance *pUVar3;
  
  if (param_1->ArrayNum < 1) {
    IsShowNameDebug = !IsShowNameDebug;
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      iVar2 = _wtoi(L"");
      IsShowNameDebug = iVar2 != 0;
    }
    else {
      iVar2 = _wtoi(*(wchar_t **)pFVar1);
      IsShowNameDebug = iVar2 != 0;
    }
  }
  pUVar3 = UDS_GameInstance::GetInst();
  if (pUVar3 != (UDS_GameInstance *)0x0) {
    UDS_GameInstance::SetNameTagDebug(IsShowNameDebug);
    return;
  }
  return;
}

// Command_ShowNameTag @ 14c275590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowNameTag
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  size_t sVar6;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar7;
  USceneComponent *this_01;
  longlong lVar8;
  ForAnyElementType _Str;
  ulonglong uVar9;
  uint uVar10;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_50;
  FString local_40;
  FString local_30;
  ulonglong uVar11;
  
  if (param_1->ArrayNum == 0) {
    return;
  }
  uVar9 = 0;
  if ((param_1->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = *(int *)(pFVar1 + 8);
  lVar8 = (longlong)local_40.Data.ArrayNum;
  _Src = *(void **)pFVar1;
  if (local_40.Data.ArrayNum == 0) {
    local_40.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40.Data.ArrayNum,0,(ForAnyElementType *)&local_40,local_40.Data.ArrayNum,
               &local_40.Data.ArrayMax);
    memcpy(local_40.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  ::FString::FString(&local_30,"0");
  if (local_30.Data.ArrayNum == 0) {
    _Str.Data = (FScriptContainerElement *)L"";
  }
  else {
    _Str.Data = local_30.Data.AllocatorInstance.Data;
    if (local_30.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14c2756a4;
  }
  sVar6 = wcslen((wchar_t *)_Str.Data);
  ::FString::Find(&local_40,(wchar_t *)_Str.Data,(int)sVar6,IgnoreCase,FromStart,-1);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
LAB_14c2756a4:
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    UDS_EntityManager::GetAllEntityList(this_00,&local_50);
    uVar11 = uVar9;
    if (0 < local_50.ArrayNum) {
      do {
        uVar10 = (uint)uVar11;
        uVar5 = 0;
        if ((int)uVar10 < local_50.ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar2 = *(UObject **)(local_50.AllocatorInstance.Data + uVar9);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_58 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_58);
        pFVar7 = FDS_EntityBase::GetEntityBaseFromActor
                           ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
        if (pFVar7 != (FDS_EntityBase *)0x0) {
          (**(code **)(pFVar7->_padding_ + 0x170))(pFVar7);
          bVar4 = TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr> *)&local_res20,
                             (void *)0x0);
          if (!bVar4) {
            this_01 = (USceneComponent *)FWeakObjectPtr::Get(&local_res20);
            USceneComponent::SetVisibility(this_01,(bool)(~this_01->bVisible & 1),Propagate);
          }
        }
        uVar9 = uVar9 + 8;
        uVar11 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < local_50.ArrayNum);
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return;
}

// Command_ShowPingPongLog @ 14c275820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowPingPongLog
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_GameInstance *pUVar3;
  UDS_NetworkManager *pUVar4;
  wchar_t *_Str;
  
  pUVar3 = UDS_GameInstance::GetInst();
  if ((pUVar3 != (UDS_GameInstance *)0x0) && (0 < param_1->ArrayNum)) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar2 = _wtoi(_Str);
    pUVar4 = UDS_NetworkManager::GetInst();
    if (pUVar4 != (UDS_NetworkManager *)0x0) {
      pUVar4->bShowPingPongLog = iVar2 != 0;
    }
  }
  return;
}

// Command_ShowSyncDebug @ 14c275880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowSyncDebug
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if (param_1->ArrayNum < 1) {
    IsShowSyncDebug = !IsShowSyncDebug;
    UDS_GameInstance::SetShowSyncDebug(IsShowSyncDebug);
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) != 0) {
    iVar2 = _wtoi(*(wchar_t **)pFVar1);
    IsShowSyncDebug = iVar2 != 0;
    UDS_GameInstance::SetShowSyncDebug(IsShowSyncDebug);
    return;
  }
  iVar2 = _wtoi(L"");
  IsShowSyncDebug = iVar2 != 0;
  UDS_GameInstance::SetShowSyncDebug(IsShowSyncDebug);
  return;
}

// Command_ShowSyncLog @ 14c2758f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowSyncLog
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) != 0) {
      iVar2 = _wtoi(*(wchar_t **)pFVar1);
      UDS_LogManager::IsEnable_SyncLog = iVar2 != 0;
      return;
    }
    iVar2 = _wtoi(L"");
    UDS_LogManager::IsEnable_SyncLog = iVar2 != 0;
  }
  return;
}

// Command_ShowWaterVolume @ 14c275940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_ShowWaterVolume
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  longlong lVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158;
  FName local_150;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_158);
    lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x510))(pUVar2);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x304) & 1) != 0)) {
      local_150 = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(&local_150,&local_148);
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_CommandLibrary::Command_ShowWaterVolume",0x2b,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x84d,L"WaterVolume UniqueID : %s");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Command_SkillCancel @ 14c275aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_SkillCancel
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  ulong64 uVar6;
  FDS_EntityBase *this_00;
  wchar_t *_Str;
  wchar_t *_Str_00;
  undefined1 auStackY_178 [32];
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1->ArrayNum < 2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_CommandLibrary::Command_SkillCancel",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x7ce,L"InArgs is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    _Str_00 = L"";
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    uVar6 = _wtoi64(_Str);
    if (param_1->ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 0x18) != 0) {
      _Str_00 = *(wchar_t **)(pFVar1 + 0x10);
    }
    iVar4 = _wtoi(_Str_00);
    local_148[0] = uVar6;
    this_00 = FDS_EntityBase::GetEntityBase(local_148);
    if (this_00 != (FDS_EntityBase *)0x0) {
      FDS_EntityBase::DeActivateSkillAbility(this_00,iVar4,Cancel);
    }
  }
  return;
}

// Command_SpawnTransportEntity @ 14c275c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_SpawnTransportEntity
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_EntityManager *this_00;
  wchar_t *_Str;
  wchar_t *pwVar5;
  
  if ((1 < param_1->ArrayNum) &&
     (this_00 = UDS_EntityManager::GetInst(), this_00 != (UDS_EntityManager *)0x0)) {
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    pwVar5 = L"";
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar4 = _wtoi(_Str);
    if ((param_1->ArrayNum < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 0x18) != 0) {
      pwVar5 = *(wchar_t **)(pFVar1 + 0x10);
    }
    bVar3 = FToBoolHelper::FromCStringWide(pwVar5);
    if (!bVar3) {
      bVar3 = false;
    }
    UDS_EntityManager::SpawnDummyTransport(this_00,bVar3,40000,iVar4);
  }
  return;
}

// Command_SyncDebugAll @ 14c275d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_SyncDebugAll
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_EntityManager *this_00;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *_Str;
  bool bVar5;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  _Str = L"";
  if (param_1->ArrayNum < 2) {
    bVar5 = !IsSyncDebugAll;
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      iVar2 = _wtoi(L"");
      bVar5 = iVar2 != 0;
    }
    else {
      iVar2 = _wtoi(*(wchar_t **)pFVar1);
      bVar5 = iVar2 != 0;
    }
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  IsSyncDebugAll = bVar5;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_28,(int *)((longlong)&local_20 + 4));
  pwVar4 = L"0";
  pwVar3 = L"0";
  if (bVar5 != false) {
    pwVar3 = L"1";
  }
  local_20 = CONCAT44(local_20._4_4_,iVar2 + 1);
  ::FString::FString((FString *)(local_28.Data + (longlong)iVar2 * 0x10),pwVar3);
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    if ((int)local_20 < 1) {
      IsShowDummyPlayer = IsShowDummyPlayer == false;
    }
    else if (*(int *)(local_28.Data + 8) == 0) {
      iVar2 = _wtoi(L"");
      IsShowDummyPlayer = iVar2 != 0;
    }
    else {
      iVar2 = _wtoi(*(wchar_t **)local_28.Data);
      IsShowDummyPlayer = iVar2 != 0;
    }
    UDS_EntityManager::SpawnDummyNetCharacter(this_00,IsShowDummyPlayer,20000);
  }
  DestructItems<FString,int>((FString *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  bVar5 = IsSyncDebugAll;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_28,(int *)((longlong)&local_20 + 4));
  if (bVar5 != false) {
    pwVar4 = L"1";
  }
  local_20 = CONCAT44(local_20._4_4_,iVar2 + 1);
  ::FString::FString((FString *)(local_28.Data + (longlong)iVar2 * 0x10),pwVar4);
  if ((int)local_20 < 1) {
    IsShowSyncDebug = IsShowSyncDebug == false;
  }
  else {
    if (*(int *)(local_28.Data + 8) != 0) {
      _Str = *(wchar_t **)local_28.Data;
    }
    iVar2 = _wtoi(_Str);
    IsShowSyncDebug = iVar2 != 0;
  }
  UDS_GameInstance::SetShowSyncDebug(IsShowSyncDebug);
  DestructItems<FString,int>((FString *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// Command_SyncDebugAllOnlyNetPlayer @ 14c275f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_SyncDebugAllOnlyNetPlayer
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  if (0 < param_1->ArrayNum) {
    Command_HideMainPlayer(this,param_1,param_2);
    Command_SyncDebugAll(this,param_1,param_2);
  }
  return;
}

// Command_Tag @ 14c275f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_Tag
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  FName *pFVar5;
  UWN_AbilitySystemComponent *pUVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_res10 [2];
  FName local_res20;
  FName local_18 [2];
  
  if (param_1->ArrayNum == 1) {
    pFVar4 = GetMainPlayerEntity(this,param_2);
    if (pFVar4 != (FDS_EntityBase *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x178))(pFVar4,local_res10);
      bVar3 = FWeakObjectPtr::IsValid(local_res10);
      if (bVar3) {
        if (param_1->ArrayNum < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + 8) == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = *(wchar_t **)pFVar1;
        }
        pFVar5 = ::FName::FName(local_18,pwVar7);
        FGameplayTag::RequestGameplayTag(&local_res20,SUB81(pFVar5,0));
        pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(local_res10);
        bVar3 = UWN_AbilitySystemComponent::HasTag(pUVar6,(FGameplayTag *)&local_res20);
        if (bVar3) {
          pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(local_res10);
          UWN_AbilitySystemComponent::RemoveTag(pUVar6,(FGameplayTag *)&local_res20,-1);
          return;
        }
        pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(local_res10);
        UWN_AbilitySystemComponent::AddTag(pUVar6,(FGameplayTag *)&local_res20,1);
      }
    }
  }
  return;
}

// Command_TeleportMainPlayer @ 14c2760a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_TeleportMainPlayer
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_IngameState *this_00;
  undefined1 auStackY_1a8 [32];
  uint uVar3;
  wchar_t *pwVar4;
  FWeakObjectPtr local_168;
  TVector<double>_u_0 local_160;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_IngameState::GetInst();
  bVar1 = TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> *)&local_168,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_CommandLibrary::Command_TeleportMainPlayer",0x2e,Yes);
    pwVar4 = L"ingameState is nullptr.";
    uVar3 = 0x7a5;
  }
  else {
    if (0 < param_1->ArrayNum) {
      local_160._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_160._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_160._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      UE::Math::TVector<double>::InitFromString
                ((TVector<double> *)&local_160._s_0,(FString *)(param_1->AllocatorInstance).Data);
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        ::FString::PrintfImpl(&local_148,L"X=%3.3f Y=%3.3f Z=%3.3f");
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_CommandLibrary::Command_TeleportMainPlayer",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x7b1,L"Request teleport. (%s)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      this_00 = (UDS_IngameState *)FWeakObjectPtr::Get(&local_168);
      UDS_IngameState::TeleportMainPlayer(this_00,(TVector<double> *)&local_160._s_0);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_CommandLibrary::Command_TeleportMainPlayer",0x2e,Yes);
    pwVar4 = L"InArgs is invalid.";
    uVar3 = 0x7ab;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// Command_TestSkillMove @ 14c276300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_TestSkillMove
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_GameInstance *pUVar5;
  wchar_t *_Str;
  
  if (0 < param_1->ArrayNum) {
    pUVar5 = UDS_GameInstance::GetInst();
    if (pUVar5 != (UDS_GameInstance *)0x0) {
      if (param_1->ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)pFVar1;
      }
      iVar4 = _wtoi(_Str);
      UDS_GameInstance::SetTestSkillMove(iVar4 != 0);
      return;
    }
  }
  return;
}

// Command_TransportMoveTo @ 14c276390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_TransportMoveTo
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  wchar_t *_Str;
  wchar_t *_Str_00;
  float fVar5;
  undefined1 auStackY_1d8 [32];
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_1->ArrayNum < 1) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_CommandLibrary::Command_TransportMoveTo",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x548,L"InArgs is invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    UE::Math::TVector<double>::InitFromString
              ((TVector<double> *)&local_198._s_0,(FString *)(param_1->AllocatorInstance).Data);
    pUVar4 = UDS_LogManager::GetInst();
    iVar3 = 0;
    _Str_00 = L"";
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl((FString *)&local_178._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_CommandLibrary::Command_TransportMoveTo",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,0x54e,L"Request Transport Warp. (%s)")
      ;
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if ((void *)local_178._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_178._s_0.X);
      }
    }
    fVar5 = __real_43960000;
    if (1 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 0x18) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(pFVar1 + 0x10);
      }
      iVar2 = _wtoi(_Str);
      fVar5 = (float)iVar2;
    }
    if (2 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 0x28) != 0) {
        _Str_00 = *(wchar_t **)(pFVar1 + 0x20);
      }
      iVar3 = _wtoi(_Str_00);
    }
    local_178._s_0.X = local_198._s_0.X;
    local_178._s_0.Y = local_198._s_0.Y;
    local_178._s_0.Z = local_198._s_0.Z;
    FDS_TransportService::DebugTransportMoveTo((TVector<double> *)&local_178._s_0,40000,fVar5,iVar3)
    ;
  }
  return;
}

// Command_TransportWarp @ 14c276610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_TransportWarp
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_1b8 [32];
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (param_1->ArrayNum < 1) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_CommandLibrary::Command_TransportWarp",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x538,L"InArgs is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_178._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_178._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_178._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    UE::Math::TVector<double>::InitFromString
              ((TVector<double> *)&local_178._s_0,(FString *)(param_1->AllocatorInstance).Data);
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl((FString *)&local_158._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_CommandLibrary::Command_TransportWarp",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x53e,L"Request Transport Warp. (%s)")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((void *)local_158._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_158._s_0.X);
      }
    }
    local_158._s_0.X = local_178._s_0.X;
    local_158._s_0.Y = local_178._s_0.Y;
    local_158._s_0.Z = local_178._s_0.Z;
    FDS_TransportService::DebugTransportWarp((TVector<double> *)&local_158._s_0,40000);
  }
  return;
}

// Command_TriggerCoreDebug @ 14c276820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_TriggerCoreDebug
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  bool bVar1;
  UDS_GameInstance *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar2 = UDS_GameInstance::GetInst();
  if ((pUVar2 != (UDS_GameInstance *)0x0) &&
     (bVar1 = pUVar2->IsTriggerCoreDebug, pUVar2->IsTriggerCoreDebug = bVar1 == false,
     bVar1 == false)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_CommandLibrary::Command_TriggerCoreDebug",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,3,Display,local_138.Ptr,0x76d,L"EDS_TriggerType::NameTag - Color::White");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_CommandLibrary::Command_TriggerCoreDebug",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,3,Display,local_138.Ptr,0x76e,L"EDS_TriggerType::Interaction - Color::Black"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_CommandLibrary::Command_TriggerCoreDebug",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,3,Display,local_138.Ptr,0x76f,L"EDS_TriggerType::Activation - Color::Red");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_CommandLibrary::Command_TriggerCoreDebug",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,3,Display,local_138.Ptr,0x770,L"EDS_TriggerType::BubbleTalk - Color::Green")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_CommandLibrary::Command_TriggerCoreDebug",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,3,Display,local_138.Ptr,0x771,L"EDS_TriggerType::FunctionIcon - Color::Blue"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// Command_UIMessage @ 14c276b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_UIMessage
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  wchar_t *_Str;
  undefined1 auStackY_1f8 [32];
  int local_1b8;
  int local_1b4;
  ForAnyElementType local_1b0;
  int local_1a8;
  int local_1a4 [3];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_198;
  undefined1 local_188 [8];
  int *local_180;
  int *local_178;
  int *local_170;
  int *local_168;
  undefined1 local_158 [32];
  void *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 local_124;
  void *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (1 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    _Str = L"";
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar1;
    }
    lVar6 = _wtoi64(pwVar8);
    if ((param_1->ArrayNum < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 0x18) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(pFVar1 + 0x10);
    }
    iVar4 = _wtoi(pwVar8);
    uVar10 = 0;
    local_1b8 = 0;
    local_1b4 = 0;
    if (2 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 0x28) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)(pFVar1 + 0x20);
      }
      local_1b8 = _wtoi(pwVar8);
    }
    if (3 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 0x38) != 0) {
        _Str = *(wchar_t **)(pFVar1 + 0x30);
      }
      local_1b4 = _wtoi(_Str);
    }
    if (iVar4 == 0x38271) {
      UDS_UIMessageManager::OpenMsgByContentId(lVar6,ContentsOpen_None_01);
    }
    else {
      local_108 = ___xmm_0000012d000000c90000006500000000;
      uStack_100 = _UNK_15286f7e8;
      local_f8 = ___xmm_000002bd00000259000001f500000191;
      uStack_f0 = _UNK_15286f7f8;
      local_e8 = ___xmm_0000044d000003e90000038500000321;
      uStack_e0 = _UNK_15286f808;
      local_d8 = ___xmm_000027120000271100000515000004b1;
      uStack_d0 = _UNK_15286f818;
      local_c8 = ___xmm_00002716000027150000271400002713;
      uStack_c0 = _UNK_15286f828;
      local_b8 = ___xmm_00002777000027760000277500002717;
      uStack_b0 = _UNK_15286f838;
      local_a8 = ___xmm_0000277b0000277a0000277900002778;
      uStack_a0 = _UNK_15286f848;
      local_98 = ___xmm_0001adb40001adb30001adb20001adb1;
      uStack_90 = _UNK_15286f858;
      local_88 = ___xmm_0001ae150001adb70001adb60001adb5;
      uStack_80 = _UNK_15286f868;
      local_78 = ___xmm_0001ae190001ae180001ae170001ae16;
      uStack_70 = _UNK_15286f878;
      local_68 = ___xmm_00035b61000334510001ae1b0001ae1a;
      uStack_60 = _UNK_15286f888;
      local_58 = ___xmm_0004e2010004baf10003a98100038271;
      uStack_50 = _UNK_15286f898;
      local_48 = 0x50911;
      uStack_44 = 0x53021;
      local_40 = 0x64191;
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = 0x33;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x33,0,&local_1b0,0x33,local_1a4);
      *(undefined8 *)local_1b0.Data = local_108;
      *(undefined8 *)(local_1b0.Data + 8) = uStack_100;
      *(undefined8 *)(local_1b0.Data + 0x10) = local_f8;
      *(undefined8 *)(local_1b0.Data + 0x18) = uStack_f0;
      *(undefined8 *)(local_1b0.Data + 0x20) = local_e8;
      *(undefined8 *)(local_1b0.Data + 0x28) = uStack_e0;
      *(undefined8 *)(local_1b0.Data + 0x30) = local_d8;
      *(undefined8 *)(local_1b0.Data + 0x38) = uStack_d0;
      *(undefined8 *)(local_1b0.Data + 0x40) = local_c8;
      *(undefined8 *)(local_1b0.Data + 0x48) = uStack_c0;
      *(undefined8 *)(local_1b0.Data + 0x50) = local_b8;
      *(undefined8 *)(local_1b0.Data + 0x58) = uStack_b0;
      *(undefined8 *)(local_1b0.Data + 0x60) = local_a8;
      *(undefined8 *)(local_1b0.Data + 0x68) = uStack_a0;
      *(undefined8 *)(local_1b0.Data + 0x70) = local_98;
      *(undefined8 *)(local_1b0.Data + 0x78) = uStack_90;
      *(undefined8 *)(local_1b0.Data + 0x80) = local_88;
      *(undefined8 *)(local_1b0.Data + 0x88) = uStack_80;
      *(undefined8 *)(local_1b0.Data + 0x90) = local_78;
      *(undefined8 *)(local_1b0.Data + 0x98) = uStack_70;
      *(undefined8 *)(local_1b0.Data + 0xa0) = local_68;
      *(undefined8 *)(local_1b0.Data + 0xa8) = uStack_60;
      *(undefined8 *)(local_1b0.Data + 0xb0) = local_58;
      *(undefined8 *)(local_1b0.Data + 0xb8) = uStack_50;
      *(ulonglong *)(local_1b0.Data + 0xc0) = CONCAT44(uStack_44,local_48);
      *(undefined4 *)(local_1b0.Data + 200) = local_40;
      uVar11 = uVar10;
      iVar7 = local_1a8;
      if (0 < local_1a8) {
        do {
          uVar9 = (uint)uVar10;
          uVar5 = 0;
          if ((int)uVar9 < iVar7) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             iVar7 = local_1a8, bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (iVar4 == *(int *)(local_1b0.Data + uVar11)) {
            local_180 = local_1a4 + 1;
            local_158._0_8_ = (FScriptContainerElement *)0x0;
            local_178 = &local_1b8;
            local_158._8_8_ = 0;
            local_138 = (void *)0x0;
            local_130 = 0;
            local_12c = 0x80;
            local_128 = 0xffffffff;
            local_124 = 0;
            local_118 = (void *)0x0;
            local_110 = 0;
            local_1a4[1] = 4;
            TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<enum_EDS_MessageArgsType_&&,int_&>_>
                      (local_158,(TPairInitializer<EDS_MessageArgsType_&&,int_&> *)local_188,
                       (bool *)&local_180);
            local_170 = local_1a4 + 2;
            local_1a4[2] = 3;
            local_168 = &local_1b4;
            TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<enum_EDS_MessageArgsType_&&,int_&>_>
                      (local_158,(TPairInitializer<EDS_MessageArgsType_&&,int_&> *)(local_188 + 4),
                       (bool *)&local_170);
            local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.ArrayNum = 0;
            local_198.ArrayMax = 0;
            uVar5 = 0;
            if ((int)uVar9 < local_1a8) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            UDS_UIMessageManager::OpenMsgByStringUi
                      (lVar6,*(EDS_MessageDefineType *)(local_1b0.Data + (longlong)(int)uVar9 * 4),
                       &local_198,
                       (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                        *)local_158);
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
            if ((FStringFormatArg *)local_198.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_198.AllocatorInstance.Data);
            }
            local_110 = 0;
            if (local_118 != (void *)0x0) {
              FMemory::Free(local_118);
            }
            iVar4 = SUB84(local_158._8_8_,4);
            local_158._8_8_ = local_158._8_8_ & 0xffffffff00000000;
            if (iVar4 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
            }
            local_128 = 0xffffffff;
            local_124 = 0;
            local_130 = 0;
            if (0x80 < local_12c) {
              local_12c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
            }
            if (local_138 != (void *)0x0) {
              FMemory::Free(local_138);
            }
            if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_158._0_8_);
            }
            break;
          }
          uVar10 = (ulonglong)(uVar9 + 1);
          uVar11 = uVar11 + 4;
        } while ((int)(uVar9 + 1) < iVar7);
      }
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
    }
  }
  return;
}

// Command_UnequipItem @ 14c277020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_UnequipItem
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  return;
}

// Command_UnlimitCameraDistance @ 14c277030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_UnlimitCameraDistance
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ADS_CameraManager *pAVar3;
  
  pAVar3 = ADS_CameraManager::GetInst();
  if (pAVar3 != (ADS_CameraManager *)0x0) {
    if (param_1->ArrayNum == 1) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) != 0) {
        iVar2 = _wtoi(*(wchar_t **)pFVar1);
        pAVar3->UnlimitCameraDist = iVar2 != 0;
        return;
      }
      iVar2 = _wtoi(L"");
      pAVar3->UnlimitCameraDist = iVar2 != 0;
      return;
    }
    pAVar3->UnlimitCameraDist = pAVar3->UnlimitCameraDist == false;
  }
  return;
}

// Command_UpdateCameraData @ 14c2770c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_UpdateCameraData
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  int iVar1;
  bool bVar2;
  APlayerController *pAVar3;
  UClass *pUVar4;
  ADS_CameraManager *this_00;
  APlayerCameraManager *pAVar5;
  FWeakObjectPtr local_res20;
  APlayerCameraManager *local_18 [2];
  
  pAVar3 = UWorld::GetFirstPlayerController(param_2);
  if (pAVar3 == (APlayerController *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(pAVar3->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return;
  }
  if ((pAVar3->PlayerCameraManager).field0_0x0.DebugPtr != (APlayerCameraManager *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&pAVar3->PlayerCameraManager,pUVar4);
    if (bVar2) {
      pAVar5 = (pAVar3->PlayerCameraManager).field0_0x0.DebugPtr;
      goto LAB_14c277132;
    }
  }
  pAVar5 = (APlayerCameraManager *)0x0;
LAB_14c277132:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar5 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_18[0] = pAVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar5 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    this_00 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_res20);
    ADS_CameraManager::RefreshCameraManager(this_00);
  }
  return;
}

// Command_UseClientAbnormal @ 14c2771b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_UseClientAbnormal
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  bool bVar1;
  
  if (param_1->ArrayNum == 1) {
    bVar1 = UDS_GameInstance::IsClientAbnormal();
    UDS_GameInstance::SetClientAbnormal(!bVar1);
    return;
  }
  return;
}

// Command_UseSkillCoolTime @ 14c2771e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDS_CommandLibrary::Command_UseSkillCoolTime
          (FDS_CommandLibrary *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_GameInstance *pUVar5;
  wchar_t *_Str;
  
  if (0 < param_1->ArrayNum) {
    pUVar5 = UDS_GameInstance::GetInst();
    if (pUVar5 != (UDS_GameInstance *)0x0) {
      if (param_1->ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)pFVar1;
      }
      iVar4 = _wtoi(_Str);
      UDS_GameInstance::SetUseSkillCoolTime(iVar4 != 0);
      return;
    }
  }
  return;
}

// CreateConsoleCommands @ 14c277270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FDS_CommandLibrary::CreateConsoleCommands(FDS_CommandLibrary *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  IConsoleManager *pIVar8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  *pTVar9;
  undefined8 in_stack_fffffffffffff498;
  uint uVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b38;
  FDelegateAllocation local_b30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b20;
  FDelegateAllocation local_b18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b08;
  FDelegateAllocation local_b00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_af0;
  FDelegateAllocation local_ae8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_ad8;
  FDelegateAllocation local_ad0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_ac0;
  FDelegateAllocation local_ab8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_aa8;
  FDelegateAllocation local_aa0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a90;
  FDelegateAllocation local_a88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a78;
  FDelegateAllocation local_a70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a60;
  FDelegateAllocation local_a58;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 local_818;
  FDestructionSentinel local_810;
  FDestructionSentinel local_7f8;
  FDestructionSentinel local_7e0;
  FDestructionSentinel local_7c8;
  FDestructionSentinel local_7b0;
  FDestructionSentinel local_798;
  FDestructionSentinel local_780;
  FDestructionSentinel local_768;
  FDestructionSentinel local_750;
  FDestructionSentinel local_738;
  FDestructionSentinel local_720;
  FDelegateAllocation *local_708;
  FDestructionSentinel local_700;
  FDelegateAllocation *local_6e8;
  FDestructionSentinel local_6e0;
  FDelegateAllocation *local_6c8;
  FDestructionSentinel local_6c0;
  FDelegateAllocation *local_6a8;
  FDestructionSentinel local_6a0;
  FDelegateAllocation *local_688;
  FDestructionSentinel local_680;
  FDelegateAllocation *local_668;
  FDestructionSentinel local_660;
  FDelegateAllocation *local_648;
  FDestructionSentinel local_640;
  FDelegateAllocation *local_628;
  FDestructionSentinel local_620;
  FDelegateAllocation *local_608;
  FDestructionSentinel local_600;
  FDelegateAllocation *local_5e8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_5e0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_5c8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_5b0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_598;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_580;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_568;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_550;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_538;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_520;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_508;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_4f0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_4d8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_4c0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_4a8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_490;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_478;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_460;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_448;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_430;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_418;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_400;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_3e8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_3d0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_3b8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_3a0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_388;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_370;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_358;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_340;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_328;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_310;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_2f8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_2e0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_2c8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_2b0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_298;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_280;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_268;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_250;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_238;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_220;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_208;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_1f0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_1d8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_1c0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_1a8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_190;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_178;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_160;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_148;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_130;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_118;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_100;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_e8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_d0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_b8;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_a0;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_88;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_70;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_58;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
  local_40;
  
  uVar10 = (uint)((ulonglong)in_stack_fffffffffffff498 >> 0x20);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pIVar8 = IConsoleManager::Singleton;
  local_b20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b18.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b20,(FWriteAccessScope *)&local_6e0);
  local_6c8 = &local_b18;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_b18);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    puVar5[4] = Command_ApplyAbnormal;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_CommandLibrary____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = this;
    if (this == (FDS_CommandLibrary *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (local_6e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e0.Accessor,&local_6e0);
  }
  puVar5 = (undefined8 *)((ulonglong)uVar10 << 0x20);
  local_8b8 = (*pcVar2)(pIVar8,L"DS.Abnormal",L"AbnormalActionID",&local_b20,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8b8) &&
     ((FScriptContainerElement *)&local_8b8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8b8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b20,(FWriteAccessScope *)&local_810);
  if ((local_b18.DelegateSize != 0) &&
     (local_b18.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b18.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b18,0,0,0x10);
    local_b18.DelegateSize = 0;
  }
  if (local_810.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_810.Accessor,&local_810);
  }
  if (local_b18.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b18.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b20.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pIVar8 = IConsoleManager::Singleton;
  local_b08.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b00.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b00.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b08,(FWriteAccessScope *)&local_700);
  local_6e8 = &local_b00;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_b00);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar6;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_CommandLibrary____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Command_Tag;
    puVar7[3] = this;
  }
  if (local_700.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
  }
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_860 = (*pcVar2)(pIVar8,L"DS.ToggleTag",L"FGameplayTag",&local_b08,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_860) &&
     ((FScriptContainerElement *)&local_860 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_860;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_860;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b08,(FWriteAccessScope *)&local_7f8);
  if ((local_b00.DelegateSize != 0) &&
     (local_b00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b00.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b00,0,0,0x10);
    local_b00.DelegateSize = 0;
  }
  if (local_7f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f8.Accessor,&local_7f8);
  }
  if (local_b00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b00.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b08.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pIVar8 = IConsoleManager::Singleton;
  local_af0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_ae8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_ae8.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_af0,(FWriteAccessScope *)&local_6c0);
  local_6a8 = &local_ae8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_ae8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar6;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_CommandLibrary____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Command_CreateItem;
    puVar7[3] = this;
  }
  if (local_6c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6c0.Accessor,&local_6c0);
  }
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_858 = (*pcVar2)(pIVar8,L"DS.CreateItem",L"ID Num",&local_af0,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_858) &&
     ((FScriptContainerElement *)&local_858 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_858;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_858;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_af0,(FWriteAccessScope *)&local_7e0);
  if ((local_ae8.DelegateSize != 0) &&
     (local_ae8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_ae8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_ae8,0,0,0x10);
    local_ae8.DelegateSize = 0;
  }
  if (local_7e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7e0.Accessor,&local_7e0);
  }
  if (local_ae8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_ae8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_af0.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pIVar8 = IConsoleManager::Singleton;
  local_ad8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_ad0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_ad0.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_ad8,(FWriteAccessScope *)&local_6a0);
  local_688 = &local_ad0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_ad0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar6;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_CommandLibrary____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Command_DestroyItem;
    puVar7[3] = this;
  }
  if (local_6a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a0.Accessor,&local_6a0);
  }
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_850 = (*pcVar2)(pIVar8,L"DS.DestroyItem",L"Index(Inven) Quantity",&local_ad8,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_850) &&
     ((FScriptContainerElement *)&local_850 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_850;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_850;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_ad8,(FWriteAccessScope *)&local_7c8);
  if ((local_ad0.DelegateSize != 0) &&
     (local_ad0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_ad0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_ad0,0,0,0x10);
    local_ad0.DelegateSize = 0;
  }
  if (local_7c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c8.Accessor,&local_7c8);
  }
  if (local_ad0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_ad0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_ad8.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pIVar8 = IConsoleManager::Singleton;
  local_ac0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_ab8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_ab8.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_ac0,(FWriteAccessScope *)&local_680);
  local_668 = &local_ab8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_ab8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar6;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_CommandLibrary____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Command_EquipItem;
    puVar7[3] = this;
  }
  if (local_680.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_680.Accessor,&local_680);
  }
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_848 = (*pcVar2)(pIVar8,L"DS.EquipItem",L"ID",&local_ac0,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_848) &&
     ((FScriptContainerElement *)&local_848 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_848;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_848;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_ac0,(FWriteAccessScope *)&local_7b0);
  if ((local_ab8.DelegateSize != 0) &&
     (local_ab8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_ab8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_ab8,0,0,0x10);
    local_ab8.DelegateSize = 0;
  }
  if (local_7b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
  }
  if (local_ab8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_ab8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_ac0.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pIVar8 = IConsoleManager::Singleton;
  local_aa8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_aa0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_aa0.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_aa8,(FWriteAccessScope *)&local_660);
  local_648 = &local_aa0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_aa0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar6;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_CommandLibrary____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Command_UnequipItem;
    puVar7[3] = this;
  }
  if (local_660.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_660.Accessor,&local_660);
  }
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_840 = (*pcVar2)(pIVar8,L"DS.UnequipItem",L"ID",&local_aa8,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_840) &&
     ((FScriptContainerElement *)&local_840 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_840;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_840;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_aa8,(FWriteAccessScope *)&local_798);
  if ((local_aa0.DelegateSize != 0) &&
     (local_aa0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_aa0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_aa0,0,0,0x10);
    local_aa0.DelegateSize = 0;
  }
  if (local_798.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_798.Accessor,&local_798);
  }
  if (local_aa0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_aa0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_aa8.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pIVar8 = IConsoleManager::Singleton;
  local_a90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a88.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a90,(FWriteAccessScope *)&local_640);
  local_628 = &local_a88;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_a88);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar6;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_CommandLibrary____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Command_MakeDummyPlayer;
    puVar7[3] = this;
  }
  if (local_640.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_640.Accessor,&local_640);
  }
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_838 = (*pcVar2)(pIVar8,L"DS.MakeDummyPlayer",L"",&local_a90,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_838) &&
     ((FScriptContainerElement *)&local_838 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_838;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_838;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a90,(FWriteAccessScope *)&local_780);
  if ((local_a88.DelegateSize != 0) &&
     (local_a88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a88,0,0,0x10);
    local_a88.DelegateSize = 0;
  }
  if (local_780.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_780.Accessor,&local_780);
  }
  if (local_a88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a90.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pIVar8 = IConsoleManager::Singleton;
  local_a78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a70.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a78,(FWriteAccessScope *)&local_620);
  local_608 = &local_a70;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_a70);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar6;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_CommandLibrary____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Command_Chat;
    puVar7[3] = this;
  }
  if (local_620.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_620.Accessor,&local_620);
  }
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_830 = (*pcVar2)(pIVar8,L"DS.Chat",L"Text",&local_a78,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_830) &&
     ((FScriptContainerElement *)&local_830 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_830;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_830;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a78,(FWriteAccessScope *)&local_768);
  if ((local_a70.DelegateSize != 0) &&
     (local_a70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a70,0,0,0x10);
    local_a70.DelegateSize = 0;
  }
  if (local_768.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_768.Accessor,&local_768);
  }
  if (local_a70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a78.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pIVar8 = IConsoleManager::Singleton;
  local_a60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a58.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a60,(FWriteAccessScope *)&local_600);
  local_5e8 = &local_a58;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_a58);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar6;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_CommandLibrary____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Command_FindPlayerByUID;
    puVar7[3] = this;
  }
  if (local_600.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_600.Accessor,&local_600);
  }
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_828 = (*pcVar2)(pIVar8,L"DS.FindPlayer",L"PlayerUID(int64)",&local_a60,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_828) &&
     ((FScriptContainerElement *)&local_828 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_828;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_828;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a60,(FWriteAccessScope *)&local_750);
  if ((local_a58.DelegateSize != 0) &&
     (local_a58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a58,0,0,0x10);
    local_a58.DelegateSize = 0;
  }
  if (local_750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
  }
  if (local_a58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a60.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pIVar8 = IConsoleManager::Singleton;
  local_b38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b30.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b30.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b38,(FWriteAccessScope *)&local_720);
  local_708 = &local_b30;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_b30);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar6;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_CommandLibrary____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Command_Party;
    puVar7[3] = this;
  }
  if (local_720.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_720.Accessor,&local_720);
  }
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_820 = (*pcVar2)(pIVar8,L"DS.Party",L"Text",&local_b38,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_820) &&
     ((FScriptContainerElement *)&local_820 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_820;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_820;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b38,(FWriteAccessScope *)&local_738);
  if ((local_b30.DelegateSize != 0) &&
     (local_b30.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b30.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b30,0,0,0x10);
    local_b30.DelegateSize = 0;
  }
  if (local_738.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_738.Accessor,&local_738);
  }
  if (local_b30.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b30.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b38.AccessDetector);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_1c0,this,(pmf_3eea43e4)0x14c2713a0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_a48 = (*pcVar2)(pIVar8,L"DS.ToggleShieldRotateCamera",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a48) &&
     ((FScriptContainerElement *)&local_a48 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_a48;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a48;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1c0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_118,this,(pmf_3eea43e4)0x14c275880);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_a40 = (*pcVar2)(pIVar8,L"DS.ShowSyncDebug",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a40) &&
     ((FScriptContainerElement *)&local_a40 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_a40;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a40;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_118);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_e8,this,(pmf_3eea43e4)0x14c2758f0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_a38 = (*pcVar2)(pIVar8,L"DS.ShowSyncLog",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a38) &&
     ((FScriptContainerElement *)&local_a38 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_a38;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a38;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_d0,this,(pmf_3eea43e4)0x14c273700);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_a30 = (*pcVar2)(pIVar8,L"DS.OneEntitySync",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a30) &&
     ((FScriptContainerElement *)&local_a30 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_a30;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a30;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_b8,this,(pmf_3eea43e4)0x14c2771b0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_a28 = (*pcVar2)(pIVar8,L"DS.UseClientAbnormal",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a28) &&
     ((FScriptContainerElement *)&local_a28 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_a28;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a28;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_b8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_a0,this,(pmf_3eea43e4)0x14c271950);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_a20 = (*pcVar2)(pIVar8,L"DS.AutoPlayer",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a20) &&
     ((FScriptContainerElement *)&local_a20 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_a20;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a20;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_88,this,(pmf_3eea43e4)0x14c275340);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_a18 = (*pcVar2)(pIVar8,L"DS.ShowGameTime",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a18) &&
     ((FScriptContainerElement *)&local_a18 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_a18;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a18;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_88);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_70,this,(pmf_3eea43e4)0x14c272370);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_a10 = (*pcVar2)(pIVar8,L"DS.DelayMoveSync",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a10) &&
     ((FScriptContainerElement *)&local_a10 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_a10;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a10;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_70);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_58,this,(pmf_3eea43e4)0x14c2771e0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_a08 = (*pcVar2)(pIVar8,L"DS.UseSkillCoolTime",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a08) &&
     ((FScriptContainerElement *)&local_a08 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_a08;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a08;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_58);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_5e0,this,(pmf_3eea43e4)0x14c276300);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_a00 = (*pcVar2)(pIVar8,L"DS.TestSkillMove",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a00) &&
     ((FScriptContainerElement *)&local_a00 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_a00;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a00;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_5e0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_5c8,this,(pmf_3eea43e4)0x14c274f80);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9f8 = (*pcVar2)(pIVar8,L"DS.ShowEntityCollision",
                        L"CollisionType(All:0, Capsule:1, Collide:2)",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9f8) &&
     ((FScriptContainerElement *)&local_9f8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9f8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_5c8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_5b0,this,(pmf_3eea43e4)0x14c2753a0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9f0 = (*pcVar2)(pIVar8,L"DS.ShowMultiHitCollision",L"0 or 1",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9f0) &&
     ((FScriptContainerElement *)&local_9f0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9f0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9f0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_5b0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_598,this,(pmf_3eea43e4)0x14c275210);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9e8 = (*pcVar2)(pIVar8,L"DS.ShowFloorLineTrace",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9e8) &&
     ((FScriptContainerElement *)&local_9e8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9e8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9e8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_598);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_580,this,(pmf_3eea43e4)0x14c275d50);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9e0 = (*pcVar2)(pIVar8,L"DS.SyncDebugAll",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9e0) &&
     ((FScriptContainerElement *)&local_9e0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9e0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9e0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_580);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_568,this,(pmf_3eea43e4)0x14c274300);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9d8 = (*pcVar2)(pIVar8,L"DS.PrintColliderType",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9d8) &&
     ((FScriptContainerElement *)&local_9d8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9d8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_568);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_550,this,(pmf_3eea43e4)0x14c275520);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9d0 = (*pcVar2)(pIVar8,L"DS.ShowNameDebug",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9d0) &&
     ((FScriptContainerElement *)&local_9d0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9d0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9d0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_550);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_538,this,(pmf_3eea43e4)0x14c274ef0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9c8 = (*pcVar2)(pIVar8,L"DS.ShowCrossHairDebug",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9c8) &&
     ((FScriptContainerElement *)&local_9c8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9c8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_520,this,(pmf_3eea43e4)0x14c2770c0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9c0 = (*pcVar2)(pIVar8,L"DS.UpdateCameraData",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9c0) &&
     ((FScriptContainerElement *)&local_9c0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9c0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9c0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_520);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_508,this,(pmf_3eea43e4)0x14c275590);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9b8 = (*pcVar2)(pIVar8,L"DS.ShowNameTag",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9b8) &&
     ((FScriptContainerElement *)&local_9b8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9b8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9b8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_508);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_4f0,this,(pmf_3eea43e4)0x14c275c30);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9b0 = (*pcVar2)(pIVar8,L"DS.SpawnTransportEntity",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9b0) &&
     ((FScriptContainerElement *)&local_9b0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9b0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9b0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4f0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_4d8,this,(pmf_3eea43e4)0x14c276610);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9a8 = (*pcVar2)(pIVar8,L"DS.TransportWarp",L"FVector",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9a8) &&
     ((FScriptContainerElement *)&local_9a8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9a8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9a8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4d8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_4c0,this,(pmf_3eea43e4)0x14c276390);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_9a0 = (*pcVar2)(pIVar8,L"DS.TransportMoveTo",L"FVector",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_9a0) &&
     ((FScriptContainerElement *)&local_9a0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_9a0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_9a0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4c0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_4a8,this,(pmf_3eea43e4)0x14c272d70);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_998 = (*pcVar2)(pIVar8,L"DS.ForceTransportWarpFail",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_998) &&
     ((FScriptContainerElement *)&local_998 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_998;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_998;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4a8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_490,this,(pmf_3eea43e4)0x14c274d20);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_990 = (*pcVar2)(pIVar8,L"DS.SetSkyTime",L"TimeValue(range: 0–2400; reset with -1)",pTVar9,
                        puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_990) &&
     ((FScriptContainerElement *)&local_990 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_990;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_990;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_490);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_478,this,(pmf_3eea43e4)0x14c275370);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_988 = (*pcVar2)(pIVar8,L"DS.ShowLevelTrigger",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_988) &&
     ((FScriptContainerElement *)&local_988 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_988;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_988;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_478);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_460,this,(pmf_3eea43e4)0x14c272460);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_980 = (*pcVar2)(pIVar8,L"DS.FocusedWidgetDraw",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_980) &&
     ((FScriptContainerElement *)&local_980 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_980;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_980;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_460);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_448,this,(pmf_3eea43e4)0x14c273310);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_978 = (*pcVar2)(pIVar8,L"DS.MotionTrajectoryDebug",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_978) &&
     ((FScriptContainerElement *)&local_978 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_978;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_978;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_448);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_430,this,(pmf_3eea43e4)0x14c272dc0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_970 = (*pcVar2)(pIVar8,L"DS.HideMainPlayer",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_970) &&
     ((FScriptContainerElement *)&local_970 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_970;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_970;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_430);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_418,this,(pmf_3eea43e4)0x14c275f30);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_968 = (*pcVar2)(pIVar8,L"DS.SyncDebugAllOnlyNetPlayer",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_968) &&
     ((FScriptContainerElement *)&local_968 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_968;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_968;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_418);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_400,this,(pmf_3eea43e4)0x14c274500);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_960 = (*pcVar2)(pIVar8,L"DS.RandomBattleNPC",L"{Amount} {IsSearchingType 0 or 1}",pTVar9,
                        puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_960) &&
     ((FScriptContainerElement *)&local_960 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_960;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_960;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_400);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_220,this,(pmf_3eea43e4)0x14c271d20);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_958 = (*pcVar2)(pIVar8,L"DS.CameraMotionBlur",L"0 or 1",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_958) &&
     ((FScriptContainerElement *)&local_958 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_958;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_958;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_220);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_3e8,this,(pmf_3eea43e4)0x14c271be0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_950 = (*pcVar2)(pIVar8,L"DS.CameraDepthOfField",L"{0:None, 1:NPCTalk}",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_950) &&
     ((FScriptContainerElement *)&local_950 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_950;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_950;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3e8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_3d0,this,(pmf_3eea43e4)0x14c276b00);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_948 = (*pcVar2)(pIVar8,L"DS.UIMessage",L"{StringUi} {MessageTypeDefine} {IconID} {TitleID}",
                        pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_948) &&
     ((FScriptContainerElement *)&local_948 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_948;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_948;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3d0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_3b8,this,(pmf_3eea43e4)0x14c272490);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_940 = (*pcVar2)(pIVar8,L"DS.DropItemShow",
                        L"{ItemTID} {Quantity} {Lucky 0 / 1(false / true)} {NaturalHistory 0 / 1(false / true)}"
                        ,pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_940) &&
     ((FScriptContainerElement *)&local_940 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_940;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_940;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3b8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_3a0,this,(pmf_3eea43e4)0x14c271f20);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_938 = (*pcVar2)(pIVar8,L"DS.CameraShake",L"{CameraShakeID}",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_938) &&
     ((FScriptContainerElement *)&local_938 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_938;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_938;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3a0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_388,this,(pmf_3eea43e4)0x14c271ab0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_930 = (*pcVar2)(pIVar8,L"DS.CameraDebug",L"{0 or 1}",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_930) &&
     ((FScriptContainerElement *)&local_930 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_930;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_930;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_388);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_370,this,(pmf_3eea43e4)0x14c271980);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_928 = (*pcVar2)(pIVar8,L"DS.BossCamera",L"{0 or 1}",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_928) &&
     ((FScriptContainerElement *)&local_928 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_928;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_928;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_370);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_358,this,(pmf_3eea43e4)0x14c277030);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_920 = (*pcVar2)(pIVar8,L"DS.UnlimitCam",L"{0 or 1}",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_920) &&
     ((FScriptContainerElement *)&local_920 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_920;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_920;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_358);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_340,this,(pmf_3eea43e4)0x14c273330);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_918 = (*pcVar2)(pIVar8,L"DS.MoveLocation",L"{X} {Y} {Z}",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_918) &&
     ((FScriptContainerElement *)&local_918 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_918;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_918;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_340);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_328,this,(pmf_3eea43e4)0x14c272ea0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_910 = (*pcVar2)(pIVar8,L"DS.MakeCapsuleComponent",L"{X} {Y} {Z}",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_910) &&
     ((FScriptContainerElement *)&local_910 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_910;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_910;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_328);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_310,this,(pmf_3eea43e4)0x14c2723e0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_908 = (*pcVar2)(pIVar8,L"DS.DoNotActionMode",L"0 or 1",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_908) &&
     ((FScriptContainerElement *)&local_908 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_908;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_908;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_310);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_2f8,this,(pmf_3eea43e4)0x14c273750);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_900 = (*pcVar2)(pIVar8,L"DS.OpenHud",L"0 or 1",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_900) &&
     ((FScriptContainerElement *)&local_900 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_900;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_900;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_2e0,this,(pmf_3eea43e4)0x14c2744a0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8f8 = (*pcVar2)(pIVar8,L"DS.QuestSequencePlay",L"ID",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8f8) &&
     ((FScriptContainerElement *)&local_8f8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8f8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2e0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_2c8,this,(pmf_3eea43e4)0x14c276820);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8f0 = (*pcVar2)(pIVar8,L"DS.TriggerCoreDebug",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8f0) &&
     ((FScriptContainerElement *)&local_8f0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8f0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8f0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_2b0,this,(pmf_3eea43e4)0x14c2741f0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8e8 = (*pcVar2)(pIVar8,L"DS.PlayerCollisionBlock",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8e8) &&
     ((FScriptContainerElement *)&local_8e8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8e8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8e8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2b0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_298,this,(pmf_3eea43e4)0x14c274350);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8e0 = (*pcVar2)(pIVar8,L"DS.PrintEntityVisble",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8e0) &&
     ((FScriptContainerElement *)&local_8e0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8e0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8e0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_298);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_280,this,(pmf_3eea43e4)0x14c2760a0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8d8 = (*pcVar2)(pIVar8,L"DS.Teleport",L"FVector",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8d8) &&
     ((FScriptContainerElement *)&local_8d8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8d8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_280);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_268,this,(pmf_3eea43e4)0x14c272b90);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8d0 = (*pcVar2)(pIVar8,L"DS.FixedSkillLocation",L"FVector",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8d0) &&
     ((FScriptContainerElement *)&local_8d0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8d0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8d0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_268);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_250,this,(pmf_3eea43e4)0x14c275aa0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8c8 = (*pcVar2)(pIVar8,L"DS.SkillCancel",L"EntityID SkillID",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8c8) &&
     ((FScriptContainerElement *)&local_8c8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8c8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_250);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_238,this,(pmf_3eea43e4)0x14c2714a0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8c0 = (*pcVar2)(pIVar8,L"DS.AbnormalCancel",L"EntityID AbnormalActionID",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8c0) &&
     ((FScriptContainerElement *)&local_8c0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8c0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8c0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_238);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_40,this,(pmf_3eea43e4)0x14c272c90);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_868 = (*pcVar2)(pIVar8,L"DS.ForceFeedback",L"Duration Intensity",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_868) &&
     ((FScriptContainerElement *)&local_868 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_868;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_868;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_208,this,(pmf_3eea43e4)0x14c272040);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8b0 = (*pcVar2)(pIVar8,L"DS.ChangePlatformWindow",L"0: KeboardMouse, 1: GamePad",pTVar9,
                        puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8b0) &&
     ((FScriptContainerElement *)&local_8b0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8b0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8b0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_208);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_1f0,this,(pmf_3eea43e4)0x14c274b90);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8a8 = (*pcVar2)(pIVar8,L"DS.SetRotationMain",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8a8) &&
     ((FScriptContainerElement *)&local_8a8 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8a8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8a8;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1f0);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_1d8,this,(pmf_3eea43e4)0x14c271640);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_8a0 = (*pcVar2)(pIVar8,L"DS.AddMountFly",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_8a0) &&
     ((FScriptContainerElement *)&local_8a0 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_8a0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_8a0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_100,this,(pmf_3eea43e4)0x14c275940);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_898 = (*pcVar2)(pIVar8,L"DS.ShowWaterVolume",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_898) &&
     ((FScriptContainerElement *)&local_898 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_898;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_898;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_100);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_1a8,this,(pmf_3eea43e4)0x14c275820);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_890 = (*pcVar2)(pIVar8,L"DS.ShowPingPongLog",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_890) &&
     ((FScriptContainerElement *)&local_890 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_890;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_890;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1a8);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_190,this,(pmf_3eea43e4)0x14c274e50);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_888 = (*pcVar2)(pIVar8,L"DS.ShowConstructionMode",L"",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_888) &&
     ((FScriptContainerElement *)&local_888 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_888;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_888;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_190);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_178,this,(pmf_3eea43e4)0x14c274850);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_880 = (*pcVar2)(pIVar8,L"DS.RefreshAnimInstance",L"0: EntityID",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_880) &&
     ((FScriptContainerElement *)&local_880 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_880;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_880;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_160,this,(pmf_3eea43e4)0x14c2720b0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_878 = (*pcVar2)(pIVar8,L"DS.CharacterCollisionBlockDebug",L"0: false, 1: true",pTVar9,puVar5
                       );
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_878) &&
     ((FScriptContainerElement *)&local_878 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_878;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_878;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_160);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_148,this,(pmf_3eea43e4)0x14c2720f0);
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffff00000000);
  local_870 = (*pcVar2)(pIVar8,L"DS.CharIDChange",L"{CharacterBaseID}",pTVar9,puVar5);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_870) &&
     ((FScriptContainerElement *)&local_870 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    puVar5 = &local_870;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_870;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_148);
  IConsoleManager::Get();
  pIVar8 = IConsoleManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar8 + 0x90);
  pTVar9 = TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           ::CreateRaw<FDS_CommandLibrary>(&local_130,this,(pmf_3eea43e4)0x14c2749a0);
  local_818 = (*pcVar2)(pIVar8,L"DS.SetCOIParamInt",L"{Key} {Value}",pTVar9,
                        (ulonglong)puVar5 & 0xffffffff00000000);
  pFVar1 = (this->CommandArray).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_818) &&
     ((FScriptContainerElement *)&local_818 < pFVar1 + (longlong)(this->CommandArray).ArrayMax * 8))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->CommandArray).ArrayNum;
  if (iVar4 == (this->CommandArray).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->CommandArray).ArrayMax);
  }
  (this->CommandArray).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->CommandArray).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_818;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_130);
  return;
}

// DestroyConsoleCommands @ 14c27ce90

void __thiscall FDS_CommandLibrary::DestroyConsoleCommands(FDS_CommandLibrary *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->CommandArray).AllocatorInstance.Data;
  iVar2 = (this->CommandArray).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CommandArray).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    uVar3 = *(undefined8 *)pFVar6;
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar3,1);
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// Get @ 14c27d0f0

FDS_CommandLibrary * __cdecl FDS_CommandLibrary::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FDS_CommandLibrary::Get'::__l2::_dynamic_atexit_destructor_for__sInst__);
      _Init_thread_footer(&::_TSS0);
      return &sInst;
    }
  }
  return &sInst;
}

// GetArgsFromBool @ 14c27d170

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FDS_CommandLibrary::GetArgsFromBool
          (FDS_CommandLibrary *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  pwVar2 = L"0";
  __return_storage_ptr__->ArrayNum = iVar1 + 1;
  if (param_1) {
    pwVar2 = L"1";
  }
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 0x10),
                     pwVar2);
  return __return_storage_ptr__;
}

// GetMainPlayerEntity @ 14c27d240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __thiscall
FDS_CommandLibrary::GetMainPlayerEntity(FDS_CommandLibrary *this,UWorld *param_1)

{
  UObject *pUVar1;
  UDS_GameInstance *pUVar2;
  UWorld *this_00;
  APlayerController *pAVar3;
  FDS_EntityBase *pFVar4;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  if (param_1 != (UWorld *)0x0) {
    pUVar2 = UDS_GameInstance::GetInst();
    if (pUVar2 != (UDS_GameInstance *)0x0) {
      this_00 = UDS_GameInstance::GetGameInstanceWorld();
      if (this_00 != (UWorld *)0x0) {
        pAVar3 = UWorld::GetFirstPlayerController(this_00);
        if (pAVar3 != (APlayerController *)0x0) {
          pUVar1 = (UObject *)pAVar3->_padding_;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar1 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar1);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar1);
            }
          }
          local_res10.ObjectIndex = 0;
          local_res10.ObjectSerialNumber = 0;
          local_res18[0] = pUVar1;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar1);
          }
          FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
          pFVar4 = FDS_EntityBase::GetEntityBaseFromActor
                             ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
          return pFVar4;
        }
      }
    }
  }
  return (FDS_EntityBase *)0x0;
}

