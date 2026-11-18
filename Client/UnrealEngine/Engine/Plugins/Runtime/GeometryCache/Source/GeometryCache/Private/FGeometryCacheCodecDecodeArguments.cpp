// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// FGeometryCacheCodecDecodeArguments @ 14ca058e0

FGeometryCacheCodecDecodeArguments * __thiscall
FGeometryCacheCodecDecodeArguments::FGeometryCacheCodecDecodeArguments
          (FGeometryCacheCodecDecodeArguments *this,
          FGeometryCacheTrackStreamableRenderResource *param_1,
          TArray<FStreamedGeometryCacheChunk,TSizedDefaultAllocator<32>_> *param_2,uint param_3,
          FGeometryCacheMeshData *param_4)

{
  FScriptContainerElement *pFVar1;
  TArray<FStreamedGeometryCacheChunk,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FGeometryCacheCodecDecodeArguments *pFVar5;
  uint uVar6;
  uint uVar7;
  
  this->OutMeshData = param_4;
  this->Track = param_1;
  this->Chunks = param_2;
  this->FrameIdentifier = param_3;
  if (param_2->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FGeometryCacheCodecDecodeArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  if ((float)this->FrameIdentifier < *(float *)((param_2->AllocatorInstance).Data + 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<float>(FrameIdentifier) >= Chunks[0].FirstFrame",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheCodecBase.h"
                       ,0x3a,
                       L"Requested frame not in the range of the provided chunks, or chunks are not properly ordered"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FGeometryCacheCodecDecodeArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  pTVar2 = this->Chunks;
  uVar7 = pTVar2->ArrayNum - 1;
  uVar6 = 0;
  if ((int)uVar7 < pTVar2->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FGeometryCacheCodecDecodeArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar1 = (pTVar2->AllocatorInstance).Data + (longlong)pTVar2->ArrayNum * 0x38 + -0x30;
  if (*(float *)pFVar1 <= (float)this->FrameIdentifier &&
      (float)this->FrameIdentifier != *(float *)pFVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<float>(FrameIdentifier) <= Chunks.Last().LastFrame",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheCodecBase.h"
                       ,0x3b,
                       L"Requested frame not in the range of the provided chunks, or chunks are not properly ordered"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FGeometryCacheCodecDecodeArguments *)(*pcVar3)();
      return pFVar5;
    }
  }
  return this;
}

