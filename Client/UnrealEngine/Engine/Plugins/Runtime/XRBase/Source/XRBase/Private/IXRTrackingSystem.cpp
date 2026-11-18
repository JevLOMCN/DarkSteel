// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 34

// CalibrateExternalTrackingSource @ 14cf843a0

void __thiscall
IXRTrackingSystem::CalibrateExternalTrackingSource
          (IXRTrackingSystem *this,TTransform<double> *param_1)

{
  return;
}

// ConnectRemoteXRDevice @ 14cf85240

Type __thiscall
IXRTrackingSystem::ConnectRemoteXRDevice(IXRTrackingSystem *this,FString *param_1,int param_2)

{
  return FeatureNotSupported;
}

// DisconnectRemoteXRDevice @ 14cf87a10

void __thiscall IXRTrackingSystem::DisconnectRemoteXRDevice(IXRTrackingSystem *this)

{
  return;
}

// DoesSupportLateProjectionUpdate @ 14cf87ef0

bool __thiscall IXRTrackingSystem::DoesSupportLateProjectionUpdate(IXRTrackingSystem *this)

{
  return false;
}

// DoesSupportLateUpdate @ 14cf87f00

bool __thiscall IXRTrackingSystem::DoesSupportLateUpdate(IXRTrackingSystem *this)

{
  return true;
}

// GetARCompositionComponent @ 14cf8db10

TSharedPtr<FARSupportInterface,1> * __thiscall
IXRTrackingSystem::GetARCompositionComponent
          (IXRTrackingSystem *this,TSharedPtr<FARSupportInterface,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FARSupportInterface *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetARCompositionComponent @ 14cf8db30

TSharedPtr<FARSupportInterface_const_,1> * __thiscall
IXRTrackingSystem::GetARCompositionComponent
          (IXRTrackingSystem *this,TSharedPtr<FARSupportInterface_const_,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FARSupportInterface *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetAudioListenerOffset @ 14cf8ddc0

TVector<double> * __thiscall
IXRTrackingSystem::GetAudioListenerOffset
          (IXRTrackingSystem *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetBaseOrientation @ 14cf8ddf0

TQuat<double> * __thiscall
IXRTrackingSystem::GetBaseOrientation(IXRTrackingSystem *this,TQuat<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  dVar2 = UE::Math::TQuat<double>::Identity.Z;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// GetBasePosition @ 14cf8de10

TVector<double> * __thiscall
IXRTrackingSystem::GetBasePosition(IXRTrackingSystem *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetBaseRotation @ 14cf8de40

TRotator<double> * __thiscall
IXRTrackingSystem::GetBaseRotation(IXRTrackingSystem *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  __return_storage_ptr__->Yaw = dVar1;
  __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return __return_storage_ptr__;
}

// GetHMDDevice @ 14cf8f7d0

IHeadMountedDisplay * __thiscall IXRTrackingSystem::GetHMDDevice(IXRTrackingSystem *this)

{
  return (IHeadMountedDisplay *)0x0;
}

// GetIOpenXRHMD @ 14cf8fa40

IOpenXRHMD * __thiscall IXRTrackingSystem::GetIOpenXRHMD(IXRTrackingSystem *this)

{
  return (IOpenXRHMD *)0x0;
}

// GetLoadingScreen @ 14cf8fc90

IXRLoadingScreen * __thiscall IXRTrackingSystem::GetLoadingScreen(IXRTrackingSystem *this)

{
  return (IXRLoadingScreen *)0x0;
}

// GetPlayAreaBounds @ 14cf90490

TVector2<double> * __thiscall
IXRTrackingSystem::GetPlayAreaBounds
          (IXRTrackingSystem *this,TVector2<double> *__return_storage_ptr__,Type param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetPlayAreaRect @ 14cf90500

bool __thiscall
IXRTrackingSystem::GetPlayAreaRect
          (IXRTrackingSystem *this,TTransform<double> *param_1,TVector2<double> *param_2)

{
  return false;
}

// GetStereoRenderingDevice @ 14cf91300

TSharedPtr<IStereoRendering,1> * __thiscall
IXRTrackingSystem::GetStereoRenderingDevice
          (IXRTrackingSystem *this,TSharedPtr<IStereoRendering,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TSharedPtr<IStereoRendering,1> *pTVar4;
  
  lVar3 = (**(code **)((longlong)*this + 0x118))();
  if (lVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetHMDDevice() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IXRTrackingSystem.h"
                       ,0x144,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IStereoRendering,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = (IStereoRendering *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTrackingOriginTransform @ 14cf915a0

bool __thiscall
IXRTrackingSystem::GetTrackingOriginTransform
          (IXRTrackingSystem *this,TEnumAsByte<EHMDTrackingOrigin::Type> param_1,
          TTransform<double> *param_2)

{
  return false;
}

// GetXRInput @ 14cf91df0

IXRInput * __thiscall IXRTrackingSystem::GetXRInput(IXRTrackingSystem *this)

{
  return (IXRInput *)0x0;
}

// IsHeadTrackingEnforced @ 14cf92cc0

bool __thiscall IXRTrackingSystem::IsHeadTrackingEnforced(IXRTrackingSystem *this)

{
  return false;
}

// OnBeginPlay @ 14cf93630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IXRTrackingSystem::OnBeginPlay(IXRTrackingSystem *this,FWorldContext *param_1)

{
  return;
}

// OnBeginRendering_GameThread @ 14cf93640

void __thiscall
IXRTrackingSystem::OnBeginRendering_GameThread(IXRTrackingSystem *this,FSceneViewFamily *param_1)

{
  return;
}

// OnBeginRendering_GameThread @ 14cf93650

void __thiscall IXRTrackingSystem::OnBeginRendering_GameThread(IXRTrackingSystem *this)

{
  return;
}

// OnEndGameFrame @ 14cf937a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IXRTrackingSystem::OnEndGameFrame(IXRTrackingSystem *this,FWorldContext *param_1)

{
  return false;
}

// OnEndPlay @ 14cf937b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IXRTrackingSystem::OnEndPlay(IXRTrackingSystem *this,FWorldContext *param_1)

{
  return;
}

// OnStartGameFrame @ 14cf93ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IXRTrackingSystem::OnStartGameFrame(IXRTrackingSystem *this,FWorldContext *param_1)

{
  return false;
}

// RebaseObjectOrientationAndPosition @ 14cf97c60

void __thiscall
IXRTrackingSystem::RebaseObjectOrientationAndPosition
          (IXRTrackingSystem *this,TVector<double> *param_1,TQuat<double> *param_2)

{
  return;
}

// ResetOrientation @ 14cf9a2c0

void __thiscall IXRTrackingSystem::ResetOrientation(IXRTrackingSystem *this,float param_1)

{
  return;
}

// ResetPosition @ 14cf9a410

void __thiscall IXRTrackingSystem::ResetPosition(IXRTrackingSystem *this)

{
  return;
}

// SetBaseOrientation @ 14cf9a420

void __thiscall
IXRTrackingSystem::SetBaseOrientation(IXRTrackingSystem *this,TQuat<double> *param_1)

{
  return;
}

// SetBasePosition @ 14cf9a430

void __thiscall IXRTrackingSystem::SetBasePosition(IXRTrackingSystem *this,TVector<double> *param_1)

{
  return;
}

// SetBaseRotation @ 14cf9a440

void __thiscall
IXRTrackingSystem::SetBaseRotation(IXRTrackingSystem *this,TRotator<double> *param_1)

{
  return;
}

// SetHeadTrackingEnforced @ 14cf9a790

void __thiscall IXRTrackingSystem::SetHeadTrackingEnforced(IXRTrackingSystem *this,bool param_1)

{
  return;
}

// UpdateExternalTrackingPosition @ 14cf9dde0

void __thiscall
IXRTrackingSystem::UpdateExternalTrackingPosition
          (IXRTrackingSystem *this,TTransform<double> *param_1)

{
  return;
}

