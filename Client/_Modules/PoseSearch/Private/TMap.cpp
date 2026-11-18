// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// operator= @ 14a8e3130

TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
* __thiscall
TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
::operator=(TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
            *this,TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                  *param_1)

{
  int iVar1;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x38,(int *)&this->field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    iVar1 = *(int *)&param_1->field_0x8;
    TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,iVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc
              );
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    if (&this->field_0x10 != &param_1->field_0x10) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10);
    }
    if (iVar1 != 0) {
      memcpy(*(void **)this,*(void **)param_1,(longlong)iVar1 * 0xc);
    }
    return this;
  }
  return this;
}

// TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_> @ 14a918580

TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
* __thiscall
TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
::
TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
          (TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
           *this,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
                 *param_1)

{
  *(undefined8 *)&this->field_0x280 = 0;
  *(undefined4 *)&this->field_0x288 = 0;
  *(undefined4 *)&this->field_0x28c = 0x10;
  *(undefined8 *)&this->field_0x298 = 0;
  *(undefined4 *)&this->field_0x2a0 = 0;
  *(undefined4 *)&this->field_0x2a4 = 0x20;
  *(undefined4 *)&this->field_0x2a8 = 0xffffffff;
  *(undefined4 *)&this->field_0x2ac = 0;
  *(undefined8 *)&this->field_0x2d0 = 0;
  *(undefined4 *)&this->field_0x2d8 = 0;
  if (this != param_1) {
    if (*(longlong *)&param_1->field_0x280 == 0) {
      memmove(this,param_1,0x280);
    }
    *(undefined8 *)&this->field_0x280 = *(undefined8 *)&param_1->field_0x280;
    *(undefined8 *)&param_1->field_0x280 = 0;
    *(undefined4 *)&this->field_0x288 = *(undefined4 *)&param_1->field_0x288;
    *(undefined4 *)&this->field_0x28c = *(undefined4 *)&param_1->field_0x28c;
    *(undefined4 *)&param_1->field_0x288 = 0;
    *(undefined4 *)&param_1->field_0x28c = 0x10;
    if (&this->field_0x290 != &param_1->field_0x290) {
      if (*(longlong *)&param_1->field_0x298 == 0) {
        *(undefined4 *)&this->field_0x290 = *(undefined4 *)&param_1->field_0x290;
      }
      *(undefined8 *)&this->field_0x298 = *(undefined8 *)&param_1->field_0x298;
      *(undefined8 *)&param_1->field_0x298 = 0;
      *(undefined4 *)&this->field_0x2a0 = *(undefined4 *)&param_1->field_0x2a0;
      *(undefined4 *)&this->field_0x2a4 = *(undefined4 *)&param_1->field_0x2a4;
      *(undefined8 *)&param_1->field_0x2a0 = 0;
    }
    *(undefined4 *)&this->field_0x2a8 = *(undefined4 *)&param_1->field_0x2a8;
    *(undefined4 *)&this->field_0x2ac = *(undefined4 *)&param_1->field_0x2ac;
    *(undefined4 *)&param_1->field_0x2a8 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x2ac = 0;
  }
  if (*(longlong *)&param_1->field_0x2d0 == 0) {
    memmove(&this->field_0x2b0,&param_1->field_0x2b0,0x20);
  }
  *(undefined8 *)&this->field_0x2d0 = *(undefined8 *)&param_1->field_0x2d0;
  *(undefined8 *)&param_1->field_0x2d0 = 0;
  *(undefined4 *)&this->field_0x2d8 = *(undefined4 *)&param_1->field_0x2d8;
  *(undefined4 *)&param_1->field_0x2d8 = 0;
  return this;
}

