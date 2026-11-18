// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 260

// CurrentApplication'' @ 140f41bf0

void __cdecl `dynamic_initializer_for_'FSlateApplication::CurrentApplication__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSlateApplication::CurrentApplication__);
  return;
}

// FeatureName'' @ 140f41c10

void __cdecl `dynamic_initializer_for_'IPlatformTextFieldFactory::FeatureName__(void)

{
  ::FName::FName(&IPlatformTextFieldFactory::FeatureName,"PlatformTextField");
  return;
}

// Name'' @ 140f41c30

void __cdecl `dynamic_initializer_for_'FEventRouter::FBubblePolicy::Name__(void)

{
  ::FName::FName(&FEventRouter::FBubblePolicy::Name,"Bubble");
  return;
}

// Name'' @ 140f41c50

void __cdecl `dynamic_initializer_for_'FEventRouter::FDirectPolicy::Name__(void)

{
  ::FName::FName(&FEventRouter::FDirectPolicy::Name,"Direct");
  return;
}

// Name'' @ 140f41c70

void __cdecl `dynamic_initializer_for_'FEventRouter::FToLeafmostPolicy::Name__(void)

{
  ::FName::FName(&FEventRouter::FToLeafmostPolicy::Name,"ToLeafmost");
  return;
}

// Name'' @ 140f41c90

void __cdecl `dynamic_initializer_for_'FEventRouter::FTunnelPolicy::Name__(void)

{
  ::FName::FName(&FEventRouter::FTunnelPolicy::Name,"Tunnel");
  return;
}

// `dynamic_initializer_for_'AllowSlateToSleep'' @ 140f41cb0

void __cdecl _dynamic_initializer_for__AllowSlateToSleep__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&AllowSlateToSleep,L"Slate.AllowSlateToSleep",local_res8,
             L"Whether Slate should go to sleep when there are no active timers and the user is idle"
             ,0);
  atexit(_dynamic_atexit_destructor_for__AllowSlateToSleep__);
  return;
}

// `dynamic_initializer_for_'CVarEnableTooltips'' @ 140f41d00

void __cdecl _dynamic_initializer_for__CVarEnableTooltips__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableTooltips,L"Slate.EnableTooltips",&bEnableTooltips,
             L"Whether to allow tooltips to spawn at all.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableTooltips__);
  return;
}

// `dynamic_initializer_for_'CVarRequireFocusForGamepadInput'' @ 140f41d50

void __cdecl _dynamic_initializer_for__CVarRequireFocusForGamepadInput__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRequireFocusForGamepadInput,L"Slate.RequireFocusForGamepadInput",
             &bRequireFocusForGamepadInput,
             L"Whether gamepad input should be ignored by the engine if the application is not currently active"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRequireFocusForGamepadInput__);
  return;
}

// `dynamic_initializer_for_'CVarSlateDismissMenuStacksOnFocusLost'' @ 140f41da0

void __cdecl _dynamic_initializer_for__CVarSlateDismissMenuStacksOnFocusLost__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarSlateDismissMenuStacksOnFocusLost,L"Slate.DismissMenuStacksOnFocusLost",true,
             L"Should open menus disappear when whey lose focus?",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateDismissMenuStacksOnFocusLost__);
  return;
}

// `dynamic_initializer_for_'CVarSlateEnableGamepadEditorNavigation'' @ 140f41de0

void __cdecl _dynamic_initializer_for__CVarSlateEnableGamepadEditorNavigation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateEnableGamepadEditorNavigation,L"Slate.EnableGamepadEditorNavigation",
             &GSlateEnableGamepadEditorNavigation,
             L"True implies we allow gamepad navigation outside of the game viewport.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateEnableGamepadEditorNavigation__);
  return;
}

// `dynamic_initializer_for_'CVarSlateInputMotionFiresUserInteractionEvents'' @ 140f41e30

void __cdecl _dynamic_initializer_for__CVarSlateInputMotionFiresUserInteractionEvents__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateInputMotionFiresUserInteractionEvents,
             L"Slate.Input.MotionFiresUserInteractionEvents",
             &GSlateInputMotionFiresUserInteractionEvents,
             L"If this is false, LastUserInteractionTimeUpdateEvent events won\'t be fired based on motion input, and LastInteractionTime won\'t be updated\nSome motion devices report small tiny changes constantly without filtering, so motion input is unhelpful for determining user activity"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateInputMotionFiresUserInteractionEvents__);
  return;
}

// `dynamic_initializer_for_'CVarSlateInputPointerUpFiresPointerMoveForDragDrop'' @ 140f41e80

void __cdecl _dynamic_initializer_for__CVarSlateInputPointerUpFiresPointerMoveForDragDrop__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateInputPointerUpFiresPointerMoveForDragDrop,
             L"Slate.Input.PointerUpFiresPointerMoveForDragDrop",
             &GSlateInputPointerUpFiresPointerMoveForDragDrop,
             L"When true, a synthetic pointer move event is fired from pointer up to ensure drag events are called if necessary on any widgets before OnDrop."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateInputPointerUpFiresPointerMoveForDragDrop__);
  return;
}

// `dynamic_initializer_for_'CVarSlateSkipWidgetDrawingInHeadlessMode'' @ 140f41ed0

void __cdecl _dynamic_initializer_for__CVarSlateSkipWidgetDrawingInHeadlessMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateSkipWidgetDrawingInHeadlessMode,L"Slate.SkipWidgetDrawingInHeadlessMode",
             &GSlateSkipWidgetDrawingInHeadlessMode,
             L"Skip drawing the widgets when running without rendering (e.g. -nullrhi). On by default, disable if there\'s non-visual logic in widget\'s Tick function (as this also skips ticking them)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateSkipWidgetDrawingInHeadlessMode__);
  return;
}

// `dynamic_initializer_for_'CVarSlateTraceNavigationConfig'' @ 140f41f20

void __cdecl _dynamic_initializer_for__CVarSlateTraceNavigationConfig__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateTraceNavigationConfig,L"Slate.Debug.TraceNavigationConfig",
             &GSlateTraceNavigationConfig,
             L"True enables tracing of navigation config & callstack to log.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateTraceNavigationConfig__);
  return;
}

// `dynamic_initializer_for_'CVarSlateTransformFullscreenMouseInput'' @ 140f41f70

void __cdecl _dynamic_initializer_for__CVarSlateTransformFullscreenMouseInput__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateTransformFullscreenMouseInput,L"Slate.Transform.FullscreenMouseInput",
             &TransformFullscreenMouseInput,
             L"Set true to transform mouse input to account for viewport stretching at fullscreen resolutions not natively supported by the monitor."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateTransformFullscreenMouseInput__);
  return;
}

// `dynamic_initializer_for_'CVarSlateUseFixedDeltaTime'' @ 140f41fc0

void __cdecl _dynamic_initializer_for__CVarSlateUseFixedDeltaTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateUseFixedDeltaTime,L"Slate.UseFixedDeltaTime",&GSlateUseFixedDeltaTime,
             L"True means we use a constant delta time on every widget tick.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateUseFixedDeltaTime__);
  return;
}

// `dynamic_initializer_for_'CVarSlateVerifyParentChildrenRelationship'' @ 140f42010

void __cdecl _dynamic_initializer_for__CVarSlateVerifyParentChildrenRelationship__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateVerifyParentChildrenRelationship,L"Slate.VerifyParentChildrenRelationship",
             &GSlateVerifyParentChildrenRelationship,
             L"Every tick, verify that a widget has only one parent.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateVerifyParentChildrenRelationship__);
  return;
}

// `dynamic_initializer_for_'CVarSlateVerifyWidgetLayerId'' @ 140f42060

void __cdecl _dynamic_initializer_for__CVarSlateVerifyWidgetLayerId__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateVerifyWidgetLayerId,L"Slate.VerifyWidgetLayerId",&GSlateVerifyWidgetLayerId,
             L"Every tick, verify that widgets have a LayerId range that fits with their siblings and their parent."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateVerifyWidgetLayerId__);
  return;
}

// `dynamic_initializer_for_'EmptyTouchKeySet'' @ 140f420b0

void __cdecl SlateDefs::_dynamic_initializer_for__EmptyTouchKeySet__(void)

{
  atexit(_dynamic_atexit_destructor_for__EmptyTouchKeySet__);
  return;
}

// `dynamic_initializer_for_'GlobalInvalidateCommand'' @ 140f420d0

void __cdecl _dynamic_initializer_for__GlobalInvalidateCommand__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = HandleGlobalInvalidateCVarTriggered;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GlobalInvalidateCommand,L"Slate.TriggerInvalidate",
             L"Triggers a global invalidate of all widgets",
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
  atexit(_dynamic_atexit_destructor_for__GlobalInvalidateCommand__);
  return;
}

// `dynamic_initializer_for_'MenuStackPushDebuggingInfo'' @ 140f42210

void __cdecl MenuStackInternal::_dynamic_initializer_for__MenuStackPushDebuggingInfo__(void)

{
  atexit(_dynamic_atexit_destructor_for__MenuStackPushDebuggingInfo__);
  return;
}

// `dynamic_initializer_for_'SleepBufferPostInput'' @ 140f42230

void __cdecl _dynamic_initializer_for__SleepBufferPostInput__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&SleepBufferPostInput,L"Slate.SleepBufferPostInput",local_res8,
             L"The amount of time that must pass without any user action before Slate is put to sleep (provided that there are no active timers)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__SleepBufferPostInput__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessAnalogInput'' @ 140f42280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessAnalogInput__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessAnalogInput == (FThreadSafeStaticStat<FStat_STAT_ProcessAnalogInput>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessAnalogInput");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessAnalogInput,*pFVar1,
               L"ProcessAnalogInput","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessKeyChar'' @ 140f42310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessKeyChar__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessKeyChar == (FThreadSafeStaticStat<FStat_STAT_ProcessKeyChar>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessKeyChar");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessKeyChar,*pFVar1,L"ProcessKeyChar",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessKeyChar_Call_OnKeyChar'' @ 140f423a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessKeyChar_Call_OnKeyChar__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessKeyChar_Call_OnKeyChar ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessKeyChar_Call_OnKeyChar>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessKeyChar_Call_OnKeyChar");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessKeyChar_Call_OnKeyChar,*pFVar1,
               L"ProcessKeyChar (call OnKeyChar)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessKeyChar_RouteAlongFocusPath'' @ 140f42430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessKeyChar_RouteAlongFocusPath__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessKeyChar_RouteAlongFocusPath ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessKeyChar_RouteAlongFocusPath>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessKeyChar_RouteAlongFocusPath");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessKeyChar_RouteAlongFocusPath,*pFVar1
               ,L"ProcessKeyChar (route focus)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessKeyDown'' @ 140f424c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessKeyDown__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessKeyDown == (FThreadSafeStaticStat<FStat_STAT_ProcessKeyDown>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessKeyDown");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessKeyDown,*pFVar1,L"ProcessKeyDown",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessKeyUp'' @ 140f42550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessKeyUp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessKeyUp == (FThreadSafeStaticStat<FStat_STAT_ProcessKeyUp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessKeyUp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessKeyUp,*pFVar1,L"ProcessKeyUp",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessMouseButtonDoubleClick'' @ 140f425e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessMouseButtonDoubleClick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessMouseButtonDoubleClick ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessMouseButtonDoubleClick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessMouseButtonDoubleClick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessMouseButtonDoubleClick,*pFVar1,
               L"ProcessMouseButtonDoubleClick","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessMouseButtonDown'' @ 140f42670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessMouseButtonDown__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessMouseButtonDown ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessMouseButtonDown>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessMouseButtonDown");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessMouseButtonDown,*pFVar1,
               L"ProcessMouseButtonDown","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessMouseButtonUp'' @ 140f42700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessMouseButtonUp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessMouseButtonUp ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessMouseButtonUp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessMouseButtonUp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessMouseButtonUp,*pFVar1,
               L"ProcessMouseButtonUp","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessMouseMove'' @ 140f42790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessMouseMove__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessMouseMove == (FThreadSafeStaticStat<FStat_STAT_ProcessMouseMove>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessMouseMove");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessMouseMove,*pFVar1,
               L"ProcessMouseMove","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessMouseWheelGesture'' @ 140f42820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessMouseWheelGesture__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessMouseWheelGesture ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessMouseWheelGesture>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessMouseWheelGesture");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessMouseWheelGesture,*pFVar1,
               L"ProcessMouseWheelGesture","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShowVirtualKeyboard'' @ 140f428b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShowVirtualKeyboard__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShowVirtualKeyboard == (FThreadSafeStaticStat<FStat_STAT_ShowVirtualKeyboard>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_ShowVirtualKeyboard");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShowVirtualKeyboard,*pFVar1,
               L"ShowVirtualKeyboard","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateApplicationInput'' @ 140f42940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateApplicationInput__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateApplicationInput ==
      (FThreadSafeStaticStat<FStat_STAT_SlateApplicationInput>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateApplicationInput");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateApplicationInput,*pFVar1,
               L"Slate App Input","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateDrawWindowTime'' @ 140f429d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateDrawWindowTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateDrawWindowTime == (FThreadSafeStaticStat<FStat_STAT_SlateDrawWindowTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateDrawWindowTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateDrawWindowTime,*pFVar1,
               L"Draw Window And Children Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateMessageTick'' @ 140f42a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateMessageTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateMessageTick == (FThreadSafeStaticStat<FStat_STAT_SlateMessageTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateMessageTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateMessageTick,*pFVar1,
               L"Message Tick Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlatePreTickEvent'' @ 140f42af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlatePreTickEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlatePreTickEvent == (FThreadSafeStaticStat<FStat_STAT_SlatePreTickEvent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlatePreTickEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlatePreTickEvent,*pFVar1,L"PreTickEvent",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateTickRegisteredWidgets'' @ 140f42b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateTickRegisteredWidgets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateTickRegisteredWidgets ==
      (FThreadSafeStaticStat<FStat_STAT_SlateTickRegisteredWidgets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateTickRegisteredWidgets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTickRegisteredWidgets,*pFVar1,
               L"TickRegisteredWidgets","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateTickTime'' @ 140f42c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateTickTime == (FThreadSafeStaticStat<FStat_STAT_SlateTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTickTime,*pFVar1,
               L"Total Slate Tick Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TargetFrameRateForResponsiveness'' @ 140f42ca0

void __cdecl _dynamic_initializer_for__TargetFrameRateForResponsiveness__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x23;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&TargetFrameRateForResponsiveness,L"Slate.TargetFrameRateForResponsiveness",local_res8,
             L"Minimum sustained average frame rate required before we consider the editor to be \"responsive\" for a smooth UI experience"
             ,0);
  atexit(_dynamic_atexit_destructor_for__TargetFrameRateForResponsiveness__);
  return;
}

// `dynamic_initializer_for_'ThrottleWhenMouseIsMoving'' @ 140f42cf0

void __cdecl _dynamic_initializer_for__ThrottleWhenMouseIsMoving__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&ThrottleWhenMouseIsMoving,L"Slate.ThrottleWhenMouseIsMoving",local_res8,
             L"Whether to attempt to increase UI responsiveness based on mouse cursor movement.",0);
  atexit(_dynamic_atexit_destructor_for__ThrottleWhenMouseIsMoving__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h__Script_Slate_651089564'' @ 140f42d40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h__Script_Slate_651089564__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h__Script_Slate_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h__Script_Slate_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_MultiBoxDefs_h__Script_Slate_220464657'' @ 140f42d90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_MultiBoxDefs_h__Script_Slate_220464657__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_MultiBoxDefs_h__Script_Slate_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h__Script_Slate_2862653832'' @ 140f42de0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h__Script_Slate_2862653832__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h__Script_Slate_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h__Script_Slate_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h__Script_Slate_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Views_ITypedTableView_h__Script_Slate_3189156171'' @ 140f42e30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Views_ITypedTableView_h__Script_Slate_3189156171__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Views_ITypedTableView_h__Script_Slate_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Input_IVirtualKeyboardEntry_h__Script_Slate_3719800804'' @ 140f42e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Input_IVirtualKeyboardEntry_h__Script_Slate_3719800804__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Input_IVirtualKeyboardEntry_h__Script_Slate_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_Anchors_h__Script_Slate_2418728445'' @ 140f42ec0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_Anchors_h__Script_Slate_2418728445__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_Anchors_h__Script_Slate_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Slate'' @ 140f42f00

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Slate__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x6e448ac7;
  local_res8[0].DeclarationsHash = 0xd2589c;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Slate,L"/Script/Slate",
             &Z_Registration_Info_UPackage__Script_Slate,local_res8);
  return;
}

// Z_Construct_UEnum_Slate_EInputPreProcessorType @ 14269aff0

UEnum * __cdecl Z_Construct_UEnum_Slate_EInputPreProcessorType(void)

{
  if (Z_Registration_Info_UEnum_EInputPreProcessorType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputPreProcessorType.InnerSingleton,
               &Z_Construct_UEnum_Slate_EInputPreProcessorType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputPreProcessorType.InnerSingleton;
}

// EInputPreProcessorType_StaticEnum @ 14269b030

UEnum * __cdecl EInputPreProcessorType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputPreProcessorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EInputPreProcessorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EInputPreProcessorType,(UObject *)pUVar1,
                       L"EInputPreProcessorType");
  }
  return Z_Registration_Info_UEnum_EInputPreProcessorType.OuterSingleton;
}

// EPopupLayoutMode_StaticEnum @ 14269b130

UEnum * __cdecl EPopupLayoutMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPopupLayoutMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EPopupLayoutMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EPopupLayoutMode,(UObject *)pUVar1,
                       L"EPopupLayoutMode");
  }
  return Z_Registration_Info_UEnum_EPopupLayoutMode.OuterSingleton;
}

// NewStructOps @ 14269b170

void * __cdecl
Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputPreprocessorRegistrationKey,&UE::CoreUObject::Private::Construct<FInputPreprocessorRegistrationKey>,&UE::CoreUObject::Private::ConstructForTests<FInputPreprocessorRegistrationKey>,&UE::CoreUObject::Private::Destruct<FInputPreprocessorRegistrationKey>,&UE::CoreUObject::Private::Copy<FInputPreprocessorRegistrationKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EMultiBoxType_StaticEnum @ 14269b5f0

UEnum * __cdecl EMultiBoxType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMultiBoxType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EMultiBoxType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EMultiBoxType,(UObject *)pUVar1,L"EMultiBoxType");
  }
  return Z_Registration_Info_UEnum_EMultiBoxType.OuterSingleton;
}

// EMultiBlockType_StaticEnum @ 14269b630

UEnum * __cdecl EMultiBlockType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMultiBlockType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EMultiBlockType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EMultiBlockType,(UObject *)pUVar1,L"EMultiBlockType")
    ;
  }
  return Z_Registration_Info_UEnum_EMultiBlockType.OuterSingleton;
}

// ESelectionMode_StaticEnum @ 14269b6b0

UEnum * __cdecl ESelectionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESelectionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ESelectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ESelectionMode,(UObject *)pUVar1,L"ESelectionMode");
  }
  return Z_Registration_Info_UEnum_ESelectionMode.OuterSingleton;
}

// ETableViewMode_StaticEnum @ 14269b6f0

UEnum * __cdecl ETableViewMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETableViewMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ETableViewMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ETableViewMode,(UObject *)pUVar1,L"ETableViewMode");
  }
  return Z_Registration_Info_UEnum_ETableViewMode.OuterSingleton;
}

// NewProp_bEnableAutocorrect_SetBit @ 14269b770

void __cdecl
Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14269b780

void * __cdecl Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVirtualKeyboardOptions,&UE::CoreUObject::Private::Construct<FVirtualKeyboardOptions>,&UE::CoreUObject::Private::ConstructForTests<FVirtualKeyboardOptions>,&UE::CoreUObject::Private::Destruct<FVirtualKeyboardOptions>,&UE::CoreUObject::Private::Copy<FVirtualKeyboardOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_Slate @ 14269b860

UPackage * __cdecl Z_Construct_UPackage__Script_Slate(void)

{
  if (Z_Registration_Info_UPackage__Script_Slate.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Slate.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Slate.OuterSingleton;
}

// NewStructOps @ 14269b8a0

void * __cdecl Z_Construct_UScriptStruct_FAnchors_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnchors,&UE::CoreUObject::Private::Construct<FAnchors>,&UE::CoreUObject::Private::ConstructForTests<FAnchors>,&UE::CoreUObject::Private::Destruct<FAnchors>,&UE::CoreUObject::Private::Copy<FAnchors>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UToolMenuBase @ 14269b990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolMenuBase(void)

{
  if (Z_Registration_Info_UClass_UToolMenuBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolMenuBase.OuterSingleton,
               &Z_Construct_UClass_UToolMenuBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolMenuBase.OuterSingleton;
}

// Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility @ 14269b9d0

UEnum * __cdecl Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility(void)

{
  if (Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.InnerSingleton,
               &Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCustomizedToolMenuEntry @ 14269ba10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCustomizedToolMenuEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenuEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCustomizedToolMenuEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenuEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCustomizedToolMenuEntry.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray @ 14269ba90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenuNameArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCustomizedToolMenuNameArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenuNameArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCustomizedToolMenuNameArray.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCustomizedToolMenuSection @ 14269bb10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCustomizedToolMenuSection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenuSection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCustomizedToolMenuSection.InnerSingleton,
               &Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenuSection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCustomizedToolMenuSection.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FToolMenuProfile @ 14269bb90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FToolMenuProfile(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuProfile.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FToolMenuProfile.InnerSingleton,
               &Z_Construct_UScriptStruct_FToolMenuProfile_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FToolMenuProfile.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FToolMenuProfile.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ECustomizedToolMenuVisibility_StaticEnum @ 14269bc10

UEnum * __cdecl ECustomizedToolMenuVisibility_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility,(UObject *)pUVar1,
                       L"ECustomizedToolMenuVisibility");
  }
  return Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton;
}

// NewStructOps @ 14269bc50

void * __cdecl Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCustomizedToolMenuEntry,&UE::CoreUObject::Private::Construct<FCustomizedToolMenuEntry>,&UE::CoreUObject::Private::ConstructForTests<FCustomizedToolMenuEntry>,&UE::CoreUObject::Private::Destruct<FCustomizedToolMenuEntry>,&UE::CoreUObject::Private::Copy<FCustomizedToolMenuEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14269bc90

void * __cdecl Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCustomizedToolMenuSection,&UE::CoreUObject::Private::Construct<FCustomizedToolMenuSection>,&UE::CoreUObject::Private::ConstructForTests<FCustomizedToolMenuSection>,&UE::CoreUObject::Private::Destruct<FCustomizedToolMenuSection>,&UE::CoreUObject::Private::Copy<FCustomizedToolMenuSection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14269bcd0

void * __cdecl Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCustomizedToolMenuNameArray,&UE::CoreUObject::Private::Construct<FCustomizedToolMenuNameArray>,&UE::CoreUObject::Private::ConstructForTests<FCustomizedToolMenuNameArray>,&UE::CoreUObject::Private::Destruct<FCustomizedToolMenuNameArray>,&UE::CoreUObject::Private::Copy<FCustomizedToolMenuNameArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14269bd10

void * __cdecl Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1a8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FToolMenuProfile,&UE::CoreUObject::Private::Construct<FToolMenuProfile>,&UE::CoreUObject::Private::ConstructForTests<FToolMenuProfile>,&UE::CoreUObject::Private::Destruct<FToolMenuProfile>,&UE::CoreUObject::Private::Copy<FToolMenuProfile>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14269bd90

void * __cdecl Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x208;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCustomizedToolMenu,&UE::CoreUObject::Private::Construct<FCustomizedToolMenu>,&UE::CoreUObject::Private::ConstructForTests<FCustomizedToolMenu>,&UE::CoreUObject::Private::Destruct<FCustomizedToolMenu>,&UE::CoreUObject::Private::Copy<FCustomizedToolMenu>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<TSharedPtr<IInputProcessor,1>,TSharedPtr<IInputProcessor,1>,int> @ 14269d450

void __cdecl
ConstructItems<TSharedPtr<IInputProcessor,1>,TSharedPtr<IInputProcessor,1>,int>
          (void *param_1,TSharedPtr<IInputProcessor,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IInputProcessor **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TWeakPtr<SWidget,1>,TWeakPtr<SWidget,1>,int> @ 14269d490

void __cdecl
ConstructItems<TWeakPtr<SWidget,1>,TWeakPtr<SWidget,1>,int>
          (void *param_1,TWeakPtr<SWidget,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(SWidget **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->WeakReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FPopupSupport::FClickSubscriber,int> @ 14269db60

void __cdecl
DestructItems<FPopupSupport::FClickSubscriber,int>(FClickSubscriber *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->Notification;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this);
    plVar3 = *(longlong **)((longlong)(this + -1) + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    param_1 = (FClickSubscriber *)(this + 1);
  }
  return;
}

// DestructItems<FInputPreprocessorRegistration,int> @ 14269dbd0

void __cdecl
DestructItems<FInputPreprocessorRegistration,int>
          (FInputPreprocessorRegistration *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->InputProcessor).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNotificationButtonInfo,int> @ 14269dc10

void __cdecl
DestructItems<FNotificationButtonInfo,int>(FNotificationButtonInfo *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->VisibilityCallback).field_0x8;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar1 + 2));
      if ((void *)puVar1[3] != (void *)0x0) {
        FMemory::Free((void *)puVar1[3]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + 2));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar1 + -1));
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -1));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar1 + -4));
      if ((void *)puVar1[-3] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-3]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -4));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar1 + -7));
      if ((void *)puVar1[-6] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-6]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -7));
      if ((longlong *)puVar1[-10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[-10] + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar1 + -0xd));
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -0xd));
      if ((longlong *)puVar1[-0x10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[-0x10] + 0x10))();
      }
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TDelegate<bool___cdecl(TSharedRef<FGenericWindow,1>_const_&,enum_EWindowAction::Type),FDefaultDelegateUserPolicy>,int> @ 14269dd20

void __cdecl
DestructItems<TDelegate<bool___cdecl(TSharedRef<FGenericWindow,1>_const_&,enum_EWindowAction::Type),FDefaultDelegateUserPolicy>,int>
          (TDelegate<bool___cdecl(TSharedRef<FGenericWindow,1>_const_&,EWindowAction::Type),FDefaultDelegateUserPolicy>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (*(void **)&((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1)->field_0x8 != (void *)0x0)
    {
      FMemory::Free(*(void **)&((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1)->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FMenuBase,1>,int> @ 14269dd70

void __cdecl
DestructItems<TSharedPtr<FMenuBase,1>,int>(TSharedPtr<FMenuBase,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FSlateUser,1>,int> @ 14269ddb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FSlateUser,1>,int>(TSharedPtr<FSlateUser,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<IInputProcessor,1>,int> @ 14269ddf0

void __cdecl
DestructItems<TSharedPtr<IInputProcessor,1>,int>(TSharedPtr<IInputProcessor,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<SWindow,1>,int> @ 14269de30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestructItems<TSharedPtr<SWindow,1>,int>(TSharedPtr<SWindow,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<SWidget,1>,int> @ 14269de70

void __cdecl DestructItems<TSharedRef<SWidget,1>,int>(TSharedRef<SWidget,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<FSlateVirtualUserHandle,1>,int> @ 14269deb0

void __cdecl
DestructItems<TWeakPtr<FSlateVirtualUserHandle,1>,int>
          (TWeakPtr<FSlateVirtualUserHandle,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
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
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<SWidget,1>,int> @ 14269df00

void __cdecl DestructItems<TWeakPtr<SWidget,1>,int>(TWeakPtr<SWidget,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
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
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<TAnimatedAttributeBase,1>,int> @ 14269df50

void __cdecl
DestructItems<TWeakPtr<TAnimatedAttributeBase,1>,int>
          (TWeakPtr<TAnimatedAttributeBase,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
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
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWidgetPath,int> @ 14269dfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestructItems<FWidgetPath,int>(FWidgetPath *param_1,int param_2)

{
  ForElementType<FArrangedWidget> FVar1;
  ForElementType<FArrangedWidget> *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->Widgets).Array.AllocatorInstance.SecondaryData;
    do {
      if (pFVar2[5] != (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)pFVar2[5]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2[4]);
      FVar1 = *pFVar2;
      if (*pFVar2 == (ForElementType<FArrangedWidget>)0x0) {
        FVar1 = (ForElementType<FArrangedWidget>)(pFVar2 + -0x24);
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar1,*(int *)(pFVar2 + 1));
      if (*pFVar2 != (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)*pFVar2);
      }
      pFVar2 = pFVar2 + 0x2c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`FMenuStack::FindMenuFromWindow'::__l2::<lambda_1>_> @ 14269efb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMenuBase,1> * __thiscall
TArray<TSharedPtr<FMenuBase,1>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FMenuStack::FindMenuFromWindow_::__l2::<lambda_1>_>
          (TArray<TSharedPtr<FMenuBase,1>,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  bool bVar1;
  TSharedPtr<FMenuBase,1> *pTVar2;
  TSharedPtr<FMenuBase,1> *pTVar3;
  TSharedPtr<FMenuBase,1> local_18;
  
  pTVar2 = (TSharedPtr<FMenuBase,1> *)(this->AllocatorInstance).Data;
  pTVar3 = pTVar2 + this->ArrayNum;
  while( true ) {
    if (pTVar2 == pTVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->InWindow).SharedReferenceCount.ReferenceController);
      return (TSharedPtr<FMenuBase,1> *)0x0;
    }
    local_18.Object = pTVar2->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (pTVar2->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar1 = `FMenuStack::FindMenuFromWindow'::__l2::<lambda_1>::operator()(param_1,&local_18);
    if (bVar1) break;
    pTVar2 = pTVar2 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->InWindow).SharedReferenceCount.ReferenceController);
  return pTVar2;
}

// FloatCastChecked<float,double> @ 14269f290

float __cdecl FloatCastChecked<float,double>(double param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = (double)(float)param_1 - param_1;
  if (param_2 < (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FloatFitsIn<OutType>(In, Precision)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xc0,L"Loss of data caused by narrowing conversion");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return (float)param_1;
}

// ForEachWidget<`UE::Slate::Private::VerifyParentChildrenRelationship_Recursive'::__l2::<lambda_1>_> @ 14269f2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChildren::
ForEachWidget<_UE::Slate::Private::VerifyParentChildrenRelationship_Recursive_::__l2::<lambda_1>_>
          (FChildren *this,<lambda_1> *param_1)

{
  bool bVar1;
  TSet<TTuple<SWidget_const_*,SWidget_const_*>,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  bool bVar5;
  int iVar6;
  atomic<int> aVar7;
  TTuple<SWidget_const_*,SWidget_const_*> *pTVar8;
  SWidget *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  SWidget *pSVar11;
  int iVar12;
  SWidget *local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  longlong local_58;
  TReferenceControllerBase<1> *local_50;
  SWidget *local_48;
  
  if (this->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar1 = this->Debug_bIsIteratingChildren;
  this->Debug_bIsIteratingChildren = true;
  iVar6 = (**(code **)this->_padding_)(this);
  iVar12 = 0;
  if (iVar6 < 1) {
    this->Debug_bIsIteratingChildren = bVar1;
    return;
  }
  do {
    pSVar11 = (SWidget *)0x0;
    (**(code **)(this->_padding_ + 0x38))(this,&local_58,iVar12);
    pSVar4 = local_48;
    if (local_48 != SNullWidget::NullWidget.Object) {
      this_00 = (TSet<TTuple<SWidget_const_*,SWidget_const_*>,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>,FDefaultSetAllocator>
                 *)param_1->AllWidgets;
      pTVar8 = TSet<TTuple<SWidget_const_*,SWidget_const_*>,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>,FDefaultSetAllocator>
               ::Find(this_00,local_48);
      pSVar9 = (SWidget *)&pTVar8->field_0x8;
      if (pTVar8 == (TTuple<SWidget_const_*,SWidget_const_*> *)0x0) {
        pSVar9 = pSVar11;
      }
      if (pSVar9 == (SWidget *)0x0) {
        local_res18[0] = pSVar4;
        TMapBase<SWidget_const_*,SWidget_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>_>
        ::Emplace<SWidget_const_*,SWidget_const_*_const_&>
                  ((TMapBase<SWidget_const_*,SWidget_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>_>
                    *)this_00,local_res18,&param_1->Parent);
      }
      else {
        *param_1->bResult = false;
        if (2 < (byte)LogSlate._0_1_) {
          FReflectionMetaData::GetWidgetDebugInfo(&local_78,param_1->Parent);
          pTVar8 = TSet<TTuple<SWidget_const_*,SWidget_const_*>,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<SWidget_const_*,SWidget_const_*>,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>,FDefaultSetAllocator>
                           *)param_1->AllWidgets,pSVar4);
          if ((pTVar8 == (TTuple<SWidget_const_*,SWidget_const_*> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FReflectionMetaData::GetWidgetDebugInfo(&local_88,*(SWidget **)&pTVar8->field_0x8);
          FReflectionMetaData::GetWidgetDebugInfo(&local_98,pSVar4);
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_The_widget___s__15093e3a8,
                     (FLogCategoryBase *)&LogSlate);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
      }
      pTVar10 = (pSVar4->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar10->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14269f4e6;
          }
          LOCK();
          aVar7 = pTVar10->SharedReferenceCount;
          bVar5 = aVar3 == aVar7;
          if (bVar5) {
            pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar7 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar7;
        } while (!bVar5);
        pSVar11 = (pSVar4->ParentWidgetPtr).Object;
      }
LAB_14269f4e6:
      pSVar9 = param_1->Parent;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      if ((pSVar11 != pSVar9) && (*param_1->bResult = false, 2 < (byte)LogSlate._0_1_)) {
        FReflectionMetaData::GetWidgetDebugInfo(&local_68,pSVar4);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_The_widget___s__15093e458,
                   (FLogCategoryBase *)&LogSlate);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      if ((*param_1->bResult == false) ||
         (bVar5 = UE::Slate::Private::VerifyParentChildrenRelationship_Recursive
                            (pSVar4,param_1->AllWidgets), !bVar5)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      *param_1->bResult = bVar5;
    }
    if (local_58 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    }
    iVar12 = iVar12 + 1;
    if (iVar6 <= iVar12) {
      this->Debug_bIsIteratingChildren = bVar1;
      return;
    }
  } while( true );
}

// ForEachWidget<`UE::Slate::Private::VerifyWidgetLayerId_Recursive'::__l2::<lambda_1>_> @ 14269f5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChildren::ForEachWidget<_UE::Slate::Private::VerifyWidgetLayerId_Recursive_::__l2::<lambda_1>_>
          (FChildren *this,<lambda_1> *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  SWidget *pSVar8;
  int iVar9;
  atomic<int> aVar10;
  SWidget *pSVar11;
  int iVar12;
  bool bVar13;
  FString local_78;
  longlong local_68;
  TReferenceControllerBase<1> *local_60;
  SWidget *local_58;
  FWidgetProxyHandle local_50;
  
  if (this->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar1 = this->Debug_bIsIteratingChildren;
  this->Debug_bIsIteratingChildren = true;
  iVar9 = (**(code **)this->_padding_)(this);
  iVar12 = 0;
  if (iVar9 < 1) {
    this->Debug_bIsIteratingChildren = bVar1;
    return;
  }
  do {
    (**(code **)(this->_padding_ + 0x38))(this,&local_68,iVar12);
    pSVar8 = local_58;
    if (((local_58 != SNullWidget::NullWidget.Object) &&
        (((byte)local_58->VisibilityAttribute & 0x19) != 0)) &&
       ((param_1->bInsideInvalidationRoot != false ||
        (local_58->LastPaintFrame == param_1->LastPaintFrame)))) {
      if ((local_58->PersistentState).bDeferredPainting == param_1->bIsDeferredPaint) {
        iVar2 = (local_58->PersistentState).LayerId;
        iVar3 = (local_58->PersistentState).OutgoingLayerId;
        if (iVar2 != 0) {
          if ((iVar2 < param_1->InLayerId) || (iVar3 < param_1->InLayerId)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          if ((param_1->OutLayerId < iVar2) || (param_1->OutLayerId < iVar3)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar13) && (bVar6)) goto LAB_14269f84e;
          pTVar4 = (local_58->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
          pSVar11 = (SWidget *)0x0;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            aVar7 = pTVar4->SharedReferenceCount;
            do {
              if (aVar7 == (atomic<int>)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                goto LAB_14269f741;
              }
              LOCK();
              aVar10 = pTVar4->SharedReferenceCount;
              bVar13 = aVar7 == aVar10;
              if (bVar13) {
                pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
                aVar10 = aVar7;
              }
              UNLOCK();
              aVar7 = aVar10;
            } while (!bVar13);
            pSVar11 = (local_58->ParentWidgetPtr).Object;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          if (pSVar11 == (SWidget *)0x0) {
LAB_14269f741:
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ParentWidget",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateApplication.cpp"
                                ,0x1ee4,L"");
            if (bVar13) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_50.InvalidationRootHandle.InvalidationRoot =
               (pSVar11->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
          local_50.InvalidationRootHandle.UniqueId =
               (pSVar11->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
          local_50.InvalidationRootHandle._12_4_ =
               *(undefined4 *)&(pSVar11->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
          local_50.WidgetIndex = (pSVar11->FastPathProxyHandle).WidgetIndex;
          local_50.WidgetSortOrder.Order = (pSVar11->FastPathProxyHandle).WidgetSortOrder.Order;
          bVar13 = FWidgetProxyHandle::HasAnyInvalidationReason(&local_50,pSVar11,Paint);
          if ((!bVar13) && (*param_1->bResult = false, 2 < (byte)LogSlate._0_1_)) {
            FReflectionMetaData::GetWidgetDebugInfo(&local_78,pSVar8);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_The_widget___s__15093e4d0,
                       (FLogCategoryBase *)&LogSlate);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      else {
LAB_14269f84e:
        if ((*param_1->bResult == false) ||
           (bVar13 = UE::Slate::Private::VerifyWidgetLayerId_Recursive
                               (local_58,param_1->bInsideInvalidationRoot), !bVar13)) {
          *param_1->bResult = false;
        }
        else {
          *param_1->bResult = true;
        }
      }
    }
    if (local_68 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
    iVar12 = iVar12 + 1;
    if (iVar9 <= iVar12) {
      this->Debug_bIsIteratingChildren = bVar1;
      return;
    }
  } while( true );
}

// InternalConstructor<UToolMenuBase> @ 14269fb70

void __cdecl InternalConstructor<UToolMenuBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UToolMenuBase__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UToolMenuBase> @ 14269fba0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolMenuBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolMenuBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UToolMenuBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeRequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,enum_EHorizontalAlignment_const_&> @ 14269fc50

/* WARNING: Enum "Type": Some values do not have unique names */

T3RequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,EHorizontalAlignment_const_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,enum_EHorizontalAlignment_const_&>
                    (T3RequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,EHorizontalAlignment_const_&>
                     *__return_storage_ptr__,TSharedRef<SWindow,1> *param_1,
                    TSharedPtr<SWidget,1> *param_2,EHorizontalAlignment *param_3)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeShared<FFauxSlateCursor,1> @ 14269fc70

TSharedRef<FFauxSlateCursor,1> * __cdecl
MakeShared<FFauxSlateCursor,1>(TSharedRef<FFauxSlateCursor,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FFauxSlateCursor,1> *pTVar4;
  
  pTVar3 = operator_new(0x40);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FFauxSlateCursor *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFFauxSlateCursor___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FFauxSlateCursor__6B_;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar3[1].SharedReferenceCount = 0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = -0x3e20000000000000;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0xc1e00000;
    __return_storage_ptr__->Object = (FFauxSlateCursor *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FFauxSlateCursor *)(pTVar3 + 1) == (FFauxSlateCursor *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FFauxSlateCursor,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FNavigationConfig,1> @ 14269fd30

TSharedRef<FNavigationConfig,1> * __cdecl
MakeShared<FNavigationConfig,1>(TSharedRef<FNavigationConfig,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = operator_new(0x158);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFNavigationConfig___00_SharedPointerInternals__6B_;
    FNavigationConfig::FNavigationConfig((FNavigationConfig *)(pTVar1 + 1));
  }
  TSharedRef<FNavigationConfig,1>::TSharedRef<FNavigationConfig,1>
            (__return_storage_ptr__,(FNavigationConfig *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs> @ 14269fda0

TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SBox,RequiredArgs::T0RequiredArgs> @ 14269fe50

TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SImage,RequiredArgs::T0RequiredArgs> @ 14269ff00

TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<MenuStackInternal::SMenuContentWrapper,RequiredArgs::T0RequiredArgs> @ 14269ffb0

TSlateDecl<MenuStackInternal::SMenuContentWrapper,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<MenuStackInternal::SMenuContentWrapper,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<MenuStackInternal::SMenuContentWrapper,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<MenuStackInternal::SMenuContentWrapper,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<MenuStackInternal::SMenuContentWrapper,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMenuPanel,RequiredArgs::T0RequiredArgs> @ 1426a0060

TSlateDecl<SMenuPanel,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMenuPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMenuPanel,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMenuPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuPanel,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SPopup,RequiredArgs::T0RequiredArgs> @ 1426a0110

TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SPopup,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs>::TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SToolTip,RequiredArgs::T0RequiredArgs> @ 1426a01c0

TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SToolTip,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWindowTitleBar,RequiredArgs::T3RequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,enum_EHorizontalAlignment_const_&>_> @ 1426a0270

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SWindowTitleBar,RequiredArgs::T3RequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,EHorizontalAlignment_const_&>_>
* __cdecl MakeTDecl<SWindowTitleBar,RequiredArgs::T3RequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,enum_EHorizontalAlignment_const_&>_>
                    (TSlateDecl<SWindowTitleBar,RequiredArgs::T3RequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,EHorizontalAlignment_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T3RequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,EHorizontalAlignment_const_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SWindowTitleBar,RequiredArgs::T3RequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,enum_EHorizontalAlignment_const_&>_>
  ::
  TSlateDecl<SWindowTitleBar,RequiredArgs::T3RequiredArgs<TSharedRef<SWindow,1>_const_&,TSharedPtr<SWidget,1>_const_&,enum_EHorizontalAlignment_const_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Route<FNoReply,FEventRouter::FBubblePolicy,FPointerEvent,`FSlateApplication::ProcessReply'::__l19::<lambda_1>_> @ 1426a0b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FNoReply * __cdecl
FEventRouter::
Route<FNoReply,FEventRouter::FBubblePolicy,FPointerEvent,_FSlateApplication::ProcessReply_::__l19::<lambda_1>_>
          (FNoReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FPointerEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  char cVar1;
  int iVar2;
  TOptional<FVirtualPointerPosition> *pTVar3;
  FArrangedWidget *pFVar4;
  undefined1 auStack_1b8 [32];
  FScopeRouteInputEvent local_198 [8];
  undefined1 local_190;
  SWidget *local_188;
  FSharedReferencer<1> local_180;
  TSharedPtr<SWidget,1> local_178;
  undefined8 local_168;
  FSharedReferencer<1> local_160;
  FDeprecateSlateVector2D local_158;
  FDeprecateSlateVector2D FStack_150;
  FPointerEvent local_148;
  TOptional<FVirtualPointerPosition> local_c8;
  FWidgetAndPointer local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  *(undefined1 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_198,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)param_2->RoutingPath;
  cVar1 = *(char *)__return_storage_ptr__;
  while ((cVar1 == '\0' && (iVar2 = param_2->WidgetIndex, -1 < iVar2))) {
    pTVar3 = FWidgetPath::GetVirtualPointerPosition(param_2->RoutingPath,&local_c8,iVar2);
    pFVar4 = FArrangedChildren::operator[](&param_2->RoutingPath->Widgets,iVar2);
    FWidgetAndPointer::FWidgetAndPointer(&local_a8,pFVar4,pTVar3);
    if (local_a8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_148,param_3);
    }
    else {
      local_158 = local_a8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      FStack_150 = local_a8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_148,param_3);
      local_148.ScreenSpacePosition = local_158;
      local_148.LastScreenSpacePosition = FStack_150;
    }
    (**(code **)(*(longlong *)local_a8._padding_ + 0x80))(local_a8._padding_,&local_148);
    local_178.Object = (SWidget *)local_a8._padding_;
    local_178.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_a8._padding_;
    if ((TReferenceControllerBase<1> *)local_a8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a8._padding_ + 8) + 1);
      UNLOCK();
    }
    FSlateDebugging::BroadcastNoReplyInputEvent(MouseLeave,(FInputEvent *)&local_148,&local_178);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    local_190 = 0;
    local_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_160.ReferenceController = (TReferenceControllerBase<1> *)local_a8._padding_;
    if ((TReferenceControllerBase<1> *)local_a8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_188 = (SWidget *)local_a8._padding_;
    local_168 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_180,&local_160);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.ReferenceController);
    *(undefined1 *)__return_storage_ptr__ = local_190;
    if (local_180.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_180.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_180.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_158 = *(FDeprecateSlateVector2D *)&__return_storage_ptr__->field_0x8;
    FStack_150 = *(FDeprecateSlateVector2D *)&__return_storage_ptr__->field_0x10;
    *(SWidget **)&__return_storage_ptr__->field_0x8 = local_188;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         local_180.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_150);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.ReferenceController);
    FPointerEvent::~FPointerEvent(&local_148);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a8._padding_);
    param_2->WidgetIndex = param_2->WidgetIndex + -1;
    cVar1 = *(char *)__return_storage_ptr__;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_198);
  FPointerEvent::~FPointerEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FNoReply,FEventRouter::FBubblePolicy,FPointerEvent,`FSlateApplication::RoutePointerMoveEvent'::__l52::<lambda_2>_> @ 1426a0d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FNoReply * __cdecl
FEventRouter::
Route<FNoReply,FEventRouter::FBubblePolicy,FPointerEvent,_FSlateApplication::RoutePointerMoveEvent_::__l52::<lambda_2>_>
          (FNoReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FPointerEvent *param_3,<lambda_2> *param_4,ESlateDebuggingInputEvent param_5)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  TOptional<FVirtualPointerPosition> *pTVar4;
  FArrangedWidget *pFVar5;
  undefined1 auStack_1b8 [32];
  FScopeRouteInputEvent local_198 [8];
  undefined1 local_190;
  SWidget *local_188;
  FSharedReferencer<1> local_180;
  TSharedPtr<SWidget,1> local_178;
  undefined8 local_168;
  FSharedReferencer<1> local_160;
  FDeprecateSlateVector2D local_158;
  FDeprecateSlateVector2D FStack_150;
  FPointerEvent local_148;
  TOptional<FVirtualPointerPosition> local_c8;
  FWidgetAndPointer local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  *(undefined1 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_198,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)param_2->RoutingPath;
  cVar1 = *(char *)__return_storage_ptr__;
  while ((cVar1 == '\0' && (iVar2 = param_2->WidgetIndex, -1 < iVar2))) {
    pTVar4 = FWidgetPath::GetVirtualPointerPosition(param_2->RoutingPath,&local_c8,iVar2);
    pFVar5 = FArrangedChildren::operator[](&param_2->RoutingPath->Widgets,iVar2);
    FWidgetAndPointer::FWidgetAndPointer(&local_a8,pFVar5,pTVar4);
    if (local_a8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_148,param_3);
    }
    else {
      local_158 = local_a8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      FStack_150 = local_a8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_148,param_3);
      local_148.ScreenSpacePosition = local_158;
      local_148.LastScreenSpacePosition = FStack_150;
    }
    bVar3 = FWeakWidgetPath::ContainsWidget
                      (param_4->LastWidgetsUnderPointer,(SWidget *)local_a8._padding_);
    if ((!bVar3) &&
       (bVar3 = FWidgetPath::ContainsWidget(param_4->MouseCaptorPath,(SWidget *)local_a8._padding_),
       bVar3)) {
      (**(code **)(*(longlong *)local_a8._padding_ + 0x78))(local_a8._padding_,&local_a8,&local_148)
      ;
      local_178.Object = (SWidget *)local_a8._padding_;
      local_178.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_a8._padding_;
      if ((TReferenceControllerBase<1> *)local_a8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_a8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_a8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastNoReplyInputEvent(MouseEnter,(FInputEvent *)&local_148,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
    }
    local_190 = 0;
    local_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_160.ReferenceController = (TReferenceControllerBase<1> *)local_a8._padding_;
    if ((TReferenceControllerBase<1> *)local_a8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_188 = (SWidget *)local_a8._padding_;
    local_168 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_180,&local_160);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.ReferenceController);
    *(undefined1 *)__return_storage_ptr__ = local_190;
    if (local_180.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_180.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_180.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_158 = *(FDeprecateSlateVector2D *)&__return_storage_ptr__->field_0x8;
    FStack_150 = *(FDeprecateSlateVector2D *)&__return_storage_ptr__->field_0x10;
    *(SWidget **)&__return_storage_ptr__->field_0x8 = local_188;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         local_180.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_150);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.ReferenceController);
    FPointerEvent::~FPointerEvent(&local_148);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a8._padding_);
    param_2->WidgetIndex = param_2->WidgetIndex + -1;
    cVar1 = *(char *)__return_storage_ptr__;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_198);
  FPointerEvent::~FPointerEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FNoReply,FEventRouter::FBubblePolicy,FPointerEvent,`FSlateApplication::RoutePointerMoveEvent'::__l59::<lambda_5>_> @ 1426a0fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FNoReply * __cdecl
FEventRouter::
Route<FNoReply,FEventRouter::FBubblePolicy,FPointerEvent,_FSlateApplication::RoutePointerMoveEvent_::__l59::<lambda_5>_>
          (FNoReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FPointerEvent *param_3,<lambda_5> *param_4,ESlateDebuggingInputEvent param_5)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  TOptional<FVirtualPointerPosition> *pTVar4;
  FArrangedWidget *pFVar5;
  undefined1 auStack_1b8 [32];
  FScopeRouteInputEvent local_198 [8];
  undefined1 local_190;
  SWidget *local_188;
  FSharedReferencer<1> local_180;
  TSharedPtr<SWidget,1> local_178;
  undefined8 local_168;
  FSharedReferencer<1> local_160;
  FDeprecateSlateVector2D local_158;
  FDeprecateSlateVector2D FStack_150;
  FPointerEvent local_148;
  TOptional<FVirtualPointerPosition> local_c8;
  FWidgetAndPointer local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  *(undefined1 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_198,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)param_2->RoutingPath;
  cVar1 = *(char *)__return_storage_ptr__;
  while ((cVar1 == '\0' && (iVar2 = param_2->WidgetIndex, -1 < iVar2))) {
    pTVar4 = FWidgetPath::GetVirtualPointerPosition(param_2->RoutingPath,&local_c8,iVar2);
    pFVar5 = FArrangedChildren::operator[](&param_2->RoutingPath->Widgets,iVar2);
    FWidgetAndPointer::FWidgetAndPointer(&local_a8,pFVar5,pTVar4);
    if (local_a8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_148,param_3);
    }
    else {
      local_158 = local_a8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      FStack_150 = local_a8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_148,param_3);
      local_148.ScreenSpacePosition = local_158;
      local_148.LastScreenSpacePosition = FStack_150;
    }
    bVar3 = FWeakWidgetPath::ContainsWidget
                      (param_4->LastWidgetsUnderPointer,(SWidget *)local_a8._padding_);
    if (!bVar3) {
      (**(code **)(*(longlong *)local_a8._padding_ + 0x78))(local_a8._padding_,&local_a8,&local_148)
      ;
      local_178.Object = (SWidget *)local_a8._padding_;
      local_178.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_a8._padding_;
      if ((TReferenceControllerBase<1> *)local_a8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_a8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_a8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastNoReplyInputEvent(MouseEnter,(FInputEvent *)&local_148,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
    }
    local_190 = 0;
    local_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_160.ReferenceController = (TReferenceControllerBase<1> *)local_a8._padding_;
    if ((TReferenceControllerBase<1> *)local_a8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_188 = (SWidget *)local_a8._padding_;
    local_168 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_180,&local_160);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.ReferenceController);
    *(undefined1 *)__return_storage_ptr__ = local_190;
    if (local_180.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_180.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_180.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_158 = *(FDeprecateSlateVector2D *)&__return_storage_ptr__->field_0x8;
    FStack_150 = *(FDeprecateSlateVector2D *)&__return_storage_ptr__->field_0x10;
    *(SWidget **)&__return_storage_ptr__->field_0x8 = local_188;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         local_180.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_150);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.ReferenceController);
    FPointerEvent::~FPointerEvent(&local_148);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a8._padding_);
    param_2->WidgetIndex = param_2->WidgetIndex + -1;
    cVar1 = *(char *)__return_storage_ptr__;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_198);
  FPointerEvent::~FPointerEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FNoReply,FEventRouter::FBubblePolicy,FDragDropEvent,`FSlateApplication::ProcessReply'::__l19::<lambda_2>_> @ 1426a11f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FNoReply * __cdecl
FEventRouter::
Route<FNoReply,FEventRouter::FBubblePolicy,FDragDropEvent,_FSlateApplication::ProcessReply_::__l19::<lambda_2>_>
          (FNoReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FDragDropEvent *param_3,<lambda_2> *param_4,ESlateDebuggingInputEvent param_5)

{
  char cVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedReferencer<1> FVar4;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  undefined1 auStack_108 [32];
  FScopeRouteInputEvent local_e8 [8];
  undefined1 local_e0 [16];
  FSharedReferencer<1> local_d0;
  TSharedPtr<SWidget,1> local_c8;
  undefined8 local_b8;
  FSharedReferencer<1> local_b0;
  FWidgetAndPointer local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  *(undefined1 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_e8,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)param_2->RoutingPath;
  cVar1 = *(char *)__return_storage_ptr__;
  while ((cVar1 == '\0' && (iVar2 = param_2->WidgetIndex, -1 < iVar2))) {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition
                       (param_2->RoutingPath,(TOptional<FVirtualPointerPosition> *)local_e0,iVar2);
    pFVar6 = FArrangedChildren::operator[](&param_2->RoutingPath->Widgets,iVar2);
    FWidgetAndPointer::FWidgetAndPointer(&local_a8,pFVar6,pTVar5);
    (**(code **)(*(longlong *)local_a8._padding_ + 0xc0))(local_a8._padding_,&local_a8,param_3);
    local_c8.Object = (SWidget *)local_a8._padding_;
    local_c8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_a8._padding_;
    if ((TReferenceControllerBase<1> *)local_a8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a8._padding_ + 8) + 1);
      UNLOCK();
    }
    FSlateDebugging::BroadcastNoReplyInputEvent(DragEnter,(FInputEvent *)param_3,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    local_e0[0] = 0;
    local_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_b0.ReferenceController = (TReferenceControllerBase<1> *)local_a8._padding_;
    if ((TReferenceControllerBase<1> *)local_a8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_e0._8_8_ = local_a8._padding_;
    local_b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
    FVar4.ReferenceController = local_d0.ReferenceController;
    *(undefined1 *)__return_storage_ptr__ = local_e0[0];
    if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_e0._8_8_;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         local_d0.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a8._padding_);
    param_2->WidgetIndex = iVar2 + -1;
    cVar1 = *(char *)__return_storage_ptr__;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->Content).SharedReferenceCount.ReferenceController);
  FPointerEvent::~FPointerEvent((FPointerEvent *)param_3);
  return __return_storage_ptr__;
}

// Route<FNoReply,FEventRouter::FBubblePolicy,FDragDropEvent,`FSlateApplication::RoutePointerMoveEvent'::__l57::<lambda_4>_> @ 1426a13f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FNoReply * __cdecl
FEventRouter::
Route<FNoReply,FEventRouter::FBubblePolicy,FDragDropEvent,_FSlateApplication::RoutePointerMoveEvent_::__l57::<lambda_4>_>
          (FNoReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FDragDropEvent *param_3,<lambda_4> *param_4,ESlateDebuggingInputEvent param_5)

{
  char cVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  TOptional<FVirtualPointerPosition> *pTVar6;
  FArrangedWidget *pFVar7;
  undefined1 auStack_108 [32];
  FScopeRouteInputEvent local_e8 [8];
  undefined1 local_e0 [16];
  FSharedReferencer<1> local_d0;
  TSharedPtr<SWidget,1> local_c8;
  undefined8 local_b8;
  FSharedReferencer<1> local_b0;
  FWidgetAndPointer local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  *(undefined1 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_e8,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)param_2->RoutingPath;
  cVar1 = *(char *)__return_storage_ptr__;
  while ((cVar1 == '\0' && (iVar2 = param_2->WidgetIndex, -1 < iVar2))) {
    pTVar6 = FWidgetPath::GetVirtualPointerPosition
                       (param_2->RoutingPath,(TOptional<FVirtualPointerPosition> *)local_e0,iVar2);
    pFVar7 = FArrangedChildren::operator[](&param_2->RoutingPath->Widgets,iVar2);
    FWidgetAndPointer::FWidgetAndPointer(&local_a8,pFVar7,pTVar6);
    bVar5 = FWeakWidgetPath::ContainsWidget
                      (param_4->LastWidgetsUnderPointer,(SWidget *)local_a8._padding_);
    if (!bVar5) {
      (**(code **)(*(longlong *)local_a8._padding_ + 0xc0))(local_a8._padding_,&local_a8,param_3);
      local_c8.Object = (SWidget *)local_a8._padding_;
      local_c8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_a8._padding_;
      if ((TReferenceControllerBase<1> *)local_a8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_a8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_a8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastNoReplyInputEvent(DragEnter,(FInputEvent *)param_3,&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    local_e0[0] = 0;
    local_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_b0.ReferenceController = (TReferenceControllerBase<1> *)local_a8._padding_;
    if ((TReferenceControllerBase<1> *)local_a8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_e0._8_8_ = local_a8._padding_;
    local_b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
    FVar4.ReferenceController = local_d0.ReferenceController;
    *(undefined1 *)__return_storage_ptr__ = local_e0[0];
    if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_e0._8_8_;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         local_d0.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a8._padding_);
    param_2->WidgetIndex = iVar2 + -1;
    cVar1 = *(char *)__return_storage_ptr__;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->Content).SharedReferenceCount.ReferenceController);
  FPointerEvent::~FPointerEvent((FPointerEvent *)param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FBubblePolicy,FAnalogInputEvent,`FSlateApplication::ProcessAnalogInputEvent'::__l8::<lambda_1>_> @ 1426a1600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FBubblePolicy,FAnalogInputEvent,_FSlateApplication::ProcessAnalogInputEvent_::__l8::<lambda_1>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FAnalogInputEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  FString *pFVar7;
  undefined1 auStackY_2b8 [32];
  FScopeRouteInputEvent local_288 [8];
  TSharedPtr<SWidget,1> local_280;
  undefined8 local_270;
  FSharedReferencer<1> local_268;
  FKey local_260;
  FString local_248;
  FReply local_238;
  FReply local_178;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_288,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while ((cVar3 == '\0' && (iVar4 = param_2->WidgetIndex, -1 < iVar4))) {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition
                       (this,(TOptional<FVirtualPointerPosition> *)&local_260,iVar4);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    if (*(TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
         (local_b8._padding_ + 0x3a) ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      FReply::FReply(&local_238,false);
    }
    else {
      (**(code **)(*(longlong *)local_b8._padding_ + 0x50))
                (local_b8._padding_,&local_178,&local_b8,param_3);
      local_260.KeyName = (FName)param_3->_padding_;
      local_260.KeyDetails.Object = (FKeyDetails *)param_3->_padding_;
      local_260.KeyDetails.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)param_3->_padding_;
      if (local_260.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_260.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_260.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar7 = FKey::ToString(&local_260,&local_248);
      local_280.Object = (SWidget *)local_b8._padding_;
      local_280.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (AnalogInput,(FInputEvent *)param_3,&local_178,&local_280,pFVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_280.SharedReferenceCount.ReferenceController);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_260.KeyDetails.SharedReferenceCount.ReferenceController);
      FReply::FReply(&local_238,&local_178);
      FReply::~FReply(&local_178);
    }
    local_268.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_238._padding_ = local_b8._padding_;
    local_270 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_238._padding_,&local_268);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_238);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_238.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_238.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_238.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_238.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_238.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_238.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_238.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_238.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_238.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_238.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_238.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_238.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_238._padding_);
    FSlateApplication::ProcessReply
              (param_1,this,__return_storage_ptr__,this,(FPointerEvent *)0x0,
               *(uint *)((longlong)&param_3->_padding_ + 4));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    param_2->WidgetIndex = iVar4 + -1;
    cVar3 = (char)__return_storage_ptr__->_padding_;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_288);
  FAnalogInputEvent::~FAnalogInputEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FBubblePolicy,FCharacterEvent,`FSlateApplication::ProcessKeyCharEvent'::__l3::<lambda_1>_> @ 1426a1950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FBubblePolicy,FCharacterEvent,_FSlateApplication::ProcessKeyCharEvent_::__l3::<lambda_1>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FCharacterEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  FReply *pFVar7;
  undefined1 auStackY_1d8 [32];
  FScopeRouteInputEvent local_1a8 [8];
  SWidget *local_1a0;
  FSharedReferencer<1> local_198;
  <lambda_1> *local_190;
  FReply local_188;
  TOptional<FVirtualPointerPosition> local_d0;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_190 = param_4;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_1a8,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while ((cVar3 == '\0' && (iVar4 = param_2->WidgetIndex, -1 < iVar4))) {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition(this,&local_d0,iVar4);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    pFVar7 = `FSlateApplication::ProcessKeyCharEvent'::__l3::<lambda_1>::operator()
                       (local_190,&local_188,(FArrangedWidget *)&local_b8,param_3);
    local_1a0 = (SWidget *)local_b8._padding_;
    local_198.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar7->_padding_ != &local_1a0) {
      pFVar7->_padding_ = local_b8._padding_;
      local_1a0 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_198);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.ReferenceController);
    FReply::operator=(__return_storage_ptr__,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_188.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_188.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_188.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_188.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_188.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_188.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_188.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_188.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_188.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_188.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_188.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_188.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_188.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_188.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_188.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_188.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_188.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_188.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_188.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_188.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_188.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_188.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_188.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_188.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_188._padding_);
    FSlateApplication::ProcessReply
              (param_1,this,__return_storage_ptr__,this,(FPointerEvent *)0x0,
               *(uint *)((longlong)&param_3->_padding_ + 4));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    cVar3 = (char)__return_storage_ptr__->_padding_;
    param_2->WidgetIndex = iVar4 + -1;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_1a8);
  FCharacterEvent::~FCharacterEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FBubblePolicy,FKeyEvent,`FSlateApplication::ProcessKeyUpEvent'::__l2::<lambda_1>_> @ 1426a1bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FBubblePolicy,FKeyEvent,_FSlateApplication::ProcessKeyUpEvent_::__l2::<lambda_1>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FKeyEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  FString *pFVar7;
  undefined1 auStackY_2b8 [32];
  FScopeRouteInputEvent local_288 [8];
  TSharedPtr<SWidget,1> local_280;
  undefined8 local_270;
  FSharedReferencer<1> local_268;
  FKey local_260;
  FString local_248;
  FReply local_238;
  FReply local_178;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_288,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while ((cVar3 == '\0' && (iVar4 = param_2->WidgetIndex, -1 < iVar4))) {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition
                       (this,(TOptional<FVirtualPointerPosition> *)&local_260,iVar4);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    if (*(TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
         (local_b8._padding_ + 0x3a) ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      FReply::FReply(&local_238,false);
    }
    else {
      (**(code **)(*(longlong *)local_b8._padding_ + 0x48))
                (local_b8._padding_,&local_178,&local_b8,param_3);
      local_260.KeyName = (param_3->Key).KeyName;
      local_260.KeyDetails.Object = (param_3->Key).KeyDetails.Object;
      local_260.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_3->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_260.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_260.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_260.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar7 = FKey::ToString(&local_260,&local_248);
      local_280.Object = (SWidget *)local_b8._padding_;
      local_280.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (KeyUp,(FInputEvent *)param_3,&local_178,&local_280,pFVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_280.SharedReferenceCount.ReferenceController);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_260.KeyDetails.SharedReferenceCount.ReferenceController);
      FReply::FReply(&local_238,&local_178);
      FReply::~FReply(&local_178);
    }
    local_268.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_238._padding_ = local_b8._padding_;
    local_270 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_238._padding_,&local_268);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_238);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_238.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_238.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_238.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_238.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_238.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_238.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_238.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_238.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_238.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_238.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_238.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_238.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_238.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_238.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_238._padding_);
    FSlateApplication::ProcessReply
              (param_1,this,__return_storage_ptr__,this,(FPointerEvent *)0x0,
               *(uint *)((longlong)&param_3->_padding_ + 4));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    param_2->WidgetIndex = iVar4 + -1;
    cVar3 = (char)__return_storage_ptr__->_padding_;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_288);
  FKeyEvent::~FKeyEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FBubblePolicy,FKeyEvent,`FSlateApplication::ProcessKeyDownEvent'::__l19::<lambda_2>_> @ 1426a1f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FBubblePolicy,FKeyEvent,_FSlateApplication::ProcessKeyDownEvent_::__l19::<lambda_2>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FKeyEvent *param_3,<lambda_2> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  FName FVar7;
  undefined1 auStackY_2b8 [32];
  FScopeRouteInputEvent local_288 [8];
  TSharedPtr<SWidget,1> local_280;
  TSharedPtr<SWidget,1> local_270;
  undefined8 local_260;
  FSharedReferencer<1> local_258;
  FKey local_250;
  FReply local_230;
  FReply local_178;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_288,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while ((cVar3 == '\0' && (iVar4 = param_2->WidgetIndex, -1 < iVar4))) {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition
                       (this,(TOptional<FVirtualPointerPosition> *)&local_250,iVar4);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    if (*(TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
         (local_b8._padding_ + 0x3a) ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      local_270.Object = (SWidget *)local_b8._padding_;
      local_270.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastNoReplyInputEvent(KeyDown,(FInputEvent *)param_3,&local_270);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_270.SharedReferenceCount.ReferenceController);
      FReply::FReply(&local_230,false);
    }
    else {
      (**(code **)(*(longlong *)local_b8._padding_ + 0x40))
                (local_b8._padding_,&local_178,&local_b8,param_3);
      local_250.KeyName = (param_3->Key).KeyName;
      local_250.KeyDetails.Object = (param_3->Key).KeyDetails.Object;
      local_250.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_3->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_250.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_250.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_250.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar7 = FKey::GetFName(&local_250);
      local_280.Object = (SWidget *)local_b8._padding_;
      local_280.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (KeyDown,(FInputEvent *)param_3,&local_178,&local_280,(FName *)FVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_280.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_250.KeyDetails.SharedReferenceCount.ReferenceController);
      FReply::FReply(&local_230,&local_178);
      FReply::~FReply(&local_178);
    }
    local_258.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_230._padding_ = local_b8._padding_;
    local_260 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_230._padding_,&local_258);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_230);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_230.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_230.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_230.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_230.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_230.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_230.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_230.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_230.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_230.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_230.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_230.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_230.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_230.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_230.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_230._padding_);
    FSlateApplication::ProcessReply
              (param_1,this,__return_storage_ptr__,this,(FPointerEvent *)0x0,
               *(uint *)((longlong)&param_3->_padding_ + 4));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    param_2->WidgetIndex = iVar4 + -1;
    cVar3 = (char)__return_storage_ptr__->_padding_;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_288);
  FKeyEvent::~FKeyEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FBubblePolicy,FMotionEvent,`FSlateApplication::ProcessMotionDetectedEvent'::__l11::<lambda_1>_> @ 1426a22b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FBubblePolicy,FMotionEvent,_FSlateApplication::ProcessMotionDetectedEvent_::__l11::<lambda_1>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FMotionEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  undefined1 auStackY_1e8 [32];
  FScopeRouteInputEvent local_1b8 [8];
  TSharedPtr<SWidget,1> local_1b0;
  undefined8 local_1a0;
  FSharedReferencer<1> local_198;
  FReply local_190;
  TOptional<FVirtualPointerPosition> local_d8;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_1b8,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while ((cVar3 == '\0' && (iVar4 = param_2->WidgetIndex, -1 < iVar4))) {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition(this,&local_d8,iVar4);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    (**(code **)(*(longlong *)local_b8._padding_ + 0x110))
              (local_b8._padding_,&local_190,&local_b8,param_3);
    local_1b0.Object = (SWidget *)local_b8._padding_;
    local_1b0.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    FSlateDebugging::BroadcastInputEvent
              (MotionDetected,(FInputEvent *)param_3,&local_190,&local_1b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.SharedReferenceCount.ReferenceController);
    local_198.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_190._padding_ = local_b8._padding_;
    local_1a0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_190._padding_,&local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_190);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_190.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_190.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_190.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_190.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_190.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_190.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_190.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_190.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_190.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_190.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_190.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_190.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_190.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_190.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_190.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_190.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_190.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_190.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_190.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_190.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_190.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_190.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_190.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_190.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_190._padding_);
    FSlateApplication::ProcessReply
              (param_1,this,__return_storage_ptr__,this,(FPointerEvent *)0x0,
               *(uint *)((longlong)&param_3->_padding_ + 4));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    param_2->WidgetIndex = iVar4 + -1;
    cVar3 = (char)__return_storage_ptr__->_padding_;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_1b8);
  FInputEvent::~FInputEvent((FInputEvent *)param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FBubblePolicy,FPointerEvent,`FSlateApplication::RouteMouseWheelOrGestureEvent'::__l2::<lambda_1>_> @ 1426a2570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FBubblePolicy,FPointerEvent,_FSlateApplication::RouteMouseWheelOrGestureEvent_::__l2::<lambda_1>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FPointerEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  FDeprecateSlateVector2D FVar5;
  FDeprecateSlateVector2D FVar6;
  TOptional<FVirtualPointerPosition> *pTVar7;
  FArrangedWidget *pFVar8;
  FReply *pFVar9;
  undefined1 auStackY_358 [32];
  FScopeRouteInputEvent local_328 [8];
  FSlateApplication *local_320;
  TSharedPtr<SWidget,1> local_318;
  TSharedPtr<SWidget,1> local_308;
  undefined8 local_2f8;
  FSharedReferencer<1> local_2f0;
  FReply local_2e8;
  undefined1 local_228 [128];
  TOptional<FVirtualPointerPosition> local_1a8;
  FReply local_190;
  FWidgetAndPointer local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_320 = param_1;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_328,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while ((cVar3 == '\0' && (iVar4 = param_2->WidgetIndex, -1 < iVar4))) {
    pTVar7 = FWidgetPath::GetVirtualPointerPosition(this,&local_1a8,iVar4);
    pFVar8 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_d8,pFVar8,pTVar7);
    FVar6 = local_d8.OptionalPointerPosition.TypedValue.LastCursorPosition;
    FVar5 = local_d8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
    if (local_d8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent((FPointerEvent *)local_228,param_3);
    }
    else {
      FPointerEvent::FPointerEvent((FPointerEvent *)local_228,param_3);
      local_228._40_8_ = FVar5;
      local_228._48_8_ = FVar6;
    }
    FReply::FReply(&local_2e8,false);
    if (*param_4->InGestureEvent != (FPointerEvent *)0x0) {
      pFVar9 = (FReply *)
               (**(code **)(*(longlong *)local_d8._padding_ + 0xe0))
                         (local_d8._padding_,&local_190,&local_d8);
      FReply::operator=(&local_2e8,pFVar9);
      FReply::~FReply(&local_190);
      local_318.Object = (SWidget *)local_d8._padding_;
      local_318.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_d8._padding_;
      if ((TReferenceControllerBase<1> *)local_d8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_d8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_d8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (TouchGesture,(FInputEvent *)*param_4->InGestureEvent,&local_2e8,&local_318);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_318.SharedReferenceCount.ReferenceController);
    }
    if (((char)local_2e8._padding_ == '\0') && ((float)local_228._116_4_ != 0.0)) {
      pFVar9 = (FReply *)
               (**(code **)(*(longlong *)local_d8._padding_ + 0x88))
                         (local_d8._padding_,&local_190,&local_d8,local_228);
      FReply::operator=(&local_2e8,pFVar9);
      FReply::~FReply(&local_190);
      local_308.Object = (SWidget *)local_d8._padding_;
      local_308.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_d8._padding_;
      if ((TReferenceControllerBase<1> *)local_d8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_d8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_d8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (MouseWheel,(FInputEvent *)local_228,&local_2e8,&local_308);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_308.SharedReferenceCount.ReferenceController);
    }
    local_2f0.ReferenceController = (TReferenceControllerBase<1> *)local_d8._padding_;
    if ((TReferenceControllerBase<1> *)local_d8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_d8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_d8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_2e8._padding_ = local_d8._padding_;
    local_2f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_2e8._padding_,&local_2f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f0.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_2e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e8.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e8.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_2e8.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2e8.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2e8.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_2e8.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_2e8.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2e8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2e8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_2e8.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_2e8.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2e8.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2e8.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_2e8.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_2e8.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2e8.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2e8.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_2e8.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_2e8.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2e8.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2e8.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_2e8.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_2e8.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2e8.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2e8.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_2e8.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2e8._padding_);
    FSlateApplication::ProcessReply
              (local_320,this,__return_storage_ptr__,this,(FPointerEvent *)local_228,
               local_228._12_4_);
    FPointerEvent::~FPointerEvent((FPointerEvent *)local_228);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_d8._padding_);
    cVar3 = (char)__return_storage_ptr__->_padding_;
    param_2->WidgetIndex = iVar4 + -1;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_328);
  FPointerEvent::~FPointerEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FBubblePolicy,FPointerEvent,`FSlateApplication::RoutePointerDoubleClickEvent'::__l2::<lambda_1>_> @ 1426a2980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FBubblePolicy,FPointerEvent,_FSlateApplication::RoutePointerDoubleClickEvent_::__l2::<lambda_1>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FPointerEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  undefined1 auStackY_268 [32];
  FScopeRouteInputEvent local_238 [8];
  TSharedPtr<SWidget,1> local_230;
  undefined8 local_220;
  FSharedReferencer<1> local_218;
  TOptional<FVirtualPointerPosition> local_210;
  FReply local_1f8;
  FPointerEvent local_138;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_238,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while ((cVar3 == '\0' && (iVar4 = param_2->WidgetIndex, -1 < iVar4))) {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition(this,&local_210,iVar4);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    if (local_b8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_138,param_3);
    }
    else {
      local_210.TypedValue.CurrentCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      local_210.TypedValue.LastCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_138,param_3);
      local_138.ScreenSpacePosition = local_210.TypedValue.CurrentCursorPosition;
      local_138.LastScreenSpacePosition = local_210.TypedValue.LastCursorPosition;
    }
    (**(code **)(*(longlong *)local_b8._padding_ + 0xa0))
              (local_b8._padding_,&local_1f8,&local_b8,&local_138);
    local_230.Object = (SWidget *)local_b8._padding_;
    local_230.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    FSlateDebugging::BroadcastInputEvent
              (MouseButtonDoubleClick,(FInputEvent *)&local_138,&local_1f8,&local_230);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_230.SharedReferenceCount.ReferenceController);
    local_218.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_1f8._padding_ = local_b8._padding_;
    local_220 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1f8._padding_,&local_218);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_1f8.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_1f8.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f8.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_1f8.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f8.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_1f8.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f8.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_1f8.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f8.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_1f8.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f8.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_1f8.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1f8._padding_);
    FSlateApplication::ProcessReply
              (param_1,this,__return_storage_ptr__,this,&local_138,local_138._padding_._4_4_);
    FPointerEvent::~FPointerEvent(&local_138);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    cVar3 = (char)__return_storage_ptr__->_padding_;
    param_2->WidgetIndex = iVar4 + -1;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_238);
  FPointerEvent::~FPointerEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FBubblePolicy,FPointerEvent,`FSlateApplication::RoutePointerDownEvent'::__l5::<lambda_2>_> @ 1426a2ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FBubblePolicy,FPointerEvent,_FSlateApplication::RoutePointerDownEvent_::__l5::<lambda_2>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FPointerEvent *param_3,<lambda_2> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  FReply *pFVar7;
  undefined1 auStackY_388 [32];
  FScopeRouteInputEvent local_358 [8];
  FSlateApplication *local_350;
  TSharedPtr<SWidget,1> local_348;
  TSharedPtr<SWidget,1> local_338;
  undefined8 local_328;
  FSharedReferencer<1> local_320;
  longlong local_318;
  longlong lStack_310;
  longlong local_308;
  longlong lStack_300;
  longlong local_2f8;
  longlong lStack_2f0;
  longlong local_2e8;
  SWidget *local_2e0;
  TReferenceControllerBase<1> *local_2d8;
  TOptional<FVirtualPointerPosition> local_2d0;
  FReply local_2b8;
  FPointerEvent local_1f8;
  FReply local_178;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_350 = param_1;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_358,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  do {
    if ((cVar3 != '\0') || (iVar4 = param_2->WidgetIndex, iVar4 < 0)) {
      FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_358);
      FPointerEvent::~FPointerEvent(param_3);
      return __return_storage_ptr__;
    }
    pTVar5 = FWidgetPath::GetVirtualPointerPosition(this,&local_2d0,iVar4);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    if (local_b8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_1f8,param_3);
    }
    else {
      local_2d0.TypedValue.CurrentCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      local_2d0.TypedValue.LastCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_1f8,param_3);
      local_1f8.ScreenSpacePosition = local_2d0.TypedValue.CurrentCursorPosition;
      local_1f8.LastScreenSpacePosition = local_2d0.TypedValue.LastCursorPosition;
    }
    local_2e0 = (SWidget *)local_b8._padding_;
    local_2d8 = (TReferenceControllerBase<1> *)local_b8._padding_;
    local_318 = local_b8._padding_;
    lStack_310 = local_b8._padding_;
    local_308 = local_b8._padding_;
    lStack_300 = local_b8._padding_;
    local_2e8 = local_b8._padding_;
    local_2f8 = local_b8._padding_;
    lStack_2f0 = local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    FReply::FReply(&local_2b8,false);
    if ((char)local_2b8._padding_ == '\0') {
      if (local_1f8.bIsTouchEvent != false) {
        pFVar7 = (FReply *)
                 (**(code **)(local_2e0->_padding_ + 0xe8))
                           (local_2e0,&local_178,&local_318,&local_1f8);
        FReply::operator=(&local_2b8,pFVar7);
        FReply::~FReply(&local_178);
        local_348.Object = local_2e0;
        local_348.SharedReferenceCount.ReferenceController = local_2d8;
        if (local_2d8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_2d8->SharedReferenceCount = (atomic<int>)((int)local_2d8->SharedReferenceCount + 1);
          UNLOCK();
        }
        FSlateDebugging::BroadcastInputEvent
                  (TouchStart,(FInputEvent *)&local_1f8,&local_2b8,&local_348);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_348.SharedReferenceCount.ReferenceController);
        if ((local_1f8.bIsTouchEvent != false) &&
           (((char)local_2b8._padding_ != '\0' || (param_4->__this->bTouchFallbackToMouse == false))
           )) goto LAB_1426a2f1b;
      }
      pFVar7 = (FReply *)
               (**(code **)(local_2e0->_padding_ + 0x58))
                         (local_2e0,&local_178,&local_318,&local_1f8);
      FReply::operator=(&local_2b8,pFVar7);
      FReply::~FReply(&local_178);
      local_338.Object = local_2e0;
      local_338.SharedReferenceCount.ReferenceController = local_2d8;
      if (local_2d8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_2d8->SharedReferenceCount = (atomic<int>)((int)local_2d8->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (MouseButtonDown,(FInputEvent *)&local_1f8,&local_2b8,&local_338);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338.SharedReferenceCount.ReferenceController);
    }
LAB_1426a2f1b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2d8);
    local_320.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_2b8._padding_ = local_b8._padding_;
    local_328 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_2b8._padding_,&local_320);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_320.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_2b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b8.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b8.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_2b8.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2b8.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2b8.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_2b8.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_2b8.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2b8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2b8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_2b8.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_2b8.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2b8.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2b8.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_2b8.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_2b8.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2b8.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2b8.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_2b8.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_2b8.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2b8.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2b8.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_2b8.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_2b8.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_2b8.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_2b8.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_2b8.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2b8._padding_);
    FSlateApplication::ProcessReply
              (local_350,this,__return_storage_ptr__,this,&local_1f8,local_1f8._padding_._4_4_);
    FPointerEvent::~FPointerEvent(&local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    cVar3 = (char)__return_storage_ptr__->_padding_;
    param_2->WidgetIndex = iVar4 + -1;
  } while( true );
}

// Route<FReply,FEventRouter::FBubblePolicy,FPointerEvent,`FSlateApplication::RoutePointerUpEvent'::__l10::<lambda_3>_> @ 1426a3100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001426a34ec) */
/* WARNING: Removing unreachable block (ram,0x0001426a339a) */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FBubblePolicy,FPointerEvent,_FSlateApplication::RoutePointerUpEvent_::__l10::<lambda_3>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FPointerEvent *param_3,<lambda_3> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> aVar1;
  char cVar2;
  int iVar3;
  FWidgetPath *this;
  FDeprecateSlateVector2D FVar4;
  FDeprecateSlateVector2D FVar5;
  TOptional<FVirtualPointerPosition> *pTVar6;
  FArrangedWidget *pFVar7;
  FReply *pFVar8;
  atomic<int> *paVar9;
  undefined1 auStackY_378 [32];
  FScopeRouteInputEvent local_348 [16];
  undefined1 local_338 [10];
  bool local_32e;
  uint local_32c;
  FInputDeviceId local_328;
  TIntPoint<int>_u_0 local_320;
  ulong64 local_318;
  FDeprecateSlateVector2D local_310;
  FDeprecateSlateVector2D local_308;
  FDeprecateSlateVector2D local_300;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *local_2f8;
  FName local_2f0;
  FKeyDetails *local_2e8;
  FSharedReferencer<1> local_2e0;
  uint local_2d8;
  uint local_2d4;
  float local_2d0;
  bool local_2cc;
  EGestureEvent local_2cb;
  FDeprecateSlateVector2D local_2c8;
  bool local_2c0;
  bool local_2bf;
  bool local_2be;
  undefined4 local_2b8;
  FSlateApplication *local_2b0;
  FBubblePolicy *local_2a8;
  TSharedPtr<SWidget,1> local_2a0;
  TSharedPtr<SWidget,1> local_290;
  TSharedPtr<SWidget,1> local_280;
  undefined8 local_270;
  FSharedReferencer<1> local_268 [2];
  undefined1 local_258 [10];
  bool local_24e;
  uint local_24c;
  FInputDeviceId local_248;
  TIntPoint<int>_u_0 local_240;
  ulong64 local_238;
  FDeprecateSlateVector2D local_230;
  FWeakReferencer<1> local_228;
  FDeprecateSlateVector2D local_220;
  FWeakReferencer<1> local_218;
  FName local_210;
  FWeakReferencer<1> local_208;
  FSharedReferencer<1> local_200;
  uint local_1f8;
  uint local_1f4;
  float local_1f0;
  bool local_1ec;
  EGestureEvent local_1eb;
  FWeakReferencer<1> local_1e8;
  bool local_1e0;
  bool local_1df;
  bool local_1de;
  FWeakReferencer<1> local_1d8;
  FName local_1d0;
  FReply local_198;
  TOptional<FVirtualPointerPosition> local_e0;
  FWidgetAndPointer local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_2b8 = 0;
  local_2b0 = param_1;
  local_2a8 = param_2;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_348,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar2 = (char)__return_storage_ptr__->_padding_;
  do {
    if ((cVar2 != '\0') || (iVar3 = param_2->WidgetIndex, iVar3 < 0)) {
      FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_348);
      FPointerEvent::~FPointerEvent(param_3);
      return __return_storage_ptr__;
    }
    pTVar6 = FWidgetPath::GetVirtualPointerPosition(this,&local_e0,iVar3);
    pFVar7 = FArrangedChildren::operator[](&this->Widgets,iVar3);
    FWidgetAndPointer::FWidgetAndPointer(&local_c8,pFVar7,pTVar6);
    FVar5 = local_c8.OptionalPointerPosition.TypedValue.LastCursorPosition;
    FVar4 = local_c8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
    if (local_c8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent((FPointerEvent *)local_338,param_3);
    }
    else {
      FPointerEvent::FPointerEvent((FPointerEvent *)local_338,param_3);
      local_310 = FVar4;
      local_308 = FVar5;
    }
    if (*param_4->bIsDragDropping == false) {
      FReply::FReply(&local_198,false);
      if (local_2cc != false) {
        pFVar8 = (FReply *)
                 (**(code **)(*(longlong *)local_c8._padding_ + 0xf8))
                           (local_c8._padding_,local_258,&local_c8,local_338);
        FReply::operator=(&local_198,pFVar8);
        FReply::~FReply((FReply *)local_258);
        local_290.Object = (SWidget *)local_c8._padding_;
        local_290.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)local_c8._padding_;
        if ((TReferenceControllerBase<1> *)local_c8._padding_ != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          *(atomic<int> *)(local_c8._padding_ + 8) =
               (atomic<int>)((int)*(atomic<int> *)(local_c8._padding_ + 8) + 1);
          UNLOCK();
        }
        FSlateDebugging::BroadcastInputEvent
                  (TouchEnd,(FInputEvent *)local_338,&local_198,&local_290);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_290.SharedReferenceCount.ReferenceController);
        if ((local_2cc != false) &&
           (((char)local_198._padding_ != '\0' || (param_4->__this->bTouchFallbackToMouse == false))
           )) goto LAB_1426a34fb;
      }
      pFVar8 = (FReply *)
               (**(code **)(*(longlong *)local_c8._padding_ + 0x68))
                         (local_c8._padding_,local_258,&local_c8,local_338);
      FReply::operator=(&local_198,pFVar8);
      FReply::~FReply((FReply *)local_258);
      local_280.Object = (SWidget *)local_c8._padding_;
      local_280.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_c8._padding_;
      if ((TReferenceControllerBase<1> *)local_c8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_c8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_c8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (MouseButtonUp,(FInputEvent *)local_338,&local_198,&local_280);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_280.SharedReferenceCount.ReferenceController);
    }
    else {
      local_1d0 = (FName)(param_4->LocalDragDropContent->SharedReferenceCount).ReferenceController;
      local_1d8.ReferenceController =
           (TReferenceControllerBase<1> *)param_4->LocalDragDropContent->Object;
      if (local_1d0 == (FName)0x0) {
        paVar9 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar9 = (atomic<int> *)((longlong)local_1d0 + 8);
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      local_258._8_2_ = local_338._8_2_;
      local_24e = local_32e;
      local_24c = local_32c;
      local_248.InternalId = local_328.InternalId;
      local_240 = local_320;
      local_238 = local_318;
      local_230 = local_310;
      local_228.ReferenceController = (TReferenceControllerBase<1> *)local_308;
      local_220 = local_300;
      local_218.ReferenceController = (TReferenceControllerBase<1> *)local_2f8;
      local_210 = local_2f0;
      local_208.ReferenceController = (TReferenceControllerBase<1> *)local_2e8;
      local_200.ReferenceController = local_2e0.ReferenceController;
      if (local_2e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_2e0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_2e0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1f8 = local_2d8;
      local_1f4 = local_2d4;
      local_1ec = local_2cc;
      local_1eb = local_2cb;
      local_1e8.ReferenceController = (TReferenceControllerBase<1> *)local_2c8;
      local_1e0 = local_2c0;
      local_1df = local_2bf;
      local_1de = local_2be;
      local_258._0_8_ = &___7FDragDropEvent__6B_;
      local_1f0 = local_2d0;
      if (local_1d0 != (FName)0x0) {
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1d0);
      (**(code **)(*(longlong *)local_c8._padding_ + 0xd8))
                (local_c8._padding_,&local_198,&local_c8,local_258);
      local_2a0.Object = (SWidget *)local_c8._padding_;
      local_2a0.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_c8._padding_;
      if ((TReferenceControllerBase<1> *)local_c8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_c8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_c8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent(DragDrop,(FInputEvent *)local_258,&local_198,&local_2a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1d0);
      FPointerEvent::~FPointerEvent((FPointerEvent *)local_258);
    }
LAB_1426a34fb:
    local_268[0].ReferenceController = (TReferenceControllerBase<1> *)local_c8._padding_;
    if ((TReferenceControllerBase<1> *)local_c8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_c8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_c8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_198._padding_ = local_c8._padding_;
    local_270 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_198._padding_,local_268);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268[0].ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_198.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar9 = &(local_198.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar1 = *paVar9;
      *paVar9 = (atomic<int>)((int)*paVar9 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_198.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_198.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_198.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar9 = &(local_198.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar1 = *paVar9;
      *paVar9 = (atomic<int>)((int)*paVar9 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_198.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_198.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_198.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar9 = &(local_198.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar1 = *paVar9;
      *paVar9 = (atomic<int>)((int)*paVar9 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_198.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_198.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_198.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar9 = &(local_198.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar1 = *paVar9;
      *paVar9 = (atomic<int>)((int)*paVar9 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_198.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_198.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_198.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar9 = &(local_198.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar1 = *paVar9;
      *paVar9 = (atomic<int>)((int)*paVar9 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_198.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_198.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_198.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar9 = &(local_198.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar1 = *paVar9;
      *paVar9 = (atomic<int>)((int)*paVar9 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_198.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_198.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_198._padding_);
    FSlateApplication::ProcessReply
              (local_2b0,this,__return_storage_ptr__,this,(FPointerEvent *)local_338,local_32c);
    FPointerEvent::~FPointerEvent((FPointerEvent *)local_338);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_c8._padding_);
    cVar2 = (char)__return_storage_ptr__->_padding_;
    local_2a8->WidgetIndex = iVar3 + -1;
    param_2 = local_2a8;
  } while( true );
}

// Route<FReply,FEventRouter::FBubblePolicy,FPointerEvent,`FSlateApplication::RoutePointerMoveEvent'::__l54::<lambda_6>_> @ 1426a36f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FBubblePolicy,FPointerEvent,_FSlateApplication::RoutePointerMoveEvent_::__l54::<lambda_6>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FBubblePolicy *param_2,
          FPointerEvent *param_3,<lambda_6> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  FReply *pFVar7;
  undefined1 auStackY_268 [32];
  FScopeRouteInputEvent local_238 [8];
  SWidget *local_230;
  FSharedReferencer<1> local_228;
  <lambda_6> *local_220;
  TOptional<FVirtualPointerPosition> local_218;
  FPointerEvent local_1f8;
  FReply local_178;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_220 = param_4;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_238,param_5,&FBubblePolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while ((cVar3 == '\0' && (iVar4 = param_2->WidgetIndex, -1 < iVar4))) {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition(this,&local_218,iVar4);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    if (local_b8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_1f8,param_3);
    }
    else {
      local_218.TypedValue.CurrentCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      local_218.TypedValue.LastCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_1f8,param_3);
      local_1f8.ScreenSpacePosition = local_218.TypedValue.CurrentCursorPosition;
      local_1f8.LastScreenSpacePosition = local_218.TypedValue.LastCursorPosition;
    }
    pFVar7 = `FSlateApplication::RoutePointerMoveEvent'::__l54::<lambda_6>::operator()
                       (local_220,&local_178,(FArrangedWidget *)&local_b8,&local_1f8);
    local_230 = (SWidget *)local_b8._padding_;
    local_228.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar7->_padding_ != &local_230) {
      pFVar7->_padding_ = local_b8._padding_;
      local_230 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_228);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.ReferenceController);
    FReply::operator=(__return_storage_ptr__,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_178.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_178.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_178.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_178.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_178.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_178.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_178.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_178.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_178.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_178.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_178.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_178.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_178.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_178.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_178.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_178.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_178.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_178.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_178.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_178.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_178.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_178.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_178.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_178.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_178._padding_);
    FSlateApplication::ProcessReply
              (param_1,this,__return_storage_ptr__,this,&local_1f8,local_1f8._padding_._4_4_);
    FPointerEvent::~FPointerEvent(&local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    cVar3 = (char)__return_storage_ptr__->_padding_;
    param_2->WidgetIndex = iVar4 + -1;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_238);
  FPointerEvent::~FPointerEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FDirectPolicy,FPointerEvent,`FSlateApplication::RoutePointerMoveEvent'::__l8::<lambda_1>_> @ 1426a39f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FDirectPolicy,FPointerEvent,_FSlateApplication::RoutePointerMoveEvent_::__l8::<lambda_1>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FDirectPolicy *param_2,
          FPointerEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  FWidgetPath *pFVar4;
  FWidgetPath *pFVar5;
  FWidgetAndPointer *pFVar6;
  FDeprecateSlateVector2D FVar7;
  FDeprecateSlateVector2D FVar8;
  undefined1 auStackY_258 [32];
  FScopeRouteInputEvent local_228 [8];
  TSharedPtr<SWidget,1> local_220;
  undefined8 local_210;
  FSharedReferencer<1> local_208;
  FDeprecateSlateVector2D local_200;
  FDeprecateSlateVector2D FStack_1f8;
  FReply local_1f0;
  FPointerEvent local_138;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  SWidget *local_80;
  TReferenceControllerBase<1> *local_78;
  FDeprecateSlateVector2D local_70;
  FDeprecateSlateVector2D FStack_68;
  char local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  FReply::FReply(__return_storage_ptr__,false);
  pFVar4 = param_2->RoutingPath;
  pFVar5 = param_2->WidgetsUnderCursor;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_228,param_5,&FDirectPolicy::Name);
  param_3->_padding_ = (longlong)pFVar4;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  FVar7 = local_200;
  FVar8 = FStack_1f8;
  local_200 = local_70;
  FStack_1f8 = FStack_68;
  while ((local_70 = local_200, FStack_68 = FStack_1f8, cVar3 == '\0' &&
         (param_2->bEventSent == false))) {
    pFVar6 = param_2->Target;
    local_b8 = pFVar6->_padding_;
    lStack_b0 = pFVar6->_padding_;
    local_a8 = pFVar6->_padding_;
    lStack_a0 = pFVar6->_padding_;
    local_98 = pFVar6->_padding_;
    lStack_90 = pFVar6->_padding_;
    local_88 = pFVar6->_padding_;
    local_80 = (SWidget *)pFVar6->_padding_;
    local_78 = (TReferenceControllerBase<1> *)pFVar6->_padding_;
    if (local_78 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = (pFVar6->OptionalPointerPosition).bIsSet;
    if ((bool)local_60 == false) {
      FPointerEvent::FPointerEvent(&local_138,param_3);
    }
    else {
      local_200 = (pFVar6->OptionalPointerPosition).TypedValue.CurrentCursorPosition;
      FStack_1f8 = (pFVar6->OptionalPointerPosition).TypedValue.LastCursorPosition;
      local_70 = local_200;
      FStack_68 = FStack_1f8;
      FPointerEvent::FPointerEvent(&local_138,param_3);
      local_138.ScreenSpacePosition = local_200;
      local_138.LastScreenSpacePosition = FStack_1f8;
    }
    (**(code **)(local_80->_padding_ + 0xb8))(local_80,&local_1f0,&local_b8,&local_138);
    local_220.Object = local_80;
    local_220.SharedReferenceCount.ReferenceController = local_78;
    if (local_78 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateDebugging::BroadcastInputEvent
              (DragDetected,(FInputEvent *)&local_138,&local_1f0,&local_220);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_220.SharedReferenceCount.ReferenceController);
    local_208.ReferenceController = local_78;
    if (local_78 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1f0._padding_ = (longlong)local_80;
    local_210 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1f0._padding_,&local_208);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_1f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_1f0.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_1f0.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f0.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_1f0.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f0.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_1f0.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f0.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_1f0.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f0.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_1f0.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f0.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_1f0.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1f0._padding_);
    FSlateApplication::ProcessReply
              (param_1,pFVar4,__return_storage_ptr__,pFVar5,&local_138,local_138._padding_._4_4_);
    FPointerEvent::~FPointerEvent(&local_138);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
    param_2->bEventSent = true;
    cVar3 = (char)__return_storage_ptr__->_padding_;
    FVar7 = local_200;
    FVar8 = FStack_1f8;
    local_200 = local_70;
    FStack_1f8 = FStack_68;
  }
  local_200 = FVar7;
  FStack_1f8 = FVar8;
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_228);
  FPointerEvent::~FPointerEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FToLeafmostPolicy,FPointerEvent,`FSlateApplication::ProcessMouseButtonDownEvent'::__l17::<lambda_1>_> @ 1426a3d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FToLeafmostPolicy,FPointerEvent,_FSlateApplication::ProcessMouseButtonDownEvent_::__l17::<lambda_1>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FToLeafmostPolicy *param_2,
          FPointerEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  undefined1 auStackY_268 [32];
  FScopeRouteInputEvent local_238 [8];
  TSharedPtr<SWidget,1> local_230;
  undefined8 local_220;
  FSharedReferencer<1> local_218;
  TOptional<FVirtualPointerPosition> local_210;
  FReply local_1f8;
  FPointerEvent local_138;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_238,param_5,&FToLeafmostPolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while (((cVar3 == '\0' && (param_2->bEventSent == false)) &&
         (iVar4 = (this->Widgets).Array.ArrayNum, 0 < iVar4))) {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition(this,&local_210,iVar4 + -1);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4 + -1);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    if (local_b8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_138,param_3);
    }
    else {
      local_210.TypedValue.CurrentCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      local_210.TypedValue.LastCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_138,param_3);
      local_138.ScreenSpacePosition = local_210.TypedValue.CurrentCursorPosition;
      local_138.LastScreenSpacePosition = local_210.TypedValue.LastCursorPosition;
    }
    (**(code **)(*(longlong *)local_b8._padding_ + 0x60))
              (local_b8._padding_,&local_1f8,&local_b8,&local_138);
    local_230.Object = (SWidget *)local_b8._padding_;
    local_230.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    FSlateDebugging::BroadcastInputEvent
              (PreviewMouseButtonDown,(FInputEvent *)&local_138,&local_1f8,&local_230);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_230.SharedReferenceCount.ReferenceController);
    local_218.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_1f8._padding_ = local_b8._padding_;
    local_220 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1f8._padding_,&local_218);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_1f8.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_1f8.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f8.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_1f8.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f8.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_1f8.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f8.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_1f8.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f8.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_1f8.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f8.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f8.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f8.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_1f8.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1f8._padding_);
    FSlateApplication::ProcessReply
              (param_1,this,__return_storage_ptr__,this,&local_138,local_138._padding_._4_4_);
    FPointerEvent::~FPointerEvent(&local_138);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    cVar3 = (char)__return_storage_ptr__->_padding_;
    param_2->bEventSent = true;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_238);
  FPointerEvent::~FPointerEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FToLeafmostPolicy,FPointerEvent,`FSlateApplication::RoutePointerUpEvent'::__l8::<lambda_2>_> @ 1426a4050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FToLeafmostPolicy,FPointerEvent,_FSlateApplication::RoutePointerUpEvent_::__l8::<lambda_2>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FToLeafmostPolicy *param_2,
          FPointerEvent *param_3,<lambda_2> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  FSlateApplication *pFVar5;
  TOptional<FVirtualPointerPosition> *pTVar6;
  FArrangedWidget *pFVar7;
  FReply *pFVar8;
  undefined1 auStackY_348 [32];
  FScopeRouteInputEvent local_318 [8];
  FSlateApplication *local_310;
  TSharedPtr<SWidget,1> local_308;
  TSharedPtr<SWidget,1> local_2f8;
  TSharedPtr<SWidget,1> local_2e8;
  undefined8 local_2d8;
  FSharedReferencer<1> local_2d0;
  TOptional<FVirtualPointerPosition> local_2c8;
  FPointerEvent local_2a8;
  FReply local_228;
  FReply local_170;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_310 = param_1;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_318,param_5,&FToLeafmostPolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  do {
    if (((cVar3 != '\0') || (param_2->bEventSent != false)) ||
       (iVar4 = (this->Widgets).Array.ArrayNum, iVar4 < 1)) {
      FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_318);
      FPointerEvent::~FPointerEvent(param_3);
      return __return_storage_ptr__;
    }
    pTVar6 = FWidgetPath::GetVirtualPointerPosition(this,&local_2c8,iVar4 + -1);
    pFVar7 = FArrangedChildren::operator[](&this->Widgets,iVar4 + -1);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar7,pTVar6);
    if (local_b8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_2a8,param_3);
    }
    else {
      local_2c8.TypedValue.CurrentCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      local_2c8.TypedValue.LastCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_2a8,param_3);
      local_2a8.ScreenSpacePosition = local_2c8.TypedValue.CurrentCursorPosition;
      local_2a8.LastScreenSpacePosition = local_2c8.TypedValue.LastCursorPosition;
    }
    FReply::FReply(&local_228,false);
    if (local_2a8.bIsTouchEvent == false) {
LAB_1426a4203:
      pFVar8 = (FReply *)
               (**(code **)(*(longlong *)local_b8._padding_ + 0x68))
                         (local_b8._padding_,&local_170,&local_b8,&local_2a8);
      FReply::operator=(&local_228,pFVar8);
      FReply::~FReply(&local_170);
      local_2f8.Object = (SWidget *)local_b8._padding_;
      local_2f8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (MouseButtonUp,(FInputEvent *)&local_2a8,&local_228,&local_2f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f8.SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar8 = (FReply *)
               (**(code **)(*(longlong *)local_b8._padding_ + 0xf8))
                         (local_b8._padding_,&local_170,&local_b8,&local_2a8);
      FReply::operator=(&local_228,pFVar8);
      FReply::~FReply(&local_170);
      local_308.Object = (SWidget *)local_b8._padding_;
      local_308.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent(TouchEnd,(FInputEvent *)&local_2a8,&local_228,&local_308)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_308.SharedReferenceCount.ReferenceController);
      if ((local_2a8.bIsTouchEvent == false) ||
         (((char)local_228._padding_ == '\0' && (param_4->__this->bTouchFallbackToMouse != false))))
      goto LAB_1426a4203;
    }
    if ((local_2a8.bIsTouchEvent != false) &&
       ((pFVar5 = param_4->__this, pFVar5->bAllowFakingTouch == false ||
        ((pFVar5->bIsFakingTouch == false && (pFVar5->bIsGameFakingTouch == false)))))) {
      (**(code **)(*(longlong *)local_b8._padding_ + 0x80))(local_b8._padding_,&local_2a8);
      local_2e8.Object = (SWidget *)local_b8._padding_;
      local_2e8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent(MouseLeave,(FInputEvent *)&local_2a8,&local_2e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e8.SharedReferenceCount.ReferenceController);
    }
    local_2d0.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_228._padding_ = local_b8._padding_;
    local_2d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_228._padding_,&local_2d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d0.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_228);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_228.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_228.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_228.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_228.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_228.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_228.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_228._padding_);
    FSlateApplication::ProcessReply
              (local_310,this,__return_storage_ptr__,this,&local_2a8,local_2a8._padding_._4_4_);
    FPointerEvent::~FPointerEvent(&local_2a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    cVar3 = (char)__return_storage_ptr__->_padding_;
    param_2->bEventSent = true;
  } while( true );
}

// Route<FReply,FEventRouter::FToLeafmostPolicy,FPointerEvent,`FSlateApplication::ProcessMouseButtonDownEvent'::__l20::<lambda_2>_> @ 1426a44d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FToLeafmostPolicy,FPointerEvent,_FSlateApplication::ProcessMouseButtonDownEvent_::__l20::<lambda_2>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FToLeafmostPolicy *param_2,
          FPointerEvent *param_3,<lambda_2> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  FReply *pFVar7;
  undefined1 auStackY_338 [32];
  FScopeRouteInputEvent local_308 [8];
  FSlateApplication *local_300;
  TSharedPtr<SWidget,1> local_2f8;
  TSharedPtr<SWidget,1> local_2e8;
  undefined8 local_2d8;
  FSharedReferencer<1> local_2d0;
  TOptional<FVirtualPointerPosition> local_2c8;
  FPointerEvent local_2a8;
  FReply local_228;
  FReply local_170;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_300 = param_1;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_308,param_5,&FToLeafmostPolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  do {
    if (((cVar3 != '\0') || (param_2->bEventSent != false)) ||
       (iVar4 = (this->Widgets).Array.ArrayNum, iVar4 < 1)) {
      FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_308);
      FPointerEvent::~FPointerEvent(param_3);
      return __return_storage_ptr__;
    }
    pTVar5 = FWidgetPath::GetVirtualPointerPosition(this,&local_2c8,iVar4 + -1);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4 + -1);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    if (local_b8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_2a8,param_3);
    }
    else {
      local_2c8.TypedValue.CurrentCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      local_2c8.TypedValue.LastCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_2a8,param_3);
      local_2a8.ScreenSpacePosition = local_2c8.TypedValue.CurrentCursorPosition;
      local_2a8.LastScreenSpacePosition = local_2c8.TypedValue.LastCursorPosition;
    }
    FReply::FReply(&local_228,false);
    if (local_2a8.bIsTouchEvent == false) {
LAB_1426a4685:
      pFVar7 = (FReply *)
               (**(code **)(*(longlong *)local_b8._padding_ + 0x58))
                         (local_b8._padding_,&local_170,&local_b8,&local_2a8);
      FReply::operator=(&local_228,pFVar7);
      FReply::~FReply(&local_170);
      local_2e8.Object = (SWidget *)local_b8._padding_;
      local_2e8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (MouseButtonDown,(FInputEvent *)&local_2a8,&local_228,&local_2e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e8.SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar7 = (FReply *)
               (**(code **)(*(longlong *)local_b8._padding_ + 0xe8))
                         (local_b8._padding_,&local_170,&local_b8,&local_2a8);
      FReply::operator=(&local_228,pFVar7);
      FReply::~FReply(&local_170);
      local_2f8.Object = (SWidget *)local_b8._padding_;
      local_2f8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (TouchStart,(FInputEvent *)&local_2a8,&local_228,&local_2f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f8.SharedReferenceCount.ReferenceController);
      if ((local_2a8.bIsTouchEvent == false) ||
         (((char)local_228._padding_ == '\0' && (param_4->__this->bTouchFallbackToMouse != false))))
      goto LAB_1426a4685;
    }
    local_2d0.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_228._padding_ = local_b8._padding_;
    local_2d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_228._padding_,&local_2d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d0.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_228);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_228.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_228.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_228.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_228.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_228.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_228.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_228._padding_);
    FSlateApplication::ProcessReply
              (local_300,this,__return_storage_ptr__,this,&local_2a8,local_2a8._padding_._4_4_);
    FPointerEvent::~FPointerEvent(&local_2a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    cVar3 = (char)__return_storage_ptr__->_padding_;
    param_2->bEventSent = true;
  } while( true );
}

// Route<FReply,FEventRouter::FToLeafmostPolicy,FPointerEvent,`FSlateApplication::RoutePointerMoveEvent'::__l52::<lambda_3>_> @ 1426a48e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FToLeafmostPolicy,FPointerEvent,_FSlateApplication::RoutePointerMoveEvent_::__l52::<lambda_3>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FToLeafmostPolicy *param_2,
          FPointerEvent *param_3,<lambda_3> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  longlong lVar5;
  bool bVar6;
  TOptional<FVirtualPointerPosition> *pTVar7;
  FArrangedWidget *pFVar8;
  FReply *pFVar9;
  undefined1 auStackY_358 [32];
  FScopeRouteInputEvent local_328 [8];
  FSlateApplication *local_320;
  TSharedPtr<SWidget,1> local_318;
  TSharedPtr<SWidget,1> local_308;
  TSharedPtr<SWidget,1> local_2f8;
  TSharedPtr<SWidget,1> local_2e8;
  undefined8 local_2d8;
  FSharedReferencer<1> local_2d0;
  TOptional<FVirtualPointerPosition> local_2c8;
  FPointerEvent local_2a8;
  FReply local_228;
  FReply local_170;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_320 = param_1;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_328,param_5,&FToLeafmostPolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  do {
    if (((cVar3 != '\0') || (param_2->bEventSent != false)) ||
       (iVar4 = (this->Widgets).Array.ArrayNum, iVar4 < 1)) {
      FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_328);
      FPointerEvent::~FPointerEvent(param_3);
      return __return_storage_ptr__;
    }
    pTVar7 = FWidgetPath::GetVirtualPointerPosition(this,&local_2c8,iVar4 + -1);
    pFVar8 = FArrangedChildren::operator[](&this->Widgets,iVar4 + -1);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar8,pTVar7);
    if (local_b8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_2a8,param_3);
    }
    else {
      local_2c8.TypedValue.CurrentCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      local_2c8.TypedValue.LastCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_2a8,param_3);
      local_2a8.ScreenSpacePosition = local_2c8.TypedValue.CurrentCursorPosition;
      local_2a8.LastScreenSpacePosition = local_2c8.TypedValue.LastCursorPosition;
    }
    FReply::FReply(&local_228,false);
    bVar6 = true;
    if (local_2a8.bIsTouchEvent == false) {
LAB_1426a4b68:
      if (param_4->bIsSynthetic == false) {
        pFVar9 = (FReply *)
                 (**(code **)(*(longlong *)local_b8._padding_ + 0x70))
                           (local_b8._padding_,&local_170,&local_b8,&local_2a8);
        FReply::operator=(&local_228,pFVar9);
        FReply::~FReply(&local_170);
      }
      local_2e8.Object = (SWidget *)local_b8._padding_;
      local_2e8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (MouseMove,(FInputEvent *)&local_2a8,&local_228,&local_2e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e8.SharedReferenceCount.ReferenceController);
    }
    else {
      lVar5 = *(longlong *)local_b8._padding_;
      if (local_2a8.bIsTouchForceChanged == false) {
        if (local_2a8.bIsTouchFirstMove == false) {
          pFVar9 = (FReply *)
                   (**(code **)(lVar5 + 0xf0))(local_b8._padding_,&local_170,&local_b8,&local_2a8);
          FReply::operator=(&local_228,pFVar9);
          FReply::~FReply(&local_170);
          local_2f8.Object = (SWidget *)local_b8._padding_;
          local_2f8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)local_b8._padding_;
          if ((TReferenceControllerBase<1> *)local_b8._padding_ !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *(atomic<int> *)(local_b8._padding_ + 8) =
                 (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
            UNLOCK();
          }
          FSlateDebugging::BroadcastInputEvent
                    (TouchMoved,(FInputEvent *)&local_2a8,&local_228,&local_2f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f8.SharedReferenceCount.ReferenceController);
        }
        else {
          pFVar9 = (FReply *)(**(code **)(lVar5 + 0x108))();
          FReply::operator=(&local_228,pFVar9);
          FReply::~FReply(&local_170);
          local_308.Object = (SWidget *)local_b8._padding_;
          local_308.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)local_b8._padding_;
          if ((TReferenceControllerBase<1> *)local_b8._padding_ !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *(atomic<int> *)(local_b8._padding_ + 8) =
                 (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
            UNLOCK();
          }
          FSlateDebugging::BroadcastInputEvent
                    (TouchFirstMove,(FInputEvent *)&local_2a8,&local_228,&local_308);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_308.SharedReferenceCount.ReferenceController);
          bVar6 = false;
        }
      }
      else {
        pFVar9 = (FReply *)(**(code **)(lVar5 + 0x100))();
        FReply::operator=(&local_228,pFVar9);
        FReply::~FReply(&local_170);
        local_318.Object = (SWidget *)local_b8._padding_;
        local_318.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)local_b8._padding_;
        if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          *(atomic<int> *)(local_b8._padding_ + 8) =
               (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
          UNLOCK();
        }
        FSlateDebugging::BroadcastInputEvent
                  (TouchForceChanged,(FInputEvent *)&local_2a8,&local_228,&local_318);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_318.SharedReferenceCount.ReferenceController);
        bVar6 = false;
      }
      if (((local_2a8.bIsTouchEvent == false) && (bVar6)) ||
         (((char)local_228._padding_ == '\0' && (param_4->__this->bTouchFallbackToMouse != false))))
      goto LAB_1426a4b68;
    }
    local_2d0.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_228._padding_ = local_b8._padding_;
    local_2d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_228._padding_,&local_2d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d0.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_228);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_228.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_228.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_228.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_228.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_228.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_228.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_228.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_228.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_228.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_228.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_228._padding_);
    FSlateApplication::ProcessReply
              (local_320,this,__return_storage_ptr__,this,&local_2a8,local_2a8._padding_._4_4_);
    FPointerEvent::~FPointerEvent(&local_2a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    cVar3 = (char)__return_storage_ptr__->_padding_;
    param_2->bEventSent = true;
  } while( true );
}

// Route<FReply,FEventRouter::FTunnelPolicy,FKeyEvent,`FSlateApplication::ProcessKeyDownEvent'::__l10::<lambda_1>_> @ 1426a4dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FTunnelPolicy,FKeyEvent,_FSlateApplication::ProcessKeyDownEvent_::__l10::<lambda_1>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FTunnelPolicy *param_2,
          FKeyEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  FName FVar7;
  undefined1 auStackY_2b8 [32];
  FScopeRouteInputEvent local_288 [8];
  TSharedPtr<SWidget,1> local_280;
  TSharedPtr<SWidget,1> local_270;
  undefined8 local_260;
  FSharedReferencer<1> local_258;
  FKey local_250;
  FReply local_230;
  FReply local_178;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_288,param_5,&FTunnelPolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while ((cVar3 == '\0' && (iVar4 = param_2->WidgetIndex, iVar4 < (this->Widgets).Array.ArrayNum)))
  {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition
                       (this,(TOptional<FVirtualPointerPosition> *)&local_250,iVar4);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    if (*(TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
         (local_b8._padding_ + 0x3a) ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      local_270.Object = (SWidget *)local_b8._padding_;
      local_270.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastNoReplyInputEvent(PreviewKeyDown,(FInputEvent *)param_3,&local_270);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_270.SharedReferenceCount.ReferenceController);
      FReply::FReply(&local_230,false);
    }
    else {
      (**(code **)(*(longlong *)local_b8._padding_ + 0x38))
                (local_b8._padding_,&local_178,&local_b8,param_3);
      local_250.KeyName = (param_3->Key).KeyName;
      local_250.KeyDetails.Object = (param_3->Key).KeyDetails.Object;
      local_250.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_3->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_250.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_250.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_250.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar7 = FKey::GetFName(&local_250);
      local_280.Object = (SWidget *)local_b8._padding_;
      local_280.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_b8._padding_;
      if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
        UNLOCK();
      }
      FSlateDebugging::BroadcastInputEvent
                (PreviewKeyDown,(FInputEvent *)param_3,&local_178,&local_280,(FName *)FVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_280.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_250.KeyDetails.SharedReferenceCount.ReferenceController);
      FReply::FReply(&local_230,&local_178);
      FReply::~FReply(&local_178);
    }
    local_258.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_230._padding_ = local_b8._padding_;
    local_260 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_230._padding_,&local_258);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_230);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_230.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_230.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_230.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_230.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_230.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_230.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_230.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_230.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_230.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_230.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_230.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_230.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_230.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_230.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_230.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_230.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_230._padding_);
    FSlateApplication::ProcessReply
              (param_1,this,__return_storage_ptr__,this,(FPointerEvent *)0x0,
               *(uint *)((longlong)&param_3->_padding_ + 4));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    param_2->WidgetIndex = iVar4 + 1;
    cVar3 = (char)__return_storage_ptr__->_padding_;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_288);
  FKeyEvent::~FKeyEvent(param_3);
  return __return_storage_ptr__;
}

// Route<FReply,FEventRouter::FTunnelPolicy,FPointerEvent,`FSlateApplication::RoutePointerDownEvent'::__l2::<lambda_1>_> @ 1426a5130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
FEventRouter::
Route<FReply,FEventRouter::FTunnelPolicy,FPointerEvent,_FSlateApplication::RoutePointerDownEvent_::__l2::<lambda_1>_>
          (FReply *__return_storage_ptr__,FSlateApplication *param_1,FTunnelPolicy *param_2,
          FPointerEvent *param_3,<lambda_1> *param_4,ESlateDebuggingInputEvent param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  int iVar4;
  FWidgetPath *this;
  TOptional<FVirtualPointerPosition> *pTVar5;
  FArrangedWidget *pFVar6;
  undefined1 auStackY_2a8 [32];
  FScopeRouteInputEvent local_278 [8];
  TSharedPtr<SWidget,1> local_270;
  undefined8 local_260;
  FSharedReferencer<1> local_258;
  longlong local_250;
  longlong lStack_248;
  longlong local_240;
  longlong lStack_238;
  longlong local_230;
  longlong lStack_228;
  longlong local_220;
  SWidget *local_218;
  TReferenceControllerBase<1> *local_210;
  TOptional<FVirtualPointerPosition> local_208;
  FReply local_1f0;
  FPointerEvent local_138;
  FWidgetAndPointer local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FReply::FReply(__return_storage_ptr__,false);
  this = param_2->RoutingPath;
  FSlateDebugging::FScopeRouteInputEvent::FScopeRouteInputEvent
            (local_278,param_5,&FTunnelPolicy::Name);
  param_3->_padding_ = (longlong)this;
  cVar3 = (char)__return_storage_ptr__->_padding_;
  while ((cVar3 == '\0' && (iVar4 = param_2->WidgetIndex, iVar4 < (this->Widgets).Array.ArrayNum)))
  {
    pTVar5 = FWidgetPath::GetVirtualPointerPosition(this,&local_208,iVar4);
    pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
    FWidgetAndPointer::FWidgetAndPointer(&local_b8,pFVar6,pTVar5);
    if (local_b8.OptionalPointerPosition.bIsSet == false) {
      FPointerEvent::FPointerEvent(&local_138,param_3);
    }
    else {
      local_208.TypedValue.CurrentCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
      local_208.TypedValue.LastCursorPosition =
           local_b8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      FPointerEvent::FPointerEvent(&local_138,param_3);
      local_138.ScreenSpacePosition = local_208.TypedValue.CurrentCursorPosition;
      local_138.LastScreenSpacePosition = local_208.TypedValue.LastCursorPosition;
    }
    local_218 = (SWidget *)local_b8._padding_;
    local_210 = (TReferenceControllerBase<1> *)local_b8._padding_;
    local_250 = local_b8._padding_;
    lStack_248 = local_b8._padding_;
    local_240 = local_b8._padding_;
    lStack_238 = local_b8._padding_;
    local_220 = local_b8._padding_;
    local_230 = local_b8._padding_;
    lStack_228 = local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    (**(code **)(*(longlong *)local_b8._padding_ + 0x60))
              (local_b8._padding_,&local_1f0,&local_250,&local_138);
    local_270.Object = local_218;
    local_270.SharedReferenceCount.ReferenceController = local_210;
    if (local_210 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_210->SharedReferenceCount = (atomic<int>)((int)local_210->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateDebugging::BroadcastInputEvent
              (PreviewMouseButtonDown,(FInputEvent *)&local_138,&local_1f0,&local_270);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_270.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_210);
    local_258.ReferenceController = (TReferenceControllerBase<1> *)local_b8._padding_;
    if ((TReferenceControllerBase<1> *)local_b8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_b8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_b8._padding_ + 8) + 1);
      UNLOCK();
    }
    local_1f0._padding_ = local_b8._padding_;
    local_260 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1f0._padding_,&local_258);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.ReferenceController);
    FReply::operator=(__return_storage_ptr__,&local_1f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (local_1f0.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_1f0.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f0.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_1f0.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f0.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_1f0.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f0.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_1f0.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f0.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_1f0.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_1f0.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1f0.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1f0.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_1f0.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1f0._padding_);
    FSlateApplication::ProcessReply
              (param_1,this,__return_storage_ptr__,this,&local_138,local_138._padding_._4_4_);
    FPointerEvent::~FPointerEvent(&local_138);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
    cVar3 = (char)__return_storage_ptr__->_padding_;
    param_2->WidgetIndex = iVar4 + 1;
  }
  FSlateDebugging::FScopeRouteInputEvent::~FScopeRouteInputEvent(local_278);
  FPointerEvent::~FPointerEvent(param_3);
  return __return_storage_ptr__;
}

// StaticEnum<enum_ECustomizedToolMenuVisibility> @ 1426a54a0

UEnum * __cdecl StaticEnum<enum_ECustomizedToolMenuVisibility>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility,(UObject *)pUVar1,
                       L"ECustomizedToolMenuVisibility");
  }
  return Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton;
}

// StaticEnum<enum_EInputPreProcessorType> @ 1426a54e0

UEnum * __cdecl StaticEnum<enum_EInputPreProcessorType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputPreProcessorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EInputPreProcessorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EInputPreProcessorType,(UObject *)pUVar1,
                       L"EInputPreProcessorType");
  }
  return Z_Registration_Info_UEnum_EInputPreProcessorType.OuterSingleton;
}

// StaticEnum<enum_EMultiBlockType> @ 1426a5520

UEnum * __cdecl StaticEnum<enum_EMultiBlockType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMultiBlockType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EMultiBlockType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EMultiBlockType,(UObject *)pUVar1,L"EMultiBlockType")
    ;
  }
  return Z_Registration_Info_UEnum_EMultiBlockType.OuterSingleton;
}

// StaticEnum<enum_EMultiBoxType> @ 1426a5560

UEnum * __cdecl StaticEnum<enum_EMultiBoxType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMultiBoxType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EMultiBoxType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EMultiBoxType,(UObject *)pUVar1,L"EMultiBoxType");
  }
  return Z_Registration_Info_UEnum_EMultiBoxType.OuterSingleton;
}

// StaticEnum<enum_EPopupLayoutMode> @ 1426a55a0

UEnum * __cdecl StaticEnum<enum_EPopupLayoutMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPopupLayoutMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EPopupLayoutMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EPopupLayoutMode,(UObject *)pUVar1,
                       L"EPopupLayoutMode");
  }
  return Z_Registration_Info_UEnum_EPopupLayoutMode.OuterSingleton;
}

// StaticEnum<enum_ESelectionMode::Type> @ 1426a55e0

UEnum * __cdecl StaticEnum<enum_ESelectionMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESelectionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ESelectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ESelectionMode,(UObject *)pUVar1,L"ESelectionMode");
  }
  return Z_Registration_Info_UEnum_ESelectionMode.OuterSingleton;
}

// StaticEnum<enum_ETableViewMode::Type> @ 1426a5620

UEnum * __cdecl StaticEnum<enum_ETableViewMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETableViewMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_ETableViewMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_ETableViewMode,(UObject *)pUVar1,L"ETableViewMode");
  }
  return Z_Registration_Info_UEnum_ETableViewMode.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{408}' @ 1426ae324

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FSlateApplication::`vector deleting
   destructor'`adjustor{408}' (unsigned int) __ptr64 */

void * __thiscall
FSlateApplication::_vector_deleting_destructor__adjustor_408__(FSlateApplication *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSlateApplication *)&this[-1].WindowBeingDestroyedEvent.field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 1426ae338

/* [thunk]:public: virtual void * __ptr64 __cdecl SToolTip::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall SToolTip::_vector_deleting_destructor__adjustor_680__(SToolTip *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SToolTip *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1426ae350

void * __thiscall
IBaseDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this,uint param_1
          )

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae380

void * __thiscall
IBaseDelegateInstance<void___cdecl(FDisplayMetrics_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FDisplayMetrics_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae3b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FWidgetPath_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FWidgetPath_const_&),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae3e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae410

void * __thiscall
IBaseDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae440

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae470

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<1,FSlateApplication_const_,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,FSlateApplication_const_,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae4a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimatedAttributeManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAnimatedAttributeManager,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMenuStack,void___cdecl(FWidgetPath_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMenuStack,void___cdecl(FWidgetPath_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae500

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMenuStack,void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMenuStack,void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae530

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSlateApplication,1,void___cdecl(FDisplayMetrics_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FSlateApplication,1,void___cdecl(FDisplayMetrics_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae590

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMenuPanel,1,void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMenuPanel,1,void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae620

void * __thiscall
TCommands<FGenericCommands>::_scalar_deleting_destructor_
          (TCommands<FGenericCommands> *this,uint param_1)

{
  *(undefined ***)this = &___7__TCommands_VFGenericCommands____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae670

void * __thiscall
TCommands<FTabCommands>::_scalar_deleting_destructor_(TCommands<FTabCommands> *this,uint param_1)

{
  *(undefined ***)this = &___7__TCommands_VFTabCommands____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae6c0

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae6f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FDisplayMetrics_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FDisplayMetrics_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae720

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FWidgetPath_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FWidgetPath_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae750

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae780

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae7b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TSharedPtr_VIAsyncTaskNotificationImpl___00__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae7f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFauxSlateCursor,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FFauxSlateCursor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae830

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNavigationConfig,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FNavigationConfig,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae870

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateAsyncTaskNotificationImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateAsyncTaskNotificationImpl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae8b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateDefaultInputMapping,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateDefaultInputMapping,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae8f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SBorder,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SBorder,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae930

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SBox,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae970

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SImage,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SImage,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae9b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<MenuStackInternal::SMenuContentWrapper,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<MenuStackInternal::SMenuContentWrapper,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426ae9f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuPanel,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMenuPanel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aea30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPopup,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SPopup,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aea70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SToolTip,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SToolTip,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x420);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aeab0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWindowTitleBar,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SWindowTitleBar,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x410);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aeaf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericWindowDefinition,SharedPointerInternals::DefaultDeleter<FGenericWindowDefinition>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGenericWindowDefinition,SharedPointerInternals::DefaultDeleter<FGenericWindowDefinition>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aeb30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericCommands,SharedPointerInternals::DefaultDeleter<FGenericCommands>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGenericCommands,SharedPointerInternals::DefaultDeleter<FGenericCommands>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aeb70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuInHostWidget,SharedPointerInternals::DefaultDeleter<FMenuInHostWidget>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMenuInHostWidget,SharedPointerInternals::DefaultDeleter<FMenuInHostWidget>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aebb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuInPopup,SharedPointerInternals::DefaultDeleter<FMenuInPopup>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMenuInPopup,SharedPointerInternals::DefaultDeleter<FMenuInPopup>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aebf0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuInWindow,SharedPointerInternals::DefaultDeleter<FMenuInWindow>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMenuInWindow,SharedPointerInternals::DefaultDeleter<FMenuInWindow>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aec30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNullSlateSoundDevice,SharedPointerInternals::DefaultDeleter<FNullSlateSoundDevice>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNullSlateSoundDevice,SharedPointerInternals::DefaultDeleter<FNullSlateSoundDevice>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aec70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateApplication,SharedPointerInternals::DefaultDeleter<FSlateApplication>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateApplication,SharedPointerInternals::DefaultDeleter<FSlateApplication>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aecb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateVirtualUserHandle,SharedPointerInternals::DefaultDeleter<FSlateVirtualUserHandle>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateVirtualUserHandle,SharedPointerInternals::DefaultDeleter<FSlateVirtualUserHandle>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aecf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabCommands,SharedPointerInternals::DefaultDeleter<FTabCommands>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTabCommands,SharedPointerInternals::DefaultDeleter<FTabCommands>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aed30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<GenericApplication,SharedPointerInternals::DefaultDeleter<GenericApplication>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<GenericApplication,SharedPointerInternals::DefaultDeleter<GenericApplication>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aed70

void * __thiscall FAnalogCursor::_scalar_deleting_destructor_(FAnalogCursor *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FAnalogCursor__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IInputProcessor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aede0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FDragDropEvent::_scalar_deleting_destructor_(FDragDropEvent *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Content).SharedReferenceCount.ReferenceController);
  FPointerEvent::~FPointerEvent((FPointerEvent *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aee30

void * __thiscall
FFauxSlateCursor::_scalar_deleting_destructor_(FFauxSlateCursor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FFauxSlateCursor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aee70

void * __thiscall
FGenericCommands::_scalar_deleting_destructor_(FGenericCommands *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGenericCommands__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectAll).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Rename).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Delete).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Redo).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Undo).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Duplicate).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Paste).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Copy).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Cut).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7__TCommands_VFGenericCommands____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aef30

void * __thiscall
FGenericPlatformTextField::_scalar_deleting_destructor_
          (FGenericPlatformTextField *this,uint param_1)

{
  *this = (FGenericPlatformTextField)&___7IPlatformTextField__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aef70

void * __thiscall FMenuBase::_scalar_deleting_destructor_(FMenuBase *this,uint param_1)

{
  ~FMenuBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426aefb0

void * __thiscall
FMenuInHostWidget::_scalar_deleting_destructor_(FMenuInHostWidget *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMenuInHostWidget__6B_;
  pTVar3 = (this->MenuHost).WeakReferenceCount.ReferenceController;
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
  FMenuBase::~FMenuBase((FMenuBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af020

void * __thiscall FMenuInPopup::_scalar_deleting_destructor_(FMenuInPopup *this,uint param_1)

{
  *(undefined ***)this = &___7FMenuInPopup__6B_;
  FMenuBase::~FMenuBase((FMenuBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af070

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FMenuInWindow::_scalar_deleting_destructor_(FMenuInWindow *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMenuInWindow__6B_;
  pTVar3 = (this->Window).WeakReferenceCount.ReferenceController;
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
  FMenuBase::~FMenuBase((FMenuBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af0e0

void * __thiscall
FNavigationConfig::_scalar_deleting_destructor_(FNavigationConfig *this,uint param_1)

{
  ~FNavigationConfig(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af120

void * __thiscall
FNullSlateSoundDevice::_scalar_deleting_destructor_(FNullSlateSoundDevice *this,uint param_1)

{
  ~FNullSlateSoundDevice(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af160

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSlateApplication::_scalar_deleting_destructor_(FSlateApplication *this,uint param_1)

{
  ~FSlateApplication(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x830);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af1a0

void * __thiscall
FSlateDefaultInputMapping::_scalar_deleting_destructor_
          (FSlateDefaultInputMapping *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af1d0

void * __thiscall FTabCommands::_scalar_deleting_destructor_(FTabCommands *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTabCommands__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CloseFocusedTab).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CloseMinorTab).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CloseMajorTab).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7__TCommands_VFTabCommands____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af250

void * __thiscall
FTwinStickNavigationConfig::_scalar_deleting_destructor_
          (FTwinStickNavigationConfig *this,uint param_1)

{
  FNavigationConfig::~FNavigationConfig((FNavigationConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af290

void * __thiscall IInputProcessor::_scalar_deleting_destructor_(IInputProcessor *this,uint param_1)

{
  *this = (IInputProcessor)&___7IInputProcessor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af2d0

void * __thiscall IMenu::_scalar_deleting_destructor_(IMenu *this,uint param_1)

{
  *this = (IMenu)&___7IMenu__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af310

void * __thiscall
IPlatformTextField::_scalar_deleting_destructor_(IPlatformTextField *this,uint param_1)

{
  *this = (IPlatformTextField)&___7IPlatformTextField__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af350

void * __thiscall
ISlateInputManager::_scalar_deleting_destructor_(ISlateInputManager *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af380

void * __thiscall IToolTip::_scalar_deleting_destructor_(IToolTip *this,uint param_1)

{
  *this = (IToolTip)&___7IToolTip__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af3c0

void * __thiscall
MenuStackInternal::SMenuContentWrapper::_scalar_deleting_destructor_
          (SMenuContentWrapper *this,uint param_1)

{
  ~SMenuContentWrapper(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af420

void * __thiscall SMenuPanel::_scalar_deleting_destructor_(SMenuPanel *this,uint param_1)

{
  SOverlay::~SOverlay((SOverlay *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af480

void * __thiscall SPopup::_scalar_deleting_destructor_(SPopup *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af4e0

void * __thiscall SToolTip::_scalar_deleting_destructor_(SToolTip *this,uint param_1)

{
  ~SToolTip(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x410);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af540

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SWindowTitleBar::_scalar_deleting_destructor_(SWindowTitleBar *this,uint param_1)

{
  ~SWindowTitleBar(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af5a0

void * __thiscall
TAnimatedAttributeBase::_scalar_deleting_destructor_(TAnimatedAttributeBase *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7TAnimatedAttributeBase__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426af610

void * __thiscall UToolMenuBase::_scalar_deleting_destructor_(UToolMenuBase *this,uint param_1)

{
  *(undefined ***)this = &___7UToolMenuBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// BounceEaseOut @ 1426b1e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl BounceEaseOut(float param_1)

{
  if (param_1 < ___real_3eba2e8c) {
    return param_1 * __real_3f400000 * param_1;
  }
  if (param_1 < ___real_3f3a2e8c) {
    return (param_1 * ___real_41113333 * param_1 - param_1 * ___real_411e6666) + ___real_4059999a;
  }
  if (param_1 < __real_3f666666) {
    return (param_1 * ___real_4141104f * param_1 - param_1 * ___real_419d156b) + ___real_410e5e75;
  }
  return (param_1 * ___real_412ccccd * param_1 - param_1 * ___real_41a428f6) + ___real_412b851f;
}

// DoAnyWindowDescendantsNeedPrepass @ 1426b7330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl DoAnyWindowDescendantsNeedPrepass(TSharedRef<SWindow,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedRef<SWindow,1> local_18;
  
  pTVar5 = SWindow::GetChildWindows(param_1->Object);
  if (pTVar5->ArrayNum == 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  if (pTVar5->ArrayNum < 1) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  bVar3 = SWindow::IsVisible(*(SWindow **)pFVar1);
  if (bVar3) {
    bVar3 = SWindow::IsWindowMinimized(*(SWindow **)pFVar1);
    if (!bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
  }
  local_18.Object = *(SWindow **)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar1 + 8);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = DoAnyWindowDescendantsNeedPrepass(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// EaseInterpolatorRatio @ 1426b8260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl EaseInterpolatorRatio(EEasingInterpolatorType param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = __real_3f000000;
  fVar3 = __real_3f800000;
  switch(param_1) {
  case Linear:
    if (__real_3f800000 <= param_2) {
      param_2 = __real_3f800000;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    break;
  case QuadraticEaseIn:
    param_2 = param_2 * param_2;
    break;
  case QuadraticEaseOut:
    param_2 = (__real_40000000 - param_2) * param_2;
    break;
  case QuadraticEaseInOut:
    if (__real_3f000000 <= param_2) {
      param_2 = (__real_40800000 - (param_2 + param_2)) * param_2 - __real_3f800000;
    }
    else {
      param_2 = (param_2 + param_2) * param_2;
    }
    break;
  case CubicEaseIn:
    param_2 = param_2 * param_2 * param_2;
    break;
  case CubicEaseOut:
    fVar3 = param_2 - __real_3f800000;
    param_2 = fVar3 * fVar3 * fVar3 + __real_3f800000;
    break;
  case CubicEaseInOut:
    if (__real_3f000000 <= param_2) {
      fVar2 = (param_2 + param_2) - __real_40000000;
      fVar3 = fVar2 * param_2;
      fVar1 = fVar3 - (((param_2 - __real_3f800000) + param_2) - __real_3f800000);
      param_2 = (fVar3 * fVar2 - (fVar1 + fVar1)) + __real_3f800000;
    }
    else {
      param_2 = param_2 * param_2 * param_2 * __real_40800000;
    }
    break;
  case QuarticEaseIn:
    param_2 = param_2 * param_2 * param_2 * param_2;
    break;
  case QuarticEaseOut:
    fVar3 = param_2 - __real_3f800000;
    param_2 = (__real_3f800000 - param_2) * fVar3 * fVar3 * fVar3 + __real_3f800000;
    break;
  case QuarticEaseInOut:
    if (__real_3f000000 <= param_2) {
      fVar3 = param_2 - __real_3f800000;
      param_2 = __real_3f800000 - fVar3 * fVar3 * fVar3 * fVar3 * __real_41000000;
    }
    else {
      param_2 = param_2 * param_2 * param_2 * param_2 * __real_41000000;
    }
    break;
  case QuinticEaseIn:
    param_2 = param_2 * param_2 * param_2 * param_2 * param_2;
    break;
  case QuinticEaseOut:
    fVar3 = param_2 - __real_3f800000;
    param_2 = fVar3 * fVar3 * fVar3 * fVar3 * fVar3 + __real_3f800000;
    break;
  case QuinticEaseInOut:
    if (__real_3f000000 <= param_2) {
      fVar2 = (param_2 + param_2) - __real_40000000;
      fVar1 = fVar2 * param_2 * fVar2;
      fVar3 = fVar2 * param_2 - (((param_2 - __real_3f800000) + param_2) - __real_3f800000);
      fVar4 = fVar1 * fVar2;
      fVar1 = fVar1 - (fVar3 + fVar3);
      fVar3 = fVar4 - (fVar1 + fVar1);
      param_2 = (fVar4 * fVar2 - (fVar3 + fVar3)) + __real_3f800000;
    }
    else {
      param_2 = param_2 * param_2 * param_2 * param_2 * __real_41800000 * param_2;
    }
    break;
  case SineEaseIn:
    fVar3 = sinf((param_2 - __real_3f800000) * __real_3fc90fdb);
    param_2 = fVar3 + __real_3f800000;
    break;
  case SineEaseOut:
    param_2 = sinf(param_2 * __real_3fc90fdb);
    break;
  case SineEaseInOut:
    fVar3 = cosf(param_2 * __real_40490fdb);
    param_2 = (__real_3f800000 - fVar3) * __real_3f000000;
    break;
  case CircularEaseIn:
    param_2 = __real_3f800000 - SQRT(__real_3f800000 - param_2 * param_2);
    break;
  case CircularEaseOut:
    param_2 = SQRT((__real_40000000 - param_2) * param_2);
    break;
  case CircularEaseInOut:
    if (__real_3f000000 <= param_2) {
      param_2 = (SQRT(((param_2 + param_2) - __real_40400000) *
                      (__real_3f800000 - (param_2 + param_2))) + __real_3f800000) * __real_3f000000;
    }
    else {
      param_2 = (__real_3f800000 - SQRT(__real_3f800000 - param_2 * param_2 * __real_40800000)) *
                __real_3f000000;
    }
    break;
  case ExponentialEaseIn:
    if (param_2 != 0.0) {
      param_2 = powf(__real_40000000,(param_2 - __real_3f800000) * __real_41200000);
    }
    break;
  case ExponentialEaseOut:
    if (param_2 != __real_3f800000) {
      fVar1 = powf(__real_40000000,param_2 * __real_c1200000);
      param_2 = fVar3 - fVar1;
    }
    break;
  case ExponentialEaseInOut:
    if ((param_2 != 0.0) && (param_2 != __real_3f800000)) {
      if (__real_3f000000 <= param_2) {
        fVar2 = powf(__real_40000000,__real_41200000 - param_2 * __real_41a00000);
        param_2 = fVar3 - fVar2 * fVar1;
      }
      else {
        fVar3 = powf(__real_40000000,param_2 * __real_41a00000 - __real_41200000);
        param_2 = fVar3 * fVar1;
      }
    }
    break;
  case ElasticEaseIn:
    fVar3 = powf(__real_40000000,(param_2 - __real_3f800000) * __real_41200000);
    fVar1 = sinf(param_2 * ___real_41a35ce2);
    param_2 = fVar3 * fVar1;
    break;
  case ElasticEaseOut:
    fVar3 = sinf(__real_c1a35ce2 - param_2 * ___real_41a35ce2);
    fVar1 = powf(__real_40000000,param_2 * __real_c1200000);
    param_2 = fVar3 * fVar1 + __real_3f800000;
    break;
  case ElasticEaseInOut:
    fVar3 = (param_2 + param_2) - __real_3f800000;
    if (__real_3f000000 <= param_2) {
      fVar2 = sinf(__real_c1a35ce2 - fVar3 * ___real_41a35ce2);
      fVar3 = powf(__real_40000000,fVar3 * __real_c1200000);
      param_2 = fVar2 * fVar3 * fVar1 + __real_3f800000;
    }
    else {
      fVar3 = powf(__real_40000000,fVar3 * __real_41200000);
      fVar2 = sinf((param_2 + param_2) * ___real_41a35ce2);
      param_2 = fVar3 * fVar2 * fVar1;
    }
    break;
  case BackEaseIn:
    fVar3 = sinf(param_2 * __real_40490fdb);
    param_2 = param_2 * param_2 * param_2 - fVar3 * param_2;
    break;
  case BackEaseOut:
    fVar2 = __real_3f800000 - param_2;
    fVar1 = sinf(fVar2 * __real_40490fdb);
    param_2 = fVar3 - (fVar2 * fVar2 * fVar2 - fVar1 * fVar2);
    break;
  case BackEaseInOut:
    fVar2 = param_2 + param_2;
    if (__real_3f000000 <= param_2) {
      fVar4 = __real_3f800000 - (fVar2 - __real_3f800000);
      fVar2 = sinf(fVar4 * __real_40490fdb);
      param_2 = ((fVar3 - (fVar4 * fVar4 * fVar4 - fVar2 * fVar4)) + fVar3) * fVar1;
    }
    else {
      fVar3 = sinf(fVar2 * __real_40490fdb);
      param_2 = (fVar2 * fVar2 * fVar2 - fVar3 * fVar2) * fVar1;
    }
    break;
  case BounceEaseIn:
    fVar1 = BounceEaseOut(__real_3f800000 - param_2);
    param_2 = fVar3 - fVar1;
    break;
  case BounceEaseOut:
    param_2 = BounceEaseOut(param_2);
    break;
  case BounceEaseInOut:
    if (__real_3f000000 <= param_2) {
      fVar3 = BounceEaseOut((param_2 + param_2) - __real_3f800000);
      param_2 = (fVar3 + __real_3f800000) * fVar1;
    }
    else {
      fVar2 = BounceEaseOut(__real_3f800000 - (param_2 + param_2));
      param_2 = (fVar3 - fVar2) * fVar1;
    }
    break;
  default:
    param_2 = 0.0;
  }
  return param_2;
}

// EmptyLinkFunctionForGeneratedCodeAnchors @ 1426b8e70

void __cdecl EmptyLinkFunctionForGeneratedCodeAnchors(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeITypedTableView @ 1426b8e80

void __cdecl EmptyLinkFunctionForGeneratedCodeITypedTableView(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIVirtualKeyboardEntry @ 1426b8e90

void __cdecl EmptyLinkFunctionForGeneratedCodeIVirtualKeyboardEntry(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMultiBoxDefs @ 1426b8ea0

void __cdecl EmptyLinkFunctionForGeneratedCodeMultiBoxDefs(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSlateApplication @ 1426b8eb0

void __cdecl EmptyLinkFunctionForGeneratedCodeSlateApplication(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSlate_init @ 1426b8ec0

void __cdecl EmptyLinkFunctionForGeneratedCodeSlate_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolMenuBase @ 1426b8ed0

void __cdecl EmptyLinkFunctionForGeneratedCodeToolMenuBase(void)

{
  return;
}

// GatherAllDescendants @ 1426bbdb0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<SWindow_*,TSizedDefaultAllocator<32>_> * __cdecl
GatherAllDescendants
          (TArray<SWindow_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<SWindow_*,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_58;
  TArray<SWindow_*,TSizedDefaultAllocator<32>_> local_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar12 = pFVar11 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<SWindow,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar12) break;
    local_58 = *(undefined8 *)pFVar11;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)*piVar1 * 8)) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<SWindow_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar11 = pFVar11 + 0x10;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_58;
  }
  iVar3 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar12 = pFVar11 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedRef<SWindow,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar11 == pFVar12) break;
    pTVar10 = SWindow::GetChildWindows(*(SWindow **)pFVar11);
    pTVar9 = GatherAllDescendants(&local_50,pTVar10);
    if (__return_storage_ptr__ == pTVar9) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<SWindow_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    iVar7 = pTVar9->ArrayNum;
    if (iVar7 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar7,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,piVar1);
      memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8,
              (pTVar9->AllocatorInstance).Data,(longlong)iVar7 << 3);
      pTVar9->ArrayNum = 0;
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    pFVar11 = pFVar11 + 0x10;
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 1426bfa30

uint __cdecl GetTypeHash(FAnalogNavigationKey *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  FVar1 = (param_1->AnalogKey).KeyName;
  uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
  iVar3 = uVar2 + FVar1.Number;
  iVar4 = iVar3 - (uint)param_1->NavigationDir;
  uVar5 = 0x9e3779b9U - iVar3 ^ iVar4 * 0x100;
  uVar6 = (param_1->NavigationDir - uVar5) - iVar4 ^ uVar5 >> 0xd;
  uVar2 = (iVar4 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar5 = (uVar5 - uVar2) - uVar6 ^ uVar2 << 0x10;
  uVar6 = (uVar6 - uVar2) - uVar5 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar6) - uVar5 ^ uVar6 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar6 ^ uVar2 << 10;
  return (uVar6 - uVar5) - uVar2 ^ uVar5 >> 0xf;
}

// HandleGlobalInvalidateCVarTriggered @ 1426c0770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
HandleGlobalInvalidateCVarTriggered(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FSlateApplication *this;
  
  this = FSlateApplication::Get();
  FSlateApplicationBase::InvalidateAllWidgets((FSlateApplicationBase *)this,true);
  return;
}

// OnMenuKeyDown @ 1426c7250

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl MenuStackInternal::OnMenuKeyDown(FReply *__return_storage_ptr__,FKey *param_1)

{
  FSlateApplication *pFVar1;
  FReply *pFVar2;
  FReply local_c8;
  
  if (param_1->KeyName == EKeys::Escape.KeyName) {
    pFVar1 = FSlateApplication::Get();
    FMenuStack::DismissInternal(&pFVar1->MenuStack,0);
    FReply::FReply(&local_c8,true);
    pFVar2 = FReply::ClearUserFocus(&local_c8,SetDirectly,false);
    FReply::FReply(__return_storage_ptr__,pFVar2);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// OnRequestExit @ 1426c8a20

void __cdecl OnRequestExit(void)

{
  RequestEngineExit(L"Normal Slate Window Closed");
  return;
}

// PrepassWindowAndChildren @ 1426cc610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PrepassWindowAndChildren
          (TSharedRef<SWindow,1> *param_1,TSharedPtr<SWindow,1> *param_2,
          TWeakPtr<SWidget,1> *param_3)

{
  atomic<int> aVar1;
  int iVar2;
  SWindow *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  atomic<int> *paVar10;
  FSlateApplication *pFVar11;
  TSharedPtr<FGenericWindow,1> *this;
  FGenericWindow *pFVar12;
  FDeprecateSlateVector2D FVar13;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  TSharedRef<SWindow,1> *pTVar15;
  ForElementType<TSharedRef<SWindow,1>_> FVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  ForElementType<TSharedRef<SWindow,1>_> local_a8;
  int local_a0;
  int local_9c;
  TSharedRef<SWindow,1> local_98;
  TSharedRef<SWindow,1> local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TSharedPtr<FGenericWindow,1> local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if ((param_2->Object == (SWindow *)0x0) || (param_2->Object != param_1->Object)) {
    bVar8 = SWindow::IsVisible(param_1->Object);
    if ((!bVar8) || (bVar8 = SWindow::IsWindowMinimized(param_1->Object), bVar8)) {
      local_98.Object = param_1->Object;
      bVar8 = false;
      local_98.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar9 = DoAnyWindowDescendantsNeedPrepass(&local_98);
      if (!bVar9) goto LAB_1426cc969;
    }
    else {
      bVar8 = true;
    }
    pSVar3 = param_1->Object;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar10 = &pTVar4->WeakReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    pTVar5 = (param_3->WeakReferenceCount).ReferenceController;
    pSVar6 = param_3->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_78 = *(undefined4 *)&param_3->Object;
    uStack_74 = *(undefined4 *)((longlong)&param_3->Object + 4);
    uStack_70 = *(undefined4 *)&(param_3->WeakReferenceCount).ReferenceController;
    uStack_6c = *(undefined4 *)((longlong)&(param_3->WeakReferenceCount).ReferenceController + 4);
    pTVar7 = (param_3->WeakReferenceCount).ReferenceController;
    param_3->Object = (SWidget *)pSVar3;
    (param_3->WeakReferenceCount).ReferenceController = pTVar4;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &pTVar7->WeakReferenceCount;
      aVar1 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &pTVar4->WeakReferenceCount;
      aVar1 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SWindow::ProcessWindowInvalidation(param_1->Object);
    pSVar3 = param_1->Object;
    pFVar11 = FSlateApplication::Get();
    this = SWindow::GetNativeWindow(param_1->Object,&local_68);
    pFVar12 = TSharedPtr<FGenericWindow,1>::operator->(this);
    fVar18 = (float)(**(code **)(pFVar12->_padding_ + 0xf8))(pFVar12);
    fVar19 = (float)(**(code **)(*(longlong *)pFVar11 + 0x58))(pFVar11);
    SWidget::SlatePrepass((SWidget *)pSVar3,fVar19 * fVar18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if ((bVar8) && (bVar8 = SWindow::IsAutosized(param_1->Object), bVar8)) {
      pSVar3 = param_1->Object;
      FVar13 = SWindow::GetDesiredSizeDesktopPixels(pSVar3);
      SWindow::Resize(pSVar3,*(FDeprecateVector2DParameter *)FVar13);
    }
    pTVar14 = SWindow::GetChildWindows(param_1->Object);
    FVar16.Data = (TSharedRef<SWindow,1> *)0x0;
    local_a8.Data = (TSharedRef<SWindow,1> *)0x0;
    iVar2 = pTVar14->ArrayNum;
    pTVar15 = (TSharedRef<SWindow,1> *)(pTVar14->AllocatorInstance).Data;
    local_a0 = iVar2;
    if (iVar2 == 0) {
      local_9c = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TSharedRef<SWindow,1>_>_>
                (0x10,8,iVar2,0,&local_a8,iVar2,&local_9c);
      FVar16.Data = local_a8.Data;
      ConstructItems<TSharedRef<SWindow,1>,TSharedRef<SWindow,1>,int>(local_a8.Data,pTVar15,iVar2);
    }
    iVar2 = local_a0;
    lVar17 = (longlong)local_a0;
    for (pTVar15 = FVar16.Data; pTVar15 != FVar16.Data + lVar17; pTVar15 = pTVar15 + 1) {
      local_88.Object = pTVar15->Object;
      local_88.SharedReferenceCount.ReferenceController =
           (pTVar15->SharedReferenceCount).ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      PrepassWindowAndChildren(&local_88,param_2,param_3);
    }
    DestructItems<TSharedRef<SWindow,1>,int>(FVar16.Data,iVar2);
    if (FVar16.Data != (TSharedRef<SWindow,1> *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(FVar16.Data);
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_58 = *(undefined4 *)&param_3->Object;
    uStack_54 = *(undefined4 *)((longlong)&param_3->Object + 4);
    uStack_50 = *(undefined4 *)&(param_3->WeakReferenceCount).ReferenceController;
    uStack_4c = *(undefined4 *)((longlong)&(param_3->WeakReferenceCount).ReferenceController + 4);
    pTVar4 = (param_3->WeakReferenceCount).ReferenceController;
    param_3->Object = pSVar6;
    (param_3->WeakReferenceCount).ReferenceController = pTVar5;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &pTVar4->WeakReferenceCount;
      aVar1 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &pTVar5->WeakReferenceCount;
      aVar1 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
LAB_1426cc969:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// TakeScreenshotCommon @ 1426dffe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TakeScreenshotCommon
          (TSharedRef<SWidget,1> *param_1,TIntRect<int> *param_2,TIntRect<int> *param_3,
          SWindow *param_4)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  EVisibility EVar4;
  FSlateApplication *this;
  TOptional<FArrangedWidget> *pTVar5;
  TOptional<FArrangedWidget> *pTVar6;
  FDeprecateSlateVector2D FVar7;
  TIntPoint<int>_u_0_s_0 TVar8;
  TIntPoint<int>_u_0_s_0 TVar9;
  ForElementType<FArrangedWidget> FVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  TSharedRef<SWidget_const_,1> local_270;
  float local_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  TOptional<FArrangedWidget> local_208;
  FWidgetPath local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_298;
  FWidgetPath::FWidgetPath(&local_1b8);
  this = FSlateApplication::Get();
  EVar4 = EVisibility::Visible;
  local_270.Object = param_1->Object;
  local_270.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_270.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_270.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_270.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::GeneratePathToWidgetChecked(this,&local_270,&local_1b8,EVar4);
  local_270.Object = param_1->Object;
  local_270.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if ((TIntPoint<int>_u_0_s_0)local_270.SharedReferenceCount.ReferenceController !=
      (TIntPoint<int>_u_0_s_0)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_270.SharedReferenceCount.ReferenceController + 8) =
         (atomic<int>)
         ((int)*(atomic<int> *)((longlong)local_270.SharedReferenceCount.ReferenceController + 8) +
         1);
    UNLOCK();
  }
  pTVar5 = FWidgetPath::FindArrangedWidget(&local_1b8,&local_208,&local_270);
  pTVar6 = (TOptional<FArrangedWidget> *)FArrangedWidget::GetNullWidget();
  if (pTVar5->bIsSet != false) {
    pTVar6 = pTVar5;
  }
  local_258 = *(float *)&(pTVar6->TypedValue).Geometry.Size;
  fStack_254 = *(float *)&(pTVar6->TypedValue).Geometry.Size.field_0x4;
  fVar12 = (pTVar6->TypedValue).Geometry.Scale;
  fStack_24c = (pTVar6->TypedValue).Geometry.AbsolutePosition.field0_0x0._s_0.X;
  pTVar2 = (pTVar6->TypedValue).Widget.SharedReferenceCount.ReferenceController;
  uVar3 = *(undefined8 *)&(pTVar6->TypedValue).Geometry.AbsolutePosition.field0_0x0._s_0.Y;
  uStack_240 = *(undefined8 *)((longlong)&(pTVar6->TypedValue).Geometry.Position.field0_0x0 + 4);
  fStack_248 = (float)uVar3;
  uStack_244 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  fStack_250 = fVar12;
  if (local_208.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.TypedValue.Widget.SharedReferenceCount.ReferenceController);
  }
  local_260 = fStack_24c;
  fStack_25c = fStack_248;
  local_278 = CONCAT44(fStack_254,local_258);
  fVar11 = local_258 * fVar12;
  fVar12 = fStack_254 * fVar12;
  FVar7 = SWindow::GetPositionInScreen(param_4);
  uVar3 = *(undefined8 *)FVar7;
  if ((*(int *)((longlong)&param_2->field0_0x0 + 8) == *(int *)&param_2->field0_0x0) &&
     (*(int *)((longlong)&param_2->field0_0x0 + 0xc) == *(int *)((longlong)&param_2->field0_0x0 + 4)
     )) {
    local_270.Object = (SWidget *)0x0;
    local_270.SharedReferenceCount.ReferenceController._4_4_ = (int)fVar12;
    local_270.SharedReferenceCount.ReferenceController._0_4_ = (int)fVar11;
    TVar8.X = 0;
    TVar8.Y = 0;
    TVar9 = (TIntPoint<int>_u_0_s_0)local_270.SharedReferenceCount.ReferenceController;
  }
  else {
    TVar8 = (param_2->field0_0x0)._s_0.Min.field0_0x0._s_0;
    TVar9 = (param_2->field0_0x0)._s_0.Max.field0_0x0._s_0;
  }
  local_278._0_4_ = (float)uVar3;
  local_278._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  *(TIntPoint<int>_u_0_s_0 *)&param_3->field0_0x0 = TVar8;
  *(TIntPoint<int>_u_0_s_0 *)((longlong)&param_3->field0_0x0 + 8) = TVar9;
  iVar1 = *(int *)((longlong)&param_3->field0_0x0 + 4);
  *(int *)&param_3->field0_0x0 = (int)((float)TVar8.X + (local_260 - (float)local_278));
  *(int *)((longlong)&param_3->field0_0x0 + 4) =
       (int)((float)iVar1 + (fStack_25c - local_278._4_4_));
  *(int *)((longlong)&param_3->field0_0x0 + 8) =
       (int)((float)TVar9.X + (local_260 - (float)local_278));
  *(int *)((longlong)&param_3->field0_0x0 + 0xc) =
       (int)((float)*(int *)((longlong)&param_3->field0_0x0 + 0xc) + (fStack_25c - local_278._4_4_))
  ;
  local_278 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_1b8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar10 = (ForElementType<FArrangedWidget>)&local_1b8.Widgets.Array;
  if (local_1b8.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar10 = local_1b8.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_1b8.Widgets.Array.ArrayNum);
  if (local_1b8.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_1b8.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  return;
}

// TranslateMouseButtonToKey @ 1426e2530

FKey * __cdecl TranslateMouseButtonToKey(FKey *__return_storage_ptr__,Type param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedReferencer<1> FVar3;
  FKeyDetails *pFVar4;
  
  __return_storage_ptr__->KeyName = EKeys::Invalid.KeyName;
  (__return_storage_ptr__->KeyDetails).Object = EKeys::Invalid.KeyDetails.Object;
  FVar3 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (param_1 == Left) {
    __return_storage_ptr__->KeyName = EKeys::LeftMouseButton.KeyName;
    FVar3 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount;
    pFVar4 = EKeys::LeftMouseButton.KeyDetails.Object;
  }
  else if (param_1 == Middle) {
    __return_storage_ptr__->KeyName = EKeys::MiddleMouseButton.KeyName;
    FVar3 = EKeys::MiddleMouseButton.KeyDetails.SharedReferenceCount;
    pFVar4 = EKeys::MiddleMouseButton.KeyDetails.Object;
  }
  else if (param_1 == Right) {
    __return_storage_ptr__->KeyName = EKeys::RightMouseButton.KeyName;
    FVar3 = EKeys::RightMouseButton.KeyDetails.SharedReferenceCount;
    pFVar4 = EKeys::RightMouseButton.KeyDetails.Object;
  }
  else if (param_1 == Thumb01) {
    __return_storage_ptr__->KeyName = EKeys::ThumbMouseButton.KeyName;
    FVar3 = EKeys::ThumbMouseButton.KeyDetails.SharedReferenceCount;
    pFVar4 = EKeys::ThumbMouseButton.KeyDetails.Object;
  }
  else {
    if (param_1 != Thumb02) {
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->KeyName = EKeys::ThumbMouseButton2.KeyName;
    FVar3 = EKeys::ThumbMouseButton2.KeyDetails.SharedReferenceCount;
    pFVar4 = EKeys::ThumbMouseButton2.KeyDetails.Object;
  }
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->KeyDetails).Object = pFVar4;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// TranslationWindowActivationMessage @ 1426e2640

EActivationType __cdecl TranslationWindowActivationMessage(EWindowActivation param_1)

{
  code *pcVar1;
  bool bVar2;
  EActivationType EVar3;
  
  if (param_1 != Activate) {
    if (param_1 == ActivateByMouse) {
      return EA_ActivateByMouse;
    }
    if (param_1 == Deactivate) {
      return EA_Deactivate;
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateApplication.cpp"
                       ,0x1b3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return EA_Activate;
}

// ValidateTouchIndex @ 1426e50b0

bool __cdecl ValidateTouchIndex(int param_1)

{
  return true;
}

// Z_Construct_UClass_UToolMenuBase_NoRegister @ 1426e5bf0

UClass * __cdecl Z_Construct_UClass_UToolMenuBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"ToolMenuBase",
               &Z_Registration_Info_UClass_UToolMenuBase.InnerSingleton,
               UToolMenuBase::StaticRegisterNativesUToolMenuBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolMenuBase>,InternalVTableHelperCtorCaller<UToolMenuBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuBase.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EMultiBlockType @ 1426e5ca0

UEnum * __cdecl Z_Construct_UEnum_Slate_EMultiBlockType(void)

{
  if (Z_Registration_Info_UEnum_EMultiBlockType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMultiBlockType.InnerSingleton,
               &Z_Construct_UEnum_Slate_EMultiBlockType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMultiBlockType.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EMultiBoxType @ 1426e5ce0

UEnum * __cdecl Z_Construct_UEnum_Slate_EMultiBoxType(void)

{
  if (Z_Registration_Info_UEnum_EMultiBoxType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMultiBoxType.InnerSingleton,
               &Z_Construct_UEnum_Slate_EMultiBoxType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMultiBoxType.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EPopupLayoutMode @ 1426e5d20

UEnum * __cdecl Z_Construct_UEnum_Slate_EPopupLayoutMode(void)

{
  if (Z_Registration_Info_UEnum_EPopupLayoutMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPopupLayoutMode.InnerSingleton,
               &Z_Construct_UEnum_Slate_EPopupLayoutMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPopupLayoutMode.InnerSingleton;
}

// Z_Construct_UEnum_Slate_ESelectionMode @ 1426e5d60

UEnum * __cdecl Z_Construct_UEnum_Slate_ESelectionMode(void)

{
  if (Z_Registration_Info_UEnum_ESelectionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESelectionMode.InnerSingleton,
               &Z_Construct_UEnum_Slate_ESelectionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESelectionMode.InnerSingleton;
}

// Z_Construct_UEnum_Slate_ETableViewMode @ 1426e5da0

UEnum * __cdecl Z_Construct_UEnum_Slate_ETableViewMode(void)

{
  if (Z_Registration_Info_UEnum_ETableViewMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETableViewMode.InnerSingleton,
               &Z_Construct_UEnum_Slate_ETableViewMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETableViewMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnchors @ 1426e5de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnchors(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnchors.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnchors.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnchors_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnchors.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnchors.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCustomizedToolMenu @ 1426e5e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCustomizedToolMenu(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenu.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCustomizedToolMenu.InnerSingleton,
               &Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenu.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCustomizedToolMenu.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey @ 1426e5ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputPreprocessorRegistrationKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputPreprocessorRegistrationKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputPreprocessorRegistrationKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputPreprocessorRegistrationKey.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FVirtualKeyboardOptions @ 1426e5f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVirtualKeyboardOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVirtualKeyboardOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVirtualKeyboardOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVirtualKeyboardOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVirtualKeyboardOptions.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CurrentApplication'' @ 15035c060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'FSlateApplication::CurrentApplication__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FSlateApplication::CurrentApplication.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'AllowSlateToSleep'' @ 15035c080

void __cdecl _dynamic_atexit_destructor_for__AllowSlateToSleep__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&AllowSlateToSleep);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableTooltips'' @ 15035c0a0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableTooltips__(void)

{
  CVarEnableTooltips._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableTooltips);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRequireFocusForGamepadInput'' @ 15035c0c0

void __cdecl _dynamic_atexit_destructor_for__CVarRequireFocusForGamepadInput__(void)

{
  CVarRequireFocusForGamepadInput._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRequireFocusForGamepadInput);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateDismissMenuStacksOnFocusLost'' @ 15035c0e0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateDismissMenuStacksOnFocusLost__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateDismissMenuStacksOnFocusLost);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateEnableGamepadEditorNavigation'' @ 15035c100

void __cdecl _dynamic_atexit_destructor_for__CVarSlateEnableGamepadEditorNavigation__(void)

{
  CVarSlateEnableGamepadEditorNavigation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateEnableGamepadEditorNavigation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateInputMotionFiresUserInteractionEvents'' @ 15035c120

void __cdecl _dynamic_atexit_destructor_for__CVarSlateInputMotionFiresUserInteractionEvents__(void)

{
  CVarSlateInputMotionFiresUserInteractionEvents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateInputMotionFiresUserInteractionEvents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateInputPointerUpFiresPointerMoveForDragDrop'' @ 15035c140

void __cdecl
_dynamic_atexit_destructor_for__CVarSlateInputPointerUpFiresPointerMoveForDragDrop__(void)

{
  CVarSlateInputPointerUpFiresPointerMoveForDragDrop._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateInputPointerUpFiresPointerMoveForDragDrop);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateSkipWidgetDrawingInHeadlessMode'' @ 15035c160

void __cdecl _dynamic_atexit_destructor_for__CVarSlateSkipWidgetDrawingInHeadlessMode__(void)

{
  CVarSlateSkipWidgetDrawingInHeadlessMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateSkipWidgetDrawingInHeadlessMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateTraceNavigationConfig'' @ 15035c180

void __cdecl _dynamic_atexit_destructor_for__CVarSlateTraceNavigationConfig__(void)

{
  CVarSlateTraceNavigationConfig._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateTraceNavigationConfig);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateTransformFullscreenMouseInput'' @ 15035c1a0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateTransformFullscreenMouseInput__(void)

{
  CVarSlateTransformFullscreenMouseInput._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateTransformFullscreenMouseInput);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateUseFixedDeltaTime'' @ 15035c1c0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateUseFixedDeltaTime__(void)

{
  CVarSlateUseFixedDeltaTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateUseFixedDeltaTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateVerifyParentChildrenRelationship'' @ 15035c1e0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateVerifyParentChildrenRelationship__(void)

{
  CVarSlateVerifyParentChildrenRelationship._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateVerifyParentChildrenRelationship);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateVerifyWidgetLayerId'' @ 15035c200

void __cdecl _dynamic_atexit_destructor_for__CVarSlateVerifyWidgetLayerId__(void)

{
  CVarSlateVerifyWidgetLayerId._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateVerifyWidgetLayerId);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyTouchKeySet'' @ 15035c220

void __cdecl SlateDefs::_dynamic_atexit_destructor_for__EmptyTouchKeySet__(void)

{
  EmptyTouchKeySet.HashSize = 0;
  if (EmptyTouchKeySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptyTouchKeySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptyTouchKeySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalInvalidateCommand'' @ 15035c260

void __cdecl _dynamic_atexit_destructor_for__GlobalInvalidateCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GlobalInvalidateCommand);
  return;
}

// `dynamic_atexit_destructor_for_'Inst'' @ 15035c280

void __cdecl
`TCommands<FTabCommands>::GetInstance'::__l2::_dynamic_atexit_destructor_for__Inst__(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = DAT_1550569d8;
  if (DAT_1550569d8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_1550569d8 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00015035c2a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'Manager'' @ 15035c2b0

void __cdecl `FAnimatedAttributeManager::Get'::__l2::_dynamic_atexit_destructor_for__Manager__(void)

{
  DestructItems<TWeakPtr<TAnimatedAttributeBase,1>,int>
            ((TWeakPtr<TAnimatedAttributeBase,1> *)Manager.Attributes.AllocatorInstance.Data,
             Manager.Attributes.ArrayNum);
  if (Manager.Attributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Manager.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'MenuStackPushDebuggingInfo'' @ 15035c2f0

void __cdecl MenuStackInternal::_dynamic_atexit_destructor_for__MenuStackPushDebuggingInfo__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&MenuStackPushDebuggingInfo,
             (FWriteAccessScope *)&local_28);
  if ((MenuStackPushDebuggingInfo._16_4_ != 0) && (MenuStackPushDebuggingInfo._8_8_ != 0)) {
    (*(code *)**(undefined8 **)MenuStackPushDebuggingInfo._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&MenuStackPushDebuggingInfo.field_0x8,0,0,0x10);
    MenuStackPushDebuggingInfo._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (MenuStackPushDebuggingInfo._8_8_ != 0) {
    FMemory::Free((void *)MenuStackPushDebuggingInfo._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&MenuStackPushDebuggingInfo);
  return;
}

// `dynamic_atexit_destructor_for_'PlatformVersion'' @ 15035c390

void __cdecl
`IPlatformTextField::ShouldUseVirtualKeyboardAutocorrect'::__l12::
_dynamic_atexit_destructor_for__PlatformVersion__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlatformVersion.Data.AllocatorInstance.Data;
  if (PlatformVersion.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlatformVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SleepBufferPostInput'' @ 15035c3b0

void __cdecl _dynamic_atexit_destructor_for__SleepBufferPostInput__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SleepBufferPostInput);
  return;
}

// `dynamic_atexit_destructor_for_'TargetFrameRateForResponsiveness'' @ 15035c3d0

void __cdecl _dynamic_atexit_destructor_for__TargetFrameRateForResponsiveness__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TargetFrameRateForResponsiveness);
  return;
}

// `dynamic_atexit_destructor_for_'ThrottleWhenMouseIsMoving'' @ 15035c3f0

void __cdecl _dynamic_atexit_destructor_for__ThrottleWhenMouseIsMoving__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ThrottleWhenMouseIsMoving);
  return;
}

