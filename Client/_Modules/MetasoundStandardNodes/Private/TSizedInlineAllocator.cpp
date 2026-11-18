// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// ResizeAllocation @ 14b1eb290

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>::ResizeAllocation
          (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x14);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x14);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 14b1eb330

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::ResizeAllocation(ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                   *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                 )0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x1c);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x1c);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

