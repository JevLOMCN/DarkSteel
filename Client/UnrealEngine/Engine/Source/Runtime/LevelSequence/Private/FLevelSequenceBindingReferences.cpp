// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 3

// StaticStruct @ 146c47b20

UScriptStruct * __cdecl FLevelSequenceBindingReferences::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences,(UObject *)pUVar1
                         ,L"LevelSequenceBindingReferences");
  }
  return Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.OuterSingleton;
}

// FLevelSequenceBindingReferences @ 146c4e1f0

FLevelSequenceBindingReferences * __thiscall
FLevelSequenceBindingReferences::FLevelSequenceBindingReferences
          (FLevelSequenceBindingReferences *this)

{
  *(undefined8 *)&this->BindingIdToReferences = 0;
  *(undefined8 *)&(this->BindingIdToReferences).field_0x8 = 0;
  *(undefined8 *)&(this->BindingIdToReferences).field_0x20 = 0;
  *(undefined4 *)&(this->BindingIdToReferences).field_0x28 = 0;
  *(undefined4 *)&(this->BindingIdToReferences).field_0x2c = 0x80;
  *(undefined4 *)&(this->BindingIdToReferences).field_0x34 = 0;
  *(undefined4 *)&(this->BindingIdToReferences).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BindingIdToReferences).field_0x40 = 0;
  *(undefined4 *)&(this->BindingIdToReferences).field_0x48 = 0;
  *(undefined8 *)&(this->AnimSequenceInstances).Elements = 0;
  *(undefined8 *)&(this->AnimSequenceInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AnimSequenceInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AnimSequenceInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AnimSequenceInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimSequenceInstances).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AnimSequenceInstances).Elements.field_0x30 = 0xffffffff;
  (this->AnimSequenceInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AnimSequenceInstances).HashSize = 0;
  *(undefined8 *)&(this->PostProcessInstances).Elements = 0;
  *(undefined8 *)&(this->PostProcessInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PostProcessInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PostProcessInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PostProcessInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PostProcessInstances).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PostProcessInstances).Elements.field_0x30 = 0xffffffff;
  (this->PostProcessInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PostProcessInstances).HashSize = 0;
  return this;
}

// ~FLevelSequenceBindingReferences @ 146c4eea0

void __thiscall
FLevelSequenceBindingReferences::~FLevelSequenceBindingReferences
          (FLevelSequenceBindingReferences *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->PostProcessInstances).HashSize = 0;
  FVar1 = (this->PostProcessInstances).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PostProcessInstances).Elements);
  (this->AnimSequenceInstances).HashSize = 0;
  FVar1 = (this->AnimSequenceInstances).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AnimSequenceInstances).Elements);
  *(undefined4 *)&(this->BindingIdToReferences).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BindingIdToReferences).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

