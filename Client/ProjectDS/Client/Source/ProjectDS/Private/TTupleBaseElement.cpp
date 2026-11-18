// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2><TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_&> @ 14badbfe0

TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2> * __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2>::
TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2><TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_&>
          (TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2> *this,
          EForwardingConstructor param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Value).ArrayMax;
  iVar2 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->Value).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TTupleBaseElement<TArray<int,TSizedDefaultAllocator<32>_>,1,2><TArray<int,TSizedDefaultAllocator<32>_>_&> @ 14bb405a0

TTupleBaseElement<TArray<int,TSizedDefaultAllocator<32>_>,1,2> * __thiscall
UE::Core::Private::Tuple::TTupleBaseElement<TArray<int,TSizedDefaultAllocator<32>_>,1,2>::
TTupleBaseElement<TArray<int,TSizedDefaultAllocator<32>_>,1,2><TArray<int,TSizedDefaultAllocator<32>_>_&>
          (TTupleBaseElement<TArray<int,TSizedDefaultAllocator<32>_>,1,2> *this,
          EForwardingConstructor param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Value).ArrayMax;
  iVar2 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->Value).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// TTupleBaseElement<TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,1,2><TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_&> @ 14bb40630

TTupleBaseElement<TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,1,2> * __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,1,2>::
TTupleBaseElement<TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,1,2><TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>_&>
          (TTupleBaseElement<TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,1,2>
           *this,EForwardingConstructor param_1,
          TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Value).ArrayMax;
  iVar2 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->Value).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
  return this;
}

