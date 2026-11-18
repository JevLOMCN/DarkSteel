// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// FAsyncImageQuantization @ 14ddc4fc0

FAsyncImageQuantization * __thiscall
UE::MoviePipeline::FAsyncImageQuantization::FAsyncImageQuantization
          (FAsyncImageQuantization *this,FImageWriteTask *param_1,bool param_2)

{
  this->ParentWriteTask = param_1;
  this->bConvertToSRGB = param_2;
  return this;
}

// operator() @ 14ddcfd60

void __thiscall
UE::MoviePipeline::FAsyncImageQuantization::operator()
          (FAsyncImageQuantization *this,FImagePixelData *param_1)

{
  FImagePixelData *pFVar1;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar2;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> local_28;
  TIntPoint<int>_u_0 local_20;
  undefined8 uStack_18;
  
  local_20 = (TIntPoint<int>_u_0)0x0;
  uStack_18._0_4_ = Color;
  uStack_18._4_1_ = RGBA;
  uStack_18._5_1_ = '\0';
  uStack_18._6_1_ = '\0';
  uStack_18._7_1_ = false;
  QuantizeImagePixelDataToBitDepth
            ((FImagePixelData *)&local_28,(int)param_1,
             (TSharedPtr<IImagePixelDataPayload,1> *)&DAT_00000008,SUB81(&local_20,0));
  pTVar2 = &this->ParentWriteTask->PixelData;
  if (pTVar2 != &local_28) {
    pFVar1 = pTVar2->Ptr;
    pTVar2->Ptr = local_28.Ptr;
    local_28.Ptr = (FImagePixelData *)0x0;
    if (pFVar1 != (FImagePixelData *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  if (local_28.Ptr != (FImagePixelData *)0x0) {
    (**(code **)(local_28.Ptr)->_padding_)(local_28.Ptr,1);
  }
  return;
}

