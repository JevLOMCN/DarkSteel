// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5ee8a0

UScriptStruct * __cdecl FDS_ViewModelContext_NPCShop::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_NPCShop.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_NPCShop.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_NPCShop,(UObject *)pUVar1,
                         L"DS_ViewModelContext_NPCShop");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_NPCShop.OuterSingleton;
}

// FDS_ViewModelContext_NPCShop @ 14b5f6ef0

FDS_ViewModelContext_NPCShop * __thiscall
FDS_ViewModelContext_NPCShop::FDS_ViewModelContext_NPCShop(FDS_ViewModelContext_NPCShop *this)

{
  undefined8 local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_NPCShop__6B_;
  local_res8 = 0;
  (this->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCShopData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NPCSellData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCSellData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionShop).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

