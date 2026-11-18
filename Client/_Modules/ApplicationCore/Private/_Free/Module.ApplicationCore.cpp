// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 442

// CVarAllowVirtualKeyboard'' @ 140f38ec0

void __cdecl
`dynamic_initializer_for_'FGenericPlatformApplicationMisc::CVarAllowVirtualKeyboard__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FGenericPlatformApplicationMisc::CVarAllowVirtualKeyboard,L"AllowVirtualKeyboard",
             &bAllowVirtualKeyboard,
             L"Allow the use of a virtual keyboard despite platform main screen being non-touch",4);
  atexit(`dynamic_atexit_destructor_for_'FGenericPlatformApplicationMisc::CVarAllowVirtualKeyboard__
        );
  return;
}

// CVarEnableHighDPIAwareness'' @ 140f38f10

void __cdecl
`dynamic_initializer_for_'FGenericPlatformApplicationMisc::CVarEnableHighDPIAwareness__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FGenericPlatformApplicationMisc::CVarEnableHighDPIAwareness,L"EnableHighDPIAwareness",
             &bEnableHighDPIAwareness,L"Enables or disables high dpi mode",4);
  atexit(`dynamic_atexit_destructor_for_'FGenericPlatformApplicationMisc::
         CVarEnableHighDPIAwareness__);
  return;
}

// CachedPhysicalScreenDimensions'' @ 140f38f60

void __cdecl
`dynamic_initializer_for_'FGenericPlatformApplicationMisc::CachedPhysicalScreenDimensions__(void)

{
  FGenericPlatformApplicationMisc::CachedPhysicalScreenDimensions.field0_0x0 =
       (TVector2<float>_u_0)(TVector2<float>_u_0)UE::Math::TVector2<float>::ZeroVector;
  return;
}

// DPadDown'' @ 140f38f80

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::DPadDown__(void)

{
  ::FName::FName(&FGamepadKeyNames::DPadDown,"Gamepad_DPad_Down");
  return;
}

// DPadLeft'' @ 140f38fa0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::DPadLeft__(void)

{
  ::FName::FName(&FGamepadKeyNames::DPadLeft,"Gamepad_DPad_Left");
  return;
}

// DPadRight'' @ 140f38fc0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::DPadRight__(void)

{
  ::FName::FName(&FGamepadKeyNames::DPadRight,"Gamepad_DPad_Right");
  return;
}

// DPadUp'' @ 140f38fe0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::DPadUp__(void)

{
  ::FName::FName(&FGamepadKeyNames::DPadUp,"Gamepad_DPad_Up");
  return;
}

// FaceButtonBottom'' @ 140f39000

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::FaceButtonBottom__(void)

{
  ::FName::FName(&FGamepadKeyNames::FaceButtonBottom,"Gamepad_FaceButton_Bottom");
  return;
}

// FaceButtonLeft'' @ 140f39020

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::FaceButtonLeft__(void)

{
  ::FName::FName(&FGamepadKeyNames::FaceButtonLeft,"Gamepad_FaceButton_Left");
  return;
}

// FaceButtonRight'' @ 140f39040

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::FaceButtonRight__(void)

{
  ::FName::FName(&FGamepadKeyNames::FaceButtonRight,"Gamepad_FaceButton_Right");
  return;
}

// FaceButtonTop'' @ 140f39060

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::FaceButtonTop__(void)

{
  ::FName::FName(&FGamepadKeyNames::FaceButtonTop,"Gamepad_FaceButton_Top");
  return;
}

// LeftAnalogX'' @ 140f39080

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::LeftAnalogX__(void)

{
  ::FName::FName(&FGamepadKeyNames::LeftAnalogX,"Gamepad_LeftX");
  return;
}

// LeftAnalogY'' @ 140f390a0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::LeftAnalogY__(void)

{
  ::FName::FName(&FGamepadKeyNames::LeftAnalogY,"Gamepad_LeftY");
  return;
}

// LeftShoulder'' @ 140f390c0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::LeftShoulder__(void)

{
  ::FName::FName(&FGamepadKeyNames::LeftShoulder,"Gamepad_LeftShoulder");
  return;
}

// LeftStickDown'' @ 140f390e0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::LeftStickDown__(void)

{
  ::FName::FName(&FGamepadKeyNames::LeftStickDown,"Gamepad_LeftStick_Down");
  return;
}

// LeftStickLeft'' @ 140f39100

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::LeftStickLeft__(void)

{
  ::FName::FName(&FGamepadKeyNames::LeftStickLeft,"Gamepad_LeftStick_Left");
  return;
}

// LeftStickRight'' @ 140f39120

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::LeftStickRight__(void)

{
  ::FName::FName(&FGamepadKeyNames::LeftStickRight,"Gamepad_LeftStick_Right");
  return;
}

// LeftStickUp'' @ 140f39140

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::LeftStickUp__(void)

{
  ::FName::FName(&FGamepadKeyNames::LeftStickUp,"Gamepad_LeftStick_Up");
  return;
}

// LeftThumb'' @ 140f39160

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::LeftThumb__(void)

{
  ::FName::FName(&FGamepadKeyNames::LeftThumb,"Gamepad_LeftThumbstick");
  return;
}

// LeftTriggerAnalog'' @ 140f39180

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::LeftTriggerAnalog__(void)

{
  ::FName::FName(&FGamepadKeyNames::LeftTriggerAnalog,"Gamepad_LeftTriggerAxis");
  return;
}

// LeftTriggerThreshold'' @ 140f391a0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::LeftTriggerThreshold__(void)

{
  ::FName::FName(&FGamepadKeyNames::LeftTriggerThreshold,"Gamepad_LeftTrigger");
  return;
}

// OnInputDeviceConnectionChange'' @ 140f391c0

void __cdecl
`dynamic_initializer_for_'IPlatformInputDeviceMapper::OnInputDeviceConnectionChange__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IPlatformInputDeviceMapper::OnInputDeviceConnectionChange__
        );
  return;
}

// OnInputDevicePairingChange'' @ 140f391e0

void __cdecl
`dynamic_initializer_for_'IPlatformInputDeviceMapper::OnInputDevicePairingChange__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IPlatformInputDeviceMapper::OnInputDevicePairingChange__);
  return;
}

// RightAnalogX'' @ 140f39200

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::RightAnalogX__(void)

{
  ::FName::FName(&FGamepadKeyNames::RightAnalogX,"Gamepad_RightX");
  return;
}

// RightAnalogY'' @ 140f39220

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::RightAnalogY__(void)

{
  ::FName::FName(&FGamepadKeyNames::RightAnalogY,"Gamepad_RightY");
  return;
}

// RightShoulder'' @ 140f39240

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::RightShoulder__(void)

{
  ::FName::FName(&FGamepadKeyNames::RightShoulder,"Gamepad_RightShoulder");
  return;
}

// RightStickDown'' @ 140f39260

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::RightStickDown__(void)

{
  ::FName::FName(&FGamepadKeyNames::RightStickDown,"Gamepad_RightStick_Down");
  return;
}

// RightStickLeft'' @ 140f39280

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::RightStickLeft__(void)

{
  ::FName::FName(&FGamepadKeyNames::RightStickLeft,"Gamepad_RightStick_Left");
  return;
}

// RightStickRight'' @ 140f392a0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::RightStickRight__(void)

{
  ::FName::FName(&FGamepadKeyNames::RightStickRight,"Gamepad_RightStick_Right");
  return;
}

// RightStickUp'' @ 140f392c0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::RightStickUp__(void)

{
  ::FName::FName(&FGamepadKeyNames::RightStickUp,"Gamepad_RightStick_Up");
  return;
}

// RightThumb'' @ 140f392e0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::RightThumb__(void)

{
  ::FName::FName(&FGamepadKeyNames::RightThumb,"Gamepad_RightThumbstick");
  return;
}

// RightTriggerAnalog'' @ 140f39300

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::RightTriggerAnalog__(void)

{
  ::FName::FName(&FGamepadKeyNames::RightTriggerAnalog,"Gamepad_RightTriggerAxis");
  return;
}

// RightTriggerThreshold'' @ 140f39320

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::RightTriggerThreshold__(void)

{
  ::FName::FName(&FGamepadKeyNames::RightTriggerThreshold,"Gamepad_RightTrigger");
  return;
}

// SpecialLeft'' @ 140f39340

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::SpecialLeft__(void)

{
  ::FName::FName(&FGamepadKeyNames::SpecialLeft,"Gamepad_Special_Left");
  return;
}

// SpecialLeft_Touched'' @ 140f39360

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::SpecialLeft_Touched__(void)

{
  ::FName::FName(&FGamepadKeyNames::SpecialLeft_Touched,"Gamepad_Special_Left_Touched");
  return;
}

// SpecialLeft_X'' @ 140f39380

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::SpecialLeft_X__(void)

{
  ::FName::FName(&FGamepadKeyNames::SpecialLeft_X,"Gamepad_Special_Left_X");
  return;
}

// SpecialLeft_Y'' @ 140f393a0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::SpecialLeft_Y__(void)

{
  ::FName::FName(&FGamepadKeyNames::SpecialLeft_Y,"Gamepad_Special_Left_Y");
  return;
}

// SpecialRight'' @ 140f393c0

void __cdecl `dynamic_initializer_for_'FGamepadKeyNames::SpecialRight__(void)

{
  ::FName::FName(&FGamepadKeyNames::SpecialRight,"Gamepad_Special_Right");
  return;
}

// WidgetTypeToTextMap'' @ 140f393e0

void __cdecl `dynamic_initializer_for_'FWindowsUIAManager::WidgetTypeToTextMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWindowsUIAManager::WidgetTypeToTextMap__);
  return;
}

// WidgetTypeToWindowsTypeMap'' @ 140f39400

void __cdecl `dynamic_initializer_for_'FWindowsUIAManager::WidgetTypeToWindowsTypeMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWindowsUIAManager::WidgetTypeToWindowsTypeMap__);
  return;
}

// `dynamic_initializer_for_'AllowAccessibilityRef'' @ 140f39420

void __cdecl _dynamic_initializer_for__AllowAccessibilityRef__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&AllowAccessibilityRef,L"Accessibility.Enable",&GAllowAccessibility,
             L"If false, all queries from accessible APIs will be ignored. On some platforms, the application must be restarted in order to take effect."
             ,0);
  atexit(_dynamic_atexit_destructor_for__AllowAccessibilityRef__);
  return;
}

// `dynamic_initializer_for_'AppStatusTrackerName'' @ 140f39470

void __cdecl _dynamic_initializer_for__AppStatusTrackerName__(void)

{
  FName::FName(&AppStatusTrackerName,L"AppStatusTracker");
  return;
}

// `dynamic_initializer_for_'CFramePace'' @ 140f39490

void __cdecl _dynamic_initializer_for__CFramePace__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CFramePace,L"r.SetFramePace",
             L"Set a target frame rate for the frame pacer.To set 30fps: \"r.SetFramePace 30\"",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CFramePace__);
  return;
}

// `dynamic_initializer_for_'CVarAllowTriggerDynamicReleaseDeadZoneCustomization'' @ 140f395c0

void __cdecl
DynamicTriggerReleaseCVars::
_dynamic_initializer_for__CVarAllowTriggerDynamicReleaseDeadZoneCustomization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowTriggerDynamicReleaseDeadZoneCustomization,
             L"Input.AllowTriggerDynamicReleaseDeadZoneCustomization",&bAllowOverride,
             L"If true, the Dynamic Release DeadZone for a given analog trigger can be customized on supported devices by calling SetDeviceProperty with a FInputDeviceTriggerDynamicReleaseDeadZoneProperty. Otherwise, the Dynamic Release DeadZone is always the value of the CVar Input.TriggerDynamicReleaseDeadZone at initialization or when last Refreshed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowTriggerDynamicReleaseDeadZoneCustomization__);
  return;
}

// `dynamic_initializer_for_'CVarDisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity'' @ 140f39610

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::
_dynamic_initializer_for__CVarDisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity,
             L"WindowsApplication.DisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity",
             &bDisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity,
             L"Disable use of the new SetMaxTouchpadSensitivity API for ForceMaxTouchpadSensitivity."
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarDisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity__
        );
  return;
}

// `dynamic_initializer_for_'CVarDisableForceMaxTouchpadSensitivity_SetTouchpadParameters'' @ 140f39660

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::
_dynamic_initializer_for__CVarDisableForceMaxTouchpadSensitivity_SetTouchpadParameters__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableForceMaxTouchpadSensitivity_SetTouchpadParameters,
             L"WindowsApplication.DisableForceMaxTouchpadSensitivity_SetTouchpadParameters",
             &bDisableForceMaxTouchpadSensitivity_SetTouchpadParameters,
             L"Disable use of the legacy SetTouchpadParameters API for ForceMaxTouchpadSensitivity."
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarDisableForceMaxTouchpadSensitivity_SetTouchpadParameters__
        );
  return;
}

// `dynamic_initializer_for_'CVarEnableFirstTouchEvent'' @ 140f396b0

void __cdecl _dynamic_initializer_for__CVarEnableFirstTouchEvent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableFirstTouchEvent,L"WindowsApplication.EnableFirstTouchEvent",
             &bEnableFirstTouchEvent,
             L"Enable FirstTouch Event which prevents small pop on some touch input devices",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableFirstTouchEvent__);
  return;
}

// `dynamic_initializer_for_'CVarEnableRawInputSimulationOverRDP'' @ 140f39700

void __cdecl _dynamic_initializer_for__CVarEnableRawInputSimulationOverRDP__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableRawInputSimulationOverRDP,L"Slate.EnableRawInputSimulationOverRDP",
             &EnableRawInputSimulationOverRDP,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableRawInputSimulationOverRDP__);
  return;
}

// `dynamic_initializer_for_'CVarEnableSafeZoneOverrides'' @ 140f39750

void __cdecl _dynamic_initializer_for__CVarEnableSafeZoneOverrides__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableSafeZoneOverrides,L"SafeZone.EnableOverrides",local_res8,
             L"Enables usage of individual SafeZone.Ratio CVars",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableSafeZoneOverrides__);
  return;
}

// `dynamic_initializer_for_'CVarEnableWindowMessageProfilerScopes'' @ 140f397a0

void __cdecl _dynamic_initializer_for__CVarEnableWindowMessageProfilerScopes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableWindowMessageProfilerScopes,
             L"WindowsApplication.EnableWindowMessageProfilerScopes",
             &bEnableWindowMessageProfilerScopes,
             L"Enable profiler scopes for window message handling on a per-message basis and for custom message handlers."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableWindowMessageProfilerScopes__);
  return;
}

// `dynamic_initializer_for_'CVarForceMaxTouchpadSensitivity'' @ 140f397f0

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::
_dynamic_initializer_for__CVarForceMaxTouchpadSensitivity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceMaxTouchpadSensitivity,L"WindowsApplication.ForceMaxTouchpadSensitivity",
             &bForceMaxTouchpadSensitivity,
             L"Force Touchpad sensitivity to maximum in game when the app is active (aka has focus). The sensitivity setting can reject touchpad touches while typing on the theory that they are accidental, but that is not a good assumption for games. The setting defaults to \'Medium\'. The \'Most sensitive\' setting does not reject any touches, so that is what we want.. On Windows10 22H2 we force the global system setting to \'Most Sensitive\', but do not write that to the registry persistently. We will set it back when the app loses focus and on exit, but it may not happen in the case of a crash leaving the setting altered until a reboot. On Window11 24H2 (excepting very early installs of 24H2) a new api SetMaxTouchpadSensitivity exists and we use that. SetMaxTouchpadSensitivity changes the setting only for this app, so we do not need to handle clean-up. When the cvar is changed a CVarSinkHandler will attempt to apply or remove max sensitivity."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceMaxTouchpadSensitivity__);
  return;
}

// `dynamic_initializer_for_'CVarForceRawInputSimulation'' @ 140f39840

void __cdecl _dynamic_initializer_for__CVarForceRawInputSimulation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceRawInputSimulation,L"Slate.ForceRawInputSimulation",&ForceRawInputSimulation,
             L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceRawInputSimulation__);
  return;
}

// `dynamic_initializer_for_'CVarMinimumRePress'' @ 140f39890

void __cdecl DynamicTriggerReleaseCVars::_dynamic_initializer_for__CVarMinimumRePress__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinimumRePress,L"Input.TriggerDynamicReleaseDeadZoneMinimumRePress",
             &MinimumRePress,
             L"When the trigger is considered released due to the Dynamic DeadZone, how far it needs to be pulled again at a minimum to be considered pressed again. This is to prevent that a small Dynamic DeadZone and a small RePress Factor (see Input.TriggerDynamicReleaseDeadZoneRePressFactor) make the trigger overly sensitive to being considered pressed again."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinimumRePress__);
  return;
}

// `dynamic_initializer_for_'CVarPreventDuplicateMouseEventsForTouch'' @ 140f398e0

void __cdecl _dynamic_initializer_for__CVarPreventDuplicateMouseEventsForTouch__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPreventDuplicateMouseEventsForTouch,
             L"Slate.PreventDuplicateMouseEventsForTouchForWindows7",
             &bPreventDuplicateMouseEventsForTouch,
             L"Hack to get around multiple mouse events being triggered for touch events on Windows 7 and lower.  Enabling this will prevent pen tablets from working on windows 7 since until we switch to the windows 8 sdk (and can use WM_POINTER* events) we cannot detect the difference"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPreventDuplicateMouseEventsForTouch__);
  return;
}

// `dynamic_initializer_for_'CVarRePressFactor'' @ 140f39930

void __cdecl DynamicTriggerReleaseCVars::_dynamic_initializer_for__CVarRePressFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRePressFactor,L"Input.TriggerDynamicReleaseDeadZoneRePressFactor",&RePressFactor,
             L"When the trigger is considered released due to the Dynamic DeadZone, how far it needs to be pulled again to be considered pressed again. This will be multiplied by the Dynamic DeadZone, so lower values mean more sensitivity to pressing again."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRePressFactor__);
  return;
}

// `dynamic_initializer_for_'CVarRestoreTouchpadSensitivityFromRegistry'' @ 140f39980

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::
_dynamic_initializer_for__CVarRestoreTouchpadSensitivityFromRegistry__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRestoreTouchpadSensitivityFromRegistry,
             L"WindowsApplication.RestoreTouchpadSensitivityFromRegistry",
             &bRestoreTouchpadSensitivityFromRegistry,
             L"If true and we are using the SetTouchpadParameters API for ForceMaxTouchpadSensitivity and we find that the system is currently set to MOST_SENSITIVE and there is saved sensitivity setting previously written to the registry behave as if that is the setting we need to restore."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRestoreTouchpadSensitivityFromRegistry__);
  return;
}

// `dynamic_initializer_for_'CVarSafeZoneRatioBottom'' @ 140f399d0

void __cdecl _dynamic_initializer_for__CVarSafeZoneRatioBottom__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSafeZoneRatioBottom,L"SafeZone.Ratio.Bottom",local_res8,
             L"Safe Zone Ratio - Bottom",0);
  atexit(_dynamic_atexit_destructor_for__CVarSafeZoneRatioBottom__);
  return;
}

// `dynamic_initializer_for_'CVarSafeZoneRatioLeft'' @ 140f39a20

void __cdecl _dynamic_initializer_for__CVarSafeZoneRatioLeft__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSafeZoneRatioLeft,L"SafeZone.Ratio.Left",local_res8,L"Safe Zone Ratio - Left",0);
  atexit(_dynamic_atexit_destructor_for__CVarSafeZoneRatioLeft__);
  return;
}

// `dynamic_initializer_for_'CVarSafeZoneRatioRight'' @ 140f39a70

void __cdecl _dynamic_initializer_for__CVarSafeZoneRatioRight__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSafeZoneRatioRight,L"SafeZone.Ratio.Right",local_res8,L"Safe Zone Ratio - Right",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarSafeZoneRatioRight__);
  return;
}

// `dynamic_initializer_for_'CVarSafeZoneRatioTop'' @ 140f39ac0

void __cdecl _dynamic_initializer_for__CVarSafeZoneRatioTop__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSafeZoneRatioTop,L"SafeZone.Ratio.Top",local_res8,L"Safe Zone Ratio - Top",0);
  atexit(_dynamic_atexit_destructor_for__CVarSafeZoneRatioTop__);
  return;
}

// `dynamic_initializer_for_'CVarSink'' @ 140f39b10

void __cdecl UE::WindowsApplication::TouchpadSensitivity::_dynamic_initializer_for__CVarSink__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = CVarSinkHandler;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  CVarSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  CVarSink.Command = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  CVarSink.Handle.Handle.ID = (FDelegateHandle)0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  puVar5 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  CVarSink.Handle.Handle.ID = (FDelegateHandle)*puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  atexit(_dynamic_atexit_destructor_for__CVarSink__);
  return;
}

// `dynamic_initializer_for_'CVarTriggerDynamicReleaseDeadZone'' @ 140f39ca0

void __cdecl
DynamicTriggerReleaseCVars::_dynamic_initializer_for__CVarTriggerDynamicReleaseDeadZone__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTriggerDynamicReleaseDeadZone,L"Input.TriggerDynamicReleaseDeadZone",
             &DefaultDeadZone,
             L"Dynamic DeadZone for releasing analog triggers. It\'s dynamic in that it\'s relative to how far the trigger was pulled. Default of 1 means no dynamic release, letting triggers be released with their usual fixed threshold."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTriggerDynamicReleaseDeadZone__);
  return;
}

// `dynamic_initializer_for_'CVarUseInvisibleCursorForNoneCursorType'' @ 140f39cf0

void __cdecl _dynamic_initializer_for__CVarUseInvisibleCursorForNoneCursorType__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseInvisibleCursorForNoneCursorType,
             L"WindowsCursor.UseInvisibleCursorForNoneCursorType",
             &bUseInvisibleCursorForNoneCursorType,
             L"If enabled, sets the platform HCursor to a transparent cursor instead of null when the mouse cursor type to None."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseInvisibleCursorForNoneCursorType__);
  return;
}

// `dynamic_initializer_for_'CVarUseWorkerThreadForRawInput'' @ 140f39d40

void __cdecl
UE::WindowsApplication::RawInputThread::_dynamic_initializer_for__CVarUseWorkerThreadForRawInput__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseWorkerThreadForRawInput,L"WindowsApplication.UseWorkerThreadForRawInput",
             &bUseWorkerThreadForRawInput,
             L"Use a worker thread for raw input messages to remove processing from game thread. Mice with high polling rates can take multiple milliseconds per frame even on fast CPUs. When the cvar is changed a CVarSinkHandler will attempt to switch the thread used for handling inputs."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseWorkerThreadForRawInput__);
  return;
}

// `dynamic_initializer_for_'CVarWriteSavedTouchpadSensitivityToRegistry'' @ 140f39d90

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::
_dynamic_initializer_for__CVarWriteSavedTouchpadSensitivityToRegistry__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarWriteSavedTouchpadSensitivityToRegistry,
             L"WindowsApplication.WriteSavedTouchpadSensitivityToRegistry",
             &bWriteSavedTouchpadSensitivityToRegistry,
             L"If true and we are using the SetTouchpadParameters API for ForceMaxTouchpadSensitivity the saved touchpad sensitivity value will be written to the registry so that we can attempt to restore it even if the application crashes."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarWriteSavedTouchpadSensitivityToRegistry__);
  return;
}

// `dynamic_initializer_for_'GCustomSplashScreenFileName'' @ 140f39de0

void __cdecl _dynamic_initializer_for__GCustomSplashScreenFileName__(void)

{
  atexit(_dynamic_atexit_destructor_for__GCustomSplashScreenFileName__);
  return;
}

// `dynamic_initializer_for_'GSafeZoneConsoleVariables'' @ 140f39e00

void __cdecl _dynamic_initializer_for__GSafeZoneConsoleVariables__(void)

{
  FSafeZoneConsoleVariables::FSafeZoneConsoleVariables(&GSafeZoneConsoleVariables);
  atexit(_dynamic_atexit_destructor_for__GSafeZoneConsoleVariables__);
  return;
}

// `dynamic_initializer_for_'GSplashScreenAppName'' @ 140f39e30

void __cdecl _dynamic_initializer_for__GSplashScreenAppName__(void)

{
  FText::FText(&GSplashScreenAppName);
  atexit(_dynamic_atexit_destructor_for__GSplashScreenAppName__);
  return;
}

// `dynamic_initializer_for_'GSplashScreenFileName'' @ 140f39e60

void __cdecl _dynamic_initializer_for__GSplashScreenFileName__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSplashScreenFileName__);
  return;
}

// `dynamic_initializer_for_'GSplashScreenSynchronizationObject'' @ 140f39e80

void __cdecl _dynamic_initializer_for__GSplashScreenSynchronizationObject__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GSplashScreenSynchronizationObject,4000);
  atexit(_dynamic_atexit_destructor_for__GSplashScreenSynchronizationObject__);
  return;
}

// `dynamic_initializer_for_'GSplashScreenText'' @ 140f39eb0

void __cdecl _dynamic_initializer_for__GSplashScreenText__(void)

{
  FText::FText(GSplashScreenText);
  FText::FText(GSplashScreenText + 1);
  FText::FText(GSplashScreenText + 2);
  FText::FText(GSplashScreenText + 3);
  atexit(_dynamic_atexit_destructor_for__GSplashScreenText__);
  return;
}

// `dynamic_initializer_for_'InputClassName'' @ 140f39f00

void __cdecl UE::WindowsInput::_dynamic_initializer_for__InputClassName__(void)

{
  ::FName::FName(&InputClassName,L"WindowsApplication");
  return;
}

// `dynamic_initializer_for_'KBMInputHardwareName'' @ 140f39f20

void __cdecl UE::WindowsInput::_dynamic_initializer_for__KBMInputHardwareName__(void)

{
  ::FString::FString(&KBMInputHardwareName,L"KBM");
  atexit(_dynamic_atexit_destructor_for__KBMInputHardwareName__);
  return;
}

// `dynamic_initializer_for_'LogAccessibility'' @ 140f39f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAccessibility__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAccessibility,L"LogAccessibility",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAccessibility__);
  return;
}

// `dynamic_initializer_for_'LogFramePacer'' @ 140f39f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogFramePacer__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogFramePacer,L"LogFramePacer",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogFramePacer__);
  return;
}

// `dynamic_initializer_for_'LogGenericPlatformWindow'' @ 140f39fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGenericPlatformWindow__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGenericPlatformWindow,L"LogGenericPlatformWindow",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGenericPlatformWindow__);
  return;
}

// `dynamic_initializer_for_'LogInputDeviceMapper'' @ 140f3a010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInputDeviceMapper__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInputDeviceMapper,L"LogInputDeviceMapper",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInputDeviceMapper__);
  return;
}

// `dynamic_initializer_for_'LogNullPlatformWindow'' @ 140f3a050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNullPlatformWindow__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNullPlatformWindow,L"LogNullPlatformWindow",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNullPlatformWindow__);
  return;
}

// `dynamic_initializer_for_'LogSynthBenchmark'' @ 140f3a090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSynthBenchmark__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSynthBenchmark,L"LogSynthBenchmark",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSynthBenchmark__);
  return;
}

// `dynamic_initializer_for_'LogTextStoreACP'' @ 140f3a0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTextStoreACP__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTextStoreACP,L"LogTextStoreACP",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTextStoreACP__);
  return;
}

// `dynamic_initializer_for_'LogWindowsDesktop'' @ 140f3a110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWindowsDesktop__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWindowsDesktop,L"LogWindowsDesktop",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWindowsDesktop__);
  return;
}

// `dynamic_initializer_for_'LogWindowsRawInputThread'' @ 140f3a150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::WindowsApplication::RawInputThread::_dynamic_initializer_for__LogWindowsRawInputThread__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWindowsRawInputThread,L"LogWindowsRawInputThread",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogWindowsRawInputThread__);
  return;
}

// `dynamic_initializer_for_'LogWindowsTextInputMethodSystem'' @ 140f3a190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWindowsTextInputMethodSystem__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWindowsTextInputMethodSystem,L"LogWindowsTextInputMethodSystem"
             ,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWindowsTextInputMethodSystem__);
  return;
}

// `dynamic_initializer_for_'LogWindowsTouchpad'' @ 140f3a1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::_dynamic_initializer_for__LogWindowsTouchpad__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWindowsTouchpad,L"LogWindowsTouchpad",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogWindowsTouchpad__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantApplicationCore'' @ 140f3a210

void __cdecl _dynamic_initializer_for__ModuleRegistrantApplicationCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ApplicationCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ApplicationCore",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccessibilityWindowsGetProperty'' @ 140f3a260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccessibilityWindowsGetProperty__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccessibilityWindowsGetProperty ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilityWindowsGetProperty>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccessibilityWindowsGetProperty");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilityWindowsGetProperty,*pFVar1,
               L"Windows Accessibility: GetProperty","STATGROUP_Accessibility","STATCAT_Advanced",
               L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccessibilityWindowsNavigate'' @ 140f3a2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccessibilityWindowsNavigate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccessibilityWindowsNavigate ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilityWindowsNavigate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccessibilityWindowsNavigate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilityWindowsNavigate,*pFVar1,
               L"Windows Accessibility: Navigate","STATGROUP_Accessibility","STATCAT_Advanced",
               L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CustomMessageHandler_ProcessMessage'' @ 140f3a380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CustomMessageHandler_ProcessMessage__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CustomMessageHandler_ProcessMessage ==
      (FThreadSafeStaticStat<FStat_STAT_CustomMessageHandler_ProcessMessage>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CustomMessageHandler_ProcessMessage");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CustomMessageHandler_ProcessMessage,
               *pFVar1,L"WindowsApplication Custom Message Handler","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IMEWindowsActivateContext'' @ 140f3a410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IMEWindowsActivateContext__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IMEWindowsActivateContext ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsActivateContext>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IMEWindowsActivateContext");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsActivateContext,*pFVar1,
               L"IME ActivateContext","STATGROUP_IMEWindows","STATCAT_Advanced",L"IME Windows",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IMEWindowsApplyDefaults'' @ 140f3a4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IMEWindowsApplyDefaults__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IMEWindowsApplyDefaults ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsApplyDefaults>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IMEWindowsApplyDefaults");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsApplyDefaults,*pFVar1,
               L"IME ApplyDefaults","STATGROUP_IMEWindows","STATCAT_Advanced",L"IME Windows",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IMEWindowsDeactivateContext'' @ 140f3a530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IMEWindowsDeactivateContext__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IMEWindowsDeactivateContext ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsDeactivateContext>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IMEWindowsDeactivateContext");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsDeactivateContext,*pFVar1,
               L"IME DeactivateContext","STATGROUP_IMEWindows","STATCAT_Advanced",L"IME Windows",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IMEWindowsOnIMEActivationStateChanged'' @ 140f3a5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IMEWindowsOnIMEActivationStateChanged__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IMEWindowsOnIMEActivationStateChanged ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsOnIMEActivationStateChanged>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IMEWindowsOnIMEActivationStateChanged");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsOnIMEActivationStateChanged,
               *pFVar1,L"IME OnIMEActivationStateChanged","STATGROUP_IMEWindows","STATCAT_Advanced",
               L"IME Windows",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IMEWindowsProcessMessage'' @ 140f3a650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IMEWindowsProcessMessage__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IMEWindowsProcessMessage ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsProcessMessage>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IMEWindowsProcessMessage");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsProcessMessage,*pFVar1,
               L"IME ProcessMessage","STATGROUP_IMEWindows","STATCAT_Advanced",L"IME Windows",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IMEWindowsRegisterContext'' @ 140f3a6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IMEWindowsRegisterContext__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IMEWindowsRegisterContext ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsRegisterContext>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IMEWindowsRegisterContext");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsRegisterContext,*pFVar1,
               L"IME RegisterContext","STATGROUP_IMEWindows","STATCAT_Advanced",L"IME Windows",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IMEWindowsUnregisterContext'' @ 140f3a770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IMEWindowsUnregisterContext__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IMEWindowsUnregisterContext ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsUnregisterContext>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IMEWindowsUnregisterContext");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsUnregisterContext,*pFVar1,
               L"IME UnregisterContext","STATGROUP_IMEWindows","STATCAT_Advanced",L"IME Windows",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TouchInputHardwareName'' @ 140f3a800

void __cdecl UE::WindowsInput::_dynamic_initializer_for__TouchInputHardwareName__(void)

{
  ::FString::FString(&TouchInputHardwareName,L"MobileTouch");
  atexit(_dynamic_atexit_destructor_for__TouchInputHardwareName__);
  return;
}

// `scalar_deleting_destructor' @ 1423b87c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSafeZoneConsoleVariables,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSafeZoneConsoleVariables,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423b89e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423b8a10

void * __thiscall
FAutoConsoleVariableSink::_scalar_deleting_destructor_(FAutoConsoleVariableSink *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// AddLambda<`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_> @ 1423b92f0

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FConsoleWindow *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FConsoleWindow *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_PEAV4__Z___V__6B_
    ;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FConsoleWindow *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FConsoleWindow *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FNullApplication::FNullApplication'::__l2::<lambda_1>_> @ 1423b9540

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>::
AddLambda<_FNullApplication::FNullApplication_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FNullApplication *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FNullApplication *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FNullApplication *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FNullApplication *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_> @ 1423baaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l104::<lambda_3>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_3> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1e8 [32];
  TPromise<void> local_1a8;
  undefined4 local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FConstructor local_140;
  FString local_138;
  FString local_128;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  undefined1 local_108 [16];
  undefined **local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int iStack_e4;
  undefined ***local_e0;
  TFutureState<void> *local_d8;
  undefined **local_c8;
  FScriptContainerElement *pFStack_c0;
  code *local_b8;
  undefined ***local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_190 = 0;
  local_f8 = &
             ___7__TFunction_OwnedObject_V<lambda_3>__GI___MainWinProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_JPEAUHWND____I_K_J_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  uStack_f0 = (param_2->Cmd).Data.AllocatorInstance.Data;
  (param_2->Cmd).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8 = (param_2->Cmd).Data.ArrayNum;
  iStack_e4 = (param_2->Cmd).Data.ArrayMax;
  local_108._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>,void>
       ::Call;
  local_e0 = (undefined ***)0x0;
  (param_2->Cmd).Data.ArrayNum = 0;
  (param_2->Cmd).Data.ArrayMax = 0;
  TPromise<void>::TPromise<void>(&local_1a8,param_3);
  if ((local_1a8.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_1a8.bFutureRetrieved = true;
  if ((local_1a8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_1a8.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_1a8.State.Object;
  if (local_1a8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_140.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_190 = 1;
    if (param_1 == TaskGraph) {
      local_190 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_140,(TUniqueFunction<void___cdecl(void)> *)&local_188,
               (TPromise<void> *)local_108,(Type *)&local_1a8);
    if (local_188 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_188->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_188)(local_188,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(iStack_e4,local_e8);
    local_d8 = (TFutureState<void> *)local_108._0_8_;
    local_b0 = local_e0;
    local_a8 = local_1a8.State.Object;
    local_a0 = local_1a8.State.SharedReferenceCount.ReferenceController;
    local_c8 = local_f8;
    pFStack_c0 = uStack_f0;
    local_108._0_8_ = (TFutureState<void> *)0x0;
    local_1a8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.State.Object = (TFutureState<void> *)0x0;
    local_98 = local_1a8.bFutureRetrieved;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_3>__GI___MainWinProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_JPEAUHWND____I_K_J_Z___YA_AV__TFuture_X__W4EAsyncExecution____QEAV<lambda_3>__GI___MainWinProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_JPEAUHWND____I_K_J_Z_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar16 = local_60 + 2;
    *ppcVar16 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (undefined ***)0x0;
    local_60[4] = (code *)local_c8;
    local_60[5] = (code *)pFStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar16 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar16 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_118,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_118.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar16 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar16 = local_60;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar17 = local_b0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_138,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar19.Data = local_138.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_158.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_178 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_108._0_8_;
        puVar14[7] = local_e0;
        *(undefined4 *)(puVar14 + 4) = local_f8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_f8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_f0._4_4_;
        puVar14[6] = CONCAT44(iStack_e4,local_e8);
        if (puVar14[2] != 0) {
          local_108._0_8_ = pTVar20;
        }
        puVar14[8] = local_1a8.State.Object;
        puVar14[9] = local_1a8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_1a8.bFutureRetrieved;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1a8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_108._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_f8;
    if (local_e0 != (undefined ***)0x0) {
      pppuVar17 = local_e0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// BinarySearchBy<TArray<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 1423bb690

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>,TSizedDefaultAllocator<32>_>
           *param_1,int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x38) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x38) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// CharCast<wchar_t,char> @ 1423bb710

wchar_t __cdecl CharCast<wchar_t,char>(char param_1)

{
  char local_res8 [8];
  wchar_t local_res10 [12];
  
  local_res8[0] = param_1;
  FGenericPlatformString::Convert<char,wchar_t>(local_res10,1,local_res8,1);
  return local_res10[0];
}

// ConstructItems<FDeferredWindowsDragDropOperation,FDeferredWindowsDragDropOperation,int> @ 1423bb740

void __cdecl
ConstructItems<FDeferredWindowsDragDropOperation,FDeferredWindowsDragDropOperation,int>
          (void *param_1,FDeferredWindowsDragDropOperation *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uchar *puVar4;
  ForAnyElementType *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    pTVar6 = &(param_2->OLEData).OperationFilenames;
    do {
      *(undefined4 *)&pFVar5[-4].Data =
           *(undefined4 *)((longlong)pFVar5 + (longlong)param_2 + (-0x20 - (longlong)param_1));
      pFVar5[-3].Data = *(FScriptContainerElement **)((longlong)(pTVar6 + -2) + 8);
      FString::FString((FString *)(pFVar5 + -2),(FString *)(pTVar6 + -1));
      pFVar5->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      iVar2 = pTVar6->ArrayNum;
      pFVar3 = (pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,0,pFVar5,iVar2,piVar1);
        ConstructItems<FString,FString,int>(pFVar5->Data,(FString *)pFVar3,iVar2);
      }
      *(uchar *)&pFVar5[2].Data = *(uchar *)(pTVar6 + 1);
      *(undefined4 *)&pFVar5[3].Data = *(undefined4 *)((longlong)(pTVar6 + 1) + 8);
      puVar4 = (uchar *)(pTVar6 + 1);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar6 + 4) + 8);
      *(undefined8 *)((longlong)&pFVar5[3].Data + 4) = *(undefined8 *)((longlong)puVar4 + 0xc);
      pFVar5 = pFVar5 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FDeferredWindowsMessage,FDeferredWindowsMessage,int> @ 1423bb840

void __cdecl
ConstructItems<FDeferredWindowsMessage,FDeferredWindowsMessage,int>
          (void *param_1,FDeferredWindowsMessage *param_2,int param_3)

{
  uint *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  HWND__ **ppHVar4;
  
  if (param_3 != 0) {
    ppHVar4 = &param_2->hWND;
    puVar3 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar3[-2] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      pTVar2 = ((FWeakReferencer<1> *)(ppHVar4 + -1))->ReferenceController;
      puVar3[-1] = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
        UNLOCK();
      }
      *puVar3 = *ppHVar4;
      *(uint *)(puVar3 + 1) = *(uint *)(ppHVar4 + 1);
      puVar3[2] = ppHVar4[2];
      puVar3[3] = ppHVar4[3];
      *(int *)(puVar3 + 4) = *(int *)(ppHVar4 + 4);
      *(int *)((longlong)puVar3 + 0x24) = *(int *)((longlong)ppHVar4 + 0x24);
      puVar1 = (uint *)(ppHVar4 + 5);
      ppHVar4 = ppHVar4 + 8;
      *(uint *)(puVar3 + 5) = *puVar1;
      puVar3 = puVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMonitorInfo,FMonitorInfo,int> @ 1423bb8c0

void __cdecl
ConstructItems<FMonitorInfo,FMonitorInfo,int>(void *param_1,FMonitorInfo *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x20);
    piVar4 = &param_2->NativeWidth;
    do {
      FString::FString((FString *)(piVar3 + -8),
                       (FString *)
                       ((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)piVar3));
      FString::FString((FString *)(piVar3 + -4),(FString *)(piVar4 + -4));
      *piVar3 = *piVar4;
      piVar3[1] = piVar4[1];
      *(TIntPoint<int>_u_0 *)(piVar3 + 2) = *(TIntPoint<int>_u_0 *)(piVar4 + 2);
      iVar2 = ((FPlatformRect *)(piVar4 + 4))->Top;
      uVar1 = *(undefined8 *)(piVar4 + 6);
      piVar3[4] = ((FPlatformRect *)(piVar4 + 4))->Left;
      piVar3[5] = iVar2;
      *(undefined8 *)(piVar3 + 6) = uVar1;
      iVar2 = ((FPlatformRect *)(piVar4 + 8))->Top;
      uVar1 = *(undefined8 *)(piVar4 + 10);
      piVar3[8] = ((FPlatformRect *)(piVar4 + 8))->Left;
      piVar3[9] = iVar2;
      *(undefined8 *)(piVar3 + 10) = uVar1;
      *(bool *)(piVar3 + 0xc) = *(bool *)(piVar4 + 0xc);
      piVar3[0xd] = piVar4[0xd];
      param_3 = param_3 + -1;
      piVar3 = piVar3 + 0x16;
      piVar4 = piVar4 + 0x16;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity,int> @ 1423bb970

void __cdecl
DefaultConstructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined2 *)(puVar1 + 5) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FWindowsConsoleOutputDevice2::FLogHighlight,int> @ 1423bb9b0

void __cdecl
DefaultConstructItems<FWindowsConsoleOutputDevice2::FLogHighlight,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FWindowsConsoleOutputDevice::FLogHighlight,int> @ 1423bb9e0

void __cdecl
DefaultConstructItems<FWindowsConsoleOutputDevice::FLogHighlight,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FWindowsConsoleOutputDevice2::FLogStringHighlight,int> @ 1423bba10

void __cdecl
DefaultConstructItems<FWindowsConsoleOutputDevice2::FLogStringHighlight,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = (longlong)param_1 + 0x20;
    do {
      puVar1 = (undefined8 *)(lVar2 + 0x100);
      *(longlong *)(lVar2 + -0x20) = lVar2;
      *(undefined8 **)(lVar2 + -0x10) = puVar1;
      *(longlong *)(lVar2 + -0x18) = lVar2;
      *(undefined2 *)(lVar2 + -8) = 0;
      lVar2 = lVar2 + 0x128;
      *puVar1 = 0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FWindowsConsoleOutputDevice::FLogStringHighlight,int> @ 1423bba50

void __cdecl
DefaultConstructItems<FWindowsConsoleOutputDevice::FLogStringHighlight,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x108);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x80;
      *(undefined8 *)(puVar1 + 2) = 0;
      puVar1 = puVar1 + 0x46;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>,int> @ 1423bbb30

void __cdecl
DestructItems<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>,int>
          (TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity,int> @ 1423bbb80

void __cdecl
DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity,int>
          (Activity *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FDeferredWindowsDragDropOperation,int> @ 1423bbbd0

void __cdecl
DestructItems<FDeferredWindowsDragDropOperation,int>
          (FDeferredWindowsDragDropOperation *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->OLEData).OperationFilenames;
    do {
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FDragDropOLEData *)(pTVar2 + -1))->OperationText).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FDeferredWindowsMessage,int> @ 1423bbc30

void __cdecl
DestructItems<FDeferredWindowsMessage,int>(FDeferredWindowsMessage *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->NativeWindow).WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWindowsConsoleOutputDevice2::FLogStringHighlight,int> @ 1423bbc80

void __cdecl
DestructItems<FWindowsConsoleOutputDevice2::FLogStringHighlight,int>
          (FLogStringHighlight *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FWindowsConsoleOutputDevice::FLogStringHighlight,int> @ 1423bbcc0

void __cdecl
DestructItems<FWindowsConsoleOutputDevice::FLogStringHighlight,int>
          (FLogStringHighlight *param_1,int param_2)

{
  ForElementType<wchar_t> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->SearchString).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<wchar_t>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x23;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMonitorInfo,int> @ 1423bbd10

void __cdecl DestructItems<FMonitorInfo,int>(FMonitorInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ID).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,unsigned_int> @ 1423bbd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,unsigned_int>
          (LogEntry *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    pFVar1 = (param_1->String).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::NewLogEntry,int> @ 1423bbda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::NewLogEntry,int>
          (NewLogEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->String).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<IAccessibleWidget,1>,int> @ 1423bbde0

void __cdecl
DestructItems<TSharedPtr<IAccessibleWidget,1>,int>
          (TSharedPtr<IAccessibleWidget,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<IInputDevice,1>,int> @ 1423bbe20

void __cdecl
DestructItems<TSharedPtr<IInputDevice,1>,int>(TSharedPtr<IInputDevice,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FNullWindow,1>,int> @ 1423bbe60

void __cdecl
DestructItems<TSharedRef<FNullWindow,1>,int>(TSharedRef<FNullWindow,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FWindowsWindow,1>,int> @ 1423bbea0

void __cdecl
DestructItems<TSharedRef<FWindowsWindow,1>,int>(TSharedRef<FWindowsWindow,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeHash<FGenericWindow_const_,1> @ 1423be2c0

uint __cdecl GetTypeHash<FGenericWindow_const_,1>(TWeakPtr<FGenericWindow_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<IAccessibleWidget_const_,1> @ 1423be2f0

uint __cdecl
GetTypeHash<IAccessibleWidget_const_,1>(TSharedRef<IAccessibleWidget_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<ITextInputMethodContext_const_,1> @ 1423be320

uint __cdecl
GetTypeHash<ITextInputMethodContext_const_,1>(TWeakPtr<ITextInputMethodContext_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,`FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 1423be860

void __cdecl
AlgoImpl::
HeapSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (Activity **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  int iVar2;
  Activity *pAVar3;
  Activity *pAVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar12 = iVar8;
  iVar10 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_1423be980:
      if (iVar10 == 0) {
        iVar8 = param_2 + -1;
        lVar11 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar12 = 0;
            pAVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = pAVar3;
            if (1 < iVar8) {
              do {
                iVar10 = iVar12 * 2;
                iVar7 = iVar10 + 1;
                if (iVar10 + 2 < iVar8) {
                  iVar9 = param_1[iVar7]->SortValue;
                  iVar1 = param_1[(longlong)iVar10 + 2]->SortValue;
                  if (iVar1 == iVar9) {
                    bVar6 = param_1[(longlong)iVar10 + 2] < param_1[iVar7];
                  }
                  else {
                    bVar6 = iVar1 < iVar9;
                  }
                  if (bVar6) {
                    iVar7 = iVar10;
                  }
                  iVar7 = iVar7 + 1;
                }
                pAVar3 = param_1[iVar7];
                pAVar4 = param_1[iVar12];
                if (pAVar4->SortValue == pAVar3->SortValue) {
                  bVar6 = pAVar4 < pAVar3;
                }
                else {
                  bVar6 = pAVar4->SortValue < pAVar3->SortValue;
                }
                if (!bVar6) break;
                param_1[iVar12] = pAVar3;
                param_1[iVar7] = pAVar4;
                iVar12 = iVar7;
              } while (iVar7 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar7 = iVar10 + -1;
      iVar8 = iVar12 + -2;
      iVar12 = iVar8;
      iVar10 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      iVar1 = param_1[iVar9]->SortValue;
      iVar2 = param_1[(longlong)iVar8 + 2]->SortValue;
      if (iVar2 == iVar1) {
        bVar6 = param_1[(longlong)iVar8 + 2] < param_1[iVar9];
      }
      else {
        bVar6 = iVar2 < iVar1;
      }
      if (bVar6) {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    pAVar3 = param_1[iVar9];
    pAVar4 = param_1[iVar7];
    if (pAVar4->SortValue == pAVar3->SortValue) {
      bVar6 = pAVar4 < pAVar3;
    }
    else {
      bVar6 = pAVar4->SortValue < pAVar3->SortValue;
    }
    if (!bVar6) goto LAB_1423be980;
    iVar8 = iVar9 * 2 + 1;
    param_1[iVar7] = pAVar3;
    param_1[iVar9] = pAVar4;
    iVar7 = iVar9;
  } while( true );
}

// HeapSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,`FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications'::__l50::<lambda_1>_>'::__l2::<lambda_1>_> @ 1423bea80

void __cdecl
AlgoImpl::
HeapSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications_::__l50::<lambda_1>_>_::__l2::<lambda_1>_>
          (Activity **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  int iVar2;
  Activity *pAVar3;
  Activity *pAVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar12 = iVar8;
  iVar10 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_1423beba0:
      if (iVar10 == 0) {
        iVar8 = param_2 + -1;
        lVar11 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar12 = 0;
            pAVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = pAVar3;
            if (1 < iVar8) {
              do {
                iVar10 = iVar12 * 2;
                iVar7 = iVar10 + 1;
                if (iVar10 + 2 < iVar8) {
                  iVar9 = param_1[iVar7]->SortValue;
                  iVar1 = param_1[(longlong)iVar10 + 2]->SortValue;
                  if (iVar1 == iVar9) {
                    bVar6 = param_1[(longlong)iVar10 + 2] < param_1[iVar7];
                  }
                  else {
                    bVar6 = iVar1 < iVar9;
                  }
                  if (bVar6) {
                    iVar7 = iVar10;
                  }
                  iVar7 = iVar7 + 1;
                }
                pAVar3 = param_1[iVar7];
                pAVar4 = param_1[iVar12];
                if (pAVar4->SortValue == pAVar3->SortValue) {
                  bVar6 = pAVar4 < pAVar3;
                }
                else {
                  bVar6 = pAVar4->SortValue < pAVar3->SortValue;
                }
                if (!bVar6) break;
                param_1[iVar12] = pAVar3;
                param_1[iVar7] = pAVar4;
                iVar12 = iVar7;
              } while (iVar7 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar7 = iVar10 + -1;
      iVar8 = iVar12 + -2;
      iVar12 = iVar8;
      iVar10 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      iVar1 = param_1[iVar9]->SortValue;
      iVar2 = param_1[(longlong)iVar8 + 2]->SortValue;
      if (iVar2 == iVar1) {
        bVar6 = param_1[(longlong)iVar8 + 2] < param_1[iVar9];
      }
      else {
        bVar6 = iVar2 < iVar1;
      }
      if (bVar6) {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    pAVar3 = param_1[iVar9];
    pAVar4 = param_1[iVar7];
    if (pAVar4->SortValue == pAVar3->SortValue) {
      bVar6 = pAVar4 < pAVar3;
    }
    else {
      bVar6 = pAVar4->SortValue < pAVar3->SortValue;
    }
    if (!bVar6) goto LAB_1423beba0;
    iVar8 = iVar9 * 2 + 1;
    param_1[iVar7] = pAVar3;
    param_1[iVar9] = pAVar4;
    iVar7 = iVar9;
  } while( true );
}

// HeapSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,`FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l74::<lambda_1>_>'::__l2::<lambda_1>_> @ 1423beca0

void __cdecl
AlgoImpl::
HeapSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l74::<lambda_1>_>_::__l2::<lambda_1>_>
          (Activity **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  int iVar2;
  Activity *pAVar3;
  Activity *pAVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar12 = iVar8;
  iVar10 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_1423bedc0:
      if (iVar10 == 0) {
        iVar8 = param_2 + -1;
        lVar11 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar12 = 0;
            pAVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = pAVar3;
            if (1 < iVar8) {
              do {
                iVar10 = iVar12 * 2;
                iVar7 = iVar10 + 1;
                if (iVar10 + 2 < iVar8) {
                  iVar9 = param_1[iVar7]->SortValue;
                  iVar1 = param_1[(longlong)iVar10 + 2]->SortValue;
                  if (iVar1 == iVar9) {
                    bVar6 = param_1[(longlong)iVar10 + 2] < param_1[iVar7];
                  }
                  else {
                    bVar6 = iVar1 < iVar9;
                  }
                  if (bVar6) {
                    iVar7 = iVar10;
                  }
                  iVar7 = iVar7 + 1;
                }
                pAVar3 = param_1[iVar7];
                pAVar4 = param_1[iVar12];
                if (pAVar4->SortValue == pAVar3->SortValue) {
                  bVar6 = pAVar4 < pAVar3;
                }
                else {
                  bVar6 = pAVar4->SortValue < pAVar3->SortValue;
                }
                if (!bVar6) break;
                param_1[iVar12] = pAVar3;
                param_1[iVar7] = pAVar4;
                iVar12 = iVar7;
              } while (iVar7 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar7 = iVar10 + -1;
      iVar8 = iVar12 + -2;
      iVar12 = iVar8;
      iVar10 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      iVar1 = param_1[iVar9]->SortValue;
      iVar2 = param_1[(longlong)iVar8 + 2]->SortValue;
      if (iVar2 == iVar1) {
        bVar6 = param_1[(longlong)iVar8 + 2] < param_1[iVar9];
      }
      else {
        bVar6 = iVar2 < iVar1;
      }
      if (bVar6) {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    pAVar3 = param_1[iVar9];
    pAVar4 = param_1[iVar7];
    if (pAVar4->SortValue == pAVar3->SortValue) {
      bVar6 = pAVar4 < pAVar3;
    }
    else {
      bVar6 = pAVar4->SortValue < pAVar3->SortValue;
    }
    if (!bVar6) goto LAB_1423bedc0;
    iVar8 = iVar9 * 2 + 1;
    param_1[iVar7] = pAVar3;
    param_1[iVar9] = pAVar4;
    iVar7 = iVar9;
  } while( true );
}

// IID_PPV_ARGS_Helper<IWICBitmapSource> @ 1423beec0

void ** __cdecl IID_PPV_ARGS_Helper<IWICBitmapSource>(IWICBitmapSource **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IWICImagingFactory> @ 1423beed0

void ** __cdecl IID_PPV_ARGS_Helper<IWICImagingFactory>(IWICImagingFactory **param_1)

{
  return param_1;
}

// IntCastChecked<unsigned_long,__int64> @ 1423beee0

ulong __cdecl IntCastChecked<unsigned_long,__int64>(long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  
  if ((param_1 != (param_1 & 0xffffffffU)) || (param_1 < 0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (ulong)param_1;
}

// IntCastChecked<wchar_t,unsigned___int64> @ 1423bef40

wchar_t __cdecl IntCastChecked<wchar_t,unsigned___int64>(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t wVar3;
  
  if (param_1 != (param_1 & 0xffff)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      wVar3 = (*pcVar1)();
      return wVar3;
    }
  }
  return (wchar_t)param_1;
}

// IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,`FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 1423bef90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (Activity **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  Activity **ppAVar1;
  int iVar2;
  Activity *pAVar3;
  int iVar4;
  Activity **ppAVar5;
  Activity **ppAVar6;
  Activity **ppAVar7;
  Activity **ppAVar8;
  Activity **ppAVar9;
  Activity ***pppAVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  Activity **local_348;
  Activity **local_338;
  Activity **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    pppAVar10 = &local_338;
    do {
      ppAVar6 = pppAVar10[1];
      ppAVar5 = *pppAVar10;
      ppAVar1 = pppAVar10[2];
      iVar4 = (int)((longlong)ppAVar6 - (longlong)ppAVar5 >> 3) + 1;
      local_348._0_4_ = (int)ppAVar1;
      ppAVar9 = ppAVar5;
      if ((int)local_348 != 0) {
LAB_1423bf040:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          ppAVar7 = ppAVar6 + 1;
          pAVar3 = ppAVar9[iVar4 >> 1];
          ppAVar9[iVar4 >> 1] = *ppAVar9;
          *ppAVar9 = pAVar3;
          ppAVar5 = ppAVar9;
LAB_1423bf070:
          ppAVar5 = ppAVar5 + 1;
          if (ppAVar5 <= ppAVar6) goto code_r0x0001423bf079;
          goto LAB_1423bf0a0;
        }
        for (; ppAVar5 = ppAVar9, ppAVar1 = ppAVar9, ppAVar9 < ppAVar6; ppAVar6 = ppAVar6 + -1) {
          while (ppAVar1 = ppAVar1 + 1, ppAVar1 <= ppAVar6) {
            iVar4 = (*ppAVar1)->SortValue;
            iVar2 = (*ppAVar5)->SortValue;
            if (iVar2 == iVar4) {
              bVar11 = *ppAVar5 < *ppAVar1;
            }
            else {
              bVar11 = iVar2 < iVar4;
            }
            if (bVar11) {
              ppAVar5 = ppAVar1;
            }
          }
          pAVar3 = *ppAVar5;
          *ppAVar5 = *ppAVar6;
          *ppAVar6 = pAVar3;
        }
        goto LAB_1423bf170;
      }
LAB_1423bf15e:
      local_348 = ppAVar1;
      HeapSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                (ppAVar5,iVar4,param_3,param_4);
LAB_1423bf170:
      pppAVar10 = pppAVar10 + -3;
    } while (&local_338 <= pppAVar10);
  }
  return;
code_r0x0001423bf079:
  iVar4 = (*ppAVar5)->SortValue;
  iVar2 = (*ppAVar9)->SortValue;
  if (iVar2 == iVar4) {
    bVar11 = *ppAVar9 < *ppAVar5;
  }
  else {
    bVar11 = iVar2 < iVar4;
  }
  if (!bVar11) goto LAB_1423bf070;
LAB_1423bf0a0:
  do {
    ppAVar8 = ppAVar7;
    ppAVar7 = ppAVar8 + -1;
    if (ppAVar7 <= ppAVar9) break;
    iVar4 = (*ppAVar9)->SortValue;
    iVar2 = (*ppAVar7)->SortValue;
    if (iVar2 == iVar4) {
      bVar11 = *ppAVar7 < *ppAVar9;
    }
    else {
      bVar11 = iVar2 < iVar4;
    }
  } while (!bVar11);
  if (ppAVar5 <= ppAVar7) {
    pAVar3 = *ppAVar5;
    *ppAVar5 = *ppAVar7;
    *ppAVar7 = pAVar3;
    goto LAB_1423bf070;
  }
  pAVar3 = *ppAVar9;
  local_348._0_4_ = (int)local_348 + -1;
  *ppAVar9 = *ppAVar7;
  *ppAVar7 = pAVar3;
  if ((longlong)((longlong)ppAVar7 + (-8 - (longlong)ppAVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppAVar6 - (longlong)ppAVar5 & 0xfffffffffffffff8U)) {
    if (ppAVar5 < ppAVar6) {
      *pppAVar10 = ppAVar5;
      pppAVar10[1] = ppAVar6;
      *(int *)(pppAVar10 + 2) = (int)local_348;
      pppAVar10 = pppAVar10 + 3;
    }
    if (ppAVar7 <= ppAVar9 + 1) goto LAB_1423bf170;
    ppAVar6 = ppAVar8 + -2;
    ppAVar5 = ppAVar9;
  }
  else {
    if (ppAVar9 + 1 < ppAVar7) {
      *pppAVar10 = ppAVar9;
      pppAVar10[1] = ppAVar8 + -2;
      *(int *)(pppAVar10 + 2) = (int)local_348;
      pppAVar10 = pppAVar10 + 3;
    }
    if (ppAVar6 <= ppAVar5) goto LAB_1423bf170;
  }
  iVar4 = (int)((longlong)ppAVar6 - (longlong)ppAVar5 >> 3) + 1;
  ppAVar9 = ppAVar5;
  if ((int)local_348 == 0) goto LAB_1423bf15e;
  goto LAB_1423bf040;
}

// IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,`FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications'::__l50::<lambda_1>_>'::__l2::<lambda_1>_> @ 1423bf220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications_::__l50::<lambda_1>_>_::__l2::<lambda_1>_>
          (Activity **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  Activity **ppAVar1;
  int iVar2;
  Activity *pAVar3;
  int iVar4;
  Activity **ppAVar5;
  Activity **ppAVar6;
  Activity **ppAVar7;
  Activity **ppAVar8;
  Activity **ppAVar9;
  Activity ***pppAVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  Activity **local_348;
  Activity **local_338;
  Activity **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    pppAVar10 = &local_338;
    do {
      ppAVar6 = pppAVar10[1];
      ppAVar5 = *pppAVar10;
      ppAVar1 = pppAVar10[2];
      iVar4 = (int)((longlong)ppAVar6 - (longlong)ppAVar5 >> 3) + 1;
      local_348._0_4_ = (int)ppAVar1;
      ppAVar9 = ppAVar5;
      if ((int)local_348 != 0) {
LAB_1423bf2d0:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          ppAVar7 = ppAVar6 + 1;
          pAVar3 = ppAVar9[iVar4 >> 1];
          ppAVar9[iVar4 >> 1] = *ppAVar9;
          *ppAVar9 = pAVar3;
          ppAVar5 = ppAVar9;
LAB_1423bf300:
          ppAVar5 = ppAVar5 + 1;
          if (ppAVar5 <= ppAVar6) goto code_r0x0001423bf309;
          goto LAB_1423bf330;
        }
        for (; ppAVar5 = ppAVar9, ppAVar1 = ppAVar9, ppAVar9 < ppAVar6; ppAVar6 = ppAVar6 + -1) {
          while (ppAVar1 = ppAVar1 + 1, ppAVar1 <= ppAVar6) {
            iVar4 = (*ppAVar1)->SortValue;
            iVar2 = (*ppAVar5)->SortValue;
            if (iVar2 == iVar4) {
              bVar11 = *ppAVar5 < *ppAVar1;
            }
            else {
              bVar11 = iVar2 < iVar4;
            }
            if (bVar11) {
              ppAVar5 = ppAVar1;
            }
          }
          pAVar3 = *ppAVar5;
          *ppAVar5 = *ppAVar6;
          *ppAVar6 = pAVar3;
        }
        goto LAB_1423bf400;
      }
LAB_1423bf3ee:
      local_348 = ppAVar1;
      HeapSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications_::__l50::<lambda_1>_>_::__l2::<lambda_1>_>
                (ppAVar5,iVar4,param_3,param_4);
LAB_1423bf400:
      pppAVar10 = pppAVar10 + -3;
    } while (&local_338 <= pppAVar10);
  }
  return;
code_r0x0001423bf309:
  iVar4 = (*ppAVar5)->SortValue;
  iVar2 = (*ppAVar9)->SortValue;
  if (iVar2 == iVar4) {
    bVar11 = *ppAVar9 < *ppAVar5;
  }
  else {
    bVar11 = iVar2 < iVar4;
  }
  if (!bVar11) goto LAB_1423bf300;
LAB_1423bf330:
  do {
    ppAVar8 = ppAVar7;
    ppAVar7 = ppAVar8 + -1;
    if (ppAVar7 <= ppAVar9) break;
    iVar4 = (*ppAVar9)->SortValue;
    iVar2 = (*ppAVar7)->SortValue;
    if (iVar2 == iVar4) {
      bVar11 = *ppAVar7 < *ppAVar9;
    }
    else {
      bVar11 = iVar2 < iVar4;
    }
  } while (!bVar11);
  if (ppAVar5 <= ppAVar7) {
    pAVar3 = *ppAVar5;
    *ppAVar5 = *ppAVar7;
    *ppAVar7 = pAVar3;
    goto LAB_1423bf300;
  }
  pAVar3 = *ppAVar9;
  local_348._0_4_ = (int)local_348 + -1;
  *ppAVar9 = *ppAVar7;
  *ppAVar7 = pAVar3;
  if ((longlong)((longlong)ppAVar7 + (-8 - (longlong)ppAVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppAVar6 - (longlong)ppAVar5 & 0xfffffffffffffff8U)) {
    if (ppAVar5 < ppAVar6) {
      *pppAVar10 = ppAVar5;
      pppAVar10[1] = ppAVar6;
      *(int *)(pppAVar10 + 2) = (int)local_348;
      pppAVar10 = pppAVar10 + 3;
    }
    if (ppAVar7 <= ppAVar9 + 1) goto LAB_1423bf400;
    ppAVar6 = ppAVar8 + -2;
    ppAVar5 = ppAVar9;
  }
  else {
    if (ppAVar9 + 1 < ppAVar7) {
      *pppAVar10 = ppAVar9;
      pppAVar10[1] = ppAVar8 + -2;
      *(int *)(pppAVar10 + 2) = (int)local_348;
      pppAVar10 = pppAVar10 + 3;
    }
    if (ppAVar6 <= ppAVar5) goto LAB_1423bf400;
  }
  iVar4 = (int)((longlong)ppAVar6 - (longlong)ppAVar5 >> 3) + 1;
  ppAVar9 = ppAVar5;
  if ((int)local_348 == 0) goto LAB_1423bf3ee;
  goto LAB_1423bf2d0;
}

// IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,`FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l74::<lambda_1>_>'::__l2::<lambda_1>_> @ 1423bf4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l74::<lambda_1>_>_::__l2::<lambda_1>_>
          (Activity **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  Activity **ppAVar1;
  int iVar2;
  Activity *pAVar3;
  int iVar4;
  Activity **ppAVar5;
  Activity **ppAVar6;
  Activity **ppAVar7;
  Activity **ppAVar8;
  Activity **ppAVar9;
  Activity ***pppAVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  Activity **local_348;
  Activity **local_338;
  Activity **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    pppAVar10 = &local_338;
    do {
      ppAVar6 = pppAVar10[1];
      ppAVar5 = *pppAVar10;
      ppAVar1 = pppAVar10[2];
      iVar4 = (int)((longlong)ppAVar6 - (longlong)ppAVar5 >> 3) + 1;
      local_348._0_4_ = (int)ppAVar1;
      ppAVar9 = ppAVar5;
      if ((int)local_348 != 0) {
LAB_1423bf560:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          ppAVar7 = ppAVar6 + 1;
          pAVar3 = ppAVar9[iVar4 >> 1];
          ppAVar9[iVar4 >> 1] = *ppAVar9;
          *ppAVar9 = pAVar3;
          ppAVar5 = ppAVar9;
LAB_1423bf590:
          ppAVar5 = ppAVar5 + 1;
          if (ppAVar5 <= ppAVar6) goto code_r0x0001423bf599;
          goto LAB_1423bf5c0;
        }
        for (; ppAVar5 = ppAVar9, ppAVar1 = ppAVar9, ppAVar9 < ppAVar6; ppAVar6 = ppAVar6 + -1) {
          while (ppAVar1 = ppAVar1 + 1, ppAVar1 <= ppAVar6) {
            iVar4 = (*ppAVar1)->SortValue;
            iVar2 = (*ppAVar5)->SortValue;
            if (iVar2 == iVar4) {
              bVar11 = *ppAVar5 < *ppAVar1;
            }
            else {
              bVar11 = iVar2 < iVar4;
            }
            if (bVar11) {
              ppAVar5 = ppAVar1;
            }
          }
          pAVar3 = *ppAVar5;
          *ppAVar5 = *ppAVar6;
          *ppAVar6 = pAVar3;
        }
        goto LAB_1423bf690;
      }
LAB_1423bf67e:
      local_348 = ppAVar1;
      HeapSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l74::<lambda_1>_>_::__l2::<lambda_1>_>
                (ppAVar5,iVar4,param_3,param_4);
LAB_1423bf690:
      pppAVar10 = pppAVar10 + -3;
    } while (&local_338 <= pppAVar10);
  }
  return;
code_r0x0001423bf599:
  iVar4 = (*ppAVar5)->SortValue;
  iVar2 = (*ppAVar9)->SortValue;
  if (iVar2 == iVar4) {
    bVar11 = *ppAVar9 < *ppAVar5;
  }
  else {
    bVar11 = iVar2 < iVar4;
  }
  if (!bVar11) goto LAB_1423bf590;
LAB_1423bf5c0:
  do {
    ppAVar8 = ppAVar7;
    ppAVar7 = ppAVar8 + -1;
    if (ppAVar7 <= ppAVar9) break;
    iVar4 = (*ppAVar9)->SortValue;
    iVar2 = (*ppAVar7)->SortValue;
    if (iVar2 == iVar4) {
      bVar11 = *ppAVar7 < *ppAVar9;
    }
    else {
      bVar11 = iVar2 < iVar4;
    }
  } while (!bVar11);
  if (ppAVar5 <= ppAVar7) {
    pAVar3 = *ppAVar5;
    *ppAVar5 = *ppAVar7;
    *ppAVar7 = pAVar3;
    goto LAB_1423bf590;
  }
  pAVar3 = *ppAVar9;
  local_348._0_4_ = (int)local_348 + -1;
  *ppAVar9 = *ppAVar7;
  *ppAVar7 = pAVar3;
  if ((longlong)((longlong)ppAVar7 + (-8 - (longlong)ppAVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppAVar6 - (longlong)ppAVar5 & 0xfffffffffffffff8U)) {
    if (ppAVar5 < ppAVar6) {
      *pppAVar10 = ppAVar5;
      pppAVar10[1] = ppAVar6;
      *(int *)(pppAVar10 + 2) = (int)local_348;
      pppAVar10 = pppAVar10 + 3;
    }
    if (ppAVar7 <= ppAVar9 + 1) goto LAB_1423bf690;
    ppAVar6 = ppAVar8 + -2;
    ppAVar5 = ppAVar9;
  }
  else {
    if (ppAVar9 + 1 < ppAVar7) {
      *pppAVar10 = ppAVar9;
      pppAVar10[1] = ppAVar8 + -2;
      *(int *)(pppAVar10 + 2) = (int)local_348;
      pppAVar10 = pppAVar10 + 3;
    }
    if (ppAVar6 <= ppAVar5) goto LAB_1423bf690;
  }
  iVar4 = (int)((longlong)ppAVar6 - (longlong)ppAVar5 >> 3) + 1;
  ppAVar9 = ppAVar5;
  if ((int)local_348 == 0) goto LAB_1423bf67e;
  goto LAB_1423bf560;
}

// LowerBoundInternal<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>_const_,int,int,TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 1423bf740

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>_const_,int,int,TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *param_1,
          int param_2,int *param_3,FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions'::__l2::<lambda_1>_> @ 1423c0670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::
TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions_::__l2::<lambda_1>_>
          (FConsoleWindow *this,int param_1,int param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  <lambda_1> *p<Var2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar6;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar7;
  Activity *pAVar8;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_338 [32];
  Activity **local_318;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> local_310;
  longlong local_308;
  longlong local_300;
  undefined8 local_2f8;
  FIdentityFunctor local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8 [4];
  Activity *local_2c8;
  Activity *local_2c0;
  undefined4 local_2b8 [2];
  <lambda_1> *local_2b0;
  <lambda_1> *local_2a8;
  int *local_2a0;
  int *local_298;
  int *local_290;
  int *local_288;
  undefined4 *local_280;
  int *local_278;
  int *local_270;
  int *local_268;
  TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_258;
  TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_338;
  lVar13 = (longlong)(this->Activities).ArrayNum;
  FVar7 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  local_148.AllocatorInstance.SecondaryData =
       (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  iVar5 = 0;
  local_148.ArrayNum = 0;
  uVar10 = 0;
  local_148.ArrayMax = 0x20;
  local_258.AllocatorInstance.SecondaryData =
       (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0x20;
  local_2b0 = param_3;
  if (lVar13 != 0) {
    lVar11 = 0;
    do {
      iVar12 = (this->Activities).ArrayNum;
      uVar4 = 0;
      if ((int)uVar10 < iVar12) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_318 = (Activity **)(longlong)(int)uVar10;
        local_310 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                    (longlong)iVar12;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar6 = local_258.AllocatorInstance.SecondaryData;
        FVar7 = local_148.AllocatorInstance.SecondaryData;
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      pAVar8 = (Activity *)((this->Activities).AllocatorInstance.Data + lVar11);
      if (1 < (pAVar8->Name).Data.ArrayNum) {
        iVar5 = iVar5 + 1;
        if (pAVar8->bAlignLeft == false) {
          FVar7 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_258;
          if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar7 = FVar6;
          }
          local_2c0 = pAVar8;
          if ((ulonglong)FVar7 <= &local_2c0) {
            FVar7 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                    &local_258;
            if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                         0x0) {
              FVar7 = FVar6;
            }
            if (&local_2c0 < (Activity **)((longlong)FVar7 + (longlong)local_258.ArrayMax * 8)) {
              local_300 = (longlong)local_258.ArrayNum;
              local_2f8 = 8;
              local_318 = &local_2c0;
              local_310 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                          &local_258;
              if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>
                           )0x0) {
                local_310 = FVar6;
              }
              local_308 = (longlong)local_258.ArrayMax;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              FVar6 = local_258.AllocatorInstance.SecondaryData;
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                iVar5 = (*pcVar1)();
                return iVar5;
              }
            }
          }
          if (local_258.ArrayNum == local_258.ArrayMax) {
            local_258.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>_>
                           (0x808,&local_258.AllocatorInstance,&local_258.ArrayMax);
            FVar6 = local_258.AllocatorInstance.SecondaryData;
          }
          FVar9 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_258;
          if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar9 = FVar6;
          }
          pAVar8 = local_2c0;
          iVar12 = local_258.ArrayNum;
          local_258.ArrayNum = local_258.ArrayNum + 1;
        }
        else {
          FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_148;
          if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar6 = FVar7;
          }
          local_2c8 = pAVar8;
          if ((ulonglong)FVar6 <= &local_2c8) {
            FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                    &local_148;
            if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                         0x0) {
              FVar6 = FVar7;
            }
            if (&local_2c8 < (Activity **)((longlong)FVar6 + (longlong)local_148.ArrayMax * 8)) {
              local_300 = (longlong)local_148.ArrayNum;
              local_2f8 = 8;
              local_318 = &local_2c8;
              local_310 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                          &local_148;
              if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>
                           )0x0) {
                local_310 = FVar7;
              }
              local_308 = (longlong)local_148.ArrayMax;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              FVar7 = local_148.AllocatorInstance.SecondaryData;
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                iVar5 = (*pcVar1)();
                return iVar5;
              }
            }
          }
          if (local_148.ArrayNum == local_148.ArrayMax) {
            local_148.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>_>
                           (0x808,&local_148.AllocatorInstance,&local_148.ArrayMax);
            FVar7 = local_148.AllocatorInstance.SecondaryData;
          }
          FVar9 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_148;
          if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar9 = FVar7;
          }
          pAVar8 = local_2c8;
          iVar12 = local_148.ArrayNum;
          local_148.ArrayNum = local_148.ArrayNum + 1;
        }
        *(Activity **)((longlong)FVar9 + (longlong)iVar12 * 8) = pAVar8;
        FVar6 = local_258.AllocatorInstance.SecondaryData;
        FVar7 = local_148.AllocatorInstance.SecondaryData;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x40;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  p<Var2 = local_2b0;
  FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)&local_148;
  if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FVar6 = FVar7;
  }
  AlgoImpl::
  IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
            ((Activity **)FVar6,local_148.ArrayNum,local_2e8,(<lambda_1>)local_2e8);
  FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)&local_258;
  if (local_258.AllocatorInstance.SecondaryData !=
      (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FVar6 = local_258.AllocatorInstance.SecondaryData;
  }
  AlgoImpl::
  IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
            ((Activity **)FVar6,local_258.ArrayNum,local_2e8,(<lambda_1>)local_2e8);
  iVar12 = 1;
  iVar5 = iVar5 - local_148.ArrayNum;
  local_2e4 = iVar5;
  if (iVar5 < local_148.ArrayNum) {
    local_2e4 = local_148.ArrayNum;
  }
  if ((local_148.ArrayNum < iVar5) && (399 < param_1 + -0x25e)) {
    iVar12 = 2;
    local_2e4 = (iVar5 + 1) / 2;
    if (local_2e4 < local_148.ArrayNum) {
      local_2e4 = local_148.ArrayNum;
    }
  }
  iVar5 = local_2e4 * 0x12 + 8;
  local_2b8[0] = 0x12;
  local_2a0 = &local_2e0;
  local_2e0 = 7;
  local_298 = local_2d8;
  local_290 = local_2d8 + 2;
  local_2dc = (param_2 - iVar5) + 2;
  local_288 = local_2d8 + 1;
  local_280 = local_2b8;
  local_278 = &local_2e4;
  local_270 = &local_2dc;
  local_268 = local_2d8 + 3;
  local_2d8[1] = 0;
  local_2d8[3] = param_1 + -6 + iVar12 * -200;
  local_2d8[2] = local_2d8[3] + -7;
  local_2d8[3] = local_2d8[3] + -9;
  local_2d8[0] = local_2dc;
  local_2a8 = p<Var2;
  `FWindowsConsoleOutputDevice2::FConsoleWindow::
  TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions'::__l2::<lambda_1>_>'
  ::__l2::<lambda_2>::operator()(&local_2a8,&local_148);
  local_2e0 = param_1 + -0xc6;
  local_2d8[1] = 0;
  local_2d8[0] = local_2dc;
  local_2d8[2] = 0xc0;
  local_2d8[3] = 0xffffff38;
  `FWindowsConsoleOutputDevice2::FConsoleWindow::
  TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions'::__l2::<lambda_1>_>'
  ::__l2::<lambda_2>::operator()(&local_2a8,&local_258);
  if (local_258.AllocatorInstance.SecondaryData !=
      (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
  }
  if (local_148.AllocatorInstance.SecondaryData !=
      (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  return iVar5;
}

// TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications'::__l50::<lambda_1>_> @ 1423c0b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::
TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications_::__l50::<lambda_1>_>
          (FConsoleWindow *this,int param_1,int param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  <lambda_1> *p<Var2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar6;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar7;
  Activity *pAVar8;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_338 [32];
  Activity **local_318;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> local_310;
  longlong local_308;
  longlong local_300;
  undefined8 local_2f8;
  FIdentityFunctor local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8 [4];
  Activity *local_2c8;
  Activity *local_2c0;
  undefined4 local_2b8 [2];
  <lambda_1> *local_2b0;
  <lambda_1> *local_2a8;
  int *local_2a0;
  int *local_298;
  int *local_290;
  int *local_288;
  undefined4 *local_280;
  int *local_278;
  int *local_270;
  int *local_268;
  TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_258;
  TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_338;
  lVar13 = (longlong)(this->Activities).ArrayNum;
  FVar7 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  local_148.AllocatorInstance.SecondaryData =
       (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  iVar5 = 0;
  local_148.ArrayNum = 0;
  uVar10 = 0;
  local_148.ArrayMax = 0x20;
  local_258.AllocatorInstance.SecondaryData =
       (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0x20;
  local_2b0 = param_3;
  if (lVar13 != 0) {
    lVar11 = 0;
    do {
      iVar12 = (this->Activities).ArrayNum;
      uVar4 = 0;
      if ((int)uVar10 < iVar12) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_318 = (Activity **)(longlong)(int)uVar10;
        local_310 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                    (longlong)iVar12;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar6 = local_258.AllocatorInstance.SecondaryData;
        FVar7 = local_148.AllocatorInstance.SecondaryData;
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      pAVar8 = (Activity *)((this->Activities).AllocatorInstance.Data + lVar11);
      if (1 < (pAVar8->Name).Data.ArrayNum) {
        iVar5 = iVar5 + 1;
        if (pAVar8->bAlignLeft == false) {
          FVar7 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_258;
          if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar7 = FVar6;
          }
          local_2c0 = pAVar8;
          if ((ulonglong)FVar7 <= &local_2c0) {
            FVar7 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                    &local_258;
            if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                         0x0) {
              FVar7 = FVar6;
            }
            if (&local_2c0 < (Activity **)((longlong)FVar7 + (longlong)local_258.ArrayMax * 8)) {
              local_300 = (longlong)local_258.ArrayNum;
              local_2f8 = 8;
              local_318 = &local_2c0;
              local_310 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                          &local_258;
              if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>
                           )0x0) {
                local_310 = FVar6;
              }
              local_308 = (longlong)local_258.ArrayMax;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              FVar6 = local_258.AllocatorInstance.SecondaryData;
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                iVar5 = (*pcVar1)();
                return iVar5;
              }
            }
          }
          if (local_258.ArrayNum == local_258.ArrayMax) {
            local_258.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>_>
                           (0x808,&local_258.AllocatorInstance,&local_258.ArrayMax);
            FVar6 = local_258.AllocatorInstance.SecondaryData;
          }
          FVar9 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_258;
          if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar9 = FVar6;
          }
          pAVar8 = local_2c0;
          iVar12 = local_258.ArrayNum;
          local_258.ArrayNum = local_258.ArrayNum + 1;
        }
        else {
          FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_148;
          if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar6 = FVar7;
          }
          local_2c8 = pAVar8;
          if ((ulonglong)FVar6 <= &local_2c8) {
            FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                    &local_148;
            if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                         0x0) {
              FVar6 = FVar7;
            }
            if (&local_2c8 < (Activity **)((longlong)FVar6 + (longlong)local_148.ArrayMax * 8)) {
              local_300 = (longlong)local_148.ArrayNum;
              local_2f8 = 8;
              local_318 = &local_2c8;
              local_310 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                          &local_148;
              if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>
                           )0x0) {
                local_310 = FVar7;
              }
              local_308 = (longlong)local_148.ArrayMax;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              FVar7 = local_148.AllocatorInstance.SecondaryData;
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                iVar5 = (*pcVar1)();
                return iVar5;
              }
            }
          }
          if (local_148.ArrayNum == local_148.ArrayMax) {
            local_148.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>_>
                           (0x808,&local_148.AllocatorInstance,&local_148.ArrayMax);
            FVar7 = local_148.AllocatorInstance.SecondaryData;
          }
          FVar9 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_148;
          if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar9 = FVar7;
          }
          pAVar8 = local_2c8;
          iVar12 = local_148.ArrayNum;
          local_148.ArrayNum = local_148.ArrayNum + 1;
        }
        *(Activity **)((longlong)FVar9 + (longlong)iVar12 * 8) = pAVar8;
        FVar6 = local_258.AllocatorInstance.SecondaryData;
        FVar7 = local_148.AllocatorInstance.SecondaryData;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x40;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  p<Var2 = local_2b0;
  FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)&local_148;
  if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FVar6 = FVar7;
  }
  AlgoImpl::
  IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications_::__l50::<lambda_1>_>_::__l2::<lambda_1>_>
            ((Activity **)FVar6,local_148.ArrayNum,local_2e8,(<lambda_1>)local_2e8);
  FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)&local_258;
  if (local_258.AllocatorInstance.SecondaryData !=
      (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FVar6 = local_258.AllocatorInstance.SecondaryData;
  }
  AlgoImpl::
  IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications_::__l50::<lambda_1>_>_::__l2::<lambda_1>_>
            ((Activity **)FVar6,local_258.ArrayNum,local_2e8,(<lambda_1>)local_2e8);
  iVar12 = 1;
  iVar5 = iVar5 - local_148.ArrayNum;
  local_2e4 = iVar5;
  if (iVar5 < local_148.ArrayNum) {
    local_2e4 = local_148.ArrayNum;
  }
  if ((local_148.ArrayNum < iVar5) && (399 < param_1 + -0x25e)) {
    iVar12 = 2;
    local_2e4 = (iVar5 + 1) / 2;
    if (local_2e4 < local_148.ArrayNum) {
      local_2e4 = local_148.ArrayNum;
    }
  }
  iVar5 = local_2e4 * 0x12 + 8;
  local_2b8[0] = 0x12;
  local_2a0 = &local_2e0;
  local_2e0 = 7;
  local_298 = local_2d8;
  local_290 = local_2d8 + 2;
  local_2dc = (param_2 - iVar5) + 2;
  local_288 = local_2d8 + 1;
  local_280 = local_2b8;
  local_278 = &local_2e4;
  local_270 = &local_2dc;
  local_268 = local_2d8 + 3;
  local_2d8[1] = 0;
  local_2d8[3] = param_1 + -6 + iVar12 * -200;
  local_2d8[2] = local_2d8[3] + -7;
  local_2d8[3] = local_2d8[3] + -9;
  local_2d8[0] = local_2dc;
  local_2a8 = p<Var2;
  `FWindowsConsoleOutputDevice2::FConsoleWindow::
  TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications'::__l50::<lambda_1>_>'
  ::__l2::<lambda_2>::operator()(&local_2a8,&local_148);
  local_2e0 = param_1 + -0xc6;
  local_2d8[1] = 0;
  local_2d8[0] = local_2dc;
  local_2d8[2] = 0xc0;
  local_2d8[3] = 0xffffff38;
  `FWindowsConsoleOutputDevice2::FConsoleWindow::
  TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications'::__l50::<lambda_1>_>'
  ::__l2::<lambda_2>::operator()(&local_2a8,&local_258);
  if (local_258.AllocatorInstance.SecondaryData !=
      (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
  }
  if (local_148.AllocatorInstance.SecondaryData !=
      (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  return iVar5;
}

// TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l74::<lambda_1>_> @ 1423c1070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::
TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l74::<lambda_1>_>
          (FConsoleWindow *this,int param_1,int param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  <lambda_1> *p<Var2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar6;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar7;
  Activity *pAVar8;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_338 [32];
  Activity **local_318;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> local_310;
  longlong local_308;
  longlong local_300;
  undefined8 local_2f8;
  FIdentityFunctor local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8 [4];
  Activity *local_2c8;
  Activity *local_2c0;
  undefined4 local_2b8 [2];
  <lambda_1> *local_2b0;
  <lambda_1> *local_2a8;
  int *local_2a0;
  int *local_298;
  int *local_290;
  int *local_288;
  undefined4 *local_280;
  int *local_278;
  int *local_270;
  int *local_268;
  TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_258;
  TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_338;
  lVar13 = (longlong)(this->Activities).ArrayNum;
  FVar7 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  local_148.AllocatorInstance.SecondaryData =
       (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  iVar5 = 0;
  local_148.ArrayNum = 0;
  uVar10 = 0;
  local_148.ArrayMax = 0x20;
  local_258.AllocatorInstance.SecondaryData =
       (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0x20;
  local_2b0 = param_3;
  if (lVar13 != 0) {
    lVar11 = 0;
    do {
      iVar12 = (this->Activities).ArrayNum;
      uVar4 = 0;
      if ((int)uVar10 < iVar12) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_318 = (Activity **)(longlong)(int)uVar10;
        local_310 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                    (longlong)iVar12;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar6 = local_258.AllocatorInstance.SecondaryData;
        FVar7 = local_148.AllocatorInstance.SecondaryData;
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      pAVar8 = (Activity *)((this->Activities).AllocatorInstance.Data + lVar11);
      if (1 < (pAVar8->Name).Data.ArrayNum) {
        iVar5 = iVar5 + 1;
        if (pAVar8->bAlignLeft == false) {
          FVar7 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_258;
          if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar7 = FVar6;
          }
          local_2c0 = pAVar8;
          if ((ulonglong)FVar7 <= &local_2c0) {
            FVar7 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                    &local_258;
            if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                         0x0) {
              FVar7 = FVar6;
            }
            if (&local_2c0 < (Activity **)((longlong)FVar7 + (longlong)local_258.ArrayMax * 8)) {
              local_300 = (longlong)local_258.ArrayNum;
              local_2f8 = 8;
              local_318 = &local_2c0;
              local_310 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                          &local_258;
              if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>
                           )0x0) {
                local_310 = FVar6;
              }
              local_308 = (longlong)local_258.ArrayMax;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              FVar6 = local_258.AllocatorInstance.SecondaryData;
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                iVar5 = (*pcVar1)();
                return iVar5;
              }
            }
          }
          if (local_258.ArrayNum == local_258.ArrayMax) {
            local_258.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>_>
                           (0x808,&local_258.AllocatorInstance,&local_258.ArrayMax);
            FVar6 = local_258.AllocatorInstance.SecondaryData;
          }
          FVar9 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_258;
          if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar9 = FVar6;
          }
          pAVar8 = local_2c0;
          iVar12 = local_258.ArrayNum;
          local_258.ArrayNum = local_258.ArrayNum + 1;
        }
        else {
          FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_148;
          if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar6 = FVar7;
          }
          local_2c8 = pAVar8;
          if ((ulonglong)FVar6 <= &local_2c8) {
            FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                    &local_148;
            if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                         0x0) {
              FVar6 = FVar7;
            }
            if (&local_2c8 < (Activity **)((longlong)FVar6 + (longlong)local_148.ArrayMax * 8)) {
              local_300 = (longlong)local_148.ArrayNum;
              local_2f8 = 8;
              local_318 = &local_2c8;
              local_310 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                          &local_148;
              if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>
                           )0x0) {
                local_310 = FVar7;
              }
              local_308 = (longlong)local_148.ArrayMax;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              FVar7 = local_148.AllocatorInstance.SecondaryData;
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                iVar5 = (*pcVar1)();
                return iVar5;
              }
            }
          }
          if (local_148.ArrayNum == local_148.ArrayMax) {
            local_148.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>_>
                           (0x808,&local_148.AllocatorInstance,&local_148.ArrayMax);
            FVar7 = local_148.AllocatorInstance.SecondaryData;
          }
          FVar9 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)
                  &local_148;
          if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0
             ) {
            FVar9 = FVar7;
          }
          pAVar8 = local_2c8;
          iVar12 = local_148.ArrayNum;
          local_148.ArrayNum = local_148.ArrayNum + 1;
        }
        *(Activity **)((longlong)FVar9 + (longlong)iVar12 * 8) = pAVar8;
        FVar6 = local_258.AllocatorInstance.SecondaryData;
        FVar7 = local_148.AllocatorInstance.SecondaryData;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x40;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  p<Var2 = local_2b0;
  FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)&local_148;
  if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FVar6 = FVar7;
  }
  AlgoImpl::
  IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l74::<lambda_1>_>_::__l2::<lambda_1>_>
            ((Activity **)FVar6,local_148.ArrayNum,local_2e8,(<lambda_1>)local_2e8);
  FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)&local_258;
  if (local_258.AllocatorInstance.SecondaryData !=
      (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FVar6 = local_258.AllocatorInstance.SecondaryData;
  }
  AlgoImpl::
  IntroSortInternal<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,int,FIdentityFunctor,_FWindowsConsoleOutputDevice2::FConsoleWindow::TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l74::<lambda_1>_>_::__l2::<lambda_1>_>
            ((Activity **)FVar6,local_258.ArrayNum,local_2e8,(<lambda_1>)local_2e8);
  iVar12 = 1;
  iVar5 = iVar5 - local_148.ArrayNum;
  local_2e4 = iVar5;
  if (iVar5 < local_148.ArrayNum) {
    local_2e4 = local_148.ArrayNum;
  }
  if ((local_148.ArrayNum < iVar5) && (399 < param_1 + -0x25e)) {
    iVar12 = 2;
    local_2e4 = (iVar5 + 1) / 2;
    if (local_2e4 < local_148.ArrayNum) {
      local_2e4 = local_148.ArrayNum;
    }
  }
  iVar5 = local_2e4 * 0x12 + 8;
  local_2b8[0] = 0x12;
  local_2a0 = &local_2e0;
  local_2e0 = 7;
  local_298 = local_2d8;
  local_290 = local_2d8 + 2;
  local_2dc = (param_2 - iVar5) + 2;
  local_288 = local_2d8 + 1;
  local_280 = local_2b8;
  local_278 = &local_2e4;
  local_270 = &local_2dc;
  local_268 = local_2d8 + 3;
  local_2d8[1] = 0;
  local_2d8[3] = param_1 + -6 + iVar12 * -200;
  local_2d8[2] = local_2d8[3] + -7;
  local_2d8[3] = local_2d8[3] + -9;
  local_2d8[0] = local_2dc;
  local_2a8 = p<Var2;
  `FWindowsConsoleOutputDevice2::FConsoleWindow::
  TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l74::<lambda_1>_>'
  ::__l2::<lambda_2>::operator()(&local_2a8,&local_148);
  local_2e0 = param_1 + -0xc6;
  local_2d8[1] = 0;
  local_2d8[0] = local_2dc;
  local_2d8[2] = 0xc0;
  local_2d8[3] = 0xffffff38;
  `FWindowsConsoleOutputDevice2::FConsoleWindow::
  TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l74::<lambda_1>_>'
  ::__l2::<lambda_2>::operator()(&local_2a8,&local_258);
  if (local_258.AllocatorInstance.SecondaryData !=
      (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
  }
  if (local_148.AllocatorInstance.SecondaryData !=
      (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  return iVar5;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>_> @ 1423c16b0

int * __cdecl
std::
_Atomic_address_as<int,std::_Atomic_padded<enum_UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>_>
          (_Atomic_padded<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>
           *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>_> @ 1423c16c0

int * __cdecl
std::
_Atomic_address_as<int,std::_Atomic_padded<enum_UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>_>
          (_Atomic_padded<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>
           *param_1)

{
  return (int *)param_1;
}

// _Atomic_reinterpret_as<int,enum_UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL> @ 1423c16d0

int __cdecl
std::
_Atomic_reinterpret_as<int,enum_UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>
          (TOUCHPAD_SENSITIVITY_LEVEL *param_1)

{
  return *param_1;
}

// GenericApplication @ 1423c53c0

GenericApplication * __thiscall
GenericApplication::GenericApplication(GenericApplication *this,TSharedPtr<ICursor,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGenericApplicationMessageHandler *pFVar3;
  FGenericAccessibleMessageHandler *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  GenericApplication *pGVar6;
  TRawPtrProxy<FGenericApplicationMessageHandler> local_res8;
  TRawPtrProxy<FGenericAccessibleMessageHandler> local_res10;
  
  this->_padding_ = (longlong)&___7GenericApplication__6B_;
  (this->Cursor).Object = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Cursor).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = ::operator_new(8);
  local_res8.Object = (FGenericApplicationMessageHandler *)0x0;
  if (pFVar3 != (FGenericApplicationMessageHandler *)0x0) {
    *pFVar3 = (FGenericApplicationMessageHandler)&___7FGenericApplicationMessageHandler__6B_;
    local_res8.Object = pFVar3;
  }
  TSharedRef<FGenericApplicationMessageHandler,1>::
  TSharedRef<FGenericApplicationMessageHandler,1><FGenericApplicationMessageHandler>
            (&this->MessageHandler,&local_res8);
  pFVar4 = ::operator_new(0x38);
  if (pFVar4 == (FGenericAccessibleMessageHandler *)0x0) {
    pFVar4 = (FGenericAccessibleMessageHandler *)0x0;
  }
  else {
    pFVar4->bApplicationIsAccessible = false;
    pFVar4->bIsActive = false;
    pFVar4->_padding_ = (longlong)&___7FGenericAccessibleMessageHandler__6B_;
    *(undefined8 *)&pFVar4->AccessibleEventDelegate = 0;
    *(undefined8 *)&(pFVar4->AccessibleEventDelegate).field_0x8 = 0;
    *(undefined4 *)&(pFVar4->AccessibleEventDelegate).field_0x10 = 0;
    pTVar5 = ::operator_new(0x68);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      (pFVar4->AccessibleUserRegistry).Object = (FGenericAccessibleUserRegistry *)0x10;
      (pFVar4->AccessibleUserRegistry).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFGenericAccessibleUserRegistry___00_SharedPointerInternals__6B_
      ;
      pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[3]._padding_ = 0;
      pTVar5[5]._padding_ = 0;
      pTVar5[6]._padding_ = 0;
      pTVar5[1]._padding_ = (longlong)&___7FGenericAccessibleUserRegistry__6B_;
      pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[2]._padding_ = 0;
      pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar5[4]._padding_ = 0;
      *(undefined4 *)((longlong)&pTVar5[4]._padding_ + 4) = 0x80;
      pTVar5[4].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[5].WeakReferenceCount = (atomic<int>)0x0;
      (pFVar4->AccessibleUserRegistry).Object = (FGenericAccessibleUserRegistry *)(pTVar5 + 1);
      (pFVar4->AccessibleUserRegistry).SharedReferenceCount.ReferenceController = pTVar5;
      if (((FGenericAccessibleUserRegistry *)(pTVar5 + 1) == (FGenericAccessibleUserRegistry *)0x0)
         && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pGVar6 = (GenericApplication *)(*pcVar1)();
        return pGVar6;
      }
    }
  }
  local_res10.Object = pFVar4;
  TSharedRef<FGenericAccessibleMessageHandler,1>::
  TSharedRef<FGenericAccessibleMessageHandler,1><FGenericAccessibleMessageHandler>
            (&this->AccessibleMessageHandler,&local_res10);
  *(undefined8 *)&this->OnDisplayMetricsChangedEvent = 0;
  *(undefined8 *)&(this->OnDisplayMetricsChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnDisplayMetricsChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->VirtualKeyboardShownEvent = 0;
  *(undefined8 *)&(this->VirtualKeyboardShownEvent).field_0x8 = 0;
  *(undefined8 *)&(this->VirtualKeyboardShownEvent).field_0x10 = 0;
  *(undefined8 *)&this->VirtualKeyboardHiddenEvent = 0;
  *(undefined8 *)&(this->VirtualKeyboardHiddenEvent).field_0x8 = 0;
  *(undefined8 *)&(this->VirtualKeyboardHiddenEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnClipboardContentChangedEvent = 0;
  *(undefined8 *)&(this->OnClipboardContentChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnClipboardContentChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnDisplayMetricsChangedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->VirtualKeyboardShownEvent).field_0x18 = 2;
  *(undefined8 *)&(this->VirtualKeyboardHiddenEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnClipboardContentChangedEvent).field_0x18 = 2;
  return this;
}

// ~<lambda_1> @ 1423c5730

void __thiscall
`Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::
<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001423c5797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Clone'::__l2::<lambda_1>,0,1> @ 1423c57d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Clone'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIATextRangeProvider::Clone_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Clone'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::Close'::__l2::<lambda_1>,0,0> @ 1423c57f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Close'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::Close_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Close'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Compare'::__l2::<lambda_1>,0,1> @ 1423c5810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Compare'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIATextRangeProvider::Compare_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Compare'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::__l2::<lambda_1>,0,1> @ 1423c5830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAWindowProvider::ElementProviderFromPoint_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::__l2::<lambda_1>,0,1> @ 1423c5850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIATextRangeProvider::ExpandToEnclosingUnit_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIATextRangeProvider::FindText'::__l2::<lambda_1>,0,1> @ 1423c5870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::FindText'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIATextRangeProvider::FindText_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::FindText'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetEnclosingElement'::__l2::<lambda_1>,0,1> @ 1423c5890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetEnclosingElement'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIATextRangeProvider::GetEnclosingElement_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetEnclosingElement'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetFocus'::__l2::<lambda_1>,0,1> @ 1423c58b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetFocus'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAWindowProvider::GetFocus_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetFocus'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPatternProvider'::__l2::<lambda_1>,0,1> @ 1423c58d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPatternProvider'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAWidgetProvider::GetPatternProvider_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPatternProvider'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetPatternProvider'::__l2::<lambda_1>,0,1> @ 1423c58f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetPatternProvider'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAWindowProvider::GetPatternProvider_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetPatternProvider'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPropertyValue'::__l2::<lambda_1>,0,1> @ 1423c5910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPropertyValue'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAWidgetProvider::GetPropertyValue_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPropertyValue'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetRuntimeId'::__l2::<lambda_1>,0,1> @ 1423c5930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetRuntimeId'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAWidgetProvider::GetRuntimeId_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetRuntimeId'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::GetSelection'::__l2::<lambda_1>,0,1> @ 1423c5950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::GetSelection'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::GetSelection_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::GetSelection'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetText'::__l2::<lambda_1>,0,1> @ 1423c5970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetText'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIATextRangeProvider::GetText_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetText'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::Invoke'::__l2::<lambda_1>,0,0> @ 1423c5990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Invoke'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::Invoke_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Invoke'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::__l2::<lambda_1>,0,1> @ 1423c59b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIATextRangeProvider::MoveEndpointByRange_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWidgetProvider::Navigate'::__l2::<lambda_1>,0,1> @ 1423c59d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::Navigate'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAWidgetProvider::Navigate_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::Navigate'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::Select'::__l2::<lambda_1>,0,0> @ 1423c59f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Select'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::Select_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Select'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SetFocus'::__l2::<lambda_1>,0,0> @ 1423c5a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SetFocus'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FWindowsUIAWidgetProvider::SetFocus_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SetFocus'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1> @ 1423c5a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::SetValue_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1> @ 1423c5a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::SetValue_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::SetVisualState'::__l2::<lambda_1>,0,1> @ 1423c5a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetVisualState'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::SetVisualState_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::SetVisualState'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SupportsInterface'::__l2::<lambda_1>,0,1> @ 1423c5a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SupportsInterface'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAWidgetProvider::SupportsInterface_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SupportsInterface'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_1>,1,0> @ 1423c5ab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__ThreadProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::Toggle'::__l2::<lambda_1>,0,0> @ 1423c5ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Toggle'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::Toggle_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Toggle'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::__l2::<lambda_1>,0,1> @ 1423c5af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAWidgetProvider::get_BoundingRectangle_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMaximize'::__l2::<lambda_1>,0,1> @ 1423c5b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMaximize'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_CanMaximize_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMaximize'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMinimize'::__l2::<lambda_1>,0,1> @ 1423c5b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMinimize'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_CanMinimize_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMinimize'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMove'::__l2::<lambda_1>,0,1> @ 1423c5b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMove'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_CanMove_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMove'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanResize'::__l2::<lambda_1>,0,1> @ 1423c5b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanResize'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_CanResize_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanResize'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanRotate'::__l2::<lambda_1>,0,1> @ 1423c5b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanRotate'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_CanRotate_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanRotate'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanSelectMultiple'::__l2::<lambda_1>,0,1> @ 1423c5bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanSelectMultiple'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_CanSelectMultiple_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanSelectMultiple'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_DocumentRange'::__l2::<lambda_1>,0,1> @ 1423c5bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_DocumentRange'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_DocumentRange_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_DocumentRange'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_FragmentRoot'::__l2::<lambda_1>,0,1> @ 1423c5bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_FragmentRoot'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAWidgetProvider::get_FragmentRoot_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_FragmentRoot'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::__l2::<lambda_1>,0,1> @ 1423c5c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FWindowsUIAWindowProvider::get_HostRawElementProvider_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsModal'::__l2::<lambda_1>,0,1> @ 1423c5c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsModal'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_IsModal_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsModal'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsReadOnly'::__l2::<lambda_1>,0,1> @ 1423c5c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsReadOnly'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_IsReadOnly_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsReadOnly'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelected'::__l2::<lambda_1>,0,1> @ 1423c5c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelected'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_IsSelected_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelected'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelectionRequired'::__l2::<lambda_1>,0,1> @ 1423c5c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelectionRequired'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_IsSelectionRequired_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelectionRequired'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsTopmost'::__l2::<lambda_1>,0,1> @ 1423c5cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsTopmost'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_IsTopmost_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsTopmost'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_LargeChange'::__l2::<lambda_1>,0,1> @ 1423c5cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_LargeChange'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_LargeChange_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_LargeChange'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Maximum'::__l2::<lambda_1>,0,1> @ 1423c5cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Maximum'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_Maximum_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Maximum'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Minimum'::__l2::<lambda_1>,0,1> @ 1423c5d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Minimum'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_Minimum_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Minimum'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SelectionContainer'::__l2::<lambda_1>,0,1> @ 1423c5d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SelectionContainer'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_SelectionContainer_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SelectionContainer'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SmallChange'::__l2::<lambda_1>,0,1> @ 1423c5d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SmallChange'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_SmallChange_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SmallChange'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_ToggleState'::__l2::<lambda_1>,0,1> @ 1423c5d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_ToggleState'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_ToggleState_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_ToggleState'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1> @ 1423c5d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_Value_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1> @ 1423c5db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_Value_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowInteractionState'::__l2::<lambda_1>,0,0> @ 1423c5dd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowInteractionState'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_WindowInteractionState_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowInteractionState'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowVisualState'::__l2::<lambda_1>,0,1> @ 1423c5df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowVisualState'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FWindowsUIAControlProvider::get_WindowVisualState_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowVisualState'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::<lambda_1>,1,1> @ 1423c5e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l104::<lambda_3>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_3>__GI___MainWinProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_JPEAUHWND____I_K_J_Z___YA_AV__TFuture_X__W4EAsyncExecution____QEAV<lambda_3>__GI___MainWinProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_JPEAUHWND____I_K_J_Z_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_2>,0,0> @ 1423c5e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__ThreadProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAAIXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>,1,0> @ 1423c5e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>,1,0>
::
~TFunction_OwnedObject<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l104::<lambda_3>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__GI___MainWinProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_JPEAUHWND____I_K_J_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~GenericApplication @ 1423c7a60

void __thiscall GenericApplication::~GenericApplication(GenericApplication *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7GenericApplication__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClipboardContentChangedEvent).field_0x8,
             *(int *)&(this->OnClipboardContentChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnClipboardContentChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClipboardContentChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->VirtualKeyboardHiddenEvent).field_0x8,
             *(int *)&(this->VirtualKeyboardHiddenEvent).field_0x10);
  pvVar1 = *(void **)&(this->VirtualKeyboardHiddenEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->VirtualKeyboardHiddenEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->VirtualKeyboardShownEvent).field_0x8,
             *(int *)&(this->VirtualKeyboardShownEvent).field_0x10);
  pvVar1 = *(void **)&(this->VirtualKeyboardShownEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->VirtualKeyboardShownEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDisplayMetricsChangedEvent).field_0x8,
             *(int *)&(this->OnDisplayMetricsChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnDisplayMetricsChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDisplayMetricsChangedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AccessibleMessageHandler).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageHandler).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Cursor).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 1423cc9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_3>::operator()(<lambda_3> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  IConsoleVariable *pIVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  IConsoleManager *pIVar8;
  wchar_t *_Str;
  ForAnyElementType FVar9;
  int iVar10;
  double dVar11;
  undefined1 local_48 [16];
  FString local_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_1->ArrayNum < 1) {
    if ((byte)LogFramePacer._0_1_ < 4) {
      return;
    }
    FGenericPlatformRHIFramePacer::GetFramePace();
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogFramePacer);
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)pFVar1;
  }
  dVar11 = wcstod(_Str,(wchar_t **)0x0);
  iVar10 = (int)dVar11;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar8 = IConsoleManager::Get();
    SyncIntervalCVar =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8,L"rhi.SyncInterval",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (-1 < iVar10) {
    if (iVar10 != 0) {
      iVar6 = FWindowsPlatformMisc::GetMaxRefreshRate();
      if (iVar6 % iVar10 != 0) goto LAB_1423ccb67;
      FWindowsPlatformMisc::GetMaxRefreshRate();
    }
    if (SyncIntervalCVar == (IConsoleVariable *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<407854045798072360>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\GenericPlatform\\GenericPlatformFramePacer.cpp"
                         ,0x28,"SyncIntervalCVar != nullptr");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if (0 < iVar10) {
        FWindowsPlatformMisc::GetMaxRefreshRate();
      }
      pIVar4 = SyncIntervalCVar;
      local_28 = 0xe000000;
      local_24 = 0;
      local_20 = 0;
      local_18 = 0;
      local_14 = 0xf000000;
      local_10 = 0x1000000;
      ::FString::PrintfImpl(&local_38,L"%d");
      lVar2 = *(longlong *)pIVar4;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar9.Data = local_38.Data.AllocatorInstance.Data;
      }
      uVar7 = (**(code **)(lVar2 + 0xa8))(pIVar4,local_48,&local_28);
      (**(code **)(lVar2 + 0xb0))(pIVar4,FVar9.Data,uVar7);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_1423ccb67:
  FGenericPlatformRHIFramePacer::GetFramePace();
  if (3 < (byte)LogFramePacer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogFramePacer);
  }
  return;
}

// `vcall'{232,{flat}}'_}' @ 1423ccc20

/* [thunk]: __cdecl IPlatformInputDeviceMapper::`vcall'{232,{flat}}' }' */

void __thiscall
IPlatformInputDeviceMapper::_vcall__232__flat______(IPlatformInputDeviceMapper *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423ccc23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xe8))();
  return;
}

// `vector_deleting_destructor'`adjustor{184}' @ 1423ccc30

/* [thunk]:public: virtual void * __ptr64 __cdecl FNullApplication::`vector deleting
   destructor'`adjustor{184}' (unsigned int) __ptr64 */

void * __thiscall
FNullApplication::_vector_deleting_destructor__adjustor_184__(FNullApplication *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FNullApplication *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 1423ccc44

/* [thunk]:public: virtual void * __ptr64 __cdecl FNullApplication::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
FNullApplication::_vector_deleting_destructor__adjustor_192__(FNullApplication *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FNullApplication *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{184}' @ 1423ccc58

/* [thunk]:public: virtual void * __ptr64 __cdecl FWindowsApplication::`vector deleting
   destructor'`adjustor{184}' (unsigned int) __ptr64 */

void * __thiscall
FWindowsApplication::_vector_deleting_destructor__adjustor_184__
          (FWindowsApplication *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FWindowsApplication *)&this[-1].TextInputMethodSystem.SharedReferenceCount,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1423ccc70

void * __thiscall
IBaseDelegateInstance<void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccca0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cccd0

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccd00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccd30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccd60

void * __thiscall
TBaseRawMethodDelegateInstance<1,FWindowsUIAManager_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,FWindowsUIAManager_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccd90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNullApplication,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNullApplication,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccdc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsApplication,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWindowsApplication,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccdf0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsApplication,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWindowsApplication,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cce20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsUIAManager,void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWindowsUIAManager,void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cce50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWindowsUIAManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWindowsUIAManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cce80

void * __thiscall
TBaseRawMethodDelegateInstance<0,IPlatformInputDeviceMapper,void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,IPlatformInputDeviceMapper,void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cceb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccee0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccf10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccf40

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FWindowsApplication::CacheCursorInfo'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccfa0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FWindowsApplication::CacheCursorInfo'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ccfe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Clone'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Clone'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Close'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Close'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Compare'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Compare'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd0e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::FindText'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::FindText'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetEnclosingElement'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetEnclosingElement'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetFocus'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetFocus'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPatternProvider'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPatternProvider'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetPatternProvider'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetPatternProvider'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPropertyValue'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPropertyValue'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetRuntimeId'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetRuntimeId'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::GetSelection'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::GetSelection'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetText'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetText'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Invoke'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Invoke'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd3e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::Navigate'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::Navigate'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Select'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Select'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SetFocus'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SetFocus'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd4a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd4e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetVisualState'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::SetVisualState'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SupportsInterface'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SupportsInterface'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd5a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__ThreadProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd5e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Toggle'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Toggle'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMaximize'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMaximize'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd6a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMinimize'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMinimize'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd6e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMove'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMove'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanResize'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanResize'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanRotate'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanRotate'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd7a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanSelectMultiple'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanSelectMultiple'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd7e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_DocumentRange'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_DocumentRange'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_FragmentRoot'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_FragmentRoot'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd8a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsModal'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsModal'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd8e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsReadOnly'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsReadOnly'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelected'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelected'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelectionRequired'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelectionRequired'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsTopmost'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsTopmost'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cd9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_LargeChange'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_LargeChange'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cda20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Maximum'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Maximum'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cda60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Minimum'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Minimum'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdaa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SelectionContainer'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SelectionContainer'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SmallChange'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SmallChange'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdb20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_ToggleState'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_ToggleState'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdb60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowInteractionState'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowInteractionState'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdc20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowVisualState'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowVisualState'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdc60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_3>__GI___MainWinProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_JPEAUHWND____I_K_J_Z___YA_AV__TFuture_X__W4EAsyncExecution____QEAV<lambda_3>__GI___MainWinProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_JPEAUHWND____I_K_J_Z_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdcb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__ThreadProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAAIXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdcf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__GI___MainWinProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_JPEAUHWND____I_K_J_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdd40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGenericAccessibleUser,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FGenericAccessibleUser,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdd80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGenericAccessibleUserRegistry,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FGenericAccessibleUserRegistry,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cddc0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericAccessibleMessageHandler,SharedPointerInternals::DefaultDeleter<FGenericAccessibleMessageHandler>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGenericAccessibleMessageHandler,SharedPointerInternals::DefaultDeleter<FGenericAccessibleMessageHandler>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cde00

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericApplicationMessageHandler,SharedPointerInternals::DefaultDeleter<FGenericApplicationMessageHandler>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGenericApplicationMessageHandler,SharedPointerInternals::DefaultDeleter<FGenericApplicationMessageHandler>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cde40

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericWindow,SharedPointerInternals::DefaultDeleter<FGenericWindow>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGenericWindow,SharedPointerInternals::DefaultDeleter<FGenericWindow>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cde80

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNullCursor,SharedPointerInternals::DefaultDeleter<FNullCursor>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNullCursor,SharedPointerInternals::DefaultDeleter<FNullCursor>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdec0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNullWindow,SharedPointerInternals::DefaultDeleter<FNullWindow>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNullWindow,SharedPointerInternals::DefaultDeleter<FNullWindow>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdf00

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTaskbarList,SharedPointerInternals::DefaultDeleter<FTaskbarList>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTaskbarList,SharedPointerInternals::DefaultDeleter<FTaskbarList>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdf40

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`anonymous_namespace'::FTextInputMethodChangeNotifier,SharedPointerInternals::DefaultDeleter<`anonymous_namespace'::FTextInputMethodChangeNotifier>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<_anonymous_namespace_::FTextInputMethodChangeNotifier,SharedPointerInternals::DefaultDeleter<_anonymous_namespace_::FTextInputMethodChangeNotifier>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdf80

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWindowsCursor,SharedPointerInternals::DefaultDeleter<FWindowsCursor>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWindowsCursor,SharedPointerInternals::DefaultDeleter<FWindowsCursor>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cdfc0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWindowsTextInputMethodSystem,SharedPointerInternals::DefaultDeleter<FWindowsTextInputMethodSystem>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWindowsTextInputMethodSystem,SharedPointerInternals::DefaultDeleter<FWindowsTextInputMethodSystem>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce000

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWindowsWindow,SharedPointerInternals::DefaultDeleter<FWindowsWindow>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWindowsWindow,SharedPointerInternals::DefaultDeleter<FWindowsWindow>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce040

void * __thiscall
FGenericAccessibleMessageHandler::_scalar_deleting_destructor_
          (FGenericAccessibleMessageHandler *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FGenericAccessibleMessageHandler__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AccessibleEventDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AccessibleUserRegistry).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AccessibleEventDelegate);
  pvVar1 = *(void **)&(this->AccessibleEventDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AccessibleEventDelegate);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce0c0

void * __thiscall
FGenericAccessibleUser::_scalar_deleting_destructor_(FGenericAccessibleUser *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->FocusedAccessibleWidget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce120

void * __thiscall
FGenericAccessibleUserRegistry::_scalar_deleting_destructor_
          (FGenericAccessibleUserRegistry *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->UsersMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UsersMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UsersMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce180

void * __thiscall
FGenericApplicationMessageHandler::_scalar_deleting_destructor_
          (FGenericApplicationMessageHandler *this,uint param_1)

{
  *this = (FGenericApplicationMessageHandler)&___7FGenericApplicationMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce1c0

void * __thiscall
FGenericPlatformInputDeviceMapper::_scalar_deleting_destructor_
          (FGenericPlatformInputDeviceMapper *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IPlatformInputDeviceMapper__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnUserLoginChangedEvent,this);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce250

void * __thiscall FGenericWindow::_scalar_deleting_destructor_(FGenericWindow *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGenericWindow__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Definition).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce2a0

void * __thiscall
FNullApplication::_scalar_deleting_destructor_(FNullApplication *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IModularFeatures *pIVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__GenericApplication__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IInputInterface__;
  pIVar2 = IModularFeatures::Get();
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreviousActiveWindow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentlyActiveWindow).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IInputDevice,1>,int>
            ((TSharedPtr<IInputDevice,1> *)(this->ExternalInputDevices).AllocatorInstance.Data,
             (this->ExternalInputDevices).ArrayNum);
  pFVar1 = (this->ExternalInputDevices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FNullWindow,1>,int>
            ((TSharedRef<FNullWindow,1> *)(this->Windows).AllocatorInstance.Data,
             (this->Windows).ArrayNum);
  pFVar1 = (this->Windows).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInputInterface__6B_;
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  GenericApplication::~GenericApplication((GenericApplication *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce3a0

void * __thiscall FNullCursor::_scalar_deleting_destructor_(FNullCursor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNullCursor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce3e0

void * __thiscall FNullWindow::_scalar_deleting_destructor_(FNullWindow *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGenericWindow__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce430

void * __thiscall
FOutputDeviceConsole::_scalar_deleting_destructor_(FOutputDeviceConsole *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IniFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce480

void * __thiscall
FTSFActivationProxy::_scalar_deleting_destructor_(FTSFActivationProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__ITfInputProcessorProfileActivationSink__;
  this->_padding_ = (longlong)&_vftable__for__ITfActiveLanguageProfileNotifySink__;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce4c0

void * __thiscall
_anon_40B6E0C6::FTextInputMethodChangeNotifier::_scalar_deleting_destructor_
          (FTextInputMethodChangeNotifier *this,uint param_1)

{
  FTextStoreACP *pFVar1;
  
  this->_padding_ = (longlong)&::FTextInputMethodChangeNotifier::_vftable_;
  pFVar1 = (this->TextStoreACP).RawPointer;
  if (pFVar1 != (FTextStoreACP *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x10))();
  }
  this->_padding_ = (longlong)&___7ITextInputMethodChangeNotifier__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce520

void * __thiscall FTextStoreACP::_scalar_deleting_destructor_(FTextStoreACP *this,uint param_1)

{
  ITfContextOwnerCompositionServices *pIVar1;
  ITfContext *pIVar2;
  ITfDocumentMgr *pIVar3;
  ITfCompositionView *pIVar4;
  ITextStoreACPServices *pIVar5;
  ITextStoreACPSink *pIVar6;
  FScriptContainerElement *pFVar7;
  
  this->_padding_ = (longlong)&_vftable__for__ITextStoreACP__;
  this->_padding_ = (longlong)&_vftable__for__ITfContextOwnerCompositionSink__;
  pIVar1 = (this->TSFContextOwnerCompositionServices).RawPointer;
  if (pIVar1 != (ITfContextOwnerCompositionServices *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar2 = (this->TSFContext).RawPointer;
  if (pIVar2 != (ITfContext *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar3 = (this->TSFDocumentManager).RawPointer;
  if (pIVar3 != (ITfDocumentMgr *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->Composition).TSFCompositionView.RawPointer;
  if (pIVar4 != (ITfCompositionView *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->AdviseSinkObject).TextStoreACPServices.RawPointer;
  if (pIVar5 != (ITextStoreACPServices *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar6 = (this->AdviseSinkObject).TextStoreACPSink.RawPointer;
  if (pIVar6 != (ITextStoreACPSink *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  pFVar7 = (this->SupportedAttributes).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextContext).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce5e0

void * __thiscall
FWindowsApplication::_scalar_deleting_destructor_(FWindowsApplication *this,uint param_1)

{
  ~FWindowsApplication(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce620

void * __thiscall
FWindowsApplicationErrorOutputDevice::_scalar_deleting_destructor_
          (FWindowsApplicationErrorOutputDevice *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce660

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FWindowsConsoleOutputDevice2::_scalar_deleting_destructor_
          (FWindowsConsoleOutputDevice2 *this,uint param_1)

{
  FConsoleWindow *this_00;
  ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  void *pvVar6;
  ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight> FVar7;
  
  this_00 = this->Window;
  this->_padding_ = (longlong)&___7FWindowsConsoleOutputDevice2__6B_;
  if (this_00 != (FConsoleWindow *)0x0) {
    FConsoleWindow::~FConsoleWindow(this_00);
    ::operator_delete(this_00,0x360);
  }
  FVar7 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)0x0) {
    FVar7 = (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)
            &this->LogStringHighlights;
  }
  DestructItems<FWindowsConsoleOutputDevice2::FLogStringHighlight,int>
            ((FLogStringHighlight *)FVar7,(this->LogStringHighlights).ArrayNum);
  FVar7 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  FVar1 = (this->LogHighlights).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->CommandHistory).AllocatorInstance.Data,
             (this->CommandHistory).ArrayNum);
  pFVar2 = (this->CommandHistory).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->WindowRWLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->WindowRWLock);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce780

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FWindowsConsoleOutputDevice::_scalar_deleting_destructor_
          (FWindowsConsoleOutputDevice *this,uint param_1)

{
  ForElementType<FWindowsConsoleOutputDevice::FLogHighlight> FVar1;
  ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> FVar2;
  
  this->_padding_ = (longlong)&___7FWindowsConsoleOutputDevice__6B_;
  SaveToINI(this);
  FVar2 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0) {
    FVar2 = (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)
            &this->LogStringHighlights;
  }
  DestructItems<FWindowsConsoleOutputDevice::FLogStringHighlight,int>
            ((FLogStringHighlight *)FVar2,(this->LogStringHighlights).ArrayNum);
  FVar2 = (this->LogStringHighlights).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar1 = (this->LogHighlights).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x990);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce830

void * __thiscall FWindowsCursor::_scalar_deleting_destructor_(FWindowsCursor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FWindowsCursor__6B_;
                    /* WARNING: Could not recover jumptable at 0x0001423ce86d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)(switchD_1501dbc7b::caseD_1.e_magic + DAT_1423ce8c8))
                             (switchD_1501dbc7b::caseD_1.e_magic + DAT_1423ce8c8);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1423ce910

void * __thiscall
UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::_scalar_deleting_destructor_
          (FWindowsRawInputRunnable *this,uint param_1)

{
  TNode *pTVar1;
  
  pTVar1 = (this->MouseInputs).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->MouseInputs).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x20);
    pTVar1 = (this->MouseInputs).Tail;
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ce980

void * __thiscall
FWindowsTextInputMethodSystem::_scalar_deleting_destructor_
          (FWindowsTextInputMethodSystem *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FTSFActivationProxy *pFVar3;
  ITfDocumentMgr *pIVar4;
  ITfThreadMgr *pIVar5;
  ITfInputProcessorProfileMgr *pIVar6;
  ITfInputProcessorProfiles *pIVar7;
  
  this->_padding_ = (longlong)&___7FWindowsTextInputMethodSystem__6B_;
  (this->KnownWindows).HashSize = 0;
  FVar1 = (this->KnownWindows).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakPtr<FGenericWindow,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakPtr<FGenericWindow,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->KnownWindows).Elements);
  *(undefined4 *)&(this->ContextToInternalContextMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ContextToInternalContextMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContextToInternalContextMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveContext).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->TSFActivationProxy).RawPointer;
  if (pFVar3 != (FTSFActivationProxy *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x10))();
  }
  pIVar4 = (this->TSFDisabledDocumentManager).RawPointer;
  if (pIVar4 != (ITfDocumentMgr *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->TSFThreadManager).RawPointer;
  if (pIVar5 != (ITfThreadMgr *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar6 = (this->TSFInputProcessorProfileManager).RawPointer;
  if (pIVar6 != (ITfInputProcessorProfileMgr *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  pIVar7 = (this->TSFInputProcessorProfiles).RawPointer;
  if (pIVar7 != (ITfInputProcessorProfiles *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  this->_padding_ = (longlong)&___7ITextInputMethodSystem__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cea80

void * __thiscall
FWindowsUIABaseProvider::_scalar_deleting_destructor_(FWindowsUIABaseProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FWindowsUIABaseProvider__6B_;
  if (this->UIAManager != (FWindowsUIAManager *)0x0) {
    TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
    ::Remove(&this->UIAManager->ProviderList,this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ceae0

void * __thiscall
FWindowsUIAControlProvider::_scalar_deleting_destructor_
          (FWindowsUIAControlProvider *this,uint param_1)

{
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInvokeProvider__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IRangeValueProvider__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__ITextProvider__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__IToggleProvider__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__ITransformProvider__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IValueProvider__;
  *(undefined ***)&this->field_0x58 = &_vftable__for__IWindowProvider__;
  *(undefined ***)&this->field_0x60 = &_vftable__for__ISelectionProvider__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__ISelectionItemProvider__;
  *(undefined ***)this = &___7FWindowsUIABaseProvider__6B_;
  if (*(longlong *)&this->field_0x8 != 0) {
    TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
    ::Remove((TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
              *)(*(longlong *)&this->field_0x8 + 0x50),(FWindowsUIABaseProvider *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cebb0

void * __thiscall
FWindowsUIATextRangeProvider::_scalar_deleting_destructor_
          (FWindowsUIATextRangeProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__ITextRangeProvider__;
  this->_padding_ = (longlong)&___7FWindowsUIABaseProvider__6B_;
  if (this->_padding_ != 0) {
    TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
    ::Remove((TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
              *)(this->_padding_ + 0x50),(FWindowsUIABaseProvider *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cec20

void * __thiscall
FWindowsUIAWidgetProvider::_scalar_deleting_destructor_
          (FWindowsUIAWidgetProvider *this,uint param_1)

{
  ~FWindowsUIAWidgetProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cec60

void * __thiscall
FWindowsUIAWindowProvider::_scalar_deleting_destructor_
          (FWindowsUIAWindowProvider *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__FWindowsUIABaseProvider__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IRawElementProviderSimple__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IRawElementProviderFragment__;
  *(undefined ***)&this->field_0x38 = &___7FWindowsUIAWindowProvider__6B_;
  FWindowsUIAWidgetProvider::~FWindowsUIAWidgetProvider((FWindowsUIAWidgetProvider *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cecd0

void * __thiscall FWindowsWindow::_scalar_deleting_destructor_(FWindowsWindow *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__IDropTarget__;
  this->_padding_ = (longlong)&___7FGenericWindow__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ced30

void * __thiscall
GenericApplication::_scalar_deleting_destructor_(GenericApplication *this,uint param_1)

{
  ~GenericApplication(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ced70

void * __thiscall ICursor::_scalar_deleting_destructor_(ICursor *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ceda0

void * __thiscall IInputInterface::_scalar_deleting_destructor_(IInputInterface *this,uint param_1)

{
  *this = (IInputInterface)&___7IInputInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cede0

void * __thiscall
IPlatformInputDeviceMapper::_scalar_deleting_destructor_
          (IPlatformInputDeviceMapper *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7IPlatformInputDeviceMapper__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnUserLoginChangedEvent,this);
  pFVar1 = (this->AllocatedPlatformUserIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MappedInputDevices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MappedInputDevices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MappedInputDevices);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423cee70

void * __thiscall
ITextInputMethodChangeNotifier::_scalar_deleting_destructor_
          (ITextInputMethodChangeNotifier *this,uint param_1)

{
  *this = (ITextInputMethodChangeNotifier)&___7ITextInputMethodChangeNotifier__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423ceeb0

void * __thiscall
ITextInputMethodSystem::_scalar_deleting_destructor_(ITextInputMethodSystem *this,uint param_1)

{
  *this = (ITextInputMethodSystem)&___7ITextInputMethodSystem__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AddPendingConsoleCommand @ 1423d0130

void __thiscall
GenericApplication::AddPendingConsoleCommand(GenericApplication *this,FString *param_1)

{
  return;
}

// ApplicationLicenseValid @ 1423d07f0

bool __thiscall
GenericApplication::ApplicationLicenseValid(GenericApplication *this,FPlatformUserId param_1)

{
  return true;
}

// BroadcastDisplayMetricsChanged @ 1423d14b0

void __thiscall
GenericApplication::BroadcastDisplayMetricsChanged
          (GenericApplication *this,FDisplayMetrics *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDisplayMetricsChangedEvent,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnDisplayMetricsChangedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnDisplayMetricsChangedEvent).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnDisplayMetricsChangedEvent).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnDisplayMetricsChangedEvent).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnDisplayMetricsChangedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnDisplayMetricsChangedEvent,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// DecipherOLEData @ 1423d7d00

FDragDropOLEData * __cdecl
DecipherOLEData(FDragDropOLEData *__return_storage_ptr__,IDataObject *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  char cVar2;
  wchar_t wVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  char *pcVar11;
  uint *puVar12;
  FDragDropOLEData *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_d8 [16];
  FString local_c8;
  FString local_b8;
  STGMEDIUM local_a8;
  undefined2 local_90 [4];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_70 [4];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_50 [4];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  local_5c = 0xffffffff;
  pTVar1 = &__return_storage_ptr__->OperationFilenames;
  (__return_storage_ptr__->OperationText).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OperationText).Data.ArrayNum = 0;
  (__return_storage_ptr__->OperationText).Data.ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OperationFilenames).ArrayNum = 0;
  (__return_storage_ptr__->OperationFilenames).ArrayMax = 0;
  __return_storage_ptr__->Type = '\0';
  local_70[0] = 1;
  local_68 = 0;
  local_60 = 1;
  local_58 = 1;
  iVar7 = (**(code **)((longlong)*param_1 + 0x28))(param_1,local_70);
  local_88 = 0;
  local_80 = 1;
  local_90[0] = 0xd;
  local_7c = 0xffffffff;
  local_78 = 1;
  iVar8 = (**(code **)((longlong)*param_1 + 0x28))(param_1,local_90);
  local_48 = 0;
  local_3c = 0xffffffff;
  local_50[0] = 0xf;
  local_40 = 1;
  local_38 = 1;
  iVar9 = (**(code **)((longlong)*param_1 + 0x28))(param_1,local_50);
  if ((iVar8 == 0) &&
     (iVar8 = (**(code **)((longlong)*param_1 + 0x18))(param_1,local_90,&local_a8), iVar8 == 0)) {
    pwVar10 = GlobalLock(local_a8.u.hGlobal);
    __return_storage_ptr__->Type = __return_storage_ptr__->Type | 1;
    FString::operator=(&__return_storage_ptr__->OperationText,pwVar10);
    GlobalUnlock(local_a8.u.hGlobal);
    ReleaseStgMedium(&local_a8);
  }
  if ((iVar7 == 0) &&
     (iVar7 = (**(code **)((longlong)*param_1 + 0x18))(param_1,local_70,&local_a8), iVar7 == 0)) {
    pcVar11 = GlobalLock(local_a8.u.hGlobal);
    __return_storage_ptr__->Type = __return_storage_ptr__->Type | 1;
    FString::FString((FString *)local_d8,pcVar11);
    if (__return_storage_ptr__ != (FDragDropOLEData *)local_d8) {
      pFVar14 = (__return_storage_ptr__->OperationText).Data.AllocatorInstance.Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      (__return_storage_ptr__->OperationText).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_d8._0_8_;
      (__return_storage_ptr__->OperationText).Data.ArrayNum = local_d8._8_4_;
      (__return_storage_ptr__->OperationText).Data.ArrayMax = local_d8._12_4_;
      local_d8._8_4_ = 0;
      local_d8._12_4_ = 0;
      local_d8._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
    GlobalUnlock(local_a8.u.hGlobal);
    ReleaseStgMedium(&local_a8);
  }
  if ((iVar9 == 0) &&
     (iVar7 = (**(code **)((longlong)*param_1 + 0x18))(param_1,local_50,&local_a8), iVar7 == 0)) {
    __return_storage_ptr__->Type = __return_storage_ptr__->Type | 2;
    puVar12 = GlobalLock(local_a8.u.hGlobal);
    pwVar10 = (wchar_t *)((ulonglong)*puVar12 + (longlong)puVar12);
    if (puVar12[4] == 0) {
      cVar2 = (char)*pwVar10;
      while (cVar2 != '\0') {
        FString::FString(&local_b8,(char *)pwVar10);
        pFVar14 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar14 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 <
             pFVar14 + (longlong)(__return_storage_ptr__->OperationFilenames).ArrayMax * 0x10)) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FDragDropOLEData *)(*pcVar4)();
          return pFVar13;
        }
        iVar7 = (__return_storage_ptr__->OperationFilenames).ArrayNum;
        if (iVar7 == (__return_storage_ptr__->OperationFilenames).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,
                             &(__return_storage_ptr__->OperationFilenames).ArrayMax);
        }
        FVar5.Data = local_b8.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->OperationFilenames).ArrayNum = iVar7 + 1;
        pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar14 = 0;
        iVar7 = local_b8.Data.ArrayNum;
        *(int *)(pFVar14 + 8) = iVar7;
        if (iVar7 == 0) {
          *(int *)(pFVar14 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,(ForAnyElementType *)pFVar14,iVar7,(int *)(pFVar14 + 0xc));
          memcpy(*(void **)pFVar14,FVar5.Data,(longlong)iVar7 * 2);
        }
        iVar7 = local_b8.Data.ArrayNum;
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        pwVar10 = (wchar_t *)((longlong)pwVar10 + (longlong)iVar7);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        cVar2 = (char)*pwVar10;
      }
    }
    else {
      wVar3 = *pwVar10;
      while (wVar3 != L'\0') {
        FString::FString(&local_c8,pwVar10);
        pFVar14 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar14 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 <
             pFVar14 + (longlong)(__return_storage_ptr__->OperationFilenames).ArrayMax * 0x10)) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FDragDropOLEData *)(*pcVar4)();
          return pFVar13;
        }
        iVar7 = (__return_storage_ptr__->OperationFilenames).ArrayNum;
        if (iVar7 == (__return_storage_ptr__->OperationFilenames).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,
                             &(__return_storage_ptr__->OperationFilenames).ArrayMax);
        }
        FVar5.Data = local_c8.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->OperationFilenames).ArrayNum = iVar7 + 1;
        pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar14 = 0;
        iVar7 = local_c8.Data.ArrayNum;
        *(int *)(pFVar14 + 8) = iVar7;
        if (iVar7 == 0) {
          *(int *)(pFVar14 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,(ForAnyElementType *)pFVar14,iVar7,(int *)(pFVar14 + 0xc));
          memcpy(*(void **)pFVar14,FVar5.Data,(longlong)iVar7 * 2);
        }
        iVar7 = local_c8.Data.ArrayNum;
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        pwVar10 = pwVar10 + iVar7;
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        wVar3 = *pwVar10;
      }
    }
    GlobalUnlock(local_a8.u.hGlobal);
    ReleaseStgMedium(&local_a8);
  }
  return __return_storage_ptr__;
}

// DestroyApplication @ 1423d8fe0

void __thiscall GenericApplication::DestroyApplication(GenericApplication *this)

{
  return;
}

// EmitPropertyChangedEvent @ 1423dae30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
EmitPropertyChangedEvent
          (FWindowsUIAWidgetProvider *param_1,int param_2,FVariant *param_3,FVariant *param_4)

{
  IRecordInfo *pIVar1;
  tagVARIANT *ptVar2;
  IRawElementProviderSimple *pProvider;
  _union_2707 local_78;
  _union_2707 local_58;
  tagVARIANT local_38;
  tagVARIANT local_20;
  
  if (6 < (byte)LogAccessibility._0_1_) {
    UE::Logging::Private::BasicLog<7>(&LOG_Static,(FLogCategoryBase *)&LogAccessibility);
  }
  ptVar2 = WindowsUIAPropertyGetters::FVariantToWindowsVariant(&local_38,param_4);
  local_78._0_8_ = *(undefined8 *)&ptVar2->field0_0x0;
  local_78.decVal.u2 = (_union_1719)(ptVar2->field0_0x0)._s_0._u_8;
  pIVar1 = (ptVar2->field0_0x0)._s_0.pRecInfo;
  ptVar2 = WindowsUIAPropertyGetters::FVariantToWindowsVariant(&local_20,param_3);
  local_58._16_8_ = (ptVar2->field0_0x0)._s_0.pRecInfo;
  local_58._0_8_ = *(undefined8 *)&ptVar2->field0_0x0;
  local_58.decVal.u2 = (_union_1719)(ptVar2->field0_0x0)._s_0._u_8;
  pProvider = (IRawElementProviderSimple *)&param_1->field_0x28;
  if (param_1 == (FWindowsUIAWidgetProvider *)0x0) {
    pProvider = (IRawElementProviderSimple *)0x0;
  }
  local_78._16_8_ = pIVar1;
  UiaRaiseAutomationPropertyChangedEvent
            (pProvider,param_2,(VARIANT *)&local_58.n2,(VARIANT *)&local_78.n2);
  return;
}

// FVariantToWindowsVariant @ 1423dbfc0

tagVARIANT * __cdecl
WindowsUIAPropertyGetters::FVariantToWindowsVariant
          (tagVARIANT *__return_storage_ptr__,FVariant *param_1)

{
  double dVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  BSTR pOVar6;
  wchar_t *psz;
  FVariant *pFVar7;
  undefined7 uVar8;
  uint local_res8 [2];
  FMemoryReader local_e8;
  FString local_38 [2];
  
  switch(param_1->Type) {
  default:
    (__return_storage_ptr__->field0_0x0)._s_0.vt = 0;
    break;
  case Bool:
    (__return_storage_ptr__->field0_0x0)._s_0.vt = 0xb;
    bVar3 = FVariant::GetValue<bool>(param_1);
    *(ushort *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = !bVar3 - 1;
    break;
  case Double:
    (__return_storage_ptr__->field0_0x0)._s_0.vt = 5;
    dVar1 = FVariant::GetValue<double>(param_1);
    (__return_storage_ptr__->field0_0x0)._s_0._u_8.dblVal = dVar1;
    break;
  case Float:
    (__return_storage_ptr__->field0_0x0)._s_0.vt = 4;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    pFVar7 = param_1;
    FArchiveState::FArchiveState((FArchiveState *)&local_e8);
    local_e8._padding_ = 0;
    uVar8 = (undefined7)((ulonglong)pFVar7 >> 8);
    local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_e8.Bytes = &param_1->Value;
    local_e8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,CONCAT71(uVar8,1));
    if (*(uint **)(local_e8._padding_ + 8) < *(uint **)local_e8._padding_ + 1) {
      if ((local_e8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_e8._padding_ + 0x188) == FMemoryReader::Serialize) {
          FMemoryReader::Serialize(&local_e8,local_res8,4);
        }
        else {
          (**(code **)(local_e8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_e8,local_res8);
      }
    }
    else {
      local_res8[0] = **(uint **)local_e8._padding_;
      *(longlong *)local_e8._padding_ = *(longlong *)local_e8._padding_ + 4;
    }
    uVar2 = local_res8[0];
    FArchive::~FArchive((FArchive *)&local_e8);
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
    break;
  case Int32:
    (__return_storage_ptr__->field0_0x0)._s_0.vt = 3;
    iVar4 = FVariant::GetValue<int>(param_1);
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar4;
    break;
  case String:
    (__return_storage_ptr__->field0_0x0)._s_0.vt = 8;
    pFVar5 = FVariant::GetValue<FString>(param_1,local_38);
    if ((pFVar5->Data).ArrayNum == 0) {
      psz = L"";
    }
    else {
      psz = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pOVar6 = SysAllocString(psz);
    (__return_storage_ptr__->field0_0x0)._s_0._u_8.bstrVal = pOVar6;
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// FindWindowByHWND @ 1423dc6a0

TSharedPtr<FWindowsWindow,1> * __cdecl
FindWindowByHWND(TSharedPtr<FWindowsWindow,1> *__return_storage_ptr__,
                TArray<TSharedRef<FWindowsWindow,1>,TSizedDefaultAllocator<32>_> *param_1,
                HWND__ *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWindowsWindow *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<FWindowsWindow,1> *pTVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar10) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar10) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FWindowsWindow,1> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar9 + 8);
      pFVar3 = *(FWindowsWindow **)(pFVar1 + lVar9);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3->HWnd == param_2) {
        __return_storage_ptr__->Object = pFVar3;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      iVar10 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < iVar10);
  }
  __return_storage_ptr__->Object = (FWindowsWindow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FinishedInputThisFrame @ 1423dc8c0

void __thiscall GenericApplication::FinishedInputThisFrame(GenericApplication *this)

{
  return;
}

// GetAccessibleMessageHandler @ 1423dca80

TSharedRef<FGenericAccessibleMessageHandler,1> * __thiscall
GenericApplication::GetAccessibleMessageHandler
          (GenericApplication *this,
          TSharedRef<FGenericAccessibleMessageHandler,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->AccessibleMessageHandler).Object;
  pTVar1 = (this->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetCapture @ 1423ddea0

void * __thiscall GenericApplication::GetCapture(GenericApplication *this)

{
  return (void *)0x0;
}

// GetHKLDescriptionAsFString @ 1423df150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
`anonymous_namespace'::GetHKLDescriptionAsFString(FString *__return_storage_ptr__,HKL__ *param_1)

{
  code *pcVar1;
  bool bVar2;
  int cchData;
  UINT UVar3;
  uint uVar4;
  HKL hkl;
  FString *pFVar5;
  size_t sVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  
  hkl = GetKeyboardLayout(0);
  if (hkl != (HKL)param_1) {
    ActivateKeyboardLayout((HKL)param_1,0);
  }
  uVar4 = (uint)param_1 & 0xffff;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  cchData = GetLocaleInfoW(uVar4,2,(LPWSTR)0x0,0);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&__return_storage_ptr__->Data,cchData,Default);
  GetLocaleInfoW(uVar4,2,(LPWSTR)(__return_storage_ptr__->Data).AllocatorInstance.Data,cchData);
  ::FString::AppendChars(__return_storage_ptr__,L" - ",3);
  UVar3 = ImmGetIMEFileNameW((HKL)param_1,(LPWSTR)0x0,0);
  if (UVar3 == 0) {
    ::FString::AppendChars(__return_storage_ptr__,L"(Keyboard)",10);
  }
  else {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    UVar3 = ImmGetDescriptionW((HKL)param_1,(LPWSTR)0x0,0);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_28,UVar3 + 1,Default);
    ImmGetDescriptionW((HKL)param_1,(LPWSTR)local_28.AllocatorInstance.Data,UVar3);
    uVar4 = 0;
    if ((int)UVar3 < local_28.ArrayNum) {
      uVar4 = ~UVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar1)();
        return pFVar5;
      }
    }
    *(undefined2 *)(local_28.AllocatorInstance.Data + (longlong)(int)UVar3 * 2) = 0;
    if (1 < local_28.ArrayNum) {
      sVar6 = wcslen((wchar_t *)local_28.AllocatorInstance.Data);
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_28.AllocatorInstance.Data,(int)sVar6);
      ::FString::AppendChars(__return_storage_ptr__,L" ",1);
    }
    ::FString::AppendChars(__return_storage_ptr__,L"(IMM IME)",9);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  if (hkl != (HKL)param_1) {
    ActivateKeyboardLayout(hkl,0);
  }
  return __return_storage_ptr__;
}

// GetIMMStringAsFString @ 1423df3a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
`anonymous_namespace'::GetIMMStringAsFString
          (FString *__return_storage_ptr__,HIMC__ *param_1,ulong param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  DWORD dwBufLen;
  uint uVar4;
  FString *pFVar5;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  dwBufLen = ImmGetCompositionStringW((HIMC)param_1,param_2,(LPVOID)0x0,0);
  uVar2 = (uint)((ulonglong)(longlong)(int)dwBufLen >> 1);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&__return_storage_ptr__->Data,uVar2 + 1,Default);
  ImmGetCompositionStringW
            ((HIMC)param_1,param_2,(__return_storage_ptr__->Data).AllocatorInstance.Data,dwBufLen);
  uVar4 = 0;
  if ((int)uVar2 < (__return_storage_ptr__->Data).ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  *(undefined2 *)((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)(int)uVar2 * 2)
       = 0;
  return __return_storage_ptr__;
}

// GetInitialDisplayMetrics @ 1423df580

void __thiscall
GenericApplication::GetInitialDisplayMetrics(GenericApplication *this,FDisplayMetrics *param_1)

{
  FDisplayMetrics::RebuildDisplayMetrics(param_1);
  return;
}

// GetInputInterface @ 1423df650

IInputInterface * __thiscall GenericApplication::GetInputInterface(GenericApplication *this)

{
  return (IInputInterface *)0x0;
}

// GetModifierKeys @ 1423dfbc0

FModifierKeysState __thiscall GenericApplication::GetModifierKeys(GenericApplication *this)

{
  ushort *in_RDX;
  
  *in_RDX = *in_RDX & 0xfe00;
  return SUB82(in_RDX,0);
}

// GetMonitorsInfo @ 1423dfdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl GetMonitorsInfo(TArray<FMonitorInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  BOOL BVar10;
  DWORD DVar11;
  int iVar12;
  LSTATUS LVar13;
  uint uVar14;
  FString *pFVar15;
  HDEVINFO DeviceInfoSet;
  HKEY hKey;
  HMONITOR pHVar16;
  HDC hdc;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  DWORD DVar19;
  longlong lVar20;
  DWORD iDevNum;
  bool bVar21;
  float fVar22;
  undefined1 auStackY_ea8 [32];
  FString local_e58;
  FString local_e48;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined1 local_e28 [16];
  int local_e18;
  int iStack_e14;
  int iStack_e10;
  int iStack_e0c;
  undefined1 local_e08;
  uint local_e04;
  uint local_df8;
  DWORD local_df4;
  FString local_df0;
  DWORD local_de0;
  DWORD local_ddc;
  uint local_dd8 [2];
  FString local_dd0;
  uint local_dc0;
  uint uStack_dbc;
  DWORD local_db8 [2];
  FString local_db0;
  RECT local_da0;
  _SP_DEVINFO_DATA local_d90;
  DEVMODEW local_d68;
  _DISPLAY_DEVICEW local_c88;
  _DISPLAY_DEVICEW local_938;
  BYTE local_5e8 [21];
  byte local_5d3;
  byte local_5d2;
  byte local_5b0;
  byte local_5ae;
  byte local_5ad;
  byte local_5ab;
  wchar_t local_1e8 [200];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_ea8;
  DVar19 = 0;
  local_c88.cb = 0x348;
  local_df4 = 0;
  DestructItems<FMonitorInfo,int>
            ((FMonitorInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,2,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar9 = EnumDisplayDevicesW((LPCWSTR)0x0,0,&local_c88,0);
  fVar6 = __real_40228f57;
  fVar5 = __real_3f000000;
  do {
    if (iVar9 == 0) {
      return;
    }
    iDevNum = 0;
    if (((byte)local_c88.StateFlags & 1) != 0) {
      memset(local_938.DeviceName,0,0x344);
      local_938.cb = 0x348;
      BVar10 = EnumDisplayDevicesW(local_c88.DeviceName,0,&local_938,0);
      if (BVar10 != 0) {
LAB_1423dfee0:
        if (((local_938.StateFlags & 1) != 0) && ((local_938.StateFlags & 8) == 0)) {
          local_e58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e28 = ZEXT816(0);
          local_e38 = 0;
          uStack_e30 = 0;
          local_e18 = 0;
          iStack_e14 = 0;
          iStack_e10 = 0;
          iStack_e0c = 0;
          local_e58.Data.ArrayNum = 0;
          local_e58.Data.ArrayMax = 0;
          local_e48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e48.Data.ArrayNum = 0;
          local_e48.Data.ArrayMax = 0;
          local_e08 = 0;
          local_e04 = 0;
          FString::operator=(&local_e58,local_c88.DeviceName);
          EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,MonitorEnumProc,(LPARAM)&local_e58);
          FString::PrintfImpl(&local_dd0,L"%s");
          if (local_e48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e48.Data.AllocatorInstance.Data);
          }
          local_e48.Data.AllocatorInstance.Data = local_dd0.Data.AllocatorInstance.Data;
          local_e48.Data.ArrayNum = local_dd0.Data.ArrayNum;
          local_e48.Data.ArrayMax = local_dd0.Data.ArrayMax;
          local_dd0.Data.ArrayNum = 0;
          local_dd0.Data.ArrayMax = 0;
          local_dd0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar9 = FString::Find(&local_e48,L"\\",1,CaseSensitive,FromStart,9);
          pFVar15 = FString::Mid(&local_e48,&local_db0,8,iVar9 + -8);
          if (&local_e58 != pFVar15) {
            if (local_e58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e58.Data.AllocatorInstance.Data);
            }
            local_e58.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e58.Data.ArrayNum = (pFVar15->Data).ArrayNum;
            local_e58.Data.ArrayMax = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
          }
          if (local_db0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_db0.Data.AllocatorInstance.Data);
          }
          DeviceInfoSet =
               SetupDiGetClassDevsExW
                         (&`bool___cdecl_GetSizeForDevID(FString_const&___ptr64,int&___ptr64,int&___ptr64,int&___ptr64)'
                           ::__l2::ClassMonitorGuid,(PCWSTR)0x0,(HWND)0x0,2,(HDEVINFO)0x0,
                          (PCWSTR)0x0,(PVOID)0x0);
          if (DeviceInfoSet != (HDEVINFO)0x0) {
            bVar8 = false;
            DVar19 = 0;
            DVar11 = GetLastError();
            while (DVar11 != 0x103) {
              local_d90.ClassGuid.Data2 = 0;
              local_d90.ClassGuid.Data3 = 0;
              local_d90.ClassGuid.Data4[0] = '\0';
              local_d90.ClassGuid.Data4[1] = '\0';
              local_d90.ClassGuid.Data4[2] = '\0';
              local_d90.ClassGuid.Data4[3] = '\0';
              local_d90.cbSize = 0x20;
              local_d90.ClassGuid.Data1 = 0;
              local_d90.ClassGuid.Data4[4] = '\0';
              local_d90.ClassGuid.Data4[5] = '\0';
              local_d90.ClassGuid.Data4[6] = '\0';
              local_d90.ClassGuid.Data4[7] = '\0';
              local_d90.DevInst = 0;
              local_d90.Reserved = 0;
              BVar10 = SetupDiEnumDeviceInfo(DeviceInfoSet,DVar19,&local_d90);
              if (BVar10 == 1) {
                iVar9 = CM_Get_Device_IDW(local_d90.DevInst,local_1e8,200);
                if (iVar9 == 0) {
                  FString::FString(&local_df0,local_1e8);
                  iVar9 = FString::Find(&local_df0,L"\\",1,CaseSensitive,FromStart,9);
                  if ((iVar9 + -8 != 0x7fffffff) && (iVar9 + -8 < 0x7ffffff7)) {
                    iVar3 = local_df0.Data.ArrayNum + -1;
                    if (local_df0.Data.ArrayNum == 0) {
                      iVar3 = 0;
                    }
                    iVar12 = iVar3;
                    if (iVar9 < iVar3) {
                      iVar12 = iVar9;
                    }
                    iVar9 = 0;
                    if (0 < iVar12) {
                      iVar9 = iVar12;
                    }
                    FString::RemoveAt(&local_df0,iVar9,iVar3 - iVar9,No);
                  }
                  FString::RemoveAt(&local_df0,0,8,No);
                  iVar9 = local_df0.Data.ArrayNum;
                  if (iVar9 == local_e58.Data.ArrayNum) {
                    if (1 < iVar9) {
                      iVar9 = FGenericPlatformStricmp::Stricmp
                                        ((wchar_t *)local_df0.Data.AllocatorInstance.Data,
                                         (wchar_t *)local_e58.Data.AllocatorInstance.Data);
                      bVar21 = iVar9 == 0;
                      goto LAB_1423e017e;
                    }
LAB_1423e0185:
                    hKey = SetupDiOpenDevRegKey(DeviceInfoSet,&local_d90,1,0,1,0x20019);
                    if ((hKey != (HKEY)0x0) && (hKey != (HKEY)0xffffffffffffffff)) {
                      local_ddc = 0x200;
                      DVar19 = 0;
                      local_de0 = 0x400;
                      goto LAB_1423e01f1;
                    }
                  }
                  else {
                    bVar21 = iVar9 + local_e58.Data.ArrayNum == 1;
LAB_1423e017e:
                    if (bVar21) goto LAB_1423e0185;
                  }
                  if (local_df0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_df0.Data.AllocatorInstance.Data);
                  }
                }
              }
              DVar19 = DVar19 + 1;
              DVar11 = GetLastError();
            }
            goto LAB_1423e0273;
          }
          goto LAB_1423e065b;
        }
        goto LAB_1423e0679;
      }
    }
LAB_1423e06bf:
    memset(local_c88.DeviceName,0,0x344);
    DVar19 = DVar19 + 1;
    local_c88.cb = 0x348;
    local_df4 = DVar19;
    iVar9 = EnumDisplayDevicesW((LPCWSTR)0x0,DVar19,&local_c88,0);
  } while( true );
  while (DVar19 = DVar19 + 1, LVar13 != 0x103) {
LAB_1423e01f1:
    LVar13 = RegEnumValueW(hKey,DVar19,ValueName,&local_ddc,(LPDWORD)0x0,local_db8,local_5e8,
                           &local_de0);
    if ((LVar13 == 0) && (iVar9 = wcscmp(ValueName,L"EDID"), iVar9 == 0)) {
      uVar17 = (local_5ae & 0xfffffff0) << 4 | (uint)local_5b0;
      uVar14 = (local_5ab & 0xfffffff0) << 4 | (uint)local_5ad;
      local_e38 = CONCAT44(uVar14,uVar17);
      if ((local_5d3 == 0) || (local_5d2 == 0)) {
        local_e04 = 0;
        bVar8 = true;
      }
      else {
        bVar8 = true;
        local_e04 = ((int)((fVar6 / (float)local_5d2) * (float)uVar14) +
                    (int)((fVar6 / (float)local_5d3) * (float)uVar17)) / 2;
      }
      goto LAB_1423e025c;
    }
  }
  bVar8 = false;
LAB_1423e025c:
  RegCloseKey(hKey);
  if (local_df0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_df0.Data.AllocatorInstance.Data);
  }
LAB_1423e0273:
  BVar10 = SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  bVar21 = false;
  if (BVar10 != 0) {
    bVar21 = bVar8;
  }
  if (bVar21) {
    if ((((int)(uint)local_e38 < (int)local_e38._4_4_) && (local_e28._12_4_ == (uint)local_e38)) &&
       (local_e28._8_4_ == local_e38._4_4_)) {
      local_e38 = CONCAT44((uint)local_e38,local_e38._4_4_);
    }
    FString::operator=(&local_e48,local_938.DeviceID);
    local_e08 = ((byte)local_c88.StateFlags & 4) != 0;
    if (local_e04 - 0x60 < 0xcd) {
      fVar22 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint
                         ((float)(iStack_e10 + local_e18) * fVar5,
                          (float)(iStack_e14 + iStack_e0c) * fVar5);
      uVar14 = (int)((float)(int)local_e04 * fVar22);
    }
    else {
      uVar14 = 0x60;
      if (bEnableHighDPIAwareness != 0) {
        if (GetDpiForMonitor == (_func___cdecl_T_HRESULT_HMONITOR___ptr_int_uint_ptr_uint_ptr *)0x0)
        {
          hdc = GetDC((HWND)0x0);
          uVar14 = GetDeviceCaps(hdc,0x58);
          ReleaseDC((HWND)0x0,hdc);
        }
        else {
          local_da0.left = local_e28._0_4_;
          local_da0.top = local_e28._4_4_;
          local_da0.right = local_e28._8_4_;
          local_da0.bottom = local_e28._12_4_;
          pHVar16 = MonitorFromRect(&local_da0,2);
          if (pHVar16 != (HMONITOR)0x0) {
            local_df8 = 0;
            local_dd8[0] = 0;
            iVar9 = (*GetDpiForMonitor)((HMONITOR__ *)pHVar16,0,&local_df8,local_dd8);
            if (-1 < iVar9) {
              uVar14 = local_df8;
            }
          }
        }
      }
    }
    local_e04 = uVar14;
    uVar14 = (uint)local_e38;
    uVar17 = local_e38._4_4_;
    memset(&local_d68,0,0xdc);
    iVar9 = EnumDisplaySettingsW(local_c88.DeviceName,0,&local_d68);
    DVar19 = 1;
    while (iVar9 != 0) {
      if ((uVar14 < local_d68.dmPelsWidth) && (uVar17 < local_d68.dmPelsHeight)) {
        uVar14 = local_d68.dmPelsWidth;
        uVar17 = local_d68.dmPelsHeight;
      }
      memset(&local_d68,0,0xdc);
      iVar9 = EnumDisplaySettingsW(local_c88.DeviceName,DVar19,&local_d68);
      DVar19 = DVar19 + 1;
    }
    pFVar18 = (param_1->AllocatorInstance).Data;
    uStack_e30 = CONCAT44(uVar17,uVar14);
    local_dc0 = uVar14;
    uStack_dbc = uVar17;
    if (((pFVar18 <= (FScriptContainerElement *)&local_e58) &&
        ((FScriptContainerElement *)&local_e58 < pFVar18 + (longlong)*piVar1 * 0x58)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&param_1->AllocatorInstance,piVar1);
    }
    FVar7.Data = local_e58.Data.AllocatorInstance.Data;
    param_1->ArrayNum = iVar9 + 1;
    pFVar18 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x58;
    *(undefined8 *)&pFVar18->field_0x0 = 0;
    lVar20 = (longlong)local_e58.Data.ArrayNum;
    *(int *)&pFVar18[8].field_0x0 = local_e58.Data.ArrayNum;
    if (local_e58.Data.ArrayNum == 0) {
      *(int *)(pFVar18 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e58.Data.ArrayNum,0,(ForAnyElementType *)pFVar18,local_e58.Data.ArrayNum,
                 (int *)(pFVar18 + 0xc));
      memcpy(*(void **)&pFVar18->field_0x0,FVar7.Data,lVar20 * 2);
    }
    FVar7.Data = local_e48.Data.AllocatorInstance.Data;
    *(undefined8 *)&pFVar18[0x10].field_0x0 = 0;
    lVar20 = (longlong)local_e48.Data.ArrayNum;
    *(int *)&pFVar18[0x18].field_0x0 = local_e48.Data.ArrayNum;
    if (local_e48.Data.ArrayNum == 0) {
      *(int *)(pFVar18 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e48.Data.ArrayNum,0,(ForAnyElementType *)(pFVar18 + 0x10),
                 local_e48.Data.ArrayNum,(int *)(pFVar18 + 0x1c));
      memcpy(*(FScriptContainerElement **)&pFVar18[0x10].field_0x0,FVar7.Data,lVar20 * 2);
    }
    *(uint *)&pFVar18[0x20].field_0x0 = (uint)local_e38;
    *(uint *)(pFVar18 + 0x24) = local_e38._4_4_;
    *(undefined8 *)&pFVar18[0x28].field_0x0 = uStack_e30;
    *(undefined8 *)&pFVar18[0x30].field_0x0 = local_e28._0_8_;
    *(undefined8 *)&pFVar18[0x38].field_0x0 = local_e28._8_8_;
    auVar4._4_4_ = iStack_e14;
    auVar4._0_4_ = local_e18;
    auVar4._8_4_ = iStack_e10;
    auVar4._12_4_ = iStack_e0c;
    *(undefined1 (*) [16])(pFVar18 + 0x40) = auVar4;
    pFVar18[0x50].field_0x0 = local_e08;
    *(uint *)(pFVar18 + 0x54) = local_e04;
  }
LAB_1423e065b:
  if (local_e48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e48.Data.AllocatorInstance.Data);
  }
  if (local_e58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e58.Data.AllocatorInstance.Data);
  }
LAB_1423e0679:
  iDevNum = iDevNum + 1;
  memset(local_938.DeviceName,0,0x344);
  local_938.cb = 0x348;
  BVar10 = EnumDisplayDevicesW(local_c88.DeviceName,iDevNum,&local_938,0);
  DVar19 = local_df4;
  if (BVar10 == 0) goto LAB_1423e06bf;
  goto LAB_1423dfee0;
}

// GetOSVersionLabels @ 1423e0ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl GetOSVersionLabels(_SYSTEM_INFO *param_1,FHardwareSurveyResults *param_2)

{
  uint uVar1;
  undefined1 auStack_188 [32];
  FString local_168;
  FString local_158;
  FString local_148;
  _OSVERSIONINFOW local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  uVar1 = FWindowsOSVersionHelper::GetOSVersions(&local_148,&local_158);
  if ((uVar1 & 2) != 0) {
    param_2->ErrorCount = param_2->ErrorCount + 1;
    FString::FString(&local_168,L"Failed to get GetProductInfo() function from GetProcAddress().");
    WriteFStringToResults(param_2->LastSurveyError,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_168,L"");
    WriteFStringToResults(param_2->LastSurveyErrorDetail,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if ((uVar1 & 1) != 0) {
    memset(&local_138.dwMajorVersion,0,0x118);
    local_138.dwOSVersionInfoSize = 0x11c;
    GetVersionExW(&local_138);
    if (2 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    param_2->ErrorCount = param_2->ErrorCount + 1;
    FString::FString(&local_168,L"GetVersionEx() returned unknown version");
    WriteFStringToResults(param_2->LastSurveyError,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    FString::PrintfImpl(&local_168,L"dwMajorVersion: %u  dwMinorVersion: %u");
    WriteFStringToResults(param_2->LastSurveyErrorDetail,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if ((uVar1 & 4) != 0) {
    FWindowsPlatformMisc::GetLastError();
    if (2 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    param_2->ErrorCount = param_2->ErrorCount + 1;
    FString::FString(&local_168,L"GetVersionEx() failed");
    WriteFStringToResults(param_2->LastSurveyError,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    FString::PrintfImpl(&local_168,L"ErrorCode: 0x%0x");
    WriteFStringToResults(param_2->LastSurveyErrorDetail,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  WriteFStringToResults(param_2->OSVersion,&local_148);
  WriteFStringToResults(param_2->OSSubVersion,&local_158);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPropertyValue @ 1423e1b10

FVariant * __cdecl
WindowsUIAPropertyGetters::GetPropertyValue
          (FVariant *__return_storage_ptr__,TSharedRef<IAccessibleWidget,1> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  FString *pFVar7;
  wchar_t *_Str;
  void **ppvVar8;
  undefined7 uVar10;
  undefined8 uVar9;
  float fVar11;
  double dVar12;
  void *local_d8 [2];
  FArchiveState local_c8;
  undefined8 local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_30;
  undefined8 local_28;
  
  switch(param_2) {
  case 0x755d:
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0xd0))();
    ppvVar8 = local_d8;
    pFVar7 = (FString *)(**(code **)(*plVar6 + 0x28))(plVar6,ppvVar8);
    local_c8._padding_ = 0;
    local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    (__return_storage_ptr__->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    (__return_storage_ptr__->Value).ArrayNum = 0;
    (__return_storage_ptr__->Value).ArrayMax = 0;
    local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_c8._40_8_ = 0;
    local_c8.ArSerializingDefaults = 0;
    local_c8.ArPortFlags = 0;
    local_c8.ArMaxSerializeSize = 0;
    local_c8.ArUEVer.FileVersionUE4 = 0;
    local_c8.ArUEVer.FileVersionUE5 = 0;
    local_c8.ArLicenseeUEVer = 0;
    local_c8.ArEngineVer.Major = 0;
    local_c8.ArEngineVer.Minor = 0;
    local_c8.ArEngineVer.Patch = 0;
    local_c8.ArEngineVer._6_2_ = 0;
    local_c8.ArEngineVer.Changelist = 0;
    local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_c8.SerializedProperty = (FProperty *)0x0;
    local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_c8.bCustomVersionsAreReset = false;
    local_c8._129_7_ = 0;
    local_c8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_c8);
    local_38 = 0;
    local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    uVar10 = (undefined7)((ulonglong)ppvVar8 >> 8);
    local_28 = 0;
    local_30 = &__return_storage_ptr__->Value;
    FArchiveState::SetIsSaving(&local_c8,true);
    (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar10,1));
    local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    ::operator<<((FArchive *)&local_c8,pFVar7);
    __return_storage_ptr__->Type = String;
    FArchive::~FArchive((FArchive *)&local_c8);
    pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    break;
  case 0x755e:
  case 0x7560:
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0xd0))();
    bVar3 = (bool)(**(code **)*puVar5)(puVar5);
    FVariant::FVariant<bool>(__return_storage_ptr__,bVar3);
    break;
  case 0x755f:
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0xd0))();
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x28))(plVar6,local_d8);
    if (*(int *)(puVar5 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*puVar5;
    }
    dVar12 = _wtof(_Str);
    FVariant::FVariant<double>(__return_storage_ptr__,(double)(float)dVar12);
    if (local_d8[0] != (void *)0x0) {
      FMemory::Free(local_d8[0]);
    }
    break;
  case 0x7561:
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0xd0))();
    fVar11 = (float)(**(code **)(*plVar6 + 0x20))(plVar6);
    FVariant::FVariant<double>(__return_storage_ptr__,(double)fVar11);
    break;
  case 0x7562:
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0xd0))();
    fVar11 = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
    FVariant::FVariant<double>(__return_storage_ptr__,(double)fVar11);
    break;
  case 0x7563:
  case 0x7564:
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0xd0))();
    fVar11 = (float)(**(code **)(*plVar6 + 0x10))(plVar6);
    FVariant::FVariant<double>(__return_storage_ptr__,(double)fVar11);
    break;
  case 0x7579:
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0xc0))();
    uVar9 = 2;
    goto LAB_1423e1dcf;
  case 0x757a:
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0xc0))();
    uVar9 = 1;
LAB_1423e1dcf:
    bVar3 = (bool)(**(code **)(*plVar6 + 0x20))(plVar6,uVar9);
    FVariant::FVariant<bool>(__return_storage_ptr__,bVar3);
    break;
  case 0x757b:
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0xc0))();
    iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
    if (iVar4 == 0) {
      FVariant::FVariant<int>(__return_storage_ptr__,0);
      break;
    }
    if (iVar4 == 1) {
      FVariant::FVariant<int>(__return_storage_ptr__,2);
      break;
    }
    if (iVar4 == 2) {
      FVariant::FVariant<int>(__return_storage_ptr__,1);
      break;
    }
  default:
    __return_storage_ptr__->Type = Empty;
    (__return_storage_ptr__->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Value).ArrayNum = 0;
    (__return_storage_ptr__->Value).ArrayMax = 0;
    break;
  case 0x757c:
    FVariant::FVariant<int>(__return_storage_ptr__,0);
    break;
  case 0x757d:
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0xc0))();
    bVar3 = (bool)(**(code **)(*plVar6 + 0x38))(plVar6);
    FVariant::FVariant<bool>(__return_storage_ptr__,bVar3);
    break;
  case 0x757e:
  case 0x7587:
  case 0x7588:
  case 0x7589:
    FVariant::FVariant<bool>(__return_storage_ptr__,false);
    break;
  case 0x7586:
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 200))();
    cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
    FVariant::FVariant<int>(__return_storage_ptr__,(uint)(cVar2 != '\0'));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetPropertyValueWindows @ 1423e1f20

tagVARIANT * __cdecl
WindowsUIAPropertyGetters::GetPropertyValueWindows
          (tagVARIANT *__return_storage_ptr__,TSharedRef<IAccessibleWidget,1> *param_1,int param_2)

{
  IRecordInfo *pIVar1;
  tagVARIANT_u_0_s_0_u_8 tVar2;
  FVariant *pFVar3;
  tagVARIANT *ptVar4;
  TSharedRef<IAccessibleWidget,1> local_48;
  FVariant local_38;
  tagVARIANT local_20;
  
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = GetPropertyValue(&local_38,&local_48,param_2);
  ptVar4 = FVariantToWindowsVariant(&local_20,pFVar3);
  pIVar1 = (ptVar4->field0_0x0)._s_0.pRecInfo;
  tVar2 = (ptVar4->field0_0x0)._s_0._u_8;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&ptVar4->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0._u_8 = tVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.pRecInfo = pIVar1;
  if (local_38.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Value.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetSplashFilename @ 1423e2af0

FString * __cdecl
GetSplashFilename(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t **ppwVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *_Src;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar3 = (param_2->Data).ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  iVar6 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  local_38.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar6 != -1)) {
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar3 = iVar6 + 2;
LAB_1423e2b55:
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar3 == 0) {
      local_38.Data.ArrayMax = 0;
      goto LAB_1423e2ba7;
    }
  }
  else {
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar3 = iVar6 + 1;
    if (iVar1 == 0) goto LAB_1423e2b55;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar7 = iVar1 + iVar3;
  if ((int)uVar7 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar7,0,(ForAnyElementType *)&local_38,iVar1,&local_38.Data.ArrayMax);
  if (iVar1 != 0) {
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
LAB_1423e2ba7:
  FString::PathAppend(&local_38,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar6);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (SupportedSplashImageExt[0] != (wchar_t *)0x0) {
    ppwVar5 = SupportedSplashImageExt;
    pwVar4 = SupportedSplashImageExt[0];
    do {
      ppwVar5 = ppwVar5 + 1;
      FString::ConcatFC(&local_28,&local_38,pwVar4);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      local_48.Data.ArrayNum = local_28.Data.ArrayNum;
      local_48.Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar2 = FPaths::FileExists(&local_48);
      if (bVar2) {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        goto LAB_1423e2c45;
      }
      pwVar4 = *ppwVar5;
    } while (pwVar4 != (wchar_t *)0x0);
  }
  FString::ConcatFC(__return_storage_ptr__,&local_38,L".bmp");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_1423e2c45:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSplashScreenWindowHandle @ 1423e30d0

HWND__ * __cdecl GetSplashScreenWindowHandle(void)

{
  return GSplashScreenWnd;
}

// GetTSFInputMethodAsFString @ 1423e42d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
`anonymous_namespace'::GetTSFInputMethodAsFString
          (FString *__return_storage_ptr__,TF_INPUTPROCESSORPROFILE *param_1,
          ITfInputProcessorProfiles *param_2)

{
  ushort uVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t *local_res8;
  
  uVar1 = param_1->langid;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar2 = GetLocaleInfoW((uint)uVar1,2,(LPWSTR)0x0,0);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&__return_storage_ptr__->Data,iVar2,Default);
  GetLocaleInfoW((uint)uVar1,2,(LPWSTR)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L" - ",3);
  if (param_1->dwProfileType == 2) {
    iVar2 = 10;
    pwVar4 = L"(Keyboard)";
  }
  else {
    if (param_1->dwProfileType != 1) {
      return __return_storage_ptr__;
    }
    iVar2 = (**(code **)((longlong)*param_2 + 0x60))
                      (param_2,&param_1->clsid,param_1->langid,&param_1->guidProfile,&local_res8);
    if (-1 < iVar2) {
      sVar3 = wcslen(local_res8);
      ::FString::AppendChars(__return_storage_ptr__,local_res8,(int)sVar3);
      ::FString::AppendChars(__return_storage_ptr__,L" ",1);
      SysFreeString(local_res8);
    }
    iVar2 = 9;
    pwVar4 = L"(TSF IME)";
  }
  ::FString::AppendChars(__return_storage_ptr__,pwVar4,iVar2);
  return __return_storage_ptr__;
}

// GetTextInputMethodSystem @ 1423e4860

ITextInputMethodSystem * __thiscall
GenericApplication::GetTextInputMethodSystem(GenericApplication *this)

{
  return (ITextInputMethodSystem *)0x0;
}

// GetWindowTitleAlignment @ 1423e56b0

Type __thiscall GenericApplication::GetWindowTitleAlignment(GenericApplication *this)

{
  return Left;
}

// GetWindowTransparencySupport @ 1423e57f0

EWindowTransparency __thiscall
GenericApplication::GetWindowTransparencySupport(GenericApplication *this)

{
  return None;
}

// GetWindowUnderCursor @ 1423e5820

TSharedPtr<FGenericWindow,1> * __thiscall
GenericApplication::GetWindowUnderCursor
          (GenericApplication *this,TSharedPtr<FGenericWindow,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FGenericWindow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetWorkArea @ 1423e59c0

FPlatformRect * __thiscall
GenericApplication::GetWorkArea
          (GenericApplication *this,FPlatformRect *__return_storage_ptr__,FPlatformRect *param_1)

{
  __return_storage_ptr__->Left = 0;
  __return_storage_ptr__->Top = 0;
  __return_storage_ptr__->Right = 0;
  __return_storage_ptr__->Bottom = 0;
  return __return_storage_ptr__;
}

// InitializeWindow @ 1423e9af0

void __thiscall
GenericApplication::InitializeWindow
          (GenericApplication *this,TSharedRef<FGenericWindow,1> *param_1,
          TSharedRef<FGenericWindowDefinition,1> *param_2,TSharedPtr<FGenericWindow,1> *param_3,
          bool param_4)

{
  return;
}

// IsAllowedToRender @ 1423ea380

bool __thiscall GenericApplication::IsAllowedToRender(GenericApplication *this)

{
  return true;
}

// IsCursorDirectlyOverSlateWindow @ 1423ea7a0

bool __thiscall GenericApplication::IsCursorDirectlyOverSlateWindow(GenericApplication *this)

{
  return true;
}

// IsGamepadAttached @ 1423ea9e0

bool __thiscall GenericApplication::IsGamepadAttached(GenericApplication *this)

{
  return false;
}

// IsMinimized @ 1423eac70

bool __thiscall GenericApplication::IsMinimized(GenericApplication *this)

{
  return false;
}

// IsMouseAttached @ 1423eaca0

bool __thiscall GenericApplication::IsMouseAttached(GenericApplication *this)

{
  return true;
}

// IsUsingHighPrecisionMouseMode @ 1423eb4c0

bool __thiscall GenericApplication::IsUsingHighPrecisionMouseMode(GenericApplication *this)

{
  return false;
}

// IsUsingTrackpad @ 1423eb550

bool __thiscall GenericApplication::IsUsingTrackpad(GenericApplication *this)

{
  return false;
}

// LexToString @ 1423eb5c0

FString * __cdecl LexToString(FString *__return_storage_ptr__,EInputDeviceMappingPolicy param_1)

{
  if (param_1 == Invalid) {
    FString::FString(__return_storage_ptr__,L"Invalid");
    return __return_storage_ptr__;
  }
  if (param_1 == UseManagedPlatformLogin) {
    FString::FString(__return_storage_ptr__,L"UseManagedPlatformLogin");
    return __return_storage_ptr__;
  }
  if (param_1 == PrimaryUserSharesKeyboardAndFirstGamepad) {
    FString::FString(__return_storage_ptr__,L"PrimaryUserSharesKeyboardAndFirstGamepad");
    return __return_storage_ptr__;
  }
  if (param_1 != CreateUniquePlatformUserForEachDevice) {
    if (param_1 != MapAllDevicesToPrimaryUser) {
      FString::FString(__return_storage_ptr__,L"Unknown EInputDeviceMappingPolicy");
      return __return_storage_ptr__;
    }
    FString::FString(__return_storage_ptr__,L"MapAllDevicesToPrimaryUser");
    return __return_storage_ptr__;
  }
  FString::FString(__return_storage_ptr__,L"CreateUniquePlatformUserForEachDevice");
  return __return_storage_ptr__;
}

// LoadSplashBitmap @ 1423eb670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HBITMAP__ * __cdecl LoadSplashBitmap(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  HDC hdc;
  HBITMAP ho;
  ulonglong uVar6;
  HBITMAP__ *pHVar7;
  wchar_t *pwVar8;
  HBITMAP pHVar9;
  HBITMAP pHVar10;
  undefined1 auStackY_d8 [32];
  uint local_98;
  uint local_94;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  void *local_68;
  longlong *local_60;
  BITMAPINFO local_58;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  CoInitialize((LPVOID)0x0);
  pHVar9 = (HBITMAP)0x0;
  local_78 = (longlong *)0x0;
  CoCreateInstance((IID *)&CLSID_WICImagingFactory2,(LPUNKNOWN)0x0,1,
                   (IID *)&_GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,&local_78);
  pwVar8 = L"";
  if (GSplashScreenFileName.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)GSplashScreenFileName.Data.AllocatorInstance;
  }
  local_70 = (longlong *)0x0;
  iVar3 = (**(code **)(*local_78 + 0x18))(local_78,pwVar8,0,0x80000000);
  local_80 = (longlong *)0x0;
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*local_70 + 0x68))(local_70,0,&local_80);
  }
  local_60 = (longlong *)0x0;
  if (-1 < iVar3) {
    iVar3 = (**(code **)*local_80)(local_80,&IID_IWICBitmapSource,&local_60);
  }
  local_90 = (longlong *)0x0;
  if (-1 < iVar3) {
    local_88 = (longlong *)0x0;
    iVar3 = (**(code **)(*local_78 + 0x50))(local_78,&local_88);
    if ((-1 < iVar3) &&
       (iVar3 = (**(code **)(*local_88 + 0x40))(local_88,local_80,&GUID_WICPixelFormat32bppBGR,0),
       -1 < iVar3)) {
      iVar3 = (**(code **)*local_88)(local_88,&_GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,&local_90)
      ;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  pHVar10 = pHVar9;
  if (iVar3 < 0) goto LAB_1423eb930;
  local_98 = 0;
  local_94 = 0;
  local_68 = (void *)0x0;
  iVar3 = (**(code **)(*local_90 + 0x20))();
  ho = pHVar9;
  if (-1 < iVar3) {
    iVar4 = memcmp(local_28,&GUID_WICPixelFormat32bppBGR,0x10);
    iVar3 = -0x7fffbffb;
    if (iVar4 == 0) {
      iVar3 = (**(code **)(*local_90 + 0x18))(local_90,&local_98,&local_94);
      if (iVar3 < 0) goto LAB_1423eb8ea;
      local_58.bmiHeader.biWidth = local_98;
      local_58.bmiHeader.biHeight = -local_94;
      local_58.bmiHeader.biClrImportant = 0;
      local_58.bmiColors[0].rgbBlue = '\0';
      local_58.bmiColors[0].rgbGreen = '\0';
      local_58.bmiColors[0].rgbRed = '\0';
      local_58.bmiColors[0].rgbReserved = '\0';
      local_58.bmiHeader.biSizeImage = 0;
      local_58.bmiHeader.biXPelsPerMeter = 0;
      local_58.bmiHeader.biYPelsPerMeter = 0;
      local_58.bmiHeader.biClrUsed = 0;
      local_58.bmiHeader.biSize = 0x28;
      local_58.bmiHeader.biPlanes = 1;
      local_58.bmiHeader.biBitCount = 0x20;
      local_58.bmiHeader.biCompression = 0;
      hdc = GetDC((HWND)0x0);
      iVar3 = -0x7fffbffb;
      if (hdc != (HDC)0x0) {
        ho = CreateDIBSection(hdc,&local_58,0,&local_68,(HANDLE)0x0,0);
        ReleaseDC((HWND)0x0,hdc);
        iVar3 = -0x7fffbffb;
        if (ho != (HBITMAP)0x0) {
          iVar3 = 0;
        }
      }
    }
    if ((((-1 < iVar3) && (uVar6 = (ulonglong)local_98 << 2, uVar6 < 0x100000000)) &&
        ((uVar6 & 0xffffffff) * (ulonglong)local_94 < 0x100000000)) &&
       ((pHVar10 = ho, local_90 == (longlong *)0x0 ||
        (iVar3 = (**(code **)(*local_90 + 0x38))(local_90,0,uVar6 & 0xffffffff), -1 < iVar3))))
    goto LAB_1423eb930;
  }
LAB_1423eb8ea:
  pHVar10 = (HBITMAP)0x0;
  if ((ho != (HBITMAP)0x0) &&
     ((BVar5 = DeleteObject(ho), pHVar10 = pHVar9, BVar5 == 0 &&
      (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4858346763330781556>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsPlatformSplash.cpp"
                          ,0x174,"DeleteObject(hDIBBitmap)"), bVar2)))) {
    pcVar1 = (code *)swi(3);
    pHVar7 = (HBITMAP__ *)(*pcVar1)();
    return pHVar7;
  }
LAB_1423eb930:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))(local_60);
  }
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x10))();
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  return (HBITMAP__ *)pHVar10;
}

// MakeWindow @ 1423eecf0

TSharedRef<FGenericWindow,1> * __thiscall
GenericApplication::MakeWindow
          (GenericApplication *this,TSharedRef<FGenericWindow,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FGenericWindow> local_res10 [3];
  
  local_res10[0].Object = ::operator_new(0x18);
  if (local_res10[0].Object != (FGenericWindow *)0x0) {
    ((local_res10[0].Object)->Definition).Object = (FGenericWindowDefinition *)0x0;
    (local_res10[0].Object)->_padding_ = (longlong)&___7FGenericWindow__6B_;
    ((local_res10[0].Object)->Definition).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  TSharedRef<FGenericWindow,1>::TSharedRef<FGenericWindow,1><FGenericWindow>
            (__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// MonitorEnumProc @ 1423ef010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl MonitorEnumProc(HMONITOR__ *param_1,HDC__ *param_2,tagRECT *param_3,long64 param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_a8 [32];
  tagMONITORINFO local_88;
  wchar_t local_60 [36];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.cbSize = 0x68;
  GetMonitorInfoW((HMONITOR)param_1,&local_88);
  if (*(int *)(param_4 + 8) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = *(wchar_t **)param_4;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,local_60);
  if (iVar1 == 0) {
    *(LONG *)(param_4 + 0x3c) = local_88.rcMonitor.bottom;
    *(LONG *)(param_4 + 0x30) = local_88.rcMonitor.left;
    *(LONG *)(param_4 + 0x38) = local_88.rcMonitor.right;
    *(LONG *)(param_4 + 0x34) = local_88.rcMonitor.top;
    *(LONG *)(param_4 + 0x4c) = local_88.rcWork.bottom;
    *(LONG *)(param_4 + 0x40) = local_88.rcWork.left;
    *(LONG *)(param_4 + 0x48) = local_88.rcWork.right;
    *(LONG *)(param_4 + 0x44) = local_88.rcWork.top;
  }
  return (uint)(iVar1 != 0);
}

// PollGameDeviceState @ 1423f29c0

void __thiscall GenericApplication::PollGameDeviceState(GenericApplication *this,float param_1)

{
  return;
}

// ProcessDeferredEvents @ 1423f33a0

void __thiscall GenericApplication::ProcessDeferredEvents(GenericApplication *this,float param_1)

{
  return;
}

// PropertyIdToString @ 1423f8410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

FString * __cdecl PropertyIdToString(FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  longlong lVar5;
  int *piVar6;
  undefined4 local_res8 [2];
  FString local_res10;
  undefined4 local_res20 [2];
  undefined4 local_1b78;
  undefined4 local_1b74;
  undefined4 local_1b70;
  undefined4 local_1b6c;
  undefined4 local_1b68;
  undefined4 local_1b64;
  undefined4 local_1b60;
  undefined4 local_1b5c;
  undefined4 local_1b58;
  undefined4 local_1b54;
  undefined4 local_1b50;
  undefined4 local_1b4c;
  undefined4 local_1b48;
  undefined4 local_1b44;
  undefined4 local_1b40;
  undefined4 local_1b3c;
  undefined4 local_1b38;
  undefined4 local_1b34;
  undefined4 local_1b30;
  undefined4 local_1b2c;
  undefined4 local_1b28;
  undefined4 local_1b24;
  undefined4 local_1b20;
  undefined4 local_1b1c;
  undefined4 local_1b18;
  undefined4 local_1b14;
  undefined4 local_1b10;
  undefined4 local_1b0c;
  undefined4 local_1b08;
  undefined4 local_1b04;
  undefined4 local_1b00;
  undefined4 local_1afc;
  undefined4 local_1af8;
  undefined4 local_1af4;
  undefined4 local_1af0;
  undefined4 local_1aec;
  undefined4 local_1ae8;
  undefined4 local_1ae4;
  undefined4 local_1ae0;
  undefined4 local_1adc;
  undefined4 local_1ad8;
  undefined4 local_1ad4;
  undefined4 local_1ad0;
  undefined4 local_1acc;
  undefined4 local_1ac8;
  undefined4 local_1ac4;
  undefined4 local_1ac0;
  undefined4 local_1abc;
  undefined4 local_1ab8;
  undefined4 local_1ab4;
  undefined4 local_1ab0;
  undefined4 local_1aac;
  undefined4 local_1aa8;
  undefined4 local_1aa4;
  undefined4 local_1aa0;
  undefined4 local_1a9c;
  undefined4 local_1a98;
  undefined4 local_1a94;
  undefined4 local_1a90;
  undefined4 local_1a8c;
  undefined4 local_1a88;
  undefined4 local_1a84;
  undefined4 local_1a80;
  undefined4 local_1a7c;
  undefined4 local_1a78;
  undefined4 local_1a74;
  undefined4 local_1a70;
  undefined4 local_1a6c;
  undefined4 local_1a68;
  undefined4 local_1a64;
  undefined4 local_1a60;
  undefined4 local_1a5c;
  undefined4 local_1a58;
  undefined4 local_1a54;
  undefined4 local_1a50;
  undefined4 local_1a4c;
  undefined4 local_1a48;
  undefined4 local_1a44;
  undefined4 local_1a40;
  undefined4 local_1a3c;
  undefined4 local_1a38;
  undefined4 local_1a34;
  undefined4 local_1a30;
  undefined4 local_1a2c;
  undefined4 local_1a28;
  undefined4 local_1a24;
  undefined4 local_1a20;
  undefined4 local_1a1c;
  undefined4 local_1a18;
  undefined4 local_1a14;
  undefined4 local_1a10;
  undefined4 local_1a0c;
  undefined4 local_1a08;
  undefined4 local_1a04;
  undefined4 local_1a00;
  undefined4 local_19fc;
  undefined4 local_19f8;
  undefined4 local_19f4;
  undefined4 local_19f0;
  undefined4 local_19ec;
  undefined4 local_19e8;
  undefined4 local_19e4;
  undefined4 local_19e0;
  undefined4 local_19dc;
  undefined4 local_19d8;
  undefined4 local_19d4;
  undefined4 local_19d0;
  undefined4 local_19cc;
  undefined4 local_19c8;
  undefined4 local_19c4;
  undefined4 local_19c0;
  undefined4 local_19bc;
  undefined4 local_19b8;
  undefined4 local_19b4;
  undefined4 local_19b0;
  undefined4 local_19ac;
  undefined4 local_19a8;
  undefined4 local_19a4;
  undefined4 local_19a0;
  undefined4 local_199c;
  undefined4 local_1998;
  undefined4 local_1994;
  undefined4 local_1990;
  undefined4 local_198c;
  undefined4 local_1988;
  undefined4 local_1984;
  undefined4 local_1980;
  undefined4 local_197c;
  undefined4 local_1978;
  undefined4 local_1974;
  undefined4 local_1970;
  undefined4 local_196c;
  undefined4 local_1968;
  undefined4 local_1964;
  undefined4 local_1960;
  undefined4 local_195c;
  undefined4 local_1958;
  undefined4 local_1954;
  undefined4 local_1950;
  undefined4 local_194c;
  undefined4 local_1948;
  undefined4 local_1944;
  undefined4 local_1940;
  undefined4 local_193c;
  undefined4 local_1938;
  undefined4 local_1934;
  undefined4 local_1930;
  undefined4 local_192c;
  undefined4 local_1928;
  undefined4 local_1924;
  undefined4 local_1920;
  undefined4 local_191c;
  undefined4 local_1918;
  undefined4 local_1914;
  undefined4 local_1910;
  undefined4 local_190c;
  undefined4 local_1908;
  undefined4 local_1904;
  undefined4 local_1900;
  undefined4 local_18fc;
  undefined4 local_18f8;
  undefined4 local_18f4;
  undefined4 local_18f0;
  undefined4 local_18ec;
  undefined4 local_18e8;
  undefined4 local_18e4;
  undefined4 local_18e0;
  undefined4 local_18dc;
  undefined4 local_18d8;
  undefined4 local_18d4;
  undefined4 local_18d0;
  undefined1 local_18cc [8];
  undefined1 local_18c4 [8];
  undefined1 local_18bc [8];
  undefined1 local_18b4 [8];
  undefined1 local_18ac [8];
  undefined1 local_18a4 [8];
  undefined1 local_189c [8];
  undefined1 local_1894 [8];
  undefined1 local_188c [8];
  undefined1 local_1884 [8];
  undefined1 local_187c [8];
  undefined1 local_1874 [8];
  undefined1 local_186c [8];
  undefined1 local_1864 [8];
  undefined1 local_185c [8];
  undefined1 local_1854 [8];
  undefined1 local_184c [8];
  undefined1 local_1844 [8];
  undefined1 local_183c [8];
  undefined1 local_1834 [8];
  undefined1 local_182c [8];
  undefined1 local_1824 [8];
  undefined1 local_181c [8];
  undefined1 local_1814 [8];
  undefined1 local_180c [8];
  undefined1 local_1804 [8];
  undefined1 local_17fc [8];
  undefined1 local_17f4 [8];
  undefined1 local_17ec [8];
  undefined1 local_17e4 [8];
  undefined1 local_17dc [8];
  undefined1 local_17d4 [8];
  undefined1 local_17cc [8];
  undefined1 local_17c4 [8];
  undefined1 local_17bc [8];
  undefined1 local_17b4 [8];
  undefined1 local_17ac [8];
  undefined1 local_17a4 [8];
  undefined1 local_179c [8];
  undefined1 local_1794 [8];
  undefined1 local_178c [8];
  undefined1 local_1784 [8];
  undefined1 local_177c [8];
  undefined1 local_1774 [8];
  undefined1 local_176c [8];
  undefined1 local_1764 [8];
  undefined1 local_175c [8];
  undefined1 local_1754 [8];
  undefined1 local_174c [8];
  undefined1 local_1744 [8];
  undefined1 local_173c [8];
  undefined1 local_1734 [8];
  undefined1 local_172c [8];
  undefined1 local_1724 [8];
  undefined1 local_171c [8];
  undefined1 local_1714 [8];
  undefined1 local_170c [8];
  undefined1 local_1704 [8];
  undefined1 local_16fc [8];
  undefined1 local_16f4 [8];
  undefined1 local_16ec [8];
  undefined1 local_16e4 [8];
  undefined1 local_16dc [8];
  undefined1 local_16d4 [8];
  undefined1 local_16cc [8];
  undefined1 local_16c4 [8];
  undefined1 local_16bc [8];
  undefined1 local_16b4 [8];
  undefined1 local_16ac [8];
  undefined1 local_16a4 [8];
  undefined1 local_169c [8];
  undefined1 local_1694 [8];
  undefined1 local_168c [8];
  undefined1 local_1684 [8];
  undefined1 local_167c [8];
  undefined1 local_1674 [8];
  undefined1 local_166c [8];
  undefined1 local_1664 [8];
  undefined1 local_165c [8];
  undefined1 local_1654 [8];
  undefined1 local_164c [8];
  undefined1 local_1644 [8];
  undefined1 local_163c [8];
  undefined1 local_1634 [8];
  undefined1 local_162c [8];
  undefined1 local_1624 [8];
  undefined1 local_161c [8];
  undefined1 local_1614 [4];
  FString *local_1610;
  FString *local_1608;
  FString local_1600;
  undefined4 *local_15f0;
  FString *local_15e8;
  FString local_15e0;
  int *local_15d0;
  FString *local_15c8;
  FString local_15c0;
  undefined4 *local_15b0;
  FString *local_15a8;
  FString local_15a0;
  undefined4 *local_1590;
  FString *local_1588;
  FString local_1580;
  undefined4 *local_1570;
  FString *local_1568;
  FString local_1560;
  undefined4 *local_1550;
  FString *local_1548;
  FString local_1540;
  undefined4 *local_1530;
  FString *local_1528;
  FString local_1520;
  undefined4 *local_1510;
  FString *local_1508;
  FString local_1500;
  undefined4 *local_14f0;
  FString *local_14e8;
  FString local_14e0;
  undefined4 *local_14d0;
  FString *local_14c8;
  FString local_14c0;
  undefined4 *local_14b0;
  FString *local_14a8;
  FString local_14a0;
  undefined4 *local_1490;
  FString *local_1488;
  FString local_1480;
  undefined4 *local_1470;
  FString *local_1468;
  FString local_1460;
  undefined4 *local_1450;
  FString *local_1448;
  FString local_1440;
  undefined4 *local_1430;
  FString *local_1428;
  FString local_1420;
  undefined4 *local_1410;
  FString *local_1408;
  FString local_1400;
  undefined4 *local_13f0;
  FString *local_13e8;
  FString local_13e0;
  undefined4 *local_13d0;
  FString *local_13c8;
  FString local_13c0;
  undefined4 *local_13b0;
  FString *local_13a8;
  FString local_13a0;
  undefined4 *local_1390;
  FString *local_1388;
  FString local_1380;
  undefined4 *local_1370;
  FString *local_1368;
  FString local_1360;
  undefined4 *local_1350;
  FString *local_1348;
  FString local_1340;
  undefined4 *local_1330;
  FString *local_1328;
  FString local_1320;
  undefined4 *local_1310;
  FString *local_1308;
  FString local_1300;
  undefined4 *local_12f0;
  FString *local_12e8;
  FString local_12e0;
  undefined4 *local_12d0;
  FString *local_12c8;
  FString local_12c0;
  undefined4 *local_12b0;
  FString *local_12a8;
  FString local_12a0;
  undefined4 *local_1290;
  FString *local_1288;
  FString local_1280;
  undefined4 *local_1270;
  FString *local_1268;
  FString local_1260;
  undefined4 *local_1250;
  FString *local_1248;
  FString local_1240;
  undefined4 *local_1230;
  FString *local_1228;
  FString local_1220;
  undefined4 *local_1210;
  FString *local_1208;
  FString local_1200;
  undefined4 *local_11f0;
  FString *local_11e8;
  FString local_11e0;
  undefined4 *local_11d0;
  FString *local_11c8;
  FString local_11c0;
  undefined4 *local_11b0;
  FString *local_11a8;
  FString local_11a0;
  undefined4 *local_1190;
  FString *local_1188;
  FString local_1180;
  undefined4 *local_1170;
  FString *local_1168;
  FString local_1160;
  undefined4 *local_1150;
  FString *local_1148;
  FString local_1140;
  undefined4 *local_1130;
  FString *local_1128;
  FString local_1120;
  undefined4 *local_1110;
  FString *local_1108;
  FString local_1100;
  undefined4 *local_10f0;
  FString *local_10e8;
  FString local_10e0;
  undefined4 *local_10d0;
  FString *local_10c8;
  FString local_10c0;
  undefined4 *local_10b0;
  FString *local_10a8;
  FString local_10a0;
  undefined4 *local_1090;
  FString *local_1088;
  FString local_1080;
  undefined4 *local_1070;
  FString *local_1068;
  FString local_1060;
  undefined4 *local_1050;
  FString *local_1048;
  FString local_1040;
  undefined4 *local_1030;
  FString *local_1028;
  FString local_1020;
  undefined4 *local_1010;
  FString *local_1008;
  FString local_1000;
  undefined4 *local_ff0;
  FString *local_fe8;
  FString local_fe0;
  undefined4 *local_fd0;
  FString *local_fc8;
  FString local_fc0;
  undefined4 *local_fb0;
  FString *local_fa8;
  FString local_fa0;
  undefined4 *local_f90;
  FString *local_f88;
  FString local_f80;
  undefined4 *local_f70;
  FString *local_f68;
  FString local_f60;
  undefined4 *local_f50;
  FString *local_f48;
  FString local_f40;
  undefined4 *local_f30;
  FString *local_f28;
  FString local_f20;
  undefined4 *local_f10;
  FString *local_f08;
  FString local_f00;
  undefined4 *local_ef0;
  FString *local_ee8;
  FString local_ee0;
  undefined4 *local_ed0;
  FString *local_ec8;
  FString local_ec0;
  undefined4 *local_eb0;
  FString *local_ea8;
  FString local_ea0;
  undefined4 *local_e90;
  FString *local_e88;
  FString local_e80;
  undefined4 *local_e70;
  FString *local_e68;
  FString local_e60;
  undefined4 *local_e50;
  FString *local_e48;
  FString local_e40;
  undefined4 *local_e30;
  FString *local_e28;
  FString local_e20;
  undefined4 *local_e10;
  FString *local_e08;
  FString local_e00;
  undefined4 *local_df0;
  FString *local_de8;
  FString local_de0;
  undefined4 *local_dd0;
  FString *local_dc8;
  FString local_dc0;
  undefined4 *local_db0;
  FString *local_da8;
  FString local_da0;
  undefined4 *local_d90;
  FString *local_d88;
  FString local_d80;
  undefined4 *local_d70;
  FString *local_d68;
  FString local_d60;
  undefined4 *local_d50;
  FString *local_d48;
  FString local_d40;
  undefined4 *local_d30;
  FString *local_d28;
  FString local_d20;
  undefined4 *local_d10;
  FString *local_d08;
  FString local_d00;
  undefined4 *local_cf0;
  FString *local_ce8;
  FString local_ce0;
  undefined4 *local_cd0;
  FString *local_cc8;
  FString local_cc0;
  undefined4 *local_cb0;
  FString *local_ca8;
  FString local_ca0;
  undefined4 *local_c90;
  FString *local_c88;
  FString local_c80;
  undefined4 *local_c70;
  FString *local_c68;
  FString local_c60;
  undefined4 *local_c50;
  FString *local_c48;
  FString local_c40;
  undefined4 *local_c30;
  FString *local_c28;
  FString local_c20;
  undefined4 *local_c10;
  FString *local_c08;
  FString local_c00;
  undefined4 *local_bf0;
  FString *local_be8;
  FString local_be0;
  undefined4 *local_bd0;
  FString *local_bc8;
  FString local_bc0;
  undefined4 *local_bb0;
  FString *local_ba8;
  FString local_ba0;
  undefined4 *local_b90;
  FString *local_b88;
  FString local_b80;
  undefined4 *local_b70;
  FString *local_b68;
  FString local_b60;
  undefined4 *local_b50;
  FString *local_b48;
  FString local_b40;
  undefined4 *local_b30;
  FString *local_b28;
  FString local_b20;
  undefined4 *local_b10;
  FString *local_b08;
  FString local_b00;
  undefined4 *local_af0;
  FString *local_ae8;
  FString local_ae0;
  undefined4 *local_ad0;
  FString *local_ac8;
  FString local_ac0;
  undefined4 *local_ab0;
  FString *local_aa8;
  FString local_aa0;
  undefined4 *local_a90;
  FString *local_a88;
  FString local_a80;
  undefined4 *local_a70;
  FString *local_a68;
  FString local_a60;
  undefined4 *local_a50;
  FString *local_a48;
  FString local_a40;
  undefined4 *local_a30;
  FString *local_a28;
  FString local_a20;
  undefined4 *local_a10;
  FString *local_a08;
  FString local_a00;
  undefined4 *local_9f0;
  FString *local_9e8;
  FString local_9e0;
  undefined4 *local_9d0;
  FString *local_9c8;
  FString local_9c0;
  undefined4 *local_9b0;
  FString *local_9a8;
  FString local_9a0;
  undefined4 *local_990;
  FString *local_988;
  FString local_980;
  undefined4 *local_970;
  FString *local_968;
  FString local_960;
  undefined4 *local_950;
  FString *local_948;
  FString local_940;
  undefined4 *local_930;
  FString *local_928;
  FString local_920;
  undefined4 *local_910;
  FString *local_908;
  FString local_900;
  undefined4 *local_8f0;
  FString *local_8e8;
  FString local_8e0;
  undefined4 *local_8d0;
  FString *local_8c8;
  FString local_8c0;
  undefined4 *local_8b0;
  FString *local_8a8;
  FString local_8a0;
  undefined4 *local_890;
  FString *local_888;
  FString local_880;
  undefined4 *local_870;
  FString *local_868;
  FString local_860;
  undefined4 *local_850;
  FString *local_848;
  FString local_840;
  undefined4 *local_830;
  FString *local_828;
  FString local_820;
  undefined4 *local_810;
  FString *local_808;
  FString local_800;
  undefined4 *local_7f0;
  FString *local_7e8;
  FString local_7e0;
  undefined4 *local_7d0;
  FString *local_7c8;
  FString local_7c0;
  undefined4 *local_7b0;
  FString *local_7a8;
  FString local_7a0;
  undefined4 *local_790;
  FString *local_788;
  FString local_780;
  undefined4 *local_770;
  FString *local_768;
  FString local_760;
  undefined4 *local_750;
  FString *local_748;
  FString local_740;
  undefined4 *local_730;
  FString *local_728;
  FString local_720;
  undefined4 *local_710;
  FString *local_708;
  FString local_700;
  undefined4 *local_6f0;
  FString *local_6e8;
  FString local_6e0;
  undefined4 *local_6d0;
  FString *local_6c8;
  FString local_6c0;
  undefined4 *local_6b0;
  FString *local_6a8;
  FString local_6a0;
  undefined4 *local_690;
  FString *local_688;
  FString local_680;
  undefined4 *local_670;
  FString *local_668;
  FString local_660;
  undefined4 *local_650;
  FString *local_648;
  FString local_640;
  undefined4 *local_630;
  FString *local_628;
  FString local_620;
  undefined4 *local_610;
  FString *local_608;
  FString local_600;
  undefined4 *local_5f0;
  FString *local_5e8;
  FString local_5e0;
  undefined4 *local_5d0;
  FString *local_5c8;
  FString local_5c0;
  undefined4 *local_5b0;
  FString *local_5a8;
  FString local_5a0;
  undefined4 *local_590;
  FString *local_588;
  FString local_580;
  undefined4 *local_570;
  FString *local_568;
  FString local_560;
  undefined4 *local_550;
  FString *local_548;
  FString local_540;
  undefined4 *local_530;
  FString *local_528;
  FString local_520;
  undefined4 *local_510;
  FString *local_508;
  FString local_500;
  undefined4 *local_4f0;
  FString *local_4e8;
  FString local_4e0;
  undefined4 *local_4d0;
  FString *local_4c8;
  FString local_4c0;
  undefined4 *local_4b0;
  FString *local_4a8;
  FString local_4a0;
  undefined4 *local_490;
  FString *local_488;
  FString local_480;
  undefined4 *local_470;
  FString *local_468;
  FString local_460;
  undefined4 *local_450;
  FString *local_448;
  FString local_440;
  undefined4 *local_430;
  FString *local_428;
  FString local_420;
  undefined4 *local_410;
  FString *local_408;
  FString local_400;
  undefined4 *local_3f0;
  FString *local_3e8;
  FString local_3e0;
  undefined4 *local_3d0;
  FString *local_3c8;
  FString local_3c0;
  undefined4 *local_3b0;
  FString *local_3a8;
  FString local_3a0;
  undefined4 *local_390;
  FString *local_388;
  FString local_380;
  undefined4 *local_370;
  FString *local_368;
  FString local_360;
  undefined4 *local_350;
  FString *local_348;
  FString local_340;
  undefined4 *local_330;
  FString *local_328;
  FString local_320;
  undefined4 *local_310;
  FString *local_308;
  FString local_300;
  undefined4 *local_2f0;
  FString *local_2e8;
  FString local_2e0;
  undefined4 *local_2d0;
  FString *local_2c8;
  FString local_2c0;
  undefined4 *local_2b0;
  FString *local_2a8;
  FString local_2a0;
  undefined4 *local_290;
  FString *local_288;
  FString local_280;
  undefined4 *local_270;
  FString *local_268;
  FString local_260;
  undefined4 *local_250;
  FString *local_248;
  FString local_240;
  undefined4 *local_230;
  FString *local_228;
  FString local_220;
  undefined4 *local_210;
  FString *local_208;
  FString local_200;
  undefined4 *local_1f0;
  FString *local_1e8;
  FString local_1e0;
  undefined4 *local_1d0;
  FString *local_1c8;
  FString local_1c0;
  undefined4 *local_1b0;
  FString *local_1a8;
  FString local_1a0;
  undefined4 *local_190;
  FString *local_188;
  FString local_180;
  undefined4 *local_170;
  FString *local_168;
  FString local_160;
  undefined4 *local_150;
  FString *local_148;
  FString local_140;
  undefined4 *local_130;
  FString *local_128;
  FString local_120;
  undefined4 *local_110;
  FString *local_108;
  FString local_100;
  undefined4 *local_f0;
  FString *local_e8;
  FString local_e0;
  undefined4 *local_d0;
  FString *local_c8;
  FString local_c0;
  undefined4 *local_b0;
  FString *local_a8;
  FString local_a0;
  undefined4 *local_90;
  FString *local_88;
  FString local_80;
  undefined4 *local_70;
  FString *local_68;
  FString local_60;
  undefined4 *local_50;
  FString *local_48;
  FString local_40;
  undefined8 uStack_28;
  
  uStack_28 = 0x1423f8427;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`PropertyIdToString'::__l2::_dynamic_atexit_destructor_for__PropertyIdToStringMap__);
    _Init_thread_footer(&_TSS0);
  }
  if (PropertyIdToStringMap._8_4_ == PropertyIdToStringMap._52_4_) {
    FString::FString(&local_1600,L"UIA_RuntimeIdPropertyId");
    local_1610 = &local_res10;
    local_res10.Data.AllocatorInstance.Data._0_4_ = 30000;
    local_1608 = &local_1600;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_18cc,
               (bool *)(local_1614 + 4));
    if (local_1600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1600.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_15e0,L"UIA_BoundingRectanglePropertyId");
    local_15f0 = local_res8;
    local_res8[0] = 0x7531;
    local_15e8 = &local_15e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_18cc + 4),
               (bool *)&local_15f0);
    if (local_15e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_15c0,L"UIA_ProcessIdPropertyId");
    local_15d0 = &local_res10.Data.ArrayNum;
    local_res10.Data.ArrayNum = 0x7532;
    local_15c8 = &local_15c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_18c4,
               (bool *)&local_15d0);
    if (local_15c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_15a0,L"UIA_ControlTypePropertyId");
    local_15b0 = local_res20;
    local_res20[0] = 0x7533;
    local_15a8 = &local_15a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_18c4 + 4),
               (bool *)&local_15b0);
    if (local_15a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1580,L"UIA_LocalizedControlTypePropertyId");
    local_1590 = &local_1b78;
    local_1b78 = 0x7534;
    local_1588 = &local_1580;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_18bc,
               (bool *)&local_1590);
    if (local_1580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1580.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1560,L"UIA_NamePropertyId");
    local_1570 = &local_1b74;
    local_1b74 = 0x7535;
    local_1568 = &local_1560;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_18bc + 4),
               (bool *)&local_1570);
    if (local_1560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1560.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1540,L"UIA_AcceleratorKeyPropertyId");
    local_1550 = &local_1b70;
    local_1b70 = 0x7536;
    local_1548 = &local_1540;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_18b4,
               (bool *)&local_1550);
    if (local_1540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1540.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1520,L"UIA_AccessKeyPropertyId");
    local_1530 = &local_1b6c;
    local_1b6c = 0x7537;
    local_1528 = &local_1520;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_18b4 + 4),
               (bool *)&local_1530);
    if (local_1520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1520.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1500,L"UIA_HasKeyboardFocusPropertyId");
    local_1510 = &local_1b68;
    local_1b68 = 0x7538;
    local_1508 = &local_1500;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_18ac,
               (bool *)&local_1510);
    if (local_1500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1500.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_14e0,L"UIA_IsKeyboardFocusablePropertyId");
    local_14f0 = &local_1b64;
    local_1b64 = 0x7539;
    local_14e8 = &local_14e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_18ac + 4),
               (bool *)&local_14f0);
    if (local_14e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_14c0,L"UIA_IsEnabledPropertyId");
    local_14d0 = &local_1b60;
    local_1b60 = 0x753a;
    local_14c8 = &local_14c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_18a4,
               (bool *)&local_14d0);
    if (local_14c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_14a0,L"UIA_AutomationIdPropertyId");
    local_14b0 = &local_1b5c;
    local_1b5c = 0x753b;
    local_14a8 = &local_14a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_18a4 + 4),
               (bool *)&local_14b0);
    if (local_14a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1480,L"UIA_ClassNamePropertyId");
    local_1490 = &local_1b58;
    local_1b58 = 0x753c;
    local_1488 = &local_1480;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_189c,
               (bool *)&local_1490);
    if (local_1480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1480.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1460,L"UIA_HelpTextPropertyId");
    local_1470 = &local_1b54;
    local_1b54 = 0x753d;
    local_1468 = &local_1460;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_189c + 4),
               (bool *)&local_1470);
    if (local_1460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1460.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1440,L"UIA_ClickablePointPropertyId");
    local_1450 = &local_1b50;
    local_1b50 = 0x753e;
    local_1448 = &local_1440;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1894,
               (bool *)&local_1450);
    if (local_1440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1440.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1420,L"UIA_CulturePropertyId");
    local_1430 = &local_1b4c;
    local_1b4c = 0x753f;
    local_1428 = &local_1420;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1894 + 4),
               (bool *)&local_1430);
    if (local_1420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1420.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1400,L"UIA_IsControlElementPropertyId");
    local_1410 = &local_1b48;
    local_1b48 = 0x7540;
    local_1408 = &local_1400;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_188c,
               (bool *)&local_1410);
    if (local_1400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1400.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_13e0,L"UIA_IsContentElementPropertyId");
    local_13f0 = &local_1b44;
    local_1b44 = 0x7541;
    local_13e8 = &local_13e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_188c + 4),
               (bool *)&local_13f0);
    if (local_13e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_13c0,L"UIA_LabeledByPropertyId");
    local_13d0 = &local_1b40;
    local_1b40 = 0x7542;
    local_13c8 = &local_13c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1884,
               (bool *)&local_13d0);
    if (local_13c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_13a0,L"UIA_IsPasswordPropertyId");
    local_13b0 = &local_1b3c;
    local_1b3c = 0x7543;
    local_13a8 = &local_13a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1884 + 4),
               (bool *)&local_13b0);
    if (local_13a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1380,L"UIA_NativeWindowHandlePropertyId");
    local_1390 = &local_1b38;
    local_1b38 = 0x7544;
    local_1388 = &local_1380;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_187c,
               (bool *)&local_1390);
    if (local_1380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1380.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1360,L"UIA_ItemTypePropertyId");
    local_1370 = &local_1b34;
    local_1b34 = 0x7545;
    local_1368 = &local_1360;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_187c + 4),
               (bool *)&local_1370);
    if (local_1360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1360.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1340,L"UIA_IsOffscreenPropertyId");
    local_1350 = &local_1b30;
    local_1b30 = 0x7546;
    local_1348 = &local_1340;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1874,
               (bool *)&local_1350);
    if (local_1340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1340.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1320,L"UIA_OrientationPropertyId");
    local_1330 = &local_1b2c;
    local_1b2c = 0x7547;
    local_1328 = &local_1320;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1874 + 4),
               (bool *)&local_1330);
    if (local_1320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1320.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1300,L"UIA_FrameworkIdPropertyId");
    local_1310 = &local_1b28;
    local_1b28 = 0x7548;
    local_1308 = &local_1300;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_186c,
               (bool *)&local_1310);
    if (local_1300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1300.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_12e0,L"UIA_IsRequiredForFormPropertyId");
    local_12f0 = &local_1b24;
    local_1b24 = 0x7549;
    local_12e8 = &local_12e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_186c + 4),
               (bool *)&local_12f0);
    if (local_12e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_12c0,L"UIA_ItemStatusPropertyId");
    local_12d0 = &local_1b20;
    local_1b20 = 0x754a;
    local_12c8 = &local_12c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1864,
               (bool *)&local_12d0);
    if (local_12c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_12a0,L"UIA_IsDockPatternAvailablePropertyId");
    local_12b0 = &local_1b1c;
    local_1b1c = 0x754b;
    local_12a8 = &local_12a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1864 + 4),
               (bool *)&local_12b0);
    if (local_12a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1280,L"UIA_IsExpandCollapsePatternAvailablePropertyId");
    local_1290 = &local_1b18;
    local_1b18 = 0x754c;
    local_1288 = &local_1280;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_185c,
               (bool *)&local_1290);
    if (local_1280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1280.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1260,L"UIA_IsGridItemPatternAvailablePropertyId");
    local_1270 = &local_1b14;
    local_1b14 = 0x754d;
    local_1268 = &local_1260;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_185c + 4),
               (bool *)&local_1270);
    if (local_1260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1260.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1240,L"UIA_IsGridPatternAvailablePropertyId");
    local_1250 = &local_1b10;
    local_1b10 = 0x754e;
    local_1248 = &local_1240;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1854,
               (bool *)&local_1250);
    if (local_1240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1240.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1220,L"UIA_IsInvokePatternAvailablePropertyId");
    local_1230 = &local_1b0c;
    local_1b0c = 0x754f;
    local_1228 = &local_1220;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1854 + 4),
               (bool *)&local_1230);
    if (local_1220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1220.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1200,L"UIA_IsMultipleViewPatternAvailablePropertyId");
    local_1210 = &local_1b08;
    local_1b08 = 0x7550;
    local_1208 = &local_1200;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_184c,
               (bool *)&local_1210);
    if (local_1200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1200.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_11e0,L"UIA_IsRangeValuePatternAvailablePropertyId");
    local_11f0 = &local_1b04;
    local_1b04 = 0x7551;
    local_11e8 = &local_11e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_184c + 4),
               (bool *)&local_11f0);
    if (local_11e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_11c0,L"UIA_IsScrollPatternAvailablePropertyId");
    local_11d0 = &local_1b00;
    local_1b00 = 0x7552;
    local_11c8 = &local_11c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1844,
               (bool *)&local_11d0);
    if (local_11c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_11a0,L"UIA_IsScrollItemPatternAvailablePropertyId");
    local_11b0 = &local_1afc;
    local_1afc = 0x7553;
    local_11a8 = &local_11a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1844 + 4),
               (bool *)&local_11b0);
    if (local_11a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1180,L"UIA_IsSelectionItemPatternAvailablePropertyId");
    local_1190 = &local_1af8;
    local_1af8 = 0x7554;
    local_1188 = &local_1180;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_183c,
               (bool *)&local_1190);
    if (local_1180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1180.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1160,L"UIA_IsSelectionPatternAvailablePropertyId");
    local_1170 = &local_1af4;
    local_1af4 = 0x7555;
    local_1168 = &local_1160;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_183c + 4),
               (bool *)&local_1170);
    if (local_1160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1160.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1140,L"UIA_IsTablePatternAvailablePropertyId");
    local_1150 = &local_1af0;
    local_1af0 = 0x7556;
    local_1148 = &local_1140;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1834,
               (bool *)&local_1150);
    if (local_1140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1140.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1120,L"UIA_IsTableItemPatternAvailablePropertyId");
    local_1130 = &local_1aec;
    local_1aec = 0x7557;
    local_1128 = &local_1120;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1834 + 4),
               (bool *)&local_1130);
    if (local_1120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1120.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1100,L"UIA_IsTextPatternAvailablePropertyId");
    local_1110 = &local_1ae8;
    local_1ae8 = 0x7558;
    local_1108 = &local_1100;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_182c,
               (bool *)&local_1110);
    if (local_1100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1100.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_10e0,L"UIA_IsTogglePatternAvailablePropertyId");
    local_10f0 = &local_1ae4;
    local_1ae4 = 0x7559;
    local_10e8 = &local_10e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_182c + 4),
               (bool *)&local_10f0);
    if (local_10e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_10c0,L"UIA_IsTransformPatternAvailablePropertyId");
    local_10d0 = &local_1ae0;
    local_1ae0 = 0x755a;
    local_10c8 = &local_10c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1824,
               (bool *)&local_10d0);
    if (local_10c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_10a0,L"UIA_IsValuePatternAvailablePropertyId");
    local_10b0 = &local_1adc;
    local_1adc = 0x755b;
    local_10a8 = &local_10a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1824 + 4),
               (bool *)&local_10b0);
    if (local_10a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1080,L"UIA_IsWindowPatternAvailablePropertyId");
    local_1090 = &local_1ad8;
    local_1ad8 = 0x755c;
    local_1088 = &local_1080;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_181c,
               (bool *)&local_1090);
    if (local_1080.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1080.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1060,L"UIA_ValueValuePropertyId");
    local_1070 = &local_1ad4;
    local_1ad4 = 0x755d;
    local_1068 = &local_1060;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_181c + 4),
               (bool *)&local_1070);
    if (local_1060.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1060.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1040,L"UIA_ValueIsReadOnlyPropertyId");
    local_1050 = &local_1ad0;
    local_1ad0 = 0x755e;
    local_1048 = &local_1040;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1814,
               (bool *)&local_1050);
    if (local_1040.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1040.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1020,L"UIA_RangeValueValuePropertyId");
    local_1030 = &local_1acc;
    local_1acc = 0x755f;
    local_1028 = &local_1020;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1814 + 4),
               (bool *)&local_1030);
    if (local_1020.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1020.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1000,L"UIA_RangeValueIsReadOnlyPropertyId");
    local_1010 = &local_1ac8;
    local_1ac8 = 0x7560;
    local_1008 = &local_1000;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_180c,
               (bool *)&local_1010);
    if (local_1000.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1000.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_fe0,L"UIA_RangeValueMinimumPropertyId");
    local_ff0 = &local_1ac4;
    local_1ac4 = 0x7561;
    local_fe8 = &local_fe0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_180c + 4),
               (bool *)&local_ff0);
    if (local_fe0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fe0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_fc0,L"UIA_RangeValueMaximumPropertyId");
    local_fd0 = &local_1ac0;
    local_1ac0 = 0x7562;
    local_fc8 = &local_fc0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1804,
               (bool *)&local_fd0);
    if (local_fc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fc0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_fa0,L"UIA_RangeValueLargeChangePropertyId");
    local_fb0 = &local_1abc;
    local_1abc = 0x7563;
    local_fa8 = &local_fa0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1804 + 4),
               (bool *)&local_fb0);
    if (local_fa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fa0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_f80,L"UIA_RangeValueSmallChangePropertyId");
    local_f90 = &local_1ab8;
    local_1ab8 = 0x7564;
    local_f88 = &local_f80;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17fc,
               (bool *)&local_f90);
    if (local_f80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f80.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_f60,L"UIA_ScrollHorizontalScrollPercentPropertyId");
    local_f70 = &local_1ab4;
    local_1ab4 = 0x7565;
    local_f68 = &local_f60;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17fc + 4),
               (bool *)&local_f70);
    if (local_f60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f60.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_f40,L"UIA_ScrollHorizontalViewSizePropertyId");
    local_f50 = &local_1ab0;
    local_1ab0 = 0x7566;
    local_f48 = &local_f40;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17f4,
               (bool *)&local_f50);
    if (local_f40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f40.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_f20,L"UIA_ScrollVerticalScrollPercentPropertyId");
    local_f30 = &local_1aac;
    local_1aac = 0x7567;
    local_f28 = &local_f20;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17f4 + 4),
               (bool *)&local_f30);
    if (local_f20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f20.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_f00,L"UIA_ScrollVerticalViewSizePropertyId");
    local_f10 = &local_1aa8;
    local_1aa8 = 0x7568;
    local_f08 = &local_f00;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17ec,
               (bool *)&local_f10);
    if (local_f00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f00.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_ee0,L"UIA_ScrollHorizontallyScrollablePropertyId");
    local_ef0 = &local_1aa4;
    local_1aa4 = 0x7569;
    local_ee8 = &local_ee0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17ec + 4),
               (bool *)&local_ef0);
    if (local_ee0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ee0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_ec0,L"UIA_ScrollVerticallyScrollablePropertyId");
    local_ed0 = &local_1aa0;
    local_1aa0 = 0x756a;
    local_ec8 = &local_ec0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17e4,
               (bool *)&local_ed0);
    if (local_ec0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ec0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_ea0,L"UIA_SelectionSelectionPropertyId");
    local_eb0 = &local_1a9c;
    local_1a9c = 0x756b;
    local_ea8 = &local_ea0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17e4 + 4),
               (bool *)&local_eb0);
    if (local_ea0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ea0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_e80,L"UIA_SelectionCanSelectMultiplePropertyId");
    local_1a98 = 0x756c;
    local_e88 = &local_e80;
    local_e90 = &local_1a98;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17dc,
               (bool *)&local_e90);
    if (local_e80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e80.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_e60,L"UIA_SelectionIsSelectionRequiredPropertyId");
    local_e70 = &local_1a94;
    local_1a94 = 0x756d;
    local_e68 = &local_e60;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17dc + 4),
               (bool *)&local_e70);
    if (local_e60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e60.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_e40,L"UIA_GridRowCountPropertyId");
    local_e50 = &local_1a90;
    local_1a90 = 0x756e;
    local_e48 = &local_e40;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17d4,
               (bool *)&local_e50);
    if (local_e40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e40.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_e20,L"UIA_GridColumnCountPropertyId");
    local_e30 = &local_1a8c;
    local_1a8c = 0x756f;
    local_e28 = &local_e20;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17d4 + 4),
               (bool *)&local_e30);
    if (local_e20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e20.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_e00,L"UIA_GridItemRowPropertyId");
    local_e10 = &local_1a88;
    local_1a88 = 0x7570;
    local_e08 = &local_e00;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17cc,
               (bool *)&local_e10);
    if (local_e00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e00.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_de0,L"UIA_GridItemColumnPropertyId");
    local_df0 = &local_1a84;
    local_1a84 = 0x7571;
    local_de8 = &local_de0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17cc + 4),
               (bool *)&local_df0);
    if (local_de0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_de0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_dc0,L"UIA_GridItemRowSpanPropertyId");
    local_dd0 = &local_1a80;
    local_1a80 = 0x7572;
    local_dc8 = &local_dc0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17c4,
               (bool *)&local_dd0);
    if (local_dc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_dc0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_da0,L"UIA_GridItemColumnSpanPropertyId");
    local_db0 = &local_1a7c;
    local_1a7c = 0x7573;
    local_da8 = &local_da0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17c4 + 4),
               (bool *)&local_db0);
    if (local_da0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_da0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_d80,L"UIA_GridItemContainingGridPropertyId");
    local_d90 = &local_1a78;
    local_1a78 = 0x7574;
    local_d88 = &local_d80;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17bc,
               (bool *)&local_d90);
    if (local_d80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d80.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_d60,L"UIA_DockDockPositionPropertyId");
    local_d70 = &local_1a74;
    local_1a74 = 0x7575;
    local_d68 = &local_d60;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17bc + 4),
               (bool *)&local_d70);
    if (local_d60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d60.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_d40,L"UIA_ExpandCollapseExpandCollapseStatePropertyId");
    local_d50 = &local_1a70;
    local_1a70 = 0x7576;
    local_d48 = &local_d40;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17b4,
               (bool *)&local_d50);
    if (local_d40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d40.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_d20,L"UIA_MultipleViewCurrentViewPropertyId");
    local_d30 = &local_1a6c;
    local_1a6c = 0x7577;
    local_d28 = &local_d20;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17b4 + 4),
               (bool *)&local_d30);
    if (local_d20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d20.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_d00,L"UIA_MultipleViewSupportedViewsPropertyId");
    local_d10 = &local_1a68;
    local_1a68 = 0x7578;
    local_d08 = &local_d00;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17ac,
               (bool *)&local_d10);
    if (local_d00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d00.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_ce0,L"UIA_WindowCanMaximizePropertyId");
    local_cf0 = &local_1a64;
    local_1a64 = 0x7579;
    local_ce8 = &local_ce0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17ac + 4),
               (bool *)&local_cf0);
    if (local_ce0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ce0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_cc0,L"UIA_WindowCanMinimizePropertyId");
    local_cd0 = &local_1a60;
    local_1a60 = 0x757a;
    local_cc8 = &local_cc0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_17a4,
               (bool *)&local_cd0);
    if (local_cc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cc0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_ca0,L"UIA_WindowWindowVisualStatePropertyId");
    local_cb0 = &local_1a5c;
    local_1a5c = 0x757b;
    local_ca8 = &local_ca0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_17a4 + 4),
               (bool *)&local_cb0);
    if (local_ca0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ca0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_c80,L"UIA_WindowWindowInteractionStatePropertyId");
    local_c90 = &local_1a58;
    local_1a58 = 0x757c;
    local_c88 = &local_c80;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_179c,
               (bool *)&local_c90);
    if (local_c80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c80.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_c60,L"UIA_WindowIsModalPropertyId");
    local_c70 = &local_1a54;
    local_1a54 = 0x757d;
    local_c68 = &local_c60;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_179c + 4),
               (bool *)&local_c70);
    if (local_c60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c60.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_c40,L"UIA_WindowIsTopmostPropertyId");
    local_c50 = &local_1a50;
    local_1a50 = 0x757e;
    local_c48 = &local_c40;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1794,
               (bool *)&local_c50);
    if (local_c40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c40.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_c20,L"UIA_SelectionItemIsSelectedPropertyId");
    local_c30 = &local_1a4c;
    local_1a4c = 0x757f;
    local_c28 = &local_c20;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1794 + 4),
               (bool *)&local_c30);
    if (local_c20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c20.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_c00,L"UIA_SelectionItemSelectionContainerPropertyId");
    local_c10 = &local_1a48;
    local_1a48 = 0x7580;
    local_c08 = &local_c00;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_178c,
               (bool *)&local_c10);
    if (local_c00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c00.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_be0,L"UIA_TableRowHeadersPropertyId");
    local_bf0 = &local_1a44;
    local_1a44 = 0x7581;
    local_be8 = &local_be0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_178c + 4),
               (bool *)&local_bf0);
    if (local_be0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_be0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_bc0,L"UIA_TableColumnHeadersPropertyId");
    local_bd0 = &local_1a40;
    local_1a40 = 0x7582;
    local_bc8 = &local_bc0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1784,
               (bool *)&local_bd0);
    if (local_bc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bc0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_ba0,L"UIA_TableRowOrColumnMajorPropertyId");
    local_bb0 = &local_1a3c;
    local_1a3c = 0x7583;
    local_ba8 = &local_ba0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1784 + 4),
               (bool *)&local_bb0);
    if (local_ba0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ba0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_b80,L"UIA_TableItemRowHeaderItemsPropertyId");
    local_b90 = &local_1a38;
    local_1a38 = 0x7584;
    local_b88 = &local_b80;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_177c,
               (bool *)&local_b90);
    if (local_b80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b80.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_b60,L"UIA_TableItemColumnHeaderItemsPropertyId");
    local_b70 = &local_1a34;
    local_1a34 = 0x7585;
    local_b68 = &local_b60;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_177c + 4),
               (bool *)&local_b70);
    if (local_b60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b60.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_b40,L"UIA_ToggleToggleStatePropertyId");
    local_b50 = &local_1a30;
    local_1a30 = 0x7586;
    local_b48 = &local_b40;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1774,
               (bool *)&local_b50);
    if (local_b40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b40.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_b20,L"UIA_TransformCanMovePropertyId");
    local_b30 = &local_1a2c;
    local_1a2c = 0x7587;
    local_b28 = &local_b20;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1774 + 4),
               (bool *)&local_b30);
    if (local_b20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b20.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_b00,L"UIA_TransformCanResizePropertyId");
    local_b10 = &local_1a28;
    local_1a28 = 0x7588;
    local_b08 = &local_b00;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_176c,
               (bool *)&local_b10);
    if (local_b00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b00.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_ae0,L"UIA_TransformCanRotatePropertyId");
    local_af0 = &local_1a24;
    local_1a24 = 0x7589;
    local_ae8 = &local_ae0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_176c + 4),
               (bool *)&local_af0);
    if (local_ae0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ae0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_ac0,L"UIA_IsLegacyIAccessiblePatternAvailablePropertyId");
    local_ad0 = &local_1a20;
    local_1a20 = 0x758a;
    local_ac8 = &local_ac0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1764,
               (bool *)&local_ad0);
    if (local_ac0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ac0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_aa0,L"UIA_LegacyIAccessibleChildIdPropertyId");
    local_ab0 = &local_1a1c;
    local_1a1c = 0x758b;
    local_aa8 = &local_aa0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1764 + 4),
               (bool *)&local_ab0);
    if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_a80,L"UIA_LegacyIAccessibleNamePropertyId");
    local_a90 = &local_1a18;
    local_1a18 = 0x758c;
    local_a88 = &local_a80;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_175c,
               (bool *)&local_a90);
    if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a80.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_a60,L"UIA_LegacyIAccessibleValuePropertyId");
    local_a70 = &local_1a14;
    local_1a14 = 0x758d;
    local_a68 = &local_a60;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_175c + 4),
               (bool *)&local_a70);
    if (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a60.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_a40,L"UIA_LegacyIAccessibleDescriptionPropertyId");
    local_a50 = &local_1a10;
    local_1a10 = 0x758e;
    local_a48 = &local_a40;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1754,
               (bool *)&local_a50);
    if (local_a40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a40.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_a20,L"UIA_LegacyIAccessibleRolePropertyId");
    local_a30 = &local_1a0c;
    local_1a0c = 0x758f;
    local_a28 = &local_a20;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1754 + 4),
               (bool *)&local_a30);
    if (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a20.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_a00,L"UIA_LegacyIAccessibleStatePropertyId");
    local_a10 = &local_1a08;
    local_1a08 = 0x7590;
    local_a08 = &local_a00;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_174c,
               (bool *)&local_a10);
    if (local_a00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a00.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_9e0,L"UIA_LegacyIAccessibleHelpPropertyId");
    local_9f0 = &local_1a04;
    local_1a04 = 0x7591;
    local_9e8 = &local_9e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_174c + 4),
               (bool *)&local_9f0);
    if (local_9e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_9c0,L"UIA_LegacyIAccessibleKeyboardShortcutPropertyId");
    local_9d0 = &local_1a00;
    local_1a00 = 0x7592;
    local_9c8 = &local_9c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1744,
               (bool *)&local_9d0);
    if (local_9c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_9a0,L"UIA_LegacyIAccessibleSelectionPropertyId");
    local_9b0 = &local_19fc;
    local_19fc = 0x7593;
    local_9a8 = &local_9a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1744 + 4),
               (bool *)&local_9b0);
    if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_980,L"UIA_LegacyIAccessibleDefaultActionPropertyId");
    local_990 = &local_19f8;
    local_19f8 = 0x7594;
    local_988 = &local_980;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_173c,
               (bool *)&local_990);
    if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_980.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_960,L"UIA_AriaRolePropertyId");
    local_970 = &local_19f4;
    local_19f4 = 0x7595;
    local_968 = &local_960;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_173c + 4),
               (bool *)&local_970);
    if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_960.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_940,L"UIA_AriaPropertiesPropertyId");
    local_950 = &local_19f0;
    local_19f0 = 0x7596;
    local_948 = &local_940;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1734,
               (bool *)&local_950);
    if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_940.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_920,L"UIA_IsDataValidForFormPropertyId");
    local_930 = &local_19ec;
    local_19ec = 0x7597;
    local_928 = &local_920;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1734 + 4),
               (bool *)&local_930);
    if (local_920.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_920.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_900,L"UIA_ControllerForPropertyId");
    local_910 = &local_19e8;
    local_19e8 = 0x7598;
    local_908 = &local_900;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_172c,
               (bool *)&local_910);
    if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_900.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_8e0,L"UIA_DescribedByPropertyId");
    local_8f0 = &local_19e4;
    local_19e4 = 0x7599;
    local_8e8 = &local_8e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_172c + 4),
               (bool *)&local_8f0);
    if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_8c0,L"UIA_FlowsToPropertyId");
    local_8d0 = &local_19e0;
    local_19e0 = 0x759a;
    local_8c8 = &local_8c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1724,
               (bool *)&local_8d0);
    if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_8a0,L"UIA_ProviderDescriptionPropertyId");
    local_8b0 = &local_19dc;
    local_19dc = 0x759b;
    local_8a8 = &local_8a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1724 + 4),
               (bool *)&local_8b0);
    if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_880,L"UIA_IsItemContainerPatternAvailablePropertyId");
    local_890 = &local_19d8;
    local_19d8 = 0x759c;
    local_888 = &local_880;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_171c,
               (bool *)&local_890);
    if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_880.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_860,L"UIA_IsVirtualizedItemPatternAvailablePropertyId");
    local_870 = &local_19d4;
    local_19d4 = 0x759d;
    local_868 = &local_860;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_171c + 4),
               (bool *)&local_870);
    if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_860.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_840,L"UIA_IsSynchronizedInputPatternAvailablePropertyId");
    local_850 = &local_19d0;
    local_19d0 = 0x759e;
    local_848 = &local_840;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1714,
               (bool *)&local_850);
    if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_840.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_820,L"UIA_OptimizeForVisualContentPropertyId");
    local_830 = &local_19cc;
    local_19cc = 0x759f;
    local_828 = &local_820;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1714 + 4),
               (bool *)&local_830);
    if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_820.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_800,L"UIA_IsObjectModelPatternAvailablePropertyId");
    local_810 = &local_19c8;
    local_19c8 = 0x75a0;
    local_808 = &local_800;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_170c,
               (bool *)&local_810);
    if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_800.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_7e0,L"UIA_AnnotationAnnotationTypeIdPropertyId");
    local_7f0 = &local_19c4;
    local_19c4 = 0x75a1;
    local_7e8 = &local_7e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_170c + 4),
               (bool *)&local_7f0);
    if (local_7e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_7c0,L"UIA_AnnotationAnnotationTypeNamePropertyId");
    local_7d0 = &local_19c0;
    local_19c0 = 0x75a2;
    local_7c8 = &local_7c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1704,
               (bool *)&local_7d0);
    if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_7a0,L"UIA_AnnotationAuthorPropertyId");
    local_7b0 = &local_19bc;
    local_19bc = 0x75a3;
    local_7a8 = &local_7a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1704 + 4),
               (bool *)&local_7b0);
    if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_780,L"UIA_AnnotationDateTimePropertyId");
    local_790 = &local_19b8;
    local_19b8 = 0x75a4;
    local_788 = &local_780;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16fc,
               (bool *)&local_790);
    if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_780.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_760,L"UIA_AnnotationTargetPropertyId");
    local_770 = &local_19b4;
    local_19b4 = 0x75a5;
    local_768 = &local_760;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16fc + 4),
               (bool *)&local_770);
    if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_760.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_740,L"UIA_IsAnnotationPatternAvailablePropertyId");
    local_750 = &local_19b0;
    local_19b0 = 0x75a6;
    local_748 = &local_740;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16f4,
               (bool *)&local_750);
    if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_740.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_720,L"UIA_IsTextPattern2AvailablePropertyId");
    local_730 = &local_19ac;
    local_19ac = 0x75a7;
    local_728 = &local_720;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16f4 + 4),
               (bool *)&local_730);
    if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_720.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_700,L"UIA_StylesStyleIdPropertyId");
    local_710 = &local_19a8;
    local_19a8 = 0x75a8;
    local_708 = &local_700;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16ec,
               (bool *)&local_710);
    if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_700.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_6e0,L"UIA_StylesStyleNamePropertyId");
    local_6f0 = &local_19a4;
    local_19a4 = 0x75a9;
    local_6e8 = &local_6e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16ec + 4),
               (bool *)&local_6f0);
    if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_6c0,L"UIA_StylesFillColorPropertyId");
    local_6d0 = &local_19a0;
    local_19a0 = 0x75aa;
    local_6c8 = &local_6c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16e4,
               (bool *)&local_6d0);
    if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_6a0,L"UIA_StylesFillPatternStylePropertyId");
    local_6b0 = &local_199c;
    local_199c = 0x75ab;
    local_6a8 = &local_6a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16e4 + 4),
               (bool *)&local_6b0);
    if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_680,L"UIA_StylesShapePropertyId");
    local_690 = &local_1998;
    local_1998 = 0x75ac;
    local_688 = &local_680;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16dc,
               (bool *)&local_690);
    if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_680.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_660,L"UIA_StylesFillPatternColorPropertyId");
    local_670 = &local_1994;
    local_1994 = 0x75ad;
    local_668 = &local_660;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16dc + 4),
               (bool *)&local_670);
    if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_660.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_640,L"UIA_StylesExtendedPropertiesPropertyId");
    local_650 = &local_1990;
    local_1990 = 0x75ae;
    local_648 = &local_640;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16d4,
               (bool *)&local_650);
    if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_640.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_620,L"UIA_IsStylesPatternAvailablePropertyId");
    local_630 = &local_198c;
    local_198c = 0x75af;
    local_628 = &local_620;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16d4 + 4),
               (bool *)&local_630);
    if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_620.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_600,L"UIA_IsSpreadsheetPatternAvailablePropertyId");
    local_610 = &local_1988;
    local_1988 = 0x75b0;
    local_608 = &local_600;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16cc,
               (bool *)&local_610);
    if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_600.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_5e0,L"UIA_SpreadsheetItemFormulaPropertyId");
    local_5f0 = &local_1984;
    local_1984 = 0x75b1;
    local_5e8 = &local_5e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16cc + 4),
               (bool *)&local_5f0);
    if (local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_5c0,L"UIA_SpreadsheetItemAnnotationObjectsPropertyId");
    local_5d0 = &local_1980;
    local_1980 = 0x75b2;
    local_5c8 = &local_5c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16c4,
               (bool *)&local_5d0);
    if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_5a0,L"UIA_SpreadsheetItemAnnotationTypesPropertyId");
    local_5b0 = &local_197c;
    local_197c = 0x75b3;
    local_5a8 = &local_5a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16c4 + 4),
               (bool *)&local_5b0);
    if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_580,L"UIA_IsSpreadsheetItemPatternAvailablePropertyId");
    local_590 = &local_1978;
    local_1978 = 0x75b4;
    local_588 = &local_580;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16bc,
               (bool *)&local_590);
    if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_580.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_560,L"UIA_Transform2CanZoomPropertyId");
    local_570 = &local_1974;
    local_1974 = 0x75b5;
    local_568 = &local_560;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16bc + 4),
               (bool *)&local_570);
    if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_540,L"UIA_IsTransformPattern2AvailablePropertyId");
    local_550 = &local_1970;
    local_1970 = 0x75b6;
    local_548 = &local_540;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16b4,
               (bool *)&local_550);
    if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_540.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_520,L"UIA_LiveSettingPropertyId");
    local_530 = &local_196c;
    local_196c = 0x75b7;
    local_528 = &local_520;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16b4 + 4),
               (bool *)&local_530);
    if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_500,L"UIA_IsTextChildPatternAvailablePropertyId");
    local_510 = &local_1968;
    local_1968 = 0x75b8;
    local_508 = &local_500;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16ac,
               (bool *)&local_510);
    if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_500.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_4e0,L"UIA_IsDragPatternAvailablePropertyId");
    local_4f0 = &local_1964;
    local_1964 = 0x75b9;
    local_4e8 = &local_4e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16ac + 4),
               (bool *)&local_4f0);
    if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_4c0,L"UIA_DragIsGrabbedPropertyId");
    local_4d0 = &local_1960;
    local_1960 = 0x75ba;
    local_4c8 = &local_4c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_16a4,
               (bool *)&local_4d0);
    if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_4a0,L"UIA_DragDropEffectPropertyId");
    local_4b0 = &local_195c;
    local_195c = 0x75bb;
    local_4a8 = &local_4a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_16a4 + 4),
               (bool *)&local_4b0);
    if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_480,L"UIA_DragDropEffectsPropertyId");
    local_490 = &local_1958;
    local_1958 = 0x75bc;
    local_488 = &local_480;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_169c,
               (bool *)&local_490);
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_460,L"UIA_IsDropTargetPatternAvailablePropertyId");
    local_470 = &local_1954;
    local_1954 = 0x75bd;
    local_468 = &local_460;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_169c + 4),
               (bool *)&local_470);
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_440,L"UIA_DropTargetDropTargetEffectPropertyId");
    local_450 = &local_1950;
    local_1950 = 0x75be;
    local_448 = &local_440;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1694,
               (bool *)&local_450);
    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_420,L"UIA_DropTargetDropTargetEffectsPropertyId");
    local_430 = &local_194c;
    local_194c = 0x75bf;
    local_428 = &local_420;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1694 + 4),
               (bool *)&local_430);
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_400,L"UIA_DragGrabbedItemsPropertyId");
    local_410 = &local_1948;
    local_1948 = 0x75c0;
    local_408 = &local_400;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_168c,
               (bool *)&local_410);
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_3e0,L"UIA_Transform2ZoomLevelPropertyId");
    local_3f0 = &local_1944;
    local_1944 = 0x75c1;
    local_3e8 = &local_3e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_168c + 4),
               (bool *)&local_3f0);
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_3c0,L"UIA_Transform2ZoomMinimumPropertyId");
    local_3d0 = &local_1940;
    local_1940 = 0x75c2;
    local_3c8 = &local_3c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1684,
               (bool *)&local_3d0);
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_3a0,L"UIA_Transform2ZoomMaximumPropertyId");
    local_3b0 = &local_193c;
    local_193c = 0x75c3;
    local_3a8 = &local_3a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1684 + 4),
               (bool *)&local_3b0);
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_380,L"UIA_FlowsFromPropertyId");
    local_390 = &local_1938;
    local_1938 = 0x75c4;
    local_388 = &local_380;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_167c,
               (bool *)&local_390);
    if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_360,L"UIA_IsTextEditPatternAvailablePropertyId");
    local_370 = &local_1934;
    local_1934 = 0x75c5;
    local_368 = &local_360;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_167c + 4),
               (bool *)&local_370);
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_340,L"UIA_IsPeripheralPropertyId");
    local_350 = &local_1930;
    local_1930 = 0x75c6;
    local_348 = &local_340;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1674,
               (bool *)&local_350);
    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_320,L"UIA_IsCustomNavigationPatternAvailablePropertyId");
    local_330 = &local_192c;
    local_192c = 0x75c7;
    local_328 = &local_320;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1674 + 4),
               (bool *)&local_330);
    if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_300,L"UIA_PositionInSetPropertyId");
    local_310 = &local_1928;
    local_1928 = 0x75c8;
    local_308 = &local_300;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_166c,
               (bool *)&local_310);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_2e0,L"UIA_SizeOfSetPropertyId");
    local_2f0 = &local_1924;
    local_1924 = 0x75c9;
    local_2e8 = &local_2e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_166c + 4),
               (bool *)&local_2f0);
    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_2c0,L"UIA_LevelPropertyId");
    local_2d0 = &local_1920;
    local_1920 = 0x75ca;
    local_2c8 = &local_2c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1664,
               (bool *)&local_2d0);
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_2a0,L"UIA_AnnotationTypesPropertyId");
    local_2b0 = &local_191c;
    local_191c = 0x75cb;
    local_2a8 = &local_2a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1664 + 4),
               (bool *)&local_2b0);
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_280,L"UIA_AnnotationObjectsPropertyId");
    local_290 = &local_1918;
    local_1918 = 0x75cc;
    local_288 = &local_280;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_165c,
               (bool *)&local_290);
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_260,L"UIA_LandmarkTypePropertyId");
    local_270 = &local_1914;
    local_1914 = 0x75cd;
    local_268 = &local_260;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_165c + 4),
               (bool *)&local_270);
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_240,L"UIA_LocalizedLandmarkTypePropertyId");
    local_250 = &local_1910;
    local_1910 = 0x75ce;
    local_248 = &local_240;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1654,
               (bool *)&local_250);
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_220,L"UIA_FullDescriptionPropertyId");
    local_230 = &local_190c;
    local_190c = 0x75cf;
    local_228 = &local_220;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1654 + 4),
               (bool *)&local_230);
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_200,L"UIA_FillColorPropertyId");
    local_210 = &local_1908;
    local_1908 = 0x75d0;
    local_208 = &local_200;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_164c,
               (bool *)&local_210);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1e0,L"UIA_OutlineColorPropertyId");
    local_1f0 = &local_1904;
    local_1904 = 0x75d1;
    local_1e8 = &local_1e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_164c + 4),
               (bool *)&local_1f0);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1c0,L"UIA_FillTypePropertyId");
    local_1d0 = &local_1900;
    local_1900 = 0x75d2;
    local_1c8 = &local_1c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1644,
               (bool *)&local_1d0);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_1a0,L"UIA_VisualEffectsPropertyId");
    local_1b0 = &local_18fc;
    local_18fc = 0x75d3;
    local_1a8 = &local_1a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1644 + 4),
               (bool *)&local_1b0);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_180,L"UIA_OutlineThicknessPropertyId");
    local_190 = &local_18f8;
    local_18f8 = 0x75d4;
    local_188 = &local_180;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_163c,
               (bool *)&local_190);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_160,L"UIA_CenterPointPropertyId");
    local_170 = &local_18f4;
    local_18f4 = 0x75d5;
    local_168 = &local_160;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_163c + 4),
               (bool *)&local_170);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_140,L"UIA_RotationPropertyId");
    local_150 = &local_18f0;
    local_18f0 = 0x75d6;
    local_148 = &local_140;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1634,
               (bool *)&local_150);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_120,L"UIA_SizePropertyId");
    local_130 = &local_18ec;
    local_18ec = 0x75d7;
    local_128 = &local_120;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1634 + 4),
               (bool *)&local_130);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_100,L"UIA_IsSelectionPattern2AvailablePropertyId");
    local_110 = &local_18e8;
    local_18e8 = 0x75d8;
    local_108 = &local_100;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_162c,
               (bool *)&local_110);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_e0,L"UIA_Selection2FirstSelectedItemPropertyId");
    local_f0 = &local_18e4;
    local_18e4 = 0x75d9;
    local_e8 = &local_e0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_162c + 4),
               (bool *)&local_f0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_c0,L"UIA_Selection2LastSelectedItemPropertyId");
    local_d0 = &local_18e0;
    local_18e0 = 0x75da;
    local_c8 = &local_c0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1624,
               (bool *)&local_d0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_a0,L"UIA_Selection2CurrentSelectedItemPropertyId");
    local_b0 = &local_18dc;
    local_18dc = 0x75db;
    local_a8 = &local_a0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_1624 + 4),
               (bool *)&local_b0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_80,L"UIA_Selection2ItemCountPropertyId");
    local_90 = &local_18d8;
    local_18d8 = 0x75dc;
    local_88 = &local_80;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_161c,
               (bool *)&local_90);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_60,L"UIA_HeadingLevelPropertyId");
    local_70 = &local_18d4;
    local_18d4 = 0x75dd;
    local_68 = &local_60;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)(local_161c + 4),
               (bool *)&local_70);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_40,L"UIA_IsDialogPropertyId");
    local_50 = &local_18d0;
    local_18d0 = 0x75de;
    local_48 = &local_40;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&PropertyIdToStringMap,(TPairInitializer<int_&&,FString_&&> *)local_1614,
               (bool *)&local_50);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (PropertyIdToStringMap._8_4_ != PropertyIdToStringMap._52_4_) {
    lVar5 = 0x154ba5838;
    if (PropertyIdToStringMap._64_8_ != 0) {
      lVar5 = PropertyIdToStringMap._64_8_;
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)(PropertyIdToStringMap._72_4_ - 1 & param_1) * 4);
    while (iVar1 != -1) {
      piVar6 = (int *)((longlong)iVar1 * 0x20 + PropertyIdToStringMap._0_8_);
      if (*piVar6 == param_1) {
        if (piVar6 != (int *)0x0) goto LAB_1423fc96e;
        goto LAB_1423fc948;
      }
      iVar1 = piVar6[6];
    }
  }
  piVar6 = (int *)0x0;
LAB_1423fc948:
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
LAB_1423fc96e:
  FString::FString(__return_storage_ptr__,(FString *)(piVar6 + 2));
  return __return_storage_ptr__;
}

// PumpMessages @ 1423fcc10

void __thiscall GenericApplication::PumpMessages(GenericApplication *this,float param_1)

{
  return;
}

// RegisterConsoleCommandListener @ 1423fe170

void __thiscall
GenericApplication::RegisterConsoleCommandListener
          (GenericApplication *this,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  return;
}

// SendAnalytics @ 142403250

void __thiscall
GenericApplication::SendAnalytics(GenericApplication *this,IAnalyticsProvider *param_1)

{
  return;
}

// SetAccessibleMessageHandler @ 142403ba0

void __thiscall
GenericApplication::SetAccessibleMessageHandler
          (GenericApplication *this,TSharedRef<FGenericAccessibleMessageHandler,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericAccessibleMessageHandler *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
  (this->AccessibleMessageHandler).Object = pFVar2;
  (this->AccessibleMessageHandler).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetCapture @ 142403ed0

void __thiscall
GenericApplication::SetCapture(GenericApplication *this,TSharedPtr<FGenericWindow,1> *param_1)

{
  return;
}

// SetHighPrecisionMouseMode @ 142405090

void __thiscall
GenericApplication::SetHighPrecisionMouseMode
          (GenericApplication *this,bool param_1,TSharedPtr<FGenericWindow,1> *param_2)

{
  return;
}

// SetMessageHandler @ 142405340

void __thiscall
GenericApplication::SetMessageHandler
          (GenericApplication *this,TSharedRef<FGenericApplicationMessageHandler,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericApplicationMessageHandler *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->MessageHandler).SharedReferenceCount.ReferenceController;
  (this->MessageHandler).Object = pFVar2;
  (this->MessageHandler).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ShowSystemHelp @ 1424075b0

void __thiscall GenericApplication::ShowSystemHelp(GenericApplication *this)

{
  return;
}

// SplashScreenWindowProc @ 142407a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl SplashScreenWindowProc(HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  bool bVar1;
  LRESULT LVar2;
  HDC hdc;
  long64 lVar3;
  HFONT__ *h;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStackY_118 [32];
  tagRECT local_b8;
  tagPAINTSTRUCT local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (param_2 == 2) {
    PostQuitMessage(0);
  }
  else {
    if (param_2 != 0xf) {
      LVar2 = DefWindowProcW((HWND)param_1,param_2,param_3,param_4);
      return LVar2;
    }
    if (GSplashScreenBitmap != (HBITMAP__ *)0x0) {
      hdc = BeginPaint((HWND)param_1,&local_a8);
      uVar5 = 0;
      DrawStateW(hdc,(HBRUSH)0x0,(DRAWSTATEPROC)0x0,(LPARAM)GSplashScreenBitmap,0,0,0,0,0,4);
      EnterCriticalSection((LPCRITICAL_SECTION)&GSplashScreenSynchronizationObject);
      do {
        uVar4 = (uint)uVar5;
        bVar1 = FText::IsEmpty(GSplashScreenText + uVar5);
        if (!bVar1) {
          h = GSplashScreenNormalTextFontHandle;
          if ((1 < uVar4) && (h = GSplashScreenSmallTextFontHandle, uVar4 == 3)) {
            h = GSplashScreenTitleTextFontHandle;
          }
          SelectObject(hdc,h);
          SetTextAlign(hdc,0);
          SetBkColor(hdc,0);
          SetBkMode(hdc,1);
          GetClientRect((HWND)param_1,&local_b8);
                    /* WARNING: Could not recover jumptable at 0x000142407bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar3 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                            switchD_142407bbd::switchdataD_142407d60))
                            (switchD_1501dbc7b::caseD_1.e_magic +
                             switchD_142407bbd::switchdataD_142407d60);
          return lVar3;
        }
        uVar5 = (ulonglong)(uVar4 + 1);
      } while ((int)(uVar4 + 1) < 4);
      LeaveCriticalSection((LPCRITICAL_SECTION)&GSplashScreenSynchronizationObject);
      EndPaint((HWND)param_1,&local_a8);
    }
  }
  return 0;
}

// StartSetSplashText @ 142407d90

void __cdecl StartSetSplashText(Type param_1,wchar_t *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText local_18;
  
  bVar1 = FText::IsEmpty(GSplashScreenText + (int)param_1);
  if (bVar1) {
    pFVar2 = FText::FromString(&local_18,param_2);
    FText::operator=(GSplashScreenText + (int)param_1,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// StartSplashScreenThread @ 142407e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl StartSplashScreenThread(void *param_1)

{
  code *pcVar1;
  float fVar2;
  int nWidth;
  int nHeight;
  bool bVar3;
  ATOM AVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  BOOL BVar8;
  HFONT__ *h;
  FString *pFVar9;
  wchar_t *lpString;
  undefined1 auStackY_258 [32];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  WNDCLASSW local_1d8;
  LARGE_INTEGER local_188;
  tagMSG local_180;
  LOGFONTW local_148;
  LOGFONTW local_e8;
  LOGFONTW local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1d8.lpfnWndProc = SplashScreenWindowProc;
  local_1d8.cbClsExtra = 0;
  local_1d8.cbWndExtra = 0;
  local_1d8.hInstance = (HINSTANCE)hInstance;
  local_1d8.style = 3;
  local_1d8.hIcon = LoadIconW((HINSTANCE)hInstance,(LPCWSTR)0x7b);
  if (local_1d8.hIcon == (HICON)0x0) {
    local_1d8.hIcon = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  }
  local_1d8.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  local_1d8.hbrBackground = GetStockObject(0);
  local_1d8.lpszMenuName = (LPCWSTR)0x0;
  local_1d8.lpszClassName = L"SplashScreenClass";
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  AVar4 = RegisterClassW(&local_1d8);
  if (AVar4 == 0) {
    SetEvent(GSplashWindowCreationEvent);
    return 0;
  }
  GSplashScreenBitmap = LoadSplashBitmap();
  if (GSplashScreenBitmap != (HBITMAP__ *)0x0) {
    GetObjectW(GSplashScreenBitmap,0x20,&local_1f8);
    nWidth = local_1f8._4_4_;
    nHeight = (int)uStack_1f0;
    iVar5 = GetSystemMetrics(0);
    iVar6 = GetSystemMetrics(1);
    GSplashScreenWnd =
         (HWND__ *)
         CreateWindowExW(0x80,local_1d8.lpszClassName,L"SplashScreen",0x80000000,
                         (iVar5 - nWidth) / 2,(iVar6 - nHeight) / 2,nWidth,nHeight,(HWND)0x0,
                         (HMENU)0x0,(HINSTANCE)hInstance,(LPVOID)0x0);
  }
  SetEvent(GSplashWindowCreationEvent);
  if (GSplashScreenWnd != (HWND__ *)0x0) {
    lpString = L"";
    if ((GSplashScreenBitmap == (HBITMAP__ *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("GSplashScreenBitmap",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsPlatformSplash.cpp"
                           ,0x1dd,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    h = GetStockObject(0x11);
    local_e8.lfFaceName[0x1a] = L'\0';
    local_e8.lfFaceName[0x1b] = L'\0';
    local_e8.lfFaceName[0x1c] = L'\0';
    local_e8.lfFaceName[0x1d] = L'\0';
    local_e8.lfFaceName[0x1e] = L'\0';
    local_e8.lfFaceName[0x1f] = L'\0';
    local_e8.lfHeight = 0;
    local_e8.lfWidth = 0;
    local_e8.lfEscapement = 0;
    local_e8.lfOrientation = 0;
    local_e8.lfWeight = 0;
    local_e8.lfItalic = '\0';
    local_e8.lfUnderline = '\0';
    local_e8.lfStrikeOut = '\0';
    local_e8.lfCharSet = '\0';
    local_e8.lfOutPrecision = '\0';
    local_e8.lfClipPrecision = '\0';
    local_e8.lfQuality = '\0';
    local_e8.lfPitchAndFamily = '\0';
    local_e8.lfFaceName[0] = L'\0';
    local_e8.lfFaceName[1] = L'\0';
    local_e8.lfFaceName[2] = L'\0';
    local_e8.lfFaceName[3] = L'\0';
    local_e8.lfFaceName[4] = L'\0';
    local_e8.lfFaceName[5] = L'\0';
    local_e8.lfFaceName[6] = L'\0';
    local_e8.lfFaceName[7] = L'\0';
    local_e8.lfFaceName[8] = L'\0';
    local_e8.lfFaceName[9] = L'\0';
    local_e8.lfFaceName[10] = L'\0';
    local_e8.lfFaceName[0xb] = L'\0';
    local_e8.lfFaceName[0xc] = L'\0';
    local_e8.lfFaceName[0xd] = L'\0';
    local_e8.lfFaceName[0xe] = L'\0';
    local_e8.lfFaceName[0xf] = L'\0';
    local_e8.lfFaceName[0x10] = L'\0';
    local_e8.lfFaceName[0x11] = L'\0';
    local_e8.lfFaceName[0x12] = L'\0';
    local_e8.lfFaceName[0x13] = L'\0';
    local_e8.lfFaceName[0x14] = L'\0';
    local_e8.lfFaceName[0x15] = L'\0';
    local_e8.lfFaceName[0x16] = L'\0';
    local_e8.lfFaceName[0x17] = L'\0';
    local_e8.lfFaceName[0x18] = L'\0';
    local_e8.lfFaceName[0x19] = L'\0';
    GetObjectW(h,0x5c,&local_e8);
    local_e8.lfHeight = 0xb;
    local_e8.lfQuality = '\x05';
    GSplashScreenSmallTextFontHandle = (HFONT__ *)CreateFontIndirectW(&local_e8);
    if (GSplashScreenSmallTextFontHandle == (HFONT__ *)0x0) {
      GSplashScreenSmallTextFontHandle = h;
    }
    local_88.lfFaceName[0x1a] = L'\0';
    local_88.lfFaceName[0x1b] = L'\0';
    local_88.lfFaceName[0x1c] = L'\0';
    local_88.lfFaceName[0x1d] = L'\0';
    local_88.lfHeight = 0;
    local_88.lfWidth = 0;
    local_88.lfEscapement = 0;
    local_88.lfOrientation = 0;
    local_88.lfFaceName[0x1e] = L'\0';
    local_88.lfFaceName[0x1f] = L'\0';
    local_88.lfWeight = 0;
    local_88.lfItalic = '\0';
    local_88.lfUnderline = '\0';
    local_88.lfStrikeOut = '\0';
    local_88.lfCharSet = '\0';
    local_88.lfOutPrecision = '\0';
    local_88.lfClipPrecision = '\0';
    local_88.lfQuality = '\0';
    local_88.lfPitchAndFamily = '\0';
    local_88.lfFaceName[0] = L'\0';
    local_88.lfFaceName[1] = L'\0';
    local_88.lfFaceName[2] = L'\0';
    local_88.lfFaceName[3] = L'\0';
    local_88.lfFaceName[4] = L'\0';
    local_88.lfFaceName[5] = L'\0';
    local_88.lfFaceName[6] = L'\0';
    local_88.lfFaceName[7] = L'\0';
    local_88.lfFaceName[8] = L'\0';
    local_88.lfFaceName[9] = L'\0';
    local_88.lfFaceName[10] = L'\0';
    local_88.lfFaceName[0xb] = L'\0';
    local_88.lfFaceName[0xc] = L'\0';
    local_88.lfFaceName[0xd] = L'\0';
    local_88.lfFaceName[0xe] = L'\0';
    local_88.lfFaceName[0xf] = L'\0';
    local_88.lfFaceName[0x10] = L'\0';
    local_88.lfFaceName[0x11] = L'\0';
    local_88.lfFaceName[0x12] = L'\0';
    local_88.lfFaceName[0x13] = L'\0';
    local_88.lfFaceName[0x14] = L'\0';
    local_88.lfFaceName[0x15] = L'\0';
    local_88.lfFaceName[0x16] = L'\0';
    local_88.lfFaceName[0x17] = L'\0';
    local_88.lfFaceName[0x18] = L'\0';
    local_88.lfFaceName[0x19] = L'\0';
    GetObjectW(h,0x5c,&local_88);
    local_88.lfHeight = 0xc;
    local_88.lfQuality = '\x05';
    GSplashScreenNormalTextFontHandle = (HFONT__ *)CreateFontIndirectW(&local_88);
    if (GSplashScreenNormalTextFontHandle == (HFONT__ *)0x0) {
      GSplashScreenNormalTextFontHandle = h;
    }
    local_148.lfFaceName[0x1a] = L'\0';
    local_148.lfFaceName[0x1b] = L'\0';
    local_148.lfFaceName[0x1c] = L'\0';
    local_148.lfFaceName[0x1d] = L'\0';
    local_148.lfHeight = 0;
    local_148.lfWidth = 0;
    local_148.lfEscapement = 0;
    local_148.lfOrientation = 0;
    local_148.lfFaceName[0x1e] = L'\0';
    local_148.lfFaceName[0x1f] = L'\0';
    local_148.lfWeight = 0;
    local_148.lfItalic = '\0';
    local_148.lfUnderline = '\0';
    local_148.lfStrikeOut = '\0';
    local_148.lfCharSet = '\0';
    local_148.lfOutPrecision = '\0';
    local_148.lfClipPrecision = '\0';
    local_148.lfQuality = '\0';
    local_148.lfPitchAndFamily = '\0';
    local_148.lfFaceName[0] = L'\0';
    local_148.lfFaceName[1] = L'\0';
    local_148.lfFaceName[2] = L'\0';
    local_148.lfFaceName[3] = L'\0';
    local_148.lfFaceName[4] = L'\0';
    local_148.lfFaceName[5] = L'\0';
    local_148.lfFaceName[6] = L'\0';
    local_148.lfFaceName[7] = L'\0';
    local_148.lfFaceName[8] = L'\0';
    local_148.lfFaceName[9] = L'\0';
    local_148.lfFaceName[10] = L'\0';
    local_148.lfFaceName[0xb] = L'\0';
    local_148.lfFaceName[0xc] = L'\0';
    local_148.lfFaceName[0xd] = L'\0';
    local_148.lfFaceName[0xe] = L'\0';
    local_148.lfFaceName[0xf] = L'\0';
    local_148.lfFaceName[0x10] = L'\0';
    local_148.lfFaceName[0x11] = L'\0';
    local_148.lfFaceName[0x12] = L'\0';
    local_148.lfFaceName[0x13] = L'\0';
    local_148.lfFaceName[0x14] = L'\0';
    local_148.lfFaceName[0x15] = L'\0';
    local_148.lfFaceName[0x16] = L'\0';
    local_148.lfFaceName[0x17] = L'\0';
    local_148.lfFaceName[0x18] = L'\0';
    local_148.lfFaceName[0x19] = L'\0';
    GetObjectW(h,0x5c,&local_148);
    local_148.lfHeight = 0x1c;
    local_148.lfWeight = 700;
    local_148.lfQuality = '\x05';
    GSplashScreenTitleTextFontHandle = (HFONT__ *)CreateFontIndirectW(&local_148);
    if (GSplashScreenTitleTextFontHandle == (HFONT__ *)0x0) {
      GSplashScreenTitleTextFontHandle = h;
    }
    GSplashScreenTextRects[3].left = 10;
    GSplashScreenTextRects[1].left = 10;
    GSplashScreenTextRects[0].top = (int)uStack_1f0 + -0x14;
    GSplashScreenTextRects[0].bottom = (int)uStack_1f0;
    GSplashScreenTextRects[0].right = local_1f8._4_4_ + -0x14;
    GSplashScreenTextRects[3].top = (int)uStack_1f0 + -0x2d;
    GSplashScreenTextRects[2].bottom = (int)uStack_1f0 + -6;
    GSplashScreenTextRects[1].top = (int)uStack_1f0 + -0x28;
    GSplashScreenTextRects[2].top = (int)uStack_1f0 + -0x10;
    GSplashScreenTextRects[2].left = local_1f8._4_4_ + -0xb4;
    GSplashScreenTextRects[0].left = 10;
    GSplashScreenTextRects[1].right = GSplashScreenTextRects[0].right;
    GSplashScreenTextRects[1].bottom = GSplashScreenTextRects[0].top;
    GSplashScreenTextRects[2].right = GSplashScreenTextRects[0].right;
    GSplashScreenTextRects[3].right = GSplashScreenTextRects[0].right;
    GSplashScreenTextRects[3].bottom = GSplashScreenTextRects[2].bottom;
    pFVar9 = FText::ToString(&GSplashScreenAppName);
    if ((pFVar9->Data).ArrayNum != 0) {
      lpString = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    SetWindowTextW((HWND)GSplashScreenWnd,lpString);
    ShowWindow((HWND)GSplashScreenWnd,5);
    UpdateWindow((HWND)GSplashScreenWnd);
    QueryPerformanceCounter(&local_188);
    fVar2 = __real_3c888889;
    do {
      BVar8 = PeekMessageW(&local_180,(HWND)0x0,0,0,1);
      if (BVar8 != 0) {
        TranslateMessage(&local_180);
        DispatchMessageW(&local_180);
        if (local_180.message == 0x12) goto LAB_142408272;
      }
      FWindowsPlatformProcess::Sleep(fVar2);
    } while( true );
  }
LAB_1424082c7:
  UnregisterClassW(local_1d8.lpszClassName,(HINSTANCE)hInstance);
  return 0;
LAB_142408272:
  FWindowsPlatformProcess::Sleep(fVar2);
  BVar8 = DeleteObject(GSplashScreenBitmap);
  if ((BVar8 == 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4858346763330781804>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsPlatformSplash.cpp"
                         ,0x26c,"DeleteObject(GSplashScreenBitmap)"), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  GSplashScreenBitmap = (HBITMAP__ *)0x0;
  goto LAB_1424082c7;
}

// SupportsSystemHelp @ 1424089a0

bool __thiscall GenericApplication::SupportsSystemHelp(GenericApplication *this)

{
  return false;
}

// Tick @ 142409e10

void __thiscall GenericApplication::Tick(GenericApplication *this,float param_1)

{
  return;
}

// TryCalculatePopupWindowPosition @ 14240a120

bool __thiscall
GenericApplication::TryCalculatePopupWindowPosition
          (GenericApplication *this,FPlatformRect *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,Type param_4,TVector2<double> *param_5)

{
  return false;
}

// WidgetTypeToControlType @ 14240c6e0

ulong __cdecl WidgetTypeToControlType(TSharedRef<IAccessibleWidget,1> *param_1)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  ulong *puVar5;
  longlong lVar6;
  
  bVar3 = (**(code **)(*(longlong *)param_1->Object + 0x60))();
  if (FWindowsUIAManager::WidgetTypeToWindowsTypeMap._8_4_ !=
      FWindowsUIAManager::WidgetTypeToWindowsTypeMap._52_4_) {
    lVar6 = 0x154ba5918;
    if (FWindowsUIAManager::WidgetTypeToWindowsTypeMap._64_8_ != 0) {
      lVar6 = FWindowsUIAManager::WidgetTypeToWindowsTypeMap._64_8_;
    }
    iVar1 = *(int *)(lVar6 + ((ulonglong)(FWindowsUIAManager::WidgetTypeToWindowsTypeMap._72_4_ - 1)
                             & (ulonglong)bVar3) * 4);
    while (iVar1 != -1) {
      pbVar4 = (byte *)((longlong)iVar1 * 0x10 +
                       FWindowsUIAManager::WidgetTypeToWindowsTypeMap._0_8_);
      if (*pbVar4 == bVar3) {
        puVar5 = (ulong *)(pbVar4 + 4);
        if (pbVar4 == (byte *)0x0) {
          puVar5 = (ulong *)0x0;
        }
        if (puVar5 != (ulong *)0x0) {
          uVar2 = *puVar5;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->SharedReferenceCount).ReferenceController);
          return uVar2;
        }
        break;
      }
      iVar1 = *(int *)(pbVar4 + 8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return 0xc369;
}

// WidgetTypeToLocalizedString @ 14240c7a0

FString * __cdecl
WidgetTypeToLocalizedString
          (FString *__return_storage_ptr__,TSharedRef<IAccessibleWidget,1> *param_1)

{
  int iVar1;
  byte bVar2;
  FString *pFVar3;
  byte *pbVar4;
  FText *this;
  longlong lVar5;
  
  bVar2 = (**(code **)(*(longlong *)param_1->Object + 0x60))();
  if (FWindowsUIAManager::WidgetTypeToTextMap._8_4_ !=
      FWindowsUIAManager::WidgetTypeToTextMap._52_4_) {
    lVar5 = 0x154ba5968;
    if (FWindowsUIAManager::WidgetTypeToTextMap._64_8_ != 0) {
      lVar5 = FWindowsUIAManager::WidgetTypeToTextMap._64_8_;
    }
    iVar1 = *(int *)(lVar5 + ((ulonglong)(FWindowsUIAManager::WidgetTypeToTextMap._72_4_ - 1) &
                             (ulonglong)bVar2) * 4);
    while (iVar1 != -1) {
      pbVar4 = (byte *)((longlong)iVar1 * 0x20 + FWindowsUIAManager::WidgetTypeToTextMap._0_8_);
      if (*pbVar4 == bVar2) {
        this = (FText *)(pbVar4 + 8);
        if (pbVar4 == (byte *)0x0) {
          this = (FText *)0x0;
        }
        if (this != (FText *)0x0) goto LAB_14240c841;
        break;
      }
      iVar1 = *(int *)(pbVar4 + 0x18);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&CustomControlTypeName,L"SlateAccessibility",L"ControlTypeCustom",L"custom");
    atexit(`WidgetTypeToLocalizedString'::__l7::
           _dynamic_atexit_destructor_for__CustomControlTypeName__);
    _Init_thread_footer(&_TSS0);
  }
  this = &CustomControlTypeName;
LAB_14240c841:
  pFVar3 = FText::ToString(this);
  FString::FString(__return_storage_ptr__,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// WindowsApplication_WndProc @ 14240c8e0

long64 __cdecl
WindowsApplication_WndProc(HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 lVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8717070949721044914>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x84e,"IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  iVar3 = FWindowsApplication::ProcessMessage(WindowsApplication,param_1,param_2,param_3,param_4);
  return (longlong)iVar3;
}

// WriteFStringToResults @ 14240cb50

void __cdecl WriteFStringToResults(wchar_t *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  memset(param_1,0,0x208);
  iVar5 = 0;
  lVar6 = 0;
  while( true ) {
    iVar3 = (param_2->Data).ArrayNum;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    iVar3 = 0x103;
    if (iVar4 < 0x103) {
      iVar3 = iVar4;
    }
    if (iVar3 <= iVar5) break;
    if ((iVar5 < 0) || (iVar4 <= iVar5)) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar5 = iVar5 + 1;
    *param_1 = *(wchar_t *)((param_2->Data).AllocatorInstance.Data + lVar6);
    param_1 = param_1 + 1;
    lVar6 = lVar6 + 2;
  }
  return;
}

// IMPLEMENT_MODULE_ApplicationCore @ 14240e860

void __cdecl IMPLEMENT_MODULE_ApplicationCore(void)

{
  return;
}

// CVarAllowVirtualKeyboard'' @ 150358070

void __cdecl
`dynamic_atexit_destructor_for_'FGenericPlatformApplicationMisc::CVarAllowVirtualKeyboard__(void)

{
  FGenericPlatformApplicationMisc::CVarAllowVirtualKeyboard._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGenericPlatformApplicationMisc::CVarAllowVirtualKeyboard);
  return;
}

// CVarEnableHighDPIAwareness'' @ 150358090

void __cdecl
`dynamic_atexit_destructor_for_'FGenericPlatformApplicationMisc::CVarEnableHighDPIAwareness__(void)

{
  FGenericPlatformApplicationMisc::CVarEnableHighDPIAwareness._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGenericPlatformApplicationMisc::CVarEnableHighDPIAwareness);
  return;
}

// OnInputDeviceConnectionChange'' @ 1503580b0

void __cdecl
`dynamic_atexit_destructor_for_'IPlatformInputDeviceMapper::OnInputDeviceConnectionChange__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._8_8_,
             IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._16_4_);
  if (IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._8_8_ != 0) {
    FMemory::Free((void *)IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &IPlatformInputDeviceMapper::OnInputDeviceConnectionChange);
  return;
}

// OnInputDevicePairingChange'' @ 1503580f0

void __cdecl
`dynamic_atexit_destructor_for_'IPlatformInputDeviceMapper::OnInputDevicePairingChange__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IPlatformInputDeviceMapper::OnInputDevicePairingChange._8_8_,
             IPlatformInputDeviceMapper::OnInputDevicePairingChange._16_4_);
  if (IPlatformInputDeviceMapper::OnInputDevicePairingChange._8_8_ != 0) {
    FMemory::Free((void *)IPlatformInputDeviceMapper::OnInputDevicePairingChange._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&IPlatformInputDeviceMapper::OnInputDevicePairingChange
            );
  return;
}

// WidgetTypeToTextMap'' @ 150358130

void __cdecl `dynamic_atexit_destructor_for_'FWindowsUIAManager::WidgetTypeToTextMap__(void)

{
  FWindowsUIAManager::WidgetTypeToTextMap._72_4_ = 0;
  if (FWindowsUIAManager::WidgetTypeToTextMap._64_8_ != 0) {
    FMemory::Free((void *)FWindowsUIAManager::WidgetTypeToTextMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAccessibleWidgetType,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAccessibleWidgetType,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FWindowsUIAManager::WidgetTypeToTextMap);
  return;
}

// WidgetTypeToWindowsTypeMap'' @ 150358170

void __cdecl `dynamic_atexit_destructor_for_'FWindowsUIAManager::WidgetTypeToWindowsTypeMap__(void)

{
  FWindowsUIAManager::WidgetTypeToWindowsTypeMap._72_4_ = 0;
  if (FWindowsUIAManager::WidgetTypeToWindowsTypeMap._64_8_ != 0) {
    FMemory::Free((void *)FWindowsUIAManager::WidgetTypeToWindowsTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAccessibleWidgetType,unsigned_long>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAccessibleWidgetType,unsigned_long>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FWindowsUIAManager::WidgetTypeToWindowsTypeMap);
  return;
}

// `dynamic_atexit_destructor_for_'AllowAccessibilityRef'' @ 1503581b0

void __cdecl _dynamic_atexit_destructor_for__AllowAccessibilityRef__(void)

{
  AllowAccessibilityRef._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&AllowAccessibilityRef);
  return;
}

// `dynamic_atexit_destructor_for_'CFramePace'' @ 1503581d0

void __cdecl _dynamic_atexit_destructor_for__CFramePace__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CFramePace);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowTriggerDynamicReleaseDeadZoneCustomization'' @ 1503581f0

void __cdecl
DynamicTriggerReleaseCVars::
_dynamic_atexit_destructor_for__CVarAllowTriggerDynamicReleaseDeadZoneCustomization__(void)

{
  CVarAllowTriggerDynamicReleaseDeadZoneCustomization._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowTriggerDynamicReleaseDeadZoneCustomization);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity'' @ 150358210

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::
_dynamic_atexit_destructor_for__CVarDisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity__
          (void)

{
  CVarDisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDisableForceMaxTouchpadSensitivity_SetMaxTouchpadSensitivity
            );
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableForceMaxTouchpadSensitivity_SetTouchpadParameters'' @ 150358230

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::
_dynamic_atexit_destructor_for__CVarDisableForceMaxTouchpadSensitivity_SetTouchpadParameters__(void)

{
  CVarDisableForceMaxTouchpadSensitivity_SetTouchpadParameters._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDisableForceMaxTouchpadSensitivity_SetTouchpadParameters);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableFirstTouchEvent'' @ 150358250

void __cdecl _dynamic_atexit_destructor_for__CVarEnableFirstTouchEvent__(void)

{
  CVarEnableFirstTouchEvent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableFirstTouchEvent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableRawInputSimulationOverRDP'' @ 150358270

void __cdecl _dynamic_atexit_destructor_for__CVarEnableRawInputSimulationOverRDP__(void)

{
  CVarEnableRawInputSimulationOverRDP._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableRawInputSimulationOverRDP);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableSafeZoneOverrides'' @ 150358290

void __cdecl _dynamic_atexit_destructor_for__CVarEnableSafeZoneOverrides__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableSafeZoneOverrides);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableWindowMessageProfilerScopes'' @ 1503582b0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableWindowMessageProfilerScopes__(void)

{
  CVarEnableWindowMessageProfilerScopes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableWindowMessageProfilerScopes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceMaxTouchpadSensitivity'' @ 1503582d0

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::
_dynamic_atexit_destructor_for__CVarForceMaxTouchpadSensitivity__(void)

{
  CVarForceMaxTouchpadSensitivity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceMaxTouchpadSensitivity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceRawInputSimulation'' @ 1503582f0

void __cdecl _dynamic_atexit_destructor_for__CVarForceRawInputSimulation__(void)

{
  CVarForceRawInputSimulation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceRawInputSimulation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinimumRePress'' @ 150358310

void __cdecl DynamicTriggerReleaseCVars::_dynamic_atexit_destructor_for__CVarMinimumRePress__(void)

{
  CVarMinimumRePress._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMinimumRePress);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPreventDuplicateMouseEventsForTouch'' @ 150358330

void __cdecl _dynamic_atexit_destructor_for__CVarPreventDuplicateMouseEventsForTouch__(void)

{
  CVarPreventDuplicateMouseEventsForTouch._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPreventDuplicateMouseEventsForTouch);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRePressFactor'' @ 150358350

void __cdecl DynamicTriggerReleaseCVars::_dynamic_atexit_destructor_for__CVarRePressFactor__(void)

{
  CVarRePressFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRePressFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRestoreTouchpadSensitivityFromRegistry'' @ 150358370

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::
_dynamic_atexit_destructor_for__CVarRestoreTouchpadSensitivityFromRegistry__(void)

{
  CVarRestoreTouchpadSensitivityFromRegistry._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRestoreTouchpadSensitivityFromRegistry);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSafeZoneRatioBottom'' @ 150358390

void __cdecl _dynamic_atexit_destructor_for__CVarSafeZoneRatioBottom__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSafeZoneRatioBottom);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSafeZoneRatioLeft'' @ 1503583b0

void __cdecl _dynamic_atexit_destructor_for__CVarSafeZoneRatioLeft__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSafeZoneRatioLeft);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSafeZoneRatioRight'' @ 1503583d0

void __cdecl _dynamic_atexit_destructor_for__CVarSafeZoneRatioRight__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSafeZoneRatioRight);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSafeZoneRatioTop'' @ 1503583f0

void __cdecl _dynamic_atexit_destructor_for__CVarSafeZoneRatioTop__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSafeZoneRatioTop);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSink'' @ 150358410

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::_dynamic_atexit_destructor_for__CVarSink__(void)

{
  CVarSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'CVarTriggerDynamicReleaseDeadZone'' @ 150358430

void __cdecl
DynamicTriggerReleaseCVars::_dynamic_atexit_destructor_for__CVarTriggerDynamicReleaseDeadZone__
          (void)

{
  CVarTriggerDynamicReleaseDeadZone._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTriggerDynamicReleaseDeadZone);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseInvisibleCursorForNoneCursorType'' @ 150358450

void __cdecl _dynamic_atexit_destructor_for__CVarUseInvisibleCursorForNoneCursorType__(void)

{
  CVarUseInvisibleCursorForNoneCursorType._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUseInvisibleCursorForNoneCursorType);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseWorkerThreadForRawInput'' @ 150358470

void __cdecl
UE::WindowsApplication::RawInputThread::
_dynamic_atexit_destructor_for__CVarUseWorkerThreadForRawInput__(void)

{
  CVarUseWorkerThreadForRawInput._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseWorkerThreadForRawInput);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWriteSavedTouchpadSensitivityToRegistry'' @ 150358490

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::
_dynamic_atexit_destructor_for__CVarWriteSavedTouchpadSensitivityToRegistry__(void)

{
  CVarWriteSavedTouchpadSensitivityToRegistry._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarWriteSavedTouchpadSensitivityToRegistry);
  return;
}

// `dynamic_atexit_destructor_for_'CompanyName'' @ 1503584b0

void __cdecl
`UE::WindowsApplication::TouchpadSensitivity::GetRegistryStoreIdAndSection'::__l10::
_dynamic_atexit_destructor_for__CompanyName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CompanyName.Data.AllocatorInstance.Data;
  if (CompanyName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CompanyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CustomControlTypeName'' @ 1503584d0

void __cdecl
`WidgetTypeToLocalizedString'::__l7::_dynamic_atexit_destructor_for__CustomControlTypeName__(void)

{
  if (CustomControlTypeName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503584df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*CustomControlTypeName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Filename'' @ 1503584f0

void __cdecl
`FWindowsConsoleOutputDevice2::GetConfigFilename'::__l2::_dynamic_atexit_destructor_for__Filename__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Filename.Data.AllocatorInstance.Data;
  if (Filename.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCustomSplashScreenFileName'' @ 150358510

void __cdecl _dynamic_atexit_destructor_for__GCustomSplashScreenFileName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GCustomSplashScreenFileName.Data.AllocatorInstance.Data;
  if (GCustomSplashScreenFileName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GCustomSplashScreenFileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GSafeZoneConsoleVariables'' @ 150358530

void __cdecl _dynamic_atexit_destructor_for__GSafeZoneConsoleVariables__(void)

{
  GSafeZoneConsoleVariables.DebugActionZoneRatioCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GSafeZoneConsoleVariables.DebugActionZoneRatioCVar);
  GSafeZoneConsoleVariables.DebugSafeZoneRatioCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GSafeZoneConsoleVariables);
  return;
}

// `dynamic_atexit_destructor_for_'GSplashScreenAppName'' @ 150358570

void __cdecl _dynamic_atexit_destructor_for__GSplashScreenAppName__(void)

{
  if (GSplashScreenAppName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035857f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*GSplashScreenAppName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GSplashScreenFileName'' @ 150358590

void __cdecl _dynamic_atexit_destructor_for__GSplashScreenFileName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GSplashScreenFileName.Data.AllocatorInstance.Data;
  if (GSplashScreenFileName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GSplashScreenFileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GSplashScreenSynchronizationObject'' @ 1503585b0

void __cdecl _dynamic_atexit_destructor_for__GSplashScreenSynchronizationObject__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503585b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GSplashScreenSynchronizationObject);
  return;
}

// `dynamic_atexit_destructor_for_'GSplashScreenText'' @ 1503585d0

void __cdecl _dynamic_atexit_destructor_for__GSplashScreenText__(void)

{
  void **ppvVar1;
  longlong lVar2;
  FWindowsRecursiveMutex *pFVar3;
  
  pFVar3 = &GSplashScreenSynchronizationObject;
  lVar2 = 4;
  do {
    ppvVar1 = (void **)((longlong)pFVar3 + -0x10);
    pFVar3 = (FWindowsRecursiveMutex *)((longlong)pFVar3 + -0x10);
    lVar2 = lVar2 + -1;
    if (*ppvVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*ppvVar1 + 0x10))();
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'IMNStrings'' @ 150358620

void __cdecl
`FWindowsApplication::ProcessMessage'::__l5::_dynamic_atexit_destructor_for__IMNStrings__(void)

{
  IMNStrings._72_4_ = 0;
  if (IMNStrings._64_8_ != 0) {
    FMemory::Free((void *)IMNStrings._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&IMNStrings);
  return;
}

// `dynamic_atexit_destructor_for_'IMRStrings'' @ 150358660

void __cdecl
`FWindowsApplication::ProcessMessage'::__l5::_dynamic_atexit_destructor_for__IMRStrings__(void)

{
  IMRStrings._72_4_ = 0;
  if (IMRStrings._64_8_ != 0) {
    FMemory::Free((void *)IMRStrings._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&IMRStrings);
  return;
}

// `dynamic_atexit_destructor_for_'KBMInputHardwareName'' @ 1503586a0

void __cdecl UE::WindowsInput::_dynamic_atexit_destructor_for__KBMInputHardwareName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = KBMInputHardwareName.Data.AllocatorInstance.Data;
  if (KBMInputHardwareName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (KBMInputHardwareName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogAccessibility'' @ 1503586c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAccessibility__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAccessibility);
  return;
}

// `dynamic_atexit_destructor_for_'LogFramePacer'' @ 1503586e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogFramePacer__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogFramePacer);
  return;
}

// `dynamic_atexit_destructor_for_'LogGenericPlatformWindow'' @ 150358700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGenericPlatformWindow__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGenericPlatformWindow);
  return;
}

// `dynamic_atexit_destructor_for_'LogInputDeviceMapper'' @ 150358720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInputDeviceMapper__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInputDeviceMapper);
  return;
}

// `dynamic_atexit_destructor_for_'LogNullPlatformWindow'' @ 150358740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNullPlatformWindow__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNullPlatformWindow);
  return;
}

// `dynamic_atexit_destructor_for_'LogSynthBenchmark'' @ 150358760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSynthBenchmark__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSynthBenchmark);
  return;
}

// `dynamic_atexit_destructor_for_'LogTextStoreACP'' @ 150358780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTextStoreACP__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTextStoreACP);
  return;
}

// `dynamic_atexit_destructor_for_'LogWindowsDesktop'' @ 1503587a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWindowsDesktop__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWindowsDesktop);
  return;
}

// `dynamic_atexit_destructor_for_'LogWindowsRawInputThread'' @ 1503587c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::WindowsApplication::RawInputThread::_dynamic_atexit_destructor_for__LogWindowsRawInputThread__
          (void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWindowsRawInputThread);
  return;
}

// `dynamic_atexit_destructor_for_'LogWindowsTextInputMethodSystem'' @ 1503587e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWindowsTextInputMethodSystem__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  return;
}

// `dynamic_atexit_destructor_for_'LogWindowsTouchpad'' @ 150358800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::WindowsApplication::TouchpadSensitivity::_dynamic_atexit_destructor_for__LogWindowsTouchpad__
          (void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWindowsTouchpad);
  return;
}

// `dynamic_atexit_destructor_for_'ProjectName'' @ 150358820

void __cdecl
`UE::WindowsApplication::TouchpadSensitivity::GetRegistryStoreIdAndSection'::__l3::
_dynamic_atexit_destructor_for__ProjectName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ProjectName.Data.AllocatorInstance.Data;
  if (ProjectName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ProjectName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PropertyIdToStringMap'' @ 150358840

void __cdecl
`PropertyIdToString'::__l2::_dynamic_atexit_destructor_for__PropertyIdToStringMap__(void)

{
  PropertyIdToStringMap._72_4_ = 0;
  if (PropertyIdToStringMap._64_8_ != 0) {
    FMemory::Free((void *)PropertyIdToStringMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&PropertyIdToStringMap);
  return;
}

// `dynamic_atexit_destructor_for_'ScopeStack'' @ 150358880

void __cdecl
`UE::InputDeviceScope::Private::GetScopeStack'::__l2::_dynamic_atexit_destructor_for__ScopeStack__
          (void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xde0);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 1503588b0

void __cdecl
`FWindowsPlatformApplicationMisc::GetErrorOutputDevice'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 1503588d0

void __cdecl
`UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  TNode *pTVar1;
  
  pTVar1 = `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
           ::__l2::Singleton.MouseInputs.Tail;
  while (pTVar1 != (TNode *)0x0) {
    `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
    ::__l2::Singleton.MouseInputs.Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x20);
    pTVar1 = `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
             ::__l2::Singleton.MouseInputs.Tail;
  }
  `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
  ::__l2::Singleton.MouseInputs.Tail = pTVar1;
  `private:_static_class_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable&___ptr64___cdecl_UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance(void)'
  ::__l2::Singleton._0_8_ = &___7FRunnable__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'TouchInputHardwareName'' @ 150358920

void __cdecl UE::WindowsInput::_dynamic_atexit_destructor_for__TouchInputHardwareName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TouchInputHardwareName.Data.AllocatorInstance.Data;
  if (TouchInputHardwareName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TouchInputHardwareName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'WindowsMessageStrings'' @ 150358940

void __cdecl
`FWindowsApplication::ProcessMessage'::__l5::_dynamic_atexit_destructor_for__WindowsMessageStrings__
          (void)

{
  WindowsMessageStrings._72_4_ = 0;
  if (WindowsMessageStrings._64_8_ != 0) {
    FMemory::Free((void *)WindowsMessageStrings._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&WindowsMessageStrings);
  return;
}

