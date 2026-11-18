// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// FDS_NPCShopGoodsInfo @ 14ba90a10

FDS_NPCShopGoodsInfo * __thiscall
FDS_NPCShopGoodsInfo::FDS_NPCShopGoodsInfo
          (FDS_NPCShopGoodsInfo *this,TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> param_1)

{
  undefined8 local_res8;
  
  (this->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->NextDateTime).Ticks = 0;
  (this->NPCShopData).WeakPtr = param_1.WeakPtr;
  this->ShopListTID = 0;
  this->ShopGroupId = 0;
  this->ListOrder = 0;
  this->ItemTID = 0;
  this->ItemValue = 0;
  this->SelectMaxCnt = 0;
  this->BuyTemplateType = None;
  this->BuyTemplateValue = 0;
  this->BuyPrice = 0;
  this->IsBuyLimitAble = false;
  this->BuyLimitResetTimeId = 0;
  this->BuyLimitCount = 0;
  this->Quantity = 0;
  this->BuyLimitContentsType = None;
  this->BuyLimitContentsValue = 0;
  return this;
}

// GetItemCostID @ 14baabca0

int __thiscall FDS_NPCShopGoodsInfo::GetItemCostID(FDS_NPCShopGoodsInfo *this)

{
  return this->BuyTemplateValue;
}

// GetItemCostIconID @ 14baabcb0

int __thiscall FDS_NPCShopGoodsInfo::GetItemCostIconID(FDS_NPCShopGoodsInfo *this)

{
  bool bVar1;
  FDS_ItemBaseTableRow *this_00;
  
  if (this->BuyTemplateType == MoneyBase) {
    this_00 = (FDS_ItemBaseTableRow *)
              FDS_MoneyBaseTableRow::GetRef((longlong)this->BuyTemplateValue,true);
    bVar1 = FDS_MoneyBaseTableRow::IsValid((FDS_MoneyBaseTableRow *)this_00);
    if (bVar1) {
LAB_14baabcdc:
      return this_00->ID_Icon;
    }
  }
  else if (this->BuyTemplateType == ItemBase) {
    this_00 = FDS_ItemBaseTableRow::GetRef((longlong)this->BuyTemplateValue,true);
    bVar1 = FDS_ItemBaseTableRow::IsValid(this_00);
    if (bVar1) goto LAB_14baabcdc;
  }
  return 0;
}

// GetItemName @ 14baac4c0

FString * __thiscall FDS_NPCShopGoodsInfo::GetItemName(FDS_NPCShopGoodsInfo *this)

{
  FDS_ItemBaseTableRow *this_00;
  FDS_StringItemTableRow *pFVar1;
  
  this_00 = FDS_ItemBaseTableRow::GetRef((longlong)this->ItemTID,true);
  pFVar1 = FDS_ItemBaseTableRow::ID_NameTable(this_00);
  return &pFVar1->Text;
}

// UpdateBuyAbleCount @ 14bad5c00

void __thiscall FDS_NPCShopGoodsInfo::UpdateBuyAbleCount(FDS_NPCShopGoodsInfo *this)

{
  return;
}

