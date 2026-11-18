// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// FFastArraySerializer @ 1441f8430

FFastArraySerializer * __thiscall
FFastArraySerializer::FFastArraySerializer(FFastArraySerializer *this,FFastArraySerializer *param_1)

{
  TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
  *this_00;
  undefined1 *puVar1;
  TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>
  *this_01;
  
  *(undefined8 *)&this->ItemMap = 0;
  *(undefined8 *)&(this->ItemMap).field_0x8 = 0;
  *(undefined8 *)&(this->ItemMap).field_0x20 = 0;
  *(undefined4 *)&(this->ItemMap).field_0x28 = 0;
  *(undefined4 *)&(this->ItemMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ItemMap).field_0x34 = 0;
  *(undefined8 *)&(this->ItemMap).field_0x40 = 0;
  *(undefined4 *)&(this->ItemMap).field_0x48 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                   *)param_1);
  this_00 = &this->GuidReferencesMap;
  this->IDCounter = param_1->IDCounter;
  this->ArrayReplicationKey = param_1->ArrayReplicationKey;
  puVar1 = &(this->GuidReferencesMap).field_0x48;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->GuidReferencesMap).field_0x8 = 0;
  *(undefined8 *)&(this->GuidReferencesMap).field_0x20 = 0;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x28 = 0;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GuidReferencesMap).field_0x34 = 0;
  *(undefined8 *)&(this->GuidReferencesMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->GuidReferencesMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->GuidReferencesMap).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->GuidReferencesMap).field_0x38,
               *(int *)&(param_1->GuidReferencesMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->GuidReferencesMap);
  }
  this_01 = &this->GuidReferencesMap_StructDelta;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->GuidReferencesMap_StructDelta).field_0x8 = 0;
  *(undefined8 *)&(this->GuidReferencesMap_StructDelta).field_0x20 = 0;
  puVar1 = &(this->GuidReferencesMap_StructDelta).field_0x48;
  *(undefined4 *)&(this->GuidReferencesMap_StructDelta).field_0x28 = 0;
  *(undefined4 *)&(this->GuidReferencesMap_StructDelta).field_0x2c = 0x80;
  *(undefined4 *)&(this->GuidReferencesMap_StructDelta).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GuidReferencesMap_StructDelta).field_0x34 = 0;
  *(undefined8 *)&(this->GuidReferencesMap_StructDelta).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_01 != &param_1->GuidReferencesMap_StructDelta) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->GuidReferencesMap_StructDelta).field_0x38,
               (int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->GuidReferencesMap_StructDelta).field_0x38
               ,*(int *)&(param_1->GuidReferencesMap_StructDelta).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_01,
                (TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->GuidReferencesMap_StructDelta);
  }
  this->CachedNumItems = param_1->CachedNumItems;
  this->CachedNumItemsToConsiderForWriting = param_1->CachedNumItemsToConsiderForWriting;
  this->DeltaFlags = param_1->DeltaFlags;
  return this;
}

// operator= @ 1441fa390

FFastArraySerializer * __thiscall
FFastArraySerializer::operator=(FFastArraySerializer *this,FFastArraySerializer *param_1)

{
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                   *)param_1);
  this->IDCounter = param_1->IDCounter;
  this->ArrayReplicationKey = param_1->ArrayReplicationKey;
  if (&this->GuidReferencesMap != &param_1->GuidReferencesMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->GuidReferencesMap).field_0x38,
               (int *)&(this->GuidReferencesMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->GuidReferencesMap).field_0x38,
               *(int *)&(param_1->GuidReferencesMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->GuidReferencesMap,
                (TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->GuidReferencesMap);
  }
  if (&this->GuidReferencesMap_StructDelta != &param_1->GuidReferencesMap_StructDelta) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->GuidReferencesMap_StructDelta).field_0x38,
               (int *)&(this->GuidReferencesMap_StructDelta).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->GuidReferencesMap_StructDelta).field_0x38
               ,*(int *)&(param_1->GuidReferencesMap_StructDelta).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->GuidReferencesMap_StructDelta,
                (TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->GuidReferencesMap_StructDelta);
  }
  this->CachedNumItems = param_1->CachedNumItems;
  this->CachedNumItemsToConsiderForWriting = param_1->CachedNumItemsToConsiderForWriting;
  this->DeltaFlags = param_1->DeltaFlags;
  return this;
}

