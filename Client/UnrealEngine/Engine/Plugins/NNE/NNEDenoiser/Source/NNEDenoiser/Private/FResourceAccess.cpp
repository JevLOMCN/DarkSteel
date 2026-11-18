// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 2

// GetIntermediateTexture @ 14eaf93b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
UE::NNEDenoiser::Private::FResourceAccess::GetIntermediateTexture
          (FResourceAccess *this,EResourceName param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FRDGTexture *pFVar5;
  
  pTVar4 = TMapBase<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked(&this->ResourceManager->IntermediateTextureMap,param_1);
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameIdx >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (pTVar4->ArrayNum <= param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameIdx < IntermediateTextures.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                       ,0xa3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = 0;
  if (param_2 < pTVar4->ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar1)();
      return pFVar5;
    }
  }
  return *(FRDGTexture **)((pTVar4->AllocatorInstance).Data + (longlong)param_2 * 8);
}

// GetTexture @ 14eafa0b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
UE::NNEDenoiser::Private::FResourceAccess::GetTexture
          (FResourceAccess *this,EResourceName param_1,int param_2)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FResourceManager::GetTexture(this->ResourceManager,param_1,param_2,false);
  return pFVar1;
}

