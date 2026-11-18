// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// StaticStruct @ 1460678d0

UScriptStruct * __cdecl FNavigationToolViewSaveState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavigationToolViewSaveState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FNavigationToolViewSaveState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationToolViewSaveState,(UObject *)pUVar1,
                         L"NavigationToolViewSaveState");
  }
  return Z_Registration_Info_UScriptStruct_FNavigationToolViewSaveState.OuterSingleton;
}

// FNavigationToolViewSaveState @ 1460943c0

FNavigationToolViewSaveState * __thiscall
FNavigationToolViewSaveState::FNavigationToolViewSaveState(FNavigationToolViewSaveState *this)

{
  *(undefined8 *)&this->ViewItemFlags = 0;
  *(undefined8 *)&(this->ViewItemFlags).field_0x8 = 0;
  *(undefined8 *)&(this->ViewItemFlags).field_0x20 = 0;
  *(undefined4 *)&(this->ViewItemFlags).field_0x28 = 0;
  *(undefined4 *)&(this->ViewItemFlags).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewItemFlags).field_0x34 = 0;
  *(undefined4 *)&(this->ViewItemFlags).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ViewItemFlags).field_0x40 = 0;
  *(undefined4 *)&(this->ViewItemFlags).field_0x48 = 0;
  *(undefined8 *)&this->ColumnsState = 0;
  *(undefined8 *)&(this->ColumnsState).field_0x8 = 0;
  *(undefined8 *)&(this->ColumnsState).field_0x20 = 0;
  *(undefined4 *)&(this->ColumnsState).field_0x28 = 0;
  *(undefined4 *)&(this->ColumnsState).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColumnsState).field_0x34 = 0;
  *(undefined4 *)&(this->ColumnsState).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ColumnsState).field_0x40 = 0;
  *(undefined4 *)&(this->ColumnsState).field_0x48 = 0;
  *(undefined8 *)&(this->ActiveItemFilters).Elements = 0;
  *(undefined8 *)&(this->ActiveItemFilters).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveItemFilters).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveItemFilters).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveItemFilters).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveItemFilters).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ActiveItemFilters).Elements.field_0x30 = 0xffffffff;
  (this->ActiveItemFilters).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveItemFilters).HashSize = 0;
  return this;
}

// ~FNavigationToolViewSaveState @ 146098010

void __thiscall
FNavigationToolViewSaveState::~FNavigationToolViewSaveState(FNavigationToolViewSaveState *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->ActiveItemFilters).HashSize = 0;
  FVar1 = (this->ActiveItemFilters).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveItemFilters).Elements);
  *(undefined4 *)&(this->ColumnsState).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ColumnsState).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnsState);
  *(undefined4 *)&(this->ViewItemFlags).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ViewItemFlags).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,enum_ENavigationToolItemFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,enum_ENavigationToolItemFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  return;
}

