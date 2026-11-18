// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// operator= @ 14e4db4f0

TMap<EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FName,0>_>
* __thiscall
TMap<enum_EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeTranslatorAssetType,FName,0>_>
::operator=(void *this,
           TMap<EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FName,0>_>
           *param_1)

{
  int iVar1;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
               (int *)((longlong)this + 0x48),(ForElementType<FSetElementId> *)&param_1->field_0x38,
               *(int *)&param_1->field_0x48);
    iVar1 = *(int *)&param_1->field_0x8;
    TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(this,iVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    *(undefined4 *)((longlong)this + 0x30) = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)((longlong)this + 0x34) = *(undefined4 *)&param_1->field_0x34;
    if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10) !=
        (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10);
    }
    if (iVar1 != 0) {
      memcpy(*(void **)this,*(void **)param_1,(longlong)iVar1 * 0x14);
    }
    return this;
  }
  return this;
}

