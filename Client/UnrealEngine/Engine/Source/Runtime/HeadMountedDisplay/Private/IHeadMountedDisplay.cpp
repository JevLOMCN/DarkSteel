// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 39

// IHeadMountedDisplay @ 14594e3b0

IHeadMountedDisplay * __thiscall IHeadMountedDisplay::IHeadMountedDisplay(IHeadMountedDisplay *this)

{
  *this = (IHeadMountedDisplay)&___7IHeadMountedDisplay__6B_;
  return this;
}

// CreateHMDPostProcessPass_RenderThread @ 145951af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IHeadMountedDisplay::CreateHMDPostProcessPass_RenderThread
          (IHeadMountedDisplay *this,FRDGBuilder *param_1,FSceneView *param_2,
          FHMDDistortionInputs *param_3,FScreenPassTexture *param_4)

{
  return;
}

// DoesAppHaveVRFocus @ 145951ea0

bool __thiscall IHeadMountedDisplay::DoesAppHaveVRFocus(IHeadMountedDisplay *this)

{
  return FApp::bHasVRFocus;
}

// DoesAppUseVRFocus @ 145951eb0

bool __thiscall IHeadMountedDisplay::DoesAppUseVRFocus(IHeadMountedDisplay *this)

{
  return FApp::bUseVRFocus;
}

// DrawDistortionMesh_RenderThread @ 145951ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
IHeadMountedDisplay::DrawDistortionMesh_RenderThread
          (IHeadMountedDisplay *this,FHeadMountedDisplayPassContext *param_1,TIntPoint<int> *param_2
          )

{
  return;
}

// DrawHiddenAreaMesh @ 145951ed0

void __thiscall
IHeadMountedDisplay::DrawHiddenAreaMesh
          (IHeadMountedDisplay *this,FRHICommandList *param_1,int param_2)

{
  return;
}

// DrawHiddenAreaMesh @ 145951ee0

void __thiscall
IHeadMountedDisplay::DrawHiddenAreaMesh
          (IHeadMountedDisplay *this,FRHICommandList *param_1,int param_2,int param_3)

{
  return;
}

// DrawVisibleAreaMesh @ 145951ef0

void __thiscall
IHeadMountedDisplay::DrawVisibleAreaMesh
          (IHeadMountedDisplay *this,FRHICommandList *param_1,int param_2)

{
  return;
}

// DrawVisibleAreaMesh @ 145951f00

void __thiscall
IHeadMountedDisplay::DrawVisibleAreaMesh
          (IHeadMountedDisplay *this,FRHICommandList *param_1,int param_2,int param_3)

{
  return;
}

// GetBlueDistortionParameters @ 145952e00

float * __thiscall IHeadMountedDisplay::GetBlueDistortionParameters(IHeadMountedDisplay *this)

{
  return (float *)0x0;
}

// GetChromaAbCorrectionValues @ 145952e10

bool __thiscall
IHeadMountedDisplay::GetChromaAbCorrectionValues
          (IHeadMountedDisplay *this,TVector4<double> *param_1)

{
  return false;
}

// GetDistortionScalingFactor @ 145952e20

float __thiscall IHeadMountedDisplay::GetDistortionScalingFactor(IHeadMountedDisplay *this)

{
  return 0.0;
}

// GetDistortionTextureLeft @ 145952e30

FTexture * __thiscall IHeadMountedDisplay::GetDistortionTextureLeft(IHeadMountedDisplay *this)

{
  return (FTexture *)0x0;
}

// GetDistortionTextureRight @ 145952e40

FTexture * __thiscall IHeadMountedDisplay::GetDistortionTextureRight(IHeadMountedDisplay *this)

{
  return (FTexture *)0x0;
}

// GetDistortionWarpValues @ 145952e50

void __thiscall
IHeadMountedDisplay::GetDistortionWarpValues(IHeadMountedDisplay *this,TVector4<double> *param_1)

{
  return;
}

// GetEyeRenderParams_RenderThread @ 145952e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
IHeadMountedDisplay::GetEyeRenderParams_RenderThread
          (IHeadMountedDisplay *this,FHeadMountedDisplayPassContext *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3)

{
  return;
}

// GetGreenDistortionParameters @ 145952e80

float * __thiscall IHeadMountedDisplay::GetGreenDistortionParameters(IHeadMountedDisplay *this)

{
  return (float *)0x0;
}

// GetHMDWornState @ 145952f30

Type __thiscall IHeadMountedDisplay::GetHMDWornState(IHeadMountedDisplay *this)

{
  return Unknown;
}

// GetIdealDebugCanvasRenderTargetSize @ 145953790

TIntPoint<int> __thiscall
IHeadMountedDisplay::GetIdealDebugCanvasRenderTargetSize(IHeadMountedDisplay *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(undefined4 *)in_RDX = 0x400;
  *(undefined4 *)((longlong)in_RDX + 4) = 0x400;
  return (TIntPoint<int>)in_RDX;
}

// GetIdealRenderTargetSize @ 1459537b0

TIntPoint<int> __thiscall IHeadMountedDisplay::GetIdealRenderTargetSize(IHeadMountedDisplay *this)

{
  code *pcVar1;
  bool bVar2;
  TIntPoint<int> TVar3;
  TIntPoint<int>_u_0 in_RDX;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplay.h"
                         ,0x9a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
        return (TIntPoint<int>)TVar3.field0_0x0;
      }
    }
  }
  *(undefined8 *)in_RDX = 0;
  return (TIntPoint<int>)in_RDX;
}

// GetLensCenterOffset @ 145953810

float __thiscall IHeadMountedDisplay::GetLensCenterOffset(IHeadMountedDisplay *this)

{
  return 0.0;
}

// GetPixelDenity @ 145953c60

float __thiscall IHeadMountedDisplay::GetPixelDenity(IHeadMountedDisplay *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplay.h"
                         ,0x90,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
  }
  return __real_3f800000;
}

// GetRedDistortionParameters @ 145953e50

float * __thiscall IHeadMountedDisplay::GetRedDistortionParameters(IHeadMountedDisplay *this)

{
  return (float *)0x0;
}

// GetSpectatorScreenController @ 145953e60

ISpectatorScreenController * __thiscall
IHeadMountedDisplay::GetSpectatorScreenController(IHeadMountedDisplay *this)

{
  return (ISpectatorScreenController *)0x0;
}

// GetSpectatorScreenController @ 145953e70

ISpectatorScreenController * __thiscall
IHeadMountedDisplay::GetSpectatorScreenController(IHeadMountedDisplay *this)

{
  return (ISpectatorScreenController *)0x0;
}

// GetTextureOffsetLeft @ 145953e80

TVector2<double> * __thiscall
IHeadMountedDisplay::GetTextureOffsetLeft
          (IHeadMountedDisplay *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetTextureOffsetRight @ 145953ea0

TVector2<double> * __thiscall
IHeadMountedDisplay::GetTextureOffsetRight
          (IHeadMountedDisplay *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetTextureScaleLeft @ 145953ec0

TVector2<double> * __thiscall
IHeadMountedDisplay::GetTextureScaleLeft
          (IHeadMountedDisplay *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetTextureScaleRight @ 145953ee0

TVector2<double> * __thiscall
IHeadMountedDisplay::GetTextureScaleRight
          (IHeadMountedDisplay *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// HasHiddenAreaMesh @ 145954010

bool __thiscall IHeadMountedDisplay::HasHiddenAreaMesh(IHeadMountedDisplay *this)

{
  return false;
}

// HasVisibleAreaMesh @ 145954020

bool __thiscall IHeadMountedDisplay::HasVisibleAreaMesh(IHeadMountedDisplay *this)

{
  return false;
}

// IsRenderingPaused @ 145954200

bool __thiscall IHeadMountedDisplay::IsRenderingPaused(IHeadMountedDisplay *this)

{
  return false;
}

// IsSpectatorScreenActive @ 145954210

bool __thiscall IHeadMountedDisplay::IsSpectatorScreenActive(IHeadMountedDisplay *this)

{
  return false;
}

// NeedsUpscalePostProcessPass @ 145954220

bool __thiscall IHeadMountedDisplay::NeedsUpscalePostProcessPass(IHeadMountedDisplay *this)

{
  return false;
}

// RecordAnalytics @ 145954d70

void __thiscall IHeadMountedDisplay::RecordAnalytics(IHeadMountedDisplay *this)

{
  return;
}

// SetClippingPlanes @ 145957750

void __thiscall
IHeadMountedDisplay::SetClippingPlanes(IHeadMountedDisplay *this,float param_1,float param_2)

{
  return;
}

// SetColorScaleAndBias @ 145957760

bool __thiscall
IHeadMountedDisplay::SetColorScaleAndBias
          (IHeadMountedDisplay *this,FLinearColor *param_1,FLinearColor *param_2)

{
  return false;
}

// SetPixelDensity @ 145957780

void __thiscall IHeadMountedDisplay::SetPixelDensity(IHeadMountedDisplay *this,float param_1)

{
  return;
}

// UpdateScreenSettings @ 145959330

void __thiscall
IHeadMountedDisplay::UpdateScreenSettings(IHeadMountedDisplay *this,FViewport *param_1)

{
  return;
}

