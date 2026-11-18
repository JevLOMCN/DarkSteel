// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 10

// ~TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_> @ 14ddca7e0

void __thiscall
TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_>::
~TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_>
          (TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_> *this)

{
  TImagePixelData<FColor> *pTVar1;
  
  pTVar1 = this->Ptr;
  if (pTVar1 != (TImagePixelData<FColor> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddca7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// ~TUniquePtr<TImagePixelData<FLinearColor>,TDefaultDelete<TImagePixelData<FLinearColor>_>_> @ 14ddca800

void __thiscall
TUniquePtr<TImagePixelData<FLinearColor>,TDefaultDelete<TImagePixelData<FLinearColor>_>_>::
~TUniquePtr<TImagePixelData<FLinearColor>,TDefaultDelete<TImagePixelData<FLinearColor>_>_>
          (TUniquePtr<TImagePixelData<FLinearColor>,TDefaultDelete<TImagePixelData<FLinearColor>_>_>
           *this)

{
  TImagePixelData<FLinearColor> *pTVar1;
  
  pTVar1 = this->Ptr;
  if (pTVar1 != (TImagePixelData<FLinearColor> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddca810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// ~TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_> @ 14ddca820

void __thiscall
TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_>::
~TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_>
          (TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_>
           *this)

{
  TImagePixelData<FFloat16Color> *pTVar1;
  
  pTVar1 = this->Ptr;
  if (pTVar1 != (TImagePixelData<FFloat16Color> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddca830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// ~TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> @ 14ddca840

void __thiscall
TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>::
~TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>
          (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *this)

{
  FImagePixelData *pFVar1;
  
  pFVar1 = this->Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddca850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_> @ 14ddca860

void __thiscall
TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
::
~TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
          (TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
           *this)

{
  FMovieGraphImagePassBase *pFVar1;
  
  pFVar1 = this->Ptr;
  if (pFVar1 != (FMovieGraphImagePassBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddca870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry>_> @ 14ddca880

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry>_>
::
~TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry>_>
          (TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry>_>
           *this)

{
  FPoolEntry *this_00;
  
  this_00 = this->Ptr;
  if (this_00 != (FPoolEntry *)0x0) {
    UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::~FMoviePipelinePanoramicBlenderBase
              (&this_00->Blender);
    ::operator_delete(this_00,0xa0);
    return;
  }
  return;
}

// ~TUniquePtr<FEXRImageWriteTask,TDefaultDelete<FEXRImageWriteTask>_> @ 14ddca8c0

void __thiscall
TUniquePtr<FEXRImageWriteTask,TDefaultDelete<FEXRImageWriteTask>_>::
~TUniquePtr<FEXRImageWriteTask,TDefaultDelete<FEXRImageWriteTask>_>
          (TUniquePtr<FEXRImageWriteTask,TDefaultDelete<FEXRImageWriteTask>_> *this)

{
  FEXRImageWriteTask *pFVar1;
  
  pFVar1 = this->Ptr;
  if (pFVar1 != (FEXRImageWriteTask *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddca8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// ~TUniquePtr<FImageWriteTask,TDefaultDelete<FImageWriteTask>_> @ 14ddca8e0

void __thiscall
TUniquePtr<FImageWriteTask,TDefaultDelete<FImageWriteTask>_>::
~TUniquePtr<FImageWriteTask,TDefaultDelete<FImageWriteTask>_>
          (TUniquePtr<FImageWriteTask,TDefaultDelete<FImageWriteTask>_> *this)

{
  FImageWriteTask *pFVar1;
  
  pFVar1 = this->Ptr;
  if (pFVar1 != (FImageWriteTask *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddca8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// ~TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_> @ 14ddca900

void __thiscall
TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>::
~TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>
          (TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_> *this)

{
  FSoundWavePCMWriter *this_00;
  
  this_00 = this->Ptr;
  if (this_00 != (FSoundWavePCMWriter *)0x0) {
    Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(this_00);
    ::operator_delete(this_00,0x78);
    return;
  }
  return;
}

// ~TUniquePtr<IImageWriteTaskBase,TDefaultDelete<IImageWriteTaskBase>_> @ 14ddca940

void __thiscall
TUniquePtr<IImageWriteTaskBase,TDefaultDelete<IImageWriteTaskBase>_>::
~TUniquePtr<IImageWriteTaskBase,TDefaultDelete<IImageWriteTaskBase>_>
          (TUniquePtr<IImageWriteTaskBase,TDefaultDelete<IImageWriteTaskBase>_> *this)

{
  IImageWriteTaskBase *pIVar1;
  
  pIVar1 = this->Ptr;
  if (pIVar1 != (IImageWriteTaskBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddca950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

