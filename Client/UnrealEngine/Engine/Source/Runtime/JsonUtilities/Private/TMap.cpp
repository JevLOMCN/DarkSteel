// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 1

// operator= @ 1446258e0

TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
* __thiscall
TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
::operator=(TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *this,TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *param_1)

{
  uint uVar1;
  void *_Dst;
  void *_Src;
  uint uVar2;
  
  if (this == param_1) {
    return this;
  }
  uVar1 = *(uint *)&param_1->field_0x48;
  uVar2 = uVar1;
  if (uVar1 < 2) {
    if (*(longlong *)&this->field_0x40 == 0) goto LAB_14462593b;
    uVar2 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->field_0x40,0,uVar2,4);
LAB_14462593b:
  if (uVar1 != 0) {
    _Src = *(void **)&param_1->field_0x40;
    if (*(void **)&param_1->field_0x40 == (void *)0x0) {
      _Src = &param_1->field_0x38;
    }
    _Dst = *(void **)&this->field_0x40;
    if (*(void **)&this->field_0x40 == (void *)0x0) {
      _Dst = &this->field_0x38;
    }
    memcpy(_Dst,_Src,(longlong)(int)uVar1 << 2);
  }
  *(uint *)&this->field_0x48 = uVar1;
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,(TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)param_1);
  return this;
}

