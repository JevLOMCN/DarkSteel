// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// operator() @ 1487824f0

void __thiscall
`IStereoRendering::RenderTexture_RenderThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRDGResource *this_00;
  
  if ((FRDGResource *)**(undefined8 **)((longlong)this + 8) != (FRDGResource *)0x0) {
    FRDGResource::ValidateRHIAccess((FRDGResource *)**(undefined8 **)((longlong)this + 8));
  }
  this_00 = *(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x20);
  if (this_00 != (FRDGResource *)0x0) {
    FRDGResource::ValidateRHIAccess(this_00);
    return;
  }
  return;
}

// IsAPrimaryView @ 1487aeb90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl IStereoRendering::IsAPrimaryView(FSceneView *param_1)

{
  if ((param_1->StereoPass != eSSP_FULL) && (param_1->StereoPass != eSSP_PRIMARY)) {
    return false;
  }
  return true;
}

// IsASecondaryView @ 1487aebb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl IStereoRendering::IsASecondaryView(FSceneView *param_1)

{
  return param_1->StereoPass == eSSP_SECONDARY;
}

// IsStartInVR @ 1487af530

bool __cdecl IStereoRendering::IsStartInVR(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  UClass *pUVar4;
  wchar_t *pwVar5;
  bool local_res8 [32];
  
  pTVar1 = CVarForceStartInVR.Ref;
  local_res8[0] = false;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_1487af55d;
    }
  }
  lVar3 = 0;
LAB_1487af55d:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) < 1) {
    pUVar4 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      FConfigCacheIni::GetBool
                (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",L"bStartInVR",local_res8,
                 &GGameIni);
    }
    else {
      pUVar4 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
      if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar4);
      }
      local_res8[0] = (bool)(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0xa;
    }
  }
  else {
    local_res8[0] = true;
  }
  pwVar5 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar5,L"vr");
  if ((!bVar2) && (local_res8[0] == false)) {
    return false;
  }
  return true;
}

// IsStereoEyeView @ 1487af610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl IStereoRendering::IsStereoEyeView(FSceneView *param_1)

{
  return param_1->StereoPass != eSSP_FULL;
}

// RenderTexture_RenderThread @ 1487beab0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IStereoRendering::RenderTexture_RenderThread
          (IStereoRendering *this,FRDGBuilder *param_1,FRDGTexture *param_2,FRDGTexture *param_3,
          TVector2<float> param_4)

{
  code *pcVar1;
  bool bVar2;
  FRenderTextureDeprecationPass *pFVar3;
  FRDGEventName *pFVar4;
  FRenderTargetBinding local_78;
  <lambda_1> local_60;
  FRDGTextureAccess local_48;
  FRDGEventName local_30;
  
  pFVar3 = FRDGAllocator::Alloc<FRenderTextureDeprecationPass>((FRDGAllocator *)&param_1->_padding_)
  ;
  FRDGTextureAccess::FRDGTextureAccess(&local_48,param_3,SRVGraphics);
  *(FRDGTexture **)&pFVar3->SrcTexture = local_48.Texture;
  (pFVar3->SrcTexture).field_0x8 = local_48.SubresourceRange.MipIndex;
  (pFVar3->SrcTexture).field_0x9 = local_48.SubresourceRange.PlaneSlice;
  *(ushort *)&(pFVar3->SrcTexture).field_0xa = local_48.SubresourceRange.ArraySlice;
  (pFVar3->SrcTexture).field_0xc = local_48.SubresourceRange.NumMips;
  (pFVar3->SrcTexture).field_0xd = local_48.SubresourceRange.NumPlaneSlices;
  *(ushort *)&(pFVar3->SrcTexture).field_0xe = local_48.SubresourceRange.NumArraySlices;
  local_78.ResolveTexture = (FRDGTexture *)0x0;
  *(ERHIAccess *)&(pFVar3->SrcTexture).field_0x10 = local_48.Access;
  *(undefined4 *)&(pFVar3->SrcTexture).field_0x14 = local_48._20_4_;
  local_78.LoadAction = ELoad;
  local_78.MipIndex = '\0';
  local_78.ArraySlice = -1;
  local_78.Texture = param_2;
  bVar2 = FRenderTargetBinding::Validate(&local_78);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x216,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (pFVar3->RenderTargets).Output.Elements[0].Texture = local_78.Texture;
  (pFVar3->RenderTargets).Output.Elements[0].ResolveTexture = local_78.ResolveTexture;
  (pFVar3->RenderTargets).Output.Elements[0].LoadAction = local_78.LoadAction;
  (pFVar3->RenderTargets).Output.Elements[0].MipIndex = local_78.MipIndex;
  (pFVar3->RenderTargets).Output.Elements[0].ArraySlice = local_78.ArraySlice;
  *(undefined4 *)&(pFVar3->RenderTargets).Output.Elements[0].field_0x14 = local_78._20_4_;
  local_60.WindowSize.field0_0x0._s_0 = param_4.field0_0x0;
  local_60.__this = this;
  local_60.Pass = pFVar3;
  pFVar4 = FRDGEventName::FRDGEventName
                     (&local_30,1,L"IStereoRendering_RenderTexture_DeprecationStub");
  FRDGBuilder::
  AddPass<FRenderTextureDeprecationPass,_IStereoRendering::RenderTexture_RenderThread_::__l2::<lambda_1>_>
            (param_1,pFVar4,pFVar3,Raster,&local_60);
  if (local_30.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// RenderTexture_RenderThread @ 1487bebe0

void __thiscall
IStereoRendering::RenderTexture_RenderThread
          (IStereoRendering *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,
          FRHITexture *param_3,TVector2<double> *param_4)

{
  return;
}

// ~IStereoRendering @ 148b1ee20

void __thiscall IStereoRendering::~IStereoRendering(IStereoRendering *this)

{
  *this = (IStereoRendering)&___7IStereoRendering__6B_;
  return;
}

// EndFinalPostprocessSettings @ 148b38c30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
IStereoRendering::EndFinalPostprocessSettings
          (IStereoRendering *this,FPostProcessSettings *param_1,EStereoscopicPass param_2,
          int param_3)

{
  return;
}

// GetDesiredNumberOfViews @ 148b40050

int __thiscall IStereoRendering::GetDesiredNumberOfViews(IStereoRendering *this,bool param_1)

{
  return param_1 + 1;
}

// GetLODViewIndex @ 148b412b0

uint __thiscall IStereoRendering::GetLODViewIndex(IStereoRendering *this)

{
  return 0;
}

// GetRenderTargetManager @ 148b422d0

IStereoRenderTargetManager * __thiscall
IStereoRendering::GetRenderTargetManager(IStereoRendering *this)

{
  return (IStereoRenderTargetManager *)0x0;
}

// GetStereoLayers @ 148b42f40

IStereoLayers * __thiscall IStereoRendering::GetStereoLayers(IStereoRendering *this)

{
  return (IStereoLayers *)0x0;
}

// GetTextSafeRegionBounds @ 148b43190

TVector2<double> * __thiscall
IStereoRendering::GetTextSafeRegionBounds
          (IStereoRendering *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.75;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.75;
  return __return_storage_ptr__;
}

// GetViewPassForIndex @ 148b43560

EStereoscopicPass __thiscall
IStereoRendering::GetViewPassForIndex(IStereoRendering *this,bool param_1,int param_2)

{
  EStereoscopicPass EVar1;
  
  EVar1 = eSSP_FULL;
  if (param_1) {
    EVar1 = (param_2 != 0) + eSSP_PRIMARY;
  }
  return EVar1;
}

// IsStandaloneStereoOnlyDevice @ 148b64290

bool __thiscall IStereoRendering::IsStandaloneStereoOnlyDevice(IStereoRendering *this)

{
  return false;
}

// IsStereoEnabledOnNextFrame @ 148b642b0

bool __thiscall IStereoRendering::IsStereoEnabledOnNextFrame(IStereoRendering *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148b642b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 8))();
  return (bool)uVar1;
}

// OverrideFinalPostprocessSettings @ 148b696b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
IStereoRendering::OverrideFinalPostprocessSettings
          (IStereoRendering *this,FPostProcessSettings *param_1,EStereoscopicPass param_2,
          int param_3,float *param_4)

{
  return false;
}

// SetFinalViewRect @ 148b76070

void __thiscall
IStereoRendering::SetFinalViewRect
          (IStereoRendering *this,FRHICommandListImmediate *param_1,int param_2,
          TIntRect<int> *param_3)

{
  return;
}

// StartFinalPostprocessSettings @ 148b78dd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
IStereoRendering::StartFinalPostprocessSettings
          (IStereoRendering *this,FPostProcessSettings *param_1,EStereoscopicPass param_2,
          int param_3)

{
  return;
}

