// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 382

// CommandsChanged'' @ 140f42f40

void __cdecl `dynamic_initializer_for_'FBindingContext::CommandsChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBindingContext::CommandsChanged__);
  return;
}

// DefaultTabWindowSizeMap'' @ 140f42f60

void __cdecl `dynamic_initializer_for_'FTabManager::DefaultTabWindowSizeMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FTabManager::DefaultTabWindowSizeMap__);
  return;
}

// NullLayout'' @ 140f42f80

void __cdecl `dynamic_initializer_for_'FTabManager::FLayout::NullLayout__(void)

{
  FName FVar1;
  FName *pFVar2;
  FLayout *pFVar3;
  TSharedRef<FTabManager::FArea,1> *pTVar4;
  TRawPtrProxy<FTabManager::FLayout> local_res8;
  FName local_res10 [3];
  TSharedRef<FTabManager::FLayout,1> local_28;
  TSharedRef<FTabManager::FArea,1> local_18;
  
  pFVar2 = ::FName::FName(local_res10,"NullLayout");
  FVar1 = *pFVar2;
  pFVar3 = ::operator_new(0x38);
  local_res8.Object = (FLayout *)0x0;
  if (pFVar3 != (FLayout *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    (pFVar3->PrimaryArea).Object = (FArea *)0x0;
    (pFVar3->PrimaryArea).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar3->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Areas).ArrayNum = 0;
    (pFVar3->Areas).ArrayMax = 0;
    pFVar3->LayoutName = FVar1;
    local_res8.Object = pFVar3;
  }
  TSharedRef<FTabManager::FLayout,1>::TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout>
            (&local_28,&local_res8);
  pTVar4 = FTabManager::NewPrimaryArea(&local_18);
  FTabManager::FLayout::AddArea(local_28.Object,&FTabManager::FLayout::NullLayout,pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  atexit(`dynamic_atexit_destructor_for_'FTabManager::FLayout::NullLayout__);
  return;
}

// `dynamic_initializer_for_'CVarAllowTooltipsWhileMouseDown'' @ 140f43030

void __cdecl _dynamic_initializer_for__CVarAllowTooltipsWhileMouseDown__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowTooltipsWhileMouseDown,L"Slate.AllowTooltipsWhileMouseDown",
             &bAllowTooltipsWhileMouseDown,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowTooltipsWhileMouseDown__);
  return;
}

// `dynamic_initializer_for_'CVarAllowTooltipsWithHiddenCursor'' @ 140f43080

void __cdecl _dynamic_initializer_for__CVarAllowTooltipsWithHiddenCursor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowTooltipsWithHiddenCursor,L"Slate.AllowTooltipsWithHiddenCursor",
             &bAllowTooltipsWithHiddenCursor,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowTooltipsWithHiddenCursor__);
  return;
}

// `dynamic_initializer_for_'CVarCursorSignificantMoveDetectionThreshold'' @ 140f430d0

void __cdecl _dynamic_initializer_for__CVarCursorSignificantMoveDetectionThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCursorSignificantMoveDetectionThreshold,
             L"Slate.CursorSignificantMoveDetectionThreshold",
             &CursorSignificantMoveDetectionThreshold,
             L"The distance from previous cursor position above which the move will be considered significant (used to trigger the display of the tooltips)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCursorSignificantMoveDetectionThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarEnableCursorQueries'' @ 140f43120

void __cdecl _dynamic_initializer_for__CVarEnableCursorQueries__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableCursorQueries,L"Slate.EnableCursorQueries",&bEnableCursorQueries,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableCursorQueries__);
  return;
}

// `dynamic_initializer_for_'CVarEnableSyntheticCursorMoves'' @ 140f43170

void __cdecl _dynamic_initializer_for__CVarEnableSyntheticCursorMoves__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableSyntheticCursorMoves,L"Slate.EnableSyntheticCursorMoves",
             &bEnableSyntheticCursorMoves,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableSyntheticCursorMoves__);
  return;
}

// `dynamic_initializer_for_'CVarNoAnimationOnTabForegroundedEvent'' @ 140f431c0

void __cdecl
UE::Slate::Private::_dynamic_initializer_for__CVarNoAnimationOnTabForegroundedEvent__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarNoAnimationOnTabForegroundedEvent,L"Slate.NoAnimationOnTabForegroundedEvent",
             local_res8,
             L"Tell the docking system to broadcast the event in a way that doesn\'t account for the animations"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNoAnimationOnTabForegroundedEvent__);
  return;
}

// `dynamic_initializer_for_'CVarPanelDrawerToggle'' @ 140f43210

void __cdecl _dynamic_initializer_for__CVarPanelDrawerToggle__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarPanelDrawerToggle,L"EnablePanelDrawer",local_res8,
             L"Enables or disables the panel drawer. When the drawer is off invocations will just create a normal tab."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPanelDrawerToggle__);
  return;
}

// `dynamic_initializer_for_'CVarSoftwareCursorScale'' @ 140f43260

void __cdecl _dynamic_initializer_for__CVarSoftwareCursorScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoftwareCursorScale,L"Slate.SoftwareCursorScale",&SoftwareCursorScale,
             L"Scale factor applied to the software cursor. Requires the cursor widget to be scale-aware."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSoftwareCursorScale__);
  return;
}

// `dynamic_initializer_for_'CVarTooltipIntroDuration'' @ 140f432b0

void __cdecl _dynamic_initializer_for__CVarTooltipIntroDuration__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTooltipIntroDuration,L"Slate.TooltipIntroDuration",&TooltipIntroDuration,
             L"How long it takes for a tooltip to animate into view, in seconds.",0);
  atexit(_dynamic_atexit_destructor_for__CVarTooltipIntroDuration__);
  return;
}

// `dynamic_initializer_for_'CVarTooltipSummonDelay'' @ 140f43300

void __cdecl _dynamic_initializer_for__CVarTooltipSummonDelay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTooltipSummonDelay,L"Slate.TooltipSummonDelay",&TooltipSummonDelay,
             L"Delay in seconds before a tooltip is displayed near the mouse cursor when hovering over widgets that supply tooltip data."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTooltipSummonDelay__);
  return;
}

// `dynamic_initializer_for_'LogLayoutService'' @ 140f43350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLayoutService__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLayoutService,L"LogLayoutService",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLayoutService__);
  return;
}

// `dynamic_initializer_for_'LogTabManager'' @ 140f43390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTabManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTabManager,L"LogTabManager",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogTabManager__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateQueryCursor'' @ 140f433d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateQueryCursor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateQueryCursor == (FThreadSafeStaticStat<FStat_STAT_SlateQueryCursor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateQueryCursor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateQueryCursor,*pFVar1,L"QueryCursor",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateUpdateTooltip'' @ 140f43460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateUpdateTooltip__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateUpdateTooltip == (FThreadSafeStaticStat<FStat_STAT_SlateUpdateTooltip>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_SlateUpdateTooltip");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateUpdateTooltip,*pFVar1,
               L"Update Tooltip Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UE_TABMANAGER_CLOSED_TAB_STRING'' @ 140f434f0

void __cdecl _dynamic_initializer_for__UE_TABMANAGER_CLOSED_TAB_STRING__(void)

{
  FString::FString(&UE_TABMANAGER_CLOSED_TAB_STRING,L"ClosedTab");
  atexit(_dynamic_atexit_destructor_for__UE_TABMANAGER_CLOSED_TAB_STRING__);
  return;
}

// `dynamic_initializer_for_'UE_TABMANAGER_INVALID_TAB_STRING'' @ 140f43520

void __cdecl _dynamic_initializer_for__UE_TABMANAGER_INVALID_TAB_STRING__(void)

{
  FString::FString(&UE_TABMANAGER_INVALID_TAB_STRING,L"InvalidTab");
  atexit(_dynamic_atexit_destructor_for__UE_TABMANAGER_INVALID_TAB_STRING__);
  return;
}

// `dynamic_initializer_for_'UE_TABMANAGER_OPENED_TAB_STRING'' @ 140f43550

void __cdecl _dynamic_initializer_for__UE_TABMANAGER_OPENED_TAB_STRING__(void)

{
  FString::FString(&UE_TABMANAGER_OPENED_TAB_STRING,L"OpenedTab");
  atexit(_dynamic_atexit_destructor_for__UE_TABMANAGER_OPENED_TAB_STRING__);
  return;
}

// `dynamic_initializer_for_'UE_TABMANAGER_SIDEBAR_TAB_STRING'' @ 140f43580

void __cdecl _dynamic_initializer_for__UE_TABMANAGER_SIDEBAR_TAB_STRING__(void)

{
  FString::FString(&UE_TABMANAGER_SIDEBAR_TAB_STRING,L"SidebarTab");
  atexit(_dynamic_atexit_destructor_for__UE_TABMANAGER_SIDEBAR_TAB_STRING__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h__Script_Slate_95659924'' @ 140f435b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h__Script_Slate_95659924__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h__Script_Slate_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_UICommandInfo_h__Script_Slate_2045686272'' @ 140f435f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_UICommandInfo_h__Script_Slate_2045686272__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_UICommandInfo_h__Script_Slate_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h__Script_Slate_1419658059'' @ 140f43640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h__Script_Slate_1419658059__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h__Script_Slate_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// NewProp_bShift_SetBit @ 1426e5fe0

void __cdecl Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 1;
  return;
}

// NewProp_bCtrl_SetBit @ 1426e5ff0

void __cdecl Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 2;
  return;
}

// NewProp_bAlt_SetBit @ 1426e6000

void __cdecl Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 4;
  return;
}

// NewProp_bCmd_SetBit @ 1426e6010

void __cdecl Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 8;
  return;
}

// NewStructOps @ 1426e6020

void * __cdecl Z_Construct_UScriptStruct_FInputChord_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputChord,&UE::CoreUObject::Private::Construct<FInputChord>,&UE::CoreUObject::Private::ConstructForTests<FInputChord>,&UE::CoreUObject::Private::Destruct<FInputChord>,&UE::CoreUObject::Private::Copy<FInputChord>,&UE::CoreUObject::Private::GetStructTypeHash<FInputChord>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USlateSettings @ 1426e6110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USlateSettings(void)

{
  if (Z_Registration_Info_UClass_USlateSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USlateSettings.OuterSingleton,
               &Z_Construct_UClass_USlateSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USlateSettings.OuterSingleton;
}

// NewProp_bExplicitCanvasChildZOrder_SetBit @ 1426e6150

void __cdecl
Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// EUserInterfaceActionType_StaticEnum @ 1426e6310

UEnum * __cdecl EUserInterfaceActionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUserInterfaceActionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EUserInterfaceActionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EUserInterfaceActionType,(UObject *)pUVar1,
                       L"EUserInterfaceActionType");
  }
  return Z_Registration_Info_UEnum_EUserInterfaceActionType.OuterSingleton;
}

// EMultipleKeyBindingIndex_StaticEnum @ 1426e6350

UEnum * __cdecl EMultipleKeyBindingIndex_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex,(UObject *)pUVar1,
                       L"EMultipleKeyBindingIndex");
  }
  return Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.OuterSingleton;
}

// CleanupPointerArray<FUICommandList> @ 1426ea3f0

void __cdecl
CleanupPointerArray<FUICommandList>
          (TArray<TWeakPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  TWeakPtr<FUICommandList,1> *pTVar12;
  ulonglong uVar13;
  TArray<TWeakPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_> local_18;
  
  iVar9 = param_1->ArrayNum;
  uVar11 = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  uVar13 = uVar11;
  if (0 < iVar9) {
    do {
      uVar10 = (uint)uVar11;
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((*(longlong *)(pFVar2 + uVar13) != 0) &&
          (lVar3 = *(longlong *)(pFVar2 + uVar13 + 8), lVar3 != 0)) && (0 < *(int *)(lVar3 + 8))) {
        uVar8 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar12 = (TWeakPtr<FUICommandList,1> *)((param_1->AllocatorInstance).Data + uVar13);
        if (((local_18.AllocatorInstance.Data <= pTVar12) &&
            (pTVar12 < (TWeakPtr<FUICommandList,1> *)
                       (local_18.AllocatorInstance.Data + (longlong)local_18.ArrayMax * 0x10))) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_18.ArrayNum;
        if (local_18.ArrayNum == local_18.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_18.AllocatorInstance,&local_18.ArrayMax);
        }
        local_18.ArrayNum = iVar9 + 1;
        *(FUICommandList **)&local_18.AllocatorInstance.Data[(longlong)iVar9 * 0x10].field_0x0 =
             pTVar12->Object;
        pTVar4 = (pTVar12->WeakReferenceCount).ReferenceController;
        *(TReferenceControllerBase<1> **)
         (local_18.AllocatorInstance.Data + (longlong)iVar9 * 0x10 + 8) = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
      }
      iVar9 = param_1->ArrayNum;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar10 + 1) < iVar9);
  }
  if (param_1 != &local_18) {
    DestructItems<TWeakPtr<FUICommandList,1>,int>
              ((TWeakPtr<FUICommandList,1> *)(param_1->AllocatorInstance).Data,iVar9);
    FVar6.Data = local_18.AllocatorInstance.Data;
    iVar9 = local_18.ArrayNum;
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = local_18.ArrayNum;
    if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_18.ArrayNum,*piVar1,&param_1->AllocatorInstance,local_18.ArrayNum,
                 piVar1);
      ConstructItems<TWeakPtr<FUICommandList,1>,TWeakPtr<FUICommandList,1>,int>
                ((param_1->AllocatorInstance).Data,(TWeakPtr<FUICommandList,1> *)FVar6.Data,iVar9);
    }
  }
  DestructItems<TWeakPtr<FUICommandList,1>,int>
            ((TWeakPtr<FUICommandList,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((TWeakPtr<FUICommandList,1> *)local_18.AllocatorInstance.Data !=
      (TWeakPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// CleanupPointerArray<SDockingArea> @ 1426ea670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
CleanupPointerArray<SDockingArea>
          (TArray<TWeakPtr<SDockingArea,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  TWeakPtr<SDockingArea,1> *pTVar12;
  ulonglong uVar13;
  TArray<TWeakPtr<SDockingArea,1>,TSizedDefaultAllocator<32>_> local_18;
  
  iVar9 = param_1->ArrayNum;
  uVar11 = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  uVar13 = uVar11;
  if (0 < iVar9) {
    do {
      uVar10 = (uint)uVar11;
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((*(longlong *)(pFVar2 + uVar13) != 0) &&
          (lVar3 = *(longlong *)(pFVar2 + uVar13 + 8), lVar3 != 0)) && (0 < *(int *)(lVar3 + 8))) {
        uVar8 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar12 = (TWeakPtr<SDockingArea,1> *)((param_1->AllocatorInstance).Data + uVar13);
        if (((local_18.AllocatorInstance.Data <= pTVar12) &&
            (pTVar12 < (TWeakPtr<SDockingArea,1> *)
                       (local_18.AllocatorInstance.Data + (longlong)local_18.ArrayMax * 0x10))) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_18.ArrayNum;
        if (local_18.ArrayNum == local_18.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_18.AllocatorInstance,&local_18.ArrayMax);
        }
        local_18.ArrayNum = iVar9 + 1;
        *(SDockingArea **)&local_18.AllocatorInstance.Data[(longlong)iVar9 * 0x10].field_0x0 =
             pTVar12->Object;
        pTVar4 = (pTVar12->WeakReferenceCount).ReferenceController;
        *(TReferenceControllerBase<1> **)
         (local_18.AllocatorInstance.Data + (longlong)iVar9 * 0x10 + 8) = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
      }
      iVar9 = param_1->ArrayNum;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar10 + 1) < iVar9);
  }
  if (param_1 != &local_18) {
    DestructItems<TWeakPtr<SDockingArea,1>,int>
              ((TWeakPtr<SDockingArea,1> *)(param_1->AllocatorInstance).Data,iVar9);
    FVar6.Data = local_18.AllocatorInstance.Data;
    iVar9 = local_18.ArrayNum;
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = local_18.ArrayNum;
    if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_18.ArrayNum,*piVar1,&param_1->AllocatorInstance,local_18.ArrayNum,
                 piVar1);
      ConstructItems<TWeakPtr<SDockingArea,1>,TWeakPtr<SDockingArea,1>,int>
                ((param_1->AllocatorInstance).Data,(TWeakPtr<SDockingArea,1> *)FVar6.Data,iVar9);
    }
  }
  DestructItems<TWeakPtr<SDockingArea,1>,int>
            ((TWeakPtr<SDockingArea,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((TWeakPtr<SDockingArea,1> *)local_18.AllocatorInstance.Data != (TWeakPtr<SDockingArea,1> *)0x0
     ) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ConstructItems<FTabManager::FTab,FTabManager::FTab,int> @ 1426ea8f0

void __cdecl
ConstructItems<FTabManager::FTab,FTabManager::FTab,int>(void *param_1,FTab *param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  Type *pTVar4;
  
  if (param_3 != 0) {
    pTVar4 = &param_2->TabState;
    pcVar3 = (char *)((longlong)param_1 + 0x1e);
    do {
      uVar2 = *(undefined8 *)(pcVar3 + (longlong)param_2 + (-0x1e - (longlong)param_1) + 8);
      *(undefined8 *)(pcVar3 + -0x1e) =
           *(undefined8 *)(pcVar3 + (longlong)param_2 + (-0x1e - (longlong)param_1));
      *(undefined8 *)(pcVar3 + -0x16) = uVar2;
      *(Type *)(pcVar3 + -0xe) = *pTVar4;
      pcVar3[-10] = *(ESidebarLocation *)(pTVar4 + 1);
      *(Type *)(pcVar3 + -6) = pTVar4[2];
      bVar1 = *(bool *)(pTVar4 + 3);
      *pcVar3 = '\0';
      pcVar3[-2] = bVar1;
      bVar1 = *(bool *)((longlong)pTVar4 + 0xe);
      *pcVar3 = bVar1;
      if (bVar1 != false) {
        pcVar3[-1] = ((TOptional<bool> *)((longlong)pTVar4 + 0xd))->TypedValue;
      }
      pTVar4 = pTVar4 + 8;
      pcVar3 = pcVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int> @ 1426ea960

void __cdecl
ConstructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
          (void *param_1,
          TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
          *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(int *)(lVar1 + 0x3c) = 0;
      if ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
           *)(lVar1 + -0xc) != param_2) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(lVar1 + 0x2c),(int *)(lVar1 + 0x3c),
                   (ForElementType<FSetElementId> *)&param_2->field_0x38,
                   *(int *)&param_2->field_0x48);
        TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(lVar1 + -0xc),
                    (TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)param_2);
      }
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<IUIActionContextBase,1>,TSharedPtr<IUIActionContextBase,1>,int> @ 1426eaa10

void __cdecl
ConstructItems<TSharedPtr<IUIActionContextBase,1>,TSharedPtr<IUIActionContextBase,1>,int>
          (void *param_1,TSharedPtr<IUIActionContextBase,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IUIActionContextBase **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedRef<SDockTab,1>,TSharedRef<SDockTab,1>,int> @ 1426eaa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ConstructItems<TSharedRef<SDockTab,1>,TSharedRef<SDockTab,1>,int>
          (void *param_1,TSharedRef<SDockTab,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(SDockTab **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedRef<STabDrawer,1>,TSharedRef<STabDrawer,1>,int> @ 1426eaa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ConstructItems<TSharedRef<STabDrawer,1>,TSharedRef<STabDrawer,1>,int>
          (void *param_1,TSharedRef<STabDrawer,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(STabDrawer **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TWeakPtr<FUICommandList,1>,TWeakPtr<FUICommandList,1>,int> @ 1426eaad0

void __cdecl
ConstructItems<TWeakPtr<FUICommandList,1>,TWeakPtr<FUICommandList,1>,int>
          (void *param_1,TWeakPtr<FUICommandList,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FUICommandList **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TWeakPtr<SDockingArea,1>,TWeakPtr<SDockingArea,1>,int> @ 1426eab10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ConstructItems<TWeakPtr<SDockingArea,1>,TWeakPtr<SDockingArea,1>,int>
          (void *param_1,TWeakPtr<SDockingArea,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(SDockingArea **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// DestructItems<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>,int> @ 1426ebcc0

void __cdecl
DestructItems<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>,int>
          (TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)puVar1[2]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInputChord,int> @ 1426ebd00

void __cdecl DestructItems<FInputChord,int>(FInputChord *param_1,int param_2)

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

// DestructItems<SConstraintCanvas::FSlot::FSlotArguments,int> @ 1426ebd40

void __cdecl
DestructItems<SConstraintCanvas::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TAttribute<bool> *pTVar2;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->_AutoSize;
    do {
      this = &pTVar2->Getter;
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)(this + -2) + 0x10));
      if (*(void **)(this + -1) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -1));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)((longlong)(this + -2) + 0x10));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)(this + -4) + 0x10));
      if (*(void **)(this + -3) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -3));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)((longlong)(this + -4) + 0x10));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this + -6));
      if (*(void **)((longlong)(this + -6) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(this + -6) + 8));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(this + -6));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)(this + -8) + 0x10));
      puVar1 = *(undefined8 **)(this + -8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      pTVar2 = (TAttribute<bool> *)(this + 9);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SHorizontalBox::FSlot::FSlotArguments,int> @ 1426ebe30

void __cdecl
DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x30;
    do {
      TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                ((FSlotArgumentsMixin *)&this[1].field_0x10);
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
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[9].field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SSplitter::FSlot::FSlotArguments,int> @ 1426ebeb0

void __cdecl
DestructItems<SSplitter::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_OnSlotResized;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this[-2].field_0x10);
      if (*(void **)(this + -1) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -1));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&this[-2].field_0x10);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this[-3].field_0x8);
      if (*(void **)&this[-3].field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-3].field_0x10);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&this[-3].field_0x8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this + -4);
      if (*(void **)&this[-4].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-4].field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(this + -4));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[-5].field_0x8);
      puVar1 = *(undefined8 **)&this[-6].field_0x10;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[6].field_0x8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGlobalTabmanager::FSubTabManager,int> @ 1426ebf90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<FGlobalTabmanager::FSubTabManager,int>(FSubTabManager *param_1,int param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  FWeakReferencer<1> *pFVar7;
  
  if (param_2 != 0) {
    pFVar7 = &(param_1->MajorTab).WeakReferenceCount;
    do {
      plVar5 = *(longlong **)(pFVar7 + 2);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pTVar6 = pFVar7->ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar6->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      pFVar7 = pFVar7 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int> @ 1426ec010

void __cdecl
DestructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
          (TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FInputChord,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FUICommandList_const_,1>,int> @ 1426ec070

void __cdecl
DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
          (TSharedPtr<FUICommandList_const_,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<IUIActionContextBase,1>,int> @ 1426ec0b0

void __cdecl
DestructItems<TSharedPtr<IUIActionContextBase,1>,int>
          (TSharedPtr<IUIActionContextBase,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FExtender,1>,int> @ 1426ec0f0

void __cdecl
DestructItems<TSharedPtr<FExtender,1>,int>(TSharedPtr<FExtender,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FUICommandInfo,1>,int> @ 1426ec130

void __cdecl
DestructItems<TSharedPtr<FUICommandInfo,1>,int>(TSharedPtr<FUICommandInfo,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<FInputChord,1>,int> @ 1426ec170

void __cdecl
DestructItems<TSharedRef<FInputChord,1>,int>(TSharedRef<FInputChord,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<FTabManager::FArea,1>,int> @ 1426ec1b0

void __cdecl
DestructItems<TSharedRef<FTabManager::FArea,1>,int>
          (TSharedRef<FTabManager::FArea,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<FTabManager::FLayoutNode,1>,int> @ 1426ec1f0

void __cdecl
DestructItems<TSharedRef<FTabManager::FLayoutNode,1>,int>
          (TSharedRef<FTabManager::FLayoutNode,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<FWorkspaceItem,1>,int> @ 1426ec230

void __cdecl
DestructItems<TSharedRef<FWorkspaceItem,1>,int>(TSharedRef<FWorkspaceItem,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<SDockTab,1>,int> @ 1426ec270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestructItems<TSharedRef<SDockTab,1>,int>(TSharedRef<SDockTab,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<SDockingNode,1>,int> @ 1426ec2b0

void __cdecl
DestructItems<TSharedRef<SDockingNode,1>,int>(TSharedRef<SDockingNode,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<SDockingTabStack,1>,int> @ 1426ec2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedRef<SDockingTabStack,1>,int>
          (TSharedRef<SDockingTabStack,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<STabDrawer,1>,int> @ 1426ec330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedRef<STabDrawer,1>,int>(TSharedRef<STabDrawer,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,int> @ 1426ec370

void __cdecl
DestructItems<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,int>
          (TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_> *param_1,int param_2)

{
  FSlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlot *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TWeakPtr<FTabSpawnerEntry,1>,int> @ 1426ec3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TWeakPtr<FTabSpawnerEntry,1>,int>(TWeakPtr<FTabSpawnerEntry,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<FUICommandList,1>,int> @ 1426ec400

void __cdecl
DestructItems<TWeakPtr<FUICommandList,1>,int>(TWeakPtr<FUICommandList,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<SDockTab,1>,int> @ 1426ec450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestructItems<TWeakPtr<SDockTab,1>,int>(TWeakPtr<SDockTab,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<SDockingArea,1>,int> @ 1426ec4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TWeakPtr<SDockingArea,1>,int>(TWeakPtr<SDockingArea,1> *param_1,int param_2)

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

// FindByPredicate<`STabSidebar::ContainsTab'::__l2::<lambda_1>_> @ 1426f0030

/* WARNING: Enum "Type": Some values do not have unique names */

TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_> * __thiscall
TArray<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_STabSidebar::ContainsTab_::__l2::<lambda_1>_>
          (TArray<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDockTab *pSVar3;
  TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_> *pTVar4;
  TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_> *pTVar5;
  
  pTVar4 = (TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_> *)
           (this->AllocatorInstance).Data;
  pTVar5 = pTVar4 + this->ArrayNum;
  while( true ) {
    if (pTVar4 == pTVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->Tab).SharedReferenceCount.ReferenceController);
      return (TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_> *)0x0;
    }
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x8;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x18;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar3 = (param_1->Tab).Object;
    if ((pSVar3 != (SDockTab *)0x0) && (pSVar3 == *(SDockTab **)pTVar4)) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pTVar4 = pTVar4 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Tab).SharedReferenceCount.ReferenceController);
  return pTVar4;
}

// FindLastByPredicate<`STabSidebar::GetForegroundTab'::__l2::<lambda_1>_> @ 1426f05b0

int __thiscall
TArray<TSharedRef<STabDrawer,1>,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_STabSidebar::GetForegroundTab_::__l2::<lambda_1>_>
          (TArray<TSharedRef<STabDrawer,1>,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar7 = pFVar2 + (longlong)param_2 * 0x10;
  do {
    do {
      if (pFVar7 == pFVar2) {
        return -1;
      }
      pFVar1 = pFVar7 + -0x10;
      pFVar7 = pFVar7 + -0x10;
      bVar5 = FCurveSequence::IsAtStart((FCurveSequence *)(*(longlong *)pFVar1 + 0x360));
    } while (bVar5);
    lVar3 = *(longlong *)pFVar7;
    bVar5 = FCurveSequence::IsPlaying((FCurveSequence *)(lVar3 + 0x360));
  } while ((bVar5) &&
          (bVar5 = FCurveSequence::IsInReverse((FCurveSequence *)(lVar3 + 0x360)), bVar5));
  return (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
}

// GetTypeHash<FUICommandInfo_const_,1> @ 1426f1310

uint __cdecl GetTypeHash<FUICommandInfo_const_,1>(TSharedPtr<FUICommandInfo_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<FUICommandList_const_,1> @ 1426f1340

uint __cdecl GetTypeHash<FUICommandList_const_,1>(TSharedRef<FUICommandList_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<SDockTab_const_,1> @ 1426f1370

/* WARNING: Enum "Type": Some values do not have unique names */

uint __cdecl GetTypeHash<SDockTab_const_,1>(TSharedRef<SDockTab_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<TSharedRef<FWorkspaceItem,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_> @ 1426f13a0

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedRef<FWorkspaceItem,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_>
          (TSharedRef<FWorkspaceItem,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWorkspaceItem *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TSharedRef<FWorkspaceItem,1> *pTVar11;
  TSharedRef<FWorkspaceItem,1> *pTVar12;
  longlong lVar13;
  int iVar14;
  TSharedRef<FWorkspaceItem,1> *pTVar15;
  FWorkspaceItemSort *local_res20;
  TSharedRef<FWorkspaceItem,1> local_68;
  TSharedRef<FWorkspaceItem,1> local_58;
  TSharedRef<FWorkspaceItem,1> local_48;
  TSharedRef<FWorkspaceItem,1> local_38;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TSharedRef<FWorkspaceItem,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort> *
             )&local_res20);
  iVar14 = param_2 + -1;
  lVar13 = (longlong)iVar14;
  if (0 < iVar14) {
    pTVar15 = param_1 + lVar13;
    do {
      pTVar5 = (pTVar15->SharedReferenceCount).ReferenceController;
      pFVar6 = param_1->Object;
      pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar15->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar5;
      pTVar15->Object = pFVar6;
      (pTVar15->SharedReferenceCount).ReferenceController = pTVar7;
      iVar10 = 0;
      if (1 < iVar14) {
        do {
          iVar4 = iVar10 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < iVar14) {
            lVar1 = (longlong)iVar4 + 1;
            lVar2 = (longlong)iVar4 + 2;
            local_68.Object = param_1[lVar1].Object;
            local_68.SharedReferenceCount.ReferenceController =
                 param_1[lVar1].SharedReferenceCount.ReferenceController;
            if (local_68.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            local_58.Object = param_1[lVar2].Object;
            local_58.SharedReferenceCount.ReferenceController =
                 param_1[lVar2].SharedReferenceCount.ReferenceController;
            if (local_58.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            bVar8 = FWorkspaceItem::FWorkspaceItemSort::operator()(local_res20,&local_58,&local_68);
            if (bVar8) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          pTVar12 = param_1 + iVar10;
          pTVar11 = param_1 + iVar9;
          local_48.Object = pTVar11->Object;
          local_48.SharedReferenceCount.ReferenceController =
               (pTVar11->SharedReferenceCount).ReferenceController;
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_38.Object = pTVar12->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar12->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          bVar8 = FWorkspaceItem::FWorkspaceItemSort::operator()(local_res20,&local_38,&local_48);
          if (!bVar8) break;
          pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
          pFVar6 = pTVar12->Object;
          pTVar7 = (pTVar12->SharedReferenceCount).ReferenceController;
          pTVar12->Object = pTVar11->Object;
          (pTVar12->SharedReferenceCount).ReferenceController = pTVar5;
          pTVar11->Object = pFVar6;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar7;
          iVar10 = iVar9;
        } while (iVar9 * 2 + 1 < iVar14);
      }
      iVar14 = iVar14 + -1;
      lVar13 = lVar13 + -1;
      pTVar15 = pTVar15 + -1;
    } while (0 < lVar13);
  }
  return;
}

// HeapifyInternal<TSharedRef<FWorkspaceItem,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_>_> @ 1426f15a0

void __cdecl
AlgoImpl::
HeapifyInternal<TSharedRef<FWorkspaceItem,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_>_>
          (TSharedRef<FWorkspaceItem,1> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  FWorkspaceItemSort *pFVar3;
  code *pcVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FWorkspaceItem *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TSharedRef<FWorkspaceItem,1> *pTVar12;
  int iVar13;
  int iVar14;
  TSharedRef<FWorkspaceItem,1> *pTVar15;
  TSharedRef<FWorkspaceItem,1> local_68;
  TSharedRef<FWorkspaceItem,1> local_58;
  TSharedRef<FWorkspaceItem,1> local_48;
  TSharedRef<FWorkspaceItem,1> local_38;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar5 = iVar11;
  iVar14 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_1426f1725:
      if (iVar14 == 0) {
        return;
      }
      iVar10 = iVar14 + -1;
      iVar11 = iVar5 + -2;
      iVar5 = iVar11;
      iVar14 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      pFVar3 = (param_4.Predicate)->Predicate;
      lVar1 = (longlong)iVar11 + 1;
      lVar2 = (longlong)iVar11 + 2;
      local_68.Object = param_1[lVar1].Object;
      local_68.SharedReferenceCount.ReferenceController =
           param_1[lVar1].SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = param_1[lVar2].Object;
      local_58.SharedReferenceCount.ReferenceController =
           param_1[lVar2].SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar9 = FWorkspaceItem::FWorkspaceItemSort::operator()(pFVar3,&local_58,&local_68);
      if (bVar9) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar3 = (param_4.Predicate)->Predicate;
    pTVar12 = param_1 + iVar10;
    pTVar15 = param_1 + iVar13;
    local_48.Object = pTVar15->Object;
    local_48.SharedReferenceCount.ReferenceController =
         (pTVar15->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pTVar12->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = FWorkspaceItem::FWorkspaceItemSort::operator()(pFVar3,&local_38,&local_48);
    if (!bVar9) goto LAB_1426f1725;
    pTVar6 = (pTVar15->SharedReferenceCount).ReferenceController;
    iVar11 = iVar13 * 2 + 1;
    pFVar7 = pTVar12->Object;
    pTVar8 = (pTVar12->SharedReferenceCount).ReferenceController;
    pTVar12->Object = pTVar15->Object;
    (pTVar12->SharedReferenceCount).ReferenceController = pTVar6;
    pTVar15->Object = pFVar7;
    (pTVar15->SharedReferenceCount).ReferenceController = pTVar8;
    iVar10 = iVar13;
  } while( true );
}

// InternalConstructor<USlateSettings> @ 1426f17f0

void __cdecl InternalConstructor<USlateSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7USlateSettings__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<USlateSettings> @ 1426f1830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USlateSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USlateSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USlateSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSharedRef<FWorkspaceItem,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_> @ 1426f18e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedRef<FWorkspaceItem,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_>
          (TSharedRef<FWorkspaceItem,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FWorkspaceItem *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FWorkspaceItem,1> *pTVar6;
  TSharedRef<FWorkspaceItem,1> *pTVar7;
  TSharedRef<FWorkspaceItem,1> **ppTVar8;
  TSharedRef<FWorkspaceItem,1> *pTVar9;
  TSharedRef<FWorkspaceItem,1> *pTVar10;
  TSharedRef<FWorkspaceItem,1> *pTVar11;
  TSharedRef<FWorkspaceItem,1> *pTVar12;
  float fVar13;
  undefined1 auStack_3f8 [32];
  int local_3d8;
  TSharedRef<FWorkspaceItem,1> **local_3d0;
  TSharedRef<FWorkspaceItem,1> local_3c8;
  TSharedRef<FWorkspaceItem,1> local_3b8;
  TSharedRef<FWorkspaceItem,1> local_3a8;
  TSharedRef<FWorkspaceItem,1> local_398;
  TSharedRef<FWorkspaceItem,1> local_388;
  TSharedRef<FWorkspaceItem,1> local_378 [2];
  TSharedRef<FWorkspaceItem,1> *local_358;
  TSharedRef<FWorkspaceItem,1> *local_348;
  TSharedRef<FWorkspaceItem,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3f8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar13;
    memset(local_330,0,0x2e8);
    ppTVar8 = &local_348;
    do {
      pTVar9 = ppTVar8[1];
      pTVar12 = *ppTVar8;
      local_358 = ppTVar8[2];
      iVar5 = (int)((longlong)pTVar9 - (longlong)pTVar12 >> 4) + 1;
      local_3d8 = (int)local_358;
      pTVar11 = pTVar12;
      local_3d0 = ppTVar8;
      if ((int)local_358 != 0) {
LAB_1426f19a1:
        if (8 < iVar5) {
          pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
          pTVar6 = pTVar9 + 1;
          pFVar2 = pTVar11[iVar5 / 2].Object;
          pTVar3 = pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController;
          pTVar11[iVar5 / 2].Object = pTVar11->Object;
          pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController = pTVar1;
          pTVar11->Object = pFVar2;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar12 = pTVar11;
LAB_1426f19d0:
          pTVar10 = pTVar12;
          pTVar12 = pTVar10 + 1;
          if (pTVar12 <= pTVar9) goto code_r0x0001426f19d9;
          goto LAB_1426f1a23;
        }
        for (; pTVar6 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar9; pTVar9 = pTVar9 + -1) {
          while (pTVar10 = pTVar6, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar9) {
            local_388.Object = pTVar12->Object;
            local_388.SharedReferenceCount.ReferenceController =
                 (pTVar12->SharedReferenceCount).ReferenceController;
            if (local_388.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_378[0].Object = pTVar10->Object;
            local_378[0].SharedReferenceCount.ReferenceController =
                 (pTVar10->SharedReferenceCount).ReferenceController;
            if (local_378[0].SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_378[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_378[0].SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            bVar4 = FWorkspaceItem::FWorkspaceItemSort::operator()
                              (param_4.Predicate,local_378,&local_388);
            pTVar6 = pTVar12;
            if (!bVar4) {
              pTVar6 = pTVar10;
            }
          }
          pFVar2 = pTVar10->Object;
          pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
          pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
          pTVar10->Object = pTVar9->Object;
          (pTVar10->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar9->Object = pFVar2;
          (pTVar9->SharedReferenceCount).ReferenceController = pTVar1;
          ppTVar8 = local_3d0;
        }
        goto LAB_1426f1b3c;
      }
LAB_1426f1b2b:
      HeapSortInternal<TSharedRef<FWorkspaceItem,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_1426f1b3c:
      ppTVar8 = ppTVar8 + -3;
    } while (&local_348 <= ppTVar8);
  }
  return;
code_r0x0001426f19d9:
  local_3c8.Object = pTVar12->Object;
  local_3c8.SharedReferenceCount.ReferenceController =
       pTVar10[1].SharedReferenceCount.ReferenceController;
  if (local_3c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b8.Object = pTVar11->Object;
  local_3b8.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_3b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar4 = FWorkspaceItem::FWorkspaceItemSort::operator()(param_4.Predicate,&local_3b8,&local_3c8);
  if (!bVar4) goto LAB_1426f19d0;
LAB_1426f1a23:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar11) break;
    local_3a8.Object = pTVar11->Object;
    local_3a8.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_3a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_398.Object = pTVar6->Object;
    local_398.SharedReferenceCount.ReferenceController =
         pTVar7[-1].SharedReferenceCount.ReferenceController;
    if (local_398.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = FWorkspaceItem::FWorkspaceItemSort::operator()(param_4.Predicate,&local_398,&local_3a8);
  } while (!bVar4);
  pTVar1 = pTVar7[-1].SharedReferenceCount.ReferenceController;
  if (pTVar12 <= pTVar6) {
    pFVar2 = pTVar12->Object;
    pTVar3 = pTVar10[1].SharedReferenceCount.ReferenceController;
    pTVar12->Object = pTVar6->Object;
    pTVar10[1].SharedReferenceCount.ReferenceController = pTVar1;
    pTVar6->Object = pFVar2;
    pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
    goto LAB_1426f19d0;
  }
  pFVar2 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_3d8 = local_3d8 + -1;
  pTVar11->Object = pTVar6->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar1;
  pTVar6->Object = pFVar2;
  pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar9 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar9) {
      *ppTVar8 = pTVar12;
      ppTVar8[1] = pTVar9;
      *(int *)(ppTVar8 + 2) = local_3d8;
      ppTVar8 = ppTVar8 + 3;
      local_3d0 = ppTVar8;
    }
    if (pTVar6 <= pTVar11 + 1) goto LAB_1426f1b3c;
    pTVar9 = pTVar7 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar6) {
      *ppTVar8 = pTVar11;
      ppTVar8[1] = pTVar7 + -2;
      *(int *)(ppTVar8 + 2) = local_3d8;
      ppTVar8 = ppTVar8 + 3;
      local_3d0 = ppTVar8;
    }
    if (pTVar9 <= pTVar12) goto LAB_1426f1b3c;
  }
  iVar5 = (int)((longlong)pTVar9 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if (local_3d8 == 0) goto LAB_1426f1b2b;
  goto LAB_1426f19a1;
}

// MakeRequiredArgs<TSharedRef<SDockTab,1>_&,enum_ESidebarLocation_&> @ 1426f1c40

/* WARNING: Enum "Type": Some values do not have unique names */

T2RequiredArgs<TSharedRef<SDockTab,1>_&,ESidebarLocation_&> * __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SDockTab,1>_&,enum_ESidebarLocation_&>
          (T2RequiredArgs<TSharedRef<SDockTab,1>_&,ESidebarLocation_&> *__return_storage_ptr__,
          TSharedRef<SDockTab,1> *param_1,ESidebarLocation *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,enum_ETabDrawerOpenDirection> @ 1426f1c60

/* WARNING: Enum "Type": Some values do not have unique names */

T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,ETabDrawerOpenDirection_&&> *
__cdecl RequiredArgs::
        MakeRequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,enum_ETabDrawerOpenDirection>
                  (T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,ETabDrawerOpenDirection_&&>
                   *__return_storage_ptr__,TSharedRef<SDockTab,1> *param_1,
                  TWeakPtr<SWidget,1> *param_2,ETabDrawerOpenDirection *param_3)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<SOverlay,1>_const_&> @ 1426f1c80

T1RequiredArgs<TSharedRef<SOverlay,1>_const_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SOverlay,1>_const_&>(TSharedRef<SOverlay,1> *param_1)

{
  SOverlay *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SWidget,1>_const_&> @ 1426f1c90

T1RequiredArgs<TSharedRef<SWidget,1>_const_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SWidget,1>_const_&>(TSharedRef<SWidget,1> *param_1)

{
  SWidget *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SWidget,1>_const_&>)param_1;
}

// MakeRequiredArgs<TSharedRef<FTabManager::FSplitter,1>_> @ 1426f1ca0

T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<FTabManager::FSplitter,1>_>
          (TSharedRef<FTabManager::FSplitter,1> *param_1)

{
  FSplitter *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<FTabManager::FStack,1>_> @ 1426f1cb0

T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<FTabManager::FStack,1>_>
          (TSharedRef<FTabManager::FStack,1> *param_1)

{
  FStack *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<FTabManager,1>,TSharedRef<FTabManager::FArea,1>_> @ 1426f1cc0

/* WARNING: Enum "Type": Some values do not have unique names */

T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&> * __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<FTabManager,1>,TSharedRef<FTabManager::FArea,1>_>
          (T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>
           *__return_storage_ptr__,TSharedRef<FTabManager,1> *param_1,
          TSharedRef<FTabManager::FArea,1> *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<SDockTab,1>_> @ 1426f1ce0

/* WARNING: Enum "Type": Some values do not have unique names */

T1RequiredArgs<TSharedRef<SDockTab,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SDockTab,1>_>(TSharedRef<SDockTab,1> *param_1)

{
  SDockTab *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SDockTab,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SDockingTabStack,1>_> @ 1426f1cf0

/* WARNING: Enum "Type": Some values do not have unique names */

T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SDockingTabStack,1>_>
          (TSharedRef<SDockingTabStack,1> *param_1)

{
  SDockingTabStack *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>)param_1;
}

// MakeShared<UE::Slate::Private::FPanelDrawerData,1> @ 1426f1d00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<UE::Slate::Private::FPanelDrawerData,1> * __cdecl
MakeShared<UE::Slate::Private::FPanelDrawerData,1>
          (TSharedRef<UE::Slate::Private::FPanelDrawerData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Slate::Private::FPanelDrawerData,1> *pTVar4;
  
  pTVar3 = operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FPanelDrawerData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPanelDrawerData_Private_Slate_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    *(undefined4 *)&pTVar3[1]._padding_ = 0x3f400000;
    *(undefined4 *)((longlong)&pTVar3[1]._padding_ + 4) = 0x3e800000;
    __return_storage_ptr__->Object = (FPanelDrawerData *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FPanelDrawerData *)(pTVar3 + 1) == (FPanelDrawerData *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Slate::Private::FPanelDrawerData,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<SAppIconWidget,RequiredArgs::T0RequiredArgs> @ 1426f1db0

TSlateDecl<SAppIconWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAppIconWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAppIconWidget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAppIconWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAppIconWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SButton,RequiredArgs::T0RequiredArgs> @ 1426f1e60

TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs> @ 1426f1f10

TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComplexGradient,RequiredArgs::T0RequiredArgs> @ 1426f1fc0

TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs> @ 1426f2070

TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs> @ 1426f2120

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_> @ 1426f21d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
* __cdecl MakeTDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
                    (TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  ::
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDockingCross,RequiredArgs::T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>_> @ 1426f2280

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SDockingCross,RequiredArgs::T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>_> * __cdecl
MakeTDecl<SDockingCross,RequiredArgs::T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>_>
          (TSlateDecl<SDockingCross,RequiredArgs::T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDockingCross,RequiredArgs::T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>_>::
  TSlateDecl<SDockingCross,RequiredArgs::T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_> @ 1426f2330

TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
* __cdecl MakeTDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
                    (TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
  ::
  TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_> @ 1426f23e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_> *
__cdecl MakeTDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
                  (TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>::
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDockingTabWell,RequiredArgs::T0RequiredArgs> @ 1426f2490

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SDockingTabWell,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDockingTabWell,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDockingTabWell,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDockingTabWell,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockingTabWell,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDockingTarget,RequiredArgs::T0RequiredArgs> @ 1426f2540

TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> @ 1426f25f0

TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::Slate::Private::SPanelDrawerArea,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_const_&>_> @ 1426f26a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<UE::Slate::Private::SPanelDrawerArea,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_const_&>_>
* __cdecl MakeTDecl<UE::Slate::Private::SPanelDrawerArea,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_const_&>_>
                    (TSlateDecl<UE::Slate::Private::SPanelDrawerArea,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SWidget,1>_const_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::Slate::Private::SPanelDrawerArea,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_const_&>_>
  ::
  TSlateDecl<UE::Slate::Private::SPanelDrawerArea,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_const_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs> @ 1426f2750

TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSplitter,RequiredArgs::T0RequiredArgs> @ 1426f2800

TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSplitter,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STabDrawer,RequiredArgs::T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,enum_ETabDrawerOpenDirection_&&>_> @ 1426f28b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STabDrawer,RequiredArgs::T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,ETabDrawerOpenDirection_&&>_>
* __cdecl MakeTDecl<STabDrawer,RequiredArgs::T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,enum_ETabDrawerOpenDirection_&&>_>
                    (TSlateDecl<STabDrawer,RequiredArgs::T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,ETabDrawerOpenDirection_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,ETabDrawerOpenDirection_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STabDrawer,RequiredArgs::T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,enum_ETabDrawerOpenDirection_&&>_>
  ::
  TSlateDecl<STabDrawer,RequiredArgs::T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,enum_ETabDrawerOpenDirection_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STabDrawerButton,RequiredArgs::T2RequiredArgs<TSharedRef<SDockTab,1>_&,enum_ESidebarLocation_&>_> @ 1426f2960

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STabDrawerButton,RequiredArgs::T2RequiredArgs<TSharedRef<SDockTab,1>_&,ESidebarLocation_&>_>
* __cdecl MakeTDecl<STabDrawerButton,RequiredArgs::T2RequiredArgs<TSharedRef<SDockTab,1>_&,enum_ESidebarLocation_&>_>
                    (TSlateDecl<STabDrawerButton,RequiredArgs::T2RequiredArgs<TSharedRef<SDockTab,1>_&,ESidebarLocation_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<TSharedRef<SDockTab,1>_&,ESidebarLocation_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STabDrawerButton,RequiredArgs::T2RequiredArgs<TSharedRef<SDockTab,1>_&,enum_ESidebarLocation_&>_>
  ::
  TSlateDecl<STabDrawerButton,RequiredArgs::T2RequiredArgs<TSharedRef<SDockTab,1>_&,enum_ESidebarLocation_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STabDrawerTextBlock,RequiredArgs::T0RequiredArgs> @ 1426f2a10

TSlateDecl<STabDrawerTextBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STabDrawerTextBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STabDrawerTextBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STabDrawerTextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STabDrawerTextBlock,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_> @ 1426f2ac0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
* __cdecl MakeTDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
                    (TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SDockTab,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
  ::
  TSlateDecl<UE::Slate::Private::STabPanelDrawer,RequiredArgs::T1RequiredArgs<TSharedRef<SDockTab,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_> @ 1426f2b70

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_> * __cdecl
MakeTDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_>
          (TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SOverlay,1>_const_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_>::
  TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs> @ 1426f2c20

TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWeakWidget,RequiredArgs::T0RequiredArgs> @ 1426f2cd0

TSlateDecl<SWeakWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SWeakWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWeakWidget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SWeakWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWeakWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Reverse<FLayoutExtender::FExtendedTab> @ 1426f4bd0

void __cdecl AlgoImpl::Reverse<FLayoutExtender::FExtendedTab>(FExtendedTab *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FNameEntryId FVar4;
  ESidebarLocation EVar5;
  undefined3 uVar6;
  float fVar7;
  TOptional<bool> TVar8;
  undefined1 uVar9;
  ELayoutExtensionPosition EVar10;
  FNameEntryId FVar11;
  ESidebarLocation EVar12;
  undefined3 uVar13;
  float fVar14;
  bool bVar15;
  TOptional<bool> TVar16;
  undefined1 uVar17;
  FExtendedTab *pFVar18;
  longlong lVar19;
  
  lVar19 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar18 = param_1 + (param_2 + -1);
    do {
      bVar15 = (param_1->TabToAdd).bPinnedInSidebar;
      TVar16 = (param_1->TabToAdd).bIsLockedInPlace;
      uVar17 = (param_1->TabToAdd).field_0x1f;
      FVar4.Value = (pFVar18->TabToAdd).TabId.TabType.ComparisonIndex.Value;
      uVar1 = *(undefined8 *)&(pFVar18->TabToAdd).TabId.TabType.Number;
      EVar10 = param_1->Position;
      FVar11.Value = (param_1->TabToAdd).TabId.TabType.ComparisonIndex.Value;
      uVar2 = *(undefined8 *)&(param_1->TabToAdd).TabId.TabType.Number;
      uVar3 = *(undefined8 *)&(param_1->TabToAdd).TabId.Flags;
      EVar12 = (param_1->TabToAdd).SidebarLocation;
      uVar13 = *(undefined3 *)&(param_1->TabToAdd).field_0x15;
      fVar14 = (param_1->TabToAdd).SidebarSizeCoefficient;
      param_1->Position = pFVar18->Position;
      (param_1->TabToAdd).TabId.TabType.ComparisonIndex = (FNameEntryId)FVar4.Value;
      *(undefined8 *)&(param_1->TabToAdd).TabId.TabType.Number = uVar1;
      EVar5 = (pFVar18->TabToAdd).SidebarLocation;
      uVar6 = *(undefined3 *)&(pFVar18->TabToAdd).field_0x15;
      fVar7 = (pFVar18->TabToAdd).SidebarSizeCoefficient;
      *(undefined8 *)&(param_1->TabToAdd).TabId.Flags =
           *(undefined8 *)&(pFVar18->TabToAdd).TabId.Flags;
      (param_1->TabToAdd).SidebarLocation = EVar5;
      *(undefined3 *)&(param_1->TabToAdd).field_0x15 = uVar6;
      (param_1->TabToAdd).SidebarSizeCoefficient = fVar7;
      TVar8 = (pFVar18->TabToAdd).bIsLockedInPlace;
      uVar9 = (pFVar18->TabToAdd).field_0x1f;
      (param_1->TabToAdd).bPinnedInSidebar = (pFVar18->TabToAdd).bPinnedInSidebar;
      (param_1->TabToAdd).bIsLockedInPlace = TVar8;
      (param_1->TabToAdd).field_0x1f = uVar9;
      pFVar18->Position = EVar10;
      (pFVar18->TabToAdd).TabId.TabType.ComparisonIndex = (FNameEntryId)FVar11.Value;
      *(undefined8 *)&(pFVar18->TabToAdd).TabId.TabType.Number = uVar2;
      *(undefined8 *)&(pFVar18->TabToAdd).TabId.Flags = uVar3;
      (pFVar18->TabToAdd).SidebarLocation = EVar12;
      *(undefined3 *)&(pFVar18->TabToAdd).field_0x15 = uVar13;
      (pFVar18->TabToAdd).SidebarSizeCoefficient = fVar14;
      (pFVar18->TabToAdd).bPinnedInSidebar = bVar15;
      (pFVar18->TabToAdd).bIsLockedInPlace = TVar16;
      (pFVar18->TabToAdd).field_0x1f = uVar17;
      lVar19 = lVar19 + -1;
      param_1 = param_1 + 1;
      pFVar18 = pFVar18 + -1;
    } while (lVar19 != 0);
  }
  return;
}

// StaticEnum<enum_EMultipleKeyBindingIndex> @ 1426f4c40

UEnum * __cdecl StaticEnum<enum_EMultipleKeyBindingIndex>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex,(UObject *)pUVar1,
                       L"EMultipleKeyBindingIndex");
  }
  return Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.OuterSingleton;
}

// StaticEnum<enum_EUserInterfaceActionType> @ 1426f4c80

UEnum * __cdecl StaticEnum<enum_EUserInterfaceActionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUserInterfaceActionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EUserInterfaceActionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EUserInterfaceActionType,(UObject *)pUVar1,
                       L"EUserInterfaceActionType");
  }
  return Z_Registration_Info_UEnum_EUserInterfaceActionType.OuterSingleton;
}

// WriteToString<16,UE::String::Private::TPascalCase<wchar_t>_> @ 1426f5400

TStringBuilderWithBuffer<wchar_t,16> * __cdecl
WriteToString<16,UE::String::Private::TPascalCase<wchar_t>_>
          (TStringBuilderWithBuffer<wchar_t,16> *__return_storage_ptr__,
          TPascalCase<wchar_t> *param_1)

{
  TStringView<wchar_t> local_18;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  local_18.DataPtr = (param_1->Input).DataPtr;
  local_18.Size = (param_1->Input).Size;
  local_18._12_4_ = *(undefined4 *)&(param_1->Input).field_0xc;
  UE::String::PascalCaseTo(&local_18,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ~TFunction_OwnedObject<`SDockingArea::Construct'::__l2::<lambda_1>,0,0> @ 1426fefc0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SDockingArea::Construct'::__l2::<lambda_1>,0,0>
::~TFunction_OwnedObject<_SDockingArea::Construct_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SDockingArea::Construct'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// `vcall'{640,{flat}}'_}' @ 142705e34

/* [thunk]: __cdecl SDockingNode::`vcall'{640,{flat}}' }' */

void __thiscall SDockingNode::_vcall__640__flat______(SDockingNode *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142705e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x280))();
  return;
}

// `scalar_deleting_destructor' @ 142705e50

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142705eb0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142705f10

void * __thiscall
IBaseDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142705f40

void * __thiscall
IBaseDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142705f70

void * __thiscall
IBaseDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142705fa0

void * __thiscall
IBaseDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142705fd0

void * __thiscall
IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706000

void * __thiscall
IBaseDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706030

void * __thiscall
IBaseDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this,uint param_1
          )

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706060

void * __thiscall
IBaseDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706090

void * __thiscall
IBaseDelegateInstance<enum_SSplitter::ESizeRule___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427060c0

void * __thiscall
IBaseDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427060f0

void * __thiscall
IBaseDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706120

void * __thiscall
IBaseDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706150

void * __thiscall
IBaseDelegateInstance<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706180

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427061b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427061e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706210

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706240

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706270

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<STabDrawer,1>,float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<STabDrawer,1>,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427062a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427062d0

void * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706330

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706360

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1427063c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTabManager,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,FPopulateTabSpawnerMenu_Args>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTabManager,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,FPopulateTabSpawnerMenu_Args>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142706410

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,FTabSpawnerEntry_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,FTabSpawnerEntry_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706470

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,FTabManager_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,FTabManager_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427064d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706530

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706590

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427065f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706650

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427066b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockTab_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706710

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingArea_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockingArea_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706770

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingNode_const_,1,enum_SSplitter::ESizeRule___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427067d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingNode_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockingNode_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706830

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706890

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427068f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706950

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427069b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706a10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706a70

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingTabStack_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,enum_SDockingTabStack::ECloseTabsDirection>
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

// `scalar_deleting_destructor' @ 142706ad0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDockingTarget_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDockingTarget_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706b30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::Slate::Private::SPanelDrawerArea_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::Slate::Private::SPanelDrawerArea_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706b90

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::Slate::Private::SPanelDrawerArea_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::Slate::Private::SPanelDrawerArea_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::Slate::Private::SPanelDrawerArea_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::Slate::Private::SPanelDrawerArea_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706c50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,STabDrawerButton_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STabDrawerButton_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,STabDrawerButton_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STabDrawerButton_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706d10

void * __thiscall
TBaseSPMethodDelegateInstance<1,STabDrawerButton_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706d70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,STabDrawerButton_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STabDrawerButton_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::Slate::Private::STabPanelDrawer_const_,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::Slate::Private::STabPanelDrawer_const_,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706e30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::Slate::Private::STabPanelDrawer_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::Slate::Private::STabPanelDrawer_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706e90

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWindowTitleBar_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWindowTitleBar_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWindowTitleBar_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWindowTitleBar_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706f50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWindowTitleBar_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWindowTitleBar_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142706fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWindowTitleBar_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWindowTitleBar_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707010

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTabManager,1,void___cdecl(void),FDefaultDelegateUserPolicy,FName>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FTabManager,1,void___cdecl(void),FDefaultDelegateUserPolicy,FName>
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

// `scalar_deleting_destructor' @ 142707070

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockTab,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDockTab,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427070d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockingArea,1,void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDockingArea,1,void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707130

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockingArea,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDockingArea,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707190

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockingNode,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDockingNode,1,void___cdecl(float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427071f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707250

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427072b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707310

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,void___cdecl(void),FDefaultDelegateUserPolicy,enum_SDockingTabStack::ETabsToClose>
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

// `scalar_deleting_destructor' @ 142707370

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,void___cdecl(void),FDefaultDelegateUserPolicy,enum_SDockingTabStack::ETabsToClose,enum_SDockingTabStack::ECloseTabsDirection>
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

// `scalar_deleting_destructor' @ 1427073d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,bool___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707430

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Slate::Private::SPanelDrawerArea,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707490

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Slate::Private::SPanelDrawerArea,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::Slate::Private::SPanelDrawerArea,1,void___cdecl(float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427074f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabDrawer,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707550

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabDrawer,1,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STabDrawer,1,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427075b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabDrawer,1,void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STabDrawer,1,void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707610

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabDrawerButton,1,void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STabDrawerButton,1,void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707670

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabDrawerButton,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427076d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabSidebar,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDockTab,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STabSidebar,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDockTab,1>_>
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707740

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabSidebar,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427077a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabSidebar,1,void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STabSidebar,1,void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707800

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabSidebar,1,void___cdecl(TSharedRef<SDockTab,1>,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STabSidebar,1,void___cdecl(TSharedRef<SDockTab,1>,bool),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707860

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabSidebar,1,void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STabSidebar,1,void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427078c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabSidebar,1,void___cdecl(TSharedRef<STabDrawer,1>,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STabSidebar,1,void___cdecl(TSharedRef<STabDrawer,1>,float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 142707920

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STabSidebar,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDockTab,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STabSidebar,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDockTab,1>_>
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707990

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWindowTitleBar,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWindowTitleBar,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1427079f0

void * __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707a50

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707a80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707ae0

void * __thiscall
TBasicLayoutWidgetSlot<SHorizontalBox::FSlot>::_scalar_deleting_destructor_
          (TBasicLayoutWidgetSlot<SHorizontalBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::
        _vftable__for__TSlotBase<SHorizontalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707b60

void * __thiscall
TCommonDelegateInstanceState<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707b90

void * __thiscall
TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707bc0

void * __thiscall
TCommonDelegateInstanceState<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707bf0

void * __thiscall
TCommonDelegateInstanceState<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707c20

void * __thiscall
TCommonDelegateInstanceState<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707c50

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDockTab,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDockTab,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707c90

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707cc0

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707cf0

void * __thiscall
TCommonDelegateInstanceState<FText___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FText___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707d20

void * __thiscall
TCommonDelegateInstanceState<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707d50

void * __thiscall
TCommonDelegateInstanceState<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707db0

void * __thiscall
TCommonDelegateInstanceState<enum_SSplitter::ESizeRule___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707de0

void * __thiscall
TCommonDelegateInstanceState<float___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<float___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707e10

void * __thiscall
TCommonDelegateInstanceState<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707e40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,FPopulateTabSpawnerMenu_Args>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,FPopulateTabSpawnerMenu_Args>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707e90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707ec0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707ef0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707f20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707f50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<SDockTab,1>,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<SDockTab,1>,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707f80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707fb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<STabDrawer,1>,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<STabDrawer,1>,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142707fe0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708010

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDockTab,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDockTab,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708050

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FName>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FName> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708080

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_SDockingTabStack::ETabsToClose>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427080b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_SDockingTabStack::ETabsToClose,enum_SDockingTabStack::ECloseTabsDirection>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427080e0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
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

// `scalar_deleting_destructor' @ 142708140

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,enum_SDockingTabStack::ECloseTabsDirection>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708170

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SDockingArea::Construct'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SDockingArea::Construct'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427081b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Private::FPanelDrawerData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Slate::Private::FPanelDrawerData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427081f0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708230

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FUICommandList,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FUICommandList,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708270

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWorkspaceItem,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FWorkspaceItem,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427082b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAppIconWidget,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SAppIconWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427082f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SButton,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SButton,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708330

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCheckBox,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SCheckBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x480);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708370

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComplexGradient,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SComplexGradient,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427083b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SConstraintCanvas,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SConstraintCanvas,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427083f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockTab,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDockTab,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708430

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingArea,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDockingArea,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708470

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingCross,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDockingCross,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427084b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingSplitter,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SDockingSplitter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427084f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingTabStack,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SDockingTabStack,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708530

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingTabWell,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SDockingTabWell,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708570

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingTarget,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SDockingTarget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427085b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHorizontalBox,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SHorizontalBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427085f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Private::SPanelDrawerArea,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Slate::Private::SPanelDrawerArea,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708630

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpacer,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSpacer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708670

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSplitter,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSplitter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427086b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STabDrawer,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STabDrawer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x438);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427086f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STabDrawerButton,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<STabDrawerButton,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708730

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STabDrawerTextBlock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STabDrawerTextBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x570);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708770

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Private::STabPanelDrawer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Slate::Private::STabPanelDrawer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427087b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STabSidebar,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STabSidebar,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427087f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextBlock,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STextBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x620);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708830

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWeakWidget,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SWeakWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708870

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FInputChord,SharedPointerInternals::DefaultDeleter<FInputChord>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FInputChord,SharedPointerInternals::DefaultDeleter<FInputChord>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427088b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabSpawnerEntry,SharedPointerInternals::DefaultDeleter<FTabSpawnerEntry>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTabSpawnerEntry,SharedPointerInternals::DefaultDeleter<FTabSpawnerEntry>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427088f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonReader<char>,SharedPointerInternals::DefaultDeleter<TJsonReader<char>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonReader<char>,SharedPointerInternals::DefaultDeleter<TJsonReader<char>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708930

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708970

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427089b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager::FArea,SharedPointerInternals::DefaultDeleter<FTabManager::FArea>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTabManager::FArea,SharedPointerInternals::DefaultDeleter<FTabManager::FArea>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427089f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDockingDragOperation,SharedPointerInternals::DefaultDeleter<FDockingDragOperation>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDockingDragOperation,SharedPointerInternals::DefaultDeleter<FDockingDragOperation>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708a30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGlobalTabmanager,SharedPointerInternals::DefaultDeleter<FGlobalTabmanager>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGlobalTabmanager,SharedPointerInternals::DefaultDeleter<FGlobalTabmanager>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708a70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FJsonValueBoolean,SharedPointerInternals::DefaultDeleter<FJsonValueBoolean>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FJsonValueBoolean,SharedPointerInternals::DefaultDeleter<FJsonValueBoolean>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708ab0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FJsonValueNumber,SharedPointerInternals::DefaultDeleter<FJsonValueNumber>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FJsonValueNumber,SharedPointerInternals::DefaultDeleter<FJsonValueNumber>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708af0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager::FLayout,SharedPointerInternals::DefaultDeleter<FTabManager::FLayout>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTabManager::FLayout,SharedPointerInternals::DefaultDeleter<FTabManager::FLayout>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708b30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNamePermissionList,SharedPointerInternals::DefaultDeleter<FNamePermissionList>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNamePermissionList,SharedPointerInternals::DefaultDeleter<FNamePermissionList>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708b70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager::FPrivateApi,SharedPointerInternals::DefaultDeleter<FTabManager::FPrivateApi>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTabManager::FPrivateApi,SharedPointerInternals::DefaultDeleter<FTabManager::FPrivateApi>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateUser,SharedPointerInternals::DefaultDeleter<FSlateUser>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateUser,SharedPointerInternals::DefaultDeleter<FSlateUser>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708bf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager::FSplitter,SharedPointerInternals::DefaultDeleter<FTabManager::FSplitter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTabManager::FSplitter,SharedPointerInternals::DefaultDeleter<FTabManager::FSplitter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708c30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager::FStack,SharedPointerInternals::DefaultDeleter<FTabManager::FStack>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTabManager::FStack,SharedPointerInternals::DefaultDeleter<FTabManager::FStack>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708c70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager,SharedPointerInternals::DefaultDeleter<FTabManager>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTabManager,SharedPointerInternals::DefaultDeleter<FTabManager>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708cb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUICommandDragDropOp,SharedPointerInternals::DefaultDeleter<FUICommandDragDropOp>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUICommandDragDropOp,SharedPointerInternals::DefaultDeleter<FUICommandDragDropOp>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708cf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUICommandInfo,SharedPointerInternals::DefaultDeleter<FUICommandInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUICommandInfo,SharedPointerInternals::DefaultDeleter<FUICommandInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708d30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUICommandList,SharedPointerInternals::DefaultDeleter<FUICommandList>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUICommandList,SharedPointerInternals::DefaultDeleter<FUICommandList>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708d70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUserDefinedChords,SharedPointerInternals::DefaultDeleter<FUserDefinedChords>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUserDefinedChords,SharedPointerInternals::DefaultDeleter<FUserDefinedChords>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708db0

void * __thiscall
SBoxPanel::TSlot<SHorizontalBox::FSlot>::_scalar_deleting_destructor_
          (TSlot<SHorizontalBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::
        _vftable__for__TSlotBase<SHorizontalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708e30

void * __thiscall
TSlotBase<SHorizontalBox::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SHorizontalBox::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708e70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TSlotlessChildren<SDockTab>::_scalar_deleting_destructor_
          (TSlotlessChildren<SDockTab> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedRef<SDockTab,1>,int>
            ((TSharedRef<SDockTab,1> *)(this->Children).AllocatorInstance.Data,
             (this->Children).ArrayNum);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708ed0

void * __thiscall
TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::_scalar_deleting_destructor_
          (TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SHorizontalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708f50

void * __thiscall FTabManager::FArea::_scalar_deleting_destructor_(FArea *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FArea_FTabManager__6B_;
  pFVar1 = (this->InactivePanelDrawerTabs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSplitter::~FSplitter((FSplitter *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142708fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FDockingDragOperation::_scalar_deleting_destructor_(FDockingDragOperation *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FDockingDragOperation__6B_;
  if ((this->TabBeingDragged).Object != (SDockTab *)0x0) {
    DroppedOntoNothing(this);
  }
  pTVar3 = (this->HoveredDockTarget).TargetNode.WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->HoveredTabPanelPtr).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->TabStackOfOrigin).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CursorDecoratorStackNode).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabOwnerAreaOfOrigin).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabBeingDragged).SharedReferenceCount.ReferenceController);
  FDragDropOperation::~FDragDropOperation((FDragDropOperation *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427090a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FGlobalTabmanager::_scalar_deleting_destructor_(FGlobalTabmanager *this,uint param_1)

{
  ~FGlobalTabmanager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x348);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427090e0

void * __thiscall
FInputBindingManager::_scalar_deleting_destructor_(FInputBindingManager *this,uint param_1)

{
  ~FInputBindingManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709120

void * __thiscall
FTabManager::FLastMajorOrNomadTab::_scalar_deleting_destructor_
          (FLastMajorOrNomadTab *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSearchPreference_FTabManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709160

void * __thiscall
FTabManager::FLayoutNode::_scalar_deleting_destructor_(FLayoutNode *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FLayoutNode_FTabManager__6B_;
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

// `scalar_deleting_destructor' @ 1427091d0

void * __thiscall
FTabManager::FLiveTabSearch::_scalar_deleting_destructor_(FLiveTabSearch *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSearchPreference_FTabManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709210

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall FMenuBuilder::_scalar_deleting_destructor_(FMenuBuilder *this,uint param_1)

{
  ~FMenuBuilder(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709250

void * __thiscall
FMultiBoxBuilder::_scalar_deleting_destructor_(FMultiBoxBuilder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)(this->ExtenderStack).AllocatorInstance.Data,
             (this->ExtenderStack).ArrayNum);
  pFVar1 = (this->ExtenderStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)(this->CommandListStack).AllocatorInstance.Data,
             (this->CommandListStack).ArrayNum);
  pFVar1 = (this->CommandListStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MultiBox).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427092d0

void * __thiscall
FTabManager::FRequireClosedTab::_scalar_deleting_destructor_(FRequireClosedTab *this,uint param_1)

{
  *this = (FRequireClosedTab)&___7FSearchPreference_FTabManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709310

void * __thiscall
FTabManager::FSearchPreference::_scalar_deleting_destructor_(FSearchPreference *this,uint param_1)

{
  *this = (FSearchPreference)&___7FSearchPreference_FTabManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709350

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FSlateUser::_scalar_deleting_destructor_(FSlateUser *this,uint param_1)

{
  ~FSlateUser(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x448);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709390

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSlateVirtualUserHandle::_scalar_deleting_destructor_(FSlateVirtualUserHandle *this,uint param_1)

{
  FSlateApplication *this_00;
  
  this->_padding_ = (longlong)&___7FSlateVirtualUserHandle__6B_;
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    FSlateApplication::UnregisterUser(this_00,this->UserIndex);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427093f0

void * __thiscall SHorizontalBox::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::
        _vftable__for__TSlotBase<SHorizontalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709470

void * __thiscall FTabManager::FSplitter::_scalar_deleting_destructor_(FSplitter *this,uint param_1)

{
  ~FSplitter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427094b0

void * __thiscall FTabManager::FStack::_scalar_deleting_destructor_(FStack *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
  pFVar3 = (this->Tabs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FLayoutNode_FTabManager__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709530

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FTabManager::_scalar_deleting_destructor_(FTabManager *this,uint param_1)

{
  ~FTabManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709570

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FTabSpawnerEntry::_scalar_deleting_destructor_(FTabSpawnerEntry *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pTVar3 = (this->SpawnedTabPtr).WeakReferenceCount.ReferenceController;
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MenuType).Getter);
  pvVar4 = *(void **)&(this->MenuType).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MenuType).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFindTabToReuse);
  pvVar4 = *(void **)&(this->OnFindTabToReuse).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFindTabToReuse);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CanSpawnTab);
  pvVar4 = *(void **)&(this->CanSpawnTab).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CanSpawnTab);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSpawnTab);
  pvVar4 = *(void **)&(this->OnSpawnTab).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSpawnTab);
  FWorkspaceItem::~FWorkspaceItem((FWorkspaceItem *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709690

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FUICommandDragDropOp::_scalar_deleting_destructor_(FUICommandDragDropOp *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDropNotification);
  pvVar1 = *(void **)&(this->OnDropNotification).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDropNotification);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomDecorator).SharedReferenceCount.ReferenceController);
  FDragDropOperation::~FDragDropOperation((FDragDropOperation *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709710

void * __thiscall FUICommandList::_scalar_deleting_destructor_(FUICommandList *this,uint param_1)

{
  ~FUICommandList(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709750

void * __thiscall FWorkspaceItem::_scalar_deleting_destructor_(FWorkspaceItem *this,uint param_1)

{
  ~FWorkspaceItem(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709790

void * __thiscall SAppIconWidget::_scalar_deleting_destructor_(SAppIconWidget *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->IconImage).SharedReferenceCount.ReferenceController);
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

// `scalar_deleting_destructor' @ 142709800

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SDockingArea::_scalar_deleting_destructor_(SDockingArea *this,uint param_1)

{
  ~SDockingArea(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709860

void * __thiscall SDockingCross::_scalar_deleting_destructor_(SDockingCross *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerNode).WeakReferenceCount.ReferenceController;
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
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427098e0

void * __thiscall SDockingNode::_scalar_deleting_destructor_(SDockingNode *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->ParentNodePtr).WeakReferenceCount.ReferenceController;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709960

void * __thiscall
SDockingSplitter::_scalar_deleting_destructor_(SDockingSplitter *this,uint param_1)

{
  ~SDockingSplitter(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1427099c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SDockingTabStack::_scalar_deleting_destructor_(SDockingTabStack *this,uint param_1)

{
  ~SDockingTabStack(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709a20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SDockingTabWell::_scalar_deleting_destructor_(SDockingTabWell *this,uint param_1)

{
  ~SDockingTabWell(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x298);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709a80

void * __thiscall SDockingTarget::_scalar_deleting_destructor_(SDockingTarget *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerNode).WeakReferenceCount.ReferenceController;
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
  SBorder::~SBorder((SBorder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709b00

void * __thiscall SHorizontalBox::_scalar_deleting_destructor_(SHorizontalBox *this,uint param_1)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709b60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::Slate::Private::SPanelDrawerArea::_scalar_deleting_destructor_
          (SPanelDrawerArea *this,uint param_1)

{
  ~SPanelDrawerArea(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall STabDrawer::_scalar_deleting_destructor_(STabDrawer *this,uint param_1)

{
  ~STabDrawer(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x428);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709c20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
STabDrawerButton::_scalar_deleting_destructor_(STabDrawerButton *this,uint param_1)

{
  ~STabDrawerButton(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709c80

void * __thiscall
STabDrawerTextBlock::_scalar_deleting_destructor_(STabDrawerTextBlock *this,uint param_1)

{
  ~STabDrawerTextBlock(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x560);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::Slate::Private::STabPanelDrawer::_scalar_deleting_destructor_
          (STabPanelDrawer *this,uint param_1)

{
  (this->DarkerTabBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DarkerTabBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DisplayedTab).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709d60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall STabSidebar::_scalar_deleting_destructor_(STabSidebar *this,uint param_1)

{
  ~STabSidebar(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142709dc0

void * __thiscall USlateSettings::_scalar_deleting_destructor_(USlateSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USlateSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// ConvertSectionToJson @ 142721850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FJsonObject,1> * __cdecl
ConvertSectionToJson
          (TSharedPtr<FJsonObject,1> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedRef<FJsonObject,1> *pTVar6;
  ulonglong uVar7;
  FString *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FJsonObject,1> *pTVar10;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  TReferenceControllerBase<1> *pTVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *this;
  undefined1 local_res8 [8];
  uint local_res10;
  FString local_118;
  FString local_108;
  TSharedPtr<FJsonObject,1> local_f8;
  FString local_e8;
  StackState local_d8;
  FString local_a0;
  TSharedRef<FJsonObject,1> local_90;
  FString local_80;
  FString local_70;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_60 [2];
  
  pTVar6 = MakeShared<FJsonObject,1>(&local_90);
  __return_storage_ptr__->Object = pTVar6->Object;
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  pTVar4 = _UNK_150651568;
  pTVar1 = ___xmm_00000000000000000000000000000010;
  local_res10 = param_1->ArrayNum;
  uVar7 = (ulonglong)(int)local_res10;
  this = (param_1->AllocatorInstance).Data;
  pFVar15 = this + uVar7 * 0x10;
  do {
    if (param_1->ArrayNum != (int)uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar15) {
      return __return_storage_ptr__;
    }
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    FString::FString(&local_a0,L"=");
    bVar5 = FString::Split((FString *)this,&local_a0,&local_e8,&local_118);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar12.Data = local_118.Data.AllocatorInstance.Data;
      }
      bVar5 = FTextStringHelper::IsComplexText((wchar_t *)FVar12.Data);
      FVar12.Data = local_118.Data.AllocatorInstance.Data;
      if (bVar5) {
        lVar13 = (longlong)local_118.Data.ArrayNum;
        bVar5 = false;
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = local_118.Data.ArrayNum;
        if (local_118.Data.ArrayNum == 0) {
          local_108.Data._8_8_ = local_118.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)&local_108,
                     local_118.Data.ArrayNum,&local_108.Data.ArrayMax);
          memcpy(local_108.Data.AllocatorInstance.Data,FVar12.Data,lVar13 * 2);
        }
      }
      else {
        bVar5 = true;
        pFVar8 = FString::Replace(&local_118,&local_70,L"(",L"{",IgnoreCase);
        pFVar8 = FString::Replace(pFVar8,&local_80,L")",L"}",IgnoreCase);
        FString::Replace(pFVar8,&local_108,L"\\\r\n",L"\r\n",IgnoreCase);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      local_118.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
      local_118.Data.ArrayNum = local_108.Data.ArrayNum;
      local_118.Data.ArrayMax = local_108.Data.ArrayMax;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (bVar5) {
        pTVar9 = operator_new(0x60);
        if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
          local_f8.Object = (FJsonObject *)pTVar1;
          local_f8.SharedReferenceCount.ReferenceController = pTVar4;
        }
        else {
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          pTVar9->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
          pTVar9[2]._padding_ = 0;
          pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
          pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
          pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
          pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
          pTVar9[1]._padding_ = 0;
          pTVar9[3]._padding_ = 0;
          pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
          pTVar9[3].WeakReferenceCount = (atomic<int>)0x80;
          *(undefined4 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
          *(undefined4 *)&pTVar9[4]._padding_ = 0xffffffff;
          pTVar9[5]._padding_ = 0;
          if (pTVar9 + 1 == (TReferenceControllerBase<1> *)0x0) {
            bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
              return pTVar10;
            }
          }
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
          pTVar14 = pTVar9;
          local_f8.Object = (FJsonObject *)(pTVar9 + 1);
          local_f8.SharedReferenceCount.ReferenceController = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        pTVar11 = TJsonStringReader<wchar_t>::Create(local_60,&local_118);
        pTVar14 = (pTVar11->SharedReferenceCount).ReferenceController;
        pTVar2 = pTVar11->Object;
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60[0].SharedReferenceCount.ReferenceController);
        local_d8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Identifier.Data.ArrayNum = 0;
        local_d8.Identifier.Data.ArrayMax = 0;
        local_d8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Array.ArrayNum = 0;
        local_d8.Array.ArrayMax = 0;
        local_d8.Object.Object = (FJsonObject *)0x0;
        local_d8.Object.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                          ((TJsonReader<wchar_t> *)pTVar2,&local_d8,None);
        if (bVar5) {
          bVar5 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_d8,&local_f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.Object.SharedReferenceCount.ReferenceController);
          DestructItems<TSharedPtr<FJsonValue,1>,int>
                    ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data,
                     local_d8.Array.ArrayNum);
          if ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data !=
              (TSharedPtr<FJsonValue,1> *)0x0) {
            FMemory::Free(local_d8.Array.AllocatorInstance.Data);
          }
          if (local_d8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Identifier.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
              bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                return pTVar10;
              }
            }
            FJsonObject::SetObjectField(__return_storage_ptr__->Object,&local_e8,&local_f8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar14);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f8.SharedReferenceCount.ReferenceController);
            goto LAB_142721c24;
          }
        }
        else {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.Object.SharedReferenceCount.ReferenceController);
          DestructItems<TSharedPtr<FJsonValue,1>,int>
                    ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data,
                     local_d8.Array.ArrayNum);
          if ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data !=
              (TSharedPtr<FJsonValue,1> *)0x0) {
            FMemory::Free(local_d8.Array.AllocatorInstance.Data);
          }
          if (local_d8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Identifier.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
      }
      if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
          return pTVar10;
        }
      }
      FJsonObject::SetStringField(__return_storage_ptr__->Object,&local_e8,&local_118);
    }
LAB_142721c24:
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    uVar7 = (ulonglong)local_res10;
    this = this + 0x10;
  } while( true );
}

// EmptyLinkFunctionForGeneratedCodeInputChord @ 14272f070

void __cdecl EmptyLinkFunctionForGeneratedCodeInputChord(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSlateSettings @ 14272f080

void __cdecl EmptyLinkFunctionForGeneratedCodeSlateSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUICommandInfo @ 14272f090

void __cdecl EmptyLinkFunctionForGeneratedCodeUICommandInfo(void)

{
  return;
}

// GetConfigString @ 14273c320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl GetConfigString(wchar_t *param_1,FString *param_2,FString *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_158 [32];
  FString local_128;
  TStringView<wchar_t> local_118;
  FString local_108;
  undefined1 local_f8 [16];
  FRegexMatcher local_e8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TStringBuilderBase<wchar_t> local_88;
  wchar_t local_68 [16];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_158;
  pwVar5 = GetEditorLayoutsSectionName();
  bVar2 = FConfigCacheIni::GetString(GConfig,pwVar5,param_1,param_2,param_3);
  if (bVar2) {
    pFVar6 = FPaths::EngineUserLayoutDir((FString *)local_f8);
    iVar4 = 0;
    pwVar5 = L"";
    iVar3 = (pFVar6->Data).ArrayNum;
    if (iVar3 == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      iVar4 = iVar3 + -1;
    }
    bVar2 = FString::StartsWith(param_3,pwVar9,iVar4,IgnoreCase);
    if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f8._0_8_);
    }
    if (bVar2) {
      FString::FString((FString *)&local_118,L"\"\\w+\"");
      FRegexPattern::FRegexPattern((FRegexPattern *)local_f8,(FString *)&local_118,None);
      if ((FScriptContainerElement *)local_118.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.DataPtr);
      }
      FRegexMatcher::FRegexMatcher(&local_e8,(FRegexPattern *)local_f8,param_2);
      bVar2 = FRegexMatcher::FindNext(&local_e8);
      if (bVar2) {
        do {
          iVar3 = FRegexMatcher::GetMatchBeginning(&local_e8);
          iVar4 = FRegexMatcher::GetMatchEnding(&local_e8);
          bVar2 = FRegexMatcher::FindNext(&local_e8);
        } while (bVar2);
        if ((iVar3 != -1) && (iVar4 != -1)) {
          iVar7 = (param_2->Data).ArrayNum;
          iVar8 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar8 = 0;
          }
          iVar4 = (iVar8 - iVar4) + 1;
          if (iVar7 == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
          }
          iVar7 = iVar8;
          if (iVar4 < iVar8) {
            iVar7 = iVar4;
          }
          iVar4 = 0;
          if (0 < iVar7) {
            iVar4 = iVar7;
          }
          FString::FString(&local_a8,
                           (wchar_t *)((longlong)pwVar9 + ((longlong)iVar8 - (longlong)iVar4) * 2));
          pFVar6 = FPaths::GetBaseFilename(&local_98,param_3,true);
          local_118.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          iVar4 = (pFVar6->Data).ArrayNum;
          local_88.bIsDynamic = false;
          local_88.bIsExternal = false;
          local_118.Size = iVar4 + -1;
          if (iVar4 == 0) {
            local_118.Size = 0;
          }
          local_88.Base = local_68;
          local_88.CurPos = local_68;
          local_88.End = (wchar_t *)local_48;
          UE::String::PascalCaseTo(&local_118,&local_88);
          local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = 0;
          local_128.Data.ArrayMax = 0;
          pFVar6 = FString::ConstructFromPtrSize
                             ((FString *)&local_118,local_88.Base,
                              (int)((longlong)local_88.CurPos - (longlong)local_88.Base >> 1));
          if (&local_128 != pFVar6) {
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            local_128.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
            (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128.Data.ArrayNum = (pFVar6->Data).ArrayNum;
            local_128.Data.ArrayMax = (pFVar6->Data).ArrayMax;
            (pFVar6->Data).ArrayNum = 0;
            (pFVar6->Data).ArrayMax = 0;
          }
          if ((FScriptContainerElement *)local_118.DataPtr != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.DataPtr);
          }
          iVar4 = (param_2->Data).ArrayNum;
          iVar7 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar7 = 0;
          }
          if (iVar3 + 1 < iVar7) {
            iVar7 = iVar3 + 1;
          }
          iVar3 = 0;
          if (0 < iVar7) {
            iVar3 = iVar7;
          }
          if (iVar4 != 0) {
            pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
          }
          FString::ConstructFromPtrSize(&local_b8,pwVar5,iVar3);
          FString::ConcatFF(&local_c8,&local_b8,&local_128);
          FString::ConcatFF(&local_108,&local_c8,&local_a8);
          if (param_2 != &local_108) {
            pFVar1 = (param_2->Data).AllocatorInstance.Data;
            if (pFVar1 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar1);
            }
            (param_2->Data).AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
            (param_2->Data).ArrayNum = local_108.Data.ArrayNum;
            (param_2->Data).ArrayMax = local_108.Data.ArrayMax;
            local_108.Data.ArrayNum = 0;
            local_108.Data.ArrayMax = 0;
            local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_88);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.Implementation.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.Pattern.Implementation.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_f8._8_8_);
    }
    bVar2 = true;
  }
  else if ((param_4) &&
          (pwVar5 = GetEditorLayoutsSectionName(), pwVar5 != DefaultEditorLayoutsSectionName)) {
    bVar2 = FConfigCacheIni::GetString
                      (GConfig,DefaultEditorLayoutsSectionName,param_1,param_2,param_3);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// GetDropTarget @ 14273e210

/* WARNING: Enum "Type": Some values do not have unique names */

FDockTarget * __cdecl
GetDropTarget(FDockTarget *__return_storage_ptr__,TSharedPtr<SDockingNode,1> *param_1,
             FGeometry *param_2,FDragDropEvent *param_3)

{
  float fVar1;
  TReferenceControllerBase<1> *pTVar2;
  TTransform2<float> *pTVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_88;
  float fStack_84;
  TTransform2<float> local_80 [4];
  
  pTVar3 = Inverse<TTransform2<float>_>(local_80,&param_2->AccumulatedRenderTransform);
  fStack_84 = (float)((ulonglong)param_3->_padding_ >> 0x20);
  local_88 = (float)param_3->_padding_;
  fVar4 = fStack_84 * (pTVar3->M).M[1][0] + local_88 * (pTVar3->M).M[0][0] +
          (pTVar3->Trans).field0_0x0._s_0.X;
  fVar7 = local_88 * (pTVar3->M).M[0][1] + fStack_84 * (pTVar3->M).M[1][1] +
          (pTVar3->Trans).field0_0x0._s_0.Y;
  fVar1 = *(float *)&(param_2->Size).field_0x4;
  local_88 = SUB84(param_2->Size,0);
  fStack_84 = SUB84(param_2->Size,4);
  fVar10 = local_88 * __real_3e99999a;
  if (__real_43160000 <= local_88 * __real_3e99999a) {
    fVar10 = __real_43160000;
  }
  if (fVar10 <= __real_40a00000) {
    fVar10 = __real_40a00000;
  }
  fVar8 = fStack_84 * __real_3e99999a;
  if (__real_43160000 <= fStack_84 * __real_3e99999a) {
    fVar8 = __real_43160000;
  }
  dVar6 = (double)fVar4 / (double)*(float *)&param_2->Size;
  if (fVar8 <= __real_40a00000) {
    fVar8 = __real_40a00000;
  }
  dVar5 = (double)fVar7 / (double)fVar1;
  fVar9 = (float)(dVar5 * UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y +
                 dVar6 * UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X);
  if ((((fVar4 < fVar10) || (*(float *)&param_2->Size - fVar10 < fVar4)) || (fVar7 < fVar8)) ||
     (fVar1 - fVar8 < fVar7)) {
    (__return_storage_ptr__->TargetNode).Object = param_1->Object;
    fVar1 = __real_3f800000;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->TargetNode).WeakReferenceCount.ReferenceController = pTVar2;
    if ((float)(dVar5 / dVar6) <= fVar1) {
      if (fVar9 <= fVar1) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
          UNLOCK();
        }
        __return_storage_ptr__->DockDirection = Above;
      }
      else {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
          UNLOCK();
        }
        __return_storage_ptr__->DockDirection = RightOf;
      }
    }
    else if (fVar9 <= fVar1) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->DockDirection = LeftOf;
    }
    else {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->DockDirection = Below;
    }
  }
  else {
    (__return_storage_ptr__->TargetNode).Object = (SDockingNode *)0x0;
    (__return_storage_ptr__->TargetNode).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->DockDirection = LeftOf;
  }
  return __return_storage_ptr__;
}

// GetEditorLayoutsSectionName @ 14273e420

wchar_t * __cdecl GetEditorLayoutsSectionName(void)

{
  wchar_t *pwVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetEditorLayoutsSectionName'::__l2::
             _dynamic_atexit_destructor_for__EditorLayoutsSectionName__);
      _Init_thread_footer(&_TSS0);
    }
  }
  iVar2 = EditorLayoutsSectionName.Data.ArrayNum;
  if (iVar2 < 2) {
    FConfigCacheIni::GetString
              (GConfig,L"Slate",L"EditorLayoutsSectionName",&EditorLayoutsSectionName,&GEditorIni);
    FString::TrimStartAndEndInline(&EditorLayoutsSectionName);
    iVar2 = EditorLayoutsSectionName.Data.ArrayNum;
    if (iVar2 < 2) {
      FString::operator=(&EditorLayoutsSectionName,DefaultEditorLayoutsSectionName);
      iVar2 = EditorLayoutsSectionName.Data.ArrayNum;
    }
  }
  pwVar1 = L"";
  if (iVar2 != 0) {
    pwVar1 = (wchar_t *)EditorLayoutsSectionName.Data.AllocatorInstance.Data;
  }
  return pwVar1;
}

// GetLayoutJsonFileName @ 14273f730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl GetLayoutJsonFileName(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  size_t sVar3;
  undefined1 auStack_98 [32];
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FScriptContainerElement *local_48;
  int local_40;
  wchar_t *local_38;
  undefined4 local_30;
  FScriptContainerElement *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = FPaths::GetBaseFilename(&local_68,param_1,true);
  FString::ConcatFC(&local_78,pFVar2,L".json");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar2 = FApp::GetEpicProductIdentifier(&local_68);
  local_58.DataPtr = FWindowsPlatformProcess::UserSettingsDir();
  local_58.Size = 0;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar3 = wcslen(local_58.DataPtr);
    local_58.Size = (int)sVar3;
  }
  local_48 = (pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_30 = 6;
  local_40 = iVar1 + -1;
  if (iVar1 == 0) {
    local_40 = 0;
  }
  local_38 = L"Editor";
  local_28 = local_78.Data.AllocatorInstance.Data;
  local_20 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    local_20 = 0;
  }
  FPaths::CombineInternal(__return_storage_ptr__,&local_58,4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 142745040

uint __cdecl GetTypeHash(FUserDefinedChordKey *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = param_1->BindingContext;
  uVar3 = GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = param_1->CommandName;
  uVar4 = GetTypeHash(FVar2.ComparisonIndex.Value);
  return uVar4 + FVar2.Number ^ uVar3 + FVar1.Number;
}

// IsParentWidgetOf @ 14274d480

bool __cdecl IsParentWidgetOf(TSharedPtr<SWidget,1> *param_1,TSharedPtr<SWidget,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  
  if ((param_2->Object == (SWidget *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pSVar8 = param_2->Object;
  pSVar7 = (SWidget *)0x0;
  pTVar1 = (pSVar8->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
LAB_14274d4e2:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return false;
      }
      LOCK();
      aVar6 = pTVar1->SharedReferenceCount;
      bVar4 = aVar3 == aVar6;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar4);
    pSVar7 = (pSVar8->ParentWidgetPtr).Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pSVar7 == (SWidget *)0x0) {
    return false;
  }
  do {
    if (param_1->Object == pSVar7) {
      return true;
    }
    pSVar8 = (SWidget *)0x0;
    pTVar1 = (pSVar7->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar1->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) goto LAB_14274d4e2;
        LOCK();
        aVar6 = pTVar1->SharedReferenceCount;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      pSVar8 = (pSVar7->ParentWidgetPtr).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pSVar7 = pSVar8;
    if (pSVar8 == (SWidget *)0x0) {
      return false;
    }
  } while( true );
}

// IsTabPinned @ 14274e580

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsTabPinned(TSharedRef<SDockTab,1> *param_1)

{
  SDockingTabStack *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<SDockingTabStack,1> *pTVar5;
  FTabId *pFVar6;
  FName *pFVar7;
  FName *pFVar8;
  TSharedPtr<SDockingTabStack,1> local_48;
  FTabId local_38;
  FName local_28;
  undefined8 uStack_20;
  
  pTVar5 = SDockTab::GetParentDockTabStack(param_1->Object,&local_48);
  if ((pTVar5->Object == (SDockingTabStack *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pSVar1 = pTVar5->Object;
  pFVar6 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_38);
  local_28 = pFVar6->TabType;
  uStack_20._0_4_ = pFVar6->InstanceId;
  uStack_20._4_1_ = pFVar6->Flags;
  uStack_20._5_3_ = *(undefined3 *)&pFVar6->field_0xd;
  pFVar7 = (FName *)(pSVar1->Tabs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)(pSVar1->Tabs).ArrayNum * 4;
  do {
    if (pFVar7 == pFVar8) {
      uVar4 = 0;
LAB_14274e625:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return (bool)uVar4;
    }
    if ((((pFVar7[2].ComparisonIndex.Value & 7) != 0) && (*pFVar7 == local_28)) &&
       (((undefined4)uStack_20 == 0xffffffff ||
        ((undefined4)uStack_20 == pFVar7[1].ComparisonIndex.Value)))) {
      uVar4 = (undefined1)pFVar7[3].Number;
      goto LAB_14274e625;
    }
    pFVar7 = pFVar7 + 4;
  } while( true );
}

// LoadJsonFile @ 1427517c0

TSharedPtr<FJsonObject,1> * __cdecl
LoadJsonFile(TSharedPtr<FJsonObject,1> *__return_storage_ptr__,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar3;
  wchar_t *pwVar4;
  FString local_38;
  TSharedRef<TJsonReader<wchar_t>,1> local_28;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_18;
  
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FFileHelper::LoadFileToString(&local_38,pwVar4,None,0);
  if (bVar2) {
    pTVar3 = TJsonStringReader<wchar_t>::Create(&local_18,&local_38);
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    local_28.Object = (TJsonReader<wchar_t> *)pTVar3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
              (&local_28,__return_storage_ptr__,None);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LoadLayoutFromJson @ 142751bc0

bool __cdecl
LoadLayoutFromJson(FString *param_1,FString *param_2,TSharedPtr<FTabManager::FLayout,1> *param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TJsonStringReader<wchar_t> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar7;
  TSharedPtr<FTabManager::FLayout,1> *pTVar8;
  ForAnyElementType FVar9;
  TSharedPtr<FJsonObject,1> *local_res20;
  FString local_c8;
  TSharedPtr<FJsonObject,1> local_b8;
  StackState local_a8;
  FString local_70;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_48;
  TStringView<wchar_t> local_38;
  TSharedPtr<FTabManager::FLayout,1> local_28;
  
  GetLayoutJsonFileName(&local_70,param_1);
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    FVar9.Data = local_70.Data.AllocatorInstance.Data;
  }
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_b8.Object = (FJsonObject *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar5 = FFileHelper::LoadFileToString(&local_c8,(wchar_t *)FVar9.Data,None,0);
  if (bVar5) {
    pTVar7 = TJsonStringReader<wchar_t>::Create(&local_48,&local_c8);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar3 = pTVar7->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    local_a8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Identifier.Data.ArrayNum = 0;
    local_a8.Identifier.Data.ArrayMax = 0;
    local_a8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Array.ArrayNum = 0;
    local_a8.Array.ArrayMax = 0;
    local_a8.Object.Object = (FJsonObject *)0x0;
    local_a8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar3,&local_a8,None);
    if (bVar5) {
      FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_a8,&local_b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
               local_a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a8.Array.AllocatorInstance.Data);
    }
    if (local_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Identifier.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Object != (FJsonObject *)0x0) {
    local_res20 = (TSharedPtr<FJsonObject,1> *)0x0;
    if ((local_b8.Object == (FJsonObject *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_58 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_50 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_50 = 0;
    }
    local_38._12_4_ = uStack_4c;
    local_38.Size = iStack_50;
    local_38.DataPtr = (wchar_t *)local_58;
    bVar5 = FJsonObject::TryGetObjectField(local_b8.Object,&local_38,&local_res20);
    if (bVar5) {
      pTVar8 = FTabManager::FLayout::NewFromJson(&local_28,local_res20);
      if (param_3 != pTVar8) {
        param_3->Object = pTVar8->Object;
        pTVar8->Object = (FLayout *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_3->SharedReferenceCount,&pTVar8->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      bVar5 = true;
      goto LAB_142751d8a;
    }
  }
  bVar5 = false;
LAB_142751d8a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// MakeUICommand_InternalUseOnly @ 14275ad70

void __cdecl
MakeUICommand_InternalUseOnly
          (FBindingContext *param_1,TSharedPtr<FUICommandInfo,1> *param_2,wchar_t *param_3,
          wchar_t *param_4,wchar_t *param_5,char *param_6,wchar_t *param_7,wchar_t *param_8,
          EUserInterfaceActionType param_9,FInputChord *param_10,FInputChord *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  size_t sVar4;
  FString *pFVar5;
  FSlateIcon *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FName *pFVar9;
  TSharedRef<FBindingContext,1> *pTVar10;
  ForAnyElementType FVar11;
  int iVar12;
  FName FVar13;
  FTextKey local_res8 [2];
  FTextKey local_res18 [4];
  FName local_118;
  int local_110;
  int local_10c;
  FString local_108;
  FTextKey local_f8 [2];
  FString local_f0;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TSharedRef<FBindingContext,1> local_90;
  FText local_80;
  FText local_70;
  FSlateIcon local_60;
  
  local_res8[0].Index = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FString::FString(&UICommandsStr,L"UICommands");
    atexit(`MakeUICommand_InternalUseOnly'::__l2::_dynamic_atexit_destructor_for__UICommandsStr__);
    _Init_thread_footer(&_TSS0);
  }
  if ((param_3 == (wchar_t *)0x0) || (sVar4 = wcslen(param_3), (int)sVar4 < 1)) {
    FVar11.Data = UICommandsStr.Data.AllocatorInstance.Data;
    local_118.ComparisonIndex.Value = 0;
    local_118.Number = 0;
    iVar12 = UICommandsStr.Data.ArrayNum;
    local_110 = iVar12;
    if (iVar12 == 0) {
      local_10c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar12,0,(ForAnyElementType *)&local_118,iVar12,&local_10c);
      memcpy((void *)local_118,FVar11.Data,(longlong)iVar12 * 2);
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
    FVar13 = local_118;
    iVar12 = local_110;
  }
  else {
    FString::ConcatFC(&local_f0,&UICommandsStr,L".");
    FString::ConcatFC(&local_c0,&local_f0,param_3);
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    FVar13 = (FName)local_c0.Data.AllocatorInstance.Data;
    iVar12 = local_c0.Data.ArrayNum;
  }
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = iVar12;
  if (iVar12 == 0) {
    local_108.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar12,0,(ForAnyElementType *)&local_108,iVar12,&local_108.Data.ArrayMax);
    memcpy(local_108.Data.AllocatorInstance.Data,(void *)FVar13,(longlong)iVar12 * 2);
  }
  if ((bVar1) && (local_118 != (FName)0x0)) {
    FMemory::Free((void *)local_118);
  }
  if ((bVar2) && ((FName)local_c0.Data.AllocatorInstance.Data != (FName)0x0)) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  local_c0.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&param_1->ContextName;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar13 = (FName)local_c0.Data.AllocatorInstance.Data;
  if (param_6 != (char *)0x0) {
    FString::FString(&local_b0,param_6);
    pFVar5 = FName::ToString((FName *)&local_c0,&local_a0);
    FString::ConcatFF(&local_f0,pFVar5,&local_b0);
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_f0.Data.ArrayNum != 0) {
      FVar11.Data = local_f0.Data.AllocatorInstance.Data;
    }
    FName::FName(&local_e0,(wchar_t *)FVar11.Data);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    FVar13 = local_e0;
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      FVar13 = local_e0;
    }
  }
  local_e0 = FVar13;
  pFVar6 = FSlateIcon::FSlateIcon(&local_60,param_1->StyleSetName,local_e0,local_d0,local_d8);
  FTextKey::FTextKey((FTextKey *)&param_6,param_5);
  FTextKey::FTextKey(local_res8,&local_108);
  pFVar7 = FText::AsLocalizable_Advanced(&local_70,local_res8,(FTextKey *)&param_6,param_8);
  FTextKey::FTextKey(local_res18,param_4);
  FTextKey::FTextKey(local_f8,&local_108);
  pFVar8 = FText::AsLocalizable_Advanced(&local_80,local_f8,local_res18,param_7);
  pFVar9 = FName::FName(&local_118,param_4);
  FVar13 = *pFVar9;
  pTVar10 = TSharedFromThis<FBindingContext,1>::AsShared
                      ((TSharedFromThis<FBindingContext,1> *)param_1,&local_90);
  FUICommandInfo::MakeCommandInfo
            (pTVar10,param_2,FVar13,pFVar8,pFVar7,pFVar6,param_9,param_10,param_11,local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return;
}

// SaveJsonFile @ 142782e70

bool __cdecl SaveJsonFile(FString *param_1,TSharedPtr<FJsonObject,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IFileManager *pIVar6;
  wchar_t *pwVar7;
  FString local_78;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_68;
  TSharedPtr<FJsonObject,1> local_58;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_68,&local_78,0);
  pwVar7 = L"";
  if (param_2->Object == (FJsonObject *)0x0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FJsonObject *)0x0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pFVar2;
  local_58.SharedReferenceCount.ReferenceController = pTVar1;
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
            (&local_48,&local_58);
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_48,local_68.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar4) {
    pIVar6 = IFileManager::Get();
    if ((param_1->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_38 = local_78.Data.AllocatorInstance.Data;
    iStack_30 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iStack_30 = 0;
    }
    local_28._12_4_ = uStack_2c;
    local_28.Size = iStack_30;
    local_28.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    bVar4 = FFileHelper::SaveStringToFile(&local_28,pwVar7,AutoDetect,pIVar6,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    bVar4 = false;
  }
  return bVar4;
}

// SaveLayoutToJson @ 142783030

void __cdecl SaveLayoutToJson(FString *param_1,TSharedRef<FTabManager::FLayout,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  FJsonObject *this;
  bool bVar4;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar5;
  TSharedRef<FJsonObject,1> *pTVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  TSharedPtr<FJsonObject,1> local_f8;
  FString local_e8;
  StackState local_d8;
  FString local_a0;
  undefined8 local_90;
  FSharedReferencer<1> local_88;
  TSharedPtr<FJsonObject,1> local_80;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_70;
  TSharedRef<FJsonObject,1> local_60;
  FString local_50;
  TSharedRef<FJsonObject,1> local_40;
  TSharedPtr<FJsonObject,1> local_28;
  
  GetLayoutJsonFileName(&local_a0,param_1);
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar8.Data = local_a0.Data.AllocatorInstance.Data;
  }
  local_f8.Object = (FJsonObject *)0x0;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  bVar4 = FFileHelper::LoadFileToString(&local_e8,(wchar_t *)FVar8.Data,None,0);
  if (bVar4) {
    pTVar5 = TJsonStringReader<wchar_t>::Create(&local_70,&local_e8);
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar5->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    local_d8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Identifier.Data.ArrayNum = 0;
    local_d8.Identifier.Data.ArrayMax = 0;
    local_d8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Array.ArrayNum = 0;
    local_d8.Array.ArrayMax = 0;
    local_d8.Object.Object = (FJsonObject *)0x0;
    local_d8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_d8,None);
    if (bVar4) {
      FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_d8,&local_f8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data,
               local_d8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_d8.Array.AllocatorInstance.Data);
    }
    if (local_d8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Identifier.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_f8.Object == (FJsonObject *)0x0) {
    pTVar6 = MakeShared<FJsonObject,1>(&local_60);
    local_88.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_f8.Object = pTVar6->Object;
    if (local_88.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_88.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_90 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_f8.SharedReferenceCount,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
    if (local_f8.Object == (FJsonObject *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  this = local_f8.Object;
  pTVar6 = FTabManager::FLayout::ToJson(param_2->Object,&local_40);
  local_80.Object = pTVar6->Object;
  local_80.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10 = param_2->Object->LayoutName;
  pFVar7 = FName::ToString(&local_res10,&local_50);
  FJsonObject::SetObjectField(this,pFVar7,&local_80);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  local_28.Object = local_f8.Object;
  local_28.SharedReferenceCount.ReferenceController =
       local_f8.SharedReferenceCount.ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SaveJsonFile(&local_a0,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTabPinned @ 1427871c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SetTabPinned(TSharedRef<SDockTab,1> *param_1,bool param_2)

{
  SDockingTabStack *pSVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<SDockingTabStack,1> *pTVar4;
  FTabId *pFVar5;
  FName *pFVar6;
  FName *pFVar7;
  TSharedPtr<SDockingTabStack,1> local_48;
  FTabId local_38;
  FName local_28;
  undefined8 uStack_20;
  
  pTVar4 = SDockTab::GetParentDockTabStack(param_1->Object,&local_48);
  if ((pTVar4->Object == (SDockingTabStack *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar1 = pTVar4->Object;
  pFVar5 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_38);
  local_28 = pFVar5->TabType;
  uStack_20._0_4_ = pFVar5->InstanceId;
  uStack_20._4_1_ = pFVar5->Flags;
  uStack_20._5_3_ = *(undefined3 *)&pFVar5->field_0xd;
  pFVar6 = (FName *)(pSVar1->Tabs).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)(pSVar1->Tabs).ArrayNum * 4;
  do {
    if (pFVar6 == pFVar7) {
LAB_142787274:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    if ((((pFVar6[2].ComparisonIndex.Value & 7) != 0) && (*pFVar6 == local_28)) &&
       (((undefined4)uStack_20 == 0xffffffff ||
        ((undefined4)uStack_20 == pFVar6[1].ComparisonIndex.Value)))) {
      *(bool *)&pFVar6[3].Number = param_2;
      goto LAB_142787274;
    }
    pFVar6 = pFVar6 + 4;
  } while( true );
}

// SetWindowVisibility @ 142787c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetWindowVisibility(TArray<TWeakPtr<SDockingArea,1>,TSizedDefaultAllocator<32>_> *param_1,
                   bool param_2)

{
  FScriptContainerElement *pFVar1;
  SWindow *pSVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  atomic<int> aVar6;
  bool bVar7;
  uint uVar8;
  atomic<int> aVar9;
  SWindow **ppSVar10;
  SWindow *this;
  TReferenceControllerBase<1> *pTVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  SWindow *local_48;
  TReferenceControllerBase<1> *local_40;
  SWindow *local_38;
  TReferenceControllerBase<1> *local_30;
  
  iVar13 = param_1->ArrayNum;
  bVar5 = false;
  bVar4 = false;
  uVar14 = 0;
  if (0 < iVar13) {
    lVar15 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar14 < iVar13) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      lVar12 = 0;
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar15 + 8);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_142787cf6:
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        aVar6 = pTVar11->SharedReferenceCount;
        do {
          if (aVar6 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142787cf6;
          }
          LOCK();
          aVar9 = pTVar11->SharedReferenceCount;
          bVar7 = aVar6 == aVar9;
          if (bVar7) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar9 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar9;
        } while (!bVar7);
        lVar12 = *(longlong *)(pFVar1 + lVar15);
        if (lVar12 == 0) goto LAB_142787cf6;
      }
      if (((*(longlong *)(lVar12 + 0x300) == 0) || (*(longlong *)(lVar12 + 0x308) == 0)) ||
         (*(int *)(*(longlong *)(lVar12 + 0x308) + 8) < 1)) {
        bVar4 = true;
        local_30 = (TReferenceControllerBase<1> *)0x0;
        this = (SWindow *)0x0;
        ppSVar10 = &local_38;
      }
      else {
        local_40 = *(TReferenceControllerBase<1> **)(lVar12 + 0x308);
        this = (SWindow *)0x0;
        bVar5 = true;
        local_48 = (SWindow *)0x0;
        if (local_40 == (TReferenceControllerBase<1> *)0x0) {
LAB_142787d73:
          ppSVar10 = &local_48;
        }
        else {
          aVar6 = local_40->SharedReferenceCount;
          do {
            if (aVar6 == (atomic<int>)0x0) {
              local_40 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_142787d73;
            }
            LOCK();
            aVar9 = local_40->SharedReferenceCount;
            bVar7 = aVar6 == aVar9;
            if (bVar7) {
              local_40->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
              aVar9 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar9;
          } while (!bVar7);
          this = *(SWindow **)(lVar12 + 0x300);
          ppSVar10 = &local_48;
          local_48 = this;
        }
      }
      pSVar2 = ppSVar10[1];
      ppSVar10[1] = (SWindow *)0x0;
      *ppSVar10 = (SWindow *)0x0;
      if (bVar4) {
        bVar4 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
      if (bVar5) {
        bVar5 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      if (this != (SWindow *)0x0) {
        if (param_2) {
          SWindow::ShowWindow(this);
        }
        else {
          SWindow::HideWindow(this);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar2);
      iVar13 = param_1->ArrayNum;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x10;
    } while ((int)uVar14 < iVar13);
  }
  return;
}

// StringFromTabState @ 14278c270

FString * __cdecl StringFromTabState(FString *__return_storage_ptr__,Type param_1)

{
  ForAnyElementType FVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  int *piVar4;
  ForAnyElementType _Src;
  int iVar5;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar3 = UE_TABMANAGER_INVALID_TAB_STRING.Data.AllocatorInstance;
  FVar2 = UE_TABMANAGER_SIDEBAR_TAB_STRING.Data.AllocatorInstance;
  FVar1 = UE_TABMANAGER_CLOSED_TAB_STRING.Data.AllocatorInstance;
  _Src = UE_TABMANAGER_OPENED_TAB_STRING.Data.AllocatorInstance;
  piVar4 = &(__return_storage_ptr__->Data).ArrayMax;
  if (param_1 == OpenedTab) {
    iVar5 = UE_TABMANAGER_OPENED_TAB_STRING.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayNum = iVar5;
    if (iVar5 == 0) {
      *piVar4 = 0;
      return __return_storage_ptr__;
    }
  }
  else if (param_1 == ClosedTab) {
    iVar5 = UE_TABMANAGER_CLOSED_TAB_STRING.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayNum = iVar5;
    _Src = FVar1;
    if (iVar5 == 0) {
      *piVar4 = 0;
      return __return_storage_ptr__;
    }
  }
  else if (param_1 == SidebarTab) {
    iVar5 = UE_TABMANAGER_SIDEBAR_TAB_STRING.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayNum = iVar5;
    _Src = FVar2;
    if (iVar5 == 0) {
      *piVar4 = 0;
      return __return_storage_ptr__;
    }
  }
  else {
    iVar5 = UE_TABMANAGER_INVALID_TAB_STRING.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayNum = iVar5;
    _Src = FVar3;
    if (iVar5 == 0) {
      *piVar4 = 0;
      return __return_storage_ptr__;
    }
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar5,0,(ForAnyElementType *)__return_storage_ptr__,iVar5,piVar4);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar5 * 2);
  return __return_storage_ptr__;
}

// Z_Construct_UClass_USlateSettings_NoRegister @ 142794520

UClass * __cdecl Z_Construct_UClass_USlateSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Slate",L"SlateSettings",
               &Z_Registration_Info_UClass_USlateSettings.InnerSingleton,
               USlateSettings::StaticRegisterNativesUSlateSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateSettings>,InternalVTableHelperCtorCaller<USlateSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateSettings.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex @ 1427945d0

UEnum * __cdecl Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex(void)

{
  if (Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.InnerSingleton,
               &Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EUserInterfaceActionType @ 142794610

UEnum * __cdecl Z_Construct_UEnum_Slate_EUserInterfaceActionType(void)

{
  if (Z_Registration_Info_UEnum_EUserInterfaceActionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUserInterfaceActionType.InnerSingleton,
               &Z_Construct_UEnum_Slate_EUserInterfaceActionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUserInterfaceActionType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FInputChord @ 142794650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputChord(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputChord.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputChord.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputChord_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputChord.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputChord.InnerSingleton;
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

// CommandsChanged'' @ 15035c410

void __cdecl `dynamic_atexit_destructor_for_'FBindingContext::CommandsChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FBindingContext::CommandsChanged._8_8_,FBindingContext::CommandsChanged._16_4_);
  if (FBindingContext::CommandsChanged._8_8_ != 0) {
    FMemory::Free((void *)FBindingContext::CommandsChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FBindingContext::CommandsChanged);
  return;
}

// DefaultTabWindowSizeMap'' @ 15035c450

void __cdecl `dynamic_atexit_destructor_for_'FTabManager::DefaultTabWindowSizeMap__(void)

{
  FTabManager::DefaultTabWindowSizeMap._72_4_ = 0;
  if (FTabManager::DefaultTabWindowSizeMap._64_8_ != 0) {
    FMemory::Free((void *)FTabManager::DefaultTabWindowSizeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FTabId,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTabId,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTabId,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FTabManager::DefaultTabWindowSizeMap);
  return;
}

// NullLayout'' @ 15035c490

void __cdecl `dynamic_atexit_destructor_for_'FTabManager::FLayout::NullLayout__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FTabManager::FLayout::NullLayout.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowTooltipsWhileMouseDown'' @ 15035c4b0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowTooltipsWhileMouseDown__(void)

{
  CVarAllowTooltipsWhileMouseDown._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowTooltipsWhileMouseDown);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowTooltipsWithHiddenCursor'' @ 15035c4d0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowTooltipsWithHiddenCursor__(void)

{
  CVarAllowTooltipsWithHiddenCursor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowTooltipsWithHiddenCursor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCursorSignificantMoveDetectionThreshold'' @ 15035c4f0

void __cdecl _dynamic_atexit_destructor_for__CVarCursorSignificantMoveDetectionThreshold__(void)

{
  CVarCursorSignificantMoveDetectionThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCursorSignificantMoveDetectionThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableCursorQueries'' @ 15035c510

void __cdecl _dynamic_atexit_destructor_for__CVarEnableCursorQueries__(void)

{
  CVarEnableCursorQueries._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableCursorQueries);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableSyntheticCursorMoves'' @ 15035c530

void __cdecl _dynamic_atexit_destructor_for__CVarEnableSyntheticCursorMoves__(void)

{
  CVarEnableSyntheticCursorMoves._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableSyntheticCursorMoves);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNoAnimationOnTabForegroundedEvent'' @ 15035c550

void __cdecl
UE::Slate::Private::_dynamic_atexit_destructor_for__CVarNoAnimationOnTabForegroundedEvent__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNoAnimationOnTabForegroundedEvent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPanelDrawerToggle'' @ 15035c570

void __cdecl _dynamic_atexit_destructor_for__CVarPanelDrawerToggle__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPanelDrawerToggle);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoftwareCursorScale'' @ 15035c590

void __cdecl _dynamic_atexit_destructor_for__CVarSoftwareCursorScale__(void)

{
  CVarSoftwareCursorScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSoftwareCursorScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTooltipIntroDuration'' @ 15035c5b0

void __cdecl _dynamic_atexit_destructor_for__CVarTooltipIntroDuration__(void)

{
  CVarTooltipIntroDuration._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTooltipIntroDuration);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTooltipSummonDelay'' @ 15035c5d0

void __cdecl _dynamic_atexit_destructor_for__CVarTooltipSummonDelay__(void)

{
  CVarTooltipSummonDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTooltipSummonDelay);
  return;
}

// `dynamic_atexit_destructor_for_'EditorLayoutsSectionName'' @ 15035c5f0

void __cdecl
`GetEditorLayoutsSectionName'::__l2::_dynamic_atexit_destructor_for__EditorLayoutsSectionName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EditorLayoutsSectionName.Data.AllocatorInstance.Data;
  if (EditorLayoutsSectionName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EditorLayoutsSectionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GradientStops'' @ 15035c610

void __cdecl
`STabDrawerButton::Construct'::__l2::_dynamic_atexit_destructor_for__GradientStops__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
               ::__l2::GradientStops.AllocatorInstance.Data;
  if (`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
      ::__l2::GradientStops.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
      ::__l2::GradientStops.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GradientStops'' @ 15035c630

void __cdecl
`UE::Slate::Private::STabPanelDrawer::Construct'::__l2::
_dynamic_atexit_destructor_for__GradientStops__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GradientStops.AllocatorInstance.Data;
  if (GradientStops.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GradientStops.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IniSectionAdditionalConfig'' @ 15035c650

void __cdecl
`FLayoutSaveRestore::GetAdditionalLayoutConfigIni'::__l2::
_dynamic_atexit_destructor_for__IniSectionAdditionalConfig__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IniSectionAdditionalConfig.Data.AllocatorInstance.Data;
  if (IniSectionAdditionalConfig.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IniSectionAdditionalConfig.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Inst'' @ 15035c670

void __cdecl
`TCommands<FGenericCommands>::GetInstance'::__l2::_dynamic_atexit_destructor_for__Inst__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController = Inst.WeakReferenceCount.ReferenceController;
  if (Inst.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Inst.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00015035c693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15035c6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `FGlobalTabmanager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Instance.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15035c6c0

void __cdecl `FInputBindingManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  FInputBindingManager::~FInputBindingManager(&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'LogLayoutService'' @ 15035c6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLayoutService__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLayoutService);
  return;
}

// `dynamic_atexit_destructor_for_'LogTabManager'' @ 15035c700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTabManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTabManager);
  return;
}

// `dynamic_atexit_destructor_for_'NullSlot'' @ 15035c720

void __cdecl
`TSlotlessChildren<SDockTab>::GetSlotAt'::__l2::_dynamic_atexit_destructor_for__NullSlot__(void)

{
  FSlotBase::~FSlotBase
            ((FSlotBase *)
             &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SDockTab>::GetSlotAt(int)const___ptr64'
              ::__l2::NullSlot);
  return;
}

// `dynamic_atexit_destructor_for_'Orient_Horizontal_Str'' @ 15035c740

void __cdecl
``FTabManager::FLayout::NewFromString_Helper'::__l2::local::OrientationFromString'::__l2::
_dynamic_atexit_destructor_for__Orient_Horizontal_Str__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Orient_Horizontal_Str.Data.AllocatorInstance.Data;
  if (Orient_Horizontal_Str.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Orient_Horizontal_Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Orient_Vertical_Str'' @ 15035c760

void __cdecl
``FTabManager::FLayout::NewFromString_Helper'::__l2::local::OrientationFromString'::__l2::
_dynamic_atexit_destructor_for__Orient_Vertical_Str__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Orient_Vertical_Str.Data.AllocatorInstance.Data;
  if (Orient_Vertical_Str.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Orient_Vertical_Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Placement_Automatic_Str'' @ 15035c780

void __cdecl
``FTabManager::FLayout::NewFromString_Helper'::__l2::local::PlacementFromString'::__l2::
_dynamic_atexit_destructor_for__Placement_Automatic_Str__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Placement_Automatic_Str.Data.AllocatorInstance.Data;
  if (Placement_Automatic_Str.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Placement_Automatic_Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Placement_NoWindow_Str'' @ 15035c7a0

void __cdecl
``FTabManager::FLayout::NewFromString_Helper'::__l2::local::PlacementFromString'::__l2::
_dynamic_atexit_destructor_for__Placement_NoWindow_Str__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Placement_NoWindow_Str.Data.AllocatorInstance.Data;
  if (Placement_NoWindow_Str.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Placement_NoWindow_Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Placement_Specified_Str'' @ 15035c7c0

void __cdecl
``FTabManager::FLayout::NewFromString_Helper'::__l2::local::PlacementFromString'::__l2::
_dynamic_atexit_destructor_for__Placement_Specified_Str__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Placement_Specified_Str.Data.AllocatorInstance.Data;
  if (Placement_Specified_Str.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Placement_Specified_Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Type'' @ 15035c7e0

void __cdecl `FDockingDragOperation::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString_const&___ptr64___cdecl_FDockingDragOperation::GetTypeId(void)'
               ::__l2::Type.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FDockingDragOperation::GetTypeId(void)'::
      __l2::Type.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString_const&___ptr64___cdecl_FDockingDragOperation::GetTypeId(void)'::
      __l2::Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Type'' @ 15035c800

void __cdecl `FUICommandDragDropOp::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'
               ::__l2::Type.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'::
      __l2::Type.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString_const&___ptr64___cdecl_FUICommandDragDropOp::GetTypeId(void)'::
      __l2::Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'UE_TABMANAGER_CLOSED_TAB_STRING'' @ 15035c820

void __cdecl _dynamic_atexit_destructor_for__UE_TABMANAGER_CLOSED_TAB_STRING__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE_TABMANAGER_CLOSED_TAB_STRING.Data.AllocatorInstance.Data;
  if (UE_TABMANAGER_CLOSED_TAB_STRING.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (UE_TABMANAGER_CLOSED_TAB_STRING.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'UE_TABMANAGER_INVALID_TAB_STRING'' @ 15035c840

void __cdecl _dynamic_atexit_destructor_for__UE_TABMANAGER_INVALID_TAB_STRING__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE_TABMANAGER_INVALID_TAB_STRING.Data.AllocatorInstance.Data;
  if (UE_TABMANAGER_INVALID_TAB_STRING.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (UE_TABMANAGER_INVALID_TAB_STRING.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'UE_TABMANAGER_OPENED_TAB_STRING'' @ 15035c860

void __cdecl _dynamic_atexit_destructor_for__UE_TABMANAGER_OPENED_TAB_STRING__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE_TABMANAGER_OPENED_TAB_STRING.Data.AllocatorInstance.Data;
  if (UE_TABMANAGER_OPENED_TAB_STRING.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (UE_TABMANAGER_OPENED_TAB_STRING.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'UE_TABMANAGER_SIDEBAR_TAB_STRING'' @ 15035c880

void __cdecl _dynamic_atexit_destructor_for__UE_TABMANAGER_SIDEBAR_TAB_STRING__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE_TABMANAGER_SIDEBAR_TAB_STRING.Data.AllocatorInstance.Data;
  if (UE_TABMANAGER_SIDEBAR_TAB_STRING.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (UE_TABMANAGER_SIDEBAR_TAB_STRING.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'UICommandsStr'' @ 15035c8a0

void __cdecl
`MakeUICommand_InternalUseOnly'::__l2::_dynamic_atexit_destructor_for__UICommandsStr__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UICommandsStr.Data.AllocatorInstance.Data;
  if (UICommandsStr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UICommandsStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035c8c0

void __cdecl
`SBorder::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// operator() @ 150493180

bool __thiscall `TabStateFromString'::__l19::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6813193255430127502>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6813193255430127502>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

