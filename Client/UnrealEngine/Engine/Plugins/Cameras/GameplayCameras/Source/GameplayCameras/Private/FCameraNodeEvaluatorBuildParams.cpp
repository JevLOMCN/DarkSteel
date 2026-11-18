// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// BuildEvaluatorAs<UE::Cameras::FBlendCameraNodeEvaluator> @ 14d5392b0

FBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuildParams::
BuildEvaluatorAs<UE::Cameras::FBlendCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuildParams *this,UCameraNode *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FBlendCameraNodeEvaluator *pFVar4;
  
  if (param_1 == (UCameraNode *)0x0) {
    return (FBlendCameraNodeEvaluator *)0x0;
  }
  pFVar4 = (FBlendCameraNodeEvaluator *)
           (**(code **)(param_1->_padding_ + 0x2c8))(param_1,this->Builder);
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)param_1);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
  }
  *(UCameraNode **)&pFVar4->field_0x10 = param_1;
  (**(code **)(*(longlong *)pFVar4 + 0x18))(pFVar4,this);
  cVar2 = (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,&FBlendCameraNodeEvaluator::PrivateTypeID);
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                       ,0x123,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBlendCameraNodeEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// BuildEvaluator @ 14d54c9f0

FCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuildParams::BuildEvaluator
          (FCameraNodeEvaluatorBuildParams *this,UCameraNode *param_1)

{
  FCameraNodeEvaluator *pFVar1;
  
  if (param_1 != (UCameraNode *)0x0) {
    pFVar1 = (FCameraNodeEvaluator *)
             (**(code **)(param_1->_padding_ + 0x2c8))(param_1,this->Builder);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)param_1);
      }
    }
    (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = param_1;
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,this);
    return pFVar1;
  }
  return (FCameraNodeEvaluator *)0x0;
}

// BuildEvaluatorAs<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator> @ 14d57d0b0

FPersistentBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuildParams::
BuildEvaluatorAs<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuildParams *this,UCameraNode *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FPersistentBlendStackCameraNodeEvaluator *pFVar4;
  
  pFVar4 = (FPersistentBlendStackCameraNodeEvaluator *)BuildEvaluator(this,param_1);
  if (pFVar4 == (FPersistentBlendStackCameraNodeEvaluator *)0x0) {
    return (FPersistentBlendStackCameraNodeEvaluator *)0x0;
  }
  cVar2 = (**(code **)(pFVar4->_padding_ + 8))
                    (pFVar4,&FPersistentBlendStackCameraNodeEvaluator::PrivateTypeID);
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                       ,0x123,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPersistentBlendStackCameraNodeEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// BuildEvaluatorAs<UE::Cameras::FTransientBlendStackCameraNodeEvaluator> @ 14d57d120

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FTransientBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuildParams::
BuildEvaluatorAs<UE::Cameras::FTransientBlendStackCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuildParams *this,UCameraNode *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FTransientBlendStackCameraNodeEvaluator *pFVar4;
  
  pFVar4 = (FTransientBlendStackCameraNodeEvaluator *)BuildEvaluator(this,param_1);
  if (pFVar4 == (FTransientBlendStackCameraNodeEvaluator *)0x0) {
    return (FTransientBlendStackCameraNodeEvaluator *)0x0;
  }
  cVar2 = (**(code **)(pFVar4->_padding_ + 8))
                    (pFVar4,&FTransientBlendStackCameraNodeEvaluator::PrivateTypeID);
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                       ,0x123,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTransientBlendStackCameraNodeEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// BuildEvaluatorAs<UE::Cameras::FInput2DCameraNodeEvaluator> @ 14d5ebe60

FInput2DCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuildParams::
BuildEvaluatorAs<UE::Cameras::FInput2DCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuildParams *this,UCameraNode *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FInput2DCameraNodeEvaluator *pFVar4;
  
  pFVar4 = (FInput2DCameraNodeEvaluator *)BuildEvaluator(this,param_1);
  if (pFVar4 == (FInput2DCameraNodeEvaluator *)0x0) {
    return (FInput2DCameraNodeEvaluator *)0x0;
  }
  cVar2 = (**(code **)(pFVar4->_padding_ + 8))(pFVar4,&FInput2DCameraNodeEvaluator::PrivateTypeID);
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                       ,0x123,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInput2DCameraNodeEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// BuildEvaluatorAs<UE::Cameras::FSimpleBlendCameraNodeEvaluator> @ 14d5ebed0

FSimpleBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuildParams::
BuildEvaluatorAs<UE::Cameras::FSimpleBlendCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuildParams *this,UCameraNode *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FSimpleBlendCameraNodeEvaluator *pFVar4;
  
  pFVar4 = (FSimpleBlendCameraNodeEvaluator *)BuildEvaluator(this,param_1);
  if (pFVar4 == (FSimpleBlendCameraNodeEvaluator *)0x0) {
    return (FSimpleBlendCameraNodeEvaluator *)0x0;
  }
  cVar2 = (**(code **)(pFVar4->_padding_ + 8))
                    (pFVar4,&FSimpleBlendCameraNodeEvaluator::PrivateTypeID);
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                       ,0x123,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSimpleBlendCameraNodeEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// BuildEvaluatorAs<UE::Cameras::FShakeCameraNodeEvaluator> @ 14d64d7f0

FShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuildParams::
BuildEvaluatorAs<UE::Cameras::FShakeCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuildParams *this,UCameraNode *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FCameraNodeEvaluator *pFVar4;
  FShakeCameraNodeEvaluator *pFVar5;
  
  pFVar4 = BuildEvaluator(this,param_1);
  if (pFVar4 == (FCameraNodeEvaluator *)0x0) {
    return (FShakeCameraNodeEvaluator *)0x0;
  }
  cVar2 = (**(code **)(pFVar4->_padding_ + 8))(pFVar4,&FShakeCameraNodeEvaluator::PrivateTypeID);
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                       ,0x123,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FShakeCameraNodeEvaluator *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FShakeCameraNodeEvaluator *)pFVar4;
}

