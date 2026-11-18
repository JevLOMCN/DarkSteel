// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// ResizeAllocation @ 14adcff50

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<FMetasoundFrontendVertex_const_*>::ResizeAllocation
          (ForElementType<FMetasoundFrontendVertex_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FMetasoundFrontendVertex_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14adcfff0

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<TTuple<FString,enum_EMetasoundFrontendClassType>_>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)this + 0x300);
  if ((uint)param_2 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(this,_Src,(longlong)param_1 * 0x18);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x300),0,param_2,param_3);
    memmove(*(void **)((longlong)this + 0x300),this,(longlong)param_1 * 0x18);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)((longlong)this + 0x300),param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14ae88940

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<Metasound::FFrontendQueryEntry>::ResizeAllocation
          (ForElementType<Metasound::FFrontendQueryEntry> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<Metasound::FFrontendQueryEntry> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0xb0);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0xb0);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14ae889e0

void __thiscall
TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::
ForElementType<TUniqueFunction<void___cdecl(void)>_>::ResizeAllocation
          (ForElementType<TUniqueFunction<void___cdecl(void)>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TUniqueFunction<void___cdecl(void)>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x801) {
    if (_Src == (ForElementType<TUniqueFunction<void___cdecl(void)>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TUniqueFunction<void___cdecl(void)>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

