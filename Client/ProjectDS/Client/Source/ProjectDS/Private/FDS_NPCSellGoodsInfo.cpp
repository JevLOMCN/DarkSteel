// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// FDS_NPCSellGoodsInfo @ 14ba909a0

FDS_NPCSellGoodsInfo * __thiscall
FDS_NPCSellGoodsInfo::FDS_NPCSellGoodsInfo
          (FDS_NPCSellGoodsInfo *this,TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> param_1)

{
  undefined8 local_res8;
  
  (this->NPCSellData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ItemData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ItemData).WeakPtr,(FObjectPtr)&local_res8);
  this->SellCount_Tradable = 0;
  this->SellCount_UnTradable = 0;
  this->SellCostValue = 0;
  (this->NPCSellData).WeakPtr = param_1.WeakPtr;
  return this;
}

// AdjustSellCount @ 14ba94b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_NPCSellGoodsInfo::AdjustSellCount(FDS_NPCSellGoodsInfo *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  int *piVar7;
  UDS_ItemData *this_00;
  int iVar8;
  int iVar9;
  undefined1 auStackY_1a8 [32];
  EDS_InventoryType local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar1 = FWeakObjectPtr::IsValid(&(this->ItemData).WeakPtr);
  if (bVar1) {
    local_158[0] = PlayerNormal;
    pUVar6 = FWeakObjectPtr::Get(&(this->ItemData).WeakPtr);
    piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar6[10].field_0x18,1,local_158);
    iVar4 = *piVar7;
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(&(this->ItemData).WeakPtr);
    iVar2 = UDS_ItemData::GetStackCount_UnTradable(this_00,PlayerNormal);
    iVar8 = this->SellCount_UnTradable;
    piVar7 = &this->SellCount_Tradable;
    if (iVar2 < iVar8) {
      *piVar7 = *piVar7 + (iVar8 - iVar2);
    }
    iVar3 = *piVar7;
    iVar9 = iVar3;
    if (iVar3 < 0) {
      iVar9 = 0;
      *piVar7 = 0;
      iVar8 = iVar8 + iVar3;
    }
    if (iVar9 < iVar4) {
      iVar4 = iVar9;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    *piVar7 = iVar3;
    if (iVar8 < iVar2) {
      iVar2 = iVar8;
    }
    iVar4 = 0;
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
    this->SellCount_UnTradable = iVar4;
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_NPCSellGoodsInfo::AdjustSellCount",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Display,local_148.Ptr,0x3b,
                 L"FDS_NPCSellGoodsInfo::AdjustSellCount() - Tradable %d / %d, UnTradable %d / %d");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_NPCSellGoodsInfo::AdjustSellCount",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x24,L"ItemData.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// Reset @ 14bac9530

void __thiscall FDS_NPCSellGoodsInfo::Reset(FDS_NPCSellGoodsInfo *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->NPCSellData).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->ItemData).WeakPtr = local_res8;
  this->SellCount_Tradable = 0;
  this->SellCount_UnTradable = 0;
  this->SellCostValue = 0;
  return;
}

