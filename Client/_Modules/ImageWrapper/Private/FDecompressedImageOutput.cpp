// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 2

// ~FDecompressedImageOutput @ 14266a0d0

void __thiscall FDecompressedImageOutput::~FDecompressedImageOutput(FDecompressedImageOutput *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ApplicationVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ApplicationName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ApplicationVendor).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MipMapImage).SubImages.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MipMapImage).RawData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 14266a9c0

FDecompressedImageOutput * __thiscall
FDecompressedImageOutput::operator=
          (FDecompressedImageOutput *this,FDecompressedImageOutput *param_1)

{
  TArray<FMipMapImage::FMipInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMipMapImage::FMipInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FString *pFVar5;
  
  if (this != param_1) {
    pFVar4 = (this->MipMapImage).RawData.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->MipMapImage).RawData.AllocatorInstance.Data =
         (param_1->MipMapImage).RawData.AllocatorInstance.Data;
    (param_1->MipMapImage).RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MipMapImage).RawData.ArrayNum = (param_1->MipMapImage).RawData.ArrayNum;
    (this->MipMapImage).RawData.ArrayMax = (param_1->MipMapImage).RawData.ArrayMax;
    (param_1->MipMapImage).RawData.ArrayNum = 0;
    (param_1->MipMapImage).RawData.ArrayMax = 0;
  }
  pTVar1 = &(param_1->MipMapImage).SubImages;
  pTVar2 = &(this->MipMapImage).SubImages;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MipMapImage).SubImages.ArrayNum = (param_1->MipMapImage).SubImages.ArrayNum;
    (this->MipMapImage).SubImages.ArrayMax = (param_1->MipMapImage).SubImages.ArrayMax;
    (param_1->MipMapImage).SubImages.ArrayNum = 0;
    (param_1->MipMapImage).SubImages.ArrayMax = 0;
  }
  pFVar3 = &param_1->ApplicationVendor;
  (this->MipMapImage).Format = (param_1->MipMapImage).Format;
  pFVar5 = &this->ApplicationVendor;
  (this->MipMapImage).GammaSpace = (param_1->MipMapImage).GammaSpace;
  if (pFVar5 != pFVar3) {
    pFVar4 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ApplicationVendor).Data.ArrayNum = (param_1->ApplicationVendor).Data.ArrayNum;
    (this->ApplicationVendor).Data.ArrayMax = (param_1->ApplicationVendor).Data.ArrayMax;
    (param_1->ApplicationVendor).Data.ArrayNum = 0;
    (param_1->ApplicationVendor).Data.ArrayMax = 0;
  }
  pFVar3 = &param_1->ApplicationName;
  pFVar5 = &this->ApplicationName;
  if (pFVar5 != pFVar3) {
    pFVar4 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ApplicationName).Data.ArrayNum = (param_1->ApplicationName).Data.ArrayNum;
    (this->ApplicationName).Data.ArrayMax = (param_1->ApplicationName).Data.ArrayMax;
    (param_1->ApplicationName).Data.ArrayNum = 0;
    (param_1->ApplicationName).Data.ArrayMax = 0;
  }
  pFVar5 = &param_1->ApplicationVersion;
  pFVar3 = &this->ApplicationVersion;
  if (pFVar3 != pFVar5) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ApplicationVersion).Data.ArrayNum = (param_1->ApplicationVersion).Data.ArrayNum;
    (this->ApplicationVersion).Data.ArrayMax = (param_1->ApplicationVersion).Data.ArrayMax;
    (param_1->ApplicationVersion).Data.ArrayNum = 0;
    (param_1->ApplicationVersion).Data.ArrayMax = 0;
  }
  return this;
}

