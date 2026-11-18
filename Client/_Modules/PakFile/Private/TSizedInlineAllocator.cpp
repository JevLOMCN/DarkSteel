// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 7

// ResizeAllocation @ 142a99fb0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FFileIoStoreCompressedBlock_*>::ResizeAllocation
          (ForElementType<FFileIoStoreCompressedBlock_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FFileIoStoreCompressedBlock_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142a9a040

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreReadRequest_*>::
ResizeAllocation(ForElementType<FFileIoStoreReadRequest_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FFileIoStoreReadRequest_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FFileIoStoreReadRequest_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FFileIoStoreReadRequest_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142a9a0d0

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPakProcessedReadRequest_*>
::ResizeAllocation(ForElementType<FPakProcessedReadRequest_*> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  ForElementType<FPakProcessedReadRequest_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<FPakProcessedReadRequest_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPakProcessedReadRequest_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142a9a160

void __thiscall
TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
ForElementType<FPakPlatformFile::FPakListEntry_const_*>::ResizeAllocation
          (ForElementType<FPakPlatformFile::FPakListEntry_const_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FPakPlatformFile::FPakListEntry_const_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 2) {
    if (_Src == (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FPakPlatformFile::FPakListEntry_const_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142a9a1f0

void __thiscall
TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreBlockScatter>::
ResizeAllocation(ForElementType<FFileIoStoreBlockScatter> *this,int param_1,int param_2,
                ulong64 param_3)

{
  ForElementType<FFileIoStoreBlockScatter> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 3) {
    if (_Src == (ForElementType<FFileIoStoreBlockScatter>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 5);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FFileIoStoreBlockScatter>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 5);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142a9a280

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>::ResizeAllocation
          (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x58);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x58);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142a9a320

void __thiscall
TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
::ResizeAllocation(ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0xb) {
    if (_Src == (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x30);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x30);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

