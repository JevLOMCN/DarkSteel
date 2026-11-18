// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 46

// StaticClass @ 14d4a3500

UClass * __cdecl UStateTree::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTree.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTree",
               &Z_Registration_Info_UClass_UStateTree.InnerSingleton,StaticRegisterNativesUStateTree
               ,0x2a0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UStateTree>,
               InternalVTableHelperCtorCaller<UStateTree>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTree.InnerSingleton;
}

// operator()<UE::StateTree::InstanceData::FInstanceContainer_const_> @ 14d4a8bc0

void __thiscall
`UStateTree::DebugInternalLayoutAsString'::__l2::<lambda_3>::
operator()<UE::StateTree::InstanceData::FInstanceContainer_const_>
          (void *this,FInstanceContainer *param_1,TStringView<wchar_t> *param_2)

{
  UScriptStruct *pUVar1;
  UObject *pUVar2;
  TStringBuilderBase<wchar_t> *this_00;
  FConstStructView *pFVar3;
  UScriptStruct *pUVar4;
  FStateTreeInstanceObjectWrapper *pFVar5;
  undefined8 *puVar6;
  int iVar7;
  FName local_res8;
  FName local_res10;
  FConstStructView local_58;
  FConstStructView local_48;
  FConstStructView local_38;
  
  TStringBuilderBase<wchar_t>::AppendfImpl(*(TStringBuilderBase<wchar_t> **)this,L"\n%s(%d)\n");
  iVar7 = 0;
  if (0 < (param_1->InstanceStructs).NumItems) {
    do {
      pFVar3 = FInstancedStructContainer::operator[](&param_1->InstanceStructs,&local_48,iVar7);
      pUVar1 = pFVar3->ScriptStruct;
      pUVar4 = FStateTreeInstanceObjectWrapper::StaticStruct();
      if (pUVar1 == pUVar4) {
        pFVar3 = FInstancedStructContainer::operator[](&param_1->InstanceStructs,&local_38,iVar7);
        pFVar5 = FConstStructView::Get<FStateTreeInstanceObjectWrapper_const_>(pFVar3);
        puVar6 = *(undefined8 **)((longlong)this + 8);
        pUVar2 = (pFVar5->InstanceObject).field0_0x0.DebugPtr;
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)*puVar6,L"  (",3);
        TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)*puVar6,L"%d");
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)*puVar6,L")",1);
        if (pUVar2 == (UObject *)0x0) {
LAB_14d4a8d2c:
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)*puVar6,L"null",4);
        }
        else {
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
          local_res8.Number = *(uint *)&pUVar2->field_0x1c;
          ::FName::AppendString(&local_res8,(TStringBuilderBase<wchar_t> *)*puVar6);
        }
      }
      else {
        FInstancedStructContainer::operator[](&param_1->InstanceStructs,&local_58,iVar7);
        puVar6 = *(undefined8 **)((longlong)this + 0x10);
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)*puVar6,L"  (",3);
        TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)*puVar6,L"%d");
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)*puVar6,L")",1);
        if ((local_58.StructMemory == (uchar *)0x0) ||
           (local_58.ScriptStruct == (UScriptStruct *)0x0)) goto LAB_14d4a8d2c;
        local_res10 = (FName)(local_58.ScriptStruct)->_padding_;
        ::FName::AppendString(&local_res10,(TStringBuilderBase<wchar_t> *)*puVar6);
      }
      this_00 = (TStringBuilderBase<wchar_t> *)*puVar6;
      if (this_00->End < this_00->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(this_00,1);
      }
      iVar7 = iVar7 + 1;
      *this_00->CurPos = L'\n';
      this_00->CurPos = this_00->CurPos + 1;
    } while (iVar7 < (param_1->InstanceStructs).NumItems);
  }
  return;
}

// operator()<FStateTreeInstanceData_const_> @ 14d4a8da0

void __thiscall
`UStateTree::DebugInternalLayoutAsString'::__l2::<lambda_3>::
operator()<FStateTreeInstanceData_const_>
          (void *this,FStateTreeInstanceData *param_1,TStringView<wchar_t> *param_2)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  UScriptStruct *pUVar2;
  UObject *pUVar3;
  FStateTreeInstanceStorage *pFVar4;
  FConstStructView *pFVar5;
  UScriptStruct *pUVar6;
  FStateTreeInstanceObjectWrapper *pFVar7;
  undefined8 *puVar8;
  int iVar9;
  FName local_res8;
  FName local_res18 [2];
  FConstStructView local_58;
  FConstStructView local_48;
  FConstStructView local_38;
  
  pTVar1 = *(TStringBuilderBase<wchar_t> **)this;
  FStateTreeInstanceData::GetStorage(param_1);
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"\n%s(%d)\n");
  iVar9 = 0;
  pFVar4 = FStateTreeInstanceData::GetStorage(param_1);
  if (0 < (pFVar4->InstanceStructs).NumItems) {
    do {
      pFVar4 = FStateTreeInstanceData::GetStorage(param_1);
      pFVar5 = FInstancedStructContainer::operator[](&pFVar4->InstanceStructs,&local_48,iVar9);
      pUVar2 = pFVar5->ScriptStruct;
      pUVar6 = FStateTreeInstanceObjectWrapper::StaticStruct();
      if (pUVar2 == pUVar6) {
        pFVar4 = FStateTreeInstanceData::GetStorage(param_1);
        pFVar5 = FInstancedStructContainer::operator[](&pFVar4->InstanceStructs,&local_38,iVar9);
        pFVar7 = FConstStructView::Get<FStateTreeInstanceObjectWrapper_const_>(pFVar5);
        puVar8 = *(undefined8 **)((longlong)this + 8);
        pUVar3 = (pFVar7->InstanceObject).field0_0x0.DebugPtr;
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)*puVar8,L"  (",3);
        TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)*puVar8,L"%d");
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)*puVar8,L")",1);
        if (pUVar3 == (UObject *)0x0) {
LAB_14d4a8f3b:
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)*puVar8,L"null",4);
        }
        else {
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
          local_res8.Number = *(uint *)&pUVar3->field_0x1c;
          ::FName::AppendString(&local_res8,(TStringBuilderBase<wchar_t> *)*puVar8);
        }
      }
      else {
        pFVar4 = FStateTreeInstanceData::GetStorage(param_1);
        FInstancedStructContainer::operator[](&pFVar4->InstanceStructs,&local_58,iVar9);
        puVar8 = *(undefined8 **)((longlong)this + 0x10);
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)*puVar8,L"  (",3);
        TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)*puVar8,L"%d");
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)*puVar8,L")",1);
        if ((local_58.StructMemory == (uchar *)0x0) ||
           (local_58.ScriptStruct == (UScriptStruct *)0x0)) goto LAB_14d4a8f3b;
        local_res18[0] = (FName)(local_58.ScriptStruct)->_padding_;
        ::FName::AppendString(local_res18,(TStringBuilderBase<wchar_t> *)*puVar8);
      }
      pTVar1 = (TStringBuilderBase<wchar_t> *)*puVar8;
      if (pTVar1->End < pTVar1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar1,1);
      }
      iVar9 = iVar9 + 1;
      *pTVar1->CurPos = L'\n';
      pTVar1->CurPos = pTVar1->CurPos + 1;
      pFVar4 = FStateTreeInstanceData::GetStorage(param_1);
    } while (iVar9 < (pFVar4->InstanceStructs).NumItems);
  }
  return;
}

// operator()<FStateTreeInstanceData> @ 14d4a8fb0

void __thiscall
`UStateTree::PostLoad'::__l7::<lambda_1>::operator()<FStateTreeInstanceData>
          (void *this,FStateTreeInstanceData *param_1,FStateTreeIndex16 param_2)

{
  UScriptStruct *pUVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FStateTreeInstanceStorage *pFVar6;
  FConstStructView *pFVar7;
  UScriptStruct *pUVar8;
  FStateTreeInstanceObjectWrapper *pFVar9;
  longlong lVar10;
  longlong local_68;
  UObject *local_60;
  FStructView local_58;
  UScriptStruct *local_48;
  uchar *local_40;
  FConstStructView local_38;
  FConstStructView local_28;
  
  uVar4 = (uint)param_2.Value;
  pFVar6 = FStateTreeInstanceData::GetStorage(param_1);
  pFVar7 = FInstancedStructContainer::operator[](&pFVar6->InstanceStructs,&local_38,uVar4);
  pUVar1 = pFVar7->ScriptStruct;
  pUVar8 = FStateTreeInstanceObjectWrapper::StaticStruct();
  plVar2 = (longlong *)**(undefined8 **)this;
  if (pUVar1 == pUVar8) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    pFVar6 = FStateTreeInstanceData::GetMutableStorage(param_1);
    pFVar7 = FInstancedStructContainer::operator[](&pFVar6->InstanceStructs,&local_28,uVar4);
    pFVar9 = FConstStructView::Get<FStateTreeInstanceObjectWrapper_const_>(pFVar7);
    local_60 = (pFVar9->InstanceObject).field0_0x0.DebugPtr;
    if (local_60 == (UObject *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)&local_60->field_0x10;
      if (lVar10 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Memory || (Memory && Struct)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                           ,0x24,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    local_68 = lVar10;
    (*pcVar3)(plVar2,&local_68);
  }
  else {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    pFVar6 = FStateTreeInstanceData::GetMutableStorage(param_1);
    FInstancedStructContainer::operator[](&pFVar6->InstanceStructs,&local_58,uVar4);
    if ((local_58.StructMemory != (uchar *)0x0) && (local_58.ScriptStruct == (UScriptStruct *)0x0))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Memory || (Memory && Struct)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x2b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_48 = local_58.ScriptStruct;
    local_40 = local_58.StructMemory;
    (*pcVar3)(plVar2,&local_48);
  }
  return;
}

// UStateTree @ 14d4b2240

UStateTree * __thiscall UStateTree::UStateTree(UStateTree *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  *(undefined ***)this = &___7UStateTree__6B_;
  (this->Schema).field0_0x0.DebugPtr = (UStateTreeSchema *)0x0;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  (this->States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->States).ArrayNum = 0;
  (this->States).ArrayMax = 0;
  (this->Transitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transitions).ArrayNum = 0;
  (this->Transitions).ArrayMax = 0;
  this->LastCompiledEditorDataHash = 0;
  FInstancedStructContainer::FInstancedStructContainer(&this->Nodes);
  FStateTreeInstanceData::FStateTreeInstanceData(&this->DefaultInstanceData);
  FInstancedStructContainer::FInstancedStructContainer
            (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs);
  FInstancedStructContainer::FInstancedStructContainer
            (&(this->DefaultExecutionRuntimeData).InstanceStructs);
  FStateTreeInstanceData::FStateTreeInstanceData(&this->SharedInstanceData);
  (this->PerThreadSharedInstanceDataLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->PerThreadSharedInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerThreadSharedInstanceData).ArrayNum = 0;
  (this->PerThreadSharedInstanceData).ArrayMax = 0;
  (this->ContextDataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextDataDescs).ArrayNum = 0;
  (this->ContextDataDescs).ArrayMax = 0;
  FStateTreePropertyBindings::FStateTreePropertyBindings(&this->PropertyBindings);
  (this->PropertyFunctionEvaluationScopeMemoryRequirements).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayNum = 0;
  (this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->IDToStateMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IDToStateMappings).ArrayNum = 0;
  (this->IDToStateMappings).ArrayMax = 0;
  (this->IDToNodeMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IDToNodeMappings).ArrayNum = 0;
  (this->IDToNodeMappings).ArrayMax = 0;
  (this->IDToTransitionMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IDToTransitionMappings).ArrayNum = 0;
  (this->IDToTransitionMappings).ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&(this->Parameters).Value);
  this->bHasGlobalTransitionTasks = '\0';
  this->bIsLinked = '\0';
  this->bScheduledTickAllowed = '\0';
  this->bCachedRequestGlobalTickOnlyOnEvents = '\0';
  this->bCachedRequestGlobalTick = '\0';
  this->bHasGlobalTickTasksOnlyOnEvents = '\0';
  this->bHasGlobalTickTasks = '\0';
  (this->ExternalDataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalDataDescs).ArrayNum = 0;
  (this->ExternalDataDescs).ArrayMax = 0;
  this->CompletionGlobalTasksMask = 0;
  this->NumContextData = 0;
  this->NumGlobalInstanceData = 0;
  this->EvaluatorsBegin = 0;
  this->EvaluatorsNum = 0;
  this->GlobalTasksBegin = 0;
  this->GlobalTasksNum = 0;
  this->StateSelectionRules = Default;
  this->CompletionGlobalTasksControl = Any;
  this->ParameterDataType = GlobalParameterData;
  (this->GCObjectDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GCObjectDatas).ArrayNum = 0;
  (this->GCObjectDatas).ArrayMax = 0;
  (this->PreGCHandle).ID = 0;
  (this->PostGCHandle).ID = 0;
  return this;
}

// UStateTree @ 14d4b23a0

UStateTree * __thiscall UStateTree::UStateTree(UStateTree *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  *(undefined ***)this = &___7UStateTree__6B_;
  (this->Schema).field0_0x0.DebugPtr = (UStateTreeSchema *)0x0;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  (this->States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->States).ArrayNum = 0;
  (this->States).ArrayMax = 0;
  (this->Transitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transitions).ArrayNum = 0;
  (this->Transitions).ArrayMax = 0;
  this->LastCompiledEditorDataHash = 0;
  FInstancedStructContainer::FInstancedStructContainer(&this->Nodes);
  FStateTreeInstanceData::FStateTreeInstanceData(&this->DefaultInstanceData);
  FInstancedStructContainer::FInstancedStructContainer
            (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs);
  FInstancedStructContainer::FInstancedStructContainer
            (&(this->DefaultExecutionRuntimeData).InstanceStructs);
  FStateTreeInstanceData::FStateTreeInstanceData(&this->SharedInstanceData);
  (this->PerThreadSharedInstanceDataLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->PerThreadSharedInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerThreadSharedInstanceData).ArrayNum = 0;
  (this->PerThreadSharedInstanceData).ArrayMax = 0;
  (this->ContextDataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextDataDescs).ArrayNum = 0;
  (this->ContextDataDescs).ArrayMax = 0;
  FStateTreePropertyBindings::FStateTreePropertyBindings(&this->PropertyBindings);
  (this->PropertyFunctionEvaluationScopeMemoryRequirements).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayNum = 0;
  (this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->IDToStateMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IDToStateMappings).ArrayNum = 0;
  (this->IDToStateMappings).ArrayMax = 0;
  (this->IDToNodeMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IDToNodeMappings).ArrayNum = 0;
  (this->IDToNodeMappings).ArrayMax = 0;
  (this->IDToTransitionMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IDToTransitionMappings).ArrayNum = 0;
  (this->IDToTransitionMappings).ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&(this->Parameters).Value);
  this->bHasGlobalTransitionTasks = '\0';
  this->bIsLinked = '\0';
  this->bScheduledTickAllowed = '\0';
  this->bCachedRequestGlobalTickOnlyOnEvents = '\0';
  this->bCachedRequestGlobalTick = '\0';
  this->bHasGlobalTickTasksOnlyOnEvents = '\0';
  this->bHasGlobalTickTasks = '\0';
  (this->ExternalDataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalDataDescs).ArrayNum = 0;
  (this->ExternalDataDescs).ArrayMax = 0;
  this->CompletionGlobalTasksMask = 0;
  this->NumContextData = 0;
  this->NumGlobalInstanceData = 0;
  this->EvaluatorsBegin = 0;
  this->EvaluatorsNum = 0;
  this->GlobalTasksBegin = 0;
  this->GlobalTasksNum = 0;
  this->StateSelectionRules = Default;
  this->CompletionGlobalTasksControl = Any;
  this->ParameterDataType = GlobalParameterData;
  (this->GCObjectDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GCObjectDatas).ArrayNum = 0;
  (this->GCObjectDatas).ArrayMax = 0;
  (this->PreGCHandle).ID = 0;
  (this->PostGCHandle).ID = 0;
  return this;
}

// ~UStateTree @ 14d4b3c70

void __thiscall UStateTree::~UStateTree(UStateTree *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  *(undefined ***)this = &___7UStateTree__6B_;
  pFVar1 = (this->GCObjectDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExternalDataDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&(this->Parameters).Value);
  pFVar1 = (this->IDToTransitionMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IDToNodeMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IDToStateMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyFunctionEvaluationScopeMemoryRequirements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FStateTreePropertyBindings::~FStateTreePropertyBindings(&this->PropertyBindings);
  pFVar1 = (this->ContextDataDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FStateTreeInstanceData,1>,int>
            ((TSharedPtr<FStateTreeInstanceData,1> *)
             (this->PerThreadSharedInstanceData).AllocatorInstance.Data,
             (this->PerThreadSharedInstanceData).ArrayNum);
  pFVar1 = (this->PerThreadSharedInstanceData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PerThreadSharedInstanceDataLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PerThreadSharedInstanceDataLock);
  }
  FStateTreeInstanceData::~FStateTreeInstanceData(&this->SharedInstanceData);
  FInstancedStructContainer::Empty(&(this->DefaultExecutionRuntimeData).InstanceStructs);
  FInstancedStructContainer::Empty(&(this->DefaultEvaluationScopeInstanceData).InstanceStructs);
  FStateTreeInstanceData::~FStateTreeInstanceData(&this->DefaultInstanceData);
  FInstancedStructContainer::Empty(&this->Nodes);
  pFVar1 = (this->Transitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->States).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Frames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// operator() @ 14d4b4800

void __thiscall
`UStateTree::HandleRuntimeValidationPreGC'::__l2::<lambda_1>::operator()
          (void *this,FStateTreeInstanceStorage *param_1,int param_2,EContainer param_3)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  longlong lVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  uint uVar6;
  uchar *puVar7;
  undefined1 uVar8;
  int iVar9;
  UScriptStruct *pUVar10;
  IConsoleVariable *pIVar11;
  int local_res10 [2];
  int local_res18 [4];
  FWeakObjectPtr local_88;
  FWeakObjectPtr local_80 [2];
  undefined1 local_70 [16];
  FConstStructView local_60;
  undefined8 local_50;
  undefined4 local_48;
  
  iVar2 = (param_1->InstanceStructs).NumItems;
  local_res10[0] = 0;
  local_res18[0] = param_2;
  if (0 < iVar2) {
    do {
      FInstancedStructContainer::operator[](&param_1->InstanceStructs,&local_60,local_res10[0]);
      puVar7 = local_60.StructMemory;
      pUVar4 = local_60.ScriptStruct;
      if (((longlong *)local_60.StructMemory == (longlong *)0x0) ||
         (local_60.ScriptStruct == (UScriptStruct *)0x0)) {
        local_70._8_8_ = L"An";
        if (param_3 == SharedInstance) {
          local_70._8_8_ = L"A shared";
        }
        local_60.ScriptStruct = (UScriptStruct *)(local_70 + 8);
        local_60.StructMemory = (uchar *)local_res10;
        local_50 = local_res18;
        ``UStateTree::HandleRuntimeValidationPreGC'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>
        ::operator()(&local_60);
        goto LAB_14d4b4a6f;
      }
      lVar3 = *(longlong *)this;
      iVar9 = *(int *)(lVar3 + 0x280);
      if (iVar9 == *(int *)(lVar3 + 0x284)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,(ForAnyElementType *)(lVar3 + 0x278),(int *)(lVar3 + 0x284));
      }
      *(int *)(lVar3 + 0x280) = iVar9 + 1;
      pFVar1 = (FWeakObjectPtr *)(*(longlong *)(lVar3 + 0x278) + (longlong)iVar9 * 0x14);
      DefaultConstructItems<UStateTree::FDebugInstanceData,int>(pFVar1,1);
      pFVar1[1].ObjectIndex = local_res10[0];
      pFVar1[1].ObjectSerialNumber = local_res18[0];
      *(EContainer *)&pFVar1[2].ObjectIndex = param_3;
      pUVar10 = FStateTreeInstanceObjectWrapper::StaticStruct();
      if (pUVar4 == pUVar10) {
LAB_14d4b495a:
        lVar3 = *(longlong *)puVar7;
        if ((lVar3 == 0) || ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0)) {
          local_70._0_8_ = L"An";
          if (param_3 == SharedInstance) {
            local_70._0_8_ = L"A shared";
          }
          local_60.ScriptStruct = (UScriptStruct *)local_70;
          local_60.StructMemory = (uchar *)local_res10;
          local_50 = local_res18;
          ``UStateTree::HandleRuntimeValidationPreGC'::__l2::<lambda_1>::operator()'::__l14::
          <lambda_2>::operator()(&local_60);
LAB_14d4b4a6f:
          pIVar11 = UE::StateTree::Debug::Private::FindCVarInstanceDataGC();
          local_80[0].ObjectIndex = 0;
          local_80[0].ObjectSerialNumber = 0;
          local_60.StructMemory = (uchar *)0x0;
          lVar3 = *(longlong *)pIVar11;
          local_60.ScriptStruct = (UScriptStruct *)CONCAT35(local_60.ScriptStruct._5_3_,0xe000000);
          uVar6 = (uint)local_50;
          local_50 = (int *)CONCAT44(0xf000000,uVar6 & 0xffffff00);
          local_48 = 0x1000000;
          (**(code **)(lVar3 + 0xa8))(pIVar11,local_80,&local_60);
          (**(code **)(lVar3 + 0xb0))(pIVar11,&u_0);
          lVar3 = *(longlong *)this;
          *(undefined4 *)(lVar3 + 0x280) = 0;
          if (-1 < *(int *)(lVar3 + 0x284)) {
            return;
          }
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,0,(ForAnyElementType *)(lVar3 + 0x278),0,(int *)(lVar3 + 0x284));
          return;
        }
        pUVar4 = *(UScriptStruct **)puVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar4 != (UScriptStruct *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
        }
        local_80[0].ObjectIndex = 0;
        local_80[0].ObjectSerialNumber = 0;
        local_70._0_8_ = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FWeakObjectPtr::operator=(local_80,(FObjectPtr)local_70);
        *pFVar1 = local_80[0];
        uVar8 = 0;
      }
      else {
        pUVar10 = FStateTreeInstanceObjectWrapper::StaticStruct();
        if (pUVar10 != (UScriptStruct *)0x0) {
          iVar9 = (int)pUVar10->_padding_;
          if (((int)pUVar4->_padding_ < iVar9) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar9 * 8) !=
              &pUVar10->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) goto LAB_14d4b495a;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        local_70._0_8_ = pUVar4;
        local_88.ObjectIndex = 0;
        local_88.ObjectSerialNumber = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FWeakObjectPtr::operator=(&local_88,(FObjectPtr)local_70);
        *pFVar1 = local_88;
        uVar8 = 1;
      }
      *(undefined1 *)((longlong)&pFVar1[2].ObjectIndex + 1) = uVar8;
      local_res10[0] = local_res10[0] + 1;
    } while (local_res10[0] < iVar2);
  }
  return;
}

// operator() @ 14d4b4fe0

FStateTreeBindableStructDesc * __thiscall
`UStateTree::PatchBindings'::__l2::<lambda_1>::operator()(void *this,FStateTreeDataHandle param_1)

{
  longlong lVar1;
  ushort uVar2;
  TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
  *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FStateTreeBindableStructDesc *pFVar7;
  uint uVar8;
  undefined2 in_register_00000016;
  FStateTreeDataHandle *pFVar9;
  uint *puVar10;
  uint uVar11;
  
  pFVar9 = (FStateTreeDataHandle *)CONCAT26(in_register_00000016,param_1);
  uVar2 = pFVar9->Index;
  this_00 = *(TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
              **)this;
  uVar11 = pFVar9->Source + 0x9e3779b9 + (uint)uVar2 * 0x40 + (uint)(uVar2 >> 2) ^ (uint)uVar2;
  iVar6 = TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FStateTreeDataHandle>
                    (this_00,(uVar11 >> 2) +
                             (pFVar9->StateHandle).Index + 0x9e3779b9 + uVar11 * 0x40 ^ uVar11,
                     pFVar9);
  if (iVar6 != -1) {
    lVar1 = *(longlong *)&this_00->Elements + (longlong)iVar6 * 0x14;
    puVar10 = (uint *)(lVar1 + 8);
    if (lVar1 == 0) {
      puVar10 = (uint *)0x0;
    }
    if (puVar10 != (uint *)0x0) {
      uVar11 = *puVar10;
      plVar3 = *(longlong **)((longlong)this + 8);
      uVar8 = 0;
      if ((int)uVar11 < (int)plVar3[1]) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FStateTreeBindableStructDesc *)(*pcVar4)();
          return pFVar7;
        }
      }
      return (FStateTreeBindableStructDesc *)((longlong)(int)uVar11 * 0x20 + *plVar3);
    }
  }
  return (FStateTreeBindableStructDesc *)0x0;
}

// operator() @ 14d4b52a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UStateTree::ValidateInstanceData'::__l7::<lambda_1>::operator()
          (void *this,UStruct *param_1,UStruct *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  bool bVar3;
  UPackage *pUVar4;
  UScriptStruct *pUVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_288 [32];
  FScriptContainerElement *local_268;
  FScriptContainerElement *local_260;
  undefined1 local_258 [4];
  FName local_254;
  FName local_24c;
  FString local_240;
  FString local_230;
  FString local_220;
  TStringBuilderBase<wchar_t> local_208;
  wchar_t local_1e8 [64];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [64];
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  if (param_1 == (UStruct *)0x0) {
    if (1 < (byte)LogStateTree._0_1_) {
      local_168.Base = local_148;
      local_168.CurPos = local_148;
      local_168.bIsDynamic = false;
      local_168.bIsExternal = false;
      local_168.End = (wchar_t *)local_48;
      ::FName::AppendString((FName *)(*(longlong *)((longlong)this + 8) + 8),&local_168);
      if (local_168.End < local_168.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_168,1);
      }
      pwVar2 = local_168.Base;
      *local_168.CurPos = L'\0';
      if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
        Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar4,
                             L"StateTreeNodeBase");
      }
      local_254 = (FName)(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->
                         _padding_;
      local_208.Base = local_1e8;
      local_208.bIsDynamic = false;
      local_208.bIsExternal = false;
      local_208.CurPos = local_1e8;
      local_208.End = (wchar_t *)&local_168;
      ::FName::AppendString(&local_254,&local_208);
      if (local_208.End < (TStringBuilderBase<wchar_t> *)(local_208.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_208,1);
      }
      pwVar1 = local_208.Base;
      *local_208.CurPos = L'\0';
      UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_240,(UObject *)0x0);
      local_260 = (FScriptContainerElement *)pwVar2;
      local_268 = (FScriptContainerElement *)pwVar1;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_208);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
    }
  }
  else {
    bVar3 = ``UStateTree::ValidateInstanceData'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>::
            operator()(local_258,(TNotNull<UStruct_const_*>)param_1);
    if (bVar3) {
      if (1 < (byte)LogStateTree._0_1_) {
        local_254 = (FName)param_1->_padding_;
        local_168.Base = local_148;
        local_168.CurPos = local_148;
        local_168.End = local_c8;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        ::FName::AppendString(&local_254,&local_168);
        if (local_168.End < local_168.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        pwVar2 = local_168.Base;
        *local_168.CurPos = L'\0';
        pUVar5 = FStateTreeNodeBase::StaticStruct();
        local_24c = (FName)pUVar5->_padding_;
        local_208.Base = local_1e8;
        local_208.CurPos = local_1e8;
        local_208.End = (wchar_t *)&local_168;
        local_208.bIsDynamic = false;
        local_208.bIsExternal = false;
        ::FName::AppendString(&local_24c,&local_208);
        if (local_208.End < (TStringBuilderBase<wchar_t> *)(local_208.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_208,1);
        }
        *local_208.CurPos = L'\0';
        UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_240,(UObject *)0x0);
        local_268 = (FScriptContainerElement *)pwVar2;
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_208);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
      }
      **(undefined1 **)((longlong)this + 0x18) = 0;
    }
    if (param_2 == (UStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    bVar3 = ``UStateTree::ValidateInstanceData'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>::
            operator()(local_258,(TNotNull<UStruct_const_*>)param_2);
    if (param_1 == param_2) {
      return;
    }
    if (bVar3) {
      return;
    }
    if (1 < (byte)LogStateTree._0_1_) {
      local_24c = (FName)param_2->_padding_;
      ::FName::ToString(&local_24c,&local_240);
      local_24c = (FName)param_1->_padding_;
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_240.Data.ArrayNum != 0) {
        FVar7.Data = local_240.Data.AllocatorInstance.Data;
      }
      ::FName::ToString(&local_24c,&local_230);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_230.Data.ArrayNum != 0) {
        FVar6.Data = local_230.Data.AllocatorInstance.Data;
      }
      pUVar5 = FStateTreeNodeBase::StaticStruct();
      local_254 = (FName)pUVar5->_padding_;
      local_168.Base = local_148;
      local_168.CurPos = local_148;
      local_168.End = local_c8;
      local_168.bIsDynamic = false;
      local_168.bIsExternal = false;
      ::FName::AppendString(&local_254,&local_168);
      if (local_168.End < local_168.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_168,1);
      }
      *local_168.CurPos = L'\0';
      UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_220,(UObject *)0x0);
      local_268 = FVar6.Data;
      local_260 = FVar7.Data;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
    }
  }
  **(undefined1 **)((longlong)this + 0x18) = 0;
  return;
}

// AddReferencedObjects @ 14d4b6270

void __cdecl UStateTree::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *SRWLock;
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 != (UObject *)0x0) {
    pUVar5 = GetPrivateStaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14d4b62f2;
  }
  param_1 = (UObject *)0x0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("StateTree",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTree.cpp"
                     ,0x169,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14d4b62f2:
  SRWLock = &param_1[4].field_0x20;
  if (SRWLock == (undefined1 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&param_1[5].field_0x8;
  puVar7 = *(undefined8 **)(param_1 + 5);
  puVar8 = puVar7 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)&param_1[5].field_0x8 != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FStateTreeInstanceData,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar7 == puVar8) break;
    pvVar2 = (void *)*puVar7;
    if (pvVar2 != (void *)0x0) {
      pUVar6 = FStateTreeInstanceData::StaticStruct();
      FReferenceCollector::AddPropertyReferencesWithStructARO(param_2,pUVar6,pvVar2,param_1);
    }
    puVar7 = puVar7 + 2;
  }
  if (SRWLock != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d4b63b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return;
  }
  return;
}

// BeginDestroy @ 14d4b6ba0

void __thiscall UStateTree::BeginDestroy(UStateTree *this)

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             &FStateTreeModule::OnPreRuntimeValidationInstanceData,
             (FDelegateHandle)(this->PreGCHandle).ID);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             &FStateTreeModule::OnPostRuntimeValidationInstanceData,
             (FDelegateHandle)(this->PostGCHandle).ID);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// DebugInternalLayoutAsString @ 14d4b8da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UStateTree::DebugInternalLayoutAsString(UStateTree *this,FString *__return_storage_ptr__)

{
  wchar_t **ppwVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  UStateTreeSchema *pUVar7;
  UScriptStruct *pUVar8;
  code *pcVar9;
  TStringBuilderBase<wchar_t> *pTVar10;
  bool bVar11;
  uint uVar12;
  void *pvVar13;
  FString *pFVar14;
  UEnum *pUVar15;
  UScriptStruct *pUVar16;
  FStateTreeTaskBase *pFVar17;
  UPackage *pUVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulong64 uVar21;
  FScriptContainerElement *pFVar22;
  wchar_t *pwVar23;
  ulonglong uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement FVar27;
  int iVar28;
  wchar_t *pwVar29;
  ForAnyElementType FVar30;
  wchar_t *pwVar31;
  int iVar32;
  uint uVar33;
  ForAnyElementType FVar34;
  uchar *puVar35;
  undefined1 auStack_5a8 [32];
  FScriptContainerElement *local_588;
  FScriptContainerElement *local_580;
  FScriptContainerElement *local_578;
  FScriptContainerElement *local_570;
  wchar_t *local_568;
  wchar_t *local_560;
  wchar_t *local_558;
  wchar_t *local_550;
  wchar_t *local_548;
  wchar_t *local_540;
  wchar_t *local_538;
  uint local_530;
  uint local_528;
  uint local_520;
  FScriptContainerElement local_518;
  FScriptContainerElement local_517;
  uint local_514;
  undefined1 local_510;
  undefined1 local_50f;
  ushort local_50e;
  TStringBuilderBase<wchar_t> local_508;
  ushort local_4e8;
  ushort local_4e6;
  ushort local_4e4;
  ushort local_4e2;
  ushort local_4e0;
  TStringBuilderBase<wchar_t> *local_4d8;
  FScriptContainerElement *local_4d0;
  TStringBuilderBase<wchar_t> *local_4c8;
  TStringBuilderBase<wchar_t> **local_4c0;
  TStringBuilderBase<wchar_t> **local_4b8;
  FName local_4b0;
  FName local_4a8;
  TStringBuilderBase<wchar_t> *local_4a0;
  FName local_498;
  FName local_490;
  FName local_488;
  FString *local_480;
  FString local_478;
  FString local_468;
  FString local_458;
  wchar_t *local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  wchar_t *local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  FText local_428;
  FText local_418;
  FText local_408;
  FText local_3f8;
  wchar_t *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  wchar_t *local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  TStringView<wchar_t> local_3c8;
  TStringView<wchar_t> local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [128];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_5a8;
  iVar28 = 0;
  local_514 = 0;
  local_508.End = (wchar_t *)0x0;
  local_508.bIsDynamic = false;
  local_508.bIsExternal = false;
  local_508.Base = (wchar_t *)0x0;
  local_508.CurPos = (wchar_t *)0x0;
  local_480 = __return_storage_ptr__;
  TStringBuilderBase<wchar_t>::Extend(&local_508,0x13);
  pvVar13 = FGenericPlatformString::Memcpy(local_508.CurPos,L"StateTree (asset: \'",0x26);
  local_508.CurPos = (wchar_t *)((longlong)pvVar13 + 0x26);
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_508,(UObject *)0x0,None);
  if (local_508.End < local_508.CurPos + 3) {
    TStringBuilderBase<wchar_t>::Extend(&local_508,3);
  }
  pvVar13 = FGenericPlatformString::Memcpy(local_508.CurPos,L"\')\n",6);
  local_508.CurPos = (wchar_t *)((longlong)pvVar13 + 6);
  local_4a0 = &local_508;
  local_4d8 = &local_508;
  pUVar7 = (this->Schema).field0_0x0.DebugPtr;
  if (pUVar7 == (UStateTreeSchema *)0x0) {
    if (local_508.End < (wchar_t *)((longlong)pvVar13 + 0x24)) {
      TStringBuilderBase<wchar_t>::Extend(&local_508,0xf);
    }
    pvVar13 = FGenericPlatformString::Memcpy(local_508.CurPos,L"Schema: [None]\n",0x1e);
    local_508.CurPos = (wchar_t *)((longlong)pvVar13 + 0x1e);
  }
  else {
    local_4b0.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
    local_4b0.Number = *(uint *)&pUVar7->field_0x1c;
    local_288.Base = local_268;
    local_288.bIsDynamic = false;
    local_288.bIsExternal = false;
    local_288.CurPos = local_268;
    local_288.End = (wchar_t *)&local_168;
    ::FName::AppendString(&local_4b0,&local_288);
    if (local_288.End < (TStringBuilderBase<wchar_t> *)(local_288.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_288,1);
    }
    *local_288.CurPos = L'\0';
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"Schema: %s\n");
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"\nNodes(%d)\n");
  iVar32 = iVar28;
  if (0 < (this->Nodes).NumItems) {
    do {
      iVar6 = (this->Nodes).NumItems;
      if ((((iVar6 < 1) || (iVar28 < 0)) || (iVar6 <= iVar28)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid() && IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                              ,0x7c,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FString *)(*pcVar9)();
        return pFVar14;
      }
      iVar6 = (this->Nodes).NumItems;
      if (((iVar6 < 1) || (iVar6 <= iVar28)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumItems > 0 && Index < NumItems",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                              ,0x100,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FString *)(*pcVar9)();
        return pFVar14;
      }
      puVar35 = (this->Nodes).Memory;
      lVar19 = (longlong)((this->Nodes).AllocatedSize - iVar32);
      iVar6 = *(int *)(puVar35 + lVar19 + -8);
      lVar19 = *(longlong *)(puVar35 + lVar19 + -0x10);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(local_4d8,L"  (",3);
      TStringBuilderBase<wchar_t>::AppendfImpl(local_4d8,L"%d");
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(local_4d8,L")",1);
      if ((puVar35 + iVar6 == (uchar *)0x0) || (lVar19 == 0)) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(local_4d8,L"null",4);
      }
      else {
        local_4a8 = *(FName *)(lVar19 + 0x18);
        ::FName::AppendString(&local_4a8,local_4d8);
      }
      pTVar10 = local_4d8;
      if (local_4d8->End < local_4d8->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(local_4d8,1);
      }
      iVar28 = iVar28 + 1;
      *pTVar10->CurPos = L'\n';
      ppwVar1 = &pTVar10->CurPos;
      *ppwVar1 = *ppwVar1 + 1;
      iVar32 = iVar32 + 0x10;
    } while (iVar28 < (this->Nodes).NumItems);
  }
  uVar20 = 0;
  local_4c8 = &local_508;
  uStack_3e0 = 0xd;
  local_4c0 = &local_4a0;
  local_4b8 = &local_4d8;
  local_3e8 = L"Instance Data";
  local_2a8._12_4_ = uStack_3dc;
  local_2a8.Size = 0xd;
  local_2a8.DataPtr = L"Instance Data";
  `UStateTree::DebugInternalLayoutAsString'::__l2::<lambda_3>::
  operator()<FStateTreeInstanceData_const_>(&local_4c8,&this->DefaultInstanceData,&local_2a8);
  uStack_3d0 = 0x14;
  local_3d8 = L"Shared Instance Data";
  local_298._12_4_ = uStack_3cc;
  local_298.Size = 0x14;
  local_298.DataPtr = L"Shared Instance Data";
  `UStateTree::DebugInternalLayoutAsString'::__l2::<lambda_3>::
  operator()<FStateTreeInstanceData_const_>(&local_4c8,&this->SharedInstanceData,&local_298);
  uStack_440 = 0x1e;
  local_448 = L"Evaluation Scope Instance Data";
  local_3c8._12_4_ = uStack_43c;
  local_3c8.Size = 0x1e;
  local_3c8.DataPtr = L"Evaluation Scope Instance Data";
  `UStateTree::DebugInternalLayoutAsString'::__l2::<lambda_3>::
  operator()<UE::StateTree::InstanceData::FInstanceContainer_const_>
            (&local_4c8,&this->DefaultEvaluationScopeInstanceData,&local_3c8);
  uStack_430 = 0x1f;
  local_438 = L"Execution Runtime Instance Data";
  local_3b8._12_4_ = uStack_42c;
  local_3b8.Size = 0x1f;
  local_3b8.DataPtr = L"Execution Runtime Instance Data";
  `UStateTree::DebugInternalLayoutAsString'::__l2::<lambda_3>::
  operator()<UE::StateTree::InstanceData::FInstanceContainer_const_>
            (&local_4c8,&this->DefaultExecutionRuntimeData,&local_3b8);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"\nExternal Data(%d)\n");
  if ((this->ExternalDataDescs).ArrayNum != 0) {
    local_588 = (FScriptContainerElement *)0x152b30bc8;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"  [ (Idx) | %-40s | %-8s | %15s ]\n");
    uVar24 = uVar20;
    if (0 < (this->ExternalDataDescs).ArrayNum) {
      do {
        iVar28 = (this->ExternalDataDescs).ArrayNum;
        uVar33 = (uint)uVar20;
        uVar25 = 0;
        if ((int)uVar33 < iVar28) {
          uVar25 = ~uVar33 >> 0x1f;
        }
        if (uVar25 == 0) {
          local_588 = (FScriptContainerElement *)(longlong)(int)uVar33;
          local_580 = (FScriptContainerElement *)(longlong)iVar28;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FString *)(*pcVar9)();
            return pFVar14;
          }
        }
        pFVar22 = (this->ExternalDataDescs).AllocatorInstance.Data;
        pFVar14 = FStateTreeDataHandle::Describe
                            ((FStateTreeDataHandle *)(pFVar22 + uVar24 + 0x10),&local_3a8);
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar31 = L"";
        }
        else {
          pwVar31 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        FVar27 = pFVar22[uVar24 + 0x16];
        pUVar15 = StaticEnum<enum_EStateTreeExternalDataRequirement>();
        if ((pUVar15 == (UEnum *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("EnumClass != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0xd13,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar14 = (FString *)(*pcVar9)();
          return pFVar14;
        }
        UEnum::GetDisplayNameTextByValue(pUVar15,&local_428,(ulonglong)(byte)FVar27);
        pFVar14 = FText::ToString(&local_428);
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar29 = L"";
        }
        else {
          pwVar29 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        uVar25 = local_514;
        if (*(longlong *)(pFVar22 + uVar24) != 0) {
          local_498 = *(FName *)(*(longlong *)(pFVar22 + uVar24) + 0x18);
          uVar25 = local_514 | 1;
          local_514 = uVar25;
          ::FName::ToString(&local_498,&local_478);
        }
        local_588 = (FScriptContainerElement *)pwVar29;
        local_580 = (FScriptContainerElement *)pwVar31;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"  | (%3d) | %-40s | %8s | %15s |\n");
        if (((uVar25 & 1) != 0) &&
           (local_514 = uVar25 & 0xfffffffe,
           local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_478.Data.AllocatorInstance.Data);
        }
        if (local_428.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
        }
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        uVar20 = (ulonglong)(uVar33 + 1);
        uVar24 = uVar24 + 0x18;
      } while ((int)(uVar33 + 1) < (this->ExternalDataDescs).ArrayNum);
    }
  }
  pFVar14 = FPropertyBindingBindingCollection::DebugAsString
                      ((FPropertyBindingBindingCollection *)&this->PropertyBindings,&local_398);
  iVar32 = (pFVar14->Data).ArrayNum;
  pFVar22 = (pFVar14->Data).AllocatorInstance.Data;
  iVar28 = iVar32 + -1;
  if (iVar32 == 0) {
    iVar28 = 0;
  }
  uVar21 = (ulong64)iVar28;
  if (local_508.End < local_508.CurPos + uVar21) {
    TStringBuilderBase<wchar_t>::Extend(&local_508,uVar21);
  }
  if (iVar28 != 0) {
    pvVar13 = FGenericPlatformString::Memcpy(local_508.CurPos,pFVar22,uVar21 * 2);
    local_508.CurPos = (wchar_t *)((longlong)pvVar13 + uVar21 * 2);
  }
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"\nFrames(%d)\n");
  if ((this->Frames).ArrayNum != 0) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"  [ (Idx) | %-4s ]\n");
    uVar25 = 0;
    if (0 < (this->Frames).ArrayNum) {
      do {
        iVar28 = (this->Frames).ArrayNum;
        uVar33 = 0;
        if ((int)uVar25 < iVar28) {
          uVar33 = ~uVar25 >> 0x1f;
        }
        if (uVar33 == 0) {
          local_588 = (FScriptContainerElement *)(longlong)(int)uVar25;
          local_580 = (FScriptContainerElement *)(longlong)iVar28;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FString *)(*pcVar9)();
            return pFVar14;
          }
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"  | (%3d) | %-4d |\n");
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < (this->Frames).ArrayNum);
    }
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"\nStates(%d)\n");
  if ((this->States).ArrayNum != 0) {
    local_538 = L"Uti";
    local_540 = L"Tsk";
    local_548 = L"Tr";
    local_550 = L"Cond";
    local_558 = L"Uti";
    local_560 = L"Tsk";
    local_568 = L"Tr";
    local_570 = (FScriptContainerElement *)0x152b30d20;
    local_578 = (FScriptContainerElement *)0x1508c6298;
    local_580 = (FScriptContainerElement *)0x152b05520;
    local_588 = (FScriptContainerElement *)0x1510f8510;
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_508,
               L"  [ (Idx) | %-30s | %15s | %5s [%3s:%-3s[ | Begin Idx : %4s %4s %4s %4s | Num : %4s %4s %4s %4s ]\n"
              );
    uVar25 = 0;
    if (0 < (this->States).ArrayNum) {
      lVar19 = 0;
      do {
        iVar28 = (this->States).ArrayNum;
        uVar33 = 0;
        if ((int)uVar25 < iVar28) {
          uVar33 = ~uVar25 >> 0x1f;
        }
        if (uVar33 == 0) {
          local_588 = (FScriptContainerElement *)(longlong)(int)uVar25;
          local_580 = (FScriptContainerElement *)(longlong)iVar28;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FString *)(*pcVar9)();
            return pFVar14;
          }
        }
        pFVar22 = (this->States).AllocatorInstance.Data;
        local_517 = pFVar22[lVar19 + 0x6b];
        FVar27 = pFVar22[lVar19 + 0x6d];
        FVar2 = pFVar22[lVar19 + 0x6c];
        FVar3 = pFVar22[lVar19 + 0x6e];
        local_4e8 = *(ushort *)(pFVar22 + lVar19 + 0x4a);
        local_4e6 = *(ushort *)(pFVar22 + lVar19 + 0x4e);
        local_4e4 = *(ushort *)(pFVar22 + lVar19 + 0x4c);
        local_4e2 = *(ushort *)(pFVar22 + lVar19 + 0x48);
        local_4e0 = *(ushort *)(pFVar22 + lVar19 + 0x46);
        local_50e = *(ushort *)(pFVar22 + lVar19 + 0x44);
        local_518 = FVar27;
        pFVar14 = FStateTreeStateHandle::Describe
                            ((FStateTreeStateHandle *)(pFVar22 + lVar19 + 0x42),&local_378);
        if ((pFVar14->Data).ArrayNum == 0) {
          local_4d0 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_4d0 = (pFVar14->Data).AllocatorInstance.Data;
          FVar27 = local_518;
        }
        ::FName::ToString((FName *)(pFVar22 + lVar19 + 0x10),&local_388);
        local_530 = (uint)(byte)FVar27;
        local_538 = (wchar_t *)CONCAT44(local_538._4_4_,(uint)(byte)local_517);
        local_540 = L" ";
        local_548 = (wchar_t *)CONCAT44(local_548._4_4_,(uint)local_4e8);
        local_550 = (wchar_t *)CONCAT44(local_550._4_4_,(uint)local_4e6);
        local_558 = (wchar_t *)CONCAT44(local_558._4_4_,(uint)local_4e4);
        local_560 = (wchar_t *)CONCAT44(local_560._4_4_,(uint)local_4e2);
        local_568 = L" ";
        local_570 = (FScriptContainerElement *)CONCAT44(local_570._4_4_,(uint)local_4e0);
        local_578 = (FScriptContainerElement *)CONCAT44(local_578._4_4_,(uint)local_50e);
        local_580 = (FScriptContainerElement *)&::u__;
        local_588 = local_4d0;
        local_528 = (uint)(byte)FVar3;
        local_520 = (uint)(byte)FVar2;
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_508,
                   L"  | (%3d) | %-30s | %15s | %5s [%3d:%-3d[ | %9s   %4d %4d %4d %4d | %3s   %4d %4d %4d %4d |\n"
                  );
        if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_388.Data.AllocatorInstance.Data);
        }
        if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_378.Data.AllocatorInstance.Data);
        }
        uVar25 = uVar25 + 1;
        lVar19 = lVar19 + 0x78;
      } while ((int)uVar25 < (this->States).ArrayNum);
    }
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"\n  [ (Idx) | %32s | %8s ]\n");
    uVar25 = 0;
    if (0 < (this->States).ArrayNum) {
      lVar19 = 0;
      do {
        iVar28 = (this->States).ArrayNum;
        uVar33 = 0;
        if ((int)uVar25 < iVar28) {
          uVar33 = ~uVar25 >> 0x1f;
        }
        if (uVar33 == 0) {
          local_588 = (FScriptContainerElement *)(longlong)(int)uVar25;
          local_580 = (FScriptContainerElement *)(longlong)iVar28;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FString *)(*pcVar9)();
            return pFVar14;
          }
        }
        pFVar22 = (this->States).AllocatorInstance.Data;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"  | (%3d) | ");
        iVar28 = 0x1f;
        uVar33 = *(uint *)(pFVar22 + lVar19 + 100);
        do {
          if (local_508.End < local_508.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_508,1);
          }
          *local_508.CurPos = (ushort)(uVar33 >> ((byte)iVar28 & 0x1f)) & 1 | 0x30;
          local_508.CurPos = local_508.CurPos + 1;
          iVar28 = iVar28 + -1;
        } while (-1 < iVar28);
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L" | %3f |\n");
        uVar25 = uVar25 + 1;
        lVar19 = lVar19 + 0x78;
      } while ((int)uVar25 < (this->States).ArrayNum);
    }
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"\nTransitions(%d)\n");
  if ((this->Transitions).ArrayNum != 0) {
    local_570 = (FScriptContainerElement *)0x152b30f88;
    local_578 = (FScriptContainerElement *)0x152b30fa0;
    local_580 = (FScriptContainerElement *)0x152b30fd8;
    local_588 = (FScriptContainerElement *)0x152b31008;
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_508,L"  [ (Idx) | %-3s | %15s | %-20s | %-40s | %-40s | %-8s ]\n");
    uVar25 = 0;
    if (0 < (this->Transitions).ArrayNum) {
      lVar19 = 0;
      uVar33 = local_514;
      do {
        iVar28 = (this->Transitions).ArrayNum;
        uVar12 = 0;
        if ((int)uVar25 < iVar28) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_588 = (FScriptContainerElement *)(longlong)(int)uVar25;
          local_580 = (FScriptContainerElement *)(longlong)iVar28;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FString *)(*pcVar9)();
            return pFVar14;
          }
        }
        pFVar22 = (this->Transitions).AllocatorInstance.Data;
        local_518 = pFVar22[lVar19 + 0x37];
        local_50e = *(ushort *)(pFVar22 + lVar19 + 0x2c);
        if (*(longlong *)(pFVar22 + lVar19) == 0) {
          FVar34.Data = (FScriptContainerElement *)&u_None;
        }
        else {
          local_490 = *(FName *)(*(longlong *)(pFVar22 + lVar19) + 0x18);
          local_514 = uVar33 | 2;
          ::FName::ToString(&local_490,&local_458);
          FVar34.Data = (FScriptContainerElement *)L"";
          if (local_458.Data.ArrayNum != 0) {
            FVar34.Data = local_458.Data.AllocatorInstance.Data;
          }
        }
        ::FName::ToString((FName *)(pFVar22 + lVar19 + 8),&local_468);
        local_517 = pFVar22[lVar19 + 0x34];
        FVar30.Data = (FScriptContainerElement *)L"";
        if (local_468.Data.ArrayNum != 0) {
          FVar30.Data = local_468.Data.AllocatorInstance.Data;
        }
        pUVar15 = StaticEnum<enum_EStateTreeTransitionTrigger>();
        if ((pUVar15 == (UEnum *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("EnumClass != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0xd13,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar14 = (FString *)(*pcVar9)();
          return pFVar14;
        }
        UEnum::GetDisplayNameTextByValue(pUVar15,&local_418,(ulonglong)(byte)local_517);
        pFVar14 = FText::ToString(&local_418);
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar31 = L"";
        }
        else {
          pwVar31 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        pFVar14 = FStateTreeStateHandle::Describe
                            ((FStateTreeStateHandle *)(pFVar22 + lVar19 + 0x2e),&local_368);
        if ((pFVar14->Data).ArrayNum == 0) {
          local_588 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_588 = (pFVar14->Data).AllocatorInstance.Data;
        }
        local_560 = (wchar_t *)CONCAT44(local_560._4_4_,(uint)(byte)local_518);
        local_568 = (wchar_t *)CONCAT44(local_568._4_4_,(uint)local_50e);
        local_580 = (FScriptContainerElement *)pwVar31;
        local_578 = FVar30.Data;
        local_570 = FVar34.Data;
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_508,L"  | (%3d) | %3d | %15s | %-20s | %-40s | %-40s | %4d:%3d |\n");
        if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_368.Data.AllocatorInstance.Data);
        }
        if (local_418.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
        }
        if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_468.Data.AllocatorInstance.Data);
        }
        uVar33 = local_514;
        if (((local_514 & 2) != 0) &&
           (uVar33 = local_514 & 0xfffffffd, local_514 = uVar33,
           local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_458.Data.AllocatorInstance.Data);
        }
        uVar25 = uVar25 + 1;
        lVar19 = lVar19 + 0x40;
      } while ((int)uVar25 < (this->Transitions).ArrayNum);
    }
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"\nEvaluators(%d)\n");
  if (this->EvaluatorsNum != 0) {
    local_588 = (FScriptContainerElement *)0x152b31150;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"  [ (Idx) | %-30s | %8s | %14s ]\n");
    uVar5 = this->EvaluatorsBegin;
    uVar25 = (uint)uVar5;
    if ((uint)uVar5 < (uint)this->EvaluatorsNum + (uint)uVar5) {
      iVar28 = (uint)uVar5 << 4;
      do {
        iVar32 = (this->Nodes).NumItems;
        if ((((iVar32 < 1) || ((int)uVar25 < 0)) || (iVar32 <= (int)uVar25)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid() && IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                ,0x7c,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar14 = (FString *)(*pcVar9)();
          return pFVar14;
        }
        iVar32 = (this->Nodes).NumItems;
        if (((iVar32 < 1) || (iVar32 <= (int)uVar25)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumItems > 0 && Index < NumItems",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                ,0x100,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar14 = (FString *)(*pcVar9)();
          return pFVar14;
        }
        puVar35 = (this->Nodes).Memory;
        lVar19 = (longlong)((this->Nodes).AllocatedSize - iVar28);
        pUVar8 = *(UScriptStruct **)(puVar35 + lVar19 + -0x10);
        puVar35 = puVar35 + *(int *)(puVar35 + lVar19 + -8);
        if ((puVar35 == (uchar *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StructMemory != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                ,0x22,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar14 = (FString *)(*pcVar9)();
          return pFVar14;
        }
        if ((pUVar8 == (UScriptStruct *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ScriptStruct != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                ,0x23,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar14 = (FString *)(*pcVar9)();
          return pFVar14;
        }
        pUVar16 = FStateTreeEvaluatorBase::StaticStruct();
        if (pUVar8 != pUVar16) {
          pUVar16 = FStateTreeEvaluatorBase::StaticStruct();
          if (pUVar16 != (UScriptStruct *)0x0) {
            iVar32 = (int)pUVar16->_padding_;
            if (((int)pUVar8->_padding_ < iVar32) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar32 * 8) !=
                &pUVar16->_padding_)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            if (bVar11) goto LAB_14d4b9d12;
          }
          pUVar16 = FStateTreeEvaluatorBase::StaticStruct();
          pFVar14 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)pUVar16,&local_348,(UObject *)0x0);
          if ((pFVar14->Data).ArrayNum == 0) {
            pwVar31 = L"";
          }
          else {
            pwVar31 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
          pFVar14 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)pUVar8,&local_358,(UObject *)0x0);
          if ((pFVar14->Data).ArrayNum == 0) {
            local_588 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_588 = (pFVar14->Data).AllocatorInstance.Data;
          }
          local_580 = (FScriptContainerElement *)pwVar31;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                              ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FString *)(*pcVar9)();
            return pFVar14;
          }
        }
LAB_14d4b9d12:
        pFVar14 = FStateTreeDataHandle::Describe
                            ((FStateTreeDataHandle *)(puVar35 + 0x18),&local_328);
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar31 = L"";
        }
        else {
          pwVar31 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        uVar5 = *(ushort *)(puVar35 + 0x10);
        ::FName::ToString((FName *)(puVar35 + 8),&local_338);
        local_588 = (FScriptContainerElement *)CONCAT44(local_588._4_4_,(uint)uVar5);
        local_580 = (FScriptContainerElement *)pwVar31;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"  | (%3d) | %-30s | %8d | %14s |\n");
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        uVar25 = uVar25 + 1;
        iVar28 = iVar28 + 0x10;
      } while ((int)uVar25 < (int)((uint)this->EvaluatorsBegin + (uint)this->EvaluatorsNum));
    }
  }
  iVar28 = (this->States).ArrayNum;
  pFVar22 = (this->States).AllocatorInstance.Data;
  pFVar26 = pFVar22 + (longlong)iVar28 * 0x78;
  while( true ) {
    if ((this->States).ArrayNum != iVar28) {
      local_510 = 0;
      `TCheckedPointerIterator<FCompactStateTreeState_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_510);
    }
    if (pFVar22 == pFVar26) break;
    pFVar22 = pFVar22 + 0x78;
  }
  local_578 = (FScriptContainerElement *)0x152b31150;
  local_580 = (FScriptContainerElement *)0x151151108;
  local_588 = (FScriptContainerElement *)0x150641bc8;
  TStringBuilderBase<wchar_t>::AppendfImpl
            (&local_508,L"\nTasks(%d)\n  [ (Idx) | %-30s | %-30s | %8s | %14s ]\n");
  local_514 = (this->States).ArrayNum;
  uVar20 = (ulonglong)(int)local_514;
  pFVar22 = (this->States).AllocatorInstance.Data;
  pFVar26 = pFVar22 + uVar20 * 0x78;
  local_4d0 = pFVar26;
  while( true ) {
    if ((this->States).ArrayNum != (int)uVar20) {
      local_50f = 0;
      `TCheckedPointerIterator<FCompactStateTreeState_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_50f);
    }
    if (pFVar22 == pFVar26) break;
    if (pFVar22[0x6e] != (FScriptContainerElement)0x0) {
      uVar5 = *(ushort *)(pFVar22 + 0x4e);
      uVar25 = (uint)uVar5;
      pFVar26 = local_4d0;
      if ((uint)uVar5 < (uint)(byte)pFVar22[0x6e] + (uint)uVar5) {
        iVar28 = (uint)uVar5 << 4;
        do {
          iVar32 = (this->Nodes).NumItems;
          if ((((iVar32 < 1) || ((int)uVar25 < 0)) || (iVar32 <= (int)uVar25)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid() && IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                  ,0x7c,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FString *)(*pcVar9)();
            return pFVar14;
          }
          pwVar31 = L"";
          iVar32 = (this->Nodes).NumItems;
          if (((iVar32 < 1) || (iVar32 <= (int)uVar25)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumItems > 0 && Index < NumItems",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                  ,0x100,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FString *)(*pcVar9)();
            return pFVar14;
          }
          puVar35 = (this->Nodes).Memory;
          lVar19 = (longlong)((this->Nodes).AllocatedSize - iVar28);
          pFVar17 = UE::StructUtils::GetStructRef<FStateTreeTaskBase_const_>
                              (*(UScriptStruct **)(puVar35 + lVar19 + -0x10),
                               puVar35 + *(int *)(puVar35 + lVar19 + -8));
          pFVar14 = FStateTreeDataHandle::Describe
                              ((FStateTreeDataHandle *)&pFVar17->_padding_,&local_2f8);
          if ((pFVar14->Data).ArrayNum != 0) {
            pwVar31 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
          lVar19 = pFVar17->_padding_;
          pFVar14 = ::FName::ToString((FName *)&pFVar17->_padding_,&local_308);
          if ((pFVar14->Data).ArrayNum == 0) {
            pwVar29 = L"";
          }
          else {
            pwVar29 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
          ::FName::ToString((FName *)(pFVar22 + 0x10),&local_318);
          local_580 = (FScriptContainerElement *)CONCAT44(local_580._4_4_,(uint)(ushort)lVar19);
          local_588 = (FScriptContainerElement *)pwVar29;
          local_578 = (FScriptContainerElement *)pwVar31;
          TStringBuilderBase<wchar_t>::AppendfImpl
                    (&local_508,L"  | (%3d) | %-30s | %-30s | %8d | %14s |\n");
          if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_318.Data.AllocatorInstance.Data);
          }
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Data.AllocatorInstance.Data);
          }
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          uVar25 = uVar25 + 1;
          iVar28 = iVar28 + 0x10;
          pFVar26 = local_4d0;
        } while ((int)uVar25 < (int)((uint)*(ushort *)(pFVar22 + 0x4e) + (uint)(byte)pFVar22[0x6e]))
        ;
      }
    }
    uVar20 = (ulonglong)local_514;
    pFVar22 = pFVar22 + 0x78;
  }
  uVar5 = this->GlobalTasksBegin;
  uVar25 = (uint)uVar5;
  if ((uint)uVar5 < (uint)this->GlobalTasksNum + (uint)uVar5) {
    iVar28 = (uint)uVar5 << 4;
    do {
      iVar32 = (this->Nodes).NumItems;
      if ((((iVar32 < 1) || ((int)uVar25 < 0)) || (iVar32 <= (int)uVar25)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid() && IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                              ,0x7c,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FString *)(*pcVar9)();
        return pFVar14;
      }
      iVar32 = (this->Nodes).NumItems;
      if (((iVar32 < 1) || (iVar32 <= (int)uVar25)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumItems > 0 && Index < NumItems",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                              ,0x100,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FString *)(*pcVar9)();
        return pFVar14;
      }
      puVar35 = (this->Nodes).Memory;
      lVar19 = (longlong)((this->Nodes).AllocatedSize - iVar28);
      pFVar17 = UE::StructUtils::GetStructRef<FStateTreeTaskBase_const_>
                          (*(UScriptStruct **)(puVar35 + lVar19 + -0x10),
                           puVar35 + *(int *)(puVar35 + lVar19 + -8));
      pFVar14 = FStateTreeDataHandle::Describe
                          ((FStateTreeDataHandle *)&pFVar17->_padding_,&local_2d8);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar31 = L"";
      }
      else {
        pwVar31 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      lVar19 = pFVar17->_padding_;
      pFVar14 = ::FName::ToString((FName *)&pFVar17->_padding_,&local_2e8);
      if ((pFVar14->Data).ArrayNum == 0) {
        local_588 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_588 = (pFVar14->Data).AllocatorInstance.Data;
      }
      local_580 = (FScriptContainerElement *)CONCAT44(local_580._4_4_,(uint)(ushort)lVar19);
      local_578 = (FScriptContainerElement *)pwVar31;
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_508,L"  | (%3d) | %-30s | %-30s | %8d | %14s |\n");
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
      uVar25 = uVar25 + 1;
      iVar28 = iVar28 + 0x10;
    } while ((int)uVar25 < (int)((uint)this->GlobalTasksBegin + (uint)this->GlobalTasksNum));
  }
  local_580 = (FScriptContainerElement *)0x152b31150;
  local_588 = (FScriptContainerElement *)0x152b312d8;
  TStringBuilderBase<wchar_t>::AppendfImpl
            (&local_508,L"\nConditions\n  [ (Idx) | %-30s | %8s | %12s | %14s ]\n");
  iVar28 = 0;
  if (0 < (this->Nodes).NumItems) {
    local_514 = 0;
    do {
      uVar25 = local_514;
      iVar32 = (this->Nodes).NumItems;
      if ((((iVar32 < 1) || (iVar28 < 0)) || (iVar32 <= iVar28)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid() && IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                              ,0x7c,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FString *)(*pcVar9)();
        return pFVar14;
      }
      iVar32 = (this->Nodes).NumItems;
      if (((iVar32 < 1) || (iVar32 <= iVar28)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumItems > 0 && Index < NumItems",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                              ,0x100,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FString *)(*pcVar9)();
        return pFVar14;
      }
      puVar35 = (this->Nodes).Memory;
      lVar19 = (longlong)(int)((this->Nodes).AllocatedSize - uVar25);
      pUVar8 = *(UScriptStruct **)(puVar35 + lVar19 + -0x10);
      puVar35 = puVar35 + *(int *)(puVar35 + lVar19 + -8);
      if ((puVar35 != (uchar *)0x0) && (pUVar8 != (UScriptStruct *)0x0)) {
        if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar18 = Z_Construct_UPackage__Script_StateTreeModule();
          Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase,(UObject *)pUVar18,
                               L"StateTreeConditionBase");
        }
        if (pUVar8 == Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton) {
LAB_14d4ba2d0:
          pFVar14 = FStateTreeDataHandle::Describe
                              ((FStateTreeDataHandle *)(puVar35 + 0x18),&local_2b8);
          if ((pFVar14->Data).ArrayNum == 0) {
            pwVar31 = L"";
          }
          else {
            pwVar31 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
          bVar4 = puVar35[0x22];
          pUVar15 = StaticEnum<enum_EStateTreeConditionEvaluationMode>();
          if ((pUVar15 == (UEnum *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EnumClass != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0xd13,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FString *)(*pcVar9)();
            return pFVar14;
          }
          UEnum::GetDisplayNameTextByValue(pUVar15,&local_3f8,(ulonglong)bVar4);
          pFVar14 = FText::ToString(&local_3f8);
          if ((pFVar14->Data).ArrayNum == 0) {
            pwVar29 = L"";
          }
          else {
            pwVar29 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
          bVar4 = puVar35[0x20];
          pUVar15 = StaticEnum<enum_EStateTreeExpressionOperand>();
          if ((pUVar15 == (UEnum *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EnumClass != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0xd13,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FString *)(*pcVar9)();
            return pFVar14;
          }
          UEnum::GetDisplayNameTextByValue(pUVar15,&local_408,(ulonglong)bVar4);
          pFVar14 = FText::ToString(&local_408);
          if ((pFVar14->Data).ArrayNum == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
          ::FName::ToString((FName *)(puVar35 + 8),&local_2c8);
          local_588 = (FScriptContainerElement *)pwVar23;
          local_580 = (FScriptContainerElement *)pwVar29;
          local_578 = (FScriptContainerElement *)pwVar31;
          TStringBuilderBase<wchar_t>::AppendfImpl
                    (&local_508,L"  | (%3d) | %-30s | %8s | %12s | %14s |\n");
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
          if (local_408.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
          }
          if (local_3f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
          }
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar18 = Z_Construct_UPackage__Script_StateTreeModule();
            Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase,
                                 (UObject *)pUVar18,L"StateTreeConditionBase");
          }
          if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton !=
              (UScriptStruct *)0x0) {
            iVar32 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton)
                          ->_padding_;
            if (((int)pUVar8->_padding_ < iVar32) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar32 * 8) !=
                &(Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton)->
                 _padding_)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            if (bVar11) goto LAB_14d4ba2d0;
          }
        }
      }
      iVar28 = iVar28 + 1;
      local_514 = local_514 + 0x10;
    } while (iVar28 < (this->Nodes).NumItems);
  }
  uVar24 = 0;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"\nExtensions(%d)\n");
  uVar20 = uVar24;
  if (0 < (this->Extensions).ArrayNum) {
    do {
      iVar28 = (this->Extensions).ArrayNum;
      uVar33 = (uint)uVar24;
      uVar25 = 0;
      if ((int)uVar33 < iVar28) {
        uVar25 = ~uVar33 >> 0x1f;
      }
      if (uVar25 == 0) {
        local_588 = (FScriptContainerElement *)(longlong)(int)uVar33;
        local_580 = (FScriptContainerElement *)(longlong)iVar28;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          pFVar14 = (FString *)(*pcVar9)();
          return pFVar14;
        }
      }
      lVar19 = *(longlong *)((this->Extensions).AllocatorInstance.Data + uVar20);
      if (lVar19 != 0) {
        local_488 = *(FName *)(lVar19 + 0x18);
        local_168.Base = local_148;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        local_168.CurPos = local_148;
        local_168.End = (wchar_t *)local_48;
        ::FName::AppendString(&local_488,&local_168);
        if (local_168.End < local_168.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        *local_168.CurPos = L'\0';
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_508,L"  %s\n");
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
      }
      uVar24 = (ulonglong)(uVar33 + 1);
      uVar20 = uVar20 + 8;
    } while ((int)(uVar33 + 1) < (this->Extensions).ArrayNum);
  }
  if (local_508.End < local_508.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_508,1);
  }
  *local_508.CurPos = L'\0';
  ::FString::FString(local_480,local_508.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_508);
  return local_480;
}

// GetFrameFromHandle @ 14d4bd850

FCompactStateTreeFrame * __thiscall
UStateTree::GetFrameFromHandle(UStateTree *this,FStateTreeStateHandle param_1)

{
  FCompactStateTreeFrame *pFVar1;
  FCompactStateTreeFrame *pFVar2;
  
  pFVar2 = (FCompactStateTreeFrame *)(this->Frames).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->Frames).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FCompactStateTreeFrame *)0x0;
    }
    if ((pFVar2->RootState).Index == param_1.Index) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetNode @ 14d4be840

FConstStructView * __thiscall
UStateTree::GetNode(UStateTree *this,FConstStructView *__return_storage_ptr__,int param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FConstStructView *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_28;
  uchar *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_1 < 0) || ((this->Nodes).NumItems <= param_1)) {
    puVar6 = &local_18;
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    iVar1 = (this->Nodes).NumItems;
    if ((iVar1 < 1) || (iVar1 <= param_1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid() && IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                         ,0x7c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FConstStructView *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = (this->Nodes).NumItems;
    if ((iVar1 < 1) || (iVar1 <= param_1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumItems > 0 && Index < NumItems",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                         ,0x100,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FConstStructView *)(*pcVar3)();
        return pFVar5;
      }
    }
    puVar2 = (this->Nodes).Memory;
    lVar7 = (longlong)((this->Nodes).AllocatedSize + param_1 * -0x10);
    local_28 = *(undefined8 *)(puVar2 + lVar7 + -0x10);
    puStack_20 = puVar2 + *(int *)(puVar2 + lVar7 + -8);
    puVar6 = &local_28;
  }
  puVar2 = (uchar *)puVar6[1];
  __return_storage_ptr__->ScriptStruct = (UScriptStruct *)*puVar6;
  __return_storage_ptr__->StructMemory = puVar2;
  return __return_storage_ptr__;
}

// GetNodeIdFromIndex @ 14d4be930

FGuid * __thiscall
UStateTree::GetNodeIdFromIndex
          (UStateTree *this,FGuid *__return_storage_ptr__,FStateTreeIndex16 param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  
  if (param_1.Value != 0xffff) {
    pFVar4 = (this->IDToNodeMappings).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->IDToNodeMappings).ArrayNum * 0x14;
    for (; (pFVar5 = (FScriptContainerElement *)0x0, pFVar4 != pFVar1 &&
           (pFVar5 = pFVar4, *(ushort *)(pFVar4 + 0x10) != param_1.Value)); pFVar4 = pFVar4 + 0x14)
    {
    }
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      uVar2 = *(undefined8 *)pFVar5;
      uVar3 = *(undefined8 *)(pFVar5 + 8);
      __return_storage_ptr__->A = (int)uVar2;
      __return_storage_ptr__->B = (int)((ulonglong)uVar2 >> 0x20);
      __return_storage_ptr__->C = (int)uVar3;
      __return_storage_ptr__->D = (int)((ulonglong)uVar3 >> 0x20);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetNodeIndexFromId @ 14d4be9c0

FStateTreeIndex16 __thiscall UStateTree::GetNodeIndexFromId(UStateTree *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FStateTreeIndex16 *pFVar3;
  undefined8 *in_R8;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar2 = (this->IDToNodeMappings).AllocatorInstance.Data;
  local_18 = (int)*in_R8;
  iStack_14 = (int)((ulonglong)*in_R8 >> 0x20);
  iStack_c = (int)((ulonglong)in_R8[1] >> 0x20);
  pFVar1 = pFVar2 + (longlong)(this->IDToNodeMappings).ArrayNum * 0x14;
  do {
    if (pFVar2 == pFVar1) {
      pFVar3 = &FStateTreeIndex16::Invalid;
LAB_14d4bea30:
      *(ushort *)&param_1->A = pFVar3->Value;
      return (FStateTreeIndex16)(ushort)param_1;
    }
    if (((iStack_c == *(int *)(pFVar2 + 0xc) && (int)in_R8[1] == *(int *)(pFVar2 + 8)) &&
        iStack_14 == *(int *)(pFVar2 + 4)) && local_18 == *(int *)pFVar2) {
      pFVar3 = (FStateTreeIndex16 *)(pFVar2 + 0x10);
      goto LAB_14d4bea30;
    }
    pFVar2 = pFVar2 + 0x14;
  } while( true );
}

// GetPrivateStaticClass @ 14d4beeb0

UClass * __cdecl UStateTree::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTree.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTree",
               &Z_Registration_Info_UClass_UStateTree.InnerSingleton,StaticRegisterNativesUStateTree
               ,0x2a0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UStateTree>,
               InternalVTableHelperCtorCaller<UStateTree>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTree.InnerSingleton;
}

// GetSharedInstanceData @ 14d4bf740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FStateTreeInstanceData,1> * __thiscall
UStateTree::GetSharedInstanceData
          (UStateTree *this,TSharedPtr<FStateTreeInstanceData,1> *__return_storage_ptr__)

{
  FPlatformRWLock *SRWLock;
  TArray<TSharedPtr<FStateTreeInstanceData,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> aVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<FStateTreeInstanceData,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  atomic<int> aVar13;
  int *piVar14;
  ulonglong local_res18;
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  
  aVar6 = ThreadIndexCounter;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  aVar13 = *(atomic<int> *)(lVar2 + 0x9be0);
  if (aVar13 == (atomic<int>)0xffffffff) {
    LOCK();
    UNLOCK();
    aVar13 = (atomic<int>)((int)ThreadIndexCounter + 1);
    *(atomic<int> *)(lVar2 + 0x9be0) = ThreadIndexCounter;
    ThreadIndexCounter = aVar13;
    aVar13 = aVar6;
  }
  SRWLock = &this->PerThreadSharedInstanceDataLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FStateTreeInstanceData,1> *)(*pcVar4)();
    return pTVar9;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if ((int)aVar13 < (this->PerThreadSharedInstanceData).ArrayNum) {
    if (((int)aVar13 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FStateTreeInstanceData,1> *)(*pcVar4)();
      return pTVar9;
    }
    pFVar12 = (this->PerThreadSharedInstanceData).AllocatorInstance.Data +
              (longlong)(int)aVar13 * 0x10;
    __return_storage_ptr__->Object = *(FStateTreeInstanceData **)pFVar12;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  else {
    if (SRWLock == (FPlatformRWLock *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FStateTreeInstanceData,1> *)(*pcVar4)();
        return pTVar9;
      }
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    uVar11 = (int)aVar13 + 1;
    pTVar1 = &this->PerThreadSharedInstanceData;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((this->PerThreadSharedInstanceData).ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar11,&pTVar1->AllocatorInstance,
                 (this->PerThreadSharedInstanceData).ArrayNum,
                 &(this->PerThreadSharedInstanceData).ArrayMax);
    }
    pTVar5 = _UNK_150651568;
    pTVar3 = ___xmm_00000000000000000000000000000010;
    iVar8 = (this->PerThreadSharedInstanceData).ArrayNum;
    if (iVar8 < (int)uVar11) {
      local_res18 = (ulonglong)(uVar11 - iVar8);
      do {
        pTVar10 = ::operator_new(0x20);
        if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
          local_68 = pTVar3;
          pTStack_60 = pTVar5;
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar10->SharedReferenceCount = (atomic<int>)0x1;
          pTVar10->WeakReferenceCount = (atomic<int>)0x1;
          pTVar10->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFStateTreeInstanceData___00_SharedPointerInternals__6B_
          ;
          FStateTreeInstanceData::FStateTreeInstanceData((FStateTreeInstanceData *)(pTVar10 + 1));
          if ((pTVar10 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FStateTreeInstanceData,1> *)(*pcVar4)();
            return pTVar9;
          }
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
          local_68 = pTVar10 + 1;
          pTStack_60 = pTVar10;
        }
        piVar14 = &(this->PerThreadSharedInstanceData).ArrayMax;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        if ((local_68 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FStateTreeInstanceData,1> *)(*pcVar4)();
          return pTVar9;
        }
        FStateTreeInstanceData::CopyFrom
                  ((FStateTreeInstanceData *)local_68,(UObject *)this,&this->SharedInstanceData);
        pFVar12 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar12 + (longlong)*piVar14 * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FStateTreeInstanceData,1> *)(*pcVar4)();
          return pTVar9;
        }
        iVar8 = (this->PerThreadSharedInstanceData).ArrayNum;
        if (iVar8 == *piVar14) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,piVar14);
          (this->PerThreadSharedInstanceData).ArrayNum = iVar8;
        }
        (this->PerThreadSharedInstanceData).ArrayNum = iVar8 + 1;
        pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(TReferenceControllerBase<1> **)pFVar12 = local_68;
        *(TReferenceControllerBase<1> **)(pFVar12 + 8) = pTStack_60;
        if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_60->SharedReferenceCount =
               (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_60);
        local_res18 = local_res18 - 1;
      } while (local_res18 != 0);
    }
    uVar11 = 0;
    if ((int)aVar13 < (this->PerThreadSharedInstanceData).ArrayNum) {
      uVar11 = ~(uint)aVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FStateTreeInstanceData,1> *)(*pcVar4)();
      return pTVar9;
    }
    pFVar12 = (this->PerThreadSharedInstanceData).AllocatorInstance.Data +
              (longlong)(int)aVar13 * 0x10;
    __return_storage_ptr__->Object = *(FStateTreeInstanceData **)pFVar12;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return __return_storage_ptr__;
}

// GetStateFromHandle @ 14d4bfd50

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

FCompactStateTreeState * __thiscall
UStateTree::GetStateFromHandle(UStateTree *this,FStateTreeStateHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  FCompactStateTreeState *pFVar3;
  
  if ((this->States).ArrayNum <= (int)(uint)param_1.Index) {
    return (FCompactStateTreeState *)0x0;
  }
  if ((this->States).ArrayNum <= (int)(uint)param_1.Index) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCompactStateTreeState *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FCompactStateTreeState *)
         ((this->States).AllocatorInstance.Data + (ulonglong)param_1.Index * 0x78);
}

// GetStateHandleFromId @ 14d4bfdf0

FStateTreeStateHandle __thiscall UStateTree::GetStateHandleFromId(UStateTree *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FStateTreeStateHandle *pFVar3;
  undefined8 *in_R8;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar2 = (this->IDToStateMappings).AllocatorInstance.Data;
  local_18 = (int)*in_R8;
  iStack_14 = (int)((ulonglong)*in_R8 >> 0x20);
  iStack_c = (int)((ulonglong)in_R8[1] >> 0x20);
  pFVar1 = pFVar2 + (longlong)(this->IDToStateMappings).ArrayNum * 0x14;
  do {
    if (pFVar2 == pFVar1) {
      pFVar3 = &FStateTreeStateHandle::Invalid;
LAB_14d4bfe60:
      *(ushort *)&param_1->A = pFVar3->Index;
      return (FStateTreeStateHandle)(ushort)param_1;
    }
    if (((iStack_c == *(int *)(pFVar2 + 0xc) && (int)in_R8[1] == *(int *)(pFVar2 + 8)) &&
        iStack_14 == *(int *)(pFVar2 + 4)) && local_18 == *(int *)pFVar2) {
      pFVar3 = (FStateTreeStateHandle *)(pFVar2 + 0x10);
      goto LAB_14d4bfe60;
    }
    pFVar2 = pFVar2 + 0x14;
  } while( true );
}

// GetStateIdFromHandle @ 14d4bfe80

FGuid * __thiscall
UStateTree::GetStateIdFromHandle
          (UStateTree *this,FGuid *__return_storage_ptr__,FStateTreeStateHandle param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->IDToStateMappings).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->IDToStateMappings).ArrayNum * 0x14;
  while( true ) {
    if (pFVar4 == pFVar1) {
      __return_storage_ptr__->A = 0;
      __return_storage_ptr__->B = 0;
      __return_storage_ptr__->C = 0;
      __return_storage_ptr__->D = 0;
      return __return_storage_ptr__;
    }
    if (*(ushort *)(pFVar4 + 0x10) == param_1.Index) break;
    pFVar4 = pFVar4 + 0x14;
  }
  uVar2 = *(undefined8 *)pFVar4;
  uVar3 = *(undefined8 *)(pFVar4 + 8);
  __return_storage_ptr__->A = (int)uVar2;
  __return_storage_ptr__->B = (int)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->C = (int)uVar3;
  __return_storage_ptr__->D = (int)((ulonglong)uVar3 >> 0x20);
  return __return_storage_ptr__;
}

// GetTransitionFromIndex @ 14d4c0160

FCompactStateTransition * __thiscall
UStateTree::GetTransitionFromIndex(UStateTree *this,FStateTreeIndex16 param_1)

{
  code *pcVar1;
  bool bVar2;
  FCompactStateTransition *pFVar3;
  
  if ((param_1.Value != 0xffff) && ((int)(uint)param_1.Value < (this->Transitions).ArrayNum)) {
    if ((this->Transitions).ArrayNum <= (int)(uint)param_1.Value) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FCompactStateTransition *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FCompactStateTransition *)
           ((this->Transitions).AllocatorInstance.Data + (ulonglong)param_1.Value * 0x40);
  }
  return (FCompactStateTransition *)0x0;
}

// GetTransitionIdFromIndex @ 14d4c01e0

FGuid * __thiscall
UStateTree::GetTransitionIdFromIndex
          (UStateTree *this,FGuid *__return_storage_ptr__,FStateTreeIndex16 param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->IDToTransitionMappings).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->IDToTransitionMappings).ArrayNum * 0x14;
  while( true ) {
    if (pFVar4 == pFVar1) {
      __return_storage_ptr__->A = 0;
      __return_storage_ptr__->B = 0;
      __return_storage_ptr__->C = 0;
      __return_storage_ptr__->D = 0;
      return __return_storage_ptr__;
    }
    if (*(ushort *)(pFVar4 + 0x10) == param_1.Value) break;
    pFVar4 = pFVar4 + 0x14;
  }
  uVar2 = *(undefined8 *)pFVar4;
  uVar3 = *(undefined8 *)(pFVar4 + 8);
  __return_storage_ptr__->A = (int)uVar2;
  __return_storage_ptr__->B = (int)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->C = (int)uVar3;
  __return_storage_ptr__->D = (int)((ulonglong)uVar3 >> 0x20);
  return __return_storage_ptr__;
}

// GetTransitionIndexFromId @ 14d4c0250

FStateTreeIndex16 __thiscall UStateTree::GetTransitionIndexFromId(UStateTree *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FStateTreeIndex16 *pFVar3;
  undefined8 *in_R8;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar2 = (this->IDToTransitionMappings).AllocatorInstance.Data;
  local_18 = (int)*in_R8;
  iStack_14 = (int)((ulonglong)*in_R8 >> 0x20);
  iStack_c = (int)((ulonglong)in_R8[1] >> 0x20);
  pFVar1 = pFVar2 + (longlong)(this->IDToTransitionMappings).ArrayNum * 0x14;
  do {
    if (pFVar2 == pFVar1) {
      pFVar3 = &FStateTreeIndex16::Invalid;
LAB_14d4c02c0:
      *(ushort *)&param_1->A = pFVar3->Value;
      return (FStateTreeIndex16)(ushort)param_1;
    }
    if (((iStack_c == *(int *)(pFVar2 + 0xc) && (int)in_R8[1] == *(int *)(pFVar2 + 8)) &&
        iStack_14 == *(int *)(pFVar2 + 4)) && local_18 == *(int *)pFVar2) {
      pFVar3 = (FStateTreeIndex16 *)(pFVar2 + 0x10);
      goto LAB_14d4c02c0;
    }
    pFVar2 = pFVar2 + 0x14;
  } while( true );
}

// HandleRuntimeValidationPostGC @ 14d4c1dc0

void __thiscall UStateTree::HandleRuntimeValidationPostGC(UStateTree *this)

{
  FWeakObjectPtr *pFVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  IConsoleVariable *pIVar6;
  FWeakObjectPtr *this_00;
  wchar_t *local_res8;
  wchar_t **local_38;
  FWeakObjectPtr *local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar3 = (this->GCObjectDatas).ArrayNum;
  this_00 = (FWeakObjectPtr *)(this->GCObjectDatas).AllocatorInstance.Data;
  pFVar1 = (FWeakObjectPtr *)((longlong)this_00 + (longlong)iVar3 * 0x14);
  while( true ) {
    if ((this->GCObjectDatas).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UStateTree::FDebugInstanceData,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (this_00 == pFVar1) goto LAB_14d4c1ee4;
    bVar5 = FWeakObjectPtr::IsStale(this_00,true,false);
    if (bVar5) break;
    this_00 = (FWeakObjectPtr *)&this_00[2].ObjectSerialNumber;
  }
  cVar2 = (char)this_00[2].ObjectIndex;
  local_res8 = L"An";
  local_30 = this_00;
  if (*(char *)((longlong)&this_00[2].ObjectIndex + 1) == '\0') {
    if (cVar2 == '\x01') {
      local_res8 = L"A shared";
    }
    local_38 = &local_res8;
    `UStateTree::HandleRuntimeValidationPostGC'::__l12::<lambda_1>::operator()(&local_38);
  }
  else {
    if (cVar2 == '\x01') {
      local_res8 = L"A shared";
    }
    local_38 = &local_res8;
    `UStateTree::HandleRuntimeValidationPostGC'::__l14::<lambda_2>::operator()(&local_38);
  }
  pIVar6 = UE::StateTree::Debug::Private::FindCVarInstanceDataGC();
  local_res8 = (wchar_t *)0x0;
  local_20 = 0;
  lVar4 = *(longlong *)pIVar6;
  local_28 = 0xe000000;
  local_24 = 0;
  local_18 = 0;
  local_14 = 0xf000000;
  local_10 = 0x1000000;
  (**(code **)(lVar4 + 0xa8))(pIVar6,&local_38,&local_28);
  (**(code **)(lVar4 + 0xb0))(pIVar6,&u_0);
LAB_14d4c1ee4:
  (this->GCObjectDatas).ArrayNum = 0;
  if ((this->GCObjectDatas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&(this->GCObjectDatas).AllocatorInstance,0,&(this->GCObjectDatas).ArrayMax);
  }
  return;
}

// HandleRuntimeValidationPreGC @ 14d4c1f40

void __thiscall UStateTree::HandleRuntimeValidationPreGC(UStateTree *this)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FStateTreeInstanceStorage *pFVar5;
  FScriptContainerElement *pFVar6;
  uint local_res8 [2];
  UStateTree *local_res10;
  uint *local_res18;
  
  (this->GCObjectDatas).ArrayNum = 0;
  if ((this->GCObjectDatas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&(this->GCObjectDatas).AllocatorInstance,0,&(this->GCObjectDatas).ArrayMax);
  }
  local_res10 = this;
  pFVar5 = FStateTreeInstanceData::GetStorage(&this->DefaultInstanceData);
  `UStateTree::HandleRuntimeValidationPreGC'::__l2::<lambda_1>::operator()
            (&local_res10,pFVar5,-1,DefaultInstance);
  pFVar5 = FStateTreeInstanceData::GetStorage(&this->SharedInstanceData);
  `UStateTree::HandleRuntimeValidationPreGC'::__l2::<lambda_1>::operator()
            (&local_res10,pFVar5,-1,SharedInstance);
  SRWLock = &this->PerThreadSharedInstanceDataLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_res8[0] = 0;
  if (0 < (this->PerThreadSharedInstanceData).ArrayNum) {
    do {
      uVar2 = local_res8[0];
      uVar4 = 0;
      if ((int)local_res8[0] < (this->PerThreadSharedInstanceData).ArrayNum) {
        uVar4 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (this->PerThreadSharedInstanceData).AllocatorInstance.Data +
               (longlong)(int)uVar2 * 0x10;
      if (*(longlong *)pFVar6 == 0) {
        local_res18 = local_res8;
        bVar3 = `UStateTree::HandleRuntimeValidationPreGC'::__l6::<lambda_2>::operator()
                          (&local_res18);
        if (bVar3) goto LAB_14d4c20a8;
      }
      else {
LAB_14d4c20a8:
        uVar2 = local_res8[0];
        if ((*(longlong *)pFVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar5 = FStateTreeInstanceData::GetStorage(*(FStateTreeInstanceData **)pFVar6);
        `UStateTree::HandleRuntimeValidationPreGC'::__l2::<lambda_1>::operator()
                  (&local_res10,pFVar5,uVar2,SharedInstance);
      }
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (this->PerThreadSharedInstanceData).ArrayNum);
  }
  if (SRWLock == (FPlatformRWLock *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4c2125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return;
}

// HasCompatibleContextData @ 14d4c2140

bool __thiscall UStateTree::HasCompatibleContextData(UStateTree *this,UStateTree *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  if (param_1 == (UStateTree *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  iVar1 = (this->ContextDataDescs).ArrayNum;
  if (iVar1 != (param_1->ContextDataDescs).ArrayNum) {
    return false;
  }
  uVar10 = 0;
  if (0 < iVar1) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->ContextDataDescs).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar2 = (this->ContextDataDescs).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar10 < (param_1->ContextDataDescs).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      lVar3 = *(longlong *)((param_1->ContextDataDescs).AllocatorInstance.Data + lVar11);
      if ((lVar3 == 0) || (lVar4 = *(longlong *)(pFVar2 + lVar11), lVar4 == 0)) {
        return false;
      }
      if (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38)) {
        return false;
      }
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30) {
        return false;
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + 0x18;
    } while (lVar9 < iVar1);
  }
  return true;
}

// HasCompatibleContextData @ 14d4c22c0

bool __thiscall
UStateTree::HasCompatibleContextData(UStateTree *this,TNotNull<UStateTree_const_*> param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar1 = (this->ContextDataDescs).ArrayNum;
  if (iVar1 == ((param_1.Val)->ContextDataDescs).ArrayNum) {
    uVar10 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < (this->ContextDataDescs).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        pFVar2 = (this->ContextDataDescs).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar10 < ((param_1.Val)->ContextDataDescs).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        lVar3 = *(longlong *)(((param_1.Val)->ContextDataDescs).AllocatorInstance.Data + lVar11);
        if ((lVar3 == 0) || (lVar4 = *(longlong *)(pFVar2 + lVar11), lVar4 == 0))
        goto LAB_14d4c23ee;
        if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) goto LAB_14d4c23ee;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x18;
      } while (lVar9 < iVar1);
    }
    bVar6 = true;
  }
  else {
LAB_14d4c23ee:
    bVar6 = false;
  }
  return bVar6;
}

// IsReadyToRun @ 14d4c3ff0

bool __thiscall UStateTree::IsReadyToRun(UStateTree *this)

{
  if (((0 < (this->States).ArrayNum) && (this->bIsLinked != '\0')) &&
     ((char)(this->PropertyBindings)._padding_ != '\0')) {
    return true;
  }
  return false;
}

// K2_GetExtension @ 14d4c4220

UStateTreeExtension * __thiscall
UStateTree::K2_GetExtension(UStateTree *this,TSubclassOf<UStateTreeExtension> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UStateTreeExtension *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->Extensions).AllocatorInstance.Data;
  iVar2 = (this->Extensions).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  do {
    if ((this->Extensions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UStateTreeExtension>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return (UStateTreeExtension *)0x0;
    }
    pUVar4 = *(UStateTreeExtension **)pFVar8;
    if ((pUVar4 != (UStateTreeExtension *)0x0) ||
       (bVar5 = `UStateTree::K2_GetExtension'::__l7::<lambda_1>::operator()(local_res8), bVar5)) {
      pUVar7 = *(UObject **)param_1.Class.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UObject *)0x0) goto LAB_14d4c42a3;
LAB_14d4c42d1:
        pUVar7 = (UObject *)0x0;
      }
      else {
        if (pUVar7 == (UObject *)0x0) goto LAB_14d4c42d1;
        UE::GC::MarkAsReachable(pUVar7);
LAB_14d4c42a3:
        pUVar6 = Z_Construct_UClass_UStateTreeExtension_NoRegister();
        if (pUVar6 == (UClass *)0x0) goto LAB_14d4c42d1;
        iVar3 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_14d4c42d1;
      }
      if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) +
           (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
        return pUVar4;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// Link @ 14d4c4320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UStateTree::Link(UStateTree *this)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TSharedPtr<FStateTreeInstanceData,1> *pTVar4;
  uchar *puVar5;
  UScriptStruct *pUVar6;
  UStateTreeSchema *pUVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  longlong lVar13;
  UPackage *pUVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  undefined1 local_res8 [8];
  FName local_res10;
  FStateTreeLinker local_f8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  this->bIsLinked = '\0';
  iVar18 = 0;
  (this->ExternalDataDescs).ArrayNum = 0;
  if ((this->ExternalDataDescs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ExternalDataDescs).AllocatorInstance,0,
               &(this->ExternalDataDescs).ArrayMax);
  }
  SRWLock = &this->PerThreadSharedInstanceDataLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  piVar1 = &(this->PerThreadSharedInstanceData).ArrayMax;
  pTVar4 = (TSharedPtr<FStateTreeInstanceData,1> *)
           (this->PerThreadSharedInstanceData).AllocatorInstance.Data;
  iVar19 = (this->PerThreadSharedInstanceData).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FStateTreeInstanceData,1>,int>(pTVar4,iVar19);
    (this->PerThreadSharedInstanceData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PerThreadSharedInstanceData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FStateTreeInstanceData,1>,int>(pTVar4,iVar19);
    (this->PerThreadSharedInstanceData).ArrayNum = 0;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  bVar10 = ValidateInstanceData(this);
  if (!bVar10) {
    return false;
  }
  if ((0 < (this->States).ArrayNum) &&
     (iVar19 = (this->Nodes).NumItems, iVar15 = iVar18, iVar17 = iVar18, 0 < iVar19)) {
    do {
      iVar3 = (this->Nodes).NumItems;
      if (((iVar3 < 1) || (iVar3 <= iVar15)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumItems > 0 && Index < NumItems",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                              ,0x100,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      puVar5 = (this->Nodes).Memory;
      lVar13 = (longlong)((this->Nodes).AllocatedSize - iVar17);
      if ((puVar5 + *(int *)(puVar5 + lVar13 + -8) == (uchar *)0x0) ||
         (*(longlong *)(puVar5 + lVar13 + -0x10) == 0)) {
        if ((byte)LogStateTree._0_1_ < 2) {
          return false;
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_c0,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
        local_80.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
        goto LAB_14d4c4607;
      }
      iVar15 = iVar15 + 1;
      iVar17 = iVar17 + 0x10;
    } while (iVar15 != iVar19);
  }
  FStateTreeLinker::FStateTreeLinker(&local_f8,(TNotNull<UStateTree_const_*>)this);
  iVar19 = iVar18;
  if (0 < (this->Nodes).NumItems) {
    do {
      iVar15 = (this->Nodes).NumItems;
      if ((((iVar15 < 1) || (iVar18 < 0)) || (iVar15 <= iVar18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid() && IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                              ,0x84,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      iVar15 = (this->Nodes).NumItems;
      if (((iVar15 < 1) || (iVar15 <= iVar18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumItems > 0 && Index < NumItems",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                              ,0x100,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      puVar5 = (this->Nodes).Memory;
      lVar13 = (longlong)((this->Nodes).AllocatedSize - iVar19);
      pUVar6 = *(UScriptStruct **)(puVar5 + lVar13 + -0x10);
      plVar20 = (longlong *)(puVar5 + *(int *)(puVar5 + lVar13 + -8));
      if ((plVar20 == (longlong *)0x0) || (pUVar6 == (UScriptStruct *)0x0)) {
LAB_14d4c46f8:
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3874886818340011349>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTree.cpp"
                            ,0x2ab,"NodePtr");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
      }
      else {
        if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar14 = Z_Construct_UPackage__Script_StateTreeModule();
          Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar14,
                               L"StateTreeNodeBase");
        }
        if (pUVar6 != Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton) {
          if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar14 = Z_Construct_UPackage__Script_StateTreeModule();
            Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar14,
                                 L"StateTreeNodeBase");
            if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
                (UScriptStruct *)0x0) goto LAB_14d4c46f8;
          }
          iVar15 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->
                        _padding_;
          if (((int)pUVar6->_padding_ < iVar15) ||
             ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar15 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_)) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if (!bVar10) goto LAB_14d4c46f8;
        }
        cVar12 = (**(code **)(*plVar20 + 0x18))(plVar20,&local_f8);
        if ((cVar12 == '\0') || (local_f8.Status == Failed)) {
          if ((byte)LogStateTree._0_1_ < 2) goto LAB_14d4c483e;
          if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar14 = Z_Construct_UPackage__Script_StateTreeModule();
            Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar14,
                                 L"StateTreeNodeBase");
          }
          local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)
                               ->_padding_;
          ::FName::ToString(&local_res10,&local_d0);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_b0,(UObject *)0x0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
          local_a0.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            local_a0.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
          }
          goto LAB_14d4c4834;
        }
      }
      iVar18 = iVar18 + 1;
      iVar19 = iVar19 + 0x10;
    } while (iVar18 < (this->Nodes).NumItems);
  }
  pUVar7 = (this->Schema).field0_0x0.DebugPtr;
  if ((pUVar7 == (UStateTreeSchema *)0x0) ||
     ((cVar12 = (**(code **)(*(longlong *)pUVar7 + 0x2f8))(pUVar7,&local_f8), cVar12 != '\0' &&
      (local_f8.Status != Failed)))) {
    iVar18 = (this->Extensions).ArrayNum;
    if (iVar18 == 0) {
LAB_14d4c4879:
      FVar9.Data = local_f8.ExternalDataDescs.AllocatorInstance.Data;
      if ((local_f8.ExternalDataDescs.ArrayNum < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      iVar18 = (this->ExternalDataDescs).ArrayMax;
      (this->ExternalDataDescs).ArrayNum = local_f8.ExternalDataDescs.ArrayNum;
      if ((local_f8.ExternalDataDescs.ArrayNum == 0) && (iVar18 == 0)) {
        (this->ExternalDataDescs).ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_f8.ExternalDataDescs.ArrayNum,iVar18,
                   &(this->ExternalDataDescs).AllocatorInstance,local_f8.ExternalDataDescs.ArrayNum,
                   &(this->ExternalDataDescs).ArrayMax);
        ConstructItems<FStateTreeExternalDataDesc,FStateTreeExternalDataDesc,int>
                  ((this->ExternalDataDescs).AllocatorInstance.Data,
                   (FStateTreeExternalDataDesc *)FVar9.Data,local_f8.ExternalDataDescs.ArrayNum);
      }
      if ((FStateTreeExternalDataDesc *)local_f8.ExternalDataDescs.AllocatorInstance.Data !=
          (FStateTreeExternalDataDesc *)0x0) {
        FMemory::Free(local_f8.ExternalDataDescs.AllocatorInstance.Data);
      }
      if (local_f8.Schema.Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(local_f8.Schema.Object);
        local_f8.Schema.Object = (UObject *)0x0;
      }
      if (local_f8.StateTree.Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(local_f8.StateTree.Object);
      }
      UpdateRuntimeFlags(this);
      bVar10 = FStateTreeInstanceData::AreAllInstancesValid(&this->DefaultInstanceData);
      if (bVar10) {
        bVar10 = FStateTreeInstanceData::AreAllInstancesValid(&this->SharedInstanceData);
        if (bVar10) {
          bVar10 = UE::StateTree::InstanceData::FInstanceContainer::AreAllInstancesValid
                             (&this->DefaultEvaluationScopeInstanceData);
          if (bVar10) {
            bVar10 = UE::StateTree::InstanceData::FInstanceContainer::AreAllInstancesValid
                               (&this->DefaultExecutionRuntimeData);
            if (bVar10) {
              bVar10 = PatchBindings(this);
              if (!bVar10) {
                return false;
              }
              bVar10 = FPropertyBindingBindingCollection::ResolvePaths
                                 ((FPropertyBindingBindingCollection *)&this->PropertyBindings);
              if (!bVar10) {
                return false;
              }
              this->bIsLinked = '\x01';
              return true;
            }
            if ((byte)LogStateTree._0_1_ < 2) {
              return false;
            }
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
            local_80.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
          }
          else {
            if ((byte)LogStateTree._0_1_ < 2) {
              return false;
            }
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_60,(UObject *)0x0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
            local_80.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
          }
        }
        else {
          if ((byte)LogStateTree._0_1_ < 2) {
            return false;
          }
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_70,(UObject *)0x0);
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u__s__State_Tree__152b30050,
                     (FLogCategoryBase *)&LogStateTree);
          local_80.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
        }
      }
      else {
        if ((byte)LogStateTree._0_1_ < 2) {
          return false;
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_80,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      }
LAB_14d4c4607:
      if (local_80.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return false;
      }
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
      return false;
    }
    pFVar16 = (this->Extensions).AllocatorInstance.Data;
    pFVar2 = pFVar16 + (longlong)iVar18 * 8;
    while( true ) {
      if ((this->Extensions).ArrayNum != iVar18) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UStateTreeExtension>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar16 == pFVar2) goto LAB_14d4c4879;
      plVar20 = *(longlong **)pFVar16;
      if ((plVar20 != (longlong *)0x0) &&
         ((cVar12 = (**(code **)(*plVar20 + 0x2b0))(plVar20,&local_f8), cVar12 == '\0' ||
          (local_f8.Status == Failed)))) break;
      pFVar16 = pFVar16 + 8;
    }
    if ((byte)LogStateTree._0_1_ < 2) goto LAB_14d4c483e;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_90,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    local_a0.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
  }
  else {
    if ((byte)LogStateTree._0_1_ < 2) goto LAB_14d4c483e;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_a0,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
  }
LAB_14d4c4834:
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
LAB_14d4c483e:
  if ((FStateTreeExternalDataDesc *)local_f8.ExternalDataDescs.AllocatorInstance.Data !=
      (FStateTreeExternalDataDesc *)0x0) {
    FMemory::Free(local_f8.ExternalDataDescs.AllocatorInstance.Data);
  }
  if (local_f8.Schema.Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_f8.Schema.Object);
    local_f8.Schema.Object = (UObject *)0x0;
  }
  if (local_f8.StateTree.Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_f8.StateTree.Object);
  }
  return false;
}

// PatchBindings @ 14d4c93e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UStateTree::PatchBindings(UStateTree *this)

{
  FObjectPtr_u_0 *pFVar1;
  EStateTreeDataSourceType EVar2;
  ushort uVar3;
  int iVar4;
  UStruct *pUVar5;
  UObjectBaseUtility *pUVar6;
  FEvaluationScopeMemoryRequirement *pFVar7;
  code *pcVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
  *pTVar13;
  FObjectPtr_u_0 **ppFVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  UClass *pUVar19;
  UObject *pUVar20;
  FPropertyBindingBindableStructDescriptor *pFVar21;
  UScriptStruct *pUVar22;
  longlong lVar23;
  FStateTreeDataHandle *pFVar24;
  FStateTreeBindableStructDesc *pFVar25;
  UPropertyBag *pUVar26;
  FStateTreeInstanceStorage *pFVar27;
  FCompactStateTreeParameters *pFVar28;
  uint *puVar29;
  FCompactStateTreeParameters *this_00;
  UPropertyBag *pUVar30;
  ulonglong uVar31;
  UScriptStruct *pUVar32;
  FStateTreeNodeBase *pFVar33;
  FConstStructView *pFVar34;
  FStateTreeInstanceObjectWrapper *pFVar35;
  longlong *plVar36;
  FScriptContainerElement *pFVar37;
  FEvaluationScopeMemoryRequirement *pFVar38;
  ForAnyElementType FVar39;
  FScriptContainerElement *pFVar40;
  uint uVar41;
  ulonglong uVar42;
  ForElementType<FSetElementId> FVar43;
  short *psVar44;
  FObjectPtr_u_0 *pFVar45;
  longlong lVar46;
  FScriptContainerElement *pFVar47;
  undefined4 uVar48;
  FObjectPtr_u_0 *pFVar49;
  longlong lVar50;
  ushort uVar51;
  int iVar52;
  uint uVar53;
  ForElementType<unsigned_int> FVar54;
  uint uVar55;
  uint uVar56;
  ulonglong uVar57;
  byte *pbVar58;
  TArray<UE::StateTree::InstanceData::FEvaluationScopeMemoryRequirement,TSizedDefaultAllocator<32>_>
  *pTVar59;
  uchar *puVar60;
  int iVar61;
  FScriptContainerElement *pFVar62;
  undefined1 auStackY_5e8 [32];
  undefined1 local_590;
  undefined1 local_58f;
  undefined1 local_58e;
  undefined1 local_58d;
  uint local_58c;
  int local_588;
  FScriptContainerElement *local_580;
  FString local_578;
  FStateTreeDataHandle local_568 [2];
  undefined8 local_558;
  undefined8 uStack_550;
  FScriptContainerElement *local_548;
  int local_540 [2];
  undefined4 local_538;
  ushort local_534;
  undefined4 local_528;
  ushort local_524;
  int local_518;
  uint uStack_514;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_510;
  undefined4 local_508;
  int iStack_504;
  int iStack_500;
  undefined4 uStack_4fc;
  FObjectPtr_u_0 *local_4f8;
  int local_4f0;
  FStateTreeDataView local_4e8;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
  *local_4c8;
  FObjectPtr_u_0 **local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined1 local_4a8 [12];
  undefined1 local_49c [12];
  longlong *local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_488;
  int local_468;
  FMemoryRequirementBuilder local_460;
  FObjectPtr_u_0 *local_450;
  int *local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  FSparseArrayAllocationInfo local_430;
  FStateTreeDataView local_420;
  FStructView local_410;
  FStateTreeDataView local_400;
  longlong local_3f0;
  longlong local_3e8;
  FScriptContainerElement *local_3e0;
  longlong *local_3d8;
  FStructView local_3d0;
  FStructView local_3c0;
  FStructView local_3b0;
  FStateTreeIndex16 *local_3a0;
  FStateTreeDataView *local_398;
  FStateTreeIndex16 *local_390;
  FStateTreeDataView *local_388;
  FStateTreeDataHandle local_380;
  FStateTreeDataHandle local_37a;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FStructView local_330;
  FStructView local_320;
  FStructView local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  UStruct *local_258;
  void *pvStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  FPropertyBindingDataView local_238;
  FPropertyBindingDataView local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FConstStructView local_198;
  FStructView local_188;
  FEvaluationScopeMemoryRequirement local_178;
  FConstStructView local_168;
  FConstStructView local_158;
  FConstStructView local_148;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  FScriptContainerElement local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
  local_e8;
  TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  local_4f8 = (FObjectPtr_u_0 *)(this->PropertyBindings).SourceStructs.AllocatorInstance.Data;
  iVar52 = (this->PropertyBindings).SourceStructs.ArrayNum;
  if ((iVar52 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    uVar17 = (*pcVar8)();
    return (bool)uVar17;
  }
  local_58c = (uint)(this->PropertyBindings)._padding_;
  pFVar47 = (FScriptContainerElement *)(this->PropertyBindings)._padding_;
  local_580 = pFVar47;
  local_4f0 = iVar52;
  if (((int)local_58c < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    uVar17 = (*pcVar8)();
    return (bool)uVar17;
  }
  local_588 = (this->PropertyBindings).PropertyPathBindings.ArrayNum;
  pFVar62 = (this->PropertyBindings).PropertyPathBindings.AllocatorInstance.Data;
  local_548 = pFVar62;
  if ((local_588 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    uVar17 = (*pcVar8)();
    return (bool)uVar17;
  }
  iVar52 = 0;
  pFVar49 = local_4f8 + (longlong)local_4f0 * 4;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  if (local_4f8 != pFVar49) {
    local_448 = local_540;
    pFVar45 = local_4f8;
    do {
      local_450 = pFVar45 + 3;
      local_540[0] = iVar52;
      TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FStateTreeDataHandle_const_&,int_&&>_>
                (&local_98,(TPairInitializer<FStateTreeDataHandle_const_&,int_&&> *)local_4a8,
                 (bool *)&local_450);
      pFVar45 = pFVar45 + 4;
      iVar52 = iVar52 + 1;
    } while (pFVar45 != pFVar49);
  }
  local_4c8 = &local_98;
  pFVar49 = local_4f8 + (longlong)local_4f0 * 4;
  local_4c0 = &local_4f8;
  if (local_4f8 != pFVar49) {
    pFVar45 = local_4f8 + 1;
    do {
      if (pFVar45->Handle != (UObject *)0x0) {
        pUVar19 = Z_Construct_UClass_UClass_NoRegister();
        bVar16 = FObjectPtr::IsA((FObjectPtr *)pFVar45,pUVar19);
        if (((bVar16) && (pUVar20 = pFVar45->Handle, pUVar20 != (UObject *)0x0)) &&
           (*(int *)&pUVar20[5].field_0xc < 0)) {
          pUVar20 = (UObject *)(**(code **)(*(longlong *)pUVar20 + 0x368))();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar20);
          }
          pFVar45->Handle = pUVar20;
        }
      }
      pFVar1 = pFVar45 + 3;
      pFVar45 = pFVar45 + 4;
    } while (pFVar1 != pFVar49);
  }
  pFVar37 = pFVar47 + (longlong)(int)local_58c * 0x18;
  uVar15 = local_558;
  for (; pFVar47 != pFVar37; pFVar47 = pFVar47 + 0x18) {
    local_558 = (UScriptStruct *)uVar15;
    pFVar21 = TInstancedStruct<FPropertyBindingBindableStructDescriptor>::
              Get<FPropertyBindingBindableStructDescriptor,void>
                        ((TInstancedStruct<FPropertyBindingBindableStructDescriptor> *)pFVar47);
    if ((pFVar21->Struct).field0_0x0.DebugPtr != (UStruct *)0x0) {
      pUVar19 = Z_Construct_UClass_UClass_NoRegister();
      bVar16 = FObjectPtr::IsA((FObjectPtr *)&pFVar21->Struct,pUVar19);
      if (((bVar16) && (pUVar5 = (pFVar21->Struct).field0_0x0.DebugPtr, pUVar5 != (UStruct *)0x0))
         && (*(int *)((longlong)&pUVar5[1]._padding_ + 4) < 0)) {
        pUVar20 = (UObject *)(**(code **)(pUVar5->_padding_ + 0x368))();
        puVar60 = *(uchar **)(pFVar47 + 8);
        lVar23 = *(longlong *)pFVar47;
        if ((puVar60 == (uchar *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Memory != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                ,0xd1,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
        if ((lVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Struct != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                ,0xd2,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
        pUVar22 = FPropertyBindingBindableStructDescriptor::StaticStruct();
        if (pUVar22 == (UScriptStruct *)0x0) {
LAB_14d4c96fb:
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                              ,0xd3,L"");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        else {
          iVar52 = (int)pUVar22->_padding_;
          if ((*(int *)(lVar23 + 0x38) < iVar52) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar52 * 8) !=
              &pUVar22->_padding_)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          if (!bVar16) goto LAB_14d4c96fb;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar20);
        }
        *(UObject **)(puVar60 + 8) = pUVar20;
      }
    }
    pFVar62 = local_548;
    uVar15 = local_558;
  }
  local_558._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
  lVar23 = (longlong)local_588;
  if (pFVar62 != pFVar62 + lVar23 * 0x30) {
    pFVar47 = pFVar62 + 0x20;
    do {
      local_558 = (UScriptStruct *)uVar15;
      iVar52 = *(int *)(pFVar47 + -0x10);
      lVar46 = *(longlong *)(pFVar47 + -0x18);
      if ((iVar52 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        uVar17 = (*pcVar8)();
        return (bool)uVar17;
      }
      lVar50 = (longlong)iVar52 * 0x20 + lVar46;
      for (; lVar46 != lVar50; lVar46 = lVar46 + 0x20) {
        pUVar6 = *(UObjectBaseUtility **)(lVar46 + 0x10);
        if (((pUVar6 != (UObjectBaseUtility *)0x0) &&
            (bVar16 = UObjectBaseUtility::IsA<UClass>(pUVar6), bVar16)) &&
           (*(int *)&pUVar6[5].field_0xc < 0)) {
          pUVar20 = (UObject *)(**(code **)(*(longlong *)pUVar6 + 0x368))(pUVar6);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar20);
          }
          *(UObject **)(lVar46 + 0x10) = pUVar20;
          *(undefined1 *)(lVar46 + 0x18) = 5;
        }
      }
      iVar52 = *(int *)pFVar47;
      lVar46 = *(longlong *)(pFVar47 + -8);
      if ((iVar52 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        uVar17 = (*pcVar8)();
        return (bool)uVar17;
      }
      lVar50 = (longlong)iVar52 * 0x20 + lVar46;
      uVar15 = local_558;
      for (; lVar46 != lVar50; lVar46 = lVar46 + 0x20) {
        pUVar6 = *(UObjectBaseUtility **)(lVar46 + 0x10);
        local_558 = (UScriptStruct *)uVar15;
        if (((pUVar6 != (UObjectBaseUtility *)0x0) &&
            (bVar16 = UObjectBaseUtility::IsA<UClass>(pUVar6), bVar16)) &&
           (*(int *)&pUVar6[5].field_0xc < 0)) {
          pUVar20 = (UObject *)(**(code **)(*(longlong *)pUVar6 + 0x368))(pUVar6);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar20);
          }
          *(UObject **)(lVar46 + 0x10) = pUVar20;
          *(undefined1 *)(lVar46 + 0x18) = 5;
        }
        uVar15 = local_558;
      }
      local_558._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
      pFVar37 = pFVar47 + 0x10;
      pFVar47 = pFVar47 + 0x30;
    } while (pFVar37 != pFVar62 + lVar23 * 0x30);
  }
  uVar48 = 0xd;
  if (this->ParameterDataType == ExternalGlobalParameterData) {
    uVar48 = 0x12;
  }
  local_558 = (UScriptStruct *)CONCAT44(local_558._4_4_,uVar48);
  pFVar24 = FStateTreeDataHandle::FStateTreeDataHandle(&local_380,(EStateTreeDataSourceType)uVar48);
  local_538._0_1_ = pFVar24->Source;
  local_538._1_1_ = pFVar24->field_0x1;
  local_538._2_2_ = pFVar24->Index;
  local_534 = (pFVar24->StateHandle).Index;
  pFVar25 = `UStateTree::PatchBindings'::__l2::<lambda_1>::operator()
                      (&local_4c8,SUB86(&local_538,0));
  if (pFVar25 != (FStateTreeBindableStructDesc *)0x0) {
    pUVar26 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Parameters);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UPropertyBag *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar26);
    }
    pFVar25->_padding_ = (longlong)pUVar26;
  }
  iVar52 = (this->States).ArrayNum;
  pFVar47 = (this->States).AllocatorInstance.Data;
  pFVar62 = pFVar47 + (longlong)iVar52 * 0x78;
  do {
    if ((this->States).ArrayNum != iVar52) {
      local_590 = 0;
      `TCheckedPointerIterator<FCompactStateTreeState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_590);
    }
    if (pFVar47 == pFVar62) {
      iVar52 = (this->States).ArrayNum;
      pFVar47 = (this->States).AllocatorInstance.Data;
      pFVar62 = pFVar47 + (longlong)iVar52 * 0x78;
      break;
    }
    if ((pFVar47[0x72] == (FScriptContainerElement)0x4) || ((byte)((char)pFVar47[0x72] - 2U) < 2)) {
      if (*(short *)(pFVar47 + 0x50) == -1) {
        if ((byte)LogStateTree._0_1_ < 2) goto LAB_14d4ca0af;
        ::FName::ToString((FName *)(pFVar47 + 0x10),&local_340);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_350,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
        local_290.Data.AllocatorInstance.Data = local_340.Data.AllocatorInstance.Data;
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
          local_290.Data.AllocatorInstance.Data = local_340.Data.AllocatorInstance.Data;
        }
        goto LAB_14d4ca0a5;
      }
      uVar51 = *(ushort *)(pFVar47 + 0x50);
LAB_14d4c9992:
      pFVar27 = FStateTreeInstanceData::GetMutableStorage(&this->DefaultInstanceData);
      FInstancedStructContainer::operator[](&pFVar27->InstanceStructs,&local_188,(uint)uVar51);
      pFVar28 = FStructView::Get<FCompactStateTreeParameters>(&local_188);
      pTVar13 = local_4c8;
      uVar41 = *(uint *)(pFVar47 + 0x52);
      local_568[0].StateHandle.Index = *(ushort *)(pFVar47 + 0x56);
      local_568[0].Index = (ushort)(uVar41 >> 0x10);
      uVar55 = (uVar41 & 0xff) +
               (uint)local_568[0].Index * 0x40 + (local_568[0].Index >> 2) + 0x9e3779b9 ^
               (uint)local_568[0].Index;
      local_568[0]._0_4_ = uVar41;
      iVar18 = TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FStateTreeDataHandle>
                         (local_4c8,
                          uVar55 * 0x40 + (uVar55 >> 2) + 0x9e3779b9 +
                          (uint)local_568[0].StateHandle.Index ^ uVar55,local_568);
      ppFVar14 = local_4c0;
      if (iVar18 == -1) goto LAB_14d4c9c12;
      lVar23 = *(longlong *)&pTVar13->Elements + (longlong)iVar18 * 0x14;
      puVar29 = (uint *)(lVar23 + 8);
      if (lVar23 == 0) {
        puVar29 = (uint *)0x0;
      }
      if (puVar29 == (uint *)0x0) goto LAB_14d4c9c12;
      uVar41 = *puVar29;
      uVar55 = 0;
      if ((int)uVar41 < *(int *)(local_4c0 + 1)) {
        uVar55 = ~uVar41 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        uVar17 = (*pcVar8)();
        return (bool)uVar17;
      }
      pFVar49 = *ppFVar14;
      if (pFVar49 + (longlong)(int)uVar41 * 4 == (FObjectPtr_u_0 *)0x0) goto LAB_14d4c9c12;
      pUVar26 = FInstancedPropertyBag::GetPropertyBagStruct(&pFVar28->Parameters);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UPropertyBag *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar26);
      }
      (pFVar49 + (longlong)(int)uVar41 * 4)[1].Handle = (UObject *)pUVar26;
      uVar51 = *(ushort *)(pFVar47 + 0x58);
      if (uVar51 != 0xffff) {
        if (((int)local_58c <= (int)(uint)uVar51) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
        pUVar26 = FInstancedPropertyBag::GetPropertyBagStruct(&pFVar28->Parameters);
        lVar23 = *(longlong *)(local_580 + ((ulonglong)uVar51 * 3 + 1) * 8);
        lVar46 = *(longlong *)(local_580 + (ulonglong)uVar51 * 0x18);
        if ((lVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Memory != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                ,0xd1,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
        if ((lVar46 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Struct != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                ,0xd2,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
        pUVar22 = FPropertyBindingBindableStructDescriptor::StaticStruct();
        if (pUVar22 == (UScriptStruct *)0x0) {
LAB_14d4c9bbf:
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                              ,0xd3,L"");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        else {
          iVar18 = (int)pUVar22->_padding_;
          if ((*(int *)(lVar46 + 0x38) < iVar18) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar46 + 0x30) + (longlong)iVar18 * 8) !=
              &pUVar22->_padding_)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          if (!bVar16) goto LAB_14d4c9bbf;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UPropertyBag *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar26);
        }
        *(UPropertyBag **)(lVar23 + 8) = pUVar26;
      }
    }
    else {
      uVar51 = *(ushort *)(pFVar47 + 0x50);
      if (uVar51 != 0xffff) goto LAB_14d4c9992;
    }
    pFVar47 = pFVar47 + 0x78;
  } while( true );
LAB_14d4c9d27:
  if ((this->States).ArrayNum != iVar52) {
    local_58f = 0;
    `TCheckedPointerIterator<FCompactStateTreeState,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_58f);
  }
  if (pFVar47 == pFVar62) {
    uStack_438 = (this->Parameters).Value.StructMemory;
    pFVar47 = (FScriptContainerElement *)0x0;
    local_440 = (this->Parameters).Value.ScriptStruct.field0_0x0.DebugPtr;
    local_138._0_8_ = (FScriptContainerElement *)0x0;
    local_138._8_8_ = 0;
    local_118 = (ForElementType<unsigned_int>)0x0;
    local_110 = 0;
    local_10c = 0x80;
    local_108 = -1;
    local_104 = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_e8.Elements._0_8_ = 0;
    local_e8.Elements._8_8_ = 0;
    local_e8.Elements._32_8_ = 0;
    local_e8.Elements._40_4_ = 0;
    local_e8.Elements._44_4_ = 0x80;
    local_e8.Elements._48_4_ = 0xffffffff;
    local_e8.Elements._52_4_ = 0;
    local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_e8.HashSize = 0;
    if (((uStack_438 != (uchar *)0x0) && (local_440 == (UScriptStruct *)0x0)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Memory || (Memory && Struct)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                            ,0x2b,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    pFVar24 = FStateTreeDataHandle::FStateTreeDataHandle
                        (&local_37a,(EStateTreeDataSourceType)local_558);
    if (local_104 == 0) {
      iVar52 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x20,8,1,(ForAnyElementType *)local_138,(int *)(local_138 + 8),
                          (int *)(local_138 + 0xc));
      iVar18 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),1);
      FVar54 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
      if (local_118 != (ForElementType<unsigned_int>)0x0) {
        FVar54 = local_118;
      }
      uVar41 = iVar18 >> 0x1f & 0x1f;
      iVar18 = iVar18 + uVar41;
      puVar29 = (uint *)((longlong)FVar54 + (longlong)(iVar18 >> 5) * 4);
      *puVar29 = *puVar29 & ~(1 << (((byte)iVar18 & 0x1f) - (char)uVar41 & 0x1f));
      iVar18 = local_108;
    }
    else {
      local_104 = local_104 + -1;
      iVar18 = *(int *)(local_138._0_8_ + (longlong)local_108 * 0x20 + 4);
      iVar52 = local_108;
      if (local_104 != 0) {
        *(undefined4 *)(local_138._0_8_ + (longlong)iVar18 * 0x20) = 0xffffffff;
      }
    }
    local_108 = iVar18;
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_138,&local_430,iVar52);
    if (local_430.Pointer != (FScriptContainerElement *)0x0) {
      *(undefined4 *)local_430.Pointer = *(undefined4 *)pFVar24;
      *(ushort *)((longlong)local_430.Pointer + 4) = (pFVar24->StateHandle).Index;
      *(undefined4 *)((longlong)local_430.Pointer + 8) = (undefined4)local_440;
      *(undefined4 *)((longlong)local_430.Pointer + 0xc) = local_440._4_4_;
      *(undefined4 *)((longlong)local_430.Pointer + 0x10) = (undefined4)uStack_438;
      *(undefined4 *)((longlong)local_430.Pointer + 0x14) = uStack_438._4_4_;
      *(undefined4 *)((longlong)local_430.Pointer + 0x18) = 0xffffffff;
      pFVar47 = local_430.Pointer;
    }
    uVar51 = *(ushort *)(pFVar47 + 2);
    uVar41 = (byte)*pFVar47 + 0x9e3779b9 + (uint)uVar51 * 0x40 + (uint)(uVar51 >> 2) ^ (uint)uVar51;
    uVar41 = uVar41 * 0x40 + (uVar41 >> 2) + 0x9e3779b9 + (uint)*(ushort *)(pFVar47 + 4) ^ uVar41;
    iVar52 = local_138._8_4_;
    if ((local_138._8_4_ - local_104 == 1) || (local_138._8_4_ == local_104)) goto LAB_14d4ca3f4;
    FVar39.Data = local_100;
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FVar39.Data = local_f8.Data;
    }
    iVar18 = *(int *)(FVar39.Data + (ulonglong)(local_f0 - 1 & uVar41) * 4);
    if (iVar18 == -1) goto LAB_14d4ca3f4;
    goto LAB_14d4ca360;
  }
  if (pFVar47[0x72] != (FScriptContainerElement)0x2) {
    if ((pFVar47[0x72] == (FScriptContainerElement)0x3) &&
       (lVar23 = *(longlong *)(pFVar47 + 0x38), lVar23 != 0)) {
      uVar51 = *(ushort *)(pFVar47 + 0x50);
      pFVar27 = FStateTreeInstanceData::GetMutableStorage(&this->DefaultInstanceData);
      FInstancedStructContainer::operator[](&pFVar27->InstanceStructs,&local_310,(uint)uVar51);
      pFVar28 = FStructView::Get<FCompactStateTreeParameters>(&local_310);
      pUVar26 = FInstancedPropertyBag::GetPropertyBagStruct
                          ((FInstancedPropertyBag *)(lVar23 + 0x240));
      pUVar30 = FInstancedPropertyBag::GetPropertyBagStruct(&pFVar28->Parameters);
      if (pUVar26 != pUVar30) {
        if ((byte)LogStateTree._0_1_ < 2) goto LAB_14d4ca0af;
        UObjectBaseUtility::GetPathName
                  (*(UObjectBaseUtility **)(pFVar47 + 0x38),&local_290,(UObject *)0x0);
        ::FName::ToString((FName *)(pFVar47 + 0x10),&local_2a0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_2b0,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        }
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
        goto LAB_14d4ca0a5;
      }
    }
LAB_14d4c9ea9:
    pFVar47 = pFVar47 + 0x78;
    goto LAB_14d4c9d27;
  }
  uVar51 = *(ushort *)(pFVar47 + 0x40);
  if (uVar51 == 0xffff) goto LAB_14d4c9ea9;
  if (((this->States).ArrayNum <= (int)(uint)uVar51) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar8 = (code *)swi(3);
    uVar17 = (*pcVar8)();
    return (bool)uVar17;
  }
  uVar3 = *(ushort *)(pFVar47 + 0x50);
  pFVar37 = (this->States).AllocatorInstance.Data;
  if ((uVar3 == 0xffff) || (*(short *)(pFVar37 + (ulonglong)uVar51 * 0x78 + 0x50) == -1)) {
    if ((byte)LogStateTree._0_1_ < 2) goto LAB_14d4ca0af;
    ::FName::ToString((FName *)(pFVar47 + 0x10),&local_2c0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_2d0,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    local_290.Data.AllocatorInstance.Data = local_2c0.Data.AllocatorInstance.Data;
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      local_290.Data.AllocatorInstance.Data = local_2c0.Data.AllocatorInstance.Data;
    }
    goto LAB_14d4ca0a5;
  }
  pFVar27 = FStateTreeInstanceData::GetMutableStorage(&this->DefaultInstanceData);
  FInstancedStructContainer::operator[](&pFVar27->InstanceStructs,&local_330,(uint)uVar3);
  pFVar28 = FStructView::Get<FCompactStateTreeParameters>(&local_330);
  uVar3 = *(ushort *)(pFVar37 + (ulonglong)uVar51 * 0x78 + 0x50);
  pFVar27 = FStateTreeInstanceData::GetMutableStorage(&this->DefaultInstanceData);
  FInstancedStructContainer::operator[](&pFVar27->InstanceStructs,&local_320,(uint)uVar3);
  this_00 = FStructView::Get<FCompactStateTreeParameters>(&local_320);
  pUVar26 = FInstancedPropertyBag::GetPropertyBagStruct(&this_00->Parameters);
  pUVar30 = FInstancedPropertyBag::GetPropertyBagStruct(&pFVar28->Parameters);
  if (pUVar26 != pUVar30) goto LAB_14d4c9eb2;
  pFVar47 = pFVar47 + 0x78;
  goto LAB_14d4c9d27;
  while (iVar18 = *(int *)(local_138._0_8_ + lVar23 + 0x18), iVar18 != -1) {
LAB_14d4ca360:
    lVar23 = (longlong)iVar18 * 0x20;
    if (((*(FScriptContainerElement *)(local_138._0_8_ + lVar23) == *pFVar47) &&
        (*(ushort *)(local_138._0_8_ + lVar23 + 2) == uVar51)) &&
       (*(ushort *)(local_138._0_8_ + lVar23 + 4) == *(ushort *)(pFVar47 + 4))) {
      if (iVar18 != -1) {
        memmove((FScriptContainerElement *)(local_138._0_8_ + (longlong)iVar18 * 0x20),pFVar47,0x18)
        ;
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_138,local_430.Index,1);
        local_430.Index = iVar18;
      }
      iVar52 = local_138._8_4_;
      if (iVar18 != -1) goto LAB_14d4ca6ab;
      break;
    }
  }
LAB_14d4ca3f4:
  uVar56 = iVar52 - local_104;
  uVar55 = 1;
  if (3 < uVar56) {
    uVar42 = (ulonglong)((uVar56 >> 1) + 7) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar42 != 0) {
      for (; uVar42 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_4a8._4_4_ = (int)lVar23;
    uVar55 = 1 << ((byte)lVar23 & 0x1f);
  }
  if (((int)uVar56 < 1) || ((int)uVar55 <= (int)local_f0)) {
    uVar41 = local_f0 - 1 & uVar41;
    *(uint *)(pFVar47 + 0x1c) = uVar41;
    FVar39.Data = local_100;
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FVar39.Data = local_f8.Data;
    }
    uVar42 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar41;
    *(undefined4 *)(pFVar47 + 0x18) = *(undefined4 *)(FVar39.Data + uVar42 * 4);
    *(int *)(FVar39.Data + uVar42 * 4) = local_430.Index;
  }
  else {
    local_f0 = uVar55;
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
    }
    if (uVar55 != 0) {
      uVar41 = uVar55;
      if (uVar55 < 2) {
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          uVar41 = 0;
          goto LAB_14d4ca46b;
        }
      }
      else {
LAB_14d4ca46b:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar41,4);
      }
      uVar42 = 0;
      if (0 < (int)uVar55) {
        uVar57 = (ulonglong)uVar55;
        do {
          FVar39.Data = local_100;
          if (local_f8.Data != (FScriptContainerElement *)0x0) {
            FVar39.Data = local_f8.Data;
          }
          uVar31 = (longlong)(int)uVar55 - 1U & uVar42;
          uVar42 = uVar42 + 1;
          *(undefined4 *)(FVar39.Data + uVar31 * 4) = 0xffffffff;
          uVar57 = uVar57 - 1;
        } while (uVar57 != 0);
      }
    }
    local_488.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         CONCAT44(local_488.Array._4_4_,local_488.Array._0_4_);
    if (local_f0 != 0) {
      pTStack_510 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
      local_518 = 0;
      uStack_514 = 1;
      iStack_504 = 0;
      iStack_500 = 0;
      if (local_110 != 0) {
        FVar54 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
        if (local_118 != (ForElementType<unsigned_int>)0x0) {
          FVar54 = local_118;
        }
        uVar41 = *(uint *)FVar54;
        iStack_500 = 0;
        local_518 = 0;
        while (uVar41 == 0) {
          iStack_500 = iStack_500 + 0x20;
          lVar23 = (longlong)local_518;
          local_518 = local_518 + 1;
          if ((int)(local_110 + -1 + (local_110 + -1 >> 0x1f & 0x1fU)) >> 5 < local_518)
          goto LAB_14d4ca591;
          uVar41 = ((uint *)((longlong)FVar54 + 4))[lVar23];
        }
        uStack_514 = -uVar41 & uVar41;
        uVar42 = (ulonglong)uStack_514 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_468 = (int)lVar23;
        iStack_504 = (int)lVar23 + -1 + iStack_500;
        if (local_110 < iStack_504) {
LAB_14d4ca591:
          iStack_504 = local_110;
        }
      }
      local_508 = 0xffffffff;
      local_490 = (longlong *)local_138;
      local_488._padding_._0_4_ = local_518;
      local_488._padding_._4_4_ = uStack_514;
      local_488.Array = pTStack_510;
      local_488.UnvisitedBitMask = 0xffffffff;
      local_488.CurrentBitIndex = iStack_504;
      local_488.BaseBitIndex = iStack_500;
      local_488._28_4_ = uStack_4fc;
      iVar52 = iStack_504;
      if (iStack_504 < local_110) {
        do {
          pbVar58 = (byte *)((longlong)iVar52 * 0x20 + *local_490);
          uVar51 = *(ushort *)(pbVar58 + 2);
          uVar41 = (uint)*pbVar58 + (uint)uVar51 * 0x40 + (uVar51 >> 2) + 0x9e3779b9 ^ (uint)uVar51;
          uVar41 = (uVar41 * 0x40 + (uVar41 >> 2) + 0x9e3779b9 + (uint)*(ushort *)(pbVar58 + 4) ^
                   uVar41) & local_f0 - 1;
          *(uint *)(pbVar58 + 0x1c) = uVar41;
          FVar39.Data = local_100;
          if (local_f8.Data != (FScriptContainerElement *)0x0) {
            FVar39.Data = local_f8.Data;
          }
          uVar42 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar41;
          *(undefined4 *)(pbVar58 + 0x18) = *(undefined4 *)(FVar39.Data + uVar42 * 4);
          *(int *)(FVar39.Data + uVar42 * 4) = iVar52;
          local_488.UnvisitedBitMask = local_488.UnvisitedBitMask & ~local_488._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_488);
          iVar52 = local_488.CurrentBitIndex;
        } while (local_488.CurrentBitIndex < (local_488.Array)->NumBits);
      }
    }
  }
LAB_14d4ca6ab:
  iVar52 = (this->ContextDataDescs).ArrayNum;
  pFVar62 = (this->ContextDataDescs).AllocatorInstance.Data;
  pFVar47 = pFVar62 + (longlong)iVar52 * 0x18;
  while( true ) {
    if ((this->ContextDataDescs).ArrayNum != iVar52) {
      local_58e = 0;
      `TCheckedPointerIterator<FStateTreeExternalDataDesc,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_58e);
    }
    if (pFVar62 == pFVar47) break;
    local_420._0_8_ = *(undefined8 *)pFVar62;
    local_420._8_8_ = 0;
    TMapBase<FStateTreeDataHandle,FStateTreeDataView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>_>
    ::Emplace<FStateTreeDataHandle_const_&,FStateTreeDataView>
              ((TMapBase<FStateTreeDataHandle,FStateTreeDataView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>_>
                *)local_138,(FStateTreeDataHandle *)(pFVar62 + 0x10),&local_420);
    pFVar62 = pFVar62 + 0x18;
  }
  iVar52 = (this->States).ArrayNum;
  pFVar47 = (this->States).AllocatorInstance.Data;
  pFVar62 = pFVar47 + (longlong)iVar52 * 0x78;
  while( true ) {
    if ((this->States).ArrayNum != iVar52) {
      local_58d = 0;
      `TCheckedPointerIterator<FCompactStateTreeState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_58d);
    }
    if (pFVar47 == pFVar62) break;
    if (pFVar47[0x52] != (FScriptContainerElement)0x0) {
      uVar51 = *(ushort *)(pFVar47 + 0x50);
      pFVar27 = FStateTreeInstanceData::GetMutableStorage(&this->DefaultInstanceData);
      FInstancedStructContainer::operator[](&pFVar27->InstanceStructs,&local_410,(uint)uVar51);
      puVar60 = local_410.StructMemory;
      pUVar22 = local_410.ScriptStruct;
      if ((longlong *)local_410.StructMemory == (longlong *)0x0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L"");
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
      }
      if (pUVar22 == (UScriptStruct *)0x0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L"");
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
      }
      pUVar32 = FCompactStateTreeParameters::StaticStruct();
      if (pUVar22 != pUVar32) {
        pUVar32 = FCompactStateTreeParameters::StaticStruct();
        if (pUVar32 != (UScriptStruct *)0x0) {
          iVar18 = (int)pUVar32->_padding_;
          if (((int)pUVar22->_padding_ < iVar18) ||
             ((longlong *)*(undefined1 **)(pUVar22->_padding_ + (longlong)iVar18 * 8) !=
              &pUVar32->_padding_)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          if (bVar16) goto LAB_14d4ca8b9;
        }
        pUVar32 = FCompactStateTreeParameters::StaticStruct();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar32,&local_270,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar22,&local_280,(UObject *)0x0);
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
      }
LAB_14d4ca8b9:
      local_400._8_8_ = *(longlong *)((longlong)puVar60 + 8);
      local_400._0_8_ = *(undefined8 *)puVar60;
      if ((local_400._8_8_ != 0) && (local_400._0_8_ == 0)) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Memory || (Memory && Struct)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                            ,0x2b,L"");
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
      }
      TMapBase<FStateTreeDataHandle,FStateTreeDataView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>_>
      ::Emplace<FStateTreeDataHandle_const_&,FStateTreeDataView>
                ((TMapBase<FStateTreeDataHandle,FStateTreeDataView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>_>
                  *)local_138,(FStateTreeDataHandle *)(pFVar47 + 0x52),&local_400);
      if (*(short *)(pFVar47 + 0x58) != -1) {
        local_3e8 = *(longlong *)((longlong)puVar60 + 8);
        local_3f0 = *(longlong *)puVar60;
        if ((local_3e8 != 0) && (local_3f0 == 0)) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Memory || (Memory && Struct)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                              ,0x2b,L"");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return (bool)uVar17;
          }
        }
        local_3d8 = &local_3f0;
        local_3e0 = pFVar47 + 0x58;
        TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_&&>_>
                  (&local_e8,
                   (TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_&&> *)
                   (local_4a8 + 8),(bool *)&local_3e0);
      }
    }
    pFVar47 = pFVar47 + 0x78;
  }
  iVar52 = (this->Nodes).NumItems;
  iVar61 = 0;
  iVar18 = iVar61;
  if (iVar52 != 0) {
    do {
      iVar4 = (this->Nodes).NumItems;
      if ((iVar4 < 1) || (iVar4 <= iVar61)) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumItems > 0 && Index < NumItems",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                            ,0x100,L"");
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
      }
      puVar60 = (this->Nodes).Memory;
      lVar23 = (longlong)((this->Nodes).AllocatedSize - iVar18);
      pFVar33 = UE::StructUtils::GetStructRef<FStateTreeNodeBase_const_>
                          (*(UScriptStruct **)(puVar60 + lVar23 + -0x10),
                           puVar60 + *(int *)(puVar60 + lVar23 + -8));
      local_4e8._0_8_ = 0;
      local_4e8._8_8_ = 0;
      EVar2 = (pFVar33->InstanceDataHandle).Source;
      pFVar24 = &pFVar33->InstanceDataHandle;
      if ((EVar2 == SharedInstanceData) || (EVar2 == SharedInstanceDataObject)) {
        bVar16 = FStateTreeDataHandle::IsObjectSource(pFVar24);
        uVar41 = (uint)(pFVar33->InstanceTemplateIndex).Value;
        if (bVar16) {
          pFVar27 = FStateTreeInstanceData::GetMutableStorage(&this->SharedInstanceData);
          pFVar34 = FInstancedStructContainer::operator[]
                              (&pFVar27->InstanceStructs,&local_158,uVar41);
          pFVar35 = FConstStructView::Get<FStateTreeInstanceObjectWrapper_const_>(pFVar34);
          pUVar20 = (pFVar35->InstanceObject).field0_0x0.DebugPtr;
          if (pUVar20 == (UObject *)0x0) {
            pUVar22 = (UScriptStruct *)0x0;
          }
          else {
            pUVar22 = *(UScriptStruct **)&pUVar20->field_0x10;
            if (pUVar22 == (UScriptStruct *)0x0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Memory || (Memory && Struct)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                                  ,0x24,L"");
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                uVar17 = (*pcVar8)();
                return (bool)uVar17;
              }
            }
          }
        }
        else {
          pFVar27 = FStateTreeInstanceData::GetMutableStorage(&this->SharedInstanceData);
          FInstancedStructContainer::operator[](&pFVar27->InstanceStructs,&local_3b0,uVar41);
          puVar60 = local_3b0.StructMemory;
          pUVar22 = local_3b0.ScriptStruct;
          if (((UObject *)local_3b0.StructMemory != (UObject *)0x0) &&
             (local_3b0.ScriptStruct == (UScriptStruct *)0x0)) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Memory || (Memory && Struct)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                                ,0x2b,L"");
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              uVar17 = (*pcVar8)();
              return (bool)uVar17;
            }
          }
          uStack_4d0 = (UObject *)puVar60;
          pUVar20 = uStack_4d0;
        }
        uStack_4d0 = pUVar20;
        local_4d8._0_4_ = SUB84(pUVar22,0);
        local_4d8._4_4_ = (undefined4)((ulonglong)pUVar22 >> 0x20);
        local_4e8._0_4_ = (undefined4)local_4d8;
        local_4e8._4_4_ = local_4d8._4_4_;
        local_4e8._8_4_ = (undefined4)uStack_4d0;
        local_4e8._12_4_ = uStack_4d0._4_4_;
        local_4d8 = pUVar22;
      }
      else if ((byte)(EVar2 - EvaluationScopeInstanceData) < 2) {
        bVar16 = FStateTreeDataHandle::IsObjectSource(pFVar24);
        uVar41 = (uint)(pFVar33->InstanceTemplateIndex).Value;
        if (bVar16) {
          pFVar34 = FInstancedStructContainer::operator[]
                              (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs,
                               &local_168,uVar41);
          pFVar35 = FConstStructView::Get<FStateTreeInstanceObjectWrapper_const_>(pFVar34);
          pUVar20 = (pFVar35->InstanceObject).field0_0x0.DebugPtr;
          if (pUVar20 == (UObject *)0x0) {
            pUVar22 = (UScriptStruct *)0x0;
          }
          else {
            pUVar22 = *(UScriptStruct **)&pUVar20->field_0x10;
            if (pUVar22 == (UScriptStruct *)0x0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Memory || (Memory && Struct)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                                  ,0x24,L"");
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                uVar17 = (*pcVar8)();
                return (bool)uVar17;
              }
            }
          }
          local_4b8._0_4_ = SUB84(pUVar22,0);
          local_4b8._4_4_ = (undefined4)((ulonglong)pUVar22 >> 0x20);
          uStack_4b0._0_4_ = SUB84(pUVar20,0);
          uStack_4b0._4_4_ = (undefined4)((ulonglong)pUVar20 >> 0x20);
          local_4e8._0_4_ = (undefined4)local_4b8;
          local_4e8._4_4_ = local_4b8._4_4_;
          local_4e8._8_4_ = (undefined4)uStack_4b0;
          local_4e8._12_4_ = uStack_4b0._4_4_;
          local_4b8 = pUVar22;
          uStack_4b0 = pUVar20;
        }
        else {
          FInstancedStructContainer::operator[]
                    (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs,&local_3c0,uVar41);
          puVar60 = local_3c0.StructMemory;
          pUVar22 = local_3c0.ScriptStruct;
          if (((UObject *)local_3c0.StructMemory != (UObject *)0x0) &&
             (local_3c0.ScriptStruct == (UScriptStruct *)0x0)) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Memory || (Memory && Struct)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                                ,0x2b,L"");
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              uVar17 = (*pcVar8)();
              return (bool)uVar17;
            }
          }
          uStack_4b0 = (UObject *)puVar60;
          pUVar20 = uStack_4b0;
          local_4b8 = pUVar22;
          local_4b8._0_4_ = SUB84(pUVar22,0);
          local_4b8._4_4_ = (undefined4)((ulonglong)pUVar22 >> 0x20);
          uStack_4b0._0_4_ = SUB84(puVar60,0);
          uStack_4b0._4_4_ = (undefined4)((ulonglong)puVar60 >> 0x20);
          local_4e8._0_4_ = (undefined4)local_4b8;
          local_4e8._4_4_ = local_4b8._4_4_;
          local_4e8._8_4_ = (undefined4)uStack_4b0;
          local_4e8._12_4_ = uStack_4b0._4_4_;
          local_4b8 = pUVar22;
          uStack_4b0 = pUVar20;
        }
      }
      else {
        bVar16 = FStateTreeDataHandle::IsObjectSource(pFVar24);
        uVar41 = (uint)(pFVar33->InstanceTemplateIndex).Value;
        if (bVar16) {
          pFVar27 = FStateTreeInstanceData::GetMutableStorage(&this->DefaultInstanceData);
          pFVar34 = FInstancedStructContainer::operator[]
                              (&pFVar27->InstanceStructs,&local_148,uVar41);
          pFVar35 = FConstStructView::Get<FStateTreeInstanceObjectWrapper_const_>(pFVar34);
          pUVar20 = (pFVar35->InstanceObject).field0_0x0.DebugPtr;
          if (pUVar20 == (UObject *)0x0) {
            pUVar22 = (UScriptStruct *)0x0;
          }
          else {
            pUVar22 = *(UScriptStruct **)&pUVar20->field_0x10;
            if (pUVar22 == (UScriptStruct *)0x0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Memory || (Memory && Struct)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                                  ,0x24,L"");
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                uVar17 = (*pcVar8)();
                return (bool)uVar17;
              }
            }
          }
          local_558._0_4_ = SUB84(pUVar22,0);
          local_558._4_4_ = (undefined4)((ulonglong)pUVar22 >> 0x20);
          uStack_550._0_4_ = SUB84(pUVar20,0);
          uStack_550._4_4_ = (undefined4)((ulonglong)pUVar20 >> 0x20);
          local_4e8._0_4_ = (undefined4)local_558;
          local_4e8._4_4_ = local_558._4_4_;
          local_4e8._8_4_ = (undefined4)uStack_550;
          local_4e8._12_4_ = uStack_550._4_4_;
          local_558 = pUVar22;
          uStack_550 = pUVar20;
        }
        else {
          pFVar27 = FStateTreeInstanceData::GetMutableStorage(&this->DefaultInstanceData);
          FInstancedStructContainer::operator[](&pFVar27->InstanceStructs,&local_3d0,uVar41);
          puVar60 = local_3d0.StructMemory;
          pUVar22 = local_3d0.ScriptStruct;
          if (((UObject *)local_3d0.StructMemory != (UObject *)0x0) &&
             (local_3d0.ScriptStruct == (UScriptStruct *)0x0)) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Memory || (Memory && Struct)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                                ,0x2b,L"");
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              uVar17 = (*pcVar8)();
              return (bool)uVar17;
            }
          }
          uStack_550 = (UObject *)puVar60;
          pUVar20 = uStack_550;
          local_558 = pUVar22;
          local_558._0_4_ = SUB84(pUVar22,0);
          local_558._4_4_ = (undefined4)((ulonglong)pUVar22 >> 0x20);
          uStack_550._0_4_ = SUB84(puVar60,0);
          uStack_550._4_4_ = (undefined4)((ulonglong)puVar60 >> 0x20);
          local_4e8._0_4_ = (undefined4)local_558;
          local_4e8._4_4_ = local_558._4_4_;
          local_4e8._8_4_ = (undefined4)uStack_550;
          local_4e8._12_4_ = uStack_550._4_4_;
          local_558 = pUVar22;
          uStack_550 = pUVar20;
        }
      }
      TMapBase<FStateTreeDataHandle,FStateTreeDataView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>_>
      ::Emplace<FStateTreeDataHandle_const_&,FStateTreeDataView_const_&>
                ((TMapBase<FStateTreeDataHandle,FStateTreeDataView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>_>
                  *)local_138,&pFVar33->InstanceDataHandle,&local_4e8);
      if ((pFVar33->BindingsBatch).Value != 0xffff) {
        local_3a0 = &pFVar33->BindingsBatch;
        local_398 = &local_4e8;
        TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_const_&>_>
                  (&local_e8,
                   (TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_const_&> *)
                   local_49c,(bool *)&local_3a0);
      }
      if ((pFVar33->OutputBindingsBatch).Value != 0xffff) {
        local_390 = &pFVar33->OutputBindingsBatch;
        local_388 = &local_4e8;
        TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_const_&>_>
                  (&local_e8,
                   (TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_const_&> *)
                   (local_49c + 4),(bool *)&local_390);
      }
      iVar61 = iVar61 + 1;
      iVar18 = iVar18 + 0x10;
    } while (iVar61 != iVar52);
  }
  uVar57 = 0;
  uVar42 = (ulonglong)local_58c;
  if ((int)local_58c < 1) {
    uVar41 = local_58c;
    if ((int)local_58c < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar42);
    }
  }
  else {
    local_558 = (UScriptStruct *)(longlong)(int)local_58c;
    pFVar47 = local_580;
    iVar52 = local_588;
    do {
      uVar55 = (uint)uVar57;
      uVar41 = 0;
      if ((int)uVar55 < (int)uVar42) {
        uVar41 = ~uVar55 >> 0x1f;
      }
      if (uVar41 == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
      }
      if ((uVar55 != 0xffffffff) && (0xfffe < uVar55)) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InIndex == INDEX_NONE || IsValidIndex(InIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeIndexTypes.h"
                            ,0x2e,L"");
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
      }
      uVar57 = uVar57 & 0xffff;
      if (uVar55 == 0xffffffff) {
        uVar57 = 0xffff;
      }
      if (local_e8.Elements._8_4_ == local_e8.Elements._52_4_) {
LAB_14d4caeac:
        if (1 < (byte)LogStateTree._0_1_) {
          pFVar21 = TInstancedStruct<FPropertyBindingBindableStructDescriptor>::
                    Get<FPropertyBindingBindableStructDescriptor,void>
                              ((TInstancedStruct<FPropertyBindingBindableStructDescriptor> *)pFVar47
                              );
          ::FName::ToString(&pFVar21->Name,&local_1c8);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_1d8,(UObject *)0x0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
LAB_14d4cb2b4:
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
        }
        bVar16 = false;
        goto LAB_14d4cb6f4;
      }
      FVar43 = (ForElementType<FSetElementId>)&local_e8.Hash;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar43 = local_e8.Hash.SecondaryData;
      }
      iVar18 = *(int *)((longlong)FVar43 + (local_e8.HashSize - 1 & uVar57) * 4);
      while( true ) {
        if (iVar18 == -1) goto LAB_14d4caeac;
        psVar44 = (short *)((longlong)iVar18 * 0x20 + local_e8.Elements._0_8_);
        if (*psVar44 == (short)uVar57) break;
        iVar18 = *(int *)(psVar44 + 0xc);
      }
      plVar36 = (longlong *)(psVar44 + 4);
      if (psVar44 == (short *)0x0) {
        plVar36 = (longlong *)0x0;
      }
      if (plVar36 == (longlong *)0x0) goto LAB_14d4caeac;
      pUVar5 = (UStruct *)*plVar36;
      pvVar9 = (void *)plVar36[1];
      local_258 = pUVar5;
      pvStack_250 = pvVar9;
      if ((plVar36[1] == 0) || (pUVar5 == (UStruct *)0x0)) goto LAB_14d4caeac;
      local_578.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_578.Data.ArrayNum = 0;
      local_578.Data.ArrayMax = 0;
      uVar57 = (ulonglong)*(ushort *)(pFVar47 + 0x10);
      if (*(ushort *)(pFVar47 + 0x10) != *(ushort *)(pFVar47 + 0x12)) {
        pFVar62 = local_548 + (uVar57 * 6 + 5) * 8;
        do {
          uVar56 = (uint)uVar57;
          uVar41 = 0;
          if ((int)uVar56 < iVar52) {
            uVar41 = ~uVar56 >> 0x1f;
          }
          if (uVar41 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              uVar17 = (*pcVar8)();
              return (bool)uVar17;
            }
          }
          if ((*pFVar62 != (FScriptContainerElement)0x10) &&
             (*pFVar62 != (FScriptContainerElement)0x11)) {
            local_524 = *(ushort *)(pFVar62 + 4);
            uVar41 = *(uint *)pFVar62;
            local_528._2_2_ = (ushort)(uVar41 >> 0x10);
            uVar53 = (uVar41 & 0xff) +
                     (uint)local_528._2_2_ * 0x40 + (local_528._2_2_ >> 2) + 0x9e3779b9 ^
                     (uint)local_528._2_2_;
            if (local_138._8_4_ != local_104) {
              FVar39.Data = local_100;
              if (local_f8.Data != (FScriptContainerElement *)0x0) {
                FVar39.Data = local_f8.Data;
              }
              iVar52 = *(int *)(FVar39.Data +
                               (ulonglong)
                               (local_f0 - 1 &
                               (uVar53 * 0x40 + -0x61c88647 + (uint)local_524 + (uVar53 >> 2) ^
                               uVar53)) * 4);
              while (iVar52 != -1) {
                pFVar37 = (FScriptContainerElement *)(local_138._0_8_ + (longlong)iVar52 * 0x20);
                if (((*pFVar37 == SUB41(uVar41,0)) && (*(ushort *)(pFVar37 + 2) == local_528._2_2_))
                   && ((uint)*(ushort *)(pFVar37 + 4) == (uint)local_524)) {
                  if (iVar52 != -1) {
                    pFVar40 = pFVar37 + 8;
                    if (pFVar37 == (FScriptContainerElement *)0x0) {
                      pFVar40 = (FScriptContainerElement *)0x0;
                    }
                    if (pFVar40 != (FScriptContainerElement *)0x0) {
                      local_248 = *(undefined4 *)pFVar40;
                      uStack_244 = *(undefined4 *)(pFVar40 + 4);
                      uStack_240 = *(undefined4 *)(pFVar40 + 8);
                      uStack_23c = *(undefined4 *)(pFVar40 + 0xc);
                      goto LAB_14d4cb07f;
                    }
                  }
                  break;
                }
                iVar52 = *(int *)(pFVar37 + 0x18);
              }
            }
            local_248 = 0;
            uStack_244 = 0;
            uStack_240 = 0;
            uStack_23c = 0;
LAB_14d4cb07f:
            local_528 = uVar41;
            local_238.Struct._0_4_ = local_248;
            local_238.Struct._4_4_ = uStack_244;
            local_238.Memory._0_4_ = uStack_240;
            local_238.Memory._4_4_ = uStack_23c;
            bVar16 = FPropertyBindingPath::UpdateSegmentsFromValue
                               ((FPropertyBindingPath *)(pFVar62 + -0x20),&local_238,&local_578);
            iVar52 = local_588;
            if (bVar16) goto LAB_14d4cb0b0;
            local_1c8.Data.AllocatorInstance.Data = local_578.Data.AllocatorInstance.Data;
            if (1 < (byte)LogStateTree._0_1_) {
              FPropertyBindingPath::ToString
                        ((FPropertyBindingPath *)(pFVar62 + -0x10),&local_208,-1,(wchar_t *)0x0,
                         (wchar_t *)0x0,false,0);
              UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_218,(UObject *)0x0);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
              if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
LAB_14d4cb2a5:
              local_1c8.Data.AllocatorInstance.Data = local_578.Data.AllocatorInstance.Data;
              if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data.AllocatorInstance.Data);
                local_1c8.Data.AllocatorInstance.Data = local_578.Data.AllocatorInstance.Data;
              }
            }
            goto LAB_14d4cb2b4;
          }
LAB_14d4cb0b0:
          local_228.Struct = pUVar5;
          local_228.Memory = pvVar9;
          bVar16 = FPropertyBindingPath::UpdateSegmentsFromValue
                             ((FPropertyBindingPath *)(pFVar62 + -0x10),&local_228,&local_578);
          if (!bVar16) {
            local_1c8.Data.AllocatorInstance.Data = local_578.Data.AllocatorInstance.Data;
            if (1 < (byte)LogStateTree._0_1_) {
              FPropertyBindingPath::ToString
                        ((FPropertyBindingPath *)(pFVar62 + -0x10),&local_1e8,-1,(wchar_t *)0x0,
                         (wchar_t *)0x0,false,0);
              UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_1f8,(UObject *)0x0);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
              local_208.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
              if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                local_208.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
              }
              goto LAB_14d4cb2a5;
            }
            goto LAB_14d4cb2b4;
          }
          uVar57 = (ulonglong)(uVar56 + 1);
          pFVar62 = pFVar62 + 0x30;
        } while (uVar56 + 1 != (uint)*(ushort *)(pFVar47 + 0x12));
        uVar42 = (ulonglong)local_58c;
      }
      if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_578.Data.AllocatorInstance.Data);
      }
      uVar57 = (ulonglong)(uVar55 + 1);
      pFVar47 = pFVar47 + 0x18;
      uVar41 = (uint)uVar42;
    } while ((int)(uVar55 + 1) < (int)(uint)uVar42);
  }
  pTVar59 = &this->PropertyFunctionEvaluationScopeMemoryRequirements;
  (this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayNum = 0;
  if ((this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayMax < (int)uVar41) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar41,&pTVar59->AllocatorInstance,0,
               &(this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayMax);
  }
  uVar11 = _UNK_15076cb18;
  uVar15 = ___xmm_ffffffff000000000000000000000000;
  pFVar47 = local_580 + (longlong)(int)uVar41 * 0x18;
  local_548 = pFVar47;
  if (local_580 != pFVar47) {
    do {
      uVar12 = _UNK_15076cb18;
      uVar10 = ___xmm_ffffffff000000000000000000000000;
      uVar51 = *(ushort *)(local_580 + 0x14);
      uVar41 = (uint)uVar51;
      uVar3 = *(ushort *)(local_580 + 0x16);
      ___xmm_ffffffff000000000000000000000000 = (int)uVar15;
      _UNK_15076cb14 = SUB84(uVar15,4);
      local_460.MemoryRequirement.Size = ___xmm_ffffffff000000000000000000000000;
      local_460.MemoryRequirement.Alignment = _UNK_15076cb14;
      _UNK_15076cb18 = (int)uVar11;
      _UNK_15076cb1c = SUB84(uVar11,4);
      local_460.MemoryRequirement.NumberOfElements = _UNK_15076cb18;
      local_460.FirstStructAlignment = _UNK_15076cb1c;
      ___xmm_ffffffff000000000000000000000000 = uVar10;
      _UNK_15076cb18 = uVar12;
      if ((uint)uVar51 < (uint)uVar3) {
        iVar52 = (uint)uVar51 << 4;
        do {
          iVar18 = (this->Nodes).NumItems;
          if (((iVar18 < 1) || ((int)uVar41 < 0)) || (iVar18 <= (int)uVar41)) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid() && IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                ,0x84,L"");
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              uVar17 = (*pcVar8)();
              return (bool)uVar17;
            }
          }
          iVar18 = (this->Nodes).NumItems;
          if ((iVar18 < 1) || (iVar18 <= (int)uVar41)) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumItems > 0 && Index < NumItems",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                ,0x100,L"");
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              uVar17 = (*pcVar8)();
              return (bool)uVar17;
            }
          }
          puVar60 = (this->Nodes).Memory;
          lVar23 = (longlong)((this->Nodes).AllocatedSize - iVar52);
          pUVar22 = *(UScriptStruct **)(puVar60 + lVar23 + -0x10);
          puVar60 = puVar60 + *(int *)(puVar60 + lVar23 + -8);
          if (puVar60 == (uchar *)0x0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("StructMemory != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                ,0x22,L"");
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              uVar17 = (*pcVar8)();
              return (bool)uVar17;
            }
          }
          if (pUVar22 == (UScriptStruct *)0x0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ScriptStruct != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                ,0x23,L"");
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              uVar17 = (*pcVar8)();
              return (bool)uVar17;
            }
          }
          pUVar32 = FStateTreePropertyFunctionBase::StaticStruct();
          if (pUVar22 != pUVar32) {
            pUVar32 = FStateTreePropertyFunctionBase::StaticStruct();
            if (pUVar32 != (UScriptStruct *)0x0) {
              iVar18 = (int)pUVar32->_padding_;
              if (((int)pUVar22->_padding_ < iVar18) ||
                 ((longlong *)*(undefined1 **)(pUVar22->_padding_ + (longlong)iVar18 * 8) !=
                  &pUVar32->_padding_)) {
                bVar16 = false;
              }
              else {
                bVar16 = true;
              }
              if (bVar16) goto LAB_14d4cb581;
            }
            pUVar32 = FStateTreePropertyFunctionBase::StaticStruct();
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar32,&local_1a8,(UObject *)0x0)
            ;
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar22,&local_1b8,(UObject *)0x0)
            ;
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              uVar17 = (*pcVar8)();
              return (bool)uVar17;
            }
          }
LAB_14d4cb581:
          if ((puVar60[0x18] == '\a') || (puVar60[0x18] == '\b')) {
            FInstancedStructContainer::operator[]
                      (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs,&local_198,
                       (uint)*(ushort *)(puVar60 + 0x14));
            if (local_198.ScriptStruct == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::
            FMemoryRequirementBuilder::Add
                      (&local_460,(TNotNull<UScriptStruct_const_*>)local_198.ScriptStruct);
          }
          uVar41 = uVar41 + 1;
          iVar52 = iVar52 + 0x10;
          pFVar47 = local_548;
        } while ((int)uVar41 < (int)(uint)uVar3);
      }
      pFVar62 = local_580;
      pFVar38 = UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::
                FMemoryRequirementBuilder::Build(&local_460,&local_178);
      pFVar7 = (FEvaluationScopeMemoryRequirement *)(pTVar59->AllocatorInstance).Data;
      if ((pFVar7 <= pFVar38) &&
         (pFVar38 < pFVar7 + (this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayMax)) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
      }
      iVar52 = (this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayNum;
      if (iVar52 == (this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayMax) {
        iVar52 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar59->AllocatorInstance,
                            &(this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayMax);
      }
      local_580 = pFVar62 + 0x18;
      (this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayNum = iVar52 + 1;
      pFVar62 = (pTVar59->AllocatorInstance).Data;
      *(undefined8 *)(pFVar62 + (longlong)iVar52 * 0xc) = *(undefined8 *)pFVar38;
      *(int *)(pFVar62 + (longlong)iVar52 * 0xc + 8) = pFVar38->NumberOfElements;
      uVar41 = local_58c;
    } while (local_580 != pFVar47);
  }
  if (uVar41 != (this->PropertyFunctionEvaluationScopeMemoryRequirements).ArrayNum) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("CopyBatches.Num() == PropertyFunctionEvaluationScopeMemoryRequirements.Num()"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTree.cpp"
                        ,0x49d,L"");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
  }
  bVar16 = true;
LAB_14d4cb6f4:
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FStateTreeIndex16,FStateTreeDataView>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FStateTreeIndex16,FStateTreeDataView>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_f0 = 0;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FStateTreeDataHandle,FStateTreeDataView>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FStateTreeDataHandle,FStateTreeDataView>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FStateTreeDataHandle,FStateTreeDataView>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  goto LAB_14d4cb73c;
LAB_14d4c9eb2:
  if (1 < (byte)LogStateTree._0_1_) {
    ::FName::ToString((FName *)(pFVar37 + (ulonglong)uVar51 * 0x78 + 0x10),&local_2e0);
    ::FName::ToString((FName *)(pFVar47 + 0x10),&local_2f0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_300,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    local_290.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      local_290.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
    }
    goto LAB_14d4ca0a5;
  }
  goto LAB_14d4ca0af;
LAB_14d4c9c12:
  if (1 < (byte)LogStateTree._0_1_) {
    ::FName::ToString((FName *)(pFVar47 + 0x10),&local_360);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_370,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    local_290.Data.AllocatorInstance.Data = local_360.Data.AllocatorInstance.Data;
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.AllocatorInstance.Data);
      local_290.Data.AllocatorInstance.Data = local_360.Data.AllocatorInstance.Data;
    }
LAB_14d4ca0a5:
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
  }
LAB_14d4ca0af:
  bVar16 = false;
LAB_14d4cb73c:
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FStateTreeDataHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FStateTreeDataHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return bVar16;
}

// PostInitProperties @ 14d4cb7b0

void __thiscall UStateTree::PostInitProperties(UStateTree *this)

{
  FDelegateHandle FVar1;
  
  UObject::PostInitProperties((UObject *)this);
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
            AddUObject<UStateTree>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                        *)&FStateTreeModule::OnPreRuntimeValidationInstanceData,
                       (UStateTree *)&stack0x00000008,(pmf_4fefa828)this);
                    /* WARNING: Load size is inaccurate */
    (this->PreGCHandle).ID = *FVar1.ID;
    FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
            AddUObject<UStateTree>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                        *)&FStateTreeModule::OnPostRuntimeValidationInstanceData,
                       (UStateTree *)&stack0x00000008,(pmf_4fefa828)this);
                    /* WARNING: Load size is inaccurate */
    (this->PostGCHandle).ID = *FVar1.ID;
  }
  return;
}

// PostLoad @ 14d4cb820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStateTree::PostLoad(UStateTree *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  uchar *puVar4;
  UObject *pUVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  UPackage *pUVar9;
  FConstStructView *pFVar10;
  UScriptStruct *pUVar11;
  FStateTreeInstanceObjectWrapper *pFVar12;
  uint uVar13;
  UScriptStruct **ppUVar14;
  longlong lVar15;
  UScriptStruct *pUVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  int iVar19;
  undefined1 local_res8 [8];
  int local_res10;
  longlong *local_res18;
  longlong **local_res20;
  UScriptStruct *local_c8;
  UObject *local_c0;
  FStructView local_b8;
  UScriptStruct *local_a8;
  uchar *local_a0;
  FGuid local_98;
  FString local_88;
  FString local_78;
  FConstStructView local_68;
  FConstStructView local_58;
  
  UObject::PostLoad((UObject *)this);
  iVar19 = 0;
  if (0 < (this->Nodes).NumItems) {
    local_res10 = 0;
    do {
      iVar7 = local_res10;
      iVar3 = (this->Nodes).NumItems;
      if ((((iVar3 < 1) || (iVar19 < 0)) || (iVar3 <= iVar19)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid() && IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x84,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar3 = (this->Nodes).NumItems;
      if (((iVar3 < 1) || (iVar3 <= iVar19)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = (this->Nodes).Memory;
      lVar15 = (longlong)((this->Nodes).AllocatedSize - iVar7);
      plVar18 = (longlong *)(puVar4 + *(int *)(puVar4 + lVar15 + -8));
      if ((plVar18 == (longlong *)0x0) ||
         (pUVar16 = *(UScriptStruct **)(puVar4 + lVar15 + -0x10), pUVar16 == (UScriptStruct *)0x0))
      {
LAB_14d4cbaf4:
        local_res18 = (longlong *)0x0;
      }
      else {
        if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar9 = Z_Construct_UPackage__Script_StateTreeModule();
          Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar9,
                               L"StateTreeNodeBase");
        }
        if (pUVar16 != Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton) {
          if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar9 = Z_Construct_UPackage__Script_StateTreeModule();
            Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar9,
                                 L"StateTreeNodeBase");
          }
          if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton !=
              (UScriptStruct *)0x0) {
            iVar3 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->
                         _padding_;
            if (((int)pUVar16->_padding_ < iVar3) ||
               ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar3 * 8) !=
                &(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_))
            {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) goto LAB_14d4cb990;
          }
          goto LAB_14d4cbaf4;
        }
LAB_14d4cb990:
        local_res20 = &local_res18;
        local_res18 = plVar18;
        if (*(ushort *)((longlong)plVar18 + 0x14) != 0xffff) {
          cVar2 = (char)plVar18[3];
          if ((cVar2 == '\x05') || (cVar2 == '\x06')) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((byte)(cVar2 - 7U) < 2) {
            uVar13 = (uint)*(ushort *)((longlong)plVar18 + 0x14);
            pFVar10 = FInstancedStructContainer::operator[]
                                (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs,
                                 &local_68,uVar13);
            pUVar16 = pFVar10->ScriptStruct;
            pUVar11 = FStateTreeInstanceObjectWrapper::StaticStruct();
            plVar18 = local_res18;
            pcVar6 = *(code **)(*local_res18 + 0x20);
            if (pUVar16 == pUVar11) {
              pFVar10 = FInstancedStructContainer::operator[]
                                  (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs,
                                   &local_58,uVar13);
              pFVar12 = FConstStructView::Get<FStateTreeInstanceObjectWrapper_const_>(pFVar10);
              pUVar5 = (pFVar12->InstanceObject).field0_0x0.DebugPtr;
              if (pUVar5 == (UObject *)0x0) {
                pUVar16 = (UScriptStruct *)0x0;
              }
              else {
                pUVar16 = *(UScriptStruct **)&pUVar5->field_0x10;
                if ((pUVar16 == (UScriptStruct *)0x0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("!Memory || (Memory && Struct)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                                       ,0x24,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              ppUVar14 = &local_c8;
              local_c8 = pUVar16;
              local_c0 = pUVar5;
            }
            else {
              FInstancedStructContainer::operator[]
                        (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs,&local_b8,
                         uVar13);
              puVar4 = local_b8.StructMemory;
              pUVar16 = local_b8.ScriptStruct;
              if (((local_b8.StructMemory != (uchar *)0x0) &&
                  (local_b8.ScriptStruct == (UScriptStruct *)0x0)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!Memory || (Memory && Struct)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                                     ,0x2b,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_a8 = pUVar16;
              ppUVar14 = &local_a8;
              local_a0 = puVar4;
            }
            (*pcVar6)(plVar18,ppUVar14);
          }
          else if (bVar8) {
            `UStateTree::PostLoad'::__l7::<lambda_1>::operator()<FStateTreeInstanceData>
                      (&local_res20,&this->SharedInstanceData,
                       (FStateTreeIndex16)*(ushort *)((longlong)plVar18 + 0x14));
          }
          else {
            `UStateTree::PostLoad'::__l7::<lambda_1>::operator()<FStateTreeInstanceData>
                      (&local_res20,&this->DefaultInstanceData,
                       (FStateTreeIndex16)*(ushort *)((longlong)plVar18 + 0x14));
          }
        }
      }
      iVar19 = iVar19 + 1;
      local_res10 = local_res10 + 0x10;
    } while (iVar19 < (this->Nodes).NumItems);
  }
  local_98 = FStateTreeCustomVersion::GUID;
  iVar19 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_98);
  if (iVar19 < 0x12) {
    if ((byte)LogStateTree._0_1_ < 2) {
      return;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_88,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
  }
  else {
    pUVar5 = (UObject *)(this->Schema).field0_0x0.DebugPtr;
    if (pUVar5 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(pUVar5);
    }
    pFVar17 = (this->Extensions).AllocatorInstance.Data;
    iVar19 = (this->Extensions).ArrayNum;
    pFVar1 = pFVar17 + (longlong)iVar19 * 8;
    while( true ) {
      if ((this->Extensions).ArrayNum != iVar19) {
        `TCheckedPointerIterator<TObjectPtr<UStateTreeExtension>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar17 == pFVar1) break;
      if (*(UObject **)pFVar17 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(*(UObject **)pFVar17);
      }
      pFVar17 = pFVar17 + 8;
    }
    bVar8 = Link(this);
    if (bVar8) {
      return;
    }
    if ((byte)LogStateTree._0_1_ < 5) {
      return;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_78,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// ResetLinked @ 14d4cecf0

void __thiscall UStateTree::ResetLinked(UStateTree *this)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  int iVar2;
  TSharedPtr<FStateTreeInstanceData,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  this->bIsLinked = '\0';
  (this->ExternalDataDescs).ArrayNum = 0;
  if ((this->ExternalDataDescs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ExternalDataDescs).AllocatorInstance,0,
               &(this->ExternalDataDescs).ArrayMax);
  }
  SRWLock = &this->PerThreadSharedInstanceDataLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  piVar1 = &(this->PerThreadSharedInstanceData).ArrayMax;
  pTVar3 = (TSharedPtr<FStateTreeInstanceData,1> *)
           (this->PerThreadSharedInstanceData).AllocatorInstance.Data;
  iVar2 = (this->PerThreadSharedInstanceData).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FStateTreeInstanceData,1>,int>(pTVar3,iVar2);
    (this->PerThreadSharedInstanceData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PerThreadSharedInstanceData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FStateTreeInstanceData,1>,int>(pTVar3,iVar2);
    (this->PerThreadSharedInstanceData).ArrayNum = 0;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// Serialize @ 14d4cf490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStateTree::Serialize(UStateTree *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  FArchive *pFVar2;
  FSlotBase local_res10;
  FName local_res18 [2];
  FString local_28;
  FGuid local_18;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  UObject::Serialize((UObject *)this,param_1);
  local_18 = FStateTreeCustomVersion::GUID;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  (**(code **)(*(longlong *)pFVar2 + 0x230))(pFVar2,&local_18);
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if (((((pFVar2->field_0x2b & 2) != 0) && (bVar1 = Link(this), !bVar1)) &&
      ((*(uint *)&this->field_0x8 & 0x10) == 0)) && (4 < (byte)LogStateTree._0_1_)) {
    local_res18[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res18[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(local_res18,&local_28);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 14d4cf560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStateTree::Serialize(UStateTree *this,FArchive *param_1)

{
  bool bVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  FArchive *pFVar3;
  undefined1 auStack_1f8 [32];
  FSlotBase local_1d8;
  FName local_1d0;
  FString local_1c8;
  FGuid local_1b0;
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_1d8.StructuredArchive = *(FStructuredArchive **)FVar2;
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_1d8.StructuredArchive);
  local_1b0 = FStateTreeCustomVersion::GUID;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_1d8);
  (**(code **)(*(longlong *)pFVar3 + 0x230))(pFVar3,&local_1b0);
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_1d8);
  if (((((pFVar3->field_0x2b & 2) != 0) && (bVar1 = Link(this), !bVar1)) &&
      ((*(uint *)&this->field_0x8 & 0x10) == 0)) && (4 < (byte)LogStateTree._0_1_)) {
    local_1d0.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_1d0.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_1d0,&local_1c8);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// StaticRegisterNativesUStateTree @ 14d4d0fd0

void __cdecl UStateTree::StaticRegisterNativesUStateTree(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UStateTree_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateRuntimeFlags @ 14d4d4690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UStateTree::UpdateRuntimeFlags(UStateTree *this)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  uchar *puVar4;
  UStateTreeSchema *pUVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  EStateTreeStateSelectionRules EVar11;
  longlong lVar12;
  FStateTreeTaskBase *pFVar13;
  FStateTreeConditionBase *pFVar14;
  FEvaluationScopeMemoryRequirement *pFVar15;
  FStateTreeConsiderationBase *pFVar16;
  FScriptContainerElement FVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FMemoryRequirementBuilder local_c8;
  FMemoryRequirementBuilder local_b8;
  FMemoryRequirementBuilder local_a8;
  FConstStructView local_98;
  FConstStructView local_88;
  FConstStructView local_78;
  FEvaluationScopeMemoryRequirement local_68;
  FEvaluationScopeMemoryRequirement local_5c;
  FEvaluationScopeMemoryRequirement local_50 [3];
  
  uVar8 = _UNK_15076cb18;
  uVar7 = ___xmm_ffffffff000000000000000000000000;
  iVar20 = (this->States).ArrayNum;
  pFVar21 = (this->States).AllocatorInstance.Data;
  pFVar24 = pFVar21 + (longlong)iVar20 * 0x78;
  do {
    if ((this->States).ArrayNum != iVar20) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCompactStateTreeState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar21 == pFVar24) {
      uVar2 = this->GlobalTasksBegin;
      uVar22 = (uint)uVar2;
      this->bHasGlobalTransitionTasks = '\0';
      this->bCachedRequestGlobalTickOnlyOnEvents = '\0';
      this->bCachedRequestGlobalTick = '\0';
      this->bHasGlobalTickTasksOnlyOnEvents = '\0';
      this->bHasGlobalTickTasks = '\0';
      if ((uint)uVar2 < (uint)this->GlobalTasksNum + (uint)uVar2) {
        iVar20 = (uint)uVar2 << 4;
        do {
          iVar19 = (this->Nodes).NumItems;
          if ((((iVar19 < 1) || ((int)uVar22 < 0)) || (iVar19 <= (int)uVar22)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid() && IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                 ,0x84,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar19 = (this->Nodes).NumItems;
          if (((iVar19 < 1) || (iVar19 <= (int)uVar22)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumItems > 0 && Index < NumItems",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                 ,0x100,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar4 = (this->Nodes).Memory;
          lVar12 = (longlong)((this->Nodes).AllocatedSize - iVar20);
          pFVar13 = UE::StructUtils::GetStructRef<FStateTreeTaskBase_const_>
                              (*(UScriptStruct **)(puVar4 + lVar12 + -0x10),
                               puVar4 + *(int *)(puVar4 + lVar12 + -8));
          if ((bool)pFVar13->bTaskEnabled) {
            bVar18 = (this->field_0x276 | pFVar13->field_0x20) & 2 ^ this->field_0x276 & 0xfd;
            this->field_0x276 = bVar18;
            bVar18 = (bVar18 | pFVar13->field_0x20) & 4 ^ bVar18 & 0xfb;
            this->field_0x276 = bVar18;
            bVar18 = (pFVar13->bShouldAffectTransitions | bVar18) & 1 ^ bVar18 & 0xfe;
            this->field_0x276 = bVar18;
            if (pFVar13->bConsideredForScheduling != '\0') {
              bVar18 = (-(pFVar13->bShouldCallTick != '\0' ||
                         pFVar13->bShouldAffectTransitions != '\0') & 8U | bVar18 & 8) ^
                       bVar18 & 0xf7;
              this->field_0x276 = bVar18;
              this->field_0x276 = (pFVar13->field_0x20 << 2 | bVar18) & 0x10 ^ bVar18 & 0xef;
            }
          }
          uVar22 = uVar22 + 1;
          iVar20 = iVar20 + 0x10;
        } while ((int)uVar22 < (int)((uint)this->GlobalTasksNum + (uint)this->GlobalTasksBegin));
      }
      iVar20 = (this->Transitions).ArrayNum;
      pFVar21 = (this->Transitions).AllocatorInstance.Data;
      pFVar24 = pFVar21 + (longlong)iVar20 * 0x40;
      while( true ) {
        if ((this->Transitions).ArrayNum != iVar20) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FCompactStateTransition,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar21 == pFVar24) break;
        iVar19 = 0;
        local_a8.MemoryRequirement._0_8_ = uVar7;
        local_a8._8_8_ = uVar8;
        if (pFVar21[0x37] != (FScriptContainerElement)0x0) {
          do {
            iVar3 = (this->Nodes).NumItems;
            iVar23 = (uint)*(ushort *)(pFVar21 + 0x2c) + iVar19;
            if ((((iVar3 < 1) || (iVar23 < 0)) || (iVar3 <= iVar23)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid() && IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                   ,0x84,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar3 = (this->Nodes).NumItems;
            if (((iVar3 < 1) || (iVar3 <= iVar23)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumItems > 0 && Index < NumItems",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                   ,0x100,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar4 = (this->Nodes).Memory;
            lVar12 = (longlong)((this->Nodes).AllocatedSize + iVar23 * -0x10);
            pFVar14 = UE::StructUtils::GetStructRef<FStateTreeConditionBase_const_>
                                (*(UScriptStruct **)(puVar4 + lVar12 + -0x10),
                                 puVar4 + *(int *)(puVar4 + lVar12 + -8));
            cVar10 = (char)pFVar14->_padding_;
            if ((cVar10 == '\a') || (cVar10 == '\b')) {
              FInstancedStructContainer::operator[]
                        (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs,&local_78,
                         (uint)*(ushort *)((longlong)&pFVar14->_padding_ + 4));
              if (local_78.ScriptStruct == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::
              FMemoryRequirementBuilder::Add
                        (&local_a8,(TNotNull<UScriptStruct_const_*>)local_78.ScriptStruct);
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 < (int)(uint)(byte)pFVar21[0x37]);
        }
        pFVar15 = UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::
                  FMemoryRequirementBuilder::Build(&local_a8,local_50);
        *(undefined8 *)(pFVar21 + 0x20) = *(undefined8 *)pFVar15;
        *(int *)(pFVar21 + 0x28) = pFVar15->NumberOfElements;
        pFVar21 = pFVar21 + 0x40;
      }
      pUVar5 = (this->Schema).field0_0x0.DebugPtr;
      cVar10 = '\0';
      if (pUVar5 != (UStateTreeSchema *)0x0) {
        cVar10 = (**(code **)(*(longlong *)pUVar5 + 0x2c8))();
      }
      this->field_0x276 = (cVar10 << 5 ^ this->field_0x276) & 0x20U ^ this->field_0x276;
      pUVar5 = (this->Schema).field0_0x0.DebugPtr;
      if (pUVar5 == (UStateTreeSchema *)0x0) {
        EVar11 = Default;
      }
      else {
        EVar11 = (**(code **)(*(longlong *)pUVar5 + 0x2f0))();
      }
      this->StateSelectionRules = EVar11;
      return;
    }
    uVar2 = *(ushort *)(pFVar21 + 0x4e);
    uVar22 = (uint)uVar2;
    pFVar21[0x74] = (FScriptContainerElement)((byte)pFVar21[0x74] & 0xc2);
    if ((uint)uVar2 < (uint)(byte)pFVar21[0x6e] + (uint)uVar2) {
      iVar19 = (uint)uVar2 << 4;
      do {
        iVar3 = (this->Nodes).NumItems;
        if ((((iVar3 < 1) || ((int)uVar22 < 0)) || (iVar3 <= (int)uVar22)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid() && IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x84,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar3 = (this->Nodes).NumItems;
        if (((iVar3 < 1) || (iVar3 <= (int)uVar22)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = (this->Nodes).Memory;
        lVar12 = (longlong)((this->Nodes).AllocatedSize - iVar19);
        pFVar13 = UE::StructUtils::GetStructRef<FStateTreeTaskBase_const_>
                            (*(UScriptStruct **)(puVar4 + lVar12 + -0x10),
                             puVar4 + *(int *)(puVar4 + lVar12 + -8));
        if ((bool)pFVar13->bTaskEnabled) {
          FVar17 = (FScriptContainerElement)
                   ((pFVar13->field_0x20 * '\x02' | (byte)pFVar21[0x74]) & 4 ^
                   (byte)pFVar21[0x74] & 0xfb);
          pFVar21[0x74] = FVar17;
          FVar17 = (FScriptContainerElement)
                   ((pFVar13->field_0x20 * '\x02' | (byte)FVar17) & 8 ^ (byte)FVar17 & 0xf7);
          pFVar21[0x74] = FVar17;
          FVar17 = (FScriptContainerElement)
                   ((pFVar13->bShouldAffectTransitions | (byte)FVar17) & 1 ^ (byte)FVar17 & 0xfe);
          pFVar21[0x74] = FVar17;
          if (pFVar13->bConsideredForScheduling != '\0') {
            FVar17 = (FScriptContainerElement)
                     ((-(pFVar13->bShouldCallTick != '\0' ||
                        pFVar13->bShouldAffectTransitions != '\0') & 0x10U | (byte)FVar17 & 0x10) ^
                     (byte)FVar17 & 0xef);
            pFVar21[0x74] = FVar17;
            pFVar21[0x74] =
                 (FScriptContainerElement)
                 ((pFVar13->field_0x20 << 3 | (byte)FVar17) & 0x20 ^ (byte)FVar17 & 0xdf);
          }
        }
        uVar22 = uVar22 + 1;
        iVar19 = iVar19 + 0x10;
      } while ((int)uVar22 < (int)((uint)*(ushort *)(pFVar21 + 0x4e) + (uint)(byte)pFVar21[0x6e]));
    }
    iVar19 = 0;
    local_c8.MemoryRequirement._0_8_ = uVar7;
    local_c8._8_8_ = uVar8;
    if (pFVar21[0x6b] != (FScriptContainerElement)0x0) {
      do {
        iVar3 = (this->Nodes).NumItems;
        iVar23 = (uint)*(ushort *)(pFVar21 + 0x48) + iVar19;
        if ((((iVar3 < 1) || (iVar23 < 0)) || (iVar3 <= iVar23)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid() && IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x84,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar3 = (this->Nodes).NumItems;
        if (((iVar3 < 1) || (iVar3 <= iVar23)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = (this->Nodes).Memory;
        lVar12 = (longlong)((this->Nodes).AllocatedSize + iVar23 * -0x10);
        pFVar14 = UE::StructUtils::GetStructRef<FStateTreeConditionBase_const_>
                            (*(UScriptStruct **)(puVar4 + lVar12 + -0x10),
                             puVar4 + *(int *)(puVar4 + lVar12 + -8));
        cVar10 = (char)pFVar14->_padding_;
        if ((cVar10 == '\a') || (cVar10 == '\b')) {
          FInstancedStructContainer::operator[]
                    (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs,&local_98,
                     (uint)*(ushort *)((longlong)&pFVar14->_padding_ + 4));
          if (local_98.ScriptStruct == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::FMemoryRequirementBuilder
          ::Add(&local_c8,(TNotNull<UScriptStruct_const_*>)local_98.ScriptStruct);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)(uint)(byte)pFVar21[0x6b]);
    }
    pFVar15 = UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::
              FMemoryRequirementBuilder::Build(&local_c8,&local_68);
    iVar19 = 0;
    local_b8.MemoryRequirement._0_8_ = uVar7;
    local_b8._8_8_ = uVar8;
    *(undefined8 *)(pFVar21 + 0x20) = *(undefined8 *)pFVar15;
    *(int *)(pFVar21 + 0x28) = pFVar15->NumberOfElements;
    if (pFVar21[0x6c] != (FScriptContainerElement)0x0) {
      do {
        iVar3 = (this->Nodes).NumItems;
        iVar23 = (uint)*(ushort *)(pFVar21 + 0x4a) + iVar19;
        if ((((iVar3 < 1) || (iVar23 < 0)) || (iVar3 <= iVar23)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid() && IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x84,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar3 = (this->Nodes).NumItems;
        if (((iVar3 < 1) || (iVar3 <= iVar23)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = (this->Nodes).Memory;
        lVar12 = (longlong)((this->Nodes).AllocatedSize + iVar23 * -0x10);
        pFVar16 = UE::StructUtils::GetStructRef<FStateTreeConsiderationBase_const_>
                            (*(UScriptStruct **)(puVar4 + lVar12 + -0x10),
                             puVar4 + *(int *)(puVar4 + lVar12 + -8));
        cVar10 = (char)pFVar16->_padding_;
        if ((cVar10 == '\a') || (cVar10 == '\b')) {
          FInstancedStructContainer::operator[]
                    (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs,&local_88,
                     (uint)*(ushort *)((longlong)&pFVar16->_padding_ + 4));
          if (local_88.ScriptStruct == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::FMemoryRequirementBuilder
          ::Add(&local_b8,(TNotNull<UScriptStruct_const_*>)local_88.ScriptStruct);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)(uint)(byte)pFVar21[0x6c]);
    }
    pFVar15 = UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::
              FMemoryRequirementBuilder::Build(&local_b8,&local_5c);
    *(undefined8 *)(pFVar21 + 0x2c) = *(undefined8 *)pFVar15;
    *(int *)(pFVar21 + 0x34) = pFVar15->NumberOfElements;
    pFVar21 = pFVar21 + 0x78;
  } while( true );
}

// ValidateInstanceData @ 14d4d4fb0

bool __thiscall UStateTree::ValidateInstanceData(UStateTree *this)

{
  FStateTreeInstanceData *this_00;
  char cVar1;
  ushort uVar2;
  int iVar3;
  uchar *puVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  UPackage *pUVar9;
  FStateTreeInstanceStorage *pFVar10;
  FConstStructView *pFVar11;
  UScriptStruct *pUVar12;
  FStateTreeInstanceObjectWrapper *pFVar13;
  UStruct *pUVar14;
  longlong lVar15;
  UScriptStruct *pUVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined1 local_res8 [8];
  UStateTree *local_d8;
  longlong *local_d0;
  int local_c8;
  undefined1 *local_c0;
  FConstStructView local_b8;
  FConstStructView local_a8;
  FConstStructView local_98;
  FConstStructView local_88;
  FConstStructView local_78;
  FConstStructView local_68;
  FConstStructView local_58;
  FConstStructView local_48;
  FConstStructView local_38;
  
  iVar20 = 0;
  local_res8[0] = 1;
  if ((this->Nodes).NumItems < 1) {
    return true;
  }
  iVar19 = 0;
  do {
    iVar3 = (this->Nodes).NumItems;
    if ((((iVar3 < 1) || (iVar20 < 0)) || (iVar3 <= iVar20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid() && IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                           ,0x84,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar3 = (this->Nodes).NumItems;
    if (((iVar3 < 1) || (iVar3 <= iVar20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumItems > 0 && Index < NumItems",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                           ,0x100,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    puVar4 = (this->Nodes).Memory;
    lVar15 = (longlong)((this->Nodes).AllocatedSize - iVar19);
    pUVar16 = *(UScriptStruct **)(puVar4 + lVar15 + -0x10);
    plVar17 = (longlong *)(puVar4 + *(int *)(puVar4 + lVar15 + -8));
    if ((plVar17 != (longlong *)0x0) && (pUVar16 != (UScriptStruct *)0x0)) {
      if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_StateTreeModule();
        Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar9,
                             L"StateTreeNodeBase");
      }
      if (pUVar16 == Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton) {
LAB_14d4d5120:
        uVar2 = *(ushort *)((longlong)plVar17 + 0x14);
        if (uVar2 != 0xffff) {
          local_c0 = local_res8;
          cVar1 = (char)plVar17[3];
          if ((cVar1 == '\x05') || (cVar1 == '\x06')) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          local_d8 = this;
          local_d0 = plVar17;
          local_c8 = iVar20;
          if ((byte)(cVar1 - 7U) < 2) {
            pFVar11 = FInstancedStructContainer::operator[]
                                (&(this->DefaultEvaluationScopeInstanceData).InstanceStructs,
                                 &local_68,(uint)uVar2);
            pUVar16 = pFVar11->ScriptStruct;
            pUVar12 = FStateTreeInstanceObjectWrapper::StaticStruct();
            uVar18 = (uint)*(ushort *)((longlong)plVar17 + 0x14);
            pFVar10 = (FStateTreeInstanceStorage *)&this->DefaultEvaluationScopeInstanceData;
            if (pUVar16 == pUVar12) {
              pFVar11 = &local_58;
              goto LAB_14d4d5209;
            }
            FInstancedStructContainer::operator[]
                      ((FInstancedStructContainer *)pFVar10,&local_a8,uVar18);
            pUVar16 = local_a8.ScriptStruct;
          }
          else {
            lVar15 = 0xb0;
            if (!bVar7) {
              lVar15 = 0x80;
            }
            this_00 = (FStateTreeInstanceData *)(&this->field_0x0 + lVar15);
            pFVar10 = FStateTreeInstanceData::GetStorage(this_00);
            pFVar11 = FInstancedStructContainer::operator[]
                                (&pFVar10->InstanceStructs,&local_88,(uint)uVar2);
            pUVar16 = pFVar11->ScriptStruct;
            pUVar12 = FStateTreeInstanceObjectWrapper::StaticStruct();
            uVar18 = (uint)*(ushort *)((longlong)plVar17 + 0x14);
            if (pUVar16 == pUVar12) {
              pFVar10 = FStateTreeInstanceData::GetStorage(this_00);
              pFVar11 = &local_78;
LAB_14d4d5209:
              pFVar11 = FInstancedStructContainer::operator[]
                                  (&pFVar10->InstanceStructs,pFVar11,uVar18);
              pFVar13 = FConstStructView::Get<FStateTreeInstanceObjectWrapper_const_>(pFVar11);
              pUVar5 = (pFVar13->InstanceObject).field0_0x0.DebugPtr;
              if (pUVar5 == (UObject *)0x0) {
                pUVar16 = (UScriptStruct *)0x0;
              }
              else {
                pUVar16 = *(UScriptStruct **)&pUVar5->field_0x10;
              }
            }
            else {
              pFVar10 = FStateTreeInstanceData::GetStorage(this_00);
              FInstancedStructContainer::operator[](&pFVar10->InstanceStructs,&local_b8,uVar18);
              pUVar16 = local_b8.ScriptStruct;
            }
          }
          pUVar14 = (UStruct *)(**(code **)(*plVar17 + 8))(plVar17);
          `UStateTree::ValidateInstanceData'::__l7::<lambda_1>::operator()
                    (&local_d8,(UStruct *)pUVar16,pUVar14);
          if (*(ushort *)((longlong)plVar17 + 0x16) != 0xffff) {
            pFVar11 = FInstancedStructContainer::operator[]
                                (&(this->DefaultExecutionRuntimeData).InstanceStructs,&local_48,
                                 (uint)*(ushort *)((longlong)plVar17 + 0x16));
            pUVar16 = pFVar11->ScriptStruct;
            pUVar12 = FStateTreeInstanceObjectWrapper::StaticStruct();
            if (pUVar16 == pUVar12) {
              pFVar11 = FInstancedStructContainer::operator[]
                                  (&(this->DefaultExecutionRuntimeData).InstanceStructs,&local_38,
                                   (uint)*(ushort *)((longlong)plVar17 + 0x16));
              pFVar13 = FConstStructView::Get<FStateTreeInstanceObjectWrapper_const_>(pFVar11);
              pUVar5 = (pFVar13->InstanceObject).field0_0x0.DebugPtr;
              if (pUVar5 == (UObject *)0x0) {
                pUVar16 = (UScriptStruct *)0x0;
              }
              else {
                pUVar16 = *(UScriptStruct **)&pUVar5->field_0x10;
              }
            }
            else {
              FInstancedStructContainer::operator[]
                        (&(this->DefaultExecutionRuntimeData).InstanceStructs,&local_98,
                         (uint)*(ushort *)((longlong)plVar17 + 0x16));
              pUVar16 = local_98.ScriptStruct;
            }
            pUVar14 = (UStruct *)(**(code **)(*plVar17 + 0x10))(plVar17);
            `UStateTree::ValidateInstanceData'::__l7::<lambda_1>::operator()
                      (&local_d8,(UStruct *)pUVar16,pUVar14);
          }
        }
      }
      else {
        if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar9 = Z_Construct_UPackage__Script_StateTreeModule();
          Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar9,
                               L"StateTreeNodeBase");
        }
        if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton !=
            (UScriptStruct *)0x0) {
          iVar3 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->
                       _padding_;
          if (((int)pUVar16->_padding_ < iVar3) ||
             ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar3 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) goto LAB_14d4d5120;
        }
      }
    }
    iVar20 = iVar20 + 1;
    iVar19 = iVar19 + 0x10;
    if ((this->Nodes).NumItems <= iVar20) {
      return (bool)local_res8[0];
    }
  } while( true );
}

// execK2_GetExtension @ 14d4d8130

void __cdecl UStateTree::execK2_GetExtension(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  longlong lVar5;
  UObject *pUVar6;
  bool bVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  plVar10 = *(longlong **)&param_1[0xc].field_0x20;
  iVar2 = *(int *)(param_1 + 0xd);
  plVar1 = plVar10 + iVar2;
  do {
    if (*(int *)(param_1 + 0xd) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UStateTreeExtension>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar10 == plVar1) {
      *(undefined8 *)param_3 = 0;
      return;
    }
    lVar5 = *plVar10;
    if ((lVar5 != 0) ||
       (bVar7 = `UStateTree::K2_GetExtension'::__l7::<lambda_1>::operator()(local_res8), bVar7)) {
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar6 != (UObject *)0x0) goto LAB_14d4d8222;
LAB_14d4d8255:
        pUVar9 = (UObject *)0x0;
      }
      else {
        if (pUVar6 == (UObject *)0x0) goto LAB_14d4d8255;
        UE::GC::MarkAsReachable(pUVar6);
LAB_14d4d8222:
        pUVar8 = Z_Construct_UClass_UStateTreeExtension_NoRegister();
        if (pUVar8 == (UClass *)0x0) goto LAB_14d4d8255;
        iVar3 = (int)pUVar8->_padding_;
        if ((*(int *)&pUVar6[1].field_0x10 < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pUVar9 = pUVar6;
        if (!bVar7) goto LAB_14d4d8255;
      }
      if ((*(int *)&pUVar9[1].field_0x10 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
           (longlong)*(int *)&pUVar9[1].field_0x10 * 8) == &pUVar9[1].field_0x8)) {
        *(longlong *)param_3 = lVar5;
        return;
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}

// operator() @ 15057de40

bool __thiscall `UStateTree::K2_GetExtension'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3874886818340011920>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3874886818340011920>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057e230

bool __thiscall
`UStateTree::HandleRuntimeValidationPostGC'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3874886818340010218>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3874886818340010218>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15057e360

bool __thiscall `UStateTree::HandleRuntimeValidationPreGC'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3874886818340010235>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3874886818340010235>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057e970

bool __thiscall
`UStateTree::HandleRuntimeValidationPostGC'::__l14::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3874886818340010213>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3874886818340010213>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

