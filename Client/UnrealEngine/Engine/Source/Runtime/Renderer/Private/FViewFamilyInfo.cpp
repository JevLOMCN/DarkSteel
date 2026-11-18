// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// GetSceneTextures @ 1448167c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneTextures * __thiscall FViewFamilyInfo::GetSceneTextures(FViewFamilyInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FSceneTextures *pFVar3;
  
  if (((char)this->_padding_ == '\0') ||
     (pFVar3 = this->SceneTextures, (char)pFVar3->_padding_ == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                       ,0x7c0,
                       L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneTextures *)(*pcVar1)();
      return pFVar3;
    }
    pFVar3 = this->SceneTextures;
  }
  return pFVar3;
}

// FViewFamilyInfo @ 1454d4eb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FViewFamilyInfo * __thiscall
FViewFamilyInfo::FViewFamilyInfo
          (FViewFamilyInfo *this,ConstructionValues *param_1,FViewFamilyInfo *param_2)

{
  FSceneViewFamily::FSceneViewFamily((FSceneViewFamily *)this,param_1);
  this->_padding_ = (longlong)&___7FViewFamilyInfo__6B_;
  FSceneTexturesConfig::FSceneTexturesConfig(&this->SceneTexturesConfig);
  this->bIsSceneTextureSizedCapture = false;
  *(undefined1 *)&this->_padding_ = 1;
  this->SceneTextures = param_2->SceneTextures;
  return this;
}

// FViewFamilyInfo @ 1454d4f10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FViewFamilyInfo * __thiscall
FViewFamilyInfo::FViewFamilyInfo(FViewFamilyInfo *this,FSceneViewFamily *param_1)

{
  FSceneTextures *pFVar1;
  FSceneTextures *pFVar2;
  
  FSceneViewFamily::FSceneViewFamily((FSceneViewFamily *)this,param_1);
  this->_padding_ = (longlong)&___7FViewFamilyInfo__6B_;
  FSceneTexturesConfig::FSceneTexturesConfig(&this->SceneTexturesConfig);
  this->bIsSceneTextureSizedCapture = false;
  *(undefined1 *)&this->_padding_ = 1;
  pFVar1 = ::operator_new(0x2c0);
  pFVar2 = (FSceneTextures *)0x0;
  if (pFVar1 != (FSceneTextures *)0x0) {
    pFVar1->_padding_ = 0;
    *(undefined1 *)&pFVar1->_padding_ = 0;
    FSceneTexturesConfig::FSceneTexturesConfig((FSceneTexturesConfig *)&pFVar1->_padding_);
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined2 *)&pFVar1->_padding_ = 0x200;
    *(undefined1 *)((longlong)&pFVar1->_padding_ + 2) = 2;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->SmallDepth = (FRDGTexture *)0x0;
    pFVar1->GBufferA = (FRDGTexture *)0x0;
    pFVar1->GBufferB = (FRDGTexture *)0x0;
    pFVar1->GBufferC = (FRDGTexture *)0x0;
    pFVar1->GBufferD = (FRDGTexture *)0x0;
    pFVar1->GBufferE = (FRDGTexture *)0x0;
    pFVar1->GBufferF = (FRDGTexture *)0x0;
    pFVar1->GBufferSGGX = (FRDGTexture *)0x0;
    (pFVar1->DepthAux).Target = (FRDGTexture *)0x0;
    (pFVar1->DepthAux).Resolve = (FRDGTexture *)0x0;
    pFVar1->Velocity = (FRDGTexture *)0x0;
    pFVar1->MobileLocalLightTextureA = (FRDGTexture *)0x0;
    pFVar1->MobileLocalLightTextureB = (FRDGTexture *)0x0;
    pFVar1->ScreenSpaceAO = (FRDGTexture *)0x0;
    pFVar1->DebugAux = (FRDGTexture *)0x0;
    pFVar1->StereoMotionVectors = (FRDGTexture *)0x0;
    pFVar1->StereoMotionVectorDepth = (FRDGTexture *)0x0;
    pFVar2 = pFVar1;
  }
  this->SceneTextures = pFVar2;
  pFVar2->_padding_ = (longlong)this;
  return this;
}

// ~FViewFamilyInfo @ 1454d76a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FViewFamilyInfo::~FViewFamilyInfo(FViewFamilyInfo *this)

{
  FSceneTextures *pFVar1;
  
  pFVar1 = this->SceneTextures;
  this->_padding_ = (longlong)&___7FViewFamilyInfo__6B_;
  if ((pFVar1 != (FSceneTextures *)0x0) && ((FViewFamilyInfo *)pFVar1->_padding_ == this)) {
    if ((void *)pFVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar1->_padding_);
    }
    *(undefined4 *)&pFVar1->_padding_ = 0;
    if ((void *)pFVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar1->_padding_);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->_padding_);
    ::operator_delete(pFVar1,0x2c0);
  }
  FSceneViewFamily::~FSceneViewFamily((FSceneViewFamily *)this);
  return;
}

// GetSceneTextures @ 1457f5350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneTextures * __thiscall FViewFamilyInfo::GetSceneTextures(FViewFamilyInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FSceneTextures *pFVar3;
  
  if (((char)this->_padding_ == '\0') ||
     (pFVar3 = this->SceneTextures, (char)pFVar3->_padding_ == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                       ,0x7c6,
                       L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneTextures *)(*pcVar1)();
      return pFVar3;
    }
    pFVar3 = this->SceneTextures;
  }
  return pFVar3;
}

