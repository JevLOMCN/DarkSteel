// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 741

// FalseText'' @ 140f4a610

void __cdecl `dynamic_initializer_for_'SReflectorToolTipWidget::FalseText__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SReflectorToolTipWidget::FalseText,L"SReflectorToolTipWidget",L"False",L"False");
  atexit(`dynamic_atexit_destructor_for_'SReflectorToolTipWidget::FalseText__);
  return;
}

// NAME_ActualSize'' @ 140f4a650

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_ActualSize__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_ActualSize,L"ActualSize");
  return;
}

// NAME_Address'' @ 140f4a670

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_Address__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_Address,L"Address");
  return;
}

// NAME_Clipping'' @ 140f4a690

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_Clipping__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_Clipping,L"Clipping");
  return;
}

// NAME_Count'' @ 140f4a6b0

void __cdecl `dynamic_initializer_for_'SWidgetListRow::NAME_Count__(void)

{
  ::FName::FName(&SWidgetListRow::NAME_Count,"Count");
  return;
}

// NAME_Enabled'' @ 140f4a6d0

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_Enabled__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_Enabled,L"Enabled");
  return;
}

// NAME_Focusable'' @ 140f4a6f0

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_Focusable__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_Focusable,L"Focusable");
  return;
}

// NAME_ForegroundColor'' @ 140f4a710

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_ForegroundColor__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_ForegroundColor,L"ForegroundColor");
  return;
}

// NAME_HasActiveTimer'' @ 140f4a730

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_HasActiveTimer__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_HasActiveTimer,L"HasActiveTimer");
  return;
}

// NAME_LayerId'' @ 140f4a750

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_LayerId__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_LayerId,L"LayerId");
  return;
}

// NAME_Location'' @ 140f4a770

void __cdecl `dynamic_initializer_for_'SWidgetListRow::NAME_Location__(void)

{
  ::FName::FName(&SWidgetListRow::NAME_Location,"Location");
  return;
}

// NAME_Type'' @ 140f4a790

void __cdecl `dynamic_initializer_for_'SWidgetListRow::NAME_Type__(void)

{
  ::FName::FName(&SWidgetListRow::NAME_Type,"Type");
  return;
}

// NAME_Visibility'' @ 140f4a7b0

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_Visibility__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_Visibility,L"Visibility");
  return;
}

// NAME_Volatile'' @ 140f4a7d0

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_Volatile__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_Volatile,L"Volatile");
  return;
}

// NAME_WidgetInfo'' @ 140f4a7f0

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_WidgetInfo__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_WidgetInfo,L"WidgetInfo");
  return;
}

// NAME_WidgetName'' @ 140f4a810

void __cdecl `dynamic_initializer_for_'SReflectorTreeWidgetItem::NAME_WidgetName__(void)

{
  ::FName::FName(&SReflectorTreeWidgetItem::NAME_WidgetName,L"WidgetName");
  return;
}

// StyleInstance'' @ 140f4a830

void __cdecl `dynamic_initializer_for_'FWidgetReflectorStyle::StyleInstance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWidgetReflectorStyle::StyleInstance__);
  return;
}

// TrueText'' @ 140f4a850

void __cdecl `dynamic_initializer_for_'SReflectorToolTipWidget::TrueText__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SReflectorToolTipWidget::TrueText,L"SReflectorToolTipWidget",L"True",L"True");
  atexit(`dynamic_atexit_destructor_for_'SReflectorToolTipWidget::TrueText__);
  return;
}

// `dynamic_initializer_for_'CCommandDumpFontAtlases'' @ 140f4a890

void __cdecl WidgetReflectorImpl::_dynamic_initializer_for__CCommandDumpFontAtlases__(void)

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
    puVar1[3] = DumpFontAtlasesCommand;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CCommandDumpFontAtlases,L"WidgetReflector.DumpFontAtlases",
             L"Save all of the font atlases currently in the font cache on the local drive. A timestamp will be automatically appended to the directory where the textures will be saved. The default location is YourProject/Saved/WidgetReflector/FontAtlases_Timestamp ie. WidgetReflector.DumpFontAtlases[SaveDirectory=D:\\My\\Path] [SaveFilePrefix=ExamplePrefix]"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__CCommandDumpFontAtlases__);
  return;
}

// `dynamic_initializer_for_'CCommandWidgetReflectorTakeSnapshot'' @ 140f4a9d0

void __cdecl
WidgetReflectorImpl::_dynamic_initializer_for__CCommandWidgetReflectorTakeSnapshot__(void)

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
    puVar1[3] = TakeSnapshotCommand;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CCommandWidgetReflectorTakeSnapshot,L"WidgetReflector.TakeSnapshot",
             L"Take a snapshot and save the result on the local drive. ie. WidgetReflector.TakeSnapshot [Delay=1.0] [Navigation=false]"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__CCommandWidgetReflectorTakeSnapshot__);
  return;
}

// `dynamic_initializer_for_'CSlateNavigationSimulate'' @ 140f4ab10

void __cdecl
SlateNavigationSimulationInternal::_dynamic_initializer_for__CSlateNavigationSimulate__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CSlateNavigationSimulate,L"Slate.Navigation.Simulate",
             L"Log the result of what the widget may do when it received a navigation event.Use: \"Slate.Navigation.Simulate Widget=0x00AABBCCDD Navigation=UINavigationIndex [UserIndex=Number] [Genesis=NavigationGenesisIndex]\"UINavigationIndex use: 0 for Left, 1 for Right, 2 for Up, 3 for Down, 4 for Next, 5 for PreviousNavigationGenesisIndex use: 0 for Keyboard|, 1 for Controller, 2 for User"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
               *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CSlateNavigationSimulate__);
  return;
}

// `dynamic_initializer_for_'CursorPingBrush'' @ 140f4ac40

void __cdecl InputEventVisualizer::_dynamic_initializer_for__CursorPingBrush__(void)

{
  ::FName::FName(&CursorPingBrush,"DemoRecording.CursorPing");
  return;
}

// `dynamic_initializer_for_'DebugBorderBrush'' @ 140f4ac60

void __cdecl NavigationSimulationOverlay::_dynamic_initializer_for__DebugBorderBrush__(void)

{
  ::FName::FName(&DebugBorderBrush,L"Debug.Border");
  return;
}

// `dynamic_initializer_for_'DisplayAllHitTest'' @ 140f4ac80

void __cdecl WidgetHittestGridText::_dynamic_initializer_for__DisplayAllHitTest__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DisplayAllHitTest,L"SWidgetHittestGrid",L"AllHitTestGrid",L"All Hit Test Grid");
  atexit(_dynamic_atexit_destructor_for__DisplayAllHitTest__);
  return;
}

// `dynamic_initializer_for_'DisplayNone'' @ 140f4acc0

void __cdecl WidgetHittestGridText::_dynamic_initializer_for__DisplayNone__(void)

{
  FText::AsLocalizable_Advanced_LocText(&DisplayNone,L"SWidgetHittestGrid",L"None",L"None");
  atexit(_dynamic_atexit_destructor_for__DisplayNone__);
  return;
}

// `dynamic_initializer_for_'Ellipsis'' @ 140f4ad00

void __cdecl WidgetReflectorImpl::WidgetReflectorIcon::_dynamic_initializer_for__Ellipsis__(void)

{
  ::FName::FName(&Ellipsis,"Icon.Ellipsis");
  return;
}

// `dynamic_initializer_for_'EnableFocusOnPick'' @ 140f4ad20

void __cdecl WidgetReflectorCVars::_dynamic_initializer_for__EnableFocusOnPick__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&EnableFocusOnPick,L"Slate.EnableFocusOnPick",&bEnableFocusOnPick,
             L"If true, Widget Reflector window will be automatically focused when a pick is made.",
             0);
  atexit(_dynamic_atexit_destructor_for__EnableFocusOnPick__);
  return;
}

// `dynamic_initializer_for_'Filter'' @ 140f4ad70

void __cdecl WidgetReflectorImpl::WidgetReflectorIcon::_dynamic_initializer_for__Filter__(void)

{
  ::FName::FName(&Filter,"Icon.Filter");
  return;
}

// `dynamic_initializer_for_'Focus'' @ 140f4ad90

void __cdecl WidgetReflectorImpl::WidgetReflectorText::_dynamic_initializer_for__Focus__(void)

{
  FText::AsLocalizable_Advanced_LocText(&Focus,L"SWidgetReflector",L"ShowFocus",L"Show Focus");
  atexit(_dynamic_atexit_destructor_for__Focus__);
  return;
}

// `dynamic_initializer_for_'FocusPicking'' @ 140f4add0

void __cdecl
WidgetReflectorImpl::WidgetReflectorIcon::_dynamic_initializer_for__FocusPicking__(void)

{
  ::FName::FName(&FocusPicking,"Icon.FocusPicking");
  return;
}

// `dynamic_initializer_for_'FocusRectangleBrush'' @ 140f4adf0

void __cdecl NavigationSimulationOverlay::_dynamic_initializer_for__FocusRectangleBrush__(void)

{
  ::FName::FName(&FocusRectangleBrush,L"FocusRectangle");
  return;
}

// `dynamic_initializer_for_'Focusing'' @ 140f4ae10

void __cdecl WidgetReflectorImpl::WidgetReflectorText::_dynamic_initializer_for__Focusing__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Focusing,L"SWidgetReflector",L"ShowingFocus",L"Showing Focus (Esc to Stop)");
  atexit(_dynamic_atexit_destructor_for__Focusing__);
  return;
}

// `dynamic_initializer_for_'HeaderRow_Navigation_Down'' @ 140f4ae50

void __cdecl
SNavigationSimulationListInternal::_dynamic_initializer_for__HeaderRow_Navigation_Down__(void)

{
  ::FName::FName(&HeaderRow_Navigation_Down,L"NavigationDown");
  return;
}

// `dynamic_initializer_for_'HeaderRow_Navigation_Left'' @ 140f4ae70

void __cdecl
SNavigationSimulationListInternal::_dynamic_initializer_for__HeaderRow_Navigation_Left__(void)

{
  ::FName::FName(&HeaderRow_Navigation_Left,L"NavigationLeft");
  return;
}

// `dynamic_initializer_for_'HeaderRow_Navigation_Next'' @ 140f4ae90

void __cdecl
SNavigationSimulationListInternal::_dynamic_initializer_for__HeaderRow_Navigation_Next__(void)

{
  ::FName::FName(&HeaderRow_Navigation_Next,L"NavigationNext");
  return;
}

// `dynamic_initializer_for_'HeaderRow_Navigation_Previous'' @ 140f4aeb0

void __cdecl
SNavigationSimulationListInternal::_dynamic_initializer_for__HeaderRow_Navigation_Previous__(void)

{
  ::FName::FName(&HeaderRow_Navigation_Previous,L"NavigationPrevious");
  return;
}

// `dynamic_initializer_for_'HeaderRow_Navigation_Right'' @ 140f4aed0

void __cdecl
SNavigationSimulationListInternal::_dynamic_initializer_for__HeaderRow_Navigation_Right__(void)

{
  ::FName::FName(&HeaderRow_Navigation_Right,L"NavigationRight");
  return;
}

// `dynamic_initializer_for_'HeaderRow_Navigation_Up'' @ 140f4aef0

void __cdecl
SNavigationSimulationListInternal::_dynamic_initializer_for__HeaderRow_Navigation_Up__(void)

{
  ::FName::FName(&HeaderRow_Navigation_Up,L"NavigationUp");
  return;
}

// `dynamic_initializer_for_'HeaderRow_Widget'' @ 140f4af10

void __cdecl SNavigationSimulationListInternal::_dynamic_initializer_for__HeaderRow_Widget__(void)

{
  ::FName::FName(&HeaderRow_Widget,L"Widget");
  return;
}

// `dynamic_initializer_for_'Header_Index'' @ 140f4af30

void __cdecl WidgetHittestGridInternal::_dynamic_initializer_for__Header_Index__(void)

{
  ::FName::FName(&Header_Index,"index");
  return;
}

// `dynamic_initializer_for_'Header_Result'' @ 140f4af50

void __cdecl WidgetHittestGridInternal::_dynamic_initializer_for__Header_Result__(void)

{
  ::FName::FName(&Header_Result,"result");
  return;
}

// `dynamic_initializer_for_'Header_WidgetInfo'' @ 140f4af70

void __cdecl WidgetHittestGridInternal::_dynamic_initializer_for__Header_WidgetInfo__(void)

{
  ::FName::FName(&Header_WidgetInfo,"widgetinfo");
  return;
}

// `dynamic_initializer_for_'Header_WidgetName'' @ 140f4af90

void __cdecl WidgetHittestGridInternal::_dynamic_initializer_for__Header_WidgetName__(void)

{
  ::FName::FName(&Header_WidgetName,"widgetname");
  return;
}

// `dynamic_initializer_for_'HitTestPicking'' @ 140f4afb0

void __cdecl
WidgetReflectorImpl::WidgetReflectorIcon::_dynamic_initializer_for__HitTestPicking__(void)

{
  ::FName::FName(&HitTestPicking,"Icon.HitTestPicking");
  return;
}

// `dynamic_initializer_for_'HitTestPicking'' @ 140f4afd0

void __cdecl
WidgetReflectorImpl::WidgetReflectorText::_dynamic_initializer_for__HitTestPicking__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&HitTestPicking,L"SWidgetReflector",L"PickHitTestable",L"Pick Hit-Testable Widgets");
  atexit(_dynamic_atexit_destructor_for__HitTestPicking__);
  return;
}

// `dynamic_initializer_for_'HittestGrid'' @ 140f4b010

void __cdecl
WidgetReflectorImpl::WidgetReflectorTabID::_dynamic_initializer_for__HittestGrid__(void)

{
  ::FName::FName(&HittestGrid,"WidgetReflector.HittestGridTab");
  return;
}

// `dynamic_initializer_for_'LoadSnapshot'' @ 140f4b030

void __cdecl
WidgetReflectorImpl::WidgetReflectorIcon::_dynamic_initializer_for__LoadSnapshot__(void)

{
  ::FName::FName(&LoadSnapshot,"Icon.LoadSnapshot");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 140f4b050

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSlateReflector'' @ 140f4b070

void __cdecl _dynamic_initializer_for__ModuleRegistrantSlateReflector__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SlateReflector";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SlateReflector",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FSlateReflectorModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_WidgetEvents'' @ 140f4b0c0

void __cdecl _dynamic_initializer_for__NAME_WidgetEvents__(void)

{
  FName::FName(&NAME_WidgetEvents,L"WidgetEvents");
  return;
}

// `dynamic_initializer_for_'Picking'' @ 140f4b0e0

void __cdecl WidgetReflectorImpl::WidgetReflectorText::_dynamic_initializer_for__Picking__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Picking,L"SWidgetReflector",L"PickingWidget",L"Picking (Esc to Stop)");
  atexit(_dynamic_atexit_destructor_for__Picking__);
  return;
}

// `dynamic_initializer_for_'SlateOptions'' @ 140f4b120

void __cdecl
WidgetReflectorImpl::WidgetReflectorTabID::_dynamic_initializer_for__SlateOptions__(void)

{
  ::FName::FName(&SlateOptions,"WidgetReflector.SlateOptionsTab");
  return;
}

// `dynamic_initializer_for_'SnapshotWidgetPicker'' @ 140f4b140

void __cdecl
WidgetReflectorImpl::WidgetReflectorTabID::_dynamic_initializer_for__SnapshotWidgetPicker__(void)

{
  ::FName::FName(&SnapshotWidgetPicker,"WidgetReflector.SnapshotWidgetPickerTab");
  return;
}

// `dynamic_initializer_for_'SymbolsDownArrow'' @ 140f4b160

void __cdecl NavigationSimulationOverlay::_dynamic_initializer_for__SymbolsDownArrow__(void)

{
  ::FName::FName(&SymbolsDownArrow,L"Symbols.DownArrow");
  return;
}

// `dynamic_initializer_for_'SymbolsLeftArrow'' @ 140f4b180

void __cdecl NavigationSimulationOverlay::_dynamic_initializer_for__SymbolsLeftArrow__(void)

{
  ::FName::FName(&SymbolsLeftArrow,L"Symbols.LeftArrow");
  return;
}

// `dynamic_initializer_for_'SymbolsRightArrow'' @ 140f4b1a0

void __cdecl NavigationSimulationOverlay::_dynamic_initializer_for__SymbolsRightArrow__(void)

{
  ::FName::FName(&SymbolsRightArrow,L"Symbols.RightArrow");
  return;
}

// `dynamic_initializer_for_'SymbolsUpArrow'' @ 140f4b1c0

void __cdecl NavigationSimulationOverlay::_dynamic_initializer_for__SymbolsUpArrow__(void)

{
  ::FName::FName(&SymbolsUpArrow,L"Symbols.UpArrow");
  return;
}

// `dynamic_initializer_for_'TakeSnapshot'' @ 140f4b1e0

void __cdecl
WidgetReflectorImpl::WidgetReflectorIcon::_dynamic_initializer_for__TakeSnapshot__(void)

{
  ::FName::FName(&TakeSnapshot,"Icon.TakeSnapshot");
  return;
}

// `dynamic_initializer_for_'VisualPicking'' @ 140f4b200

void __cdecl
WidgetReflectorImpl::WidgetReflectorIcon::_dynamic_initializer_for__VisualPicking__(void)

{
  ::FName::FName(&VisualPicking,"Icon.VisualPicking");
  return;
}

// `dynamic_initializer_for_'VisualPicking'' @ 140f4b220

void __cdecl
WidgetReflectorImpl::WidgetReflectorText::_dynamic_initializer_for__VisualPicking__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&VisualPicking,L"SWidgetReflector",L"PickVisual",L"Pick Painted Widgets");
  atexit(_dynamic_atexit_destructor_for__VisualPicking__);
  return;
}

// `dynamic_initializer_for_'WidgetDetails'' @ 140f4b260

void __cdecl
WidgetReflectorImpl::WidgetReflectorTabID::_dynamic_initializer_for__WidgetDetails__(void)

{
  ::FName::FName(&WidgetDetails,"WidgetReflector.WidgetDetailsTab");
  return;
}

// `dynamic_initializer_for_'WidgetEvents'' @ 140f4b280

void __cdecl
WidgetReflectorImpl::WidgetReflectorTabID::_dynamic_initializer_for__WidgetEvents__(void)

{
  ::FName::FName(&WidgetEvents,"WidgetReflector.WidgetEventsTab");
  return;
}

// `dynamic_initializer_for_'WidgetHierarchy'' @ 140f4b2a0

void __cdecl
WidgetReflectorImpl::WidgetReflectorTabID::_dynamic_initializer_for__WidgetHierarchy__(void)

{
  ::FName::FName(&WidgetHierarchy,"WidgetReflector.WidgetHierarchyTab");
  return;
}

// `dynamic_initializer_for_'WidgetList'' @ 140f4b2c0

void __cdecl WidgetReflectorImpl::WidgetReflectorTabID::_dynamic_initializer_for__WidgetList__(void)

{
  ::FName::FName(&WidgetList,"WidgetReflector.WidgetList");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h__Script_SlateReflector_728165881'' @ 140f4b2e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h__Script_SlateReflector_728165881__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SlateReflector",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h__Script_SlateReflector_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_SlateReflector'' @ 140f4b320

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_SlateReflector__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xb8bd2bfa;
  local_res8[0].DeclarationsHash = 0x912a2aac;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_SlateReflector,L"/Script/SlateReflector",
             &Z_Registration_Info_UPackage__Script_SlateReflector,local_res8);
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142ddf17c

/* [thunk]:public: virtual void * __ptr64 __cdecl SAtlasVisualizer::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SAtlasVisualizer::_vector_deleting_destructor__adjustor_8__(SAtlasVisualizer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SAtlasVisualizer *)&this[-1].CurrentHoveredSlotInfo.TextureName,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 142ddf3b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UPackage__Script_SlateReflector @ 142ddf3e0

UPackage * __cdecl Z_Construct_UPackage__Script_SlateReflector(void)

{
  if (Z_Registration_Info_UPackage__Script_SlateReflector.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_SlateReflector.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_SlateReflector.OuterSingleton;
}

// NewStructOps @ 142ddf4a0

void * __cdecl Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetSnapshotRequest,&UE::CoreUObject::Private::Construct<FWidgetSnapshotRequest>,&UE::CoreUObject::Private::ConstructForTests<FWidgetSnapshotRequest>,&UE::CoreUObject::Private::Destruct<FWidgetSnapshotRequest>,&UE::CoreUObject::Private::Copy<FWidgetSnapshotRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142ddf4e0

void * __cdecl Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetSnapshotResponse,&UE::CoreUObject::Private::Construct<FWidgetSnapshotResponse>,&UE::CoreUObject::Private::ConstructForTests<FWidgetSnapshotResponse>,&UE::CoreUObject::Private::Destruct<FWidgetSnapshotResponse>,&UE::CoreUObject::Private::Copy<FWidgetSnapshotResponse>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142ddf540

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ddf820

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateReflectorModuleImpl,TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSlateReflectorModuleImpl,TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ddf8a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetSnapshotService,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FWidgetSnapshotService,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ddf8e0

void * __thiscall
ISlateReflectorModule::_scalar_deleting_destructor_(ISlateReflectorModule *this,uint param_1)

{
  *this = (ISlateReflectorModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ddf920

void * __thiscall
FSlateReflectorModule::_scalar_deleting_destructor_(FSlateReflectorModule *this,uint param_1)

{
  *this = (FSlateReflectorModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142de0220

void * __thiscall ISlateViewport::_scalar_deleting_destructor_(ISlateViewport *this,uint param_1)

{
  *this = (ISlateViewport)&___7ISlateViewport__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142de05d0

void * __thiscall
SNavigationSimulationLiveList::_scalar_deleting_destructor_
          (SNavigationSimulationLiveList *this,uint param_1)

{
  ~SNavigationSimulationLiveList(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142de0640

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNavigationSimulationLiveList,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNavigationSimulationLiveList,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142de0690

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAtlasVisualizer,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SAtlasVisualizer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x330);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142de0c70

void * __thiscall
SAtlasVisualizer::_scalar_deleting_destructor_(SAtlasVisualizer *this,uint param_1)

{
  ~SAtlasVisualizer(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142de1ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSlateReflectorModuleImpl::_scalar_deleting_destructor_
          (FSlateReflectorModuleImpl *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FInputEventVisualizer *pFVar3;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  TReferenceControllerBase<1> *pTVar4;
  
  pFVar3 = (this->VisualizeInputEventsPtr).Ptr;
  if (pFVar3 != (FInputEventVisualizer *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
  }
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(this->NavigationEventSimulator).Ptr;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
    if (*(void **)(&this_00->field_0x0 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(&this_00->field_0x0 + 8));
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetSnapshotService).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->WidgetReflectorPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// ApplyAfter<`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_&,TSharedRef<SDockTab,1>_> @ 142dec4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker_::__l2::<lambda_1>_&,TSharedRef<SDockTab,1>_>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_1> *param_1,
          TSharedRef<SDockTab,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidgetReflector *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (param_1->WeakSelf).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dec4e0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = (param_1->WeakSelf).Object;
    if (this_00 != (SWidgetReflector *)0x0) {
      WidgetReflectorImpl::SWidgetReflector::SetUIMode(this_00,Live);
    }
  }
LAB_142dec4e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// CompareItems<TSharedRef<FWidgetReflectorNodeBase,1>,int> @ 142decaf0

bool __cdecl
CompareItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
          (TSharedRef<FWidgetReflectorNodeBase,1> *param_1,
          TSharedRef<FWidgetReflectorNodeBase,1> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(FWidgetReflectorNodeBase **)(lVar1 + (longlong)param_2) != param_2->Object) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TSharedPtr<int,1>,TSharedPtr<int,1>,int> @ 142decb20

void __cdecl
ConstructItems<TSharedPtr<int,1>,TSharedPtr<int,1>,int>
          (void *param_1,TSharedPtr<int,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(int **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedPtr<FNavigationSimulationWidgetNode,1>,int> @ 142decb60

void __cdecl
ConstructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
          (void *param_1,TSharedPtr<FNavigationSimulationWidgetNode,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FNavigationSimulationWidgetNode **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int> @ 142decba0

void __cdecl
ConstructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>
          (void *param_1,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FWidgetSnapshotTarget **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedPtr<FWidgetReflectorNodeBase,1>,int> @ 142decbe0

void __cdecl
ConstructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedPtr<FWidgetReflectorNodeBase,1>,int>
          (void *param_1,TSharedPtr<FWidgetReflectorNodeBase,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FWidgetReflectorNodeBase **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<IMessageHandler,1>,TSharedPtr<IMessageHandler,1>,int> @ 142decc20

void __cdecl
ConstructItems<TSharedPtr<IMessageHandler,1>,TSharedPtr<IMessageHandler,1>,int>
          (void *param_1,TSharedPtr<IMessageHandler,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IMessageHandler **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int> @ 142decc60

void __cdecl
ConstructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
          (void *param_1,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FIntermediateResultNode **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int> @ 142decca0

void __cdecl
ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int>
          (void *param_1,TSharedRef<FWidgetReflectorNodeBase,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FWidgetReflectorNodeBase **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<FSlateClippingState,FSlateClippingState,int> @ 142decce0

void __cdecl
ConstructItems<FSlateClippingState,FSlateClippingState,int>
          (void *param_1,FSlateClippingState *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  int *piVar7;
  
  if (param_3 != 0) {
    pcVar5 = (char *)((longlong)param_1 + 0x34);
    piVar7 = &(param_2->StencilQuads).ArrayNum;
    lVar6 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar7 + lVar6) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar7 + lVar6);
      iVar3 = *piVar7;
      _Src = (((TArray<FSlateClippingZone,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
             AllocatorInstance).Data;
      *(int *)(pcVar5 + -0x2c) = iVar3;
      if (iVar3 == 0) {
        *(int *)(pcVar5 + -0x28) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,iVar3,0,pFVar2,iVar3,(int *)(pcVar5 + -0x28));
        memcpy(pFVar2->Data,_Src,(longlong)iVar3 * 0x24);
      }
      *pcVar5 = '\0';
      iVar3 = piVar7[0xb];
      *pcVar5 = (char)iVar3;
      if ((char)iVar3 != '\0') {
        uVar4 = *(undefined8 *)(piVar7 + 4);
        *(undefined8 *)(pcVar5 + -0x24) = *(undefined8 *)(piVar7 + 2);
        *(undefined8 *)(pcVar5 + -0x1c) = uVar4;
        uVar4 = *(undefined8 *)(piVar7 + 8);
        *(undefined8 *)(pcVar5 + -0x14) = *(undefined8 *)(piVar7 + 6);
        *(undefined8 *)(pcVar5 + -0xc) = uVar4;
        *(int *)(pcVar5 + -4) = piVar7[10];
      }
      pcVar5[4] = (char)piVar7[0xc];
      *(int *)(pcVar5 + 8) = piVar7[0xd];
      piVar1 = piVar7 + 0xe;
      piVar7 = piVar7 + 0x12;
      *(int *)(pcVar5 + 0xc) = *piVar1;
      pcVar5 = pcVar5 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Math::TVector2<double>,int> @ 142deeb70

void __cdecl DefaultConstructItems<UE::Math::TVector2<double>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FInputEventVisualizer::FMouseEventInfo,int> @ 142deeb80

void __cdecl
DefaultConstructItems<FInputEventVisualizer::FMouseEventInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FWidgetSnapshotTextureData,int> @ 142deebb0

void __cdecl DefaultConstructItems<FWidgetSnapshotTextureData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FCrumbItem,int> @ 142def140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FCrumbItem,int>
          (FCrumbItem *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->DelimiterBox).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-4].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-6].ReferenceController);
      pFVar1 = pFVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FItemInfo,int> @ 142def1a0

void __cdecl DestructItems<FItemInfo,int>(FItemInfo *param_1,int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->NeedsVerticalWire).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInputEventVisualizer::FKeyEventInfo,int> @ 142def1e0

void __cdecl
DestructItems<FInputEventVisualizer::FKeyEventInfo,int>(FKeyEventInfo *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Key).KeyDetails.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInputEventVisualizer::FMouseEventInfo,int> @ 142def220

void __cdecl
DestructItems<FInputEventVisualizer::FMouseEventInfo,int>(FMouseEventInfo *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Key).KeyDetails.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNavigationSimulationWidgetNodeItem,int> @ 142def260

void __cdecl
DestructItems<FNavigationSimulationWidgetNodeItem,int>
          (FNavigationSimulationWidgetNodeItem *param_1,int param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  FWeakReferencer<1> *pFVar7;
  
  if (param_2 != 0) {
    pFVar7 = &(param_1->FocusedWidget).WidgetLive.WeakReferenceCount;
    do {
      if (*(longlong **)(pFVar7 + 1) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pFVar7 + 1) + 0x10))();
      }
      pTVar5 = pFVar7->ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      if (*(longlong **)(pFVar7 + -0xc) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pFVar7 + -0xc) + 0x10))();
      }
      plVar6 = *(longlong **)(pFVar7 + -0xd);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      if (*(longlong **)(pFVar7 + -0x1a) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pFVar7 + -0x1a) + 0x10))();
      }
      plVar6 = *(longlong **)(pFVar7 + -0x1b);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      if (*(longlong **)(pFVar7 + -0x27) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pFVar7 + -0x27) + 0x10))();
      }
      plVar6 = *(longlong **)(pFVar7 + -0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      if (*(longlong **)(pFVar7 + -0x34) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pFVar7 + -0x34) + 0x10))();
      }
      plVar6 = *(longlong **)(pFVar7 + -0x35);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      pFVar7 = pFVar7 + 0x44;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateNavigationEventSimulator::FSimulationResult,int> @ 142def3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<FSlateNavigationEventSimulator::FSimulationResult,int>
          (FSimulationResult *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->WidgetThatShouldReceivedFocus).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-4].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-6].ReferenceController);
      FWidgetPath::~FWidgetPath((FWidgetPath *)(pFVar1 + -0x34));
      FWidgetPath::~FWidgetPath((FWidgetPath *)(pFVar1 + -0x60));
      pFVar1 = pFVar1 + 100;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SGridPanel::FSlot::FSlotArguments,int> @ 142def420

void __cdecl
DestructItems<SGridPanel::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_padding_;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[-2].field_0x10);
      puVar1 = *(undefined8 **)(this + -2);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[6].field_0x8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWidgetSnapshotNavigationSimulationData,int> @ 142def490

void __cdecl
DestructItems<FWidgetSnapshotNavigationSimulationData,int>
          (FWidgetSnapshotNavigationSimulationData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
              ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)
               (param_1->SimulationData).AllocatorInstance.Data,(param_1->SimulationData).ArrayNum);
    pFVar1 = (param_1->SimulationData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FWidgetSnapshotTextureData,int> @ 142def4e0

void __cdecl
DestructItems<FWidgetSnapshotTextureData,int>(FWidgetSnapshotTextureData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ColorData;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<int,1>,int> @ 142def520

void __cdecl DestructItems<TSharedPtr<int,1>,int>(TSharedPtr<int,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int> @ 142def560

void __cdecl
DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
          (TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int> @ 142def5a0

void __cdecl
DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>
          (TSharedPtr<FSlateDynamicImageBrush,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FWidgetListEntry,1>,int> @ 142def5e0

void __cdecl
DestructItems<TSharedPtr<FWidgetListEntry,1>,int>
          (TSharedPtr<FWidgetListEntry,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int> @ 142def620

void __cdecl
DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>
          (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int> @ 142def660

void __cdecl
DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>
          (TSharedPtr<FWidgetReflectorNodeBase,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<IMessageHandler,1>,int> @ 142def6a0

void __cdecl
DestructItems<TSharedPtr<IMessageHandler,1>,int>(TSharedPtr<IMessageHandler,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int> @ 142def6e0

void __cdecl
DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
          (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int> @ 142def720

void __cdecl
DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
          (TSharedRef<FWidgetReflectorNodeBase,1> *param_1,int param_2)

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

// DestructItems<FVisualEntry,int> @ 142def760

void __cdecl DestructItems<FVisualEntry,int>(FVisualEntry *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->Widget).WeakReferenceCount;
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

// Do<`FVisualEntry::Resolve'::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_const_&,TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>_> @ 142def7b0

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
Do<_FVisualEntry::Resolve_::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_const_&,TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>_>
          (<lambda_1> *param_1,
          TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          *param_2,TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>
                   *param_3)

{
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)param_2,*(uchar *)param_3);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x18,param_3->field_0x1);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x30,param_3->field_0x2);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x48,param_3->field_0x3);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x60,param_3->field_0x4);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x78,param_3->field_0x5);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x90,param_3->field_0x6);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0xa8,param_3->field_0x7);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0xc0,param_3->field_0x8);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0xd8,param_3->field_0x9);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0xf0,param_3->field_0xa);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x108,param_3->field_0xb);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x120,param_3->field_0xc);
  `FVisualEntry::Resolve'::__l2::<lambda_1>::
  operator()<TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x138,param_3->field_0xd);
  return;
}

// Do<`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&> @ 142def8e0

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
Do<_FVisualTreeCapture::AddInvalidationRootCachedEntries_::__l13::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&>
          (<lambda_1> *param_1,
          TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          *param_2)

{
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)param_2);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x18);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x30);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x48);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x60);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x78);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x90);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0xa8);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0xc0);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0xd8);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0xf0);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x108);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x120);
  `FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
  operator()<TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (param_1,(TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
                      *)&param_2->field_0x138);
  return;
}

// FormatOrdered<int,int,FText> @ 142df4950

void __cdecl
TextFormatUtil::FormatOrdered<int,int,FText>
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          int *param_3,FText *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x20;
  param_1->ArrayNum = iVar4 + 1;
  iVar4 = *param_2;
  *(undefined4 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 0x10) = 0;
  *(undefined4 *)(pFVar6 + 0x18) = 0;
  *(longlong *)(pFVar6 + 8) = (longlong)iVar4;
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  iVar1 = *param_3;
  pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x20;
  *(undefined4 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 0x10) = 0;
  *(undefined4 *)(pFVar6 + 0x18) = 0;
  *(longlong *)(pFVar6 + 8) = (longlong)iVar1;
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  pFVar6 = (param_1->AllocatorInstance).Data;
  lVar5 = (longlong)iVar4 * 0x20;
  *(undefined4 *)(pFVar6 + lVar5) = 4;
  FText::FText((FText *)(pFVar6 + lVar5 + 0x10),param_4);
  if (*(longlong *)(pFVar6 + lVar5 + 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// FormatOrdered<int,FText> @ 142df4a80

void __cdecl
TextFormatUtil::FormatOrdered<int,FText>
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x20;
  param_1->ArrayNum = iVar3 + 1;
  iVar3 = *param_2;
  *(undefined4 *)pFVar5 = 0;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(undefined4 *)(pFVar5 + 0x18) = 0;
  *(longlong *)(pFVar5 + 8) = (longlong)iVar3;
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->AllocatorInstance).Data;
  lVar4 = (longlong)iVar3 * 0x20;
  *(undefined4 *)(pFVar5 + lVar4) = 4;
  FText::FText((FText *)(pFVar5 + lVar4 + 0x10),param_3);
  if (*(longlong *)(pFVar5 + lVar4 + 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetTypeHash<int_const_,1> @ 142df54e0

uint __cdecl GetTypeHash<int_const_,1>(TSharedPtr<int_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<WidgetHittestGridInternal::FIntermediateResultNode_const_,1> @ 142df5510

uint __cdecl
GetTypeHash<WidgetHittestGridInternal::FIntermediateResultNode_const_,1>
          (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<FNavigationSimulationWidgetNode_const_,1> @ 142df5540

uint __cdecl
GetTypeHash<FNavigationSimulationWidgetNode_const_,1>
          (TSharedPtr<FNavigationSimulationWidgetNode_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<WidgetReflectorImpl::FWidgetSnapshotTarget_const_,1> @ 142df5570

uint __cdecl
GetTypeHash<WidgetReflectorImpl::FWidgetSnapshotTarget_const_,1>
          (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<FWidgetReflectorNodeBase_const_,1> @ 142df55a0

uint __cdecl
GetTypeHash<FWidgetReflectorNodeBase_const_,1>
          (TSharedPtr<FWidgetReflectorNodeBase_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<FWidgetReflectorNodeBase_const_,1> @ 142df55d0

uint __cdecl
GetTypeHash<FWidgetReflectorNodeBase_const_,1>
          (TSharedRef<FWidgetReflectorNodeBase_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,`SWidgetList::Sort'::__l8::<lambda_1>_>_> @ 142df5600

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l8::<lambda_1>_>_>
          (TSharedPtr<FWidgetListEntry,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_private:_void___cdecl_SWidgetList::Sort(void)_::_8_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  FWidgetListEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  TSharedPtr<FWidgetListEntry,1> *pTVar11;
  TSharedPtr<FWidgetListEntry,1> *pTVar12;
  int iVar13;
  TSharedPtr<FWidgetListEntry,1> *pTVar14;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar13 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_142df5727:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar11 = param_1 + lVar10;
          do {
            pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
            iVar13 = 0;
            pFVar2 = param_1->Object;
            pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
            param_1->Object = pTVar11->Object;
            (param_1->SharedReferenceCount).ReferenceController = pTVar3;
            pTVar11->Object = pFVar2;
            (pTVar11->SharedReferenceCount).ReferenceController = pTVar4;
            if (1 < iVar7) {
              do {
                iVar9 = iVar13 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `SWidgetList::Sort'::__l8::<lambda_1>::operator()
                                    (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pTVar12 = param_1 + iVar6;
                pTVar14 = param_1 + iVar13;
                bVar5 = `SWidgetList::Sort'::__l8::<lambda_1>::operator()
                                  (param_4.Predicate,pTVar14,pTVar12);
                if (!bVar5) break;
                pFVar2 = pTVar14->Object;
                pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
                pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
                pTVar14->Object = pTVar12->Object;
                (pTVar14->SharedReferenceCount).ReferenceController = pTVar4;
                pTVar12->Object = pFVar2;
                (pTVar12->SharedReferenceCount).ReferenceController = pTVar3;
                iVar13 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
            pTVar11 = pTVar11 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar13 + -2;
      iVar13 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `SWidgetList::Sort'::__l8::<lambda_1>::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pTVar11 = param_1 + iVar8;
    pTVar12 = param_1 + iVar6;
    bVar5 = `SWidgetList::Sort'::__l8::<lambda_1>::operator()(param_4.Predicate,pTVar12,pTVar11);
    if (!bVar5) goto LAB_142df5727;
    pFVar2 = pTVar12->Object;
    pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
    iVar7 = iVar8 * 2 + 1;
    pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
    pTVar12->Object = pTVar11->Object;
    (pTVar12->SharedReferenceCount).ReferenceController = pTVar4;
    pTVar11->Object = pFVar2;
    (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,`SWidgetList::Sort'::__l12::<lambda_2>_>_> @ 142df5830

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l12::<lambda_2>_>_>
          (TSharedPtr<FWidgetListEntry,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_private:_void___cdecl_SWidgetList::Sort(void)_::_12_::<lambda_2>_>
          param_4)

{
  code *pcVar1;
  FWidgetListEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  TSharedPtr<FWidgetListEntry,1> *pTVar11;
  TSharedPtr<FWidgetListEntry,1> *pTVar12;
  int iVar13;
  TSharedPtr<FWidgetListEntry,1> *pTVar14;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar13 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_142df5957:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar11 = param_1 + lVar10;
          do {
            pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
            iVar13 = 0;
            pFVar2 = param_1->Object;
            pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
            param_1->Object = pTVar11->Object;
            (param_1->SharedReferenceCount).ReferenceController = pTVar3;
            pTVar11->Object = pFVar2;
            (pTVar11->SharedReferenceCount).ReferenceController = pTVar4;
            if (1 < iVar7) {
              do {
                iVar9 = iVar13 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `SWidgetList::Sort'::__l12::<lambda_2>::operator()
                                    (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pTVar12 = param_1 + iVar6;
                pTVar14 = param_1 + iVar13;
                bVar5 = `SWidgetList::Sort'::__l12::<lambda_2>::operator()
                                  (param_4.Predicate,pTVar14,pTVar12);
                if (!bVar5) break;
                pFVar2 = pTVar14->Object;
                pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
                pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
                pTVar14->Object = pTVar12->Object;
                (pTVar14->SharedReferenceCount).ReferenceController = pTVar4;
                pTVar12->Object = pFVar2;
                (pTVar12->SharedReferenceCount).ReferenceController = pTVar3;
                iVar13 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
            pTVar11 = pTVar11 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar13 + -2;
      iVar13 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `SWidgetList::Sort'::__l12::<lambda_2>::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pTVar11 = param_1 + iVar8;
    pTVar12 = param_1 + iVar6;
    bVar5 = `SWidgetList::Sort'::__l12::<lambda_2>::operator()(param_4.Predicate,pTVar12,pTVar11);
    if (!bVar5) goto LAB_142df5957;
    pFVar2 = pTVar12->Object;
    pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
    iVar7 = iVar8 * 2 + 1;
    pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
    pTVar12->Object = pTVar11->Object;
    (pTVar12->SharedReferenceCount).ReferenceController = pTVar4;
    pTVar11->Object = pFVar2;
    (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,`SWidgetList::Sort'::__l16::<lambda_3>_>_> @ 142df5a60

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l16::<lambda_3>_>_>
          (TSharedPtr<FWidgetListEntry,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_private:_void___cdecl_SWidgetList::Sort(void)_::_16_::<lambda_3>_>
          param_4)

{
  code *pcVar1;
  FWidgetListEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  TSharedPtr<FWidgetListEntry,1> *pTVar11;
  TSharedPtr<FWidgetListEntry,1> *pTVar12;
  int iVar13;
  TSharedPtr<FWidgetListEntry,1> *pTVar14;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar13 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_142df5b87:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar11 = param_1 + lVar10;
          do {
            pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
            iVar13 = 0;
            pFVar2 = param_1->Object;
            pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
            param_1->Object = pTVar11->Object;
            (param_1->SharedReferenceCount).ReferenceController = pTVar3;
            pTVar11->Object = pFVar2;
            (pTVar11->SharedReferenceCount).ReferenceController = pTVar4;
            if (1 < iVar7) {
              do {
                iVar9 = iVar13 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `SWidgetList::Sort'::__l16::<lambda_3>::operator()
                                    (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pTVar12 = param_1 + iVar6;
                pTVar14 = param_1 + iVar13;
                bVar5 = `SWidgetList::Sort'::__l16::<lambda_3>::operator()
                                  (param_4.Predicate,pTVar14,pTVar12);
                if (!bVar5) break;
                pFVar2 = pTVar14->Object;
                pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
                pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
                pTVar14->Object = pTVar12->Object;
                (pTVar14->SharedReferenceCount).ReferenceController = pTVar4;
                pTVar12->Object = pFVar2;
                (pTVar12->SharedReferenceCount).ReferenceController = pTVar3;
                iVar13 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
            pTVar11 = pTVar11 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar13 + -2;
      iVar13 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `SWidgetList::Sort'::__l16::<lambda_3>::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pTVar11 = param_1 + iVar8;
    pTVar12 = param_1 + iVar6;
    bVar5 = `SWidgetList::Sort'::__l16::<lambda_3>::operator()(param_4.Predicate,pTVar12,pTVar11);
    if (!bVar5) goto LAB_142df5b87;
    pFVar2 = pTVar12->Object;
    pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
    iVar7 = iVar8 * 2 + 1;
    pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
    pTVar12->Object = pTVar11->Object;
    (pTVar12->SharedReferenceCount).ReferenceController = pTVar4;
    pTVar11->Object = pFVar2;
    (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<FVisualEntry,int,FIdentityFunctor,TDereferenceWrapper<FVisualEntry,`FVisualTreeCapture::EndWindow'::__l8::<lambda_1>_>_> @ 142df5c90

void __cdecl
AlgoImpl::
HeapSortInternal<FVisualEntry,int,FIdentityFunctor,TDereferenceWrapper<FVisualEntry,_FVisualTreeCapture::EndWindow_::__l8::<lambda_1>_>_>
          (FVisualEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FVisualEntry,_private:_void___cdecl_FVisualTreeCapture::EndWindow(FSlateWindowElementList_const_&)_::_8_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  int iVar10;
  EElementType EVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  EElementType EVar15;
  bool bVar16;
  undefined2 uVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  FVisualEntry *pFVar24;
  FVisualEntry *pFVar25;
  int iVar26;
  int iVar27;
  FVisualEntry *pFVar28;
  
  if (param_2 < 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar18) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar18) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar19 = (param_2 + -2) / 2;
  iVar20 = iVar19 * 2 + 1;
  iVar21 = iVar20;
  iVar27 = iVar19;
  do {
    while (param_2 <= iVar20) {
LAB_142df5dc1:
      if (iVar27 == 0) {
        iVar20 = param_2 + -1;
        lVar23 = (longlong)iVar20;
        if (0 < iVar20) {
          pFVar28 = param_1 + lVar23;
          do {
            TVar2 = (pFVar28->TopRight).field0_0x0;
            iVar26 = 0;
            TVar3 = (param_1->TopLeft).field0_0x0;
            TVar4 = (param_1->TopRight).field0_0x0;
            TVar5 = (param_1->BottomLeft).field0_0x0;
            TVar6 = (param_1->BottomRight).field0_0x0;
            iVar27 = param_1->LayerId;
            iVar22 = param_1->ClippingIndex;
            iVar10 = param_1->ElementIndex;
            EVar15 = param_1->ElementType;
            bVar16 = param_1->bFromCache;
            uVar17 = *(undefined2 *)&param_1->field_0x2e;
            pSVar7 = (param_1->Widget).Object;
            pTVar8 = (param_1->Widget).WeakReferenceCount.ReferenceController;
            (param_1->TopLeft).field0_0x0 = (pFVar28->TopLeft).field0_0x0;
            (param_1->TopRight).field0_0x0 = TVar2;
            TVar2 = (pFVar28->BottomRight).field0_0x0;
            (param_1->BottomLeft).field0_0x0 = (pFVar28->BottomLeft).field0_0x0;
            (param_1->BottomRight).field0_0x0 = TVar2;
            iVar21 = pFVar28->ClippingIndex;
            iVar19 = pFVar28->ElementIndex;
            EVar11 = pFVar28->ElementType;
            bVar18 = pFVar28->bFromCache;
            uVar12 = *(undefined2 *)&pFVar28->field_0x2e;
            param_1->LayerId = pFVar28->LayerId;
            param_1->ClippingIndex = iVar21;
            param_1->ElementIndex = iVar19;
            param_1->ElementType = EVar11;
            param_1->bFromCache = bVar18;
            *(undefined2 *)&param_1->field_0x2e = uVar12;
            pTVar9 = (pFVar28->Widget).WeakReferenceCount.ReferenceController;
            (param_1->Widget).Object = (pFVar28->Widget).Object;
            (param_1->Widget).WeakReferenceCount.ReferenceController = pTVar9;
            (pFVar28->TopLeft).field0_0x0 = TVar3;
            (pFVar28->TopRight).field0_0x0 = TVar4;
            (pFVar28->BottomLeft).field0_0x0 = TVar5;
            (pFVar28->BottomRight).field0_0x0 = TVar6;
            pFVar28->LayerId = iVar27;
            pFVar28->ClippingIndex = iVar22;
            pFVar28->ElementIndex = iVar10;
            pFVar28->ElementType = EVar15;
            pFVar28->bFromCache = bVar16;
            *(undefined2 *)&pFVar28->field_0x2e = uVar17;
            (pFVar28->Widget).Object = pSVar7;
            (pFVar28->Widget).WeakReferenceCount.ReferenceController = pTVar8;
            if (1 < iVar20) {
              do {
                iVar19 = iVar26 * 2;
                iVar21 = iVar19 + 1;
                if (iVar19 + 2 < iVar20) {
                  if (param_1[(longlong)iVar19 + 2].LayerId < param_1[iVar21].LayerId) {
                    iVar21 = iVar19;
                  }
                  iVar21 = iVar21 + 1;
                }
                pFVar24 = param_1 + iVar21;
                pFVar25 = param_1 + iVar26;
                if (pFVar24->LayerId <= pFVar25->LayerId) break;
                TVar2 = (pFVar24->TopRight).field0_0x0;
                TVar3 = (pFVar25->TopLeft).field0_0x0;
                TVar4 = (pFVar25->TopRight).field0_0x0;
                TVar5 = (pFVar25->BottomLeft).field0_0x0;
                TVar6 = (pFVar25->BottomRight).field0_0x0;
                iVar22 = pFVar25->LayerId;
                iVar10 = pFVar25->ClippingIndex;
                iVar26 = pFVar25->ElementIndex;
                EVar15 = pFVar25->ElementType;
                bVar16 = pFVar25->bFromCache;
                uVar17 = *(undefined2 *)&pFVar25->field_0x2e;
                pSVar7 = (pFVar25->Widget).Object;
                pTVar8 = (pFVar25->Widget).WeakReferenceCount.ReferenceController;
                (pFVar25->TopLeft).field0_0x0 = (pFVar24->TopLeft).field0_0x0;
                (pFVar25->TopRight).field0_0x0 = TVar2;
                TVar2 = (pFVar24->BottomRight).field0_0x0;
                (pFVar25->BottomLeft).field0_0x0 = (pFVar24->BottomLeft).field0_0x0;
                (pFVar25->BottomRight).field0_0x0 = TVar2;
                iVar19 = pFVar24->ClippingIndex;
                iVar27 = pFVar24->ElementIndex;
                EVar11 = pFVar24->ElementType;
                bVar18 = pFVar24->bFromCache;
                uVar12 = *(undefined2 *)&pFVar24->field_0x2e;
                pFVar25->LayerId = pFVar24->LayerId;
                pFVar25->ClippingIndex = iVar19;
                pFVar25->ElementIndex = iVar27;
                pFVar25->ElementType = EVar11;
                pFVar25->bFromCache = bVar18;
                *(undefined2 *)&pFVar25->field_0x2e = uVar12;
                pTVar9 = (pFVar24->Widget).WeakReferenceCount.ReferenceController;
                (pFVar25->Widget).Object = (pFVar24->Widget).Object;
                (pFVar25->Widget).WeakReferenceCount.ReferenceController = pTVar9;
                (pFVar24->TopLeft).field0_0x0 = TVar3;
                (pFVar24->TopRight).field0_0x0 = TVar4;
                (pFVar24->BottomLeft).field0_0x0 = TVar5;
                (pFVar24->BottomRight).field0_0x0 = TVar6;
                pFVar24->LayerId = iVar22;
                pFVar24->ClippingIndex = iVar10;
                pFVar24->ElementIndex = iVar26;
                pFVar24->ElementType = EVar15;
                pFVar24->bFromCache = bVar16;
                *(undefined2 *)&pFVar24->field_0x2e = uVar17;
                (pFVar24->Widget).Object = pSVar7;
                (pFVar24->Widget).WeakReferenceCount.ReferenceController = pTVar8;
                iVar26 = iVar21;
              } while (iVar21 * 2 + 1 < iVar20);
            }
            iVar20 = iVar20 + -1;
            lVar23 = lVar23 + -1;
            pFVar28 = pFVar28 + -1;
          } while (0 < lVar23);
        }
        return;
      }
      iVar19 = iVar27 + -1;
      iVar20 = iVar21 + -2;
      iVar21 = iVar20;
      iVar27 = iVar19;
    }
    iVar20 = iVar19 * 2;
    iVar22 = iVar20 + 1;
    if (iVar20 + 2 < param_2) {
      if (param_1[(longlong)iVar20 + 2].LayerId < param_1[iVar22].LayerId) {
        iVar22 = iVar20;
      }
      iVar22 = iVar22 + 1;
    }
    pFVar28 = param_1 + iVar22;
    pFVar24 = param_1 + iVar19;
    if (pFVar28->LayerId <= pFVar24->LayerId) goto LAB_142df5dc1;
    TVar2 = (pFVar28->TopRight).field0_0x0;
    iVar20 = iVar22 * 2 + 1;
    TVar3 = (pFVar24->TopLeft).field0_0x0;
    TVar4 = (pFVar24->TopRight).field0_0x0;
    TVar5 = (pFVar24->BottomLeft).field0_0x0;
    TVar6 = (pFVar24->BottomRight).field0_0x0;
    iVar26 = pFVar24->LayerId;
    iVar13 = pFVar24->ClippingIndex;
    iVar14 = pFVar24->ElementIndex;
    EVar15 = pFVar24->ElementType;
    bVar16 = pFVar24->bFromCache;
    uVar17 = *(undefined2 *)&pFVar24->field_0x2e;
    pSVar7 = (pFVar24->Widget).Object;
    pTVar8 = (pFVar24->Widget).WeakReferenceCount.ReferenceController;
    (pFVar24->TopLeft).field0_0x0 = (pFVar28->TopLeft).field0_0x0;
    (pFVar24->TopRight).field0_0x0 = TVar2;
    TVar2 = (pFVar28->BottomRight).field0_0x0;
    (pFVar24->BottomLeft).field0_0x0 = (pFVar28->BottomLeft).field0_0x0;
    (pFVar24->BottomRight).field0_0x0 = TVar2;
    iVar19 = pFVar28->ClippingIndex;
    iVar10 = pFVar28->ElementIndex;
    EVar11 = pFVar28->ElementType;
    bVar18 = pFVar28->bFromCache;
    uVar12 = *(undefined2 *)&pFVar28->field_0x2e;
    pFVar24->LayerId = pFVar28->LayerId;
    pFVar24->ClippingIndex = iVar19;
    pFVar24->ElementIndex = iVar10;
    pFVar24->ElementType = EVar11;
    pFVar24->bFromCache = bVar18;
    *(undefined2 *)&pFVar24->field_0x2e = uVar12;
    pTVar9 = (pFVar28->Widget).WeakReferenceCount.ReferenceController;
    (pFVar24->Widget).Object = (pFVar28->Widget).Object;
    (pFVar24->Widget).WeakReferenceCount.ReferenceController = pTVar9;
    (pFVar28->TopLeft).field0_0x0 = TVar3;
    (pFVar28->TopRight).field0_0x0 = TVar4;
    (pFVar28->BottomLeft).field0_0x0 = TVar5;
    (pFVar28->BottomRight).field0_0x0 = TVar6;
    pFVar28->LayerId = iVar26;
    pFVar28->ClippingIndex = iVar13;
    pFVar28->ElementIndex = iVar14;
    pFVar28->ElementType = EVar15;
    pFVar28->bFromCache = bVar16;
    *(undefined2 *)&pFVar28->field_0x2e = uVar17;
    (pFVar28->Widget).Object = pSVar7;
    (pFVar28->Widget).WeakReferenceCount.ReferenceController = pTVar8;
    iVar19 = iVar22;
  } while( true );
}

// IntroSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,`SWidgetList::Sort'::__l8::<lambda_1>_>_> @ 142df5f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l8::<lambda_1>_>_>
          (TSharedPtr<FWidgetListEntry,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_private:_void___cdecl_SWidgetList::Sort(void)_::_8_::<lambda_1>_>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetListEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FWidgetListEntry,1> *pTVar6;
  TSharedPtr<FWidgetListEntry,1> *pTVar7;
  TSharedPtr<FWidgetListEntry,1> *pTVar8;
  TSharedPtr<FWidgetListEntry,1> **ppTVar9;
  int iVar10;
  TSharedPtr<FWidgetListEntry,1> *pTVar11;
  TSharedPtr<FWidgetListEntry,1> *pTVar12;
  TSharedPtr<FWidgetListEntry,1> *pTVar13;
  float fVar14;
  undefined1 auStack_388 [48];
  TSharedPtr<FWidgetListEntry,1> *local_358;
  TSharedPtr<FWidgetListEntry,1> *local_348;
  TSharedPtr<FWidgetListEntry,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppTVar9 = &local_348;
    do {
      pTVar13 = ppTVar9[1];
      pTVar12 = *ppTVar9;
      local_358 = ppTVar9[2];
      iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
      pTVar11 = pTVar12;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142df5fe0:
        if (8 < iVar5) {
          pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
          pTVar6 = pTVar13 + 1;
          pFVar2 = pTVar11[iVar5 / 2].Object;
          pTVar3 = pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController;
          pTVar11[iVar5 / 2].Object = pTVar11->Object;
          pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController = pTVar1;
          pTVar11->Object = pFVar2;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar12 = pTVar11;
LAB_142df6010:
          pTVar8 = pTVar12;
          pTVar12 = pTVar8 + 1;
          if (pTVar12 <= pTVar13) goto code_r0x000142df6019;
          goto LAB_142df6030;
        }
        for (; pTVar6 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar13; pTVar13 = pTVar13 + -1) {
          while (pTVar8 = pTVar6, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar13) {
            bVar4 = `SWidgetList::Sort'::__l8::<lambda_1>::operator()
                              (param_4.Predicate,pTVar8,pTVar12);
            pTVar6 = pTVar12;
            if (!bVar4) {
              pTVar6 = pTVar8;
            }
          }
          pFVar2 = pTVar8->Object;
          pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
          pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
          pTVar8->Object = pTVar13->Object;
          (pTVar8->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar13->Object = pFVar2;
          (pTVar13->SharedReferenceCount).ReferenceController = pTVar1;
        }
        goto LAB_142df60ff;
      }
LAB_142df60ee:
      HeapSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l8::<lambda_1>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_142df60ff:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_348 <= ppTVar9);
  }
  return;
code_r0x000142df6019:
  bVar4 = `SWidgetList::Sort'::__l8::<lambda_1>::operator()(param_4.Predicate,pTVar11,pTVar12);
  if (!bVar4) goto LAB_142df6010;
LAB_142df6030:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar11) break;
    bVar4 = `SWidgetList::Sort'::__l8::<lambda_1>::operator()(param_4.Predicate,pTVar6,pTVar11);
  } while (!bVar4);
  pTVar1 = pTVar7[-1].SharedReferenceCount.ReferenceController;
  if (pTVar12 <= pTVar6) {
    pFVar2 = pTVar12->Object;
    pTVar3 = pTVar8[1].SharedReferenceCount.ReferenceController;
    pTVar12->Object = pTVar6->Object;
    pTVar8[1].SharedReferenceCount.ReferenceController = pTVar1;
    pTVar6->Object = pFVar2;
    pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
    goto LAB_142df6010;
  }
  pFVar2 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  iVar10 = iVar10 + -1;
  pTVar11->Object = pTVar6->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar1;
  pTVar6->Object = pFVar2;
  pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar13 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar13) {
      *ppTVar9 = pTVar12;
      ppTVar9[1] = pTVar13;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar6 <= pTVar11 + 1) goto LAB_142df60ff;
    pTVar13 = pTVar7 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar6) {
      *ppTVar9 = pTVar11;
      ppTVar9[1] = pTVar7 + -2;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar13 <= pTVar12) goto LAB_142df60ff;
  }
  iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if (iVar10 == 0) goto LAB_142df60ee;
  goto LAB_142df5fe0;
}

// IntroSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,`SWidgetList::Sort'::__l12::<lambda_2>_>_> @ 142df61c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l12::<lambda_2>_>_>
          (TSharedPtr<FWidgetListEntry,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_private:_void___cdecl_SWidgetList::Sort(void)_::_12_::<lambda_2>_>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetListEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FWidgetListEntry,1> *pTVar6;
  TSharedPtr<FWidgetListEntry,1> *pTVar7;
  TSharedPtr<FWidgetListEntry,1> *pTVar8;
  TSharedPtr<FWidgetListEntry,1> **ppTVar9;
  int iVar10;
  TSharedPtr<FWidgetListEntry,1> *pTVar11;
  TSharedPtr<FWidgetListEntry,1> *pTVar12;
  TSharedPtr<FWidgetListEntry,1> *pTVar13;
  float fVar14;
  undefined1 auStack_388 [48];
  TSharedPtr<FWidgetListEntry,1> *local_358;
  TSharedPtr<FWidgetListEntry,1> *local_348;
  TSharedPtr<FWidgetListEntry,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppTVar9 = &local_348;
    do {
      pTVar13 = ppTVar9[1];
      pTVar12 = *ppTVar9;
      local_358 = ppTVar9[2];
      iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
      pTVar11 = pTVar12;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142df6280:
        if (8 < iVar5) {
          pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
          pTVar6 = pTVar13 + 1;
          pFVar2 = pTVar11[iVar5 / 2].Object;
          pTVar3 = pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController;
          pTVar11[iVar5 / 2].Object = pTVar11->Object;
          pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController = pTVar1;
          pTVar11->Object = pFVar2;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar12 = pTVar11;
LAB_142df62b0:
          pTVar8 = pTVar12;
          pTVar12 = pTVar8 + 1;
          if (pTVar12 <= pTVar13) goto code_r0x000142df62b9;
          goto LAB_142df62d0;
        }
        for (; pTVar6 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar13; pTVar13 = pTVar13 + -1) {
          while (pTVar8 = pTVar6, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar13) {
            bVar4 = `SWidgetList::Sort'::__l12::<lambda_2>::operator()
                              (param_4.Predicate,pTVar8,pTVar12);
            pTVar6 = pTVar12;
            if (!bVar4) {
              pTVar6 = pTVar8;
            }
          }
          pFVar2 = pTVar8->Object;
          pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
          pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
          pTVar8->Object = pTVar13->Object;
          (pTVar8->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar13->Object = pFVar2;
          (pTVar13->SharedReferenceCount).ReferenceController = pTVar1;
        }
        goto LAB_142df639f;
      }
LAB_142df638e:
      HeapSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l12::<lambda_2>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_142df639f:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_348 <= ppTVar9);
  }
  return;
code_r0x000142df62b9:
  bVar4 = `SWidgetList::Sort'::__l12::<lambda_2>::operator()(param_4.Predicate,pTVar11,pTVar12);
  if (!bVar4) goto LAB_142df62b0;
LAB_142df62d0:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar11) break;
    bVar4 = `SWidgetList::Sort'::__l12::<lambda_2>::operator()(param_4.Predicate,pTVar6,pTVar11);
  } while (!bVar4);
  pTVar1 = pTVar7[-1].SharedReferenceCount.ReferenceController;
  if (pTVar12 <= pTVar6) {
    pFVar2 = pTVar12->Object;
    pTVar3 = pTVar8[1].SharedReferenceCount.ReferenceController;
    pTVar12->Object = pTVar6->Object;
    pTVar8[1].SharedReferenceCount.ReferenceController = pTVar1;
    pTVar6->Object = pFVar2;
    pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
    goto LAB_142df62b0;
  }
  pFVar2 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  iVar10 = iVar10 + -1;
  pTVar11->Object = pTVar6->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar1;
  pTVar6->Object = pFVar2;
  pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar13 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar13) {
      *ppTVar9 = pTVar12;
      ppTVar9[1] = pTVar13;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar6 <= pTVar11 + 1) goto LAB_142df639f;
    pTVar13 = pTVar7 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar6) {
      *ppTVar9 = pTVar11;
      ppTVar9[1] = pTVar7 + -2;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar13 <= pTVar12) goto LAB_142df639f;
  }
  iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if (iVar10 == 0) goto LAB_142df638e;
  goto LAB_142df6280;
}

// IntroSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,`SWidgetList::Sort'::__l16::<lambda_3>_>_> @ 142df6460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l16::<lambda_3>_>_>
          (TSharedPtr<FWidgetListEntry,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_private:_void___cdecl_SWidgetList::Sort(void)_::_16_::<lambda_3>_>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetListEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FWidgetListEntry,1> *pTVar6;
  TSharedPtr<FWidgetListEntry,1> *pTVar7;
  TSharedPtr<FWidgetListEntry,1> *pTVar8;
  TSharedPtr<FWidgetListEntry,1> **ppTVar9;
  int iVar10;
  TSharedPtr<FWidgetListEntry,1> *pTVar11;
  TSharedPtr<FWidgetListEntry,1> *pTVar12;
  TSharedPtr<FWidgetListEntry,1> *pTVar13;
  float fVar14;
  undefined1 auStack_388 [48];
  TSharedPtr<FWidgetListEntry,1> *local_358;
  TSharedPtr<FWidgetListEntry,1> *local_348;
  TSharedPtr<FWidgetListEntry,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppTVar9 = &local_348;
    do {
      pTVar13 = ppTVar9[1];
      pTVar12 = *ppTVar9;
      local_358 = ppTVar9[2];
      iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
      pTVar11 = pTVar12;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142df6520:
        if (8 < iVar5) {
          pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
          pTVar6 = pTVar13 + 1;
          pFVar2 = pTVar11[iVar5 / 2].Object;
          pTVar3 = pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController;
          pTVar11[iVar5 / 2].Object = pTVar11->Object;
          pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController = pTVar1;
          pTVar11->Object = pFVar2;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar12 = pTVar11;
LAB_142df6550:
          pTVar8 = pTVar12;
          pTVar12 = pTVar8 + 1;
          if (pTVar12 <= pTVar13) goto code_r0x000142df6559;
          goto LAB_142df6570;
        }
        for (; pTVar6 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar13; pTVar13 = pTVar13 + -1) {
          while (pTVar8 = pTVar6, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar13) {
            bVar4 = `SWidgetList::Sort'::__l16::<lambda_3>::operator()
                              (param_4.Predicate,pTVar8,pTVar12);
            pTVar6 = pTVar12;
            if (!bVar4) {
              pTVar6 = pTVar8;
            }
          }
          pFVar2 = pTVar8->Object;
          pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
          pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
          pTVar8->Object = pTVar13->Object;
          (pTVar8->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar13->Object = pFVar2;
          (pTVar13->SharedReferenceCount).ReferenceController = pTVar1;
        }
        goto LAB_142df663f;
      }
LAB_142df662e:
      HeapSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l16::<lambda_3>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_142df663f:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_348 <= ppTVar9);
  }
  return;
code_r0x000142df6559:
  bVar4 = `SWidgetList::Sort'::__l16::<lambda_3>::operator()(param_4.Predicate,pTVar11,pTVar12);
  if (!bVar4) goto LAB_142df6550;
LAB_142df6570:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar11) break;
    bVar4 = `SWidgetList::Sort'::__l16::<lambda_3>::operator()(param_4.Predicate,pTVar6,pTVar11);
  } while (!bVar4);
  pTVar1 = pTVar7[-1].SharedReferenceCount.ReferenceController;
  if (pTVar12 <= pTVar6) {
    pFVar2 = pTVar12->Object;
    pTVar3 = pTVar8[1].SharedReferenceCount.ReferenceController;
    pTVar12->Object = pTVar6->Object;
    pTVar8[1].SharedReferenceCount.ReferenceController = pTVar1;
    pTVar6->Object = pFVar2;
    pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
    goto LAB_142df6550;
  }
  pFVar2 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  iVar10 = iVar10 + -1;
  pTVar11->Object = pTVar6->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar1;
  pTVar6->Object = pFVar2;
  pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar13 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar13) {
      *ppTVar9 = pTVar12;
      ppTVar9[1] = pTVar13;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar6 <= pTVar11 + 1) goto LAB_142df663f;
    pTVar13 = pTVar7 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar6) {
      *ppTVar9 = pTVar11;
      ppTVar9[1] = pTVar7 + -2;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar13 <= pTVar12) goto LAB_142df663f;
  }
  iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if (iVar10 == 0) goto LAB_142df662e;
  goto LAB_142df6520;
}

// IntroSortInternal<FVisualEntry,int,FIdentityFunctor,TDereferenceWrapper<FVisualEntry,`FVisualTreeCapture::EndWindow'::__l8::<lambda_1>_>_> @ 142df6700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FVisualEntry,int,FIdentityFunctor,TDereferenceWrapper<FVisualEntry,_FVisualTreeCapture::EndWindow_::__l8::<lambda_1>_>_>
          (FVisualEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FVisualEntry,_private:_void___cdecl_FVisualTreeCapture::EndWindow(FSlateWindowElementList_const_&)_::_8_::<lambda_1>_>
          param_4)

{
  FVisualEntry *pFVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TVector2<float>_u_0 TVar10;
  int iVar11;
  EElementType EVar12;
  bool bVar13;
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  EElementType EVar18;
  bool bVar19;
  undefined2 uVar20;
  int iVar21;
  FVisualEntry *pFVar22;
  FVisualEntry **ppFVar23;
  FVisualEntry *pFVar24;
  FVisualEntry *pFVar25;
  FVisualEntry *pFVar26;
  FVisualEntry *pFVar27;
  FVisualEntry *pFVar28;
  float fVar29;
  undefined1 auStack_368 [48];
  FVisualEntry *local_338;
  FVisualEntry *local_328;
  FVisualEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar29 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar29;
    memset(local_310,0,0x2e8);
    ppFVar23 = &local_328;
    do {
      pFVar26 = ppFVar23[1];
      pFVar28 = *ppFVar23;
      pFVar1 = ppFVar23[2];
      iVar21 = (int)((longlong)pFVar26 - (longlong)pFVar28 >> 6) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar27 = pFVar28;
      if ((int)local_338 != 0) {
LAB_142df67b0:
        if (8 < iVar21) {
          TVar2 = (pFVar27->TopRight).field0_0x0;
          pFVar24 = pFVar26 + 1;
          pFVar28 = pFVar27 + iVar21 / 2;
          TVar3 = (pFVar28->TopLeft).field0_0x0;
          TVar4 = (pFVar28->TopRight).field0_0x0;
          TVar5 = (pFVar28->BottomLeft).field0_0x0;
          TVar6 = (pFVar28->BottomRight).field0_0x0;
          iVar15 = pFVar28->LayerId;
          iVar16 = pFVar28->ClippingIndex;
          iVar17 = pFVar28->ElementIndex;
          EVar18 = pFVar28->ElementType;
          bVar19 = pFVar28->bFromCache;
          uVar20 = *(undefined2 *)&pFVar28->field_0x2e;
          pSVar7 = (pFVar28->Widget).Object;
          pTVar8 = (pFVar28->Widget).WeakReferenceCount.ReferenceController;
          (pFVar28->TopLeft).field0_0x0 = (pFVar27->TopLeft).field0_0x0;
          (pFVar28->TopRight).field0_0x0 = TVar2;
          TVar2 = (pFVar27->BottomRight).field0_0x0;
          (pFVar28->BottomLeft).field0_0x0 = (pFVar27->BottomLeft).field0_0x0;
          (pFVar28->BottomRight).field0_0x0 = TVar2;
          iVar21 = pFVar27->ClippingIndex;
          iVar11 = pFVar27->ElementIndex;
          EVar12 = pFVar27->ElementType;
          bVar13 = pFVar27->bFromCache;
          uVar14 = *(undefined2 *)&pFVar27->field_0x2e;
          pFVar28->LayerId = pFVar27->LayerId;
          pFVar28->ClippingIndex = iVar21;
          pFVar28->ElementIndex = iVar11;
          pFVar28->ElementType = EVar12;
          pFVar28->bFromCache = bVar13;
          *(undefined2 *)&pFVar28->field_0x2e = uVar14;
          pTVar9 = (pFVar27->Widget).WeakReferenceCount.ReferenceController;
          (pFVar28->Widget).Object = (pFVar27->Widget).Object;
          (pFVar28->Widget).WeakReferenceCount.ReferenceController = pTVar9;
          (pFVar27->TopLeft).field0_0x0 = TVar3;
          (pFVar27->TopRight).field0_0x0 = TVar4;
          (pFVar27->BottomLeft).field0_0x0 = TVar5;
          (pFVar27->BottomRight).field0_0x0 = TVar6;
          pFVar27->LayerId = iVar15;
          pFVar27->ClippingIndex = iVar16;
          pFVar27->ElementIndex = iVar17;
          pFVar27->ElementType = EVar18;
          pFVar27->bFromCache = bVar19;
          *(undefined2 *)&pFVar27->field_0x2e = uVar20;
          (pFVar27->Widget).Object = pSVar7;
          (pFVar27->Widget).WeakReferenceCount.ReferenceController = pTVar8;
          pFVar28 = pFVar27;
LAB_142df6813:
          pFVar22 = pFVar28;
          pFVar28 = pFVar22 + 1;
          if (pFVar28 <= pFVar26) goto code_r0x000142df681c;
          goto LAB_142df6825;
        }
        for (; pFVar1 = pFVar27, pFVar28 = pFVar27, pFVar27 < pFVar26; pFVar26 = pFVar26 + -1) {
          while (pFVar24 = pFVar28 + 1, pFVar24 <= pFVar26) {
            pFVar22 = pFVar28 + 1;
            pFVar28 = pFVar24;
            if (pFVar1->LayerId < pFVar22->LayerId) {
              pFVar1 = pFVar24;
            }
          }
          TVar2 = (pFVar1->TopLeft).field0_0x0;
          TVar3 = (pFVar1->TopRight).field0_0x0;
          TVar4 = (pFVar1->BottomLeft).field0_0x0;
          TVar5 = (pFVar1->BottomRight).field0_0x0;
          iVar15 = pFVar1->LayerId;
          iVar16 = pFVar1->ClippingIndex;
          iVar17 = pFVar1->ElementIndex;
          EVar18 = pFVar1->ElementType;
          bVar19 = pFVar1->bFromCache;
          uVar20 = *(undefined2 *)&pFVar1->field_0x2e;
          TVar6 = (pFVar26->TopRight).field0_0x0;
          pSVar7 = (pFVar1->Widget).Object;
          pTVar8 = (pFVar1->Widget).WeakReferenceCount.ReferenceController;
          (pFVar1->TopLeft).field0_0x0 = (pFVar26->TopLeft).field0_0x0;
          (pFVar1->TopRight).field0_0x0 = TVar6;
          TVar6 = (pFVar26->BottomRight).field0_0x0;
          (pFVar1->BottomLeft).field0_0x0 = (pFVar26->BottomLeft).field0_0x0;
          (pFVar1->BottomRight).field0_0x0 = TVar6;
          iVar21 = pFVar26->ClippingIndex;
          iVar11 = pFVar26->ElementIndex;
          EVar12 = pFVar26->ElementType;
          bVar13 = pFVar26->bFromCache;
          uVar14 = *(undefined2 *)&pFVar26->field_0x2e;
          pFVar1->LayerId = pFVar26->LayerId;
          pFVar1->ClippingIndex = iVar21;
          pFVar1->ElementIndex = iVar11;
          pFVar1->ElementType = EVar12;
          pFVar1->bFromCache = bVar13;
          *(undefined2 *)&pFVar1->field_0x2e = uVar14;
          pTVar9 = (pFVar26->Widget).WeakReferenceCount.ReferenceController;
          (pFVar1->Widget).Object = (pFVar26->Widget).Object;
          (pFVar1->Widget).WeakReferenceCount.ReferenceController = pTVar9;
          (pFVar26->TopLeft).field0_0x0 = TVar2;
          (pFVar26->TopRight).field0_0x0 = TVar3;
          (pFVar26->BottomLeft).field0_0x0 = TVar4;
          (pFVar26->BottomRight).field0_0x0 = TVar5;
          pFVar26->LayerId = iVar15;
          pFVar26->ClippingIndex = iVar16;
          pFVar26->ElementIndex = iVar17;
          pFVar26->ElementType = EVar18;
          pFVar26->bFromCache = bVar19;
          *(undefined2 *)&pFVar26->field_0x2e = uVar20;
          (pFVar26->Widget).Object = pSVar7;
          (pFVar26->Widget).WeakReferenceCount.ReferenceController = pTVar8;
        }
        goto LAB_142df6958;
      }
LAB_142df6947:
      local_338 = pFVar1;
      HeapSortInternal<FVisualEntry,int,FIdentityFunctor,TDereferenceWrapper<FVisualEntry,_FVisualTreeCapture::EndWindow_::__l8::<lambda_1>_>_>
                (pFVar28,iVar21,param_3,param_4);
LAB_142df6958:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_328 <= ppFVar23);
  }
  return;
code_r0x000142df681c:
  if (pFVar22[1].LayerId <= pFVar27->LayerId) goto LAB_142df6813;
LAB_142df6825:
  do {
    pFVar25 = pFVar24;
    pFVar24 = pFVar25 + -1;
    if (pFVar24 <= pFVar27) break;
  } while (pFVar27->LayerId <= pFVar25[-1].LayerId);
  TVar2 = (pFVar24->TopLeft).field0_0x0;
  TVar3 = pFVar25[-1].TopRight.field0_0x0;
  if (pFVar28 <= pFVar24) {
    TVar4 = (pFVar28->TopLeft).field0_0x0;
    TVar5 = pFVar22[1].TopRight.field0_0x0;
    TVar6 = pFVar22[1].BottomLeft.field0_0x0;
    TVar10 = pFVar22[1].BottomRight.field0_0x0;
    iVar15 = pFVar22[1].LayerId;
    iVar16 = pFVar22[1].ClippingIndex;
    iVar17 = pFVar22[1].ElementIndex;
    EVar18 = pFVar22[1].ElementType;
    bVar19 = pFVar22[1].bFromCache;
    uVar20 = *(undefined2 *)&pFVar22[1].field_0x2e;
    pSVar7 = pFVar22[1].Widget.Object;
    pTVar8 = pFVar22[1].Widget.WeakReferenceCount.ReferenceController;
    (pFVar28->TopLeft).field0_0x0 = TVar2;
    pFVar22[1].TopRight.field0_0x0 = TVar3;
    TVar2 = pFVar25[-1].BottomRight.field0_0x0;
    pFVar22[1].BottomLeft.field0_0x0 = pFVar25[-1].BottomLeft.field0_0x0;
    pFVar22[1].BottomRight.field0_0x0 = TVar2;
    iVar21 = pFVar25[-1].ClippingIndex;
    iVar11 = pFVar25[-1].ElementIndex;
    EVar12 = pFVar25[-1].ElementType;
    bVar13 = pFVar25[-1].bFromCache;
    uVar14 = *(undefined2 *)&pFVar25[-1].field_0x2e;
    pFVar22[1].LayerId = pFVar25[-1].LayerId;
    pFVar22[1].ClippingIndex = iVar21;
    pFVar22[1].ElementIndex = iVar11;
    pFVar22[1].ElementType = EVar12;
    pFVar22[1].bFromCache = bVar13;
    *(undefined2 *)&pFVar22[1].field_0x2e = uVar14;
    pTVar9 = pFVar25[-1].Widget.WeakReferenceCount.ReferenceController;
    pFVar22[1].Widget.Object = pFVar25[-1].Widget.Object;
    pFVar22[1].Widget.WeakReferenceCount.ReferenceController = pTVar9;
    (pFVar24->TopLeft).field0_0x0 = TVar4;
    pFVar25[-1].TopRight.field0_0x0 = TVar5;
    pFVar25[-1].BottomLeft.field0_0x0 = TVar6;
    pFVar25[-1].BottomRight.field0_0x0 = TVar10;
    pFVar25[-1].LayerId = iVar15;
    pFVar25[-1].ClippingIndex = iVar16;
    pFVar25[-1].ElementIndex = iVar17;
    pFVar25[-1].ElementType = EVar18;
    pFVar25[-1].bFromCache = bVar19;
    *(undefined2 *)&pFVar25[-1].field_0x2e = uVar20;
    pFVar25[-1].Widget.Object = pSVar7;
    pFVar25[-1].Widget.WeakReferenceCount.ReferenceController = pTVar8;
    goto LAB_142df6813;
  }
  TVar4 = (pFVar27->TopLeft).field0_0x0;
  TVar5 = (pFVar27->TopRight).field0_0x0;
  TVar6 = (pFVar27->BottomLeft).field0_0x0;
  TVar10 = (pFVar27->BottomRight).field0_0x0;
  iVar15 = pFVar27->LayerId;
  iVar16 = pFVar27->ClippingIndex;
  iVar17 = pFVar27->ElementIndex;
  EVar18 = pFVar27->ElementType;
  bVar19 = pFVar27->bFromCache;
  uVar20 = *(undefined2 *)&pFVar27->field_0x2e;
  local_338._0_4_ = (int)local_338 + -1;
  pSVar7 = (pFVar27->Widget).Object;
  pTVar8 = (pFVar27->Widget).WeakReferenceCount.ReferenceController;
  (pFVar27->TopLeft).field0_0x0 = TVar2;
  (pFVar27->TopRight).field0_0x0 = TVar3;
  TVar2 = pFVar25[-1].BottomRight.field0_0x0;
  (pFVar27->BottomLeft).field0_0x0 = pFVar25[-1].BottomLeft.field0_0x0;
  (pFVar27->BottomRight).field0_0x0 = TVar2;
  iVar21 = pFVar25[-1].ClippingIndex;
  iVar11 = pFVar25[-1].ElementIndex;
  EVar12 = pFVar25[-1].ElementType;
  bVar13 = pFVar25[-1].bFromCache;
  uVar14 = *(undefined2 *)&pFVar25[-1].field_0x2e;
  pFVar27->LayerId = pFVar25[-1].LayerId;
  pFVar27->ClippingIndex = iVar21;
  pFVar27->ElementIndex = iVar11;
  pFVar27->ElementType = EVar12;
  pFVar27->bFromCache = bVar13;
  *(undefined2 *)&pFVar27->field_0x2e = uVar14;
  pTVar9 = pFVar25[-1].Widget.WeakReferenceCount.ReferenceController;
  (pFVar27->Widget).Object = pFVar25[-1].Widget.Object;
  (pFVar27->Widget).WeakReferenceCount.ReferenceController = pTVar9;
  (pFVar24->TopLeft).field0_0x0 = TVar4;
  pFVar25[-1].TopRight.field0_0x0 = TVar5;
  pFVar25[-1].BottomLeft.field0_0x0 = TVar6;
  pFVar25[-1].BottomRight.field0_0x0 = TVar10;
  pFVar25[-1].LayerId = iVar15;
  pFVar25[-1].ClippingIndex = iVar16;
  pFVar25[-1].ElementIndex = iVar17;
  pFVar25[-1].ElementType = EVar18;
  pFVar25[-1].bFromCache = bVar19;
  *(undefined2 *)&pFVar25[-1].field_0x2e = uVar20;
  pFVar25[-1].Widget.Object = pSVar7;
  pFVar25[-1].Widget.WeakReferenceCount.ReferenceController = pTVar8;
  if ((longlong)((longlong)pFVar24 + (-0x40 - (longlong)pFVar27) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pFVar26 - (longlong)pFVar28 & 0xffffffffffffffc0U)) {
    if (pFVar28 < pFVar26) {
      *ppFVar23 = pFVar28;
      ppFVar23[1] = pFVar26;
      *(int *)(ppFVar23 + 2) = (int)local_338;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar24 <= pFVar27 + 1) goto LAB_142df6958;
    pFVar26 = pFVar25 + -2;
    pFVar28 = pFVar27;
  }
  else {
    if (pFVar27 + 1 < pFVar24) {
      *ppFVar23 = pFVar27;
      ppFVar23[1] = pFVar25 + -2;
      *(int *)(ppFVar23 + 2) = (int)local_338;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar26 <= pFVar28) goto LAB_142df6958;
  }
  iVar21 = (int)((longlong)pFVar26 - (longlong)pFVar28 >> 6) + 1;
  pFVar27 = pFVar28;
  if ((int)local_338 == 0) goto LAB_142df6947;
  goto LAB_142df67b0;
}

// MakeRequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&> @ 142df6cc0

T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&> * __cdecl
RequiredArgs::
MakeRequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>
          (T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>
           *__return_storage_ptr__,TSharedPtr<FWidgetListEntry,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>,int_&,int_&> @ 142df6ce0

T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>,int_&,int_&>
                    (T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>
                     *__return_storage_ptr__,TSharedPtr<ITableRow,1> *param_1,
                    TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *param_2,
                    int *param_3,int *param_4)

{
  __return_storage_ptr__->Arg3 = param_4;
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&> @ 142df6d00

T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>
          (TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *param_1)

{
  STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>)param_1
  ;
}

// MakeRequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&> @ 142df6d10

T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>
                    (T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>
                     *__return_storage_ptr__,
                    TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
                    *param_1,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
                             *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&> @ 142df6d30

T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>
                    (T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>
                     *__return_storage_ptr__,
                    TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy> *param_1,
                    TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy> *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_> @ 142df6d50

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<int,1>_>,1> *param_1)

{
  SListView<TSharedPtr<int,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_> @ 142df6d60

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&> __cdecl
RequiredArgs::
MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *param_1)

{
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>
         )param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_> @ 142df6d70

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_>
                   (TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                    *param_1)

{
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_> @ 142df6d80

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *param_1)

{
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_> @ 142df6d90

T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_>
                   (TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                    *param_1)

{
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_> @ 142df6da0

T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_>
          (TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *param_1)

{
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_> @ 142df6db0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<int,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_> @ 142df6dc0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&> __cdecl
RequiredArgs::
MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>
         )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_> @ 142df6dd0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FWidgetListEntry,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_> @ 142df6de0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_>
                   (TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                    *param_1)

{
  STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_> @ 142df6df0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_> @ 142df6e00

T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_>
                   (TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                    *param_1)

{
  STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_> @ 142df6e10

T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_>
          (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *param_1)

{
  STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_> @ 142df6e20

T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_>
          (TSharedRef<SReflectorTreeWidgetItem,1> *param_1)

{
  SReflectorTreeWidgetItem *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SWidget,1>_> @ 142df6e30

T1RequiredArgs<TSharedRef<SWidget,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SWidget,1>_>(TSharedRef<SWidget,1> *param_1)

{
  SWidget *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SWidget,1>_&&>)param_1;
}

// MakeShared<FJsonValueNumber,1,double_const_&> @ 142df6e40

TSharedRef<FJsonValueNumber,1> * __cdecl
MakeShared<FJsonValueNumber,1,double_const_&>
          (TSharedRef<FJsonValueNumber,1> *__return_storage_ptr__,double *param_1)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FJsonValueNumber,1> *pTVar5;
  
  pTVar4 = operator_new(0x28);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueNumber *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    dVar1 = *param_1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
    FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar4 + 1),dVar1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    __return_storage_ptr__->Object = (FJsonValueNumber *)(pTVar4 + 1);
    if ((FJsonValueNumber *)(pTVar4 + 1) == (FJsonValueNumber *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FJsonValueNumber,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> @ 142df6f00

TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> @ 142df6fb0

TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs> @ 142df7060

TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> @ 142df7110

TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142df71c0

TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SComboRow<TSharedPtr<int,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboRow_V__TSharedPtr_H_00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x3f8);
    STableRow<TSharedPtr<int,1>_>::STableRow<TSharedPtr<int,1>_>
              ((STableRow<TSharedPtr<int,1>_> *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SComboRow<TSharedPtr<int,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SComboRow<TSharedPtr<int,1>_>::_vftable__for__SBorder__;
  }
  TSharedRef<SComboRow<TSharedPtr<int,1>_>,1>::TSharedRef<SComboRow<TSharedPtr<int,1>_>,1>
            ((TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *)(local_48 + 0x10),
             (SComboRow<TSharedPtr<int,1>_> *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SComboRow<TSharedPtr<int,1>_> *)local_48._16_8_;
    local_48._0_8_ = (SComboRow<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SComboRow<TSharedPtr<int,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142df7390

TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboRow_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x3f8);
    STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
    STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
              ((STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)(pTVar3 + 1))
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
          _vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
          _vftable__for__SBorder__;
  }
  TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
  TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
            ((TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *)
             (local_48 + 0x10),
             (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)(pTVar3 + 1),
             pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object =
         (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)local_48._16_8_;
    local_48._0_8_ = (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object ==
      (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142df7560

TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboRow_V__TSharedPtr_VFWidgetReflectorNodeBase___00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x3f8);
    STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
    STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>
              ((STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)(pTVar3 + 1));
    pTVar3[1]._padding_ =
         (longlong)&SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_vftable__for__SBorder__;
  }
  TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::
  TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
            ((TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(local_48 + 0x10),
             (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object =
         (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)local_48._16_8_;
    local_48._0_8_ = (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object ==
      (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> @ 142df7730

TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs> @ 142df77e0

TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs> @ 142df7890

TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> @ 142df7940

TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs> @ 142df79f0

TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> @ 142df7aa0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&>_> @ 142df7b50

TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<int,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_H_00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<int,1>_>::STableRow<TSharedPtr<int,1>_>
              ((STableRow<TSharedPtr<int,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<int,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<int,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_> @ 142df7d00

TSlateDecl<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFNavigationSimulationWidgetNode___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
    STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
              ((STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *)
             (local_38 + 0x10),
             (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_> @ 142df7eb0

TSlateDecl<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
    STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
              ((STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)(pTVar3 + 1))
    ;
  }
  TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *)
             (local_38 + 0x10),
             (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)(pTVar3 + 1),
             pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_> @ 142df8060

TSlateDecl<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VFWidgetReflectorNodeBase___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
    STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>
              ((STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_> @ 142df8210

TSlateDecl<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
    STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
              ((STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
               (pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>::
  TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
            ((TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
              *)(local_38 + 0x10),
             (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
             (pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
         local_38._16_8_;
    local_38._0_8_ =
         (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_> @ 142df83c0

TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedRef_VFWidgetReflectorNodeBase___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::
    STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>
              ((STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::
  TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
            ((TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>_> @ 142df8570

TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>_>
* __cdecl MakeTDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>_>
                    (TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedRef_VFWidgetReflectorNodeBase___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::
    STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>
              ((STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::
  TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
            ((TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> @ 142df8720

TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAtlasVisualizer,RequiredArgs::T0RequiredArgs> @ 142df87d0

TSlateDecl<SAtlasVisualizer,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAtlasVisualizer,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAtlasVisualizer,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SAtlasVisualizer,RequiredArgs::T0RequiredArgs> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SAtlasVisualizer *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x330);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAtlasVisualizer___00_SharedPointerInternals__6B_;
    memset(&pTVar3[1].SharedReferenceCount,0,0x318);
    pTVar3[1]._padding_ = (longlong)&___7ISlateViewport__6B_;
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)&pTVar3[1].SharedReferenceCount);
    pTVar3[1]._padding_ = (longlong)&SAtlasVisualizer::_vftable__for__ISlateViewport__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SAtlasVisualizer::_vftable__for__SCompoundWidget__;
    FText::FText((FText *)(pTVar3 + 0x2c));
    pTVar3[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x2e]._padding_ = 0;
    pTVar3[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x2f]._padding_ = 0;
    pTVar3[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x30]._padding_ = 0;
    pTVar3[0x31].SharedReferenceCount = (atomic<int>)0xbf800000;
    pTVar3[0x31].WeakReferenceCount = (atomic<int>)0xbf800000;
    *(undefined4 *)&pTVar3[0x32]._padding_ = 0xbf800000;
    *(undefined4 *)((longlong)&pTVar3[0x32]._padding_ + 4) = 0xbf800000;
    pTVar3[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SAtlasVisualizer,1>::TSharedRef<SAtlasVisualizer,1>
            ((TSharedRef<SAtlasVisualizer,1> *)(local_48 + 0x10),(SAtlasVisualizer *)(pTVar5 + 1),
             pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SAtlasVisualizer,RequiredArgs::T0RequiredArgs> *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SAtlasVisualizer *)local_48._16_8_;
    local_48._0_8_ = (SAtlasVisualizer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SAtlasVisualizer *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SAtlasVisualizer,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,800);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> @ 142df8a10

TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs> @ 142df8ac0

TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_> @ 142df8b70

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_> @ 142df8c20

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_> @ 142df8cd0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_> @ 142df8d80

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_> @ 142df8e30

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_> @ 142df8ee0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_> @ 142df8f90

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_> @ 142df9040

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SGridPanel,RequiredArgs::T0RequiredArgs> @ 142df90f0

TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142df91a0

TSlateDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SIntermediateResultNode *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x478);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSIntermediateResultNode_WidgetHittestGridInternal___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x468);
    STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
    STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
              ((STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
               (pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ =
         (longlong)&WidgetHittestGridInternal::SIntermediateResultNode::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &WidgetHittestGridInternal::SIntermediateResultNode::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1>::
  TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1>
            ((TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *)(local_48 + 0x10),
             (SIntermediateResultNode *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SIntermediateResultNode *)local_48._16_8_;
    local_48._0_8_ = (SIntermediateResultNode *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SIntermediateResultNode *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x468);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142df93d0

TSlateDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SListElement *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x478);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSListElement_SNavigationSimulationListInternal___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x468);
    STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
    STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
              ((STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ =
         (longlong)&SNavigationSimulationListInternal::SListElement::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SNavigationSimulationListInternal::SListElement::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SNavigationSimulationListInternal::SListElement,1>::
  TSharedRef<SNavigationSimulationListInternal::SListElement,1>
            ((TSharedRef<SNavigationSimulationListInternal::SListElement,1> *)(local_48 + 0x10),
             (SListElement *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SListElement *)local_48._16_8_;
    local_48._0_8_ = (SListElement *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SListElement *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x468);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_> @ 142df9600

TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
* __cdecl MakeTDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
                    (TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
  ::
  TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_> @ 142df96b0

TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
* __cdecl MakeTDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
                    (TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
  ::
  TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_> @ 142df9760

TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
* __cdecl MakeTDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
                    (TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
  ::
  TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> @ 142df9810

TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SReflectorTreeWidgetItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142df98c0

TSlateDecl<SReflectorTreeWidgetItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SReflectorTreeWidgetItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SReflectorTreeWidgetItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SReflectorTreeWidgetItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SReflectorTreeWidgetItem *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x4a8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSReflectorTreeWidgetItem___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x498);
    STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::
    STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>
              ((STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&SReflectorTreeWidgetItem::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SReflectorTreeWidgetItem::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar3[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x48]._padding_ = 0;
    pTVar3[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x49]._padding_ = 0;
    pTVar3[0x49].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x49].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x4a]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SReflectorTreeWidgetItem,1>::TSharedRef<SReflectorTreeWidgetItem,1>
            ((TSharedRef<SReflectorTreeWidgetItem,1> *)(local_48 + 0x10),
             (SReflectorTreeWidgetItem *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SReflectorTreeWidgetItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SReflectorTreeWidgetItem *)local_48._16_8_;
    local_48._0_8_ = (SReflectorTreeWidgetItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SReflectorTreeWidgetItem *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SReflectorTreeWidgetItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x498);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> @ 142df9b20

TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__
          ,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> @ 142df9bd0

TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSlateOptions,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> @ 142df9c80

TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SViewport,RequiredArgs::T0RequiredArgs> @ 142df9d30

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SViewport,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> @ 142df9de0

TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> * __cdecl
MakeTDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
          (TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SWidget,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>::
  TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> @ 142df9e90

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> * __cdecl
MakeTDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
          (TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SWidget,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>::
  TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWidgetList,RequiredArgs::T0RequiredArgs> @ 142df9f40

TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SWidgetList,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_> @ 142df9ff0

TSlateDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SWidgetListRow *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x4a8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSWidgetListRow___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x498);
    STableRow<TSharedPtr<FWidgetListEntry,1>_>::STableRow<TSharedPtr<FWidgetListEntry,1>_>
              ((STableRow<TSharedPtr<FWidgetListEntry,1>_> *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&SWidgetListRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount = &SWidgetListRow::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar3[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x48]._padding_ = 0;
    pTVar3[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x49]._padding_ = 0;
    pTVar3[0x49].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x49].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x4a]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SWidgetListRow,1>::TSharedRef<SWidgetListRow,1>
            ((TSharedRef<SWidgetListRow,1> *)(local_48 + 0x10),(SWidgetListRow *)(pTVar5 + 1),pTVar5
            );
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SWidgetListRow *)local_48._16_8_;
    local_48._0_8_ = (SWidgetListRow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SWidgetListRow *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x498);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWidgetReflector,RequiredArgs::T0RequiredArgs> @ 142dfa250

TSlateDecl<SWidgetReflector,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SWidgetReflector,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWidgetReflector,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidgetReflector,1> *pTVar3;
  TSlateDecl<SWidgetReflector,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SWidgetReflector *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = SWidgetReflector::New((TSharedRef<SWidgetReflector,1> *)(local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SWidgetReflector,RequiredArgs::T0RequiredArgs> *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (SWidgetReflector *)local_38._0_8_;
    local_38._0_8_ = (SWidgetReflector *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object == (SWidgetReflector *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SWidgetReflector,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)(__return_storage_ptr__->_Widget).Object,param_1,param_2,param_3,0x2b0);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs> @ 142dfa3a0

TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_> @ 142dfa4b0

TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> * __cdecl
SharedPointerInternals::
NewIntrusiveReferenceController<1,STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_>(void)

{
  uchar *puVar1;
  longlong *plVar2;
  char cVar3;
  TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar4;
  undefined8 *local_res8;
  
  pTVar4 = ::operator_new(0xb10);
  if (pTVar4 == (TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
                 *)0x0) {
    return (TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)
           0x0;
  }
  *(undefined4 *)&pTVar4->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 1;
  pTVar4->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_V__STreeView_V__TSharedRef_VFWidgetReflectorNodeBase___00_____00_SharedPointerInternals__6B_
  ;
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>
            ((SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)&pTVar4->ObjectStorage,Tree);
  puVar1 = (pTVar4->ObjectStorage).Pad + 0xa98;
  *(undefined ***)(pTVar4->ObjectStorage).Pad =
       &STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::_vftable__for__SCompoundWidget__;
  (pTVar4->ObjectStorage).Pad[0xa00] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa01] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa02] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa03] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa04] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa05] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa06] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa07] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa08] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa09] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa10] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa11] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa12] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa13] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa18] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa19] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa20] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa21] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa22] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa23] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa24] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa25] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa26] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa27] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa28] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa29] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa38] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa39] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa40] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa41] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa42] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa43] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa44] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa45] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa46] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa47] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa58] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa59] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5f] = '\0';
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x2a8) =
       &STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::_vftable__for__IScrollableWidget__;
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x588) =
       &___7__STreeView_V__TSharedRef_VFWidgetReflectorNodeBase___00____6B_;
  (pTVar4->ObjectStorage).Pad[0xa60] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa61] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa62] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa63] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa64] = 0x80;
  (pTVar4->ObjectStorage).Pad[0xa65] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa66] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa67] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa68] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa69] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6a] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6b] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa78] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa79] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa80] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa81] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa82] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa83] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa88] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa89] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa90] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa91] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa92] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa93] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa94] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa95] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa96] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa97] = '\0';
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaa] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaab] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaac] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaad] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaae] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaba] = '\0';
  (pTVar4->ObjectStorage).Pad[0xabb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaca] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacc] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacd] = '\0';
  (pTVar4->ObjectStorage).Pad[0xace] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad0] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xad1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad9] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xaf0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaea] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaeb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaec] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaed] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaee] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaef] = '\0';
  if (puVar1 == (uchar *)0x0) {
    `SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SetItemsSource'::__l2::<lambda_1>::
    operator()(&local_res8);
  }
  plVar2 = *(longlong **)((pTVar4->ObjectStorage).Pad + 0x9f8);
  if ((plVar2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,puVar1), cVar3 != '\0')) {
    return pTVar4;
  }
  if (puVar1 == (uchar *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    local_res8 = ::operator_new(0x10);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      local_res8[1] = puVar1;
      *local_res8 = &
                    ___7__FArrayPointer_V__TSharedRef_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
      ;
    }
  }
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SetItemsSource
            ((SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)&pTVar4->ObjectStorage,
             (IItemsSource<TSharedRef<FWidgetReflectorNodeBase,1>_> *)&local_res8);
  return pTVar4;
}

// OnNavigate_Lambda<`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_> @ 142dfb8b0

FArguments * __thiscall
SHyperlink::FArguments::
OnNavigate_Lambda<_SReflectorTreeWidgetItem::GenerateWidgetForColumn_::__l52::<lambda_2>_>
          (FArguments *this,<lambda_2> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnNavigate,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnNavigate).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::`52'::<lambda_2>_>
               ::_vftable_;
    ::FString::FString((FString *)(puVar1 + 3),&param_1->ConditionalBreakPoint);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnNavigate_Lambda<`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_> @ 142dfb950

FArguments * __thiscall
SHyperlink::FArguments::
OnNavigate_Lambda<_SReflectorTreeWidgetItem::GenerateWidgetForColumn_::__l52::<lambda_3>_>
          (FArguments *this,<lambda_3> *param_1)

{
  ITextData *pIVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_res8 [8];
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnNavigate,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnNavigate).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::`52'::<lambda_3>_>
               ::_vftable_;
    puVar2[3] = 0;
    pIVar1 = (param_1->Address).TextData.Reference;
    puVar2[3] = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    *(uint *)(puVar2 + 4) = (param_1->Address).Flags;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// Reverse<TSharedRef<FWidgetReflectorNodeBase,1>_> @ 142dfd690

void __cdecl
AlgoImpl::Reverse<TSharedRef<FWidgetReflectorNodeBase,1>_>
          (TSharedRef<FWidgetReflectorNodeBase,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetReflectorNodeBase *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pFVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_> @ 142e00660

TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SReflectorTreeWidgetItem::GenerateWidgetForColumn(FName_const_&)_::_52_::<lambda_3>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_SReflectorTreeWidgetItem::GenerateWidgetForColumn_::__l52::<lambda_3>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SReflectorTreeWidgetItem::GenerateWidgetForColumn(FName_const_&)_::_52_::<lambda_3>_>
          *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::`52'::<lambda_3>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  pIVar1 = (param_1->Functor).Address.TextData.Reference;
  *(ITextData **)((longlong)this + 0x18) = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)((longlong)this + 0x20) = (param_1->Functor).Address.Flags;
  return this;
}

// ~TFunction_OwnedObject<`SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0> @ 142e0fbf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget::Construct_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedRef_VFWidgetReflectorNodeBase___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedRef_VFWidgetReflectorNodeBase___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_1>,0,0> @ 142e0fc10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_3>,0,0> @ 142e0fc30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 142e18c00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>
::operator()(void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  atomic<int> *paVar1;
  FWeakReferencer<1> *pFVar2;
  atomic<int> aVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TWeakPtr<SDockTab,1> *pTVar9;
  TSharedRef<SDockTab,1> *pTVar10;
  longlong *plVar11;
  SDockTab *local_48;
  TReferenceControllerBase<1> *local_40;
  FSpawnTabArgs *local_38;
  SDockTab **local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if (*(int *)((longlong)this + 0x18) == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = *(longlong **)((longlong)this + 0x10);
  }
  (**(code **)(*plVar11 + 0x60))(plVar11,__return_storage_ptr__,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  lVar4 = *(longlong *)this;
  pTVar9 = TMapBase<FName,TWeakPtr<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>_>
           ::Find((TMapBase<FName,TWeakPtr<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>_>
                   *)(lVar4 + 0x2c0),(param_1->TabIdBeingSpawned).TabType);
  if (pTVar9 == (TWeakPtr<SDockTab,1> *)0x0) {
    local_48 = __return_storage_ptr__->Object;
    local_40 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->WeakReferenceCount = (atomic<int>)((int)local_40->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_30 = &local_48;
    local_38 = param_1;
    TSet<TTuple<FName,TWeakPtr<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TWeakPtr<SDockTab,1>_&&>_>
              ((TSet<TTuple<FName,TWeakPtr<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>,FDefaultSetAllocator>
                *)(lVar4 + 0x2c0),
               (TPairInitializer<FName_const_&,TWeakPtr<SDockTab,1>_&&> *)&stack0x00000008,
               (bool *)&local_38);
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &local_40->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(local_40->_padding_ + 8))(local_40,1);
      }
    }
  }
  else {
    pFVar2 = &pTVar9->WeakReferenceCount;
    if (((pTVar9->Object != (SDockTab *)0x0) &&
        (pFVar2->ReferenceController != (TReferenceControllerBase<1> *)0x0)) &&
       (0 < (int)pFVar2->ReferenceController->SharedReferenceCount)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ExistingTab->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                         ,0x47a,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
        return pTVar10;
      }
    }
    pTVar9->Object = __return_storage_ptr__->Object;
    pTVar5 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (pTVar5 != pFVar2->ReferenceController) {
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = pFVar2->ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      pFVar2->ReferenceController = pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 142e1d930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SlateNavigationSimulationInternal::<lambda_5>::operator()
          (<lambda_5> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  int iVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  EVisibility EVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  FSlateApplication *pFVar9;
  FSlateReflectorModule *pFVar10;
  FSlateNavigationEventSimulator *this_00;
  FArrangedWidget *pFVar11;
  FText *pFVar12;
  ForAnyElementType _Str;
  wchar_t *pwVar13;
  ForElementType<FArrangedWidget> FVar14;
  FScriptContainerElement *pFVar15;
  ENavigationGenesis EVar16;
  FOutputDevice *this_01;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_578 [32];
  EUINavigation local_548;
  undefined1 local_547 [3];
  int local_544;
  ulonglong local_540;
  FString local_538;
  long64 local_528;
  FOutputDevice *local_520;
  TSharedRef<SWidget_const_,1> local_518;
  TSharedPtr<SWidget_const_,1> local_508;
  TSharedPtr<SWidget_const_,1> local_4f8;
  SWidget *local_4e8;
  TReferenceControllerBase<1> *pTStack_4e0;
  FText local_4d8;
  FText local_4c8;
  FSimulationResult local_4b8;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_578;
  iVar1 = param_1->ArrayNum;
  pFVar15 = (param_1->AllocatorInstance).Data;
  uVar8 = 0;
  local_544 = 0;
  pFVar17 = pFVar15 + (longlong)iVar1 * 0x10;
  local_548 = Left;
  EVar16 = Controller;
  local_520 = param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_547[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_547);
    }
    if (pFVar15 == pFVar17) break;
    local_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_538.Data.ArrayNum = 0;
    local_538.Data.ArrayMax = 0;
    local_540 = 0;
    local_528 = 0;
    if (*(int *)(pFVar15 + 8) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)pFVar15;
    }
    bVar6 = FParse::Value(pwVar13,L"Widget=",&local_538,true,(wchar_t **)0x0);
    if (bVar6) {
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_538.Data.ArrayNum != 0) {
        _Str.Data = local_538.Data.AllocatorInstance.Data;
      }
      uVar8 = _wcstoui64((wchar_t *)_Str.Data,(wchar_t **)0x0,0);
    }
    else {
      if (*(int *)(pFVar15 + 8) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)pFVar15;
      }
      bVar6 = FParse::Value(pwVar13,L"Navigation=",(long64 *)&local_540);
      if (bVar6) {
        if (local_540 < 6) {
          local_548 = (EUINavigation)local_540;
        }
      }
      else {
        if (*(int *)(pFVar15 + 8) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = *(wchar_t **)pFVar15;
        }
        bVar6 = FParse::Value(pwVar13,L"UserIndex=",&local_544);
        if (!bVar6) {
          if (*(int *)(pFVar15 + 8) == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = *(wchar_t **)pFVar15;
          }
          bVar6 = FParse::Value(pwVar13,L"Genesis=",&local_528);
          if ((bVar6) && (local_540 < 3)) {
            EVar16 = (ENavigationGenesis)local_528;
          }
        }
      }
    }
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
    pFVar15 = pFVar15 + 0x10;
  }
  if (uVar8 != 0) {
    TSharedFromThis<SWidget,1>::AsShared((TSharedFromThis<SWidget,1> *)(uVar8 + 8),&local_518);
    FWidgetPath::FWidgetPath(&local_198);
    pFVar9 = FSlateApplication::Get();
    EVar5 = EVisibility::Visible;
    local_4e8 = local_518.Object;
    pTStack_4e0 = local_518.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(*(longlong *)pFVar9 + 0x20);
    if (local_518.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar7 = (*pcVar2)(pFVar9,&local_4e8,&local_198,EVar5.Value.Value);
    if (cVar7 != '\0') {
      pFVar10 = FSlateReflectorModule::GetModulePtr();
      this_00 = (FSlateNavigationEventSimulator *)(**(code **)((longlong)*pFVar10 + 0x68))(pFVar10);
      FSlateNavigationEventSimulator::Simulate
                (this_00,&local_4b8,&local_198,local_544,EVar16,local_548);
      bVar6 = FWidgetPath::IsValid(&local_4b8.NavigationSource);
      this_01 = local_520;
      if (bVar6) {
        bVar6 = FWidgetPath::IsValid(&local_4b8.NavigationSource);
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                               ,0xac,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = FArrangedChildren::operator[]
                            ((FArrangedChildren *)&local_4b8,
                             local_4b8.NavigationSource.Widgets.Array.ArrayNum + -1);
        pTVar3 = (pFVar11->Widget).SharedReferenceCount.ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar6 = FWidgetPath::IsValid(&local_4b8.NavigationSource);
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                               ,0xac,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = FArrangedChildren::operator[]
                            ((FArrangedChildren *)&local_4b8,
                             local_4b8.NavigationSource.Widgets.Array.ArrayNum + -1);
        pTVar4 = (pFVar11->Widget).SharedReferenceCount.ReferenceController;
        local_508.Object = (pFVar11->Widget).Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_508.SharedReferenceCount.ReferenceController = pTVar4;
        pFVar12 = FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName(&local_4d8,&local_508);
        FText::ToString(pFVar12);
        this_01 = local_520;
        FOutputDevice::LogfImpl(local_520,L"Source: %s [%0xd]");
        if (local_4d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_4d8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      bVar6 = FWidgetPath::IsValid(&local_4b8.NavigationDestination);
      if (bVar6) {
        bVar6 = FWidgetPath::IsValid(&local_4b8.NavigationDestination);
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                               ,0xac,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = FArrangedChildren::operator[]
                            (&local_4b8.NavigationDestination.Widgets,
                             local_4b8.NavigationDestination.Widgets.Array.ArrayNum + -1);
        pTVar3 = (pFVar11->Widget).SharedReferenceCount.ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar6 = FWidgetPath::IsValid(&local_4b8.NavigationDestination);
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                               ,0xac,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = FArrangedChildren::operator[]
                            (&local_4b8.NavigationDestination.Widgets,
                             local_4b8.NavigationDestination.Widgets.Array.ArrayNum + -1);
        pTVar4 = (pFVar11->Widget).SharedReferenceCount.ReferenceController;
        local_4f8.Object = (pFVar11->Widget).Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_4f8.SharedReferenceCount.ReferenceController = pTVar4;
        pFVar12 = FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName(&local_4c8,&local_4f8);
        FText::ToString(pFVar12);
        FOutputDevice::LogfImpl(this_01,L"Destination: %s [%0llx]");
        if (local_4c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_4c8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4b8.FocusedWidgetPath.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4b8.WidgetThatShouldReceivedFocus.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4b8.NavigationReply.FocusRecipient.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4b8.NavigationReply.EventHandler.SharedReferenceCount.ReferenceController);
      FWidgetPath::~FWidgetPath(&local_4b8.NavigationDestination);
      FWidgetPath::~FWidgetPath(&local_4b8.NavigationSource);
    }
    if (local_198.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar14 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
    if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar14 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar14,local_198.Widgets.Array.ArrayNum);
    if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_198.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_518.SharedReferenceCount.ReferenceController);
  }
  return;
}

// `vcall'{152,{flat}}'_}' @ 142e22018

/* [thunk]: __cdecl STableRow<class TSharedPtr<int,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<int,1>_>::_vcall__152__flat______(STableRow<TSharedPtr<int,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e2201b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 142e22028

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct FNavigationSimulationWidgetNode,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e2202b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 142e22038

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct FWidgetListEntry,1> >::`vcall'{152,{flat}}' }'
    */

void __thiscall
STableRow<TSharedPtr<FWidgetListEntry,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FWidgetListEntry,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e2203b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 142e22048

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct WidgetReflectorImpl::FWidgetSnapshotTarget,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e2204b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 142e22058

/* [thunk]: __cdecl STableRow<class TSharedPtr<class FWidgetReflectorNodeBase,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e2205b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 142e22068

/* [thunk]: __cdecl STableRow<class TSharedRef<struct
   WidgetHittestGridInternal::FIntermediateResultNode,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_vcall__152__flat______
          (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e2206b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 142e22078

/* [thunk]: __cdecl STableRow<class TSharedRef<class FWidgetReflectorNodeBase,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::_vcall__152__flat______
          (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e2207b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{56,{flat}}'_}' @ 142e22088

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]: __cdecl WidgetReflectorImpl::SWidgetReflector::`vcall'{56,{flat}}' }' */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::_vcall__56__flat______(SWidgetReflector *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e2208b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e22094

/* [thunk]:public: virtual void * __ptr64 __cdecl SComboRow<class TSharedPtr<int,1> >::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SComboRow<TSharedPtr<int,1>_>::_vector_deleting_destructor__adjustor_8__
          (SComboRow<TSharedPtr<int,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SComboRow<TSharedPtr<int,1>_> *)&this[-1].field_0x3f0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e220a4

/* [thunk]:public: virtual void * __ptr64 __cdecl SComboRow<class TSharedPtr<struct
   WidgetReflectorImpl::FWidgetSnapshotTarget,1> >::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
_vector_deleting_destructor__adjustor_8__
          (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)
                      &this[-1].field_0x3f0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e220b4

/* [thunk]:public: virtual void * __ptr64 __cdecl SComboRow<class TSharedPtr<class
   FWidgetReflectorNodeBase,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_vector_deleting_destructor__adjustor_8__
          (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)&this[-1].field_0x3f0,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142e220c4

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<int,1> >::`vector
   deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<int,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<int,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<int,1>_> *)&this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142e220d8

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   FNavigationSimulationWidgetNode,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int)
   __ptr64 */

void * __thiscall
SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142e220ec

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   WidgetReflectorImpl::FWidgetSnapshotTarget,1> >::`vector deleting destructor'`adjustor{680}'
   (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142e22100

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<class
   FWidgetReflectorNodeBase,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64
    */

void * __thiscall
SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142e22114

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedRef<struct
   WidgetHittestGridInternal::FIntermediateResultNode,1> >::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
                       *)&this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142e22128

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedRef<class
   FWidgetReflectorNodeBase,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64
    */

void * __thiscall
SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e2213c

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedPtr<struct
   FNavigationSimulationWidgetNode,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int)
   __ptr64 */

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)
                      &this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e2214c

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedPtr<struct
   FWidgetListEntry,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_> *)
                      &this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e2215c

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedRef<struct
   WidgetHittestGridInternal::FIntermediateResultNode,1> >::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
                       *)&this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e2216c

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedRef<class
   FWidgetReflectorNodeBase,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::
_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)
                      &this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e2217c

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<int,1> >::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<int,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<int,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<int,1>_> *)&this[-1].bChangedSelectionOnMouseDown,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e2218c

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   FNavigationSimulationWidgetNode,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int)
   __ptr64 */

void * __thiscall
STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e2219c

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   FWidgetListEntry,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<FWidgetListEntry,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FWidgetListEntry,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FWidgetListEntry,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e221ac

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   WidgetReflectorImpl::FWidgetSnapshotTarget,1> >::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e221bc

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<class
   FWidgetReflectorNodeBase,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e221cc

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedRef<struct
   WidgetHittestGridInternal::FIntermediateResultNode,1> >::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
                       *)&this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e221dc

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedRef<class
   FWidgetReflectorNodeBase,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142e221ec

/* [thunk]:public: virtual void * __ptr64 __cdecl STreeView<class TSharedRef<class
   FWidgetReflectorNodeBase,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64
    */

void * __thiscall
STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::_vector_deleting_destructor__adjustor_680__
          (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)&this[-1].field_0x858,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e22200

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FMessageEndpoint::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMessageEndpoint::_vector_deleting_destructor__adjustor_8__(FMessageEndpoint *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMessageEndpoint *)(this[-1].HandlersCS.CriticalSection.Opaque3 + 2),param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 142e22210

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FMessageEndpoint::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FMessageEndpoint::_vector_deleting_destructor__adjustor_16__(FMessageEndpoint *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMessageEndpoint *)(this[-1].HandlersCS.CriticalSection.Opaque3 + 1),param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e22220

/* [thunk]:public: virtual void * __ptr64 __cdecl SAtlasVisualizerPanel::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SAtlasVisualizerPanel::_vector_deleting_destructor__adjustor_8__
          (SAtlasVisualizerPanel *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SAtlasVisualizerPanel *)&this[-1].ScrollyZoomy.VerticalIntertia.SampleTimeout
                      ,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e22230

/* [thunk]:public: virtual void * __ptr64 __cdecl
   WidgetHittestGridInternal::SIntermediateResultNode::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
WidgetHittestGridInternal::SIntermediateResultNode::_vector_deleting_destructor__adjustor_8__
          (SIntermediateResultNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SIntermediateResultNode *)&this[-1].NodeToVisualize.SharedReferenceCount,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e22240

/* [thunk]:public: virtual void * __ptr64 __cdecl
   SNavigationSimulationListInternal::SListElement::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
SNavigationSimulationListInternal::SListElement::_vector_deleting_destructor__adjustor_8__
          (SListElement *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListElement *)&this[-1].WidgetItem.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e22250

/* [thunk]:public: virtual void * __ptr64 __cdecl SReflectorTreeWidgetItem::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SReflectorTreeWidgetItem::_vector_deleting_destructor__adjustor_8__
          (SReflectorTreeWidgetItem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SReflectorTreeWidgetItem *)&this[-1].OnAccessAsset.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142e22260

/* [thunk]:public: virtual void * __ptr64 __cdecl SWidgetListRow::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SWidgetListRow::_vector_deleting_destructor__adjustor_8__(SWidgetListRow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SWidgetListRow *)&this[-1].OnAccessAsset.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142e22270

/* [thunk]:public: virtual void * __ptr64 __cdecl SWidgetReflector::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SWidgetReflector::_vector_deleting_destructor__adjustor_680__(SWidgetReflector *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SWidgetReflector *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142e22284

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl WidgetReflectorImpl::SWidgetReflector::`vector
   deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
WidgetReflectorImpl::SWidgetReflector::_vector_deleting_destructor__adjustor_680__
          (SWidgetReflector *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SWidgetReflector *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 142e222a0

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<int,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e222d0

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22300

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22330

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22360

void * __thiscall
UE::Slate::ItemsSource::
FArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22390

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e223c0

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<int,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)&___7__FObservableArrayPointer_V__TSharedPtr_H_00___ItemsSource_Slate_UE__6B_;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22480

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22540

void * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22600

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e226c0

void * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22780

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22840

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<int,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)&___7__FSharedObservableArray_V__TSharedPtr_H_00___ItemsSource_Slate_UE__6B_;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e228d0

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,uint param_1
          )

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22960

void * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e229f0

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22a80

void * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22b10

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22ba0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22bd0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22c00

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22c30

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22c60

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22c90

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22cc0

void * __thiscall
IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22cf0

void * __thiscall
IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22d20

void * __thiscall
IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22d50

void * __thiscall
IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22d80

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22db0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22de0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22e10

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22e40

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22e70

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22ea0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22ed0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22f00

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22f30

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22f60

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22f90

void * __thiscall
IBaseDelegateInstance<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22fc0

void * __thiscall
IBaseDelegateInstance<void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e22ff0

void * __thiscall
IBaseDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23020

void * __thiscall
IBaseDelegateInstance<void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23050

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23080

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e230b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e230e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23110

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23140

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23170

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e231a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e231d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23200

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23230

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23260

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23290

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e232c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e232f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23320

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23350

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<int,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23380

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e233b0

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e233e0

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23410

void * __thiscall
UE::Slate::ItemsSource::
IItemsSource<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23440

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedRef<FWidgetReflectorNodeBase,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23470

void * __thiscall
SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  ~SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e234d0

void * __thiscall
SComboBox<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (SComboBox<TSharedPtr<int,1>_> *this,uint param_1)

{
  ~SComboBox<TSharedPtr<int,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23530

void * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::_scalar_deleting_destructor_
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,uint param_1)

{
  ~SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23590

void * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  ~SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e235f0

void * __thiscall
SComboRow<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (SComboRow<TSharedPtr<int,1>_> *this,uint param_1)

{
  STableRow<TSharedPtr<int,1>_>::~STableRow<TSharedPtr<int,1>_>
            ((STableRow<TSharedPtr<int,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23650

void * __thiscall
SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::_scalar_deleting_destructor_
          (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,uint param_1)

{
  STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
  ~STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
            ((STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e236b0

void * __thiscall
SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
  ~STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>
            ((STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23710

void * __thiscall
SListView<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<int,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<int,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23770

void * __thiscall
SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e237d0

void * __thiscall
SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23830

void * __thiscall
SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23890

void * __thiscall
SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_scalar_deleting_destructor_
          (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *this,
          uint param_1)

{
  ~SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e238f0

void * __thiscall
SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  ~SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23950

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
  ~STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
            ((STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e239f0

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FWidgetListEntry,1>_>::~STableRow<TSharedPtr<FWidgetListEntry,1>_>
            ((STableRow<TSharedPtr<FWidgetListEntry,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23a90

void * __thiscall
SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
  ~STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
            ((STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23b30

void * __thiscall
SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::
  ~STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>
            ((STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23bd0

void * __thiscall
STableRow<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<int,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<int,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23c30

void * __thiscall
STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23c90

void * __thiscall
STableRow<TSharedPtr<FWidgetListEntry,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FWidgetListEntry,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FWidgetListEntry,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23cf0

void * __thiscall
STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23d50

void * __thiscall
STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23db0

void * __thiscall
STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_scalar_deleting_destructor_
          (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *this,
          uint param_1)

{
  ~STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23e10

void * __thiscall
STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  ~STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23e70

void * __thiscall
STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  ~STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23ed0

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23f00

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23f30

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23f60

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23f90

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e23ff0

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24020

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24050

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e240b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24110

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24140

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e241a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e241d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24200

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24230

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>::~<lambda_2>
            ((void *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24270

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>::~<lambda_3>
            ((void *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e242b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24310

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24340

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24370

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e243a0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e243d0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24400

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24430

void * __thiscall
TBaseRawMethodDelegateInstance<1,FInputEventVisualizer_const_,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24460

void * __thiscall
TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24490

void * __thiscall
TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e244c0

void * __thiscall
TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e244f0

void * __thiscall
TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24520

void * __thiscall
TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24550

void * __thiscall
TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SWidgetEventLog_const_,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24580

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e245b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e245e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24610

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24640

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24670

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e246a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e246d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24700

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24730

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24760

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24790

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e247c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FInputEventVisualizer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FInputEventVisualizer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e247f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FInputEventVisualizer,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FInputEventVisualizer,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24820

void * __thiscall
TBaseRawMethodDelegateInstance<0,FInputEventVisualizer,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FInputEventVisualizer,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24850

void * __thiscall
TBaseRawMethodDelegateInstance<0,FInputEventVisualizer,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FInputEventVisualizer,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24880

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVisualTreeCapture,void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FVisualTreeCapture,void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e248b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVisualTreeCapture,void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FVisualTreeCapture,void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e248e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVisualTreeCapture,void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FVisualTreeCapture,void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24910

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVisualTreeCapture,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FVisualTreeCapture,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24940

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVisualTreeCapture,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FVisualTreeCapture,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24970

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,SWidgetHittestGrid,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,SWidgetHittestGrid,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e249a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,SWidgetHittestGrid,void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,SWidgetHittestGrid,void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e249d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e24a00

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24a60

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
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

// `scalar_deleting_destructor' @ 142e24ac0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<int,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<int,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24b20

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<int,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<int,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24b80

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24be0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24c40

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FWidgetListEntry,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FWidgetListEntry,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24ca0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FWidgetListEntry,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FWidgetListEntry,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24d00

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24d60

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24dc0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24e20

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24e80

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24ee0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24f40

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e24fa0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25000

void * __thiscall
TBaseSPMethodDelegateInstance<1,SAtlasVisualizer_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SAtlasVisualizer_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25060

void * __thiscall
TBaseSPMethodDelegateInstance<1,SAtlasVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SAtlasVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e250c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SAtlasVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SAtlasVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25120

void * __thiscall
TBaseSPMethodDelegateInstance<1,SAtlasVisualizer_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e25180

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNavigationSimulationListInternal::SDetailView_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,enum_EUINavigation>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e251e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNavigationSimulationListInternal::SDetailView_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,enum_EUINavigation>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e25240

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
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

// `scalar_deleting_destructor' @ 142e252a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
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

// `scalar_deleting_destructor' @ 142e25300

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNavigationSimulationListBase_const_,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNavigationSimulationListBase_const_,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25360

void * __thiscall
TBaseSPMethodDelegateInstance<1,SReflectorToolTipWidget_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SReflectorToolTipWidget_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e253c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SReflectorTreeWidgetItem_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SReflectorTreeWidgetItem_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25420

void * __thiscall
TBaseSPMethodDelegateInstance<1,SScrollableSnapshotImage_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SScrollableSnapshotImage_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25480

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSlateOptions_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSlateOptions_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e254e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetEventLog_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e25540

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetEventLog_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,enum_SWidgetEventLog::EWidgetEventType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e255a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetEventLog_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,enum_SWidgetEventLog::EWidgetEventType,unsigned_char>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e25600

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetEventLog_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWidget_const_,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetEventLog_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWidget_const_,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e25680

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetHittestGrid_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetHittestGrid_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e256e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetHittestGrid_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e25740

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetHittestGrid_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWidget_const_,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetHittestGrid_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWidget_const_,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e257c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetHittestGrid_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetHittestGrid_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25820

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetHittestGrid_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWindow,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetHittestGrid_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWindow,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e258a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetHittestGrid_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,enum_FHittestGrid::EDisplayGridFlags>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e25900

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25960

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e259c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25a20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25a80

void * __thiscall
TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e25ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,WidgetReflectorImpl::SWidgetReflector_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25b40

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25ba0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25c00

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25c60

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e25cc0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25d20

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,int>
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

// `scalar_deleting_destructor' @ 142e25d80

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,int>
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

// `scalar_deleting_destructor' @ 142e25de0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<int,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<int,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25e40

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<int,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<int,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25ea0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<int,1>_>,1,void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e25f00

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<int,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<int,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25f60

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e25fc0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26020

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1,void___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26080

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e260e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26140

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e261a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1,void___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26200

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26260

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e262c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26320

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26380

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e263e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAtlasVisualizer,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SAtlasVisualizer,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26440

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAtlasVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SAtlasVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e264a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAtlasVisualizer,1,void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26500

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAtlasVisualizer,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26560

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAtlasVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SAtlasVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e265c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNavigationSimulationListInternal::SDetailView,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,enum_EUINavigation>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26620

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNavigationSimulationListInternal::SDetailView,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned___int64,TWeakPtr<SWidget_const_,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNavigationSimulationListInternal::SDetailView,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned___int64,TWeakPtr<SWidget_const_,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e266a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNavigationSimulationListBase,1,void___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26700

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNavigationSimulationListBase,1,void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNavigationSimulationListBase,1,void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26760

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNavigationSimulationListBase,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNavigationSimulationListBase,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e267c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SReflectorTreeWidgetItem,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SReflectorTreeWidgetItem,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26820

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSlateOptions,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSlateOptions,1,void___cdecl(float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26880

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetEventLog,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetEventLog,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e268e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetEventLog,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,enum_SWidgetEventLog::EWidgetEventType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26940

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetEventLog,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e269a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetEventLog,1,void___cdecl(void),FDefaultDelegateUserPolicy,enum_SWidgetEventLog::EWidgetEventType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26a00

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetEventLog,1,void___cdecl(void),FDefaultDelegateUserPolicy,enum_SWidgetEventLog::EWidgetEventType,unsigned_char>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26a60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26b20

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,void___cdecl(TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26b80

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26be0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26c40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWindow,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWindow,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26cc0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetHittestGrid,1,void___cdecl(void),FDefaultDelegateUserPolicy,enum_FHittestGrid::EDisplayGridFlags>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e26d20

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26d80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26de0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26e40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,TSharedRef<SWidget,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,TSharedRef<SWidget,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26f00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26f60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e26fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e27020

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e27080

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(FWidgetPath_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(FWidgetPath_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e270e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e27140

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e271a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27200

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e27260

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e272c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e27320

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_>
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
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e273a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,WidgetReflectorImpl::SWidgetReflector,1,void___cdecl(void),FDefaultDelegateUserPolicy,enum_WidgetReflectorImpl::EWidgetPickingMode>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27400

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetSnapshotVisualizer,1,void___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27460

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetSnapshotVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetSnapshotVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142e274c0

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e274f0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27520

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27550

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27580

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e275b0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e275e0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27610

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27640

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27670

void * __thiscall
TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e276a0

void * __thiscall
TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e276d0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27700

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27730

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27760

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27790

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e277c0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e277f0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27820

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27850

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27880

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e278b0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e278e0

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27910

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27940

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27970

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e279a0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e279d0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27a00

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27a30

void * __thiscall
TCommonDelegateInstanceState<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,enum_EUINavigation>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27a60

void * __thiscall
TCommonDelegateInstanceState<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,enum_SWidgetEventLog::EWidgetEventType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27a90

void * __thiscall
TCommonDelegateInstanceState<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,enum_SWidgetEventLog::EWidgetEventType,unsigned_char>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27ac0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,enum_SWidgetEventLog::EWidgetEventType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27af0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27b20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27b50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27b80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27bb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27be0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27c10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27c40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27c70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27ca0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27cd0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27d00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27d30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27d60

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27d90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27dc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27df0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27e20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27e50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27e80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27eb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27ee0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27f10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27f40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27f70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,enum_EUINavigation>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27fa0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e27fd0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            (*(TSharedRef<FWidgetReflectorNodeBase,1> **)&this->Payload,
             *(int *)&(this->Payload).field_0x8);
  if (*(void **)&this->Payload != (void *)0x0) {
    FMemory::Free(*(void **)&this->Payload);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28020

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWidget_const_,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWidget_const_,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&(this->Payload).field_0x8;
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

// `scalar_deleting_destructor' @ 142e28080

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWindow,1>_>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWindow,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&(this->Payload).field_0x8;
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

// `scalar_deleting_destructor' @ 142e280e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_FHittestGrid::EDisplayGridFlags>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28110

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_SWidgetEventLog::EWidgetEventType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28140

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_SWidgetEventLog::EWidgetEventType,unsigned_char>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28170

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_WidgetReflectorImpl::EWidgetPickingMode>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e281a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,unsigned___int64,TWeakPtr<SWidget_const_,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,unsigned___int64,TWeakPtr<SWidget_const_,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&(this->Payload).field_0x10;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28200

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28230

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWindow,1>_>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<SWindow,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&(this->Payload).field_0x8;
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

// `scalar_deleting_destructor' @ 142e28290

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,enum_FHittestGrid::EDisplayGridFlags>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e282c0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,enum_EUINavigation>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e282f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<bool_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedRef_VFWidgetReflectorNodeBase___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedRef_VFWidgetReflectorNodeBase___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e283b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e283f0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<WidgetHittestGridInternal::FIntermediateResultNode,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<WidgetHittestGridInternal::FIntermediateResultNode,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28430

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNavigationSimulationWidgetNode,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNavigationSimulationWidgetNode,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x910);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28470

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetListEntry,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FWidgetListEntry,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e284b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e284f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboBox<TSharedPtr<int,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboBox<TSharedPtr<int,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28530

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28570

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e285b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboRow<TSharedPtr<int,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboRow<TSharedPtr<int,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e285f0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28630

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28670

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedPtr<int,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<int,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e286b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e286f0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28730

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28770

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e287b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<float>,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SSpinBox<float>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x710);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e287f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<int,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<int,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28830

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28870

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e288b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e288f0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28930

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28970

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e289b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<int,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<int,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e289f0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28a30

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28a70

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28ab0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28af0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28b30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMessageEndpoint,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FMessageEndpoint,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28b70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FVisualTreeSnapshot,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FVisualTreeSnapshot,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28bb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAtlasVisualizerPanel,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAtlasVisualizerPanel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28bf0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SNavigationSimulationListInternal::SDetailView,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNavigationSimulationListInternal::SDetailView,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28c30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGridPanel,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SGridPanel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28c70

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<WidgetHittestGridInternal::SIntermediateResultNode,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<WidgetHittestGridInternal::SIntermediateResultNode,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x478);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28cb0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SNavigationSimulationListInternal::SListElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNavigationSimulationListInternal::SListElement,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x478);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28cf0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28d30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNavigationSimulationSnapshotList,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNavigationSimulationSnapshotList,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28d70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SReflectorToolTipWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SReflectorToolTipWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28db0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SReflectorTreeWidgetItem,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SReflectorTreeWidgetItem,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28df0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollableSnapshotImage,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SScrollableSnapshotImage,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28e30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSlateOptions,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSlateOptions,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28e70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SUniformGridPanel,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SUniformGridPanel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28eb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SViewport,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SViewport,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28ef0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetEventLog,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SWidgetEventLog,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x368);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28f30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetHittestGrid,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SWidgetHittestGrid,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28f70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetList,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SWidgetList,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28fb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetListRow,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SWidgetListRow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e28ff0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetSnapshotVisualizer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SWidgetSnapshotVisualizer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29030

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29070

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e290b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<int,SharedPointerInternals::DefaultDeleter<int>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<int,SharedPointerInternals::DefaultDeleter<int>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e290f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<WidgetReflectorImpl::FWidgetSnapshotTarget,SharedPointerInternals::DefaultDeleter<WidgetReflectorImpl::FWidgetSnapshotTarget>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<WidgetReflectorImpl::FWidgetSnapshotTarget,SharedPointerInternals::DefaultDeleter<WidgetReflectorImpl::FWidgetSnapshotTarget>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29130

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonReader<wchar_t>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonReader<wchar_t>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29170

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e291b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e291f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29230

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FJsonValueArray,SharedPointerInternals::DefaultDeleter<FJsonValueArray>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FJsonValueArray,SharedPointerInternals::DefaultDeleter<FJsonValueArray>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29270

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLiveWidgetReflectorNode,SharedPointerInternals::DefaultDeleter<FLiveWidgetReflectorNode>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLiveWidgetReflectorNode,SharedPointerInternals::DefaultDeleter<FLiveWidgetReflectorNode>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e292b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateStyleSet,SharedPointerInternals::DefaultDeleter<FSlateStyleSet>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateStyleSet,SharedPointerInternals::DefaultDeleter<FSlateStyleSet>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e292f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSnapshotWidgetReflectorNode,SharedPointerInternals::DefaultDeleter<FSnapshotWidgetReflectorNode>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSnapshotWidgetReflectorNode,SharedPointerInternals::DefaultDeleter<FSnapshotWidgetReflectorNode>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29330

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<WidgetReflectorImpl::SWidgetReflector,SharedPointerInternals::DefaultDeleter<WidgetReflectorImpl::SWidgetReflector>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<WidgetReflectorImpl::SWidgetReflector,SharedPointerInternals::DefaultDeleter<WidgetReflectorImpl::SWidgetReflector>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29370

void * __thiscall
TTableViewMetadata<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<int,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e293e0

void * __thiscall
TTableViewMetadata<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29450

void * __thiscall
TTableViewMetadata<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e294c0

void * __thiscall
TTableViewMetadata<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29530

void * __thiscall
TTableViewMetadata<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e295a0

void * __thiscall
TTableViewMetadata<TSharedRef<FWidgetReflectorNodeBase,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29610

void * __thiscall
FInputEventVisualizer::_scalar_deleting_destructor_(FInputEventVisualizer *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7FInputEventVisualizer__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
             this);
  FSlateDebugging::UnregisterWidgetInputRoutingEvent((IWidgetInputRoutingEvent *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::PaintDebugElements,this);
  *(undefined ***)&(this->DemoModeKeyConsoleVariable).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DemoModeKeyConsoleVariable);
  *(undefined ***)&(this->DemoModeMouseConsoleVariable).field_0x0 =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DemoModeMouseConsoleVariable)
  ;
  pTVar3 = (this->WeakOwningNotification).WeakReferenceCount.ReferenceController;
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
  DestructItems<FInputEventVisualizer::FKeyEventInfo,int>
            ((FKeyEventInfo *)(this->KeyEvents).AllocatorInstance.Data,(this->KeyEvents).ArrayNum);
  pFVar4 = (this->KeyEvents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->MouseKeyColorsMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->MouseKeyColorsMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKey,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MouseKeyColorsMap);
  DestructItems<FInputEventVisualizer::FMouseEventInfo,int>
            ((FMouseEventInfo *)(this->MouseEvents).AllocatorInstance.Data,
             (this->MouseEvents).ArrayNum);
  pFVar4 = (this->MouseEvents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29730

void * __thiscall
FLiveWidgetReflectorNode::_scalar_deleting_destructor_(FLiveWidgetReflectorNode *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  this->_padding_ = (longlong)&___7FLiveWidgetReflectorNode__6B_;
  pTVar5 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e297f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMessageEndpoint::_scalar_deleting_destructor_(FMessageEndpoint *this,uint param_1)

{
  ~FMessageEndpoint(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29830

void * __thiscall
SComboBox<TSharedPtr<int,1>_>::FSlateAccessibleComboBox::_scalar_deleting_destructor_
          (FSlateAccessibleComboBox *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29870

void * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleComboBox::
_scalar_deleting_destructor_(FSlateAccessibleComboBox *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e298b0

void * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleComboBox::
_scalar_deleting_destructor_(FSlateAccessibleComboBox *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e298f0

void * __thiscall
SListView<TSharedPtr<int,1>_>::FSlateAccessibleListView::_scalar_deleting_destructor_
          (FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29930

void * __thiscall
SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29970

void * __thiscall
SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e299b0

void * __thiscall
SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e299f0

void * __thiscall
SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
FSlateAccessibleListView::_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29a30

void * __thiscall
SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29a70

void * __thiscall
STableRow<TSharedPtr<int,1>_>::FSlateAccessibleTableRow::_scalar_deleting_destructor_
          (FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29ab0

void * __thiscall
STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29af0

void * __thiscall
STableRow<TSharedPtr<FWidgetListEntry,1>_>::FSlateAccessibleTableRow::_scalar_deleting_destructor_
          (FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29b30

void * __thiscall
STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29b70

void * __thiscall
STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29bb0

void * __thiscall
STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
FSlateAccessibleTableRow::_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29bf0

void * __thiscall
STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29c30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
FSlimHorizontalToolBarBuilder::_scalar_deleting_destructor_
          (FSlimHorizontalToolBarBuilder *this,uint param_1)

{
  FToolBarBuilder::~FToolBarBuilder((FToolBarBuilder *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29c70

void * __thiscall
FSnapshotWidgetReflectorNode::_scalar_deleting_destructor_
          (FSnapshotWidgetReflectorNode *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  FScriptContainerElement *pFVar4;
  ITextData *pIVar5;
  longlong *plVar6;
  
  this->_padding_ = (longlong)&___7FSnapshotWidgetReflectorNode__6B_;
  FVar3 = (this->CachedWidgetAssetData).ChunkIDs.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedWidgetAssetData).TaggedAssetBundles.SharedReferenceCount.
             ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            (&(this->CachedWidgetAssetData).TagsAndValues);
  pFVar4 = (this->CachedWidgetFile).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pIVar5 = (this->CachedWidgetReadableLocation).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar5 = (this->CachedWidgetClippingText).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar5 = (this->CachedWidgetVisibilityText).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar5 = (this->CachedWidgetTypeAndShortName).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar5 = (this->CachedWidgetType).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29d90

void * __thiscall
FWidgetReflectorNodeBase::_scalar_deleting_destructor_(FWidgetReflectorNodeBase *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  pTVar3 = (this->ParentNode).WeakReferenceCount.ReferenceController;
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
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)(this->ChildNodes).AllocatorInstance.Data,
             (this->ChildNodes).ArrayNum);
  pFVar4 = (this->ChildNodes).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29e10

void * __thiscall IBusListener::_scalar_deleting_destructor_(IBusListener *this,uint param_1)

{
  *this = (IBusListener)&___7IBusListener__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29e50

void * __thiscall IMessageHandler::_scalar_deleting_destructor_(IMessageHandler *this,uint param_1)

{
  *this = (IMessageHandler)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29e90

void * __thiscall
INavigationEventSimulationView::_scalar_deleting_destructor_
          (INavigationEventSimulationView *this,uint param_1)

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

// `scalar_deleting_destructor' @ 142e29ef0

void * __thiscall
IWidgetReflector::_scalar_deleting_destructor_(IWidgetReflector *this,uint param_1)

{
  *this = (IWidgetReflector)&___7IWidgetReflector__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29f30

void * __thiscall
SAtlasVisualizerPanel::_scalar_deleting_destructor_(SAtlasVisualizerPanel *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ScrollyZoomy).VerticalIntertia.ScrollSamples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScrollyZoomy).HorizontalIntertia.ScrollSamples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SPanel::~SPanel((SPanel *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e29fe0

void * __thiscall
SBreadcrumbTrailBase::_scalar_deleting_destructor_(SBreadcrumbTrailBase *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CrumbBox).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a050

void * __thiscall
SNavigationSimulationListInternal::SDetailView::_scalar_deleting_destructor_
          (SDetailView *this,uint param_1)

{
  ~SDetailView(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a0b0

void * __thiscall
WidgetHittestGridInternal::SIntermediateResultNode::_scalar_deleting_destructor_
          (SIntermediateResultNode *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NodeToVisualize).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
  ~STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
            ((STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x468);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a160

void * __thiscall
SNavigationSimulationListInternal::SListElement::_scalar_deleting_destructor_
          (SListElement *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetItem).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
  ~STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
            ((STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x468);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a210

void * __thiscall
SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget::
_scalar_deleting_destructor_(SListViewPinnedRowWidget *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinnedItemRow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwnerListView).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a280

void * __thiscall
SNavigationSimulationListBase::_scalar_deleting_destructor_
          (SNavigationSimulationListBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)
             (this->ItemsSource).AllocatorInstance.Data,(this->ItemsSource).ArrayNum);
  pFVar1 = (this->ItemsSource).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ElementDetail).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ListView).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a320

void * __thiscall
SNavigationSimulationSnapshotList::_scalar_deleting_destructor_
          (SNavigationSimulationSnapshotList *this,uint param_1)

{
  ~SNavigationSimulationSnapshotList(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a380

void * __thiscall
SReflectorToolTipWidget::_scalar_deleting_destructor_(SReflectorToolTipWidget *this,uint param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->SizeInfoText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetInfo).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a400

void * __thiscall
SReflectorTreeWidgetItem::_scalar_deleting_destructor_(SReflectorTreeWidgetItem *this,uint param_1)

{
  ~SReflectorTreeWidgetItem(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x498);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a460

void * __thiscall
SScrollableSnapshotImage::_scalar_deleting_destructor_(SScrollableSnapshotImage *this,uint param_1)

{
  ~SScrollableSnapshotImage(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x378);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a4c0

void * __thiscall SSlateOptions::_scalar_deleting_destructor_(SSlateOptions *this,uint param_1)

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

// `scalar_deleting_destructor' @ 142e2a520

void * __thiscall SUserWidget::_scalar_deleting_destructor_(SUserWidget *this,uint param_1)

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

// `scalar_deleting_destructor' @ 142e2a580

void * __thiscall SWidgetEventLog::_scalar_deleting_destructor_(SWidgetEventLog *this,uint param_1)

{
  ~SWidgetEventLog(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SWidgetHittestGrid::_scalar_deleting_destructor_(SWidgetHittestGrid *this,uint param_1)

{
  ~SWidgetHittestGrid(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a640

void * __thiscall SWidgetList::_scalar_deleting_destructor_(SWidgetList *this,uint param_1)

{
  ~SWidgetList(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a6a0

void * __thiscall SWidgetListRow::_scalar_deleting_destructor_(SWidgetListRow *this,uint param_1)

{
  ~SWidgetListRow(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x498);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a700

void * __thiscall
SWidgetReflector::_scalar_deleting_destructor_(SWidgetReflector *this,uint param_1)

{
  *(undefined ***)&this->field_0x2a8 = &___7IWidgetReflector__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a770

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
WidgetReflectorImpl::SWidgetReflector::_scalar_deleting_destructor_
          (SWidgetReflector *this,uint param_1)

{
  ~SWidgetReflector(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142e2a7d0

void * __thiscall
SWidgetSnapshotVisualizer::_scalar_deleting_destructor_
          (SWidgetSnapshotVisualizer *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavigationSimulationList).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SnapshotImage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowPickerCombo).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// BuildNavigationSimulationNodeList @ 142e2eed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> * __cdecl
NavigationSimulationNodeUtilsInternal::BuildNavigationSimulationNodeList
          (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,ENavigationSimulationNodeType param_1,
          TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FNavigationSimulationWidgetNode *pFVar4;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  FArrangedWidget *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar15;
  FNavigationSimulationWidgetNodeItem *this;
  uint uVar16;
  ForElementType<FSetElementId> FVar17;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar18;
  FSimulationResult *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  FSimulationResult *this_00;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> local_100;
  SWidget *local_f0;
  FSimulationResult *local_e8;
  TReferenceControllerBase<1> *local_e0;
  TReferenceControllerBase<1> *pTStack_d8;
  TPairInitializer<SWidget_const_*_const_&,TSharedPtr<FNavigationSimulationWidgetNode,1>_&&>
  local_d0;
  SWidget **local_c0;
  TReferenceControllerBase<1> **local_b8;
  undefined8 local_b0 [3];
  TSet<TTuple<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>,TDefaultMapHashableKeyFuncs<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  pTVar8 = _UNK_150651568;
  pTVar7 = ___xmm_00000000000000000000000000000010;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  iVar2 = param_2->ArrayNum;
  this_00 = (FSimulationResult *)(param_2->AllocatorInstance).Data;
  pFVar19 = this_00 + iVar2;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_e8 = pFVar19;
  local_d0.Value = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)__return_storage_ptr__;
  do {
    pTVar20 = (TReferenceControllerBase<1> *)0x0;
    if (param_2->ArrayNum != iVar2) {
      local_108[0] = 0;
      `TCheckedPointerIterator<FSlateNavigationEventSimulator::FSimulationResult_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (this_00 == pFVar19) {
      local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.ArrayNum = 0;
      local_100.ArrayMax = 0;
      TMapBase<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
                  *)&local_98,&local_100);
      pTVar15 = local_d0.Value;
      FVar9.Data = local_100.AllocatorInstance.Data;
      local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ((ForAnyElementType *)&(local_d0.Value)->Object)->Data = FVar9.Data;
      *(int *)&(local_d0.Value)->SharedReferenceCount = local_100.ArrayNum;
      *(int *)((longlong)local_d0.Value + 0xc) = local_100.ArrayMax;
      local_100.ArrayNum = 0;
      local_100.ArrayMax = 0;
      DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
                ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0,0);
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *)
             pTVar15;
    }
    if (this_00->NavigationType != Invalid) {
      bVar10 = FWidgetPath::IsValid(&this_00->NavigationSource);
      if ((!bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                              ,0xac,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      pFVar13 = FArrangedChildren::operator[]
                          ((FArrangedChildren *)this_00,
                           (this_00->NavigationSource).Widgets.Array.ArrayNum + -1);
      pTVar14 = (pFVar13->Widget).SharedReferenceCount.ReferenceController;
      local_f0 = (pFVar13->Widget).Object;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      uVar16 = ((uint)((ulonglong)local_f0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_f0 >> 4)) *
               -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar17 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar17 = local_98.Hash.SecondaryData;
        }
        for (iVar11 = *(int *)((longlong)FVar17 +
                              (ulonglong)(local_98.HashSize - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
            iVar11 != -1;
            iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + local_98.Elements._0_8_)) {
          if (*(SWidget **)((longlong)iVar11 * 0x20 + local_98.Elements._0_8_) == local_f0)
          goto LAB_142e2f186;
        }
      }
      pTVar14 = ::operator_new(0x910);
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
        local_e0 = pTVar7;
        pTStack_d8 = pTVar8;
      }
      else {
        pTVar14->SharedReferenceCount = (atomic<int>)0x1;
        pTVar14->WeakReferenceCount = (atomic<int>)0x1;
        pTVar14->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFNavigationSimulationWidgetNode___00_SharedPointerInternals__6B_
        ;
        FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo
                  ((FNavigationSimulationWidgetInfo *)(pTVar14 + 1),&this_00->NavigationSource);
        pTVar14[0x8f].SharedReferenceCount = (atomic<int>)0x0;
        pTVar14[0x8f].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined4 *)&pTVar14[0x90]._padding_ = 0;
        *(undefined4 *)((longlong)&pTVar14[0x90]._padding_ + 4) = 4;
        *(ENavigationSimulationNodeType *)&pTVar14[0x90].SharedReferenceCount = param_1;
        if ((param_1 == Snapshot) && (&pTVar14[1].SharedReferenceCount != (atomic<int> *)local_b0))
        {
          plVar3 = (longlong *)pTVar14[2]._padding_;
          pTVar14[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar14[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar14[2]._padding_ = 0;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if ((pTVar14 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar12;
        }
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        pTVar20 = pTVar14;
        local_e0 = pTVar14 + 1;
        pTStack_d8 = pTVar14;
      }
      local_c0 = &local_f0;
      local_b8 = &local_e0;
      TSet<TTuple<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>,TDefaultMapHashableKeyFuncs<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<SWidget_const_*_const_&,TSharedPtr<FNavigationSimulationWidgetNode,1>_&&>_>
                (&local_98,&local_d0,(bool *)&local_c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
LAB_142e2f186:
      pTVar15 = TMapBase<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
                ::FindChecked((TMapBase<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
                               *)&local_98,local_f0);
      if ((pTVar15->Object == (FNavigationSimulationWidgetNode *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      pFVar4 = pTVar15->Object;
      iVar11 = (pFVar4->Simulations).ArrayNum;
      piVar1 = &(pFVar4->Simulations).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationSimulationWidgetNodeItem>_>
                           (0x220,8,&(pFVar4->Simulations).AllocatorInstance,piVar1);
      }
      (pFVar4->Simulations).ArrayNum = iVar11 + 1;
      FVar5 = (pFVar4->Simulations).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FNavigationSimulationWidgetNodeItem>)&pFVar4->Simulations;
      if (FVar5 != (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
        FVar18 = FVar5;
      }
      this = FNavigationSimulationWidgetNodeItem::FNavigationSimulationWidgetNodeItem
                       ((FNavigationSimulationWidgetNodeItem *)
                        ((longlong)FVar18 + (longlong)iVar11 * 0x220),this_00);
      pFVar19 = local_e8;
      if (param_1 == Snapshot) {
        FNavigationSimulationWidgetNodeItem::ResetLiveWidget(this);
        pFVar19 = local_e8;
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// ConvertToWidgetPickingMode @ 142e552e0

EWidgetPickingMode __cdecl WidgetReflectorImpl::ConvertToWidgetPickingMode(int param_1)

{
  EWidgetPickingMode EVar1;
  
  EVar1 = None;
  if ((uint)param_1 < 4) {
    EVar1 = (EWidgetPickingMode)param_1;
  }
  return EVar1;
}

// DumpFontAtlasesCommand @ 142e72aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
WidgetReflectorImpl::DumpFontAtlasesCommand(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  longlong *plVar2;
  code *pcVar3;
  FSlateFontCache *pFVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  FString *pFVar10;
  FDateTime this;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar11;
  FName *pFVar12;
  FModuleManager *this_00;
  FSlateApplication *pFVar13;
  longlong *plVar14;
  IFileManager *pIVar15;
  wchar_t *pwVar16;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *pTVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 local_res10 [8];
  IModuleInterface *local_res18;
  longlong local_res20;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a8;
  void *local_198;
  undefined8 local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined1 local_12b;
  void *local_128;
  FString local_120;
  TSharedRef<FSlateFontCache,1> local_110;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_100;
  FName local_e0;
  FString local_d8;
  FStringFormatArg local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FString local_48;
  
  pFVar10 = FPaths::ProjectSavedDir();
  uVar26 = 0;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = (pFVar10->Data).ArrayNum;
  pFVar19 = (pFVar10->Data).AllocatorInstance.Data;
  uVar25 = (0x11 - (uint)((pFVar10->Data).ArrayNum != 0)) + iVar7;
  local_1c8.ArrayNum = iVar7;
  if ((int)uVar25 < iVar7) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar25,0,&local_1c8.AllocatorInstance,iVar7,&local_1c8.ArrayMax);
  if (iVar7 != 0) {
    memcpy(local_1c8.AllocatorInstance.Data,pFVar19,(longlong)iVar7 * 2);
  }
  ::FString::PathAppend((FString *)&local_1c8,L"WidgetReflector",0xf);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_1e8,&local_1c8,0xd - (uint)(local_1c8.ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_1e8,L"FontAtlases",0xb);
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  iVar7 = param_1->ArrayNum;
  pFVar19 = (param_1->AllocatorInstance).Data;
  pFVar24 = pFVar19 + (longlong)iVar7 * 0x10;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    FVar18.Data = local_1e8.AllocatorInstance.Data;
    if (pFVar19 == pFVar24) break;
    if (*(int *)(pFVar19 + 8) == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = *(wchar_t **)pFVar19;
    }
    bVar5 = FParse::Value(pwVar16,L"SaveDirectory",(FString *)&local_1e8,true,(wchar_t **)0x0);
    if (!bVar5) {
      if (*(int *)(pFVar19 + 8) == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = *(wchar_t **)pFVar19;
      }
      FParse::Value(pwVar16,L"SaveFilePrefix",&local_188,true,(wchar_t **)0x0);
    }
    pFVar19 = pFVar19 + 0x10;
  }
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = local_1e8.ArrayNum;
  if (local_1e8.ArrayNum == 0) {
    local_178.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1e8.ArrayNum,0,(ForAnyElementType *)&local_178,local_1e8.ArrayNum,
               &local_178.Data.ArrayMax);
    memcpy(local_178.Data.AllocatorInstance.Data,FVar18.Data,(longlong)local_1e8.ArrayNum * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_c8,&local_178);
  this = FDateTime::Now();
  pFVar10 = FDateTime::ToString((FDateTime *)this.Ticks,&local_48);
  FStringFormatArg::FStringFormatArg(&local_a8,pFVar10);
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar17 = &local_1b8;
  local_1b8.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&pTVar17->AllocatorInstance,2,&local_1b8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_1b8.AllocatorInstance.Data,&local_c8,2);
  ::FString::FormatImpl(&local_168,L"{0}_{1}",&local_1b8);
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  local_1e8.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
  local_1e8.ArrayNum = local_168.Data.ArrayNum;
  local_1e8.ArrayMax = local_168.Data.ArrayMax;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
  if ((FStringFormatArg *)local_1b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
  }
  pTVar11 = &FPaths::ConvertRelativePathToFull(&local_d8,(FString *)&local_1e8)->Data;
  if (&local_1e8 != pTVar11) {
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    local_1e8.AllocatorInstance.Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar11->AllocatorInstance)->
         AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar11->AllocatorInstance)->AllocatorInstance
    ).Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = pTVar11->ArrayNum;
    local_1e8.ArrayMax = pTVar11->ArrayMax;
    pTVar11->ArrayNum = 0;
    pTVar11->ArrayMax = 0;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (3 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  pFVar12 = ::FName::FName(&local_e0,"ImageWrapper");
  FVar1 = *pFVar12;
  this_00 = FModuleManager::Get();
  local_res18 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  pFVar13 = FSlateApplication::Get();
  lVar20 = *(longlong *)&pFVar13->field_0x60;
  if ((*(longlong *)(lVar20 + 8) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FSlateFontServices::GetFontCache(*(FSlateFontServices **)(lVar20 + 8),&local_110);
  iVar7 = (**(code **)((local_110.Object)->_padding_ + 8))();
  if (0 < iVar7) {
    local_res20 = (longlong)iVar7;
    uVar27 = uVar26;
    uVar29 = uVar26;
    do {
      pFVar4 = local_110.Object;
      uVar28 = (uint)uVar29;
      uVar25 = 0;
      if ((int)uVar28 < ((local_110.Object)->AllFontTextures).ArrayNum) {
        uVar25 = ~uVar28 >> 0x1f;
      }
      if (uVar25 == 0) {
        pTVar17 = (TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar28;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)((pFVar4->AllFontTextures).AllocatorInstance.Data + uVar27);
      if (plVar2 == (longlong *)0x0) {
        if (2 < (byte)LogSlate._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
      }
      else {
        local_198 = (void *)0x0;
        local_190 = 0;
        (**(code **)(*plVar2 + 0x28))(plVar2,&local_198);
        if ((int)local_190 == 0) {
          if (4 < (byte)LogSlate._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          }
        }
        else {
          plVar14 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2);
          if (plVar14 == (longlong *)0x0) {
            if (4 < (byte)LogSlate._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            }
            if (local_198 != (void *)0x0) {
              FMemory::Free(local_198);
            }
            goto LAB_142e72fce;
          }
          uVar22 = 0xff;
          uVar21 = 3;
          iVar7 = (**(code **)(*plVar2 + 0x18))(plVar2);
          if (iVar7 == 0) {
            uVar22 = 0;
LAB_142e7305e:
            uVar21 = 0;
          }
          else if (iVar7 == 1) {
            uVar22 = 1;
            uVar21 = 2;
          }
          else if (iVar7 == 2) {
            uVar22 = 1;
            goto LAB_142e7305e;
          }
          uVar8 = (**(code **)(*plVar14 + 8))(plVar14);
          local_138 = (**(code **)*plVar14)(plVar14);
          local_130 = 1;
          local_128 = local_198;
          local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_100.ArrayNum = 0;
          local_100.ArrayMax = 0;
          pTVar17 = (TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *)
                    ((ulonglong)pTVar17 & 0xffffffff00000000);
          local_134 = uVar8;
          local_12c = uVar22;
          local_12b = uVar21;
          cVar6 = (**(code **)((longlong)*local_res18 + 0x40))
                            (local_res18,&local_100,0,&local_138,pTVar17);
          FVar18.Data = local_188.Data.AllocatorInstance.Data;
          if (cVar6 == '\0') {
            if (2 < (byte)LogSlate._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_Failed_to_conve_1509fa768,
                         (FLogCategoryBase *)&LogSlate);
            }
          }
          else {
            lVar20 = (longlong)local_188.Data.ArrayNum;
            local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_158.Data.ArrayNum = local_188.Data.ArrayNum;
            if (local_188.Data.ArrayNum == 0) {
              local_158.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_188.Data.ArrayNum,0,(ForAnyElementType *)&local_158,
                         local_188.Data.ArrayNum,&local_158.Data.ArrayMax);
              memcpy(local_158.Data.AllocatorInstance.Data,FVar18.Data,lVar20 * 2);
            }
            FStringFormatArg::FStringFormatArg(&local_88,&local_158);
            local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.Data.ArrayNum = 0;
            local_148.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_148,uVar28);
            FStringFormatArg::FStringFormatArg(&local_68,&local_148);
            local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pTVar17 = &local_1a8;
            local_1a8.ArrayNum = 2;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&pTVar17->AllocatorInstance,2,&local_1a8.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_1a8.AllocatorInstance.Data,&local_88,2);
            ::FString::FormatImpl(&local_120,L"{0}FontAtlasPage_{1}.png",&local_1a8);
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
            if ((FStringFormatArg *)local_1a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_1a8.AllocatorInstance.Data);
            }
            if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
            }
            iVar7 = local_1e8.ArrayNum;
            FVar18.Data = local_1e8.AllocatorInstance.Data;
            lVar20 = (longlong)local_1e8.ArrayNum;
            iVar23 = local_120.Data.ArrayNum + -1;
            if (local_120.Data.ArrayNum == 0) {
              iVar23 = 0;
            }
            if ((local_1e8.ArrayNum == 0) && (iVar23 != -1)) {
              iVar9 = iVar23 + 2;
LAB_142e73237:
              local_1d8.ArrayNum = local_1e8.ArrayNum;
              local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (iVar9 != 0) goto LAB_142e73242;
              local_1d8.ArrayMax = 0;
            }
            else {
              iVar9 = iVar23 + 1;
              if (local_1e8.ArrayNum == 0) goto LAB_142e73237;
LAB_142e73242:
              local_1d8.ArrayNum = local_1e8.ArrayNum;
              local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              uVar25 = local_1e8.ArrayNum + iVar9;
              if ((int)uVar25 < local_1e8.ArrayNum) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
              }
              pTVar17 = &local_1d8;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar25,0,&pTVar17->AllocatorInstance,local_1e8.ArrayNum,
                         &local_1d8.ArrayMax);
              if (iVar7 != 0) {
                memcpy(local_1d8.AllocatorInstance.Data,FVar18.Data,lVar20 * 2);
              }
            }
            ::FString::PathAppend
                      ((FString *)&local_1d8,(wchar_t *)local_120.Data.AllocatorInstance.Data,iVar23
                      );
            if (3 < (byte)LogSlate._0_1_) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            }
            pIVar15 = IFileManager::Get();
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_1d8.ArrayNum != 0) {
              FVar18.Data = local_1d8.AllocatorInstance.Data;
            }
            bVar5 = FFileHelper::SaveArrayToFile(&local_100,(wchar_t *)FVar18.Data,pIVar15,0);
            if ((!bVar5) && (2 < (byte)LogSlate._0_1_)) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            }
            if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.AllocatorInstance.Data);
            }
            if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Data.AllocatorInstance.Data);
            }
          }
          if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.AllocatorInstance.Data);
          }
        }
        if (local_198 != (void *)0x0) {
          FMemory::Free(local_198);
        }
      }
LAB_142e72fce:
      uVar29 = (ulonglong)(uVar28 + 1);
      uVar26 = uVar26 + 1;
      uVar27 = uVar27 + 0x10;
    } while ((longlong)uVar26 < local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.SharedReferenceCount.ReferenceController);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeSlateReflector_init @ 142e73920

void __cdecl EmptyLinkFunctionForGeneratedCodeSlateReflector_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetSnapshotMessages @ 142e73930

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetSnapshotMessages(void)

{
  return;
}

// FindLiveWidget @ 142e84830

void __cdecl
WidgetReflectorNodeUtilsImpl::FindLiveWidget
          (TSharedPtr<SWidget_const_,1> *param_1,TSharedRef<FWidgetReflectorNodeBase,1> *param_2,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  SWidget *pSVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWidgetReflectorNodeBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar10;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar11;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  plVar8 = (longlong *)(**(code **)(param_2->Object->_padding_ + 0x10))(param_2->Object,local_38);
  pSVar1 = param_1->Object;
  pSVar2 = (SWidget *)*plVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  if (pSVar2 == pSVar1) {
    pTVar10 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_3->AllocatorInstance).Data;
    if (((pTVar10 <= param_2) && (param_2 < pTVar10 + param_3->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = param_3->ArrayNum;
    if (iVar7 == param_3->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar7 + 1;
    pFVar9 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(FWidgetReflectorNodeBase **)pFVar9 = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      return;
    }
  }
  else {
    pFVar4 = param_2->Object;
    iVar7 = (pFVar4->ChildNodes).ArrayNum;
    pTVar10 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pFVar4->ChildNodes).AllocatorInstance.Data;
    pTVar11 = pTVar10 + iVar7;
    while( true ) {
      if ((pFVar4->ChildNodes).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pTVar10 == pTVar11) {
        return;
      }
      FindLiveWidget(param_1,pTVar10,param_3);
      if (0 < param_3->ArrayNum) break;
      pTVar10 = pTVar10 + 1;
    }
    pTVar10 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_3->AllocatorInstance).Data;
    if (((pTVar10 <= param_2) && (param_2 < pTVar10 + param_3->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = param_3->ArrayNum;
    if (iVar7 == param_3->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar7 + 1;
    pFVar9 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(FWidgetReflectorNodeBase **)pFVar9 = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return;
}

// FindLiveWidgetPath @ 142e84af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
WidgetReflectorNodeUtilsImpl::FindLiveWidgetPath
          (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1,
          FWidgetPath *param_2,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_3,
          int param_4)

{
  ForElementType<FArrangedWidget> FVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ForElementType<FArrangedWidget> FVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  
  uVar17 = (ulonglong)param_4;
  if (param_4 < (param_2->Widgets).Array.ArrayNum) {
    lVar12 = uVar17 * 0x48;
    do {
      uVar16 = (uint)uVar17;
      uVar11 = 0;
      if ((int)uVar16 < (param_2->Widgets).Array.ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar1 = (param_2->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FArrangedWidget>)&(param_2->Widgets).Array;
      if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
        FVar9 = FVar1;
      }
      lVar2 = *(longlong *)(lVar12 + 0x38 + (longlong)FVar9);
      pTVar3 = *(TReferenceControllerBase<1> **)(lVar12 + 0x40 + (longlong)FVar9);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      iVar6 = param_1->ArrayNum;
      uVar11 = 0;
      if (0 < iVar6) {
        lVar15 = 0;
        do {
          uVar13 = ~uVar11 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar11 < iVar6) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar7 = (**(code **)(**(longlong **)((param_1->AllocatorInstance).Data + lVar15) + 0xe0))
                            ();
          if (lVar7 == lVar2) {
            uVar8 = 0;
            if ((int)uVar11 < param_1->ArrayNum) {
              uVar8 = uVar13;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar10 = (param_3->AllocatorInstance).Data;
            pFVar14 = (param_1->AllocatorInstance).Data + lVar15;
            if (((pFVar10 <= pFVar14) && (pFVar14 < pFVar10 + (longlong)param_3->ArrayMax * 0x10))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = param_3->ArrayNum;
            if (iVar6 == param_3->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar6 + 1;
            pFVar10 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
            *(undefined8 *)pFVar10 = *(undefined8 *)pFVar14;
            lVar7 = *(longlong *)(pFVar14 + 8);
            *(longlong *)(pFVar10 + 8) = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            uVar8 = 0;
            if ((int)uVar11 < param_1->ArrayNum) {
              uVar8 = uVar13;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FindLiveWidgetPath((TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>
                                *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar15) + 0x48)
                               ,param_2,param_3,uVar16 + 1);
          }
          iVar6 = param_1->ArrayNum;
          uVar11 = uVar11 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((int)uVar11 < iVar6);
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      lVar12 = lVar12 + 0x48;
    } while ((int)(uVar16 + 1) < (param_2->Widgets).Array.ArrayNum);
  }
  return;
}

// FindNodeWithReflectionData @ 142e84e00

bool __cdecl
WidgetReflectorImpl::WidgetReflectorRecursive::FindNodeWithReflectionData
          (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    cVar4 = (**(code **)(**(longlong **)pFVar9 + 0xc0))();
    if (cVar4 != '\0') {
      return true;
    }
    pFVar9 = pFVar9 + 0x10;
  }
  iVar1 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar10) break;
    bVar5 = FindNodeWithReflectionData
                      ((TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *
                       )(*(longlong *)pFVar9 + 0x48),param_2);
    if (bVar5) {
      pFVar8 = (param_2->AllocatorInstance).Data;
      if (((pFVar8 <= pFVar9) && (pFVar9 < pFVar8 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar7 + 1;
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(longlong *)pFVar8 = *(longlong *)pFVar9;
      lVar2 = *(longlong *)(pFVar9 + 8);
      *(longlong *)(pFVar8 + 8) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  return false;
}

// FindSnapshotWidget @ 142e85280

void __cdecl
WidgetReflectorNodeUtilsImpl::FindSnapshotWidget
          (ulong64 param_1,TSharedRef<FWidgetReflectorNodeBase,1> *param_2,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetReflectorNodeBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  FScriptContainerElement *pFVar7;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar8;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar9;
  undefined1 local_res8 [8];
  
  uVar6 = (**(code **)(param_2->Object->_padding_ + 0xe0))();
  if (uVar6 == param_1) {
    pTVar9 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_3->AllocatorInstance).Data;
    if (((pTVar9 <= param_2) && (param_2 < pTVar9 + param_3->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == param_3->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar5 + 1;
    pFVar7 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(FWidgetReflectorNodeBase **)pFVar7 = param_2->Object;
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return;
    }
  }
  else {
    pFVar2 = param_2->Object;
    iVar5 = (pFVar2->ChildNodes).ArrayNum;
    pTVar9 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pFVar2->ChildNodes).AllocatorInstance.Data;
    pTVar8 = pTVar9 + iVar5;
    while( true ) {
      if ((pFVar2->ChildNodes).ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pTVar9 == pTVar8) {
        return;
      }
      FindSnapshotWidget(param_1,pTVar9,param_3);
      if (0 < param_3->ArrayNum) break;
      pTVar9 = pTVar9 + 1;
    }
    pTVar9 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_3->AllocatorInstance).Data;
    if (((pTVar9 <= param_2) && (param_2 < pTVar9 + param_3->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == param_3->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar5 + 1;
    pFVar7 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(FWidgetReflectorNodeBase **)pFVar7 = param_2->Object;
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return;
}

// IsPointInTriangle @ 142ebd450

bool __cdecl
IsPointInTriangle(TVector2<float> *param_1,TVector2<float> *param_2,TVector2<float> *param_3,
                 TVector2<float> *param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = (param_1->field0_0x0)._s_0.X;
  fVar4 = (param_2->field0_0x0)._s_0.X;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  fVar6 = ((param_3->field0_0x0)._s_0.Y - fVar2) * (fVar5 - fVar4) -
          (fVar1 - fVar2) * ((param_3->field0_0x0)._s_0.X - fVar4);
  fVar8 = __real_3f800000;
  if ((fVar6 <= 0.0) && (fVar8 = __real_bf800000, 0.0 <= fVar6)) {
    fVar8 = 0.0;
  }
  fVar7 = ((param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) *
          (fVar5 - (param_3->field0_0x0)._s_0.X) -
          ((param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X) *
          (fVar1 - (param_3->field0_0x0)._s_0.Y);
  fVar6 = __real_3f800000;
  if ((fVar7 <= 0.0) && (fVar6 = __real_bf800000, 0.0 <= fVar7)) {
    fVar6 = 0.0;
  }
  fVar4 = (fVar5 - (param_4->field0_0x0)._s_0.X) * (fVar2 - (param_4->field0_0x0)._s_0.Y) -
          (fVar4 - (param_4->field0_0x0)._s_0.X) * (fVar1 - (param_4->field0_0x0)._s_0.Y);
  fVar5 = __real_3f800000;
  if ((fVar4 <= 0.0) && (fVar5 = __real_bf800000, 0.0 <= fVar4)) {
    fVar5 = 0.0;
  }
  if ((fVar8 == fVar6) && (fVar6 == fVar5)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// Paint @ 142ee0bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
NavigationSimulationOverlay::Paint
          (FOverlayBrushes *param_1,TSharedPtr<FNavigationSimulationWidgetNode,1> *param_2,
          TFunctionRef<TOptional<FPaintGeometry>___cdecl(FNavigationSimulationWidgetInfo_const_&)>
          *param_3,FSlateWindowElementList *param_4,int param_5)

{
  int iVar1;
  FNavigationSimulationWidgetNode *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector2<float>_u_0 TVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar17;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_388 [32];
  undefined1 local_338 [8];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_330;
  float local_320;
  float local_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  uint local_300;
  undefined1 local_2f8 [20];
  undefined8 local_2e4;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  char local_2c0;
  float local_2b8;
  float fStack_2b4;
  float local_2b0;
  float fStack_2ac;
  undefined8 local_2a8;
  float local_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  undefined8 local_290;
  float local_288;
  float fStack_284;
  float local_280;
  float fStack_27c;
  undefined8 local_278;
  float local_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float local_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  TVector2<float>_u_0 local_250;
  float local_248;
  float fStack_244;
  undefined8 local_240;
  double local_238;
  double dStack_230;
  float local_228;
  float fStack_224;
  undefined8 local_220;
  undefined4 local_218;
  float fStack_214;
  float local_210;
  TVector2<float>_u_0 local_20c;
  TTransform2<float> local_204;
  byte local_1ec;
  FOverlayBrushes *local_1e8;
  FPaintGeometry local_1e0;
  char local_1a8;
  TTransform2<float> local_1a0;
  FPaintNode local_188;
  TTransform2<float> local_138;
  TVector2<float>_u_0 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  float local_104 [2];
  float afStack_fc [2];
  TVector2<float>_u_0 local_f4;
  byte local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_1e8 = param_1;
  if ((param_2->Object == (FNavigationSimulationWidgetNode *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)param_3)(&local_1e0,*(undefined8 *)&param_3->field_0x8,param_2->Object);
  if (local_1a8 != '\0') {
    fVar22 = SQRT(local_1e0.AccumulatedRenderTransform.M.M[0][1] *
                  local_1e0.AccumulatedRenderTransform.M.M[0][1] +
                  local_1e0.AccumulatedRenderTransform.M.M[0][0] *
                  local_1e0.AccumulatedRenderTransform.M.M[0][0]);
    fVar23 = SQRT(local_1e0.AccumulatedRenderTransform.M.M[1][1] *
                  local_1e0.AccumulatedRenderTransform.M.M[1][1] +
                  local_1e0.AccumulatedRenderTransform.M.M[1][0] *
                  local_1e0.AccumulatedRenderTransform.M.M[1][0]);
    local_320 = fVar22;
    local_31c = fVar23;
    if ((param_2->Object == (FNavigationSimulationWidgetNode *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar11 = __real_3e2aaaab;
    fVar10 = __real_3f000000;
    dVar9 = __real_3fe0000000000000;
    fVar8 = __real_3f800000;
    pFVar2 = param_2->Object;
    FVar17 = (pFVar2->Simulations).AllocatorInstance.SecondaryData;
    local_300 = (pFVar2->Simulations).ArrayNum;
    uVar16 = (ulonglong)(int)local_300;
    if (FVar17 == (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
      FVar17 = (ForElementType<FNavigationSimulationWidgetNodeItem>)&pFVar2->Simulations;
    }
    FVar18 = (ForElementType<FNavigationSimulationWidgetNodeItem>)
             ((longlong)FVar17 + uVar16 * 0x220);
    while( true ) {
      if ((pFVar2->Simulations).ArrayNum != (int)uVar16) {
        local_338[0] = 0;
        `TCheckedPointerIterator<FNavigationSimulationWidgetNodeItem,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_338);
      }
      if (FVar17 == FVar18) break;
      if ((*(byte *)FVar17 == 3) || (*(byte *)FVar17 < 3)) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
      if ((*(longlong *)((longlong)FVar17 + 8) != 0) && (bVar13)) {
        if ((local_1a8 == '\0') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FPaintNode::MakePaintNode
                  (&local_188,(FNavigationSimulationWidgetNodeItem *)FVar17,&local_1e0,local_1e8);
        if ((local_1a8 == '\0') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FSlateDrawElement::MakeLines
                  (param_4,param_5,&local_1e0,&local_188.SourcePoints,None,&local_188.Color,false,
                   fVar8);
        (**(code **)param_3)(local_2f8,*(undefined8 *)&param_3->field_0x8,(longlong)FVar17 + 8);
        if (local_2c0 != '\0') {
          local_240 = local_2e4;
          uVar12 = local_240;
          dVar21 = (double)local_2cc;
          local_270 = SQRT(local_2d8 * local_2d8 + local_2dc * local_2dc);
          local_240._4_4_ = (float)((ulonglong)local_2e4 >> 0x20);
          dVar4 = (double)local_2c8;
          fStack_26c = SQRT(local_2d0 * local_2d0 + local_2d4 * local_2d4);
          local_240._0_4_ = (float)local_2e4;
          local_228 = (float)local_240 * local_270;
          fStack_224 = local_240._4_4_ * fStack_26c;
          local_318 = CONCAT44(fStack_224,local_228);
          dVar5 = (double)local_228;
          dVar6 = (double)fStack_224;
          local_240 = uVar12;
          if ((local_1a8 == '\0') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_330.ArrayNum = 0;
          local_330.ArrayMax = 0;
          local_238 = ((dVar21 - (double)local_1e0.AccumulatedRenderTransform.Trans.field0_0x0._s_0.
                                         X) + dVar5 * dVar9) * (double)(fVar8 / fVar22);
          dStack_230 = ((dVar4 - (double)local_1e0.AccumulatedRenderTransform.Trans.field0_0x0._s_0.
                                         Y) + dVar6 * dVar9) * (double)(fVar8 / fVar23);
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_330.AllocatorInstance,&local_330.ArrayMax);
          iVar1 = iVar14 + 1;
          *(double *)(local_330.AllocatorInstance.Data + (longlong)iVar14 * 0x10) =
               local_188.SourceCenterPoint.field0_0x0._s_0.X;
          *(double *)(local_330.AllocatorInstance.Data + (longlong)iVar14 * 0x10 + 8) =
               local_188.SourceCenterPoint.field0_0x0._s_0.Y;
          local_330.ArrayNum = iVar1;
          if (((local_330.AllocatorInstance.Data <= (FScriptContainerElement *)&local_238) &&
              ((FScriptContainerElement *)&local_238 <
               local_330.AllocatorInstance.Data + (longlong)local_330.ArrayMax * 0x10)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_330.ArrayNum == local_330.ArrayMax) {
            local_330.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_330.AllocatorInstance,&local_330.ArrayMax);
          }
          lVar15 = (longlong)local_330.ArrayNum;
          local_330.ArrayNum = local_330.ArrayNum + 1;
          *(double *)(local_330.AllocatorInstance.Data + lVar15 * 0x10) = local_238;
          *(double *)(local_330.AllocatorInstance.Data + lVar15 * 0x10 + 8) = dStack_230;
          if ((local_1a8 == '\0') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FSlateDrawElement::MakeLines
                    (param_4,param_5,&local_1e0,&local_330,None,&local_188.Color,false,fVar8);
          local_2b8 = *(float *)&(local_188.ArrowBrush)->ImageSize * fVar10;
          fStack_2b4 = *(float *)&((local_188.ArrowBrush)->ImageSize).field_0x4 * fVar10;
          local_2a8 = CONCAT44(fStack_2b4,local_2b8);
          if ((local_2c0 == '\0') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_2b0 = SQRT(local_2d8 * local_2d8 + local_2dc * local_2dc);
          fStack_2ac = SQRT(local_2d0 * local_2d0 + local_2d4 * local_2d4);
          fVar22 = (float)local_2a8 * local_2b0;
          fVar23 = local_2a8._4_4_ * fStack_2ac;
          local_310 = CONCAT44(fVar23,fVar22);
          local_298 = (float)local_188.Direction.field0_0x0._s_0.X *
                      *(float *)&(local_188.ArrowBrush)->ImageSize;
          fStack_294 = (float)local_188.Direction.field0_0x0._s_0.Y *
                       *(float *)&((local_188.ArrowBrush)->ImageSize).field_0x4;
          local_290 = CONCAT44(fStack_294,local_298);
          local_288 = local_298 * fVar11;
          fStack_284 = fStack_294 * fVar11;
          local_278 = CONCAT44(fStack_284,local_288);
          local_2a0 = fVar22;
          fStack_29c = fVar23;
          if ((local_2c0 == '\0') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_280 = SQRT(local_2d8 * local_2d8 + local_2dc * local_2dc);
          fStack_27c = SQRT(local_2d0 * local_2d0 + local_2d4 * local_2d4);
          local_268 = (float)local_278 * local_280;
          fStack_264 = local_278._4_4_ * fStack_27c;
          local_308 = CONCAT44(fStack_264,local_268);
          dVar21 = (double)local_268;
          dVar4 = (double)fStack_264;
          if ((local_2c0 == '\0') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1a0.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
          local_218 = 0x3f800000;
          fStack_214 = 0.0;
          local_210 = 0.0;
          local_1a0.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
          local_1a0.M.M[0][1] = _UNK_15076b184;
          local_1a0.M.M[1][0] = _UNK_15076b188;
          local_1a0.M.M[1][1] = _UNK_15076b18c;
          local_138.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
          local_138.M.M[0][1] = _UNK_15076b184;
          local_138.M.M[1][0] = _UNK_15076b188;
          local_138.M.M[1][1] = _UNK_15076b18c;
          fVar19 = (float)(((double)local_2cc - (double)fVar22 * dVar9) + dVar5 * dVar9 + dVar21);
          fVar20 = (float)(((double)local_2c8 - (double)fVar23 * dVar9) + dVar6 * dVar9 + dVar4);
          TVar7._s_0.Y = fVar20;
          TVar7._s_0.X = fVar19;
          local_220 = CONCAT44(fVar23,fVar22);
          local_20c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_260 = fVar22;
          fStack_25c = fVar23;
          local_258 = fVar19;
          fStack_254 = fVar20;
          local_138.Trans.field0_0x0 = TVar7;
          Concatenate<TTransform2<float>_>(&local_204,&local_138,&local_1a0);
          local_1ec = local_1ec & 0xfe;
          local_ec = local_ec & 0xfc;
          local_218 = 0x3f800000;
          local_120._s_0.Y = fVar20;
          local_120._s_0.X = fVar19;
          local_10c = local_220;
          local_118 = 0x3f800000;
          local_110 = 0;
          local_104[0] = local_204.M.M[0][0];
          local_104[1] = local_204.M.M[0][1];
          afStack_fc[0] = local_204.M.M[1][0];
          afStack_fc[1] = local_204.M.M[1][1];
          local_f4 = local_204.Trans.field0_0x0;
          local_250 = TVar7;
          local_248 = fVar19;
          fStack_244 = fVar20;
          fStack_214 = fVar19;
          local_210 = fVar20;
          local_20c = TVar7;
          FSlateDrawElement::MakeBox
                    (param_4,param_5,(FPaintGeometry *)&local_120._s_0,local_188.ArrowBrush,None,
                     &local_188.Color);
          fVar22 = local_320;
          fVar23 = local_31c;
          if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_330.AllocatorInstance.Data);
            fVar22 = local_320;
            fVar23 = local_31c;
          }
        }
        if (local_188.SourcePoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.SourcePoints.AllocatorInstance.Data);
        }
      }
      uVar16 = (ulonglong)local_300;
      FVar17 = (ForElementType<FNavigationSimulationWidgetNodeItem>)((longlong)FVar17 + 0x220);
    }
  }
  return;
}

// TakeSnapshotCommand @ 142f0dac0

void __cdecl
WidgetReflectorImpl::TakeSnapshotCommand(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  FDelegateHandle FVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool local_res8 [8];
  double local_res10;
  float local_res18 [2];
  undefined1 local_res20 [8];
  
  if (TakeSnapshotEndFrameHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
               TakeSnapshotEndFrameHandle);
  }
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  local_res18[0] = 0.001;
  local_res8[0] = false;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (*(int *)(pFVar5 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)pFVar5;
    }
    bVar2 = FParse::Value(pwVar4,L"Delay=",local_res18);
    if (!bVar2) {
      if (*(int *)(pFVar5 + 8) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)pFVar5;
      }
      FParse::Bool(pwVar4,L"Navigation=",local_res8);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  local_res10 = (double)local_res18[0] + (double)FApp::CurrentTime;
  FVar3 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddStatic<double_const_&,bool_&>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnEndFrame,(_func___cdecl_void_double_bool *)local_res20,
                     (double *)TakeSnapshotCommand_EndFrame,(bool *)&local_res10);
                    /* WARNING: Load size is inaccurate */
  TakeSnapshotEndFrameHandle.ID = *FVar3.ID;
  return;
}

// TakeSnapshotCommand_EndFrame @ 142f0dbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl WidgetReflectorImpl::TakeSnapshotCommand_EndFrame(double param_1,bool param_2)

{
  FSharedReferencer<1> FVar1;
  FSlateApplication *this;
  FString *pFVar2;
  IFileManager *pIVar3;
  FArchive *pFVar4;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar5;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  TRawPtrProxy<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_> local_res8;
  undefined1 local_a8 [8];
  FSharedReferencer<1> FStack_a0;
  FWidgetSnapshotData local_98;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_48;
  FString local_38;
  TSharedPtr<FJsonObject,1> local_28 [2];
  
  if (param_1 <= (double)FApp::CurrentTime) {
    pTVar6 = (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0;
    local_98.Windows.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Windows.ArrayNum = 0;
    local_98.Windows.ArrayMax = 0;
    local_98.NavigationSimulationData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.NavigationSimulationData.ArrayNum = 0;
    local_98.NavigationSimulationData.ArrayMax = 0;
    local_98.WindowTextureData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.WindowTextureData.ArrayNum = 0;
    local_98.WindowTextureData.ArrayMax = 0;
    local_98.WindowTextureBrushes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.WindowTextureBrushes.ArrayNum = 0;
    local_98.WindowTextureBrushes.ArrayMax = 0;
    local_98.EmptyNavigationSimulationData.SimulationData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_98.EmptyNavigationSimulationData.SimulationData.ArrayNum = 0;
    local_98.EmptyNavigationSimulationData.SimulationData.ArrayMax = 0;
    local_a8 = (undefined1  [8])0x0;
    FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    this = FSlateApplication::Get();
    FSlateApplication::GetAllVisibleWindowsOrdered
              (this,(TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *)local_a8);
    FWidgetSnapshotData::CreateSnapshot
              (&local_98,(TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *)local_a8,
               param_2);
    DestructItems<TSharedRef<SWindow,1>,int>
              ((TSharedRef<SWindow,1> *)local_a8,(int)FStack_a0.ReferenceController);
    if (local_a8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_a8);
    }
    pFVar2 = FPaths::GameAgnosticSavedDir((FString *)&local_48);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    FPaths::CreateTempFilename(&local_38,pwVar7,L"",L".widgetsnapshot");
    if (local_48.Object != (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0) {
      FMemory::Free(local_48.Object);
    }
    FWidgetSnapshotData::SaveSnapshotAsJson(&local_98,(TSharedRef<FJsonObject,1> *)local_a8);
    pIVar3 = IFileManager::Get();
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar4 = (FArchive *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,FVar8.Data,0);
    if (pFVar4 == (FArchive *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_a0.ReferenceController);
    }
    else {
      pTVar5 = ::operator_new(0x28);
      if (pTVar5 != (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0) {
        pTVar5->Stream = pFVar4;
        pTVar5->_padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
        (pTVar5->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar5->Stack).ArrayNum = 0;
        (pTVar5->Stack).ArrayMax = 0;
        pTVar5->PreviousTokenWritten = None;
        pTVar5->IndentLevel = 0;
        pTVar6 = pTVar5;
      }
      local_res8.Object = pTVar6;
      TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1>::
      TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1><TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_>
                (&local_48,&local_res8);
      FVar1.ReferenceController = FStack_a0.ReferenceController;
      local_28[0].Object = (FJsonObject *)local_a8;
      local_28[0].SharedReferenceCount.ReferenceController = FStack_a0.ReferenceController;
      if (FStack_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_a0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_a0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
      Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(local_28,&local_48,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar1.ReferenceController);
      (**(code **)(*(longlong *)pFVar4 + 0x210))(pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_a0.ReferenceController);
    }
    if (TakeSnapshotEndFrameHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
                 TakeSnapshotEndFrameHandle);
    }
    TakeSnapshotEndFrameHandle.ID = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FWidgetSnapshotData::DestroyBrushes(&local_98);
    DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
              ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)
               local_98.EmptyNavigationSimulationData.SimulationData.AllocatorInstance.Data,
               local_98.EmptyNavigationSimulationData.SimulationData.ArrayNum);
    if ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)
        local_98.EmptyNavigationSimulationData.SimulationData.AllocatorInstance.Data !=
        (TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0) {
      FMemory::Free(local_98.EmptyNavigationSimulationData.SimulationData.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>
              ((TSharedPtr<FSlateDynamicImageBrush,1> *)
               local_98.WindowTextureBrushes.AllocatorInstance.Data,
               local_98.WindowTextureBrushes.ArrayNum);
    if ((TSharedPtr<FSlateDynamicImageBrush,1> *)
        local_98.WindowTextureBrushes.AllocatorInstance.Data !=
        (TSharedPtr<FSlateDynamicImageBrush,1> *)0x0) {
      FMemory::Free(local_98.WindowTextureBrushes.AllocatorInstance.Data);
    }
    DestructItems<FWidgetSnapshotTextureData,int>
              ((FWidgetSnapshotTextureData *)local_98.WindowTextureData.AllocatorInstance.Data,
               local_98.WindowTextureData.ArrayNum);
    if ((FWidgetSnapshotTextureData *)local_98.WindowTextureData.AllocatorInstance.Data !=
        (FWidgetSnapshotTextureData *)0x0) {
      FMemory::Free(local_98.WindowTextureData.AllocatorInstance.Data);
    }
    DestructItems<FWidgetSnapshotNavigationSimulationData,int>
              ((FWidgetSnapshotNavigationSimulationData *)
               local_98.NavigationSimulationData.AllocatorInstance.Data,
               local_98.NavigationSimulationData.ArrayNum);
    if (local_98.NavigationSimulationData.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_98.NavigationSimulationData.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>
              ((TSharedPtr<FWidgetReflectorNodeBase,1> *)local_98.Windows.AllocatorInstance.Data,
               local_98.Windows.ArrayNum);
    if ((TSharedPtr<FWidgetReflectorNodeBase,1> *)local_98.Windows.AllocatorInstance.Data !=
        (TSharedPtr<FWidgetReflectorNodeBase,1> *)0x0) {
      FMemory::Free(local_98.Windows.AllocatorInstance.Data);
    }
  }
  return;
}

// Z_Construct_UScriptStruct_FWidgetSnapshotRequest @ 142f19530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetSnapshotRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetSnapshotResponse @ 142f195b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetSnapshotResponse(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.InnerSingleton;
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

// IMPLEMENT_MODULE_SlateReflector @ 142f19690

void __cdecl IMPLEMENT_MODULE_SlateReflector(void)

{
  return;
}

// FalseText'' @ 15035f820

void __cdecl `dynamic_atexit_destructor_for_'SReflectorToolTipWidget::FalseText__(void)

{
  if (SReflectorToolTipWidget::FalseText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035f82f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SReflectorToolTipWidget::FalseText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// StyleInstance'' @ 15035f840

void __cdecl `dynamic_atexit_destructor_for_'FWidgetReflectorStyle::StyleInstance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FWidgetReflectorStyle::StyleInstance.SharedReferenceCount.ReferenceController);
  return;
}

// TrueText'' @ 15035f860

void __cdecl `dynamic_atexit_destructor_for_'SReflectorToolTipWidget::TrueText__(void)

{
  if (SReflectorToolTipWidget::TrueText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035f86f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SReflectorToolTipWidget::TrueText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CCommandDumpFontAtlases'' @ 15035f880

void __cdecl WidgetReflectorImpl::_dynamic_atexit_destructor_for__CCommandDumpFontAtlases__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCommandDumpFontAtlases);
  return;
}

// `dynamic_atexit_destructor_for_'CCommandWidgetReflectorTakeSnapshot'' @ 15035f8a0

void __cdecl
WidgetReflectorImpl::_dynamic_atexit_destructor_for__CCommandWidgetReflectorTakeSnapshot__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CCommandWidgetReflectorTakeSnapshot);
  return;
}

// `dynamic_atexit_destructor_for_'CSlateNavigationSimulate'' @ 15035f8c0

void __cdecl
SlateNavigationSimulationInternal::_dynamic_atexit_destructor_for__CSlateNavigationSimulate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CSlateNavigationSimulate);
  return;
}

// `dynamic_atexit_destructor_for_'DisplayAllHitTest'' @ 15035f8e0

void __cdecl WidgetHittestGridText::_dynamic_atexit_destructor_for__DisplayAllHitTest__(void)

{
  if (DisplayAllHitTest.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035f8ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DisplayAllHitTest.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayNone'' @ 15035f900

void __cdecl WidgetHittestGridText::_dynamic_atexit_destructor_for__DisplayNone__(void)

{
  if (DisplayNone.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035f90f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DisplayNone.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EnableFocusOnPick'' @ 15035f920

void __cdecl WidgetReflectorCVars::_dynamic_atexit_destructor_for__EnableFocusOnPick__(void)

{
  EnableFocusOnPick._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&EnableFocusOnPick);
  return;
}

// `dynamic_atexit_destructor_for_'Focus'' @ 15035f940

void __cdecl WidgetReflectorImpl::WidgetReflectorText::_dynamic_atexit_destructor_for__Focus__(void)

{
  if (Focus.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035f94f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Focus.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Focusing'' @ 15035f960

void __cdecl
WidgetReflectorImpl::WidgetReflectorText::_dynamic_atexit_destructor_for__Focusing__(void)

{
  if (Focusing.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035f96f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Focusing.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'HitTestPicking'' @ 15035f980

void __cdecl
WidgetReflectorImpl::WidgetReflectorText::_dynamic_atexit_destructor_for__HitTestPicking__(void)

{
  if (HitTestPicking.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035f98f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*HitTestPicking.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035f9a0

void __cdecl
`SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 15035f9c0

void __cdecl
`SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText'::
__l2::_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 15035f9e0

void __cdecl
`SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 15035fa00

void __cdecl
`SListView<TSharedPtr<int,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 15035fa20

void __cdecl
`SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 15035fa40

void __cdecl
`SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText'::
__l2::_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 15035fa60

void __cdecl
`SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 15035fa80

void __cdecl
`SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
GetDefaultAccessibleText'::__l2::_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 15035faa0

void __cdecl
`SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Picking'' @ 15035fac0

void __cdecl
WidgetReflectorImpl::WidgetReflectorText::_dynamic_atexit_destructor_for__Picking__(void)

{
  if (Picking.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035facf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Picking.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Text_Down'' @ 15035fae0

void __cdecl
`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
_dynamic_atexit_destructor_for__Text_Down__(void)

{
  if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::Text_Down.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035faef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Down.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Text_Left'' @ 15035fb00

void __cdecl
`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
_dynamic_atexit_destructor_for__Text_Left__(void)

{
  if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::Text_Left.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035fb0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Left.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Text_Next'' @ 15035fb20

void __cdecl
`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
_dynamic_atexit_destructor_for__Text_Next__(void)

{
  if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::Text_Next.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035fb2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Next.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Text_Previous'' @ 15035fb40

void __cdecl
`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
_dynamic_atexit_destructor_for__Text_Previous__(void)

{
  if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::Text_Previous.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035fb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Previous.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Text_Right'' @ 15035fb60

void __cdecl
`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
_dynamic_atexit_destructor_for__Text_Right__(void)

{
  if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::Text_Right.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035fb6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Right.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Text_Up'' @ 15035fb80

void __cdecl
`SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn'::__l2::
_dynamic_atexit_destructor_for__Text_Up__(void)

{
  if (`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
      ::__l2::Text_Up.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035fb8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_virtual_class_TSharedRef<SWidget,1>___cdecl_SNavigationSimulationListInternal::SListElement::GenerateWidgetForColumn(FName_const&___ptr64)___ptr64'
                  ::__l2::Text_Up.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'VisualPicking'' @ 15035fba0

void __cdecl
WidgetReflectorImpl::WidgetReflectorText::_dynamic_atexit_destructor_for__VisualPicking__(void)

{
  if (VisualPicking.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035fbaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*VisualPicking.TextData.Reference + 0x10))();
    return;
  }
  return;
}

