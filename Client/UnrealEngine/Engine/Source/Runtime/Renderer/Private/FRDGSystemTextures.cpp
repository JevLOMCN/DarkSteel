// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// Create @ 1456fc310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGSystemTextures * __cdecl FRDGSystemTextures::Create(FRDGBuilder *param_1)

{
  char cVar1;
  FRDGSystemTextures *pFVar2;
  FRDGTexture *pFVar3;
  FRDGTexture *pFVar4;
  FRDGTextureSRV *pFVar5;
  FRDGTextureSRVDesc local_28;
  
  pFVar2 = FRDGBlackboard::Create<FRDGSystemTextures>(&param_1->Blackboard);
  pFVar4 = (FRDGTexture *)0x0;
  pFVar3 = pFVar4;
  if (GSystemTextures._32_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x20,
                        SkipTracking);
  }
  pFVar2->White = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._40_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x28,
                        SkipTracking);
  }
  pFVar2->Black = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._48_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x30,
                        SkipTracking);
  }
  pFVar2->BlackAlphaOne = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._56_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x38,
                        SkipTracking);
  }
  pFVar2->BlackArray = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._160_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xa0,
                        SkipTracking);
  }
  pFVar2->MaxFP16Depth = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._168_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xa8,
                        SkipTracking);
  }
  pFVar2->DepthDummy = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._184_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xb8,
                        SkipTracking);
  }
  pFVar2->BlackDepthCube = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._176_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xb0,
                        SkipTracking);
  }
  pFVar2->StencilDummy = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._192_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xc0,
                        SkipTracking);
  }
  pFVar2->Green = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._200_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xc8,
                        SkipTracking);
  }
  pFVar2->DefaultNormal8Bit = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._208_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xd0,
                        SkipTracking);
  }
  pFVar2->MidGrey = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._216_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xd8,
                        SkipTracking);
  }
  pFVar2->VolumetricBlack = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._224_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xe0,
                        SkipTracking);
  }
  pFVar2->VolumetricBlackAlphaOne = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._232_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xe8,
                        SkipTracking);
  }
  pFVar2->VolumetricBlackUint = pFVar3;
  pFVar3 = pFVar4;
  if (GSystemTextures._240_8_ != 0) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xf0,
                        SkipTracking);
  }
  pFVar2->CubeBlack = pFVar3;
  if (GSystemTextures._248_8_ != 0) {
    pFVar4 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xf8,
                        SkipTracking);
  }
  local_28.Texture = pFVar2->StencilDummy;
  pFVar2->CubeArrayBlack = pFVar4;
  local_28._padding_._0_2_ = 0;
  local_28._padding_._3_1_ = 0;
  local_28._padding_._4_4_ = 0;
  local_28._padding_._0_1_ = 0;
  local_28._padding_._2_1_ = 0;
  local_28._padding_._2_1_ = ((local_28.Texture)->Desc).field_0x30;
  cVar1 = ((local_28.Texture)->Desc).field_0x32;
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    local_28._padding_._4_4_ = (uint)*(ushort *)&((local_28.Texture)->Desc).field_0x2e << 0x10;
  }
  pFVar5 = FRDGBuilder::CreateSRV(param_1,&local_28);
  pFVar2->StencilDummySRV = pFVar5;
  return pFVar2;
}

// Get @ 145707cc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGSystemTextures * __cdecl FRDGSystemTextures::Get(FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGSystemTextures *pFVar3;
  
  pFVar3 = FRDGBlackboard::Get<FRDGSystemTextures>(&param_1->Blackboard);
  if ((pFVar3 == (FRDGSystemTextures *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemTextures",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SystemTextures.cpp"
                         ,0x88,
                         L"FRDGSystemTextures were not initialized. Call FRDGSystemTextures::Create() first."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRDGSystemTextures *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// IsValid @ 1457188a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __cdecl FRDGSystemTextures::IsValid(FRDGBuilder *param_1)

{
  FRDGSystemTextures *pFVar1;
  
  pFVar1 = FRDGBlackboard::Get<FRDGSystemTextures>(&param_1->Blackboard);
  return pFVar1 != (FRDGSystemTextures *)0x0;
}

