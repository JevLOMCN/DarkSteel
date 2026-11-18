// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// FOpenColorIOPixelPreProcessor @ 14dcaea40

FOpenColorIOPixelPreProcessor * __thiscall
FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor::FOpenColorIOPixelPreProcessor
          (FOpenColorIOPixelPreProcessor *this,FOpenColorIOWrapperProcessor *param_1)

{
  TPimplPtr<FOpenColorIOProcessorPimpl,1> TVar1;
  
  (this->Processor).Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0;
  if (param_1->Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
    TVar1 = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)(**(code **)((longlong)param_1->Pimpl + -8))();
    (this->Processor).Pimpl = TVar1;
  }
  return this;
}

// operator() @ 14dcb6ac0

void __thiscall
FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor::operator()
          (FOpenColorIOPixelPreProcessor *this,FImagePixelData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FImageView *pFVar3;
  FImageView local_28;
  
  if (param_1 == (FImagePixelData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphOCIOHelper.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FImagePixelData::GetImageView(param_1,&local_28);
  FOpenColorIOWrapperProcessor::TransformImage(&this->Processor,pFVar3);
  return;
}

