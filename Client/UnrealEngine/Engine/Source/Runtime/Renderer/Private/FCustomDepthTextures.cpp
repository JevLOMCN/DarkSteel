// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Create @ 14474c390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FCustomDepthTextures * __cdecl
FCustomDepthTextures::Create
          (FCustomDepthTextures *__return_storage_ptr__,FRDGBuilder *param_1,TIntPoint<int> param_2,
          EShaderPlatform param_3,bool param_4,ushort param_5)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  ETextureCreateFlags EVar3;
  ECustomDepthMode EVar4;
  bool bVar5;
  FCustomDepthTextures *pFVar6;
  longlong lVar7;
  undefined1 uVar8;
  ForElementType<EPixelFormat> FVar9;
  ETextureCreateFlags EVar10;
  undefined1 auStackY_108 [32];
  ForElementType<EPixelFormat> local_b8;
  FRDGTextureSRV *pFStack_a8;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined5 uStack_9d;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  TIntPoint<int>_u_0 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  ForElementType<EPixelFormat> local_60;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  EVar4 = GetCustomDepthMode();
  if (EVar4 == Disabled) {
    __return_storage_ptr__->bSeparateStencilBuffer = false;
    __return_storage_ptr__->DepthAction = EClear;
    __return_storage_ptr__->Depth = (FRDGTexture *)0x0;
    __return_storage_ptr__->Stencil = (FRDGTextureSRV *)0x0;
    __return_storage_ptr__->StencilAction = EClear;
    return __return_storage_ptr__;
  }
  EVar4 = GetCustomDepthMode();
  EVar3 = GFastVRamConfig.CustomDepth;
  pFStack_a8 = (FRDGTextureSRV *)0x0;
  uVar8 = 0;
  local_a0 = 0;
  EVar10 = GFastVRamConfig.CustomDepth | (ShaderResource|DepthStencilTargetable);
  bVar5 = UseNanite(param_3,true,true);
  if (((bVar5) && (bVar5 = UseComputeDepthExport(), bVar5)) &&
     (bVar5 = Nanite::GetSupportsCustomDepthRendering(), bVar5)) {
    EVar10 = EVar3 | (UAV|ShaderResource|DepthStencilTargetable);
  }
  else {
    pTVar2 = CVarCustomDepthEnableFastClear.Ref;
    bVar5 = IsInParallelRenderingThread();
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FCustomDepthTextures *)(*pcVar1)();
      return pFVar6;
    }
    if (pTVar2->ShadowedValue[1] == false) {
      EVar10 = EVar3 | (NoFastClear|ShaderResource|DepthStencilTargetable);
    }
  }
  local_80 = FClearValueBinding::DepthFar.Value.Color[3];
  local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_78 = 0;
  local_64 = 0xff00;
  local_60.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_50 = 0;
  local_98._8_8_ = FClearValueBinding::DepthFar._0_8_;
  local_98._16_8_ = FClearValueBinding::DepthFar.Value._4_8_;
  local_4c = 1;
  if (param_4) {
    local_6c._2_2_ = param_5;
    local_6c._0_2_ = 1;
    local_68 = 0xb010101;
  }
  else {
    local_6c = 0x10001;
    local_68 = 0xb000101;
  }
  local_b8.InlineData[0] = ',';
  local_98._0_8_ = EVar10;
  local_74 = param_2.field0_0x0;
  if (((&local_60 <= &local_b8) && (&local_b8 < &local_60.field_0x1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FCustomDepthTextures *)(*pcVar1)();
    return pFVar6;
  }
  if (local_50 == local_4c) {
    local_50 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                         (0x101,&local_60,&local_4c);
  }
  FVar9 = (ForElementType<EPixelFormat>)&local_60;
  if (local_60.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FVar9 = local_60.SecondaryData;
  }
  lVar7 = (longlong)local_50;
  local_50 = local_50 + 1;
  *(uchar *)(lVar7 + (longlong)FVar9) = local_b8.InlineData[0];
  local_b8.SecondaryData =
       (ForElementType<EPixelFormat>)
       FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_98,L"CustomDepth",None);
  uStack_9f = 2;
  if (EVar4 == EnabledWithStencil) {
    uVar8 = 2;
  }
  __return_storage_ptr__->Depth = (FRDGTexture *)local_b8.SecondaryData;
  __return_storage_ptr__->Stencil = pFStack_a8;
  __return_storage_ptr__->bSeparateStencilBuffer = (bool)local_a0;
  __return_storage_ptr__->DepthAction = 2;
  __return_storage_ptr__->StencilAction = uVar8;
  *(undefined5 *)&__return_storage_ptr__->field_0x13 = uStack_9d;
  if (local_60.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    uStack_9e = uVar8;
    FMemory::Free((void *)local_60.SecondaryData);
  }
  return __return_storage_ptr__;
}

