// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Serialize @ 14ec95be0

void __thiscall
FPurchaseReceipt::FLineItemInfo::Serialize
          (FLineItemInfo *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"itemName";
  uStack_10 = 8;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->ItemName);
  local_18 = L"uniqueItemId";
  uStack_10 = 0xc;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->UniqueId);
  local_18 = L"validationInfo";
  uStack_10 = 0xe;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_18,&this->ValidationInfo);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

