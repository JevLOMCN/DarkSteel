// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FRendererViewExtension @ 1454d72a0

void __thiscall
`GetRendererViewExtension'::__l2::FRendererViewExtension::~FRendererViewExtension(void *this)

{
  return;
}

// PostRenderView_RenderThread @ 1454ffd70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`GetRendererViewExtension'::__l2::FRendererViewExtension::PostRenderView_RenderThread
          (void *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  FSceneViewFamily *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FRDGTexture *pFVar5;
  FCanvas *this_00;
  FSceneViewFamily *local_78;
  FSceneView *local_70;
  FRDGEventName local_68;
  FRDGTexture *local_50;
  TIntRect<int>_u_0 local_48;
  ERenderTargetLoadAction local_38;
  FScreenPassRenderTarget local_30;
  
  pFVar1 = param_2->Family;
  if (((&pFVar1->EngineShowFlags)->OnScreenDebug != 0) &&
     ((pFVar1->DisplayInternalsData).DisplayInternalsCVarValue != 0)) {
    puVar4 = (undefined8 *)(**(code **)(pFVar1->RenderTarget->_padding_ + 0x10))();
    pFVar5 = FRDGBuilder::FindExternalTexture(param_1,(FRHITexture *)*puVar4);
    FScreenPassRenderTarget::CreateViewFamilyOutput(&local_30,pFVar5,(FViewInfo *)param_2);
    local_50 = (FRDGTexture *)local_30._padding_;
    local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_30._padding_;
    local_48._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_30._padding_;
    local_38 = local_30.LoadAction;
    FRDGEventName::FRDGEventName(&local_68,1,L"DisplayInternals");
    local_78 = pFVar1;
    local_70 = param_2;
    if ((local_50 == (FRDGTexture *)0x0) ||
       ((local_48._8_4_ == local_48._0_4_ && (local_48._12_4_ == local_48._4_4_)))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Output.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x2dd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = FCanvas::Create(param_1,local_50,(FHitProxyConsumer *)0x0,&param_2->Family->Time,
                              param_2->FeatureLevel,param_2->Family->DebugDPIScale);
    FCanvas::SetRenderTargetRect(this_00,(TIntRect<int> *)&local_48._s_0);
    `DisplayInternals'::__l5::<lambda_1>::operator()(&local_78,this_00);
    FCanvas::Flush_RenderThread(this_00,param_1,false);
    if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

