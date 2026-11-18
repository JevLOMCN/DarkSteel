// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// ResizeAllocation @ 146e9d350

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
::ResizeAllocation(ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 146fcd9a0

void __thiscall
TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>::ForElementType<unsigned_int>::
ResizeAllocation(ForElementType<unsigned_int> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<unsigned_int> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<unsigned_int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 146fcda30

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectKey<AActor>_>::
ResizeAllocation(ForElementType<TObjectKey<AActor>_> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TObjectKey<AActor>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<TObjectKey<AActor>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TObjectKey<AActor>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 146fcdac0

void __thiscall
TSizedInlineAllocator<1,32,FRangeChecklessAllocator<0>_>::ForElementType<FSetElementId>::
ResizeAllocation(ForElementType<FSetElementId> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FSetElementId> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 2);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 2);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

