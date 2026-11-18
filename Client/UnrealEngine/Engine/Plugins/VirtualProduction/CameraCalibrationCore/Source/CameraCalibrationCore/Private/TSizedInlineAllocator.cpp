// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 2

// ResizeAllocation @ 14d6ea080

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>::
ResizeAllocation(ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>
                 *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x38);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x38);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14d6ea120

void __thiscall
TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>::ResizeAllocation
          (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 5) {
    if (_Src == (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

