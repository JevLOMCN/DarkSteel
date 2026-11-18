// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 3

// StaticStruct @ 14a178ad0

UScriptStruct * __cdecl FRigVMUserDefinedTypesInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMUserDefinedTypesInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMUserDefinedTypesInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMUserDefinedTypesInfo,(UObject *)pUVar1,
                         L"RigVMUserDefinedTypesInfo");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMUserDefinedTypesInfo.OuterSingleton;
}

// FRigVMUserDefinedTypesInfo @ 14a190e60

FRigVMUserDefinedTypesInfo * __thiscall
FRigVMUserDefinedTypesInfo::FRigVMUserDefinedTypesInfo(FRigVMUserDefinedTypesInfo *this)

{
  *(undefined8 *)&this->StructGuidToPathName = 0;
  *(undefined8 *)&(this->StructGuidToPathName).field_0x8 = 0;
  *(undefined8 *)&(this->StructGuidToPathName).field_0x20 = 0;
  *(undefined4 *)&(this->StructGuidToPathName).field_0x28 = 0;
  *(undefined4 *)&(this->StructGuidToPathName).field_0x2c = 0x80;
  *(undefined4 *)&(this->StructGuidToPathName).field_0x34 = 0;
  *(undefined4 *)&(this->StructGuidToPathName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StructGuidToPathName).field_0x40 = 0;
  *(undefined4 *)&(this->StructGuidToPathName).field_0x48 = 0;
  *(undefined8 *)&this->EnumToPathName = 0;
  *(undefined8 *)&(this->EnumToPathName).field_0x8 = 0;
  *(undefined8 *)&(this->EnumToPathName).field_0x20 = 0;
  *(undefined4 *)&(this->EnumToPathName).field_0x28 = 0;
  *(undefined4 *)&(this->EnumToPathName).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnumToPathName).field_0x34 = 0;
  *(undefined4 *)&(this->EnumToPathName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EnumToPathName).field_0x40 = 0;
  *(undefined4 *)&(this->EnumToPathName).field_0x48 = 0;
  *(undefined8 *)&(this->TypesInUse).Elements = 0;
  *(undefined8 *)&(this->TypesInUse).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TypesInUse).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TypesInUse).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TypesInUse).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TypesInUse).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TypesInUse).Elements.field_0x30 = 0xffffffff;
  (this->TypesInUse).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TypesInUse).HashSize = 0;
  return this;
}

// ~FRigVMUserDefinedTypesInfo @ 14a191d80

void __thiscall
FRigVMUserDefinedTypesInfo::~FRigVMUserDefinedTypesInfo(FRigVMUserDefinedTypesInfo *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->TypesInUse).HashSize = 0;
  FVar1 = (this->TypesInUse).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TypesInUse).Elements);
  *(undefined4 *)&(this->EnumToPathName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EnumToPathName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EnumToPathName);
  *(undefined4 *)&(this->StructGuidToPathName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StructGuidToPathName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

