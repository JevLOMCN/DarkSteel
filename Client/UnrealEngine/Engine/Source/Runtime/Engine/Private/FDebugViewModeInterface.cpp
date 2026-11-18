// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AllowFallbackToDefaultMaterial @ 147ac6b80

bool __cdecl FDebugViewModeInterface::AllowFallbackToDefaultMaterial(FMaterial *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  
  if (param_1 == (FMaterial *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMaterial",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DebugViewModeInterface.cpp"
                       ,0x71,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)(param_1->_padding_ + 0x3a8))(param_1);
  cVar5 = (**(code **)(param_1->_padding_ + 0x3a0))(param_1);
  if ((cVar5 == '\0') && (cVar4 == '\0')) {
    return true;
  }
  return false;
}

// AllowFallbackToDefaultMaterial @ 147ac6c00

bool __cdecl FDebugViewModeInterface::AllowFallbackToDefaultMaterial(bool param_1,bool param_2)

{
  if ((!param_1) && (!param_2)) {
    return true;
  }
  return false;
}

// SetDrawRenderState @ 147b13110

/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDebugViewModeInterface::SetDrawRenderState
          (FDebugViewModeInterface *this,EDebugViewShaderMode param_1,EBlendMode param_2,
          FRenderState *param_3,bool param_4)

{
  TRefCountPtr<FRHIBlendState> this_00;
  bool bVar1;
  TRefCountPtr<FRHIDepthStencilState> TVar2;
  TRefCountPtr<FRHIBlendState> TVar3;
  
  this_00.Reference =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  bVar1 = IsTranslucentBlendMode(param_2);
  if (bVar1) {
    param_3->BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    TVar2 = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI;
  }
  else {
    param_3->BlendState = this_00.Reference;
    bVar1 = IsMaskedBlendMode(param_2);
    if ((!bVar1) ||
       (TVar2 = TStaticStateRHI<TStaticDepthStencilState<0,4,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                ::StaticResource.StateRHI, !param_4)) {
      TVar2 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource.StateRHI;
    }
  }
  param_3->DepthStencilState = TVar2.Reference;
  if (param_1 - DVSM_ShaderComplexity < 4) {
    bVar1 = IsOpaqueBlendMode(param_2);
    TVar2 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI;
    if ((!bVar1) &&
       ((bVar1 = IsMaskedBlendMode(param_2), !bVar1 ||
        (TVar2 = TStaticStateRHI<TStaticDepthStencilState<0,4,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                 ::StaticResource.StateRHI, !param_4)))) {
      TVar2 = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource.StateRHI;
    }
    param_3->DepthStencilState = TVar2.Reference;
    param_3->BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
  }
  else if (param_1 == DVSM_OutputMaterialTextureScales) {
    param_3->DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
  }
  else if (param_1 == DVSM_ShadowCasters) {
    bVar1 = IsTranslucentBlendMode(param_2);
    TVar3 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
            ::StaticResource.StateRHI;
    if (bVar1) {
      TVar3 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource.StateRHI;
    }
    param_3->BlendState = TVar3.Reference;
  }
  if (this_00.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00.Reference);
  }
  return;
}

// SetInterface @ 147b13340

void __cdecl FDebugViewModeInterface::SetInterface(FDebugViewModeInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (Singleton != (FDebugViewModeInterface *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3881300729226330212>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DebugViewModeInterface.cpp"
                       ,100,"!Singleton");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Singleton = param_1;
  return;
}

