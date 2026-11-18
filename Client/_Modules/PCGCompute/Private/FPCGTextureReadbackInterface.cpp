// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGCompute
// Functions: 3

// Dispatch @ 1494b6930

void __cdecl
FPCGTextureReadbackInterface::Dispatch
          (FPCGTextureReadbackDispatchParams *param_1,
          TFunction<void___cdecl(void_*,int,int)> *param_2)

{
  bool bVar1;
  FRHICommandListImmediate *pFVar2;
  
  bVar1 = IsInRenderingThread();
  if (bVar1) {
    pFVar2 = GetImmediateCommandList_ForRenderCommand();
    Dispatch_RenderThread(pFVar2,param_1,param_2);
    return;
  }
  Dispatch_GameThread(param_1,param_2);
  return;
}

// Dispatch_GameThread @ 1494b6990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPCGTextureReadbackInterface::Dispatch_GameThread
          (FPCGTextureReadbackDispatchParams *param_1,
          TFunction<void___cdecl(void_*,int,int)> *param_2)

{
  int iVar1;
  FCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  code **ppcVar6;
  FRenderCommandList *this;
  FRenderCommandTag *pFVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  FRHITexture *local_a8;
  FRHIResource *local_a0;
  TIntPoint<int>_u_0 local_98;
  uint local_90;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_a8 = (param_1->SourceTexture).Reference;
  if (local_a8 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_a8);
  }
  local_a0 = (FRHIResource *)(param_1->SourceSampler).Reference;
  if (local_a0 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_a0);
  }
  local_98 = (param_1->SourceDimensions).field0_0x0;
  local_90 = param_1->SourceTextureIndex;
  local_88 = *(code **)param_2;
  local_60 = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,local_78);
  }
  local_d8[0] = (code *)0x0;
  ppcVar6 = FMemory::Malloc(0x60,0x10);
  local_b0 = ppcVar6;
  ppcVar9 = ppcVar6 + 2;
  *ppcVar6 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FPCGTextureReadbackInterface::Dispatch_GameThread'::`2'::<lambda_1>,1,1>
                      ::_vftable_;
  *ppcVar9 = (code *)0x0;
  *ppcVar9 = (code *)local_a8;
  if (local_a8 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_a8);
  }
  ppcVar6[3] = (code *)0x0;
  ppcVar6[3] = (code *)local_a0;
  if (local_a0 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_a0);
  }
  *(TIntPoint<int>_u_0 *)(ppcVar6 + 4) = local_98;
  *(uint *)(ppcVar6 + 5) = local_90;
  ppcVar6[6] = local_88;
  ppcVar6[0xb] = (code *)0x0;
  if (local_88 != (code *)0x0) {
    plVar10 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar10 = local_60;
    }
    (**(code **)*plVar10)();
  }
  if (ppcVar9 != (code **)0x0) {
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPCGTextureReadbackInterface::Dispatch_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPCGTextureReadbackInterface::Dispatch_GameThread_::__l2::TSTR_SceneDrawCompletion167>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
  }
  else {
    if (this->bInitialized == 0) {
      FRenderCommandList::Init(this);
    }
    iVar1 = (this->CommandLists).ArrayNum;
    uVar11 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar11 < iVar1) {
      uVar5 = ~uVar11 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_e8 = (longlong)(int)uVar11;
      local_e0 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = (this->CommandLists).ArrayNum;
    local_58._16_8_ = local_c8[0];
    local_58._24_8_ = local_c8[1];
    local_58._32_8_ = local_c8[2];
    local_28 = 2;
    pFVar2 = (this->CommandLists).AllocatorInstance.Data;
    local_58._0_8_ = local_d8[0];
    local_30 = local_b0;
    local_b0 = (code **)0x0;
    local_d8[0] = (code *)0x0;
    pFVar7 = (FRenderCommandTag *)
             TRenderCommandTag<`FPCGTextureReadbackInterface::Dispatch_GameThread'::__l2::TSTR_SceneDrawCompletion167>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar2 + (iVar1 + -1),
               (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                *)local_58,pFVar7);
    uVar12 = (ulonglong)local_28;
    if (2 < uVar12) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar9 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar9 = local_30;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(local_58);
    }
  }
  if (local_d8[0] != (code *)0x0) {
    ppcVar9 = local_d8 + 2;
    if (local_b0 != (code **)0x0) {
      ppcVar9 = local_b0;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    plVar10 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar10 = local_60;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_a0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_a0);
  }
  if (local_a8 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8);
  }
  return;
}

// Dispatch_RenderThread @ 1494b6c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FPCGTextureReadbackInterface::Dispatch_RenderThread
          (FRHICommandListImmediate *param_1,FPCGTextureReadbackDispatchParams *param_2,
          TFunction<void___cdecl(void_*,int,int)> *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  FRHITransitionInfo_u_8 FVar4;
  FRHIUnorderedAccessView *pFVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FRHITextureCreateDesc *pFVar11;
  FGlobalShaderMap *this;
  FShaderType *pFVar12;
  FName this_00;
  FShaderParametersMetadata *pFVar13;
  FRHIGPUTextureReadback *this_01;
  FName *pFVar14;
  FRHIGPUTextureReadback *pFVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined1 auStackY_698 [32];
  undefined1 local_668 [8];
  undefined8 local_660;
  undefined8 uStack_658;
  FLLMScope local_650;
  FLLMScope local_64c;
  FLLMScope local_648;
  FLLMScope local_644;
  FLLMScope local_640;
  FLLMScope local_63c;
  FLLMScope local_638;
  FLLMScope local_634;
  FLLMScope local_630 [2];
  FRHITransitionInfo_u_8 local_628;
  undefined1 local_620 [16];
  undefined4 local_610;
  undefined4 uStack_60c;
  TArrayView<FRHITransitionInfo_const_,int> local_608;
  TIntVector3<int>_u_0 local_5f8;
  FMemScope local_5e8;
  FMemScope local_5e0;
  FMemScope local_5d8;
  FMemScope local_5d0;
  FMemScope local_5c8;
  FMemScope local_5c0;
  FName local_5b8;
  FMemScope local_5b0;
  FMemScope local_5a8;
  FName local_5a0;
  FMemScope local_598;
  undefined8 local_590;
  int local_588;
  undefined8 local_580;
  int local_578;
  FRHITexture *local_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined4 local_558;
  undefined2 local_554;
  FRHITexture *local_550;
  undefined8 local_548;
  undefined4 local_540;
  undefined4 local_538;
  undefined2 local_534;
  FRHITexture *local_530;
  undefined8 local_528;
  undefined4 local_520;
  undefined4 local_518;
  undefined2 local_514;
  FRHITexture *local_510;
  undefined8 local_508;
  undefined4 local_500;
  undefined4 local_4f8;
  undefined2 local_4f4;
  FParameters local_4e8;
  FRHITransitionInfo local_4b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_488;
  FName local_478;
  undefined1 local_470 [8];
  FString local_468;
  TShaderRefBase<FPCGTextureReadbackCS,FShaderMapPointerTable> local_458;
  undefined1 *local_448 [3];
  undefined1 *local_430 [3];
  FRHITextureDesc local_418;
  wchar_t *local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  FRHITextureDesc local_398;
  wchar_t *local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined1 local_318 [56];
  longlong *local_2e0;
  FRHITextureDesc local_2c8;
  wchar_t *local_278;
  ERHIAccess local_270;
  ERHITextureInitAction local_26c;
  FResourceBulkDataInterface *local_268;
  FName local_260;
  FName local_258;
  FRHITextureDesc local_248;
  wchar_t *local_1f8;
  ERHIAccess local_1f0;
  ERHITextureInitAction local_1ec;
  FResourceBulkDataInterface *local_1e8;
  FName local_1e0;
  FName local_1d8;
  FRHITextureDesc local_1c8;
  wchar_t *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  FRHITextureCreateDesc local_148;
  FRHITextureCreateDesc local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_698;
  FLLMScope::FLLMScope(local_630,LLMTagDeclaration_PCGCompute.UniqueName,false,None,Default,true);
  local_5a0 = LLMTagDeclaration_PCGCompute.UniqueName;
  FMemScope::FMemScope(&local_5b0,&local_5a0,true);
  if ((((param_2->SourceTexture).Reference == (FRHITexture *)0x0) ||
      ((param_2->SourceSampler).Reference == (FRHISamplerState *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.SourceTexture && Params.SourceSampler",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCGCompute\\Private\\PCGTextureReadback.cpp"
                         ,0x2e,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar10 = (**(code **)(((param_2->SourceTexture).Reference)->_padding_ + 0x20))();
  local_4e8.SourceDimensions.field0_0x0._s_0.X =
       (float)(param_2->SourceDimensions).field0_0x0._s_0.X;
  local_4e8.SourceSampler = (param_2->SourceSampler).Reference;
  local_4e8.SourceDimensions.field0_0x0._s_0.Y =
       (float)(param_2->SourceDimensions).field0_0x0._s_0.Y;
  if (*(char *)(lVar10 + 0x32) == '\x01') {
    pFVar11 = FRHITextureCreateDesc::Create2D(&local_148,L"PCGDummyTexture",1,1,PF_G8);
    pFVar11->_padding_ = 8;
    FRHITextureDesc::FRHITextureDesc(&local_248,(FRHITextureDesc *)pFVar11);
    local_1f8 = pFVar11->DebugName;
    local_1f0 = pFVar11->InitialState;
    local_1ec = pFVar11->InitAction;
    local_1e8 = pFVar11->BulkData;
    local_1e0 = pFVar11->ClassName;
    local_1d8 = pFVar11->OwnerName;
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    FRHICommandListBase::CreateTexture
              ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)local_620);
    uVar3 = local_620._0_8_;
    FLLMScope::FLLMScope(&local_64c,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_5e8,Textures,true);
    local_568 = 0;
    local_560 = 0;
    local_570 = (FRHITexture *)uVar3;
    local_558 = 1;
    local_554 = 0x100;
    FLLMScope::FLLMScope(&local_650,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_598,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_448);
    FMemScope::~FMemScope(&local_598);
    FLLMScope::~FLLMScope(&local_650);
    FMemScope::~FMemScope(&local_5e8);
    FLLMScope::~FLLMScope(&local_64c);
    *local_448[0] = 0;
    local_550 = (FRHITexture *)local_620._0_8_;
    local_548 = 0;
    local_538 = 3;
    local_540 = 0;
    local_534 = 0x100;
    FLLMScope::FLLMScope(&local_648,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_5e0,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1,&local_550);
    FMemScope::~FMemScope(&local_5e0);
    FLLMScope::~FLLMScope(&local_648);
    local_4e8.SourceTextureArray = (param_2->SourceTexture).Reference;
    local_4e8.SourceTextureIndex = param_2->SourceTextureIndex;
    local_4e8.SourceTexture = (FRHITexture *)local_620._0_8_;
    local_1c8.AliasableFormats.AllocatorInstance.SecondaryData =
         local_248.AliasableFormats.AllocatorInstance.SecondaryData;
    if ((FRHITexture *)local_620._0_8_ != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_620._0_8_);
      local_1c8.AliasableFormats.AllocatorInstance.SecondaryData =
           local_248.AliasableFormats.AllocatorInstance.SecondaryData;
    }
  }
  else {
    local_610 = 1;
    uStack_60c = 1;
    local_418.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_418.Flags = None;
    local_3c8 = L"PCGDummyTextureArray";
    local_418.Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
    local_418.ClearValue._0_8_ = 1;
    local_418.ClearValue.Value._4_8_ = 0;
    local_418.ClearValue.Value.Color[3] = 0.0;
    local_418.ExtData = 0;
    local_418.Depth = 1;
    local_418.ArraySize = 1;
    local_418.NumMips = '\x01';
    local_418.NumSamples = '\x01';
    local_418.Dimension = Texture2DArray;
    local_418.Format = PF_G8;
    local_418.UAVFormat = PF_Unknown;
    local_418.FastVRAMPercentage = 0xff;
    local_418.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_418.AliasableFormats.ArrayNum = 0;
    local_418.AliasableFormats.ArrayMax = 1;
    local_3c0 = 0;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3a8 = 0;
    FRHITextureDesc::FRHITextureDesc(&local_398,&local_418);
    local_348 = local_3c8;
    local_340 = (undefined4)local_3c0;
    local_33c = local_3c0._4_4_;
    local_338 = local_3b8;
    local_330 = local_3b0;
    local_328 = local_3a8;
    if (local_418.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_418.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_398.Flags = ShaderResource;
    FRHITextureDesc::FRHITextureDesc(&local_1c8,&local_398);
    local_178 = local_348;
    local_170 = local_340;
    local_16c = local_33c;
    local_168 = local_338;
    local_160 = local_330;
    local_158 = local_328;
    if (local_398.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_398.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    FRHICommandListBase::CreateTexture
              ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)(local_620 + 8));
    uVar3 = local_620._8_8_;
    FLLMScope::FLLMScope(&local_640,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_5a8,Textures,true);
    local_528 = 0;
    local_514 = 0;
    local_530 = (FRHITexture *)uVar3;
    local_518 = 1;
    local_520 = 0;
    FLLMScope::FLLMScope(&local_644,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_5d8,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_430);
    FMemScope::~FMemScope(&local_5d8);
    FLLMScope::~FLLMScope(&local_644);
    FMemScope::~FMemScope(&local_5a8);
    FLLMScope::~FLLMScope(&local_640);
    uVar3 = local_620._8_8_;
    *local_430[0] = 0;
    FLLMScope::FLLMScope(&local_638,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_5c8,Textures,true);
    local_508 = 0;
    local_4f4 = 0;
    local_510 = (FRHITexture *)uVar3;
    local_4f8 = 3;
    local_500 = 0;
    FLLMScope::FLLMScope(&local_63c,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_5d0,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1,&local_510);
    FMemScope::~FMemScope(&local_5d0);
    FLLMScope::~FLLMScope(&local_63c);
    FMemScope::~FMemScope(&local_5c8);
    FLLMScope::~FLLMScope(&local_638);
    local_4e8.SourceTexture = (param_2->SourceTexture).Reference;
    local_4e8.SourceTextureArray = (FRHITexture *)local_620._8_8_;
    local_4e8.SourceTextureIndex = 0xffffffff;
    if ((FRHITexture *)local_620._8_8_ != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_620._8_8_);
    }
  }
  pFVar15 = (FRHIGPUTextureReadback *)0x0;
  if (local_1c8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_1c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  pFVar11 = FRHITextureCreateDesc::Create2D
                      (&local_c8,L"PCGTexture Readback Compute Target",
                       (param_2->SourceDimensions).field0_0x0._s_0.X,
                       (param_2->SourceDimensions).field0_0x0._s_0.Y,PF_B8G8R8A8);
  uVar3 = FClearValueBinding::None.Value._4_8_;
  pFVar11->_padding_ = FClearValueBinding::None._0_8_;
  pFVar11->_padding_ = uVar3;
  *(float *)&pFVar11->_padding_ = FClearValueBinding::None.Value.Color[3];
  pFVar11->_padding_ = 0x20048;
  pFVar11->InitialState = UAVCompute;
  FRHITextureDesc::FRHITextureDesc(&local_2c8,(FRHITextureDesc *)pFVar11);
  local_278 = pFVar11->DebugName;
  local_270 = pFVar11->InitialState;
  local_26c = pFVar11->InitAction;
  local_268 = pFVar11->BulkData;
  local_260 = pFVar11->ClassName;
  local_258 = pFVar11->OwnerName;
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  bVar6 = FRHITextureDesc::Validate(&local_2c8,L"",false);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetTextureDesc.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCGCompute\\Private\\PCGTextureReadback.cpp"
                         ,0x66,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)&local_628);
  FVar4 = local_628;
  uStack_658 = 0;
  local_660 = &DAT_100000003;
  if ((local_628.Resource == (FRHIResource *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xc0b,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar10 = (**(code **)((FVar4.Resource)->_padding_ + 0x20))(FVar4.Resource);
  cVar1 = *(char *)(lVar10 + 0x32);
  if (cVar1 == '\0') {
    bVar7 = local_660._2_1_ & 0x9f | 0x10;
  }
  else if (cVar1 == '\x01') {
    bVar7 = local_660._2_1_ & 0xaf | 0x20;
  }
  else if (cVar1 == '\x02') {
    bVar7 = local_660._2_1_ & 0xdf | 0x50;
  }
  else if (cVar1 == '\x03') {
    bVar7 = local_660._2_1_ & 0xbf | 0x30;
  }
  else {
    if (cVar1 != '\x04') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xbfb,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_1494b7488;
    }
    bVar7 = local_660._2_1_ & 0xcf | 0x40;
  }
  local_660._0_3_ = CONCAT12(bVar7,(undefined2)local_660);
LAB_1494b7488:
  FVar4 = local_628;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name997,L"RHIMisc/CreateUnorderedAccessView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (&local_634,
             `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name997,false,None,Default,true);
  FMemScope::FMemScope
            (&local_5c0,
             &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name997,true);
  lVar10 = (**(code **)((FVar4.Resource)->_padding_ + 0x28))(FVar4.Resource);
  if ((lVar10 != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->GetTextureReference() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x3e6,
                         L"Creating an unordered access view of an FRHITextureReference is not supported."
                        ), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_5b8,param_1);
  FMemScope::~FMemScope(&local_5c0);
  FLLMScope::~FLLMScope(&local_634);
  local_4e8.OutputTexture = (FRHIUnorderedAccessView *)local_5b8;
  if (local_5b8 != (FName)0x0) {
    FRHIResource::Release((FRHIResource *)local_5b8);
  }
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar12 = (FShaderType *)FPCGTextureReadbackCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_488,pFVar12,0);
  if (local_488.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_470);
    ::FName::ToString((FName *)this_00,&local_468);
    FPCGTextureReadbackCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FPCGTextureReadbackCS::GetStaticType();
  iVar8 = (param_2->SourceDimensions).field0_0x0._s_0.X + 7;
  local_458.ShaderContent = (FPCGTextureReadbackCS *)local_488.ShaderContent;
  local_458.ShaderMap = local_488.ShaderMap;
  iVar9 = (param_2->SourceDimensions).field0_0x0._s_0.Y + 7;
  pFVar13 = FPCGTextureReadbackCS::FParameters::FTypeInfo::GetStructMetadata();
  local_5f8._s_0.Z = 1;
  local_5f8._s_0.X = (int)((iVar8 >> 0x1f & 7U) + iVar8) >> 3;
  local_5f8._s_0.Y = (int)((iVar9 >> 0x1f & 7U) + iVar9) >> 3;
  FComputeShaderUtils::Dispatch<FPCGTextureReadbackCS>
            ((FRHIComputeCommandList *)param_1,&local_458,pFVar13,&local_4e8,
             (TIntVector3<int> *)&local_5f8._s_0);
  local_608.ArrayNum = 1;
  local_4b8._padding_._0_4_ = 0xffffffff;
  local_4b8._padding_._4_2_ = 0xffff;
  local_4b8.field1_0x8 = local_628;
  local_608.DataPtr = &local_4b8;
  local_4b8.Type = Texture;
  local_4b8.AccessBefore = UAVCompute;
  local_4b8.AccessAfter = CopySrc;
  local_4b8.Flags = None;
  local_4b8.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_608,None);
  this_01 = ::operator_new(0x58);
  if (this_01 != (FRHIGPUTextureReadback *)0x0) {
    pFVar14 = ::FName::FName(&local_478,L"PCGTextureReadbackCopy");
    pFVar15 = FRHIGPUTextureReadback::FRHIGPUTextureReadback(this_01,*pFVar14);
  }
  pFVar5 = local_4e8.OutputTexture;
  cVar1 = *(char *)&((FAtomicFlags *)((longlong)local_4e8.OutputTexture + 0x20))->Packed;
  if (((cVar1 == '\0') || (cVar1 == '\x01')) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewDesc.IsTexture()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xcc3,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_578 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_588 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_580 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_590 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (**(code **)(pFVar15->_padding_ + 8))
            (pFVar15,param_1,((FRHIResource *)((longlong)pFVar5 + 0x18))->_padding_,&local_580);
  local_318._16_8_ = *(undefined8 *)param_3;
  local_2e0 = (longlong *)0x0;
  local_318._0_8_ = pFVar15;
  if (local_318._16_8_ != 0) {
    puVar16 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar16)(puVar16,local_318 + 0x20);
  }
  `FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::
  operator()<_FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_2>_&>
            (local_668,(<lambda_2> *)local_318);
  if (local_318._16_8_ != 0) {
    plVar17 = (longlong *)(local_318 + 0x20);
    if (local_2e0 != (longlong *)0x0) {
      plVar17 = local_2e0;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (local_628.Resource != (FRHIResource *)0x0) {
    FRHIResource::Release(local_628.Resource);
  }
  if (local_2c8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_2c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  FMemScope::~FMemScope(&local_5b0);
  FLLMScope::~FLLMScope(local_630);
  return;
}

