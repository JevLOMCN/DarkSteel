// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> @ 14dcadd20

TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> * __thiscall
TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>::
TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>
          (TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> *this,
          TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined8 *)param_1 = 0;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x10 = uVar1;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&param_1->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&this->field_0x24 = *(undefined4 *)&param_1->field_0x24;
  *(undefined8 *)&param_1->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  *(undefined8 *)&param_1->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = *(undefined8 *)&param_1->field_0x38;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&this->field_0x4c = *(undefined4 *)&param_1->field_0x4c;
  *(undefined8 *)&param_1->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x50 = *(undefined8 *)&param_1->field_0x50;
  *(undefined8 *)&param_1->field_0x50 = 0;
  *(undefined4 *)&this->field_0x58 = *(undefined4 *)&param_1->field_0x58;
  *(undefined4 *)&this->field_0x5c = *(undefined4 *)&param_1->field_0x5c;
  *(undefined8 *)&param_1->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)&param_1->field_0x60;
  *(undefined8 *)&param_1->field_0x60 = 0;
  *(undefined4 *)&this->field_0x68 = *(undefined4 *)&param_1->field_0x68;
  *(undefined4 *)&this->field_0x6c = *(undefined4 *)&param_1->field_0x6c;
  *(undefined8 *)&param_1->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x70;
  *(undefined8 *)&param_1->field_0x70 = 0;
  *(undefined4 *)&this->field_0x78 = *(undefined4 *)&param_1->field_0x78;
  *(undefined4 *)&this->field_0x7c = *(undefined4 *)&param_1->field_0x7c;
  *(undefined8 *)&param_1->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = *(undefined8 *)&param_1->field_0x80;
  *(undefined4 *)&this->field_0x88 = *(undefined4 *)&param_1->field_0x88;
  return this;
}

// TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_> @ 14dd09740

TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
* __thiscall
TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
::
TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
          (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
           *this,TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                 *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&this->field_0x14 = *(undefined4 *)&param_1->field_0x14;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&param_1->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&this->field_0x24 = *(undefined4 *)&param_1->field_0x24;
  *(undefined8 *)&param_1->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  *(undefined8 *)&param_1->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x38 = *(undefined8 *)&param_1->field_0x38;
  *(undefined8 *)&param_1->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  *(undefined4 *)&this->field_0x44 = *(undefined4 *)&param_1->field_0x44;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = *(undefined8 *)&param_1->field_0x48;
  *(undefined8 *)&param_1->field_0x48 = 0;
  return this;
}

// operator= @ 14dd0e7e0

TTuple<FString,FString> * __thiscall
TTuple<FString,FString>::operator=(TTuple<FString,FString> *this,TTuple<FString,FString> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (this != param_1) {
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
  }
  puVar2 = &param_1->field_0x10;
  puVar1 = &this->field_0x10;
  if (puVar1 != puVar2) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(undefined8 *)puVar1 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar2 = 0;
    *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
    *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
    *(undefined8 *)&param_1->field_0x18 = 0;
  }
  return this;
}

