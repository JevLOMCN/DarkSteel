// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 1

// operator= @ 14e405200

TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
* __thiscall
TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
::operator=(TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
            *this,TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
                  *param_1)

{
  int iVar1;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x38,(int *)&this->field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    iVar1 = *(int *)&param_1->field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelinePropertyStates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelinePropertyStates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,iVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar1,(ForAnyElementType *)this,(int *)&this->field_0x8,
               (int *)&this->field_0xc);
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    if (&this->field_0x10 != &param_1->field_0x10) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10);
    }
    if (iVar1 != 0) {
      memcpy(*(void **)this,*(void **)param_1,(longlong)iVar1 * 0x18);
    }
    return this;
  }
  return this;
}

