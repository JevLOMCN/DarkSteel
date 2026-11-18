// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 206

// EngineSlateContentDir'' @ 1413dbfe0

void __cdecl `dynamic_initializer_for_'FStateTreeStyle::EngineSlateContentDir__(void)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  FString local_18;
  
  pTVar1 = &FPaths::EngineContentDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&FStateTreeStyle::EngineSlateContentDir.Data,pTVar1,7 - (uint)(pTVar1->ArrayNum != 0));
  ::FString::PathAppend(&FStateTreeStyle::EngineSlateContentDir,L"Slate",5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(`dynamic_atexit_destructor_for_'FStateTreeStyle::EngineSlateContentDir__);
  return;
}

// StateExpansionStates'' @ 1413dc050

void __cdecl `dynamic_initializer_for_'UE::StateTree::SCompactTreeView::StateExpansionStates__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::StateTree::SCompactTreeView::StateExpansionStates__);
  return;
}

// StateTreePluginContentDir'' @ 1413dc070

void __cdecl `dynamic_initializer_for_'FStateTreeStyle::StateTreePluginContentDir__(void)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  FString local_18;
  
  pTVar1 = &FPaths::EnginePluginsDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&FStateTreeStyle::StateTreePluginContentDir.Data,pTVar1,
             0x1d - (uint)(pTVar1->ArrayNum != 0));
  ::FString::PathAppend
            (&FStateTreeStyle::StateTreePluginContentDir,L"Runtime/StateTree/Resources",0x1b);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(`dynamic_atexit_destructor_for_'FStateTreeStyle::StateTreePluginContentDir__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStateTreeDeveloper'' @ 1413dc0e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantStateTreeDeveloper__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StateTreeDeveloper";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StateTreeDeveloper",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStateTreeDeveloperModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'SchemaCanBeOverridenTag'' @ 1413dc130

void __cdecl UE::StateTree::_dynamic_initializer_for__SchemaCanBeOverridenTag__(void)

{
  ::FName::FName(&SchemaCanBeOverridenTag,L"SchemaCanBeOverriden");
  return;
}

// `dynamic_initializer_for_'SchemaTag'' @ 1413dc150

void __cdecl UE::StateTree::_dynamic_initializer_for__SchemaTag__(void)

{
  ::FName::FName(&SchemaTag,L"Schema");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeDeveloper_Internal_Debugger_SCompactTreeDebuggerView_h__Script_StateTreeDeveloper_2553593685'' @ 1413dc170

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeDeveloper_Internal_Debugger_SCompactTreeDebuggerView_h__Script_StateTreeDeveloper_2553593685__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeDeveloper",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeDeveloper_Internal_Debugger_SCompactTreeDebuggerView_h__Script_StateTreeDeveloper_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeDeveloper_Internal_Widgets_SCompactTreeView_h__Script_StateTreeDeveloper_2672288084'' @ 1413dc1b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeDeveloper_Internal_Widgets_SCompactTreeView_h__Script_StateTreeDeveloper_2672288084__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeDeveloper",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeDeveloper_Internal_Widgets_SCompactTreeView_h__Script_StateTreeDeveloper_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_StateTreeDeveloper'' @ 1413dc1f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_StateTreeDeveloper__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x207bfe7a;
  local_res8[0].DeclarationsHash = 0x411f4e60;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_StateTreeDeveloper,L"/Script/StateTreeDeveloper",
             &Z_Registration_Info_UPackage__Script_StateTreeDeveloper,local_res8);
  return;
}

// Z_Construct_UScriptStruct_FStateItemCustomData @ 14d7027c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateItemCustomData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateItemCustomData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateItemCustomData.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateItemCustomData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateItemCustomData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FStateItemCustomData.InnerSingleton;
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

// NewStructOps @ 14d702840

void * __cdecl Z_Construct_UScriptStruct_FStateItemDebuggerData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<UE::StateTree::CompactTreeView::FStateItemDebuggerData,&UE::CoreUObject::Private::Construct<UE::StateTree::CompactTreeView::FStateItemDebuggerData>,&UE::CoreUObject::Private::ConstructForTests<UE::StateTree::CompactTreeView::FStateItemDebuggerData>,&UE::CoreUObject::Private::Destruct<UE::StateTree::CompactTreeView::FStateItemDebuggerData>,&UE::CoreUObject::Private::Copy<UE::StateTree::CompactTreeView::FStateItemDebuggerData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_StateTreeDeveloper @ 14d702880

UPackage * __cdecl Z_Construct_UPackage__Script_StateTreeDeveloper(void)

{
  if (Z_Registration_Info_UPackage__Script_StateTreeDeveloper.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_StateTreeDeveloper.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_StateTreeDeveloper.OuterSingleton;
}

// NewStructOps @ 14d7028e0

void * __cdecl Z_Construct_UScriptStruct_FStateItemCustomData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<UE::StateTree::CompactTreeView::FStateItemCustomData,&UE::CoreUObject::Private::Construct<UE::StateTree::CompactTreeView::FStateItemCustomData>,&UE::CoreUObject::Private::ConstructForTests<UE::StateTree::CompactTreeView::FStateItemCustomData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d702aa0

void * __thiscall
UE::StateTreeDebugger::FRewindDebuggerRecordingExtension::_scalar_deleting_destructor_
          (FRewindDebuggerRecordingExtension *this,uint param_1)

{
  *this = (FRewindDebuggerRecordingExtension)&___7IRewindDebuggerRuntimeExtension__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d702bf0

void * __thiscall
FStateTreeDeveloperModule::_scalar_deleting_destructor_
          (FStateTreeDeveloperModule *this,uint param_1)

{
  FRewindDebuggerRecordingExtension *pFVar1;
  
  pFVar1 = (this->RewindDebuggerRecordingExtension).Ptr;
  if (pFVar1 != (FRewindDebuggerRecordingExtension *)0x0) {
    *pFVar1 = (FRewindDebuggerRecordingExtension)&___7IRewindDebuggerRuntimeExtension__6B_;
    ::operator_delete(pFVar1,8);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// ApplyAfter<`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&> @ 14d704740

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_UE::StateTreeDebugger::SFrameEventsView::Construct_::__l2::<lambda_2>_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_2> *param_1,
          TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_2,
          TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FFrameEventTreeElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar3 = param_2->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 != (FFrameEventTreeElement *)0x0) {
    if ((param_3 == &pFVar3->Children) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = (pFVar3->Children).ArrayNum;
    if (iVar1 != 0) {
      iVar6 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar1,&param_3->AllocatorInstance,&param_3->ArrayNum,
                         &param_3->ArrayMax);
      ConstructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>
                ((param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10,
                 (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                 (pFVar3->Children).AllocatorInstance.Data,iVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// ConstructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int> @ 14d704810

void __cdecl
ConstructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>
          (void *param_1,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FFrameEventTreeElement **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int> @ 14d704850

void __cdecl
ConstructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
          (void *param_1,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FStateItem **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// DestructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int> @ 14d704e70

void __cdecl
DestructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>
          (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int> @ 14d704eb0

void __cdecl
DestructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
          (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1,int param_2)

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

// GetTypeHash<UE::StateTreeDebugger::FFrameEventTreeElement_const_,1> @ 14d706c00

uint __cdecl
GetTypeHash<UE::StateTreeDebugger::FFrameEventTreeElement_const_,1>
          (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<UE::StateTree::SCompactTreeView::FStateItem_const_,1> @ 14d706c30

uint __cdecl
GetTypeHash<UE::StateTree::SCompactTreeView::FStateItem_const_,1>
          (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// IsObjectPtrEqual<UStateTree,TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr>,0> @ 14d706c60

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UStateTree,TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr>,0>
          (TObjectPtr<UStateTree> *param_1,TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> *param_2
          )

{
  UStateTree *pUVar1;
  
  pUVar1 = (UStateTree *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  if ((param_1->field0_0x0).DebugPtr == (UStateTree *)0x0) {
    return pUVar1 == (UStateTree *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == pUVar1;
}

// MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>,int_&,int_&> @ 14d706d40

T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&,int_&,int_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>,int_&,int_&>
                    (T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&,int_&,int_&>
                     *__return_storage_ptr__,TSharedPtr<ITableRow,1> *param_1,
                    TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
                    *param_2,int *param_3,int *param_4)

{
  __return_storage_ptr__->Arg3 = param_4;
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>,int_&,int_&> @ 14d706d60

T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&,int_&,int_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>,int_&,int_&>
                    (T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&,int_&,int_&>
                     *__return_storage_ptr__,TSharedPtr<ITableRow,1> *param_1,
                    TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                    *param_2,int *param_3,int *param_4)

{
  __return_storage_ptr__->Arg3 = param_4;
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&> @ 14d706d80

T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>
                   (TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
                    *param_1)

{
  STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&> @ 14d706d90

T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>
                   (TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                    *param_1)

{
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&> @ 14d706da0

T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>
                    (T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>
                     *__return_storage_ptr__,TSharedRef<STableViewBase,1> *param_1,
                    TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_> @ 14d706dc0

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_>
                   (TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
                    *param_1)

{
  SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_> @ 14d706dd0

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_>
                   (TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                    *param_1)

{
  SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_> @ 14d706de0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_>
                   (TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
                    *param_1)

{
  STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_> @ 14d706df0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_>
                   (TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                    *param_1)

{
  STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_> @ 14d706e00

T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_>
          (TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1> *param_1)

{
  SFrameEventViewRow *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>)param_1;
}

// MakeShared<UE::StateTree::SCompactTreeView::FStateItem,1> @ 14d706e10

TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> * __cdecl
MakeShared<UE::StateTree::SCompactTreeView::FStateItem,1>
          (TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> *__return_storage_ptr__)

{
  FLinearColor FVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar2 = operator_new(0x90);
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFStateItem_SCompactTreeView_StateTree_UE___00_SharedPointerInternals__6B_
    ;
    pTVar2[2]._padding_ = 0;
    pTVar2[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[3]._padding_ = 0;
    pTVar2[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[4]._padding_ = 0;
    pTVar2[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[5]._padding_ = 0;
    pTVar2[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[6]._padding_ = 0;
    pTVar2[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[7]._padding_ = 0;
    pTVar2[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[8]._padding_ = 0;
    pTVar2[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[1]._padding_ = 0;
    pTVar2[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[1].WeakReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar2 + 2));
    FText::FText((FText *)(pTVar2 + 3));
    pTVar2[4]._padding_ = 0;
    pTVar2[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[5]._padding_ = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&pTVar2[5].SharedReferenceCount);
    pTVar2[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[7]._padding_ = 0;
    FVar1 = FLinearColor::White;
    *(undefined1 *)&pTVar2[8].SharedReferenceCount = 0;
    *(FLinearColor_u_0 *)&pTVar2[7].SharedReferenceCount = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
    *(undefined1 *)&pTVar2[8].WeakReferenceCount = 1;
    pTVar3 = pTVar2;
  }
  TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1>::
  TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1>
            (__return_storage_ptr__,(FStateItem *)(pTVar3 + 1),pTVar3);
  return __return_storage_ptr__;
}

// MakeShared<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1> @ 14d706f00

TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1> * __cdecl
MakeShared<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
           *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar2 = operator_new(0x408);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00_____00_SharedPointerInternals__6B_
    ;
    pTVar2[1]._padding_ = (longlong)&___7ITableRow__6B_;
    SBorder::SBorder((SBorder *)&pTVar2[1].SharedReferenceCount);
    pTVar2[1]._padding_ =
         (longlong)
         &STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
          _vftable__for__ITableRow__;
    *(undefined ***)&pTVar2[1].SharedReferenceCount =
         &STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
          _vftable__for__SBorder__;
    puVar1 = &pTVar2[4].SharedReferenceCount.field_0x2;
    *puVar1 = *puVar1 | 4;
    pTVar2[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x30]._padding_ = 0;
    pTVar2[0x30].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x31]._padding_ = 0;
    pTVar2[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33]._padding_ = 0;
    pTVar2[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x34]._padding_ = 0;
    pTVar2[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35]._padding_ = 0;
    pTVar2[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x36]._padding_ = 0;
    pTVar2[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x37]._padding_ = 0;
    pTVar2[0x37].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar2[0x38]._padding_ + 4) = 0;
    pTVar2[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x39]._padding_ = 0;
    pTVar2[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a]._padding_ = 0;
    pTVar2[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3b]._padding_ = 0;
    pTVar2[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3c]._padding_ = 0;
    pTVar2[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d]._padding_ = 0;
    pTVar2[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3e]._padding_ = 0;
    pTVar2[0x3f]._padding_ = 0;
    pTVar2[0x3f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar2[0x30].WeakReferenceCount = 1;
    pTVar2[4].SharedReferenceCount.field_0x3 = 2;
  }
  TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
            (__return_storage_ptr__,
             (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)(pTVar2 + 1),
             pTVar2);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_> @ 14d707070

TSlateDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
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
       (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0;
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
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
    STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
              ((STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
               (pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
              *)(local_38 + 0x10),
             (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)(pTVar3 + 1)
             ,pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
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

// MakeTDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>_> @ 14d707220

TSlateDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>_>
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
       (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0;
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
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
    STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
              ((STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
               (pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
              *)(local_38 + 0x10),
             (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)(pTVar3 + 1)
             ,pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&>_>
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

// MakeTDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_> @ 14d7073d0

TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                     ((TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                       *)(local_38 + 0x10));
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
      (TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
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

// MakeTDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>_> @ 14d707530

TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                     ((TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                       *)(local_38 + 0x10));
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
      (TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&>_>
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

// MakeTDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14d707690

TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                     ((TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                       *)(local_38 + 0x10));
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
      (TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
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

// MakeTDecl<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T0RequiredArgs> @ 14d7077f0

TSlateDecl<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T0RequiredArgs> @ 14d7078a0

TSlateDecl<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_> @ 14d707950

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_> @ 14d707a00

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>_> @ 14d707ab0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::StateTreeDebugger::SFrameEventViewRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>_> @ 14d707b60

TSlateDecl<UE::StateTreeDebugger::SFrameEventViewRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>_>
* __cdecl MakeTDecl<UE::StateTreeDebugger::SFrameEventViewRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>_>
                    (TSlateDecl<UE::StateTreeDebugger::SFrameEventViewRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<UE::StateTreeDebugger::SFrameEventViewRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>_>
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
  (__return_storage_ptr__->_Widget).Object = (SFrameEventViewRow *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x418);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFrameEventViewRow_StateTreeDebugger_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x408);
    STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
    STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
              ((STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
               (pTVar3 + 1));
    pTVar3[1]._padding_ =
         (longlong)&UE::StateTreeDebugger::SFrameEventViewRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &UE::StateTreeDebugger::SFrameEventViewRow::_vftable__for__SBorder__;
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>::
  TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>
            ((TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1> *)(local_48 + 0x10),
             (SFrameEventViewRow *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<UE::StateTreeDebugger::SFrameEventViewRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SFrameEventViewRow *)local_48._16_8_;
    local_48._0_8_ = (SFrameEventViewRow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SFrameEventViewRow *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<UE::StateTreeDebugger::SFrameEventViewRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x408);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&,int_&,int_&>_> @ 14d707d40

TSlateDecl<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&,int_&,int_&>_>
* __cdecl MakeTDecl<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&,int_&,int_&>_>
                    (TSlateDecl<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&,int_&,int_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&,int_&,int_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&,int_&,int_&>_>
  ::
  TSlateDecl<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>_&&,int_&,int_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&,int_&,int_&>_> @ 14d707df0

TSlateDecl<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&,int_&,int_&>_>
* __cdecl MakeTDecl<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&,int_&,int_&>_>
                    (TSlateDecl<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&,int_&,int_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&,int_&,int_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&,int_&,int_&>_>
  ::
  TSlateDecl<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>_&&,int_&,int_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_> @ 14d707ea0

TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
* __cdecl SharedPointerInternals::
          NewIntrusiveReferenceController<1,STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_>
                    (void)

{
  uchar *puVar1;
  longlong *plVar2;
  char cVar3;
  TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
  *pTVar4;
  undefined8 *local_res8;
  
  pTVar4 = ::operator_new(0xb10);
  if (pTVar4 == (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
                 *)0x0) {
    return (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
            *)0x0;
  }
  *(undefined4 *)&pTVar4->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 1;
  pTVar4->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_V__STreeView_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00_____00_SharedPointerInternals__6B_
  ;
  SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
  SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
            ((SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
             &pTVar4->ObjectStorage,Tree);
  puVar1 = (pTVar4->ObjectStorage).Pad + 0xa98;
  *(undefined ***)(pTVar4->ObjectStorage).Pad =
       &STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
        _vftable__for__SCompoundWidget__;
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
       &STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
        _vftable__for__IScrollableWidget__;
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x588) =
       &___7__STreeView_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00____6B_;
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
    `SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SetItemsSource'::__l2
    ::<lambda_1>::operator()(&local_res8);
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
                    ___7__FArrayPointer_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00___ItemsSource_Slate_UE__6B_
      ;
    }
  }
  SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SetItemsSource
            ((SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
             &pTVar4->ObjectStorage,
             (IItemsSource<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
             &local_res8);
  return pTVar4;
}

// NewIntrusiveReferenceController<1,STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_> @ 14d708090

TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
* __cdecl SharedPointerInternals::
          NewIntrusiveReferenceController<1,STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_>
                    (void)

{
  uchar *puVar1;
  longlong *plVar2;
  char cVar3;
  TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
  *pTVar4;
  undefined8 *local_res8;
  
  pTVar4 = ::operator_new(0xb10);
  if (pTVar4 == (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                 *)0x0) {
    return (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
            *)0x0;
  }
  *(undefined4 *)&pTVar4->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 1;
  pTVar4->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_V__STreeView_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00_____00_SharedPointerInternals__6B_
  ;
  SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
  SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>
            ((SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)
             &pTVar4->ObjectStorage,Tree);
  puVar1 = (pTVar4->ObjectStorage).Pad + 0xa98;
  *(undefined ***)(pTVar4->ObjectStorage).Pad =
       &STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
        _vftable__for__SCompoundWidget__;
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
       &STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
        _vftable__for__IScrollableWidget__;
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x588) =
       &___7__STreeView_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00____6B_;
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
    `SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SetItemsSource'::__l2::
    <lambda_1>::operator()(&local_res8);
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
                    ___7__FArrayPointer_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ItemsSource_Slate_UE__6B_
      ;
    }
  }
  SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SetItemsSource
            ((SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)
             &pTVar4->ObjectStorage,
             (IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)&local_res8
            );
  return pTVar4;
}

// Reverse<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> @ 14d708af0

void __cdecl
AlgoImpl::Reverse<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
          (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FFrameEventTreeElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar4;
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

// Reverse<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> @ 14d708b40

void __cdecl
AlgoImpl::Reverse<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>
          (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FStateItem *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar4;
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

// VisitApplyEncoded<1,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d708b90

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"");
  pFVar1 = param_1->TypePath;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"");
  pFVar1 = param_1->InstanceDataAsString;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  pFVar1 = param_1->DebugText;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<1,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d708cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceLogEvent::ToFullString
                     ((FStateTreeTraceLogEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<1,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d708d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceLogEvent::GetValueString
                     ((FStateTreeTraceLogEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<1,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d708dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceLogEvent::ToFullString
                     ((FStateTreeTraceLogEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<2,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d708e40

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"");
  pFVar1 = param_1->TypePath;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"");
  pFVar1 = param_1->InstanceDataAsString;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  pFVar1 = param_1->DebugText;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<2,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d708f70

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTracePropertyEvent::ToFullString
                     ((FStateTreeTracePropertyEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<2,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d708ff0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTracePropertyEvent::GetValueString
                     ((FStateTreeTracePropertyEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<2,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709070

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTracePropertyEvent::ToFullString
                     ((FStateTreeTracePropertyEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<3,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d7090f0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"");
  pFVar1 = param_1->TypePath;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"");
  pFVar1 = param_1->InstanceDataAsString;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  pFVar1 = param_1->DebugText;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<3,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709220

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceNodeEvent::ToFullString
                     ((FStateTreeTraceNodeEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<3,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d7092a0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceNodeEvent::GetValueString
                     ((FStateTreeTraceNodeEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<3,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709320

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceNodeEvent::ToFullString
                     ((FStateTreeTraceNodeEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<4,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d7093a0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"");
  pFVar1 = param_1->TypePath;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"");
  pFVar1 = param_1->InstanceDataAsString;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  pFVar1 = param_1->DebugText;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<4,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d7094d0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceStateEvent::ToFullString
                     ((FStateTreeTraceStateEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<4,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709550

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceStateEvent::GetValueString
                     ((FStateTreeTraceStateEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<4,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d7095d0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceStateEvent::ToFullString
                     ((FStateTreeTraceStateEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<5,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d709650

void __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  int iVar1;
  void *pvVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  iVar1 = (int)param_2->_padding_;
  pvVar2 = (void *)param_2->_padding_;
  FStack_48.Data.ArrayNum = iVar1;
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    FStack_48.Data.ArrayNum = 0;
    FStack_48.Data.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&FStack_48,iVar1,&FStack_48.Data.ArrayMax);
    memcpy(FStack_48.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = param_1->TypePath;
  if (pFVar3 != &FStack_48) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = FStack_48.Data.AllocatorInstance.Data;
    FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = FStack_48.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = FStack_48.Data.ArrayMax;
    FStack_48.Data.ArrayNum = 0;
    FStack_48.Data.ArrayMax = 0;
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  iVar1 = (int)param_2->_padding_;
  pvVar2 = (void *)param_2->_padding_;
  FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&FStack_38,iVar1,&FStack_38.Data.ArrayMax);
    memcpy(FStack_38.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = param_1->InstanceDataAsString;
  if (pFVar3 != &FStack_38) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = FStack_38.Data.AllocatorInstance.Data;
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = FStack_38.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = FStack_38.Data.ArrayMax;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  iVar1 = (int)param_2->_padding_;
  pvVar2 = (void *)param_2->_padding_;
  FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_28.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    FStack_28.Data.ArrayNum = 0;
    FStack_28.Data.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&FStack_28,iVar1,&FStack_28.Data.ArrayMax);
    memcpy(FStack_28.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = param_1->DebugText;
  if (pFVar3 != &FStack_28) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = FStack_28.Data.AllocatorInstance.Data;
    FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = FStack_28.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = FStack_28.Data.ArrayMax;
    FStack_28.Data.ArrayNum = 0;
    FStack_28.Data.ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<5,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709660

void __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceTaskEvent::ToFullString
                     ((FStateTreeTraceTaskEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<5,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d7096e0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceTaskEvent::GetValueString
                     ((FStateTreeTraceTaskEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<5,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709760

void __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceTaskEvent::ToFullString
                     ((FStateTreeTraceTaskEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<6,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d7097e0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  int iVar1;
  void *pvVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  iVar1 = (int)param_2->_padding_;
  pvVar2 = (void *)param_2->_padding_;
  FStack_48.Data.ArrayNum = iVar1;
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    FStack_48.Data.ArrayNum = 0;
    FStack_48.Data.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&FStack_48,iVar1,&FStack_48.Data.ArrayMax);
    memcpy(FStack_48.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = param_1->TypePath;
  if (pFVar3 != &FStack_48) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = FStack_48.Data.AllocatorInstance.Data;
    FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = FStack_48.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = FStack_48.Data.ArrayMax;
    FStack_48.Data.ArrayNum = 0;
    FStack_48.Data.ArrayMax = 0;
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  iVar1 = (int)param_2->_padding_;
  pvVar2 = (void *)param_2->_padding_;
  FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&FStack_38,iVar1,&FStack_38.Data.ArrayMax);
    memcpy(FStack_38.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = param_1->InstanceDataAsString;
  if (pFVar3 != &FStack_38) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = FStack_38.Data.AllocatorInstance.Data;
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = FStack_38.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = FStack_38.Data.ArrayMax;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  iVar1 = (int)param_2->_padding_;
  pvVar2 = (void *)param_2->_padding_;
  FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_28.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    FStack_28.Data.ArrayNum = 0;
    FStack_28.Data.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&FStack_28,iVar1,&FStack_28.Data.ArrayMax);
    memcpy(FStack_28.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = param_1->DebugText;
  if (pFVar3 != &FStack_28) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = FStack_28.Data.AllocatorInstance.Data;
    FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = FStack_28.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = FStack_28.Data.ArrayMax;
    FStack_28.Data.ArrayNum = 0;
    FStack_28.Data.ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<6,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d7097f0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceEvaluatorEvent::ToFullString
                     ((FStateTreeTraceEvaluatorEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<6,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709870

void __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceEvaluatorEvent::GetValueString
                     ((FStateTreeTraceEvaluatorEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<6,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d7098f0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceEvaluatorEvent::ToFullString
                     ((FStateTreeTraceEvaluatorEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<7,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d709970

void __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"");
  pFVar1 = param_1->TypePath;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"");
  pFVar1 = param_1->InstanceDataAsString;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  pFVar1 = param_1->DebugText;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<7,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709aa0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceTransitionEvent::ToFullString
                     ((FStateTreeTraceTransitionEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<7,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709b20

void __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceTransitionEvent::GetValueString
                     ((FStateTreeTraceTransitionEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<7,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709ba0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceTransitionEvent::ToFullString
                     ((FStateTreeTraceTransitionEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<8,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d709c20

void __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  int iVar1;
  void *pvVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  iVar1 = (int)param_2->_padding_;
  pvVar2 = (void *)param_2->_padding_;
  FStack_48.Data.ArrayNum = iVar1;
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    FStack_48.Data.ArrayNum = 0;
    FStack_48.Data.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&FStack_48,iVar1,&FStack_48.Data.ArrayMax);
    memcpy(FStack_48.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = param_1->TypePath;
  if (pFVar3 != &FStack_48) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = FStack_48.Data.AllocatorInstance.Data;
    FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = FStack_48.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = FStack_48.Data.ArrayMax;
    FStack_48.Data.ArrayNum = 0;
    FStack_48.Data.ArrayMax = 0;
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  iVar1 = (int)param_2->_padding_;
  pvVar2 = (void *)param_2->_padding_;
  FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&FStack_38,iVar1,&FStack_38.Data.ArrayMax);
    memcpy(FStack_38.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = param_1->InstanceDataAsString;
  if (pFVar3 != &FStack_38) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = FStack_38.Data.AllocatorInstance.Data;
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = FStack_38.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = FStack_38.Data.ArrayMax;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  iVar1 = (int)param_2->_padding_;
  pvVar2 = (void *)param_2->_padding_;
  FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_28.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    FStack_28.Data.ArrayNum = 0;
    FStack_28.Data.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&FStack_28,iVar1,&FStack_28.Data.ArrayMax);
    memcpy(FStack_28.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = param_1->DebugText;
  if (pFVar3 != &FStack_28) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Data).AllocatorInstance.Data = FStack_28.Data.AllocatorInstance.Data;
    FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = FStack_28.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = FStack_28.Data.ArrayMax;
    FStack_28.Data.ArrayNum = 0;
    FStack_28.Data.ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<8,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709c30

void __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceConditionEvent::ToFullString
                     ((FStateTreeTraceConditionEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<8,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709cb0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceConditionEvent::GetValueString
                     ((FStateTreeTraceConditionEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<8,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709d30

void __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceConditionEvent::ToFullString
                     ((FStateTreeTraceConditionEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<9,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d709db0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"");
  pFVar1 = param_1->TypePath;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"");
  pFVar1 = param_1->InstanceDataAsString;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  pFVar1 = param_1->DebugText;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<9,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709ee0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceActiveStatesEvent::ToFullString
                     ((FStateTreeTraceActiveStatesEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<9,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709f60

void __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceActiveStatesEvent::GetValueString
                     ((FStateTreeTraceActiveStatesEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<9,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d709fe0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceActiveStatesEvent::ToFullString
                     ((FStateTreeTraceActiveStatesEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<10,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d70a060

void __cdecl
UE::Core::Private::
VisitApplyEncoded<10,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"");
  pFVar1 = param_1->TypePath;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"");
  pFVar1 = param_1->InstanceDataAsString;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  pFVar1 = param_1->DebugText;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<10,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d70a190

void __cdecl
UE::Core::Private::
VisitApplyEncoded<10,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceInstanceFrameEvent::ToFullString
                     ((FStateTreeTraceInstanceFrameEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<10,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d70a210

void __cdecl
UE::Core::Private::
VisitApplyEncoded<10,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceInstanceFrameEvent::GetValueString
                     ((FStateTreeTraceInstanceFrameEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<10,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d70a290

void __cdecl
UE::Core::Private::
VisitApplyEncoded<10,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTraceInstanceFrameEvent::ToFullString
                     ((FStateTreeTraceInstanceFrameEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<0,0,`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&> @ 14d70a310

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"");
  pFVar1 = param_1->TypePath;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"");
  pFVar1 = param_1->InstanceDataAsString;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  pFVar1 = param_1->DebugText;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<0,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip'::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d70a440

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTracePhaseEvent::ToFullString
                     ((FStateTreeTracePhaseEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->Tooltip;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<0,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d70a4c0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_1> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTracePhaseEvent::GetValueString
                     ((FStateTreeTracePhaseEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitApplyEncoded<0,0,`UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription'::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&> @ 14d70a540

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>
          (<lambda_2> *param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = FStateTreeTracePhaseEvent::ToFullString
                     ((FStateTreeTracePhaseEvent *)param_2,&local_18,param_1->StateTree);
  pFVar1 = param_1->EventDescription;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ~TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0> @ 14d70f9b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget::Construct_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0> @ 14d70f9d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget::Construct_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0> @ 14d70f9f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0> @ 14d70fa10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::StateTree::SCompactTreeView::CreateNameWidgetInternal_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_2>,0,0> @ 14d70fa30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TScopeGuard<`UE::StateTreeDebugger::SFrameEventsView::RequestRefresh'::__l2::<lambda_1>_> @ 14d70fa50

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::StateTreeDebugger::SFrameEventsView::RequestRefresh'::__l2::<lambda_1>_>::
~TScopeGuard<_UE::StateTreeDebugger::SFrameEventsView::RequestRefresh_::__l2::<lambda_1>_>
          (void *this)

{
  TSet<TTuple<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 0x2c0) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0x2c0);
  this_00 = (TSet<TTuple<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
             *)(plVar2 + 0x147);
  bVar4 = 1 < (int)plVar2[0x150];
  if (!bVar4) {
    TSet<TTuple<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,(int)plVar2[0x148]);
  *(undefined4 *)(plVar2 + 0x148) = 0;
  if (*(int *)((longlong)plVar2 + 0xa44) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)((longlong)plVar2 + 0xa44));
  }
  *(undefined4 *)(plVar2 + 0x14d) = 0xffffffff;
  *(undefined4 *)((longlong)plVar2 + 0xa6c) = 0;
  *(undefined4 *)(plVar2 + 0x14c) = 0;
  if ((*(int *)((longlong)plVar2 + 0xa64) < 0) || (0x80 < *(int *)((longlong)plVar2 + 0xa64))) {
    *(undefined4 *)((longlong)plVar2 + 0xa64) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(plVar2 + 0x149),0);
  }
  if (bVar4) {
    *(undefined4 *)(plVar2 + 0x150) = 1;
    TSet<TTuple<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  (**(code **)(*plVar2 + 0x248))(plVar2);
  UE::StateTreeDebugger::SFrameEventsView::ExpandAll
            (*(SFrameEventsView **)this,&(*(SFrameEventsView **)this)->EventsTreeElements);
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 0x2c0) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d70fbaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x2c0) + 0x248))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 14d714888

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct
   UE::StateTreeDebugger::FFrameEventTreeElement,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d71488b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 14d714898

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct UE::StateTree::SCompactTreeView::FStateItem,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d71489b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d7148a8

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   UE::StateTreeDebugger::FFrameEventTreeElement,1> >::`vector deleting destructor'`adjustor{680}'
   (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d7148bc

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   UE::StateTree::SCompactTreeView::FStateItem,1> >::`vector deleting destructor'`adjustor{680}'
   (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d7148d0

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   UE::StateTreeDebugger::FFrameEventTreeElement,1> >::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d7148e0

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   UE::StateTree::SCompactTreeView::FStateItem,1> >::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d7148f0

/* [thunk]:public: virtual void * __ptr64 __cdecl STreeView<class TSharedPtr<struct
   UE::StateTreeDebugger::FFrameEventTreeElement,1> >::`vector deleting destructor'`adjustor{680}'
   (unsigned int) __ptr64 */

void * __thiscall
STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
_vector_deleting_destructor__adjustor_680__
          (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
                      &this[-1].field_0x858,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d714904

/* [thunk]:public: virtual void * __ptr64 __cdecl STreeView<class TSharedPtr<struct
   UE::StateTree::SCompactTreeView::FStateItem,1> >::`vector deleting destructor'`adjustor{680}'
   (unsigned int) __ptr64 */

void * __thiscall
STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
_vector_deleting_destructor__adjustor_680__
          (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)
                      &this[-1].field_0x858,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d714918

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::StateTreeDebugger::SFrameEventViewRow::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::StateTreeDebugger::SFrameEventViewRow::_vector_deleting_destructor__adjustor_8__
          (SFrameEventViewRow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SFrameEventViewRow *)&this[-1].Item.SharedReferenceCount,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d714930

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
::_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714960

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714990

void * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
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
       ___7__FObservableArrayPointer_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00___ItemsSource_Slate_UE__6B_
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

// `scalar_deleting_destructor' @ 14d714a50

void * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this
          ,uint param_1)

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
       ___7__FObservableArrayPointer_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ItemsSource_Slate_UE__6B_
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

// `scalar_deleting_destructor' @ 14d714b10

void * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
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
       ___7__FSharedObservableArray_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00___ItemsSource_Slate_UE__6B_
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

// `scalar_deleting_destructor' @ 14d714ba0

void * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,
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
       ___7__FSharedObservableArray_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ItemsSource_Slate_UE__6B_
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

// `scalar_deleting_destructor' @ 14d714c30

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714c60

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714c90

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714cc0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714cf0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714d20

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714d50

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714d80

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714db0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714de0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714e10

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714e40

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714e70

void * __thiscall
SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
_scalar_deleting_destructor_
          (SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
          uint param_1)

{
  ~SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714ed0

void * __thiscall
SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714f30

void * __thiscall
STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
_scalar_deleting_destructor_
          (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
          uint param_1)

{
  ~STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714f90

void * __thiscall
STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d714ff0

void * __thiscall
STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
_scalar_deleting_destructor_
          (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
          uint param_1)

{
  ~STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715050

void * __thiscall
STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::_scalar_deleting_destructor_
          (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,uint param_1)

{
  ~STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7150b0

void * __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
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

// `scalar_deleting_destructor' @ 14d715110

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715140

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715170

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7151a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7151d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715200

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715230

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715260

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 14d7152c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 14d715320

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 14d715380

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 14d7153e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::StateTree::SCompactTreeView_const_,1,void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::StateTree::SCompactTreeView_const_,1,void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 14d715440

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::StateTree::SCompactTreeView_const_,1,void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::StateTree::SCompactTreeView_const_,1,void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,bool),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 14d7154a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
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

// `scalar_deleting_destructor' @ 14d715500

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
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

// `scalar_deleting_destructor' @ 14d715560

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
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

// `scalar_deleting_destructor' @ 14d7155c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
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

// `scalar_deleting_destructor' @ 14d715620

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::SCompactTreeView,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::StateTree::SCompactTreeView,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 14d715680

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::SCompactTreeView,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::StateTree::SCompactTreeView,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 14d7156e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::SCompactTreeView,1,void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 14d715740

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715770

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7157a0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7157d0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715800

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715830

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715860

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715890

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7158c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7158f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715920

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715950

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7159c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715ae0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::StateTree::SCompactTreeView::FStateItem,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::StateTree::SCompactTreeView::FStateItem,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715b20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715b60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715ba0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715be0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715c20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715c60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715ca0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::StateTreeDebugger::SFrameEventViewRow,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::StateTreeDebugger::SFrameEventViewRow,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x418);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715ce0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715d20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715d60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::StateTreeDebugger::FFrameEventTreeElement,SharedPointerInternals::DefaultDeleter<UE::StateTreeDebugger::FFrameEventTreeElement>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<UE::StateTreeDebugger::FFrameEventTreeElement,SharedPointerInternals::DefaultDeleter<UE::StateTreeDebugger::FFrameEventTreeElement>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715da0

void * __thiscall
TTableViewMetadata<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
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

// `scalar_deleting_destructor' @ 14d715e10

void * __thiscall
TTableViewMetadata<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,
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

// `scalar_deleting_destructor' @ 14d715e80

void * __thiscall
UE::StateTreeDebugger::FFrameEventTreeElement::_scalar_deleting_destructor_
          (FFrameEventTreeElement *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  ulonglong uVar8;
  
  pFVar3 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>
            ((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
             (this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar3 = (this->Children).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  uVar8 = (ulonglong)(this->Event).TypeIndex;
  if (10 < uVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar8])(&this->Event);
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
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715f70

void * __thiscall
SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715fb0

void * __thiscall
SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d715ff0

void * __thiscall
STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d716030

void * __thiscall
STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d716070

void * __thiscall FStateTreeStyle::_scalar_deleting_destructor_(FStateTreeStyle *this,uint param_1)

{
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7160b0

void * __thiscall
UE::StateTreeDebugger::SFrameEventViewRow::_scalar_deleting_destructor_
          (SFrameEventViewRow *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Item).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
  ~STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
            ((STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d716120

void * __thiscall
SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget::
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

// `scalar_deleting_destructor' @ 14d716190

void * __thiscall
SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget::
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

// EmptyLinkFunctionForGeneratedCodeSCompactTreeDebuggerView @ 14d7266e0

void __cdecl EmptyLinkFunctionForGeneratedCodeSCompactTreeDebuggerView(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSCompactTreeView @ 14d7266f0

void __cdecl EmptyLinkFunctionForGeneratedCodeSCompactTreeView(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeDeveloper_init @ 14d726700

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeDeveloper_init(void)

{
  return;
}

// Z_Construct_UScriptStruct_FStateItemDebuggerData @ 14d74bec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateItemDebuggerData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateItemDebuggerData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.InnerSingleton;
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

// IMPLEMENT_MODULE_StateTreeDeveloper @ 14d74bf40

void __cdecl IMPLEMENT_MODULE_StateTreeDeveloper(void)

{
  return;
}

// EngineSlateContentDir'' @ 150459010

void __cdecl `dynamic_atexit_destructor_for_'FStateTreeStyle::EngineSlateContentDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FStateTreeStyle::EngineSlateContentDir.Data.AllocatorInstance.Data;
  if (FStateTreeStyle::EngineSlateContentDir.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FStateTreeStyle::EngineSlateContentDir.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// StateExpansionStates'' @ 150459030

void __cdecl
`dynamic_atexit_destructor_for_'UE::StateTree::SCompactTreeView::StateExpansionStates__(void)

{
  UE::StateTree::SCompactTreeView::StateExpansionStates._72_4_ = 0;
  if (UE::StateTree::SCompactTreeView::StateExpansionStates._64_8_ != 0) {
    FMemory::Free((void *)UE::StateTree::SCompactTreeView::StateExpansionStates._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UE::StateTree::SCompactTreeView::StateExpansionStates);
  return;
}

// StateTreePluginContentDir'' @ 150459070

void __cdecl `dynamic_atexit_destructor_for_'FStateTreeStyle::StateTreePluginContentDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FStateTreeStyle::StateTreePluginContentDir.Data.AllocatorInstance.Data;
  if (FStateTreeStyle::StateTreePluginContentDir.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FStateTreeStyle::StateTreePluginContentDir.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Instance'' @ 150459090

void __cdecl `FStateTreeStyle::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 1504590b0

void __cdecl
`SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::GetDefaultAccessibleText'
::__l2::_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

// `dynamic_atexit_destructor_for_'Name'' @ 1504590d0

void __cdecl
`SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::GetDefaultAccessibleText'::
__l2::_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

