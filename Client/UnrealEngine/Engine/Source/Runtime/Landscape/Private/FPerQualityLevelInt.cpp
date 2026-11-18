// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// operator= @ 145ef45f0

FPerQualityLevelInt * __thiscall
FPerQualityLevelInt::operator=(FPerQualityLevelInt *this,FPerQualityLevelInt *param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  undefined1 *puVar1;
  undefined1 *this_01;
  int iVar2;
  
  ::FString::operator=((FString *)this,(FString *)param_1);
  this_00 = &this->PerQuality;
  this->Default = param_1->Default;
  if (this_00 != &param_1->PerQuality) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->PerQuality).field_0x38,
               (int *)&(this->PerQuality).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->PerQuality).field_0x38,
               *(int *)&(param_1->PerQuality).field_0x48);
    iVar2 = *(int *)&(param_1->PerQuality).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,(ForAnyElementType *)this_00,(int *)&(this->PerQuality).field_0x8,
               (int *)&(this->PerQuality).field_0xc);
    puVar1 = &(param_1->PerQuality).field_0x10;
    this_01 = &(this->PerQuality).field_0x10;
    *(undefined4 *)&(this->PerQuality).field_0x30 = *(undefined4 *)&(param_1->PerQuality).field_0x30
    ;
    *(undefined4 *)&(this->PerQuality).field_0x34 = *(undefined4 *)&(param_1->PerQuality).field_0x34
    ;
    if (this_01 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->PerQuality,(longlong)iVar2 << 4);
    }
    return this;
  }
  return this;
}

