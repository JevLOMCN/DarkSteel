// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// ~FArchiveListRefs @ 1420ebec0

void __thiscall `StaticExec'::__l905::FArchiveListRefs::~FArchiveListRefs(void *this)

{
  *(undefined4 *)((longlong)this + 0xd8) = 0;
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x90));
  FArchive::~FArchive(this);
  return;
}

// operator<< @ 1420ee020

FArchive * __thiscall
`StaticExec'::__l905::FArchiveListRefs::operator<<(void *this,UObject **param_1)

{
  UObjectBaseUtility *this_00;
  UObject **ppUVar1;
  UPackage *pUVar2;
  UPackage *pUVar3;
  UObject *local_res8;
  
  if (*param_1 == (UObject *)0x0) {
    return this;
  }
  ppUVar1 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Find
                      ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)
                       ((longlong)this + 0x90),*param_1);
  if (ppUVar1 == (UObject **)0x0) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)
               ((longlong)this + 0x90),&local_res8,(bool *)param_1);
    this_00 = *(UObjectBaseUtility **)((longlong)this + 0xe0);
    pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)*param_1);
    pUVar3 = UObjectBaseUtility::GetOutermost(this_00);
    if ((pUVar3 != pUVar2) &&
       (pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)*param_1),
       ((uint)pUVar2->PackageFlagsPrivate >> 0x15 & 1) != 0)) {
      return this;
    }
    (**(code **)(*(longlong *)*param_1 + 200))(*param_1,this);
  }
  return this;
}

