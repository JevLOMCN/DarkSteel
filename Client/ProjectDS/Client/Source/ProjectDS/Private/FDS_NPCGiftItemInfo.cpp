// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// AdjustCount @ 14bed6ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_NPCGiftItemInfo::AdjustCount(FDS_NPCGiftItemInfo *this)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  int *piVar5;
  UDS_ItemData *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStackY_1b8 [32];
  EDS_InventoryType local_168 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    local_168[0] = PlayerNormal;
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    piVar5 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar4[10].field_0x18,1,local_168);
    iVar6 = *piVar5;
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    iVar2 = UDS_ItemData::GetStackCount_UnTradable(this_00,PlayerNormal);
    iVar7 = this->GiftCount_UnTradable;
    if (iVar2 < iVar7) {
      this->GiftCount_Tradable = this->GiftCount_Tradable + (iVar7 - iVar2);
    }
    iVar8 = this->GiftCount_Tradable;
    if (iVar8 < 0) {
      this->GiftCount_Tradable = 0;
      iVar7 = iVar7 + iVar8;
      iVar8 = 0;
    }
    if (iVar8 < iVar6) {
      iVar6 = iVar8;
    }
    iVar8 = 0;
    if (0 < iVar6) {
      iVar8 = iVar6;
    }
    this->GiftCount_Tradable = iVar8;
    if (iVar7 < iVar2) {
      iVar2 = iVar7;
    }
    iVar6 = 0;
    if (0 < iVar2) {
      iVar6 = iVar2;
    }
    this->GiftCount_UnTradable = iVar6;
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_NPCGiftItemInfo::AdjustCount",0x20,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Display,local_158.Ptr,0x47,
                 L"FDS_NPCSellGoodsInfo::AdjustGiftCount() - Tradable %d / %d,   UnTradable %d / $d"
                );
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_NPCGiftItemInfo::AdjustCount",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x2e,L"ItemData.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    this->GiftCount_Tradable = 0;
    this->GiftCount_UnTradable = 0;
  }
  return;
}

