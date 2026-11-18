// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5dff30

UScriptStruct * __cdecl FDS_ViewModelContext_ItemCraft_Result::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_ItemCraft_Result.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_ItemCraft_Result.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_ItemCraft_Result,
                         (UObject *)pUVar1,L"DS_ViewModelContext_ItemCraft_Result");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_ItemCraft_Result.OuterSingleton;
}

// ~FDS_ViewModelContext_ItemCraft_Result @ 14b5e9950

void __thiscall
FDS_ViewModelContext_ItemCraft_Result::~FDS_ViewModelContext_ItemCraft_Result
          (FDS_ViewModelContext_ItemCraft_Result *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ItemCraftGreatSucMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ItemCraftGreatSucMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemCraftGreatSucMap);
  *(undefined4 *)&(this->ItemCraftSucMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ItemCraftSucMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemCraftSucMap);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

