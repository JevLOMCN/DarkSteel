// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 237

// OnPostRuntimeValidationInstanceData'' @ 1413cd5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FStateTreeModule::OnPostRuntimeValidationInstanceData__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FStateTreeModule::OnPostRuntimeValidationInstanceData,4000);
  FStateTreeModule::OnPostRuntimeValidationInstanceData._48_8_ =
       ___xmm_00000000000000020000000000000000;
  FStateTreeModule::OnPostRuntimeValidationInstanceData._56_8_ = _UNK_150631d48;
  FStateTreeModule::OnPostRuntimeValidationInstanceData._40_8_ = 0;
  atexit(`dynamic_atexit_destructor_for_'FStateTreeModule::OnPostRuntimeValidationInstanceData__);
  return;
}

// OnPreRuntimeValidationInstanceData'' @ 1413cd640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FStateTreeModule::OnPreRuntimeValidationInstanceData__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FStateTreeModule::OnPreRuntimeValidationInstanceData,4000);
  FStateTreeModule::OnPreRuntimeValidationInstanceData._48_8_ =
       ___xmm_00000000000000020000000000000000;
  FStateTreeModule::OnPreRuntimeValidationInstanceData._56_8_ = _UNK_150631d48;
  FStateTreeModule::OnPreRuntimeValidationInstanceData._40_8_ = 0;
  atexit(`dynamic_atexit_destructor_for_'FStateTreeModule::OnPreRuntimeValidationInstanceData__);
  return;
}

// `dynamic_initializer_for_'Blue'' @ 1413cd690

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__Blue__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"#649ED3");
  FColor::FromHex((FString *)&Blue);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'Bronze'' @ 1413cd6d0

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__Bronze__(void)

{
  Bronze = FColorList::Bronze;
  return;
}

// `dynamic_initializer_for_'CVarCompletedStateBeforeTransitionSourceFailsTransition'' @ 1413cd6f0

void __cdecl
UE::StateTree::Private::
_dynamic_initializer_for__CVarCompletedStateBeforeTransitionSourceFailsTransition__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCompletedStateBeforeTransitionSourceFailsTransition,
             L"StateTree.SelectState.CompletedStateBeforeTransitionSourceFailsTransition",
             &bCompletedStateBeforeTransitionSourceFailsTransition,
             L"Activate the EStateTreeStateSelectionRules::CompletedStateBeforeTransitionSourceFailsTransition rule."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCompletedStateBeforeTransitionSourceFailsTransition__);
  return;
}

// `dynamic_initializer_for_'CVarCompletedTransitionStatesCreateNewStates'' @ 1413cd740

void __cdecl
UE::StateTree::Private::_dynamic_initializer_for__CVarCompletedTransitionStatesCreateNewStates__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCompletedTransitionStatesCreateNewStates,
             L"StateTree.SelectState.CompletedTransitionStatesCreateNewStates",
             &bCompletedTransitionStatesCreateNewStates,
             L"Activate the EStateTreeStateSelectionRules::CompletedTransitionStatesCreateNewStates rule."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCompletedTransitionStatesCreateNewStates__);
  return;
}

// `dynamic_initializer_for_'CVarRuntimeValidationInstanceDataGC'' @ 1413cd790

void __cdecl
UE::StateTree::Debug::Private::_dynamic_initializer_for__CVarRuntimeValidationInstanceDataGC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRuntimeValidationInstanceDataGC,L"StateTree.RuntimeValidation.InstanceDataGC",
             &bRuntimeValidationInstanceDataGC,L"Test after each GC if nodes were properly GCed.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarRuntimeValidationInstanceDataGC__);
  return;
}

// `dynamic_initializer_for_'Cyan'' @ 1413cd7e0

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__Cyan__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"#56C3BD");
  FColor::FromHex((FString *)&Cyan);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'DarkBlue'' @ 1413cd820

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__DarkBlue__(void)

{
  DarkBlue.field0_0x0._s_0.B = (uchar)((((uint)Blue.field0_0x0 & 0xff) * 0x99) / 0xff);
  DarkBlue.field0_0x0._s_0.G = (uchar)((((uint)Blue.field0_0x0 >> 8 & 0xff) * 0x99) / 0xff);
  DarkBlue.field0_0x0._s_0.A = Blue.field0_0x0._3_1_;
  DarkBlue.field0_0x0._s_0.R = (uchar)((((uint)Blue.field0_0x0 >> 0x10 & 0xff) * 0x99) / 0xff);
  return;
}

// `dynamic_initializer_for_'DarkBronze'' @ 1413cd8b0

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__DarkBronze__(void)

{
  DarkBronze.field0_0x0._s_0.B = (uchar)((((uint)Bronze.field0_0x0 & 0xff) * 0x99) / 0xff);
  DarkBronze.field0_0x0._s_0.G = (uchar)((((uint)Bronze.field0_0x0 >> 8 & 0xff) * 0x99) / 0xff);
  DarkBronze.field0_0x0._s_0.A = Bronze.field0_0x0._3_1_;
  DarkBronze.field0_0x0._s_0.R = (uchar)((((uint)Bronze.field0_0x0 >> 0x10 & 0xff) * 0x99) / 0xff);
  return;
}

// `dynamic_initializer_for_'DarkCyan'' @ 1413cd940

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__DarkCyan__(void)

{
  DarkCyan.field0_0x0._s_0.B = (uchar)((((uint)Cyan.field0_0x0 & 0xff) * 0x99) / 0xff);
  DarkCyan.field0_0x0._s_0.G = (uchar)((((uint)Cyan.field0_0x0 >> 8 & 0xff) * 0x99) / 0xff);
  DarkCyan.field0_0x0._s_0.A = Cyan.field0_0x0._3_1_;
  DarkCyan.field0_0x0._s_0.R = (uchar)((((uint)Cyan.field0_0x0 >> 0x10 & 0xff) * 0x99) / 0xff);
  return;
}

// `dynamic_initializer_for_'DarkGreen'' @ 1413cd9d0

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__DarkGreen__(void)

{
  DarkGreen.field0_0x0._s_0.B = (uchar)((((uint)Green.field0_0x0 & 0xff) * 0x99) / 0xff);
  DarkGreen.field0_0x0._s_0.G = (uchar)((((uint)Green.field0_0x0 >> 8 & 0xff) * 0x99) / 0xff);
  DarkGreen.field0_0x0._s_0.A = Green.field0_0x0._3_1_;
  DarkGreen.field0_0x0._s_0.R = (uchar)((((uint)Green.field0_0x0 >> 0x10 & 0xff) * 0x99) / 0xff);
  return;
}

// `dynamic_initializer_for_'DarkGrey'' @ 1413cda60

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__DarkGrey__(void)

{
  DarkGrey.field0_0x0._s_0.B = (uchar)((((uint)Grey.field0_0x0 & 0xff) * 0x99) / 0xff);
  DarkGrey.field0_0x0._s_0.G = (uchar)((((uint)Grey.field0_0x0 >> 8 & 0xff) * 0x99) / 0xff);
  DarkGrey.field0_0x0._s_0.A = Grey.field0_0x0._3_1_;
  DarkGrey.field0_0x0._s_0.R = (uchar)((((uint)Grey.field0_0x0 >> 0x10 & 0xff) * 0x99) / 0xff);
  return;
}

// `dynamic_initializer_for_'DarkMagenta'' @ 1413cdaf0

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__DarkMagenta__(void)

{
  DarkMagenta.field0_0x0._s_0.B = (uchar)((((uint)Magenta.field0_0x0 & 0xff) * 0x99) / 0xff);
  DarkMagenta.field0_0x0._s_0.G = (uchar)((((uint)Magenta.field0_0x0 >> 8 & 0xff) * 0x99) / 0xff);
  DarkMagenta.field0_0x0._s_0.A = Magenta.field0_0x0._3_1_;
  DarkMagenta.field0_0x0._s_0.R = (uchar)((((uint)Magenta.field0_0x0 >> 0x10 & 0xff) * 0x99) / 0xff)
  ;
  return;
}

// `dynamic_initializer_for_'DarkOrange'' @ 1413cdb80

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__DarkOrange__(void)

{
  DarkOrange.field0_0x0._s_0.B = (uchar)((((uint)Orange.field0_0x0 & 0xff) * 0x99) / 0xff);
  DarkOrange.field0_0x0._s_0.G = (uchar)((((uint)Orange.field0_0x0 >> 8 & 0xff) * 0x99) / 0xff);
  DarkOrange.field0_0x0._s_0.A = Orange.field0_0x0._3_1_;
  DarkOrange.field0_0x0._s_0.R = (uchar)((((uint)Orange.field0_0x0 >> 0x10 & 0xff) * 0x99) / 0xff);
  return;
}

// `dynamic_initializer_for_'DarkPurple'' @ 1413cdc10

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__DarkPurple__(void)

{
  DarkPurple.field0_0x0._s_0.B = (uchar)((((uint)Purple.field0_0x0 & 0xff) * 0x99) / 0xff);
  DarkPurple.field0_0x0._s_0.G = (uchar)((((uint)Purple.field0_0x0 >> 8 & 0xff) * 0x99) / 0xff);
  DarkPurple.field0_0x0._s_0.A = Purple.field0_0x0._3_1_;
  DarkPurple.field0_0x0._s_0.R = (uchar)((((uint)Purple.field0_0x0 >> 0x10 & 0xff) * 0x99) / 0xff);
  return;
}

// `dynamic_initializer_for_'DarkRed'' @ 1413cdca0

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__DarkRed__(void)

{
  DarkRed.field0_0x0._s_0.B = (uchar)((((uint)Red.field0_0x0 & 0xff) * 0x99) / 0xff);
  DarkRed.field0_0x0._s_0.G = (uchar)((((uint)Red.field0_0x0 >> 8 & 0xff) * 0x99) / 0xff);
  DarkRed.field0_0x0._s_0.A = Red.field0_0x0._3_1_;
  DarkRed.field0_0x0._s_0.R = (uchar)((((uint)Red.field0_0x0 >> 0x10 & 0xff) * 0x99) / 0xff);
  return;
}

// `dynamic_initializer_for_'DarkYellow'' @ 1413cdd30

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__DarkYellow__(void)

{
  DarkYellow.field0_0x0._s_0.B = (uchar)((((uint)Yellow.field0_0x0 & 0xff) * 0x99) / 0xff);
  DarkYellow.field0_0x0._s_0.G = (uchar)((((uint)Yellow.field0_0x0 >> 8 & 0xff) * 0x99) / 0xff);
  DarkYellow.field0_0x0._s_0.A = Yellow.field0_0x0._3_1_;
  DarkYellow.field0_0x0._s_0.R = (uchar)((((uint)Yellow.field0_0x0 >> 0x10 & 0xff) * 0x99) / 0xff);
  return;
}

// `dynamic_initializer_for_'Green'' @ 1413cddc0

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__Green__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"#8AB75E");
  FColor::FromHex((FString *)&Green);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'Grey'' @ 1413cde00

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__Grey__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"#949494");
  FColor::FromHex((FString *)&Grey);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'LogStateTree'' @ 1413cde40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStateTree__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogStateTree,L"LogStateTree",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogStateTree__);
  return;
}

// `dynamic_initializer_for_'Magenta'' @ 1413cde80

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__Magenta__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"#CE85C7");
  FColor::FromHex((FString *)&Magenta);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStateTreeModule'' @ 1413cdec0

void __cdecl _dynamic_initializer_for__ModuleRegistrantStateTreeModule__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StateTreeModule";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StateTreeModule",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FStateTreeModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Orange'' @ 1413cdf10

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__Orange__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"#E3983F");
  FColor::FromHex((FString *)&Orange);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'Purple'' @ 1413cdf50

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__Purple__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"#B397D6");
  FColor::FromHex((FString *)&Purple);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'Red'' @ 1413cdf90

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__Red__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"#DE6659");
  FColor::FromHex((FString *)&Red);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'SchemaCanBeOverridenTag'' @ 1413cdfd0

void __cdecl UE::StateTree::_dynamic_initializer_for__SchemaCanBeOverridenTag__(void)

{
  ::FName::FName(&SchemaCanBeOverridenTag,L"SchemaCanBeOverriden");
  return;
}

// `dynamic_initializer_for_'SchemaTag'' @ 1413cdff0

void __cdecl UE::StateTree::_dynamic_initializer_for__SchemaTag__(void)

{
  ::FName::FName(&SchemaTag,L"Schema");
  return;
}

// `dynamic_initializer_for_'Yellow'' @ 1413ce010

void __cdecl UE::StateTree::Colors::_dynamic_initializer_for__Yellow__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"#EFD964");
  FColor::FromHex((FString *)&Yellow);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDebugTextTask_h__Script_StateTreeModule_2868780053'' @ 1413ce050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDebugTextTask_h__Script_StateTreeModule_2868780053__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDebugTextTask_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h__Script_StateTreeModule_3464264462'' @ 1413ce090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h__Script_StateTreeModule_3464264462__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeIndexTypes_h__Script_StateTreeModule_1040391137'' @ 1413ce0d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeIndexTypes_h__Script_StateTreeModule_1040391137__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeIndexTypes_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeLinker_h__Script_StateTreeModule_2258536723'' @ 1413ce110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeLinker_h__Script_StateTreeModule_2258536723__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeLinker_h__Script_StateTreeModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h__Script_StateTreeModule_2615532953'' @ 1413ce160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h__Script_StateTreeModule_2615532953__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h__Script_StateTreeModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyFunctionBase_h__Script_StateTreeModule_2436418630'' @ 1413ce1b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyFunctionBase_h__Script_StateTreeModule_2436418630__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyFunctionBase_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h__Script_StateTreeModule_796403438'' @ 1413ce1f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h__Script_StateTreeModule_796403438__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h__Script_StateTreeModule_2637188141'' @ 1413ce230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h__Script_StateTreeModule_2637188141__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h__Script_StateTreeModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h__Script_StateTreeModule_93824575'' @ 1413ce270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h__Script_StateTreeModule_93824575__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTasksStatus_h__Script_StateTreeModule_1330694652'' @ 1413ce2b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTasksStatus_h__Script_StateTreeModule_1330694652__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTasksStatus_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTasksStatus_h__Script_StateTreeModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h__Script_StateTreeModule_638651986'' @ 1413ce300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h__Script_StateTreeModule_638651986__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,0xd,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h__Script_StateTreeModule_Statics
             ::EnumInfo,0xc);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Tasks_StateTreeRunParallelStateTreeTask_h__Script_StateTreeModule_1366603848'' @ 1413ce350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Tasks_StateTreeRunParallelStateTreeTask_h__Script_StateTreeModule_1366603848__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Tasks_StateTreeRunParallelStateTreeTask_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// NewStructOps @ 14d525130

void * __cdecl
Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreePropertyFunctionCommonBase,&UE::CoreUObject::Private::Construct<FStateTreePropertyFunctionCommonBase>,&UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyFunctionCommonBase>,&UE::CoreUObject::Private::Destruct<FStateTreePropertyFunctionCommonBase>,&UE::CoreUObject::Private::Copy<FStateTreePropertyFunctionCommonBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d525170

void * __cdecl
Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeRunParallelStateTreeExecutionExtension,&UE::CoreUObject::Private::Construct<FStateTreeRunParallelStateTreeExecutionExtension>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeRunParallelStateTreeExecutionExtension>,&UE::CoreUObject::Private::Destruct<FStateTreeRunParallelStateTreeExecutionExtension>,&UE::CoreUObject::Private::Copy<FStateTreeRunParallelStateTreeExecutionExtension>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d5252e0

void * __cdecl
Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeRunParallelStateTreeTask,&UE::CoreUObject::Private::Construct<FStateTreeRunParallelStateTreeTask>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeRunParallelStateTreeTask>,&UE::CoreUObject::Private::Destruct<FStateTreeRunParallelStateTreeTask>,&UE::CoreUObject::Private::Copy<FStateTreeRunParallelStateTreeTask>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FStateTreeReference @ 14d525420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeReference.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeReference.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FStateTreeReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem @ 14d5254a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrideItem.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrideItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrideItem.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrideItem.InnerSingleton;
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

// NewStructOps @ 14d525520

void * __cdecl Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeReference,&UE::CoreUObject::Private::Construct<FStateTreeReference>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeReference>,&UE::CoreUObject::Private::Destruct<FStateTreeReference>,&UE::CoreUObject::Private::SerializeSlot<FStateTreeReference>,&UE::CoreUObject::Private::PostSerialize<FStateTreeReference>,&UE::CoreUObject::Private::Copy<FStateTreeReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d525560

void * __cdecl Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeReferenceOverrideItem,&UE::CoreUObject::Private::Construct<FStateTreeReferenceOverrideItem>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeReferenceOverrideItem>,&UE::CoreUObject::Private::Destruct<FStateTreeReferenceOverrideItem>,&UE::CoreUObject::Private::Copy<FStateTreeReferenceOverrideItem>,&UE::CoreUObject::Private::GetStructTypeHash<FStateTreeReferenceOverrideItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d5255a0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeReferenceOverrides,&UE::CoreUObject::Private::Construct<FStateTreeReferenceOverrides>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeReferenceOverrides>,&UE::CoreUObject::Private::Destruct<FStateTreeReferenceOverrides>,&UE::CoreUObject::Private::Copy<FStateTreeReferenceOverrides>,&UE::CoreUObject::Private::GetStructTypeHash<FStateTreeReferenceOverrides>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d5257d0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeIndex16,&UE::CoreUObject::Private::Construct<FStateTreeIndex16>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeIndex16>,&UE::CoreUObject::Private::Destruct<FStateTreeIndex16>,&UE::CoreUObject::Private::Copy<FStateTreeIndex16>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FStateTreeIndex16>,&UE::CoreUObject::Private::GetStructTypeHash<FStateTreeIndex16>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d525810

void * __cdecl Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeIndex8,&UE::CoreUObject::Private::Construct<FStateTreeIndex8>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeIndex8>,&UE::CoreUObject::Private::Destruct<FStateTreeIndex8>,&UE::CoreUObject::Private::Copy<FStateTreeIndex8>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FStateTreeIndex8>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UStateTreeSchema @ 14d525a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStateTreeSchema(void)

{
  if (Z_Registration_Info_UClass_UStateTreeSchema.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStateTreeSchema.OuterSingleton,
               &Z_Construct_UClass_UStateTreeSchema_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStateTreeSchema.OuterSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority @ 14d526030

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton;
}

// Z_Construct_UScriptStruct_FStateTreeTaskBase @ 14d526070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeTaskBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeTaskCommonBase @ 14d5260f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeTaskCommonBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTaskCommonBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeTaskCommonBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeTaskCommonBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeTaskCommonBase.InnerSingleton;
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

// NewProp_bTaskEnabled_SetBit @ 14d526170

void __cdecl
Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewProp_bTaskEnabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 0x80;
  return;
}

// NewStructOps @ 14d526180

void * __cdecl Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeTaskBase,&UE::CoreUObject::Private::Construct<FStateTreeTaskBase>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeTaskBase>,&UE::CoreUObject::Private::Destruct<FStateTreeTaskBase>,&UE::CoreUObject::Private::Copy<FStateTreeTaskBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d526310

void * __cdecl Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeTaskCommonBase,&UE::CoreUObject::Private::Construct<FStateTreeTaskCommonBase>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeTaskCommonBase>,&UE::CoreUObject::Private::Destruct<FStateTreeTaskCommonBase>,&UE::CoreUObject::Private::Copy<FStateTreeTaskCommonBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeTaskCompletionType @ 14d526410

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeTaskCompletionType(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeTaskCompletionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeTaskCompletionType.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeTaskCompletionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeTaskCompletionType.InnerSingleton;
}

// EStateTreeTaskCompletionType_StaticEnum @ 14d526450

UEnum * __cdecl EStateTreeTaskCompletionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeTaskCompletionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTaskCompletionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTaskCompletionType,
                       (UObject *)pUVar1,L"EStateTreeTaskCompletionType");
  }
  return Z_Registration_Info_UEnum_EStateTreeTaskCompletionType.OuterSingleton;
}

// NewStructOps @ 14d526490

void * __cdecl Z_Construct_UScriptStruct_FStateTreeTasksCompletionStatus_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeTasksCompletionStatus,&UE::CoreUObject::Private::Construct<FStateTreeTasksCompletionStatus>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeTasksCompletionStatus>,&UE::CoreUObject::Private::Destruct<FStateTreeTasksCompletionStatus>,&UE::CoreUObject::Private::SerializeArchive<FStateTreeTasksCompletionStatus>,&UE::CoreUObject::Private::NetSerialize<FStateTreeTasksCompletionStatus>,&UE::CoreUObject::Private::Copy<FStateTreeTasksCompletionStatus>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d526960

void * __thiscall
FStateTreeBindableStructDesc::_scalar_deleting_destructor_
          (FStateTreeBindableStructDesc *this,uint param_1)

{
  FPropertyBindingBindableStructDescriptor::~FPropertyBindingBindableStructDescriptor
            ((FPropertyBindingBindableStructDescriptor *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d526ab0

void * __thiscall
FStateTreePropertyPathBinding::_scalar_deleting_destructor_
          (FStateTreePropertyPathBinding *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType @ 14d526bd0

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeDataSourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeDataSourceType.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeDataSourceType.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback @ 14d526c10

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeSelectionFallback.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeSelectionFallback.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeSelectionFallback.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior @ 14d526c50

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeStateType @ 14d526c90

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeStateType(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger @ 14d526cd0

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCompactEventDesc @ 14d526d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCompactEventDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCompactEventDesc.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCompactEventDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FCompactEventDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCompactEventDesc.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCompactEventDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeIndex16 @ 14d526d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeIndex16(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeIndex16.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeIndex16.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeIndex16.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeIndex16.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration @ 14d526e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeRandomTimeDuration.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeRandomTimeDuration.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeRandomTimeDuration.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeRandomTimeDuration.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeStateHandle @ 14d526e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeStateHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeStateHandle.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeStateHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeStateHandle.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FStateTreeStateHandle.InnerSingleton;
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

// EStateTreeTransitionType_StaticEnum @ 14d526f10

UEnum * __cdecl EStateTreeTransitionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType,(UObject *)pUVar1,
                       L"EStateTreeTransitionType");
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton;
}

// EStateTreeStateSelectionRules_StaticEnum @ 14d526fd0

UEnum * __cdecl EStateTreeStateSelectionRules_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeStateSelectionRules.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeStateSelectionRules.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionRules,
                       (UObject *)pUVar1,L"EStateTreeStateSelectionRules");
  }
  return Z_Registration_Info_UEnum_EStateTreeStateSelectionRules.OuterSingleton;
}

// EStateTreeExpressionOperand_StaticEnum @ 14d527020

UEnum * __cdecl EStateTreeExpressionOperand_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeExpressionOperand.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeExpressionOperand.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand,
                       (UObject *)pUVar1,L"EStateTreeExpressionOperand");
  }
  return Z_Registration_Info_UEnum_EStateTreeExpressionOperand.OuterSingleton;
}

// EStateTreeStateType_StaticEnum @ 14d5271a0

UEnum * __cdecl EStateTreeStateType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType,(UObject *)pUVar1,
                       L"EStateTreeStateType");
  }
  return Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton;
}

// EStateTreeLinkerStatus_StaticEnum @ 14d5271e0

UEnum * __cdecl EStateTreeLinkerStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeLinkerStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeLinkerStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus,(UObject *)pUVar1,
                       L"EStateTreeLinkerStatus");
  }
  return Z_Registration_Info_UEnum_EStateTreeLinkerStatus.OuterSingleton;
}

// EStateTreeStateSelectionBehavior_StaticEnum @ 14d527220

UEnum * __cdecl EStateTreeStateSelectionBehavior_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior,
                       (UObject *)pUVar1,L"EStateTreeStateSelectionBehavior");
  }
  return Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton;
}

// EStateTreeTransitionTrigger_StaticEnum @ 14d527270

UEnum * __cdecl EStateTreeTransitionTrigger_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger,
                       (UObject *)pUVar1,L"EStateTreeTransitionTrigger");
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton;
}

// EStateTreeTransitionPriority_StaticEnum @ 14d5272b0

UEnum * __cdecl EStateTreeTransitionPriority_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority,
                       (UObject *)pUVar1,L"EStateTreeTransitionPriority");
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton;
}

// NewStructOps @ 14d5272f0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeStateHandle,&UE::CoreUObject::Private::Construct<FStateTreeStateHandle>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeStateHandle>,&UE::CoreUObject::Private::Destruct<FStateTreeStateHandle>,&UE::CoreUObject::Private::Copy<FStateTreeStateHandle>,&UE::CoreUObject::Private::GetStructTypeHash<FStateTreeStateHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// EStateTreeDataSourceType_StaticEnum @ 14d5273b0

UEnum * __cdecl EStateTreeDataSourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeDataSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeDataSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType,(UObject *)pUVar1,
                       L"EStateTreeDataSourceType");
  }
  return Z_Registration_Info_UEnum_EStateTreeDataSourceType.OuterSingleton;
}

// EStateTreeParameterDataType_StaticEnum @ 14d5273f0

UEnum * __cdecl EStateTreeParameterDataType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeParameterDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeParameterDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeParameterDataType,
                       (UObject *)pUVar1,L"EStateTreeParameterDataType");
  }
  return Z_Registration_Info_UEnum_EStateTreeParameterDataType.OuterSingleton;
}

// NewStructOps @ 14d5274f0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 6;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeDataHandle,&UE::CoreUObject::Private::Construct<FStateTreeDataHandle>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeDataHandle>,&UE::CoreUObject::Private::Destruct<FStateTreeDataHandle>,&UE::CoreUObject::Private::Copy<FStateTreeDataHandle>,&UE::CoreUObject::Private::GetStructTypeHash<FStateTreeDataHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d527730

void * __cdecl Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeRandomTimeDuration,&UE::CoreUObject::Private::Construct<FStateTreeRandomTimeDuration>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeRandomTimeDuration>,&UE::CoreUObject::Private::Destruct<FStateTreeRandomTimeDuration>,&UE::CoreUObject::Private::Copy<FStateTreeRandomTimeDuration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// EStateTreeSelectionFallback_StaticEnum @ 14d5277b0

UEnum * __cdecl EStateTreeSelectionFallback_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeSelectionFallback.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeSelectionFallback.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback,
                       (UObject *)pUVar1,L"EStateTreeSelectionFallback");
  }
  return Z_Registration_Info_UEnum_EStateTreeSelectionFallback.OuterSingleton;
}

// NewStructOps @ 14d5277f0

void * __cdecl Z_Construct_UScriptStruct_FCompactEventDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCompactEventDesc,&UE::CoreUObject::Private::Construct<FCompactEventDesc>,&UE::CoreUObject::Private::ConstructForTests<FCompactEventDesc>,&UE::CoreUObject::Private::Destruct<FCompactEventDesc>,&UE::CoreUObject::Private::Copy<FCompactEventDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bTransitionEnabled_SetBit @ 14d527970

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bTransitionEnabled_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_bReactivateTargetState_SetBit @ 14d527980

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bReactivateTargetState_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 2;
  return;
}

// NewProp_bConsumeEventOnSelect_SetBit @ 14d527990

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_bConsumeEventOnSelect_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 4;
  return;
}

// NewStructOps @ 14d5279a0

void * __cdecl Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCompactStateTransition,&UE::CoreUObject::Private::Construct<FCompactStateTransition>,&UE::CoreUObject::Private::ConstructForTests<FCompactStateTransition>,&UE::CoreUObject::Private::Destruct<FCompactStateTransition>,&UE::CoreUObject::Private::Copy<FCompactStateTransition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d527e40

void * __cdecl Z_Construct_UScriptStruct_FCompactStateTreeFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCompactStateTreeFrame,&UE::CoreUObject::Private::Construct<FCompactStateTreeFrame>,&UE::CoreUObject::Private::ConstructForTests<FCompactStateTreeFrame>,&UE::CoreUObject::Private::Destruct<FCompactStateTreeFrame>,&UE::CoreUObject::Private::Copy<FCompactStateTreeFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasTransitionTasks_SetBit @ 14d527fe0

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 1;
  return;
}

// NewProp_bHasStateChangeConditions_SetBit @ 14d527ff0

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasStateChangeConditions_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 2;
  return;
}

// NewProp_bHasTickTriggerTransitions_SetBit @ 14d528000

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTickTriggerTransitions_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 0x40;
  return;
}

// NewProp_bHasEventTriggerTransitions_SetBit @ 14d528010

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasEventTriggerTransitions_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 0x80;
  return;
}

// NewProp_bHasDelegateTriggerTransitions_SetBit @ 14d528020

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::
NewProp_bHasDelegateTriggerTransitions_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 1;
  return;
}

// NewProp_bHasCompletedTriggerTransitions_SetBit @ 14d528030

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::
NewProp_bHasCompletedTriggerTransitions_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 2;
  return;
}

// NewProp_bHasSucceededTriggerTransitions_SetBit @ 14d528040

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::
NewProp_bHasSucceededTriggerTransitions_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 4;
  return;
}

// NewProp_bHasFailedTriggerTransitions_SetBit @ 14d528050

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::
NewProp_bHasFailedTriggerTransitions_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 8;
  return;
}

// NewProp_bCheckPrerequisitesWhenActivatingChildDirectly_SetBit @ 14d528060

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::
NewProp_bCheckPrerequisitesWhenActivatingChildDirectly_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x10;
  return;
}

// NewProp_bEnabled_SetBit @ 14d528070

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x20;
  return;
}

// NewProp_bConsumeEventOnSelect_SetBit @ 14d528080

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bConsumeEventOnSelect_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x40;
  return;
}

// NewProp_bHasCustomTickRate_SetBit @ 14d528090

void __cdecl
Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasCustomTickRate_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x80;
  return;
}

// NewStructOps @ 14d5280a0

void * __cdecl Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCompactStateTreeState,&UE::CoreUObject::Private::Construct<FCompactStateTreeState>,&UE::CoreUObject::Private::ConstructForTests<FCompactStateTreeState>,&UE::CoreUObject::Private::Destruct<FCompactStateTreeState>,&UE::CoreUObject::Private::Copy<FCompactStateTreeState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d528290

void * __cdecl Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCompactStateTreeParameters,&UE::CoreUObject::Private::Construct<FCompactStateTreeParameters>,&UE::CoreUObject::Private::ConstructForTests<FCompactStateTreeParameters>,&UE::CoreUObject::Private::Destruct<FCompactStateTreeParameters>,&UE::CoreUObject::Private::Copy<FCompactStateTreeParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EStateTreeExternalDataRequirement_StaticEnum @ 14d5282d0

UEnum * __cdecl EStateTreeExternalDataRequirement_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement,
                       (UObject *)pUVar1,L"EStateTreeExternalDataRequirement");
  }
  return Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton;
}

// EStateTreePropertyUsage_StaticEnum @ 14d5283c0

UEnum * __cdecl EStateTreePropertyUsage_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage,(UObject *)pUVar1,
                       L"EStateTreePropertyUsage");
  }
  return Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource @ 14d528420

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton;
}

// Z_Construct_UScriptStruct_FStateTreeBindableStructDesc @ 14d528460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeBindableStructDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeBindableStructDesc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeBindableStructDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeBindableStructDesc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeBindableStructDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeDataHandle @ 14d5284e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeDataHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeDataHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreePropertyAccess @ 14d528560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyAccess(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyAccess.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreePropertyAccess.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyAccess.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreePropertyAccess.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreePropertyPathBinding @ 14d5285f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyPathBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyPathBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreePropertyPathBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyPathBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreePropertyPathBinding.InnerSingleton;
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

// NewStructOps @ 14d528670

void * __cdecl Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeStateIdToHandle,&UE::CoreUObject::Private::Construct<FStateTreeStateIdToHandle>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeStateIdToHandle>,&UE::CoreUObject::Private::Destruct<FStateTreeStateIdToHandle>,&UE::CoreUObject::Private::Copy<FStateTreeStateIdToHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FStateTreePropertyRefPath @ 14d5286b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyRefPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyRefPath.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreePropertyRefPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyRefPath.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreePropertyRefPath.InnerSingleton;
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

// EStateTreeBindableStructSource_StaticEnum @ 14d528730

UEnum * __cdecl EStateTreeBindableStructSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource,
                       (UObject *)pUVar1,L"EStateTreeBindableStructSource");
  }
  return Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton;
}

// NewStructOps @ 14d528890

void * __cdecl Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeBindableStructDesc,&UE::CoreUObject::Private::Construct<FStateTreeBindableStructDesc>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeBindableStructDesc>,&UE::CoreUObject::Private::Destruct<FStateTreeBindableStructDesc>,&UE::CoreUObject::Private::Copy<FStateTreeBindableStructDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d528940

void * __cdecl Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeNodeIdToIndex,&UE::CoreUObject::Private::Construct<FStateTreeNodeIdToIndex>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeNodeIdToIndex>,&UE::CoreUObject::Private::Destruct<FStateTreeNodeIdToIndex>,&UE::CoreUObject::Private::Copy<FStateTreeNodeIdToIndex>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d5289b0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeTransitionIdToIndex,&UE::CoreUObject::Private::Construct<FStateTreeTransitionIdToIndex>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeTransitionIdToIndex>,&UE::CoreUObject::Private::Destruct<FStateTreeTransitionIdToIndex>,&UE::CoreUObject::Private::Copy<FStateTreeTransitionIdToIndex>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d528a20

void * __cdecl Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeEditorPropertyPath,&UE::CoreUObject::Private::Construct<FStateTreeEditorPropertyPath>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeEditorPropertyPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d528c00

void * __cdecl Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeStructRef,&UE::CoreUObject::Private::Construct<FStateTreeStructRef>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeStructRef>,&UE::CoreUObject::Private::Destruct<FStateTreeStructRef>,&UE::CoreUObject::Private::Copy<FStateTreeStructRef>,&UE::CoreUObject::Private::ExportTextItem<FStateTreeStructRef>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsOutputBinding_SetBit @ 14d528c40

void __cdecl
Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_bIsOutputBinding_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewStructOps @ 14d528c50

void * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreePropertyPathBinding,&UE::CoreUObject::Private::Construct<FStateTreePropertyPathBinding>,&UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyPathBinding>,&UE::CoreUObject::Private::Destruct<FStateTreePropertyPathBinding>,&UE::CoreUObject::Private::Copy<FStateTreePropertyPathBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d528c90

void * __cdecl Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeStateLink,&UE::CoreUObject::Private::Construct<FStateTreeStateLink>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeStateLink>,&UE::CoreUObject::Private::Destruct<FStateTreeStateLink>,&UE::CoreUObject::Private::SerializeSlot<FStateTreeStateLink>,&UE::CoreUObject::Private::PostSerialize<FStateTreeStateLink>,&UE::CoreUObject::Private::Copy<FStateTreeStateLink>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d529340

void * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreePropertyRefPath,&UE::CoreUObject::Private::Construct<FStateTreePropertyRefPath>,&UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyRefPath>,&UE::CoreUObject::Private::Destruct<FStateTreePropertyRefPath>,&UE::CoreUObject::Private::Copy<FStateTreePropertyRefPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d529380

void * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreePropertyAccess,&UE::CoreUObject::Private::Construct<FStateTreePropertyAccess>,&UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyAccess>,&UE::CoreUObject::Private::Destruct<FStateTreePropertyAccess>,&UE::CoreUObject::Private::Copy<FStateTreePropertyAccess>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d529400

void * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x100;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreePropertyBindings,&UE::CoreUObject::Private::Construct<FStateTreePropertyBindings>,&UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyBindings>,&UE::CoreUObject::Private::Destruct<FStateTreePropertyBindings>,&UE::CoreUObject::Private::Copy<FStateTreePropertyBindings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d5296f0

void * __cdecl
Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeDebugTextTaskInstanceData,&UE::CoreUObject::Private::Construct<FStateTreeDebugTextTaskInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeDebugTextTaskInstanceData>,&UE::CoreUObject::Private::Destruct<FStateTreeDebugTextTaskInstanceData>,&UE::CoreUObject::Private::Copy<FStateTreeDebugTextTaskInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnabled_SetBit @ 14d529870

void __cdecl
Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewStructOps @ 14d529880

void * __cdecl Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeDebugTextTask,&UE::CoreUObject::Private::Construct<FStateTreeDebugTextTask>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeDebugTextTask>,&UE::CoreUObject::Private::Destruct<FStateTreeDebugTextTask>,&UE::CoreUObject::Private::Copy<FStateTreeDebugTextTask>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRunForever_SetBit @ 14d529be0

void __cdecl
Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14d529bf0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeDelayTaskInstanceData,&UE::CoreUObject::Private::Construct<FStateTreeDelayTaskInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeDelayTaskInstanceData>,&UE::CoreUObject::Private::Destruct<FStateTreeDelayTaskInstanceData>,&UE::CoreUObject::Private::Copy<FStateTreeDelayTaskInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d529c30

void * __cdecl Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeDelayTask,&UE::CoreUObject::Private::Construct<FStateTreeDelayTask>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeDelayTask>,&UE::CoreUObject::Private::Destruct<FStateTreeDelayTask>,&UE::CoreUObject::Private::Copy<FStateTreeDelayTask>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase @ 14d52a150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionBase.InnerSingleton;
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

// NewStructOps @ 14d52a1d0

void * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreePropertyFunctionBase,&UE::CoreUObject::Private::Construct<FStateTreePropertyFunctionBase>,&UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyFunctionBase>,&UE::CoreUObject::Private::Destruct<FStateTreePropertyFunctionBase>,&UE::CoreUObject::Private::Copy<FStateTreePropertyFunctionBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d52a290

void * __cdecl
Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeRunParallelStateTreeTaskInstanceData,&UE::CoreUObject::Private::Construct<FStateTreeRunParallelStateTreeTaskInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeRunParallelStateTreeTaskInstanceData>,&UE::CoreUObject::Private::Destruct<FStateTreeRunParallelStateTreeTaskInstanceData>,&UE::CoreUObject::Private::Copy<FStateTreeRunParallelStateTreeTaskInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// CastChecked<UStateTreeSettings,UObject> @ 14d52a7c0

UStateTreeSettings * __cdecl CastChecked<UStateTreeSettings,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UStateTreeSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UStateTreeSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UStateTreeSettings *)param_1;
  }
  pFVar3 = GetTypeName<UStateTreeSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FStateTreeBindableStructDesc,FStateTreeBindableStructDesc,int> @ 14d52a8a0

void __cdecl
ConstructItems<FStateTreeBindableStructDesc,FStateTreeBindableStructDesc,int>
          (void *param_1,FStateTreeBindableStructDesc *param_2,int param_3)

{
  EStateTreeBindableStructSource *pEVar1;
  UObject *pUVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar3 = &param_2->_padding_;
    plVar4 = (longlong *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)plVar3 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FPropertyBindingBindableStructDescriptor__6B_;
      pUVar2 = (UObject *)plVar3[-1];
      plVar4[-1] = (longlong)pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *plVar4 = *plVar3;
      *(undefined ***)((longlong)plVar3 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FStateTreeBindableStructDesc__6B_;
      *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(plVar3 + 1);
      *(ushort *)((longlong)plVar4 + 0xc) =
           ((FStateTreeStateHandle *)((longlong)plVar3 + 0xc))->Index;
      pEVar1 = (EStateTreeBindableStructSource *)((longlong)plVar3 + 0xe);
      plVar3 = plVar3 + 4;
      *(EStateTreeBindableStructSource *)((longlong)plVar4 + 0xe) = *pEVar1;
      plVar4 = plVar4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FStateTreePropertyAccess,FStateTreePropertyAccess,int> @ 14d52a950

void __cdecl
ConstructItems<FStateTreePropertyAccess,FStateTreePropertyAccess,int>
          (void *param_1,FStateTreePropertyAccess *param_2,int param_3)

{
  ushort *puVar1;
  TObjectPtr<UStruct_const_> TVar2;
  UObject *pUVar3;
  ushort *puVar4;
  FPropertyBindingIndex16 *pFVar5;
  
  if (param_3 != 0) {
    puVar4 = (ushort *)((longlong)param_1 + 4);
    pFVar5 = &(param_2->SourceIndirection).NextIndex;
    do {
      puVar4[-2] = *(ushort *)((longlong)puVar4 + (longlong)param_2 + (-4 - (longlong)param_1));
      puVar4[-1] = pFVar5[-1].Value;
      *puVar4 = pFVar5->Value;
      *(EPropertyBindingPropertyAccessType *)(puVar4 + 1) =
           *(EPropertyBindingPropertyAccessType *)(pFVar5 + 1);
      TVar2.field0_0x0 =
           (TObjectPtr<UStruct_const_>_u_0)
           ((TObjectPtr<UStruct_const_>_u_0 *)(pFVar5 + 2))->DebugPtr;
      ((TObjectPtr<UStruct_const_>_u_0 *)(puVar4 + 2))->DebugPtr = (UStruct *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      *(FArrayProperty **)(puVar4 + 6) = *(FArrayProperty **)(pFVar5 + 6);
      *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(pFVar5 + 10);
      pUVar3 = *(UObject **)(pFVar5 + 0xe);
      *(UObject **)(puVar4 + 0xe) = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      *(undefined4 *)(puVar4 + 0x12) = *(undefined4 *)(pFVar5 + 0x12);
      puVar1 = &pFVar5[0x14].Value;
      pFVar5 = pFVar5 + 0x18;
      puVar4[0x14] = *puVar1;
      puVar4 = puVar4 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FStateTreePropertyPathBinding,FStateTreePropertyPathBinding,int> @ 14d52aa20

void __cdecl
ConstructItems<FStateTreePropertyPathBinding,FStateTreePropertyPathBinding,int>
          (void *param_1,FStateTreePropertyPathBinding *param_2,int param_3)

{
  bool *pbVar1;
  longlong *plVar2;
  FPropertyBindingPath *this;
  
  if (param_3 != 0) {
    plVar2 = &param_2->_padding_;
    this = (FPropertyBindingPath *)((longlong)param_1 + 0x18);
    do {
      *(undefined ***)((longlong)plVar2 + (longlong)param_1 + (-0x18 - (longlong)param_2)) =
           &___7FPropertyBindingBinding__6B_;
      FPropertyBindingPath::FPropertyBindingPath(this + -1,(FPropertyBindingPath *)(plVar2 + -2));
      FPropertyBindingPath::FPropertyBindingPath(this,(FPropertyBindingPath *)plVar2);
      *(undefined ***)((longlong)plVar2 + (longlong)param_1 + (-0x18 - (longlong)param_2)) =
           &___7FStateTreePropertyPathBinding__6B_;
      *(undefined4 *)&this[1].Segments.AllocatorInstance.Data = *(undefined4 *)(plVar2 + 2);
      *(ushort *)((longlong)&this[1].Segments.AllocatorInstance.Data + 4) =
           ((FStateTreeStateHandle *)((longlong)plVar2 + 0x14))->Index;
      pbVar1 = (bool *)((longlong)plVar2 + 0x16);
      plVar2 = plVar2 + 6;
      *(bool *)((longlong)&this[1].Segments.AllocatorInstance.Data + 6) = *pbVar1;
      this = this + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FStateTreePropertyRefPath,FStateTreePropertyRefPath,int> @ 14d52aad0

void __cdecl
ConstructItems<FStateTreePropertyRefPath,FStateTreePropertyRefPath,int>
          (void *param_1,FStateTreePropertyRefPath *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FPropertyBindingPath::FPropertyBindingPath
                ((FPropertyBindingPath *)(lVar1 + (longlong)param_2),&param_2->SourcePropertyPath);
      *(undefined4 *)(lVar1 + 0x10 + (longlong)param_2) = *(undefined4 *)&param_2->SourceDataHandle;
      *(ushort *)(lVar1 + 0x14 + (longlong)param_2) = (param_2->SourceDataHandle).StateHandle.Index;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FStateTreePropertyAccess,int> @ 14d52ab30

void __cdecl DefaultConstructItems<FStateTreePropertyAccess,int>(void *param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined2 *)((longlong)param_1 + 4);
    do {
      *(undefined4 *)(puVar1 + -2) = 0xffff;
      *puVar1 = 0xffff;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined4 *)(puVar1 + 0x12) = FStateTreeDataHandle::Invalid._0_4_;
      puVar1[0x14] = FStateTreeDataHandle::Invalid.StateHandle.Index;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x18;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FString_const_,int> @ 14d52abb0

void __cdecl DestructItems<FString_const_,int>(FString *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[4],FText_const_&,wchar_t_const_(&)[4],FText_const_&> @ 14d52ad00

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[4],FText_const_&,wchar_t_const_(&)[4],FText_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [4],FText *param_3,wchar_t (*param_4) [4],FText *param_5)

{
  TTuple<FString,FFormatArgumentValue> *pTVar1;
  
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[4]>(param_1,param_2);
  ::FString::FString((FString *)pTVar1,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_3);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[4]>(param_1,param_4);
  ::FString::FString((FString *)pTVar1,*param_4);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_5);
  return;
}

// FormatNamed<wchar_t_const_(&)[5],FText_const_&> @ 14d52ad90

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[5],FText_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [5],FText *param_3)

{
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[5]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&this->field_0x10,ForwardingConstructor,
             param_3);
  return;
}

// FormatNamed<wchar_t_const_(&)[5],FText_const_&,wchar_t_const_(&)[10],FText_const_&,wchar_t_const_(&)[6],FText_const_&> @ 14d52af20

void __cdecl
TextFormatUtil::
FormatNamed<wchar_t_const_(&)[5],FText_const_&,wchar_t_const_(&)[10],FText_const_&,wchar_t_const_(&)[6],FText_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [5],FText *param_3,wchar_t (*param_4) [10],FText *param_5,
          wchar_t (*param_6) [6],FText *param_7)

{
  TTuple<FString,FFormatArgumentValue> *pTVar1;
  
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[5]>(param_1,param_2);
  ::FString::FString((FString *)pTVar1,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_3);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[10]>(param_1,param_4);
  ::FString::FString((FString *)pTVar1,*param_4);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_5);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[6]>(param_1,param_6);
  ::FString::FString((FString *)pTVar1,*param_6);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_7);
  return;
}

// FormatNamed<wchar_t_const_(&)[6],FText_const_&> @ 14d52afe0

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[6],FText_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [6],FText *param_3)

{
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[6]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&this->field_0x10,ForwardingConstructor,
             param_3);
  return;
}

// FormatNamed<wchar_t_const_(&)[9],FText_const_&> @ 14d52b030

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[9],FText_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [9],FText *param_3)

{
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[9]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&this->field_0x10,ForwardingConstructor,
             param_3);
  return;
}

// FormatNamed<wchar_t_const_(&)[9],FText_const_&,wchar_t_const_(&)[6],FText_const_&> @ 14d52b190

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[9],FText_const_&,wchar_t_const_(&)[6],FText_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [9],FText *param_3,wchar_t (*param_4) [6],FText *param_5)

{
  TTuple<FString,FFormatArgumentValue> *pTVar1;
  
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[9]>(param_1,param_2);
  ::FString::FString((FString *)pTVar1,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_3);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[6]>(param_1,param_4);
  ::FString::FString((FString *)pTVar1,*param_4);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_5);
  return;
}

// FormatNamed<wchar_t_const_(&)[10],FText_const_&> @ 14d52b220

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[10],FText_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [10],FText *param_3)

{
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[10]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&this->field_0x10,ForwardingConstructor,
             param_3);
  return;
}

// FormatNamed<wchar_t_const_(&)[10],FText_const_&,wchar_t_const_(&)[6],FText_const_&> @ 14d52b270

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[10],FText_const_&,wchar_t_const_(&)[6],FText_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [10],FText *param_3,wchar_t (*param_4) [6],FText *param_5)

{
  TTuple<FString,FFormatArgumentValue> *pTVar1;
  
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[10]>(param_1,param_2);
  ::FString::FString((FString *)pTVar1,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_3);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[6]>(param_1,param_4);
  ::FString::FString((FString *)pTVar1,*param_4);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_5);
  return;
}

// GetTypeHash<FStateTreeReferenceOverrideItem,TSizedDefaultAllocator<32>_> @ 14d52bb50

uint __cdecl
GetTypeHash<FStateTreeReferenceOverrideItem,TSizedDefaultAllocator<32>_>
          (TArray<FStateTreeReferenceOverrideItem,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  uVar8 = 0;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar9 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateTreeReferenceOverrideItem_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar6) break;
    uVar2 = *(undefined8 *)pFVar9;
    uVar3 = ((uint)(*(ulonglong *)(pFVar9 + 8) >> 0x14) & 0xffff ^
            (uint)(*(ulonglong *)(pFVar9 + 8) >> 4)) * -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    uVar3 = GetTypeHash((FNameEntryId)(uint)uVar2);
    uVar5 = ((int)((ulonglong)uVar2 >> 0x20) - uVar4) + uVar3 ^ uVar4 >> 0xd;
    uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
    uVar7 = (uVar4 - uVar5) - uVar3 ^ uVar3 >> 0xd;
    uVar4 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar5 = (uVar7 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
    uVar8 = uVar8 ^ (uVar8 >> 2) +
                    ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) + uVar8 * 0x40 + -0x61c88647;
    pFVar9 = pFVar9 + 0x30;
  }
  return uVar8;
}

// GetTypeName<UStateTreeSettings> @ 14d52bc80

FString * __cdecl GetTypeName<UStateTreeSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UStateTreeSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UStateTreeSchema> @ 14d52bcc0

void __cdecl InternalConstructor<UStateTreeSchema>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UStateTreeSchema__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UStateTreeSchema> @ 14d52bcf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStateTreeSchema>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStateTreeSchema::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UStateTreeSchema__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UClass,UClass_const_*,0> @ 14d52bda0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UClass,UClass_const_*,0>
          (TObjectPtr<UClass> *param_1,UClass **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UClass *)0x0) {
    return *param_2 == (UClass *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// StaticEnum<enum_EStateTreeBindableStructSource> @ 14d52bdc0

UEnum * __cdecl StaticEnum<enum_EStateTreeBindableStructSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource,
                       (UObject *)pUVar1,L"EStateTreeBindableStructSource");
  }
  return Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton;
}

// StaticEnum<enum_EStateTreeDataSourceType> @ 14d52be00

UEnum * __cdecl StaticEnum<enum_EStateTreeDataSourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeDataSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeDataSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeDataSourceType,(UObject *)pUVar1,
                       L"EStateTreeDataSourceType");
  }
  return Z_Registration_Info_UEnum_EStateTreeDataSourceType.OuterSingleton;
}

// StaticEnum<enum_EStateTreeExpressionOperand> @ 14d52be40

UEnum * __cdecl StaticEnum<enum_EStateTreeExpressionOperand>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeExpressionOperand.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeExpressionOperand.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand,
                       (UObject *)pUVar1,L"EStateTreeExpressionOperand");
  }
  return Z_Registration_Info_UEnum_EStateTreeExpressionOperand.OuterSingleton;
}

// StaticEnum<enum_EStateTreeExternalDataRequirement> @ 14d52be80

UEnum * __cdecl StaticEnum<enum_EStateTreeExternalDataRequirement>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement,
                       (UObject *)pUVar1,L"EStateTreeExternalDataRequirement");
  }
  return Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton;
}

// StaticEnum<enum_EStateTreeLinkerStatus> @ 14d52bec0

UEnum * __cdecl StaticEnum<enum_EStateTreeLinkerStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeLinkerStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeLinkerStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus,(UObject *)pUVar1,
                       L"EStateTreeLinkerStatus");
  }
  return Z_Registration_Info_UEnum_EStateTreeLinkerStatus.OuterSingleton;
}

// StaticEnum<enum_EStateTreeParameterDataType> @ 14d52bf00

UEnum * __cdecl StaticEnum<enum_EStateTreeParameterDataType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeParameterDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeParameterDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeParameterDataType,
                       (UObject *)pUVar1,L"EStateTreeParameterDataType");
  }
  return Z_Registration_Info_UEnum_EStateTreeParameterDataType.OuterSingleton;
}

// StaticEnum<enum_EStateTreePropertyUsage> @ 14d52bf40

UEnum * __cdecl StaticEnum<enum_EStateTreePropertyUsage>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage,(UObject *)pUVar1,
                       L"EStateTreePropertyUsage");
  }
  return Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton;
}

// StaticEnum<enum_EStateTreeSelectionFallback> @ 14d52bf80

UEnum * __cdecl StaticEnum<enum_EStateTreeSelectionFallback>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeSelectionFallback.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeSelectionFallback.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeSelectionFallback,
                       (UObject *)pUVar1,L"EStateTreeSelectionFallback");
  }
  return Z_Registration_Info_UEnum_EStateTreeSelectionFallback.OuterSingleton;
}

// StaticEnum<enum_EStateTreeStateSelectionBehavior> @ 14d52bfc0

UEnum * __cdecl StaticEnum<enum_EStateTreeStateSelectionBehavior>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionBehavior,
                       (UObject *)pUVar1,L"EStateTreeStateSelectionBehavior");
  }
  return Z_Registration_Info_UEnum_EStateTreeStateSelectionBehavior.OuterSingleton;
}

// StaticEnum<enum_EStateTreeStateSelectionRules> @ 14d52c000

UEnum * __cdecl StaticEnum<enum_EStateTreeStateSelectionRules>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeStateSelectionRules.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeStateSelectionRules.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionRules,
                       (UObject *)pUVar1,L"EStateTreeStateSelectionRules");
  }
  return Z_Registration_Info_UEnum_EStateTreeStateSelectionRules.OuterSingleton;
}

// StaticEnum<enum_EStateTreeStateType> @ 14d52c040

UEnum * __cdecl StaticEnum<enum_EStateTreeStateType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType,(UObject *)pUVar1,
                       L"EStateTreeStateType");
  }
  return Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton;
}

// StaticEnum<enum_EStateTreeTaskCompletionType> @ 14d52c080

UEnum * __cdecl StaticEnum<enum_EStateTreeTaskCompletionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeTaskCompletionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTaskCompletionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTaskCompletionType,
                       (UObject *)pUVar1,L"EStateTreeTaskCompletionType");
  }
  return Z_Registration_Info_UEnum_EStateTreeTaskCompletionType.OuterSingleton;
}

// StaticEnum<enum_EStateTreeTransitionPriority> @ 14d52c0c0

UEnum * __cdecl StaticEnum<enum_EStateTreeTransitionPriority>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority,
                       (UObject *)pUVar1,L"EStateTreeTransitionPriority");
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton;
}

// StaticEnum<enum_EStateTreeTransitionTrigger> @ 14d52c100

UEnum * __cdecl StaticEnum<enum_EStateTreeTransitionTrigger>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger,
                       (UObject *)pUVar1,L"EStateTreeTransitionTrigger");
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton;
}

// StaticEnum<enum_EStateTreeTransitionType> @ 14d52c140

UEnum * __cdecl StaticEnum<enum_EStateTreeTransitionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType,(UObject *)pUVar1,
                       L"EStateTreeTransitionType");
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d52d4f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d520

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d550

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStateTreeModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FStateTreeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBVFStructProperty__PEAE1_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d5c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXPEAE_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d600

void * __thiscall
FStateTreeDebugTextTask::_scalar_deleting_destructor_(FStateTreeDebugTextTask *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Text).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FStateTreeNodeBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d650

void * __thiscall
FStateTreeDelayTask::_scalar_deleting_destructor_(FStateTreeDelayTask *this,uint param_1)

{
  *(undefined ***)this = &___7FStateTreeNodeBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d690

void * __thiscall
FStateTreeModule::_scalar_deleting_destructor_(FStateTreeModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StopDebuggerTracesCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->StartDebuggerTracesCommand);
  DestructItems<FString_const_,int>
            ((FString *)(this->ChannelsToRestore).AllocatorInstance.Data,
             (this->ChannelsToRestore).ArrayNum);
  pFVar1 = (this->ChannelsToRestore).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Trace::FStoreClient::operator_delete((this->StoreClient).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TraceModuleService).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TraceAnalysisService).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d720

void * __thiscall
FStateTreePropertyBindings::_scalar_deleting_destructor_
          (FStateTreePropertyBindings *this,uint param_1)

{
  ~FStateTreePropertyBindings(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d760

void * __thiscall
FStateTreeRunParallelStateTreeExecutionExtension::_scalar_deleting_destructor_
          (FStateTreeRunParallelStateTreeExecutionExtension *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakExecutionContext).TemporaryStorage.WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->WeakExecutionContext).Storage.WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d7e0

void * __thiscall
FStateTreeRunParallelStateTreeTask::_scalar_deleting_destructor_
          (FStateTreeRunParallelStateTreeTask *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FStateTreeNodeBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d820

void * __thiscall
FStateTreeTaskCommonBase::_scalar_deleting_destructor_(FStateTreeTaskCommonBase *this,uint param_1)

{
  *(undefined ***)this = &___7FStateTreeNodeBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d860

void * __thiscall
IStateTreeModule::_scalar_deleting_destructor_(IStateTreeModule *this,uint param_1)

{
  *this = (IStateTreeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d52d8a0

void * __thiscall
UStateTreeSchema::_scalar_deleting_destructor_(UStateTreeSchema *this,uint param_1)

{
  *(undefined ***)this = &___7UStateTreeSchema__6B_;
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

// EmptyLinkFunctionForGeneratedCodeStateTreeDebugTextTask @ 14d52eaf0

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeDebugTextTask(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeDelayTask @ 14d52eb00

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeDelayTask(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeIndexTypes @ 14d52eb10

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeIndexTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeLinker @ 14d52eb20

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeLinker(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreePropertyBindings @ 14d52eb30

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreePropertyBindings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreePropertyFunctionBase @ 14d52eb40

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreePropertyFunctionBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeReference @ 14d52eb50

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeRunParallelStateTreeTask @ 14d52eb60

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeRunParallelStateTreeTask(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeSchema @ 14d52eb70

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeSchema(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeTaskBase @ 14d52eb80

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeTaskBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeTasksStatus @ 14d52eb90

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeTasksStatus(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeTypes @ 14d52eba0

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeTypes(void)

{
  return;
}

// GetTypeHash @ 14d531410

uint __cdecl GetTypeHash(FStateTreeReferenceOverrideItem *param_1)

{
  UStateTree *pUVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pUVar1 = (param_1->StateTreeReference).StateTree.field0_0x0.DebugPtr;
  FVar2 = (param_1->StateTag).TagName;
  uVar3 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar3 = GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar5 = (FVar2.Number - uVar4) + uVar3 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  return (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14d5314e0

uint __cdecl GetTypeHash(FStateTreeReferenceOverrides *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->OverrideItems).ArrayNum;
  uVar8 = 0;
  pFVar9 = (param_1->OverrideItems).AllocatorInstance.Data;
  pFVar6 = pFVar9 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((param_1->OverrideItems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateTreeReferenceOverrideItem_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar6) break;
    uVar2 = *(undefined8 *)pFVar9;
    uVar3 = ((uint)(*(ulonglong *)(pFVar9 + 8) >> 0x14) & 0xffff ^
            (uint)(*(ulonglong *)(pFVar9 + 8) >> 4)) * -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    uVar3 = GetTypeHash((FNameEntryId)(uint)uVar2);
    uVar5 = ((int)((ulonglong)uVar2 >> 0x20) - uVar4) + uVar3 ^ uVar4 >> 0xd;
    uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
    uVar7 = (uVar4 - uVar5) - uVar3 ^ uVar3 >> 0xd;
    uVar4 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar5 = (uVar7 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
    uVar8 = uVar8 ^ (uVar8 >> 2) +
                    ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) + uVar8 * 0x40 + -0x61c88647;
    pFVar9 = pFVar9 + 0x30;
  }
  return uVar8;
}

// Z_Construct_UClass_UStateTreeSchema_NoRegister @ 14d534950

UClass * __cdecl Z_Construct_UClass_UStateTreeSchema_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeSchema",
               &Z_Registration_Info_UClass_UStateTreeSchema.InnerSingleton,
               UStateTreeSchema::StaticRegisterNativesUStateTreeSchema,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeSchema>,
               InternalVTableHelperCtorCaller<UStateTreeSchema>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeSchema.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand @ 14d534a00

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeExpressionOperand.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeExpressionOperand.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeExpressionOperand.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement @ 14d534a40

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus @ 14d534a80

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeLinkerStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeLinkerStatus.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeLinkerStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeLinkerStatus.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeParameterDataType @ 14d534ac0

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeParameterDataType(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeParameterDataType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeParameterDataType.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeParameterDataType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeParameterDataType.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage @ 14d534b00

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage(void)

{
  if (Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionRules @ 14d534b40

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionRules(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeStateSelectionRules.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeStateSelectionRules.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeStateSelectionRules_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EStateTreeStateSelectionRules.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType @ 14d534b80

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCompactStateTransition @ 14d534bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCompactStateTransition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCompactStateTransition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCompactStateTransition.InnerSingleton,
               &Z_Construct_UScriptStruct_FCompactStateTransition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCompactStateTransition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCompactStateTransition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCompactStateTreeFrame @ 14d534c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCompactStateTreeFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCompactStateTreeFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCompactStateTreeFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FCompactStateTreeFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCompactStateTreeFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCompactStateTreeFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCompactStateTreeParameters @ 14d534cc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCompactStateTreeParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCompactStateTreeParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCompactStateTreeParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCompactStateTreeParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCompactStateTreeParameters.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCompactStateTreeState @ 14d534d40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCompactStateTreeState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCompactStateTreeState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCompactStateTreeState.InnerSingleton,
               &Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCompactStateTreeState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCompactStateTreeState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeDebugTextTask @ 14d534dc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeDebugTextTask(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTask.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTask.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTask.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTask.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData @ 14d534e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTaskInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTaskInstanceData.InnerSingleton
               ,&Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTaskInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTaskInstanceData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeDelayTask @ 14d534ec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeDelayTask(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDelayTask.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeDelayTask.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeDelayTask.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FStateTreeDelayTask.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData @ 14d534f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDelayTaskInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeDelayTaskInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeDelayTaskInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeDelayTaskInstanceData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath @ 14d534fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEditorPropertyPath.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeEditorPropertyPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeEditorPropertyPath.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeEditorPropertyPath.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeIndex8 @ 14d535040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeIndex8(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeIndex8.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeIndex8.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeIndex8.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeIndex8.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex @ 14d5350c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeIdToIndex.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeNodeIdToIndex.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeNodeIdToIndex_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeIdToIndex.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeNodeIdToIndex.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreePropertyBindings @ 14d535140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyBindings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyBindings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreePropertyBindings.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyBindings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreePropertyBindings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase @ 14d5351c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionCommonBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionCommonBase.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionCommonBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreePropertyFunctionCommonBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeReferenceOverrides @ 14d535240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeReferenceOverrides(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrides.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrides.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrides.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeReferenceOverrides.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension @ 14d5352c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask @ 14d535340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTask.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTask.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTask.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTask.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData @ 14d5353c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeStateIdToHandle @ 14d535440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeStateIdToHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeStateIdToHandle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeStateIdToHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeStateIdToHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeStateIdToHandle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeStateIdToHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeStateLink @ 14d5354c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeStateLink(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeStateLink.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeStateLink.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeStateLink.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FStateTreeStateLink.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeStructRef @ 14d535540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeStructRef(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeStructRef.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeStructRef.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeStructRef.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FStateTreeStructRef.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeTasksCompletionStatus @ 14d5355c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeTasksCompletionStatus(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTasksCompletionStatus.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeTasksCompletionStatus.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeTasksCompletionStatus_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeTasksCompletionStatus.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeTasksCompletionStatus.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex @ 14d535640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionIdToIndex.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeTransitionIdToIndex.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionIdToIndex.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeTransitionIdToIndex.InnerSingleton;
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

// IMPLEMENT_MODULE_StateTreeModule @ 14d5356c0

void __cdecl IMPLEMENT_MODULE_StateTreeModule(void)

{
  return;
}

// OnPostRuntimeValidationInstanceData'' @ 1504569d0

void __cdecl
`dynamic_atexit_destructor_for_'FStateTreeModule::OnPostRuntimeValidationInstanceData__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FStateTreeModule::OnPostRuntimeValidationInstanceData._40_8_,
             FStateTreeModule::OnPostRuntimeValidationInstanceData._48_4_);
  if (FStateTreeModule::OnPostRuntimeValidationInstanceData._40_8_ != 0) {
    FMemory::Free((void *)FStateTreeModule::OnPostRuntimeValidationInstanceData._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x000150456a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FStateTreeModule::OnPostRuntimeValidationInstanceData);
  return;
}

// OnPreRuntimeValidationInstanceData'' @ 150456a10

void __cdecl
`dynamic_atexit_destructor_for_'FStateTreeModule::OnPreRuntimeValidationInstanceData__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FStateTreeModule::OnPreRuntimeValidationInstanceData._40_8_,
             FStateTreeModule::OnPreRuntimeValidationInstanceData._48_4_);
  if (FStateTreeModule::OnPreRuntimeValidationInstanceData._40_8_ != 0) {
    FMemory::Free((void *)FStateTreeModule::OnPreRuntimeValidationInstanceData._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x000150456a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FStateTreeModule::OnPreRuntimeValidationInstanceData);
  return;
}

// `dynamic_atexit_destructor_for_'Batch'' @ 150456a50

void __cdecl
`FStateTreePropertyBindings::GetBatch'::__l2::_dynamic_atexit_destructor_for__Batch__(void)

{
  FPropertyBindingBindableStructDescriptor::~FPropertyBindingBindableStructDescriptor
            ((FPropertyBindingBindableStructDescriptor *)&Batch);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompletedStateBeforeTransitionSourceFailsTransition'' @ 150456a70

void __cdecl
UE::StateTree::Private::
_dynamic_atexit_destructor_for__CVarCompletedStateBeforeTransitionSourceFailsTransition__(void)

{
  CVarCompletedStateBeforeTransitionSourceFailsTransition._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCompletedStateBeforeTransitionSourceFailsTransition);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompletedTransitionStatesCreateNewStates'' @ 150456a90

void __cdecl
UE::StateTree::Private::
_dynamic_atexit_destructor_for__CVarCompletedTransitionStatesCreateNewStates__(void)

{
  CVarCompletedTransitionStatesCreateNewStates._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCompletedTransitionStatesCreateNewStates);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRuntimeValidationInstanceDataGC'' @ 150456ab0

void __cdecl
UE::StateTree::Debug::Private::_dynamic_atexit_destructor_for__CVarRuntimeValidationInstanceDataGC__
          (void)

{
  CVarRuntimeValidationInstanceDataGC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRuntimeValidationInstanceDataGC);
  return;
}

// `dynamic_atexit_destructor_for_'LogStateTree'' @ 150456ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStateTree__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStateTree);
  return;
}

