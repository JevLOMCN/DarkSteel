// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// OnCustomCameraNodeParametersChanged @ 14d5b8d70

void __thiscall
ICustomCameraNodeParameterProvider::OnCustomCameraNodeParametersChanged
          (ICustomCameraNodeParameterProvider *this,UCameraNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &UE::Cameras::FGameplayCamerasDelegates::OnCustomCameraNodeParametersChangedDelegate,
             (FWriteAccessScope *)&local_28);
  bVar2 = false;
  UE::Cameras::FGameplayCamerasDelegates::OnCustomCameraNodeParametersChangedDelegate._28_4_ =
       UE::Cameras::FGameplayCamerasDelegates::OnCustomCameraNodeParametersChangedDelegate._28_4_ +
       1;
  uVar6 = UE::Cameras::FGameplayCamerasDelegates::OnCustomCameraNodeParametersChangedDelegate._16_4_
          - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 <
          (int)UE::Cameras::FGameplayCamerasDelegates::OnCustomCameraNodeParametersChangedDelegate.
               _16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 +
                    UE::Cameras::FGameplayCamerasDelegates::
                    OnCustomCameraNodeParametersChangedDelegate._8_8_) == 0) ||
          (*(longlong **)
            (lVar7 + UE::Cameras::FGameplayCamerasDelegates::
                     OnCustomCameraNodeParametersChangedDelegate._8_8_) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)
                                 (lVar7 + UE::Cameras::FGameplayCamerasDelegates::
                                          OnCustomCameraNodeParametersChangedDelegate._8_8_) + 0x68)
                  )(), cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  UE::Cameras::FGameplayCamerasDelegates::OnCustomCameraNodeParametersChangedDelegate._28_4_ =
       UE::Cameras::FGameplayCamerasDelegates::OnCustomCameraNodeParametersChangedDelegate._28_4_ +
       -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UE::Cameras::FGameplayCamerasDelegates::OnCustomCameraNodeParametersChangedDelegate,
               false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// ~ICustomCameraNodeParameterProvider @ 14d6005d0

void __thiscall
ICustomCameraNodeParameterProvider::~ICustomCameraNodeParameterProvider
          (ICustomCameraNodeParameterProvider *this)

{
  *this = (ICustomCameraNodeParameterProvider)&___7ICustomCameraNodeParameterProvider__6B_;
  return;
}

// GetCustomCameraNodeParameters @ 14d619ea0

void __thiscall
ICustomCameraNodeParameterProvider::GetCustomCameraNodeParameters
          (ICustomCameraNodeParameterProvider *this,FCustomCameraNodeParameterInfos *param_1)

{
  return;
}

// _getUObject @ 14d63f280

UObject * __thiscall
ICustomCameraNodeParameterProvider::_getUObject(ICustomCameraNodeParameterProvider *this)

{
  return (UObject *)0x0;
}

