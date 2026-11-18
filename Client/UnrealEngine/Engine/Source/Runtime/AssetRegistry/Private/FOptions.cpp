// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FOptions @ 142ad6cf0

FOptions * __thiscall FixedTagPrivate::FOptions::FOptions(FOptions *this,FOptions *param_1)

{
  *(undefined8 *)&(this->StoreAsName).Elements = 0;
  *(undefined8 *)&(this->StoreAsName).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StoreAsName).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StoreAsName).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StoreAsName).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StoreAsName).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StoreAsName).Elements.field_0x34 = 0;
  (this->StoreAsName).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StoreAsName).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&this->StoreAsName,&param_1->StoreAsName);
  *(undefined8 *)&(this->StoreAsPath).Elements = 0;
  *(undefined8 *)&(this->StoreAsPath).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StoreAsPath).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StoreAsPath).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StoreAsPath).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StoreAsPath).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StoreAsPath).Elements.field_0x34 = 0;
  (this->StoreAsPath).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StoreAsPath).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&this->StoreAsPath,&param_1->StoreAsPath);
  return this;
}

// ~FOptions @ 142adab90

void __thiscall FixedTagPrivate::FOptions::~FOptions(FOptions *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->StoreAsPath).HashSize = 0;
  FVar1 = (this->StoreAsPath).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StoreAsPath).Elements);
  (this->StoreAsName).HashSize = 0;
  FVar1 = (this->StoreAsName).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

