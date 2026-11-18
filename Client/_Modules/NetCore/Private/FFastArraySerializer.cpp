// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 3

// StaticStruct @ 1441c3db0

UScriptStruct * __cdecl FFastArraySerializer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFastArraySerializer.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UScriptStruct_FFastArraySerializer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFastArraySerializer,(UObject *)pUVar1,
                         L"FastArraySerializer");
  }
  return Z_Registration_Info_UScriptStruct_FFastArraySerializer.OuterSingleton;
}

// FFastArraySerializer @ 1441d16e0

FFastArraySerializer * __thiscall
FFastArraySerializer::FFastArraySerializer(FFastArraySerializer *this)

{
  *(undefined8 *)&this->ItemMap = 0;
  *(undefined8 *)&(this->ItemMap).field_0x8 = 0;
  *(undefined8 *)&(this->ItemMap).field_0x20 = 0;
  *(undefined4 *)&(this->ItemMap).field_0x28 = 0;
  *(undefined4 *)&(this->ItemMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemMap).field_0x34 = 0;
  *(undefined4 *)&(this->ItemMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemMap).field_0x40 = 0;
  *(undefined4 *)&(this->ItemMap).field_0x48 = 0;
  *(undefined8 *)&this->GuidReferencesMap = 0;
  *(undefined8 *)&(this->GuidReferencesMap).field_0x8 = 0;
  *(undefined8 *)&(this->GuidReferencesMap).field_0x20 = 0;
  this->IDCounter = 0;
  this->ArrayReplicationKey = 0;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x28 = 0;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x34 = 0;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GuidReferencesMap).field_0x40 = 0;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x48 = 0;
  *(undefined8 *)&this->GuidReferencesMap_StructDelta = 0;
  *(undefined8 *)&(this->GuidReferencesMap_StructDelta).field_0x8 = 0;
  *(undefined8 *)&(this->GuidReferencesMap_StructDelta).field_0x20 = 0;
  *(undefined4 *)&(this->GuidReferencesMap_StructDelta).field_0x28 = 0;
  *(undefined4 *)&(this->GuidReferencesMap_StructDelta).field_0x2c = 0x80;
  *(undefined4 *)&(this->GuidReferencesMap_StructDelta).field_0x34 = 0;
  *(undefined4 *)&(this->GuidReferencesMap_StructDelta).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GuidReferencesMap_StructDelta).field_0x40 = 0;
  *(undefined4 *)&(this->GuidReferencesMap_StructDelta).field_0x48 = 0;
  this->CachedNumItems = -1;
  this->CachedNumItemsToConsiderForWriting = -1;
  this->DeltaFlags = HasDeltaBeenRequested;
  return this;
}

// ~FFastArraySerializer @ 1441d39d0

void __thiscall FFastArraySerializer::~FFastArraySerializer(FFastArraySerializer *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->GuidReferencesMap_StructDelta).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GuidReferencesMap_StructDelta).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GuidReferencesMap_StructDelta);
  *(undefined4 *)&(this->GuidReferencesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GuidReferencesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GuidReferencesMap);
  *(undefined4 *)&(this->ItemMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ItemMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

