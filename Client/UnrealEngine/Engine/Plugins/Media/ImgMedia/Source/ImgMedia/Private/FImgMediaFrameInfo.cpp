// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 3

// FImgMediaFrameInfo @ 14ea383b0

FImgMediaFrameInfo * __thiscall
FImgMediaFrameInfo::FImgMediaFrameInfo(FImgMediaFrameInfo *this,FImgMediaFrameInfo *param_1)

{
  ::FString::FString(&this->CompressionName,&param_1->CompressionName);
  (this->Dim).field0_0x0 = (param_1->Dim).field0_0x0;
  ::FString::FString(&this->FormatName,&param_1->FormatName);
  this->FrameRate = param_1->FrameRate;
  this->Srgb = param_1->Srgb;
  this->UncompressedSize = param_1->UncompressedSize;
  this->NumChannels = param_1->NumChannels;
  this->bHasTiles = param_1->bHasTiles;
  (this->NumTiles).field0_0x0 = (param_1->NumTiles).field0_0x0;
  (this->TileDimensions).field0_0x0 = (param_1->TileDimensions).field0_0x0;
  this->TileBorder = param_1->TileBorder;
  this->NumMipLevels = param_1->NumMipLevels;
  return this;
}

// operator= @ 14ea3bc10

FImgMediaFrameInfo * __thiscall
FImgMediaFrameInfo::operator=(FImgMediaFrameInfo *this,FImgMediaFrameInfo *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    pFVar3 = (this->CompressionName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->CompressionName).Data.AllocatorInstance.Data =
         (param_1->CompressionName).Data.AllocatorInstance.Data;
    (param_1->CompressionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CompressionName).Data.ArrayNum = (param_1->CompressionName).Data.ArrayNum;
    (this->CompressionName).Data.ArrayMax = (param_1->CompressionName).Data.ArrayMax;
    (param_1->CompressionName).Data.ArrayNum = 0;
    (param_1->CompressionName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->FormatName;
  pFVar2 = &this->FormatName;
  (this->Dim).field0_0x0 = (param_1->Dim).field0_0x0;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FormatName).Data.ArrayNum = (param_1->FormatName).Data.ArrayNum;
    (this->FormatName).Data.ArrayMax = (param_1->FormatName).Data.ArrayMax;
    (param_1->FormatName).Data.ArrayNum = 0;
    (param_1->FormatName).Data.ArrayMax = 0;
  }
  this->FrameRate = param_1->FrameRate;
  this->Srgb = param_1->Srgb;
  this->UncompressedSize = param_1->UncompressedSize;
  this->NumChannels = param_1->NumChannels;
  this->bHasTiles = param_1->bHasTiles;
  (this->NumTiles).field0_0x0 = (param_1->NumTiles).field0_0x0;
  (this->TileDimensions).field0_0x0 = (param_1->TileDimensions).field0_0x0;
  this->TileBorder = param_1->TileBorder;
  this->NumMipLevels = param_1->NumMipLevels;
  return this;
}

// operator= @ 14ea3bd00

FImgMediaFrameInfo * __thiscall
FImgMediaFrameInfo::operator=(FImgMediaFrameInfo *this,FImgMediaFrameInfo *param_1)

{
  ::FString::operator=(&this->CompressionName,&param_1->CompressionName);
  (this->Dim).field0_0x0 = (param_1->Dim).field0_0x0;
  ::FString::operator=(&this->FormatName,&param_1->FormatName);
  this->FrameRate = param_1->FrameRate;
  this->Srgb = param_1->Srgb;
  this->UncompressedSize = param_1->UncompressedSize;
  this->NumChannels = param_1->NumChannels;
  this->bHasTiles = param_1->bHasTiles;
  (this->NumTiles).field0_0x0 = (param_1->NumTiles).field0_0x0;
  (this->TileDimensions).field0_0x0 = (param_1->TileDimensions).field0_0x0;
  this->TileBorder = param_1->TileBorder;
  this->NumMipLevels = param_1->NumMipLevels;
  return this;
}

