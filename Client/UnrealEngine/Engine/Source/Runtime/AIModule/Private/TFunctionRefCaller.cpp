// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// Call @ 146e85f00

Type __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<enum_ETeamAttitude::Type_(__cdecl*)(FGenericTeamId,FGenericTeamId),enum_ETeamAttitude::Type,FGenericTeamId,FGenericTeamId>
::Call(void *param_1,FGenericTeamId *param_2,FGenericTeamId *param_3)

{
  Type TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146e85f0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)param_1)(param_2->TeamID,param_3->TeamID);
  return TVar1;
}

// Call @ 146e85f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AI::GetActorClassDefaultComponents'::__l2::<lambda_1>,bool,UActorComponent_const_*>
::Call(void *param_1,UActorComponent **param_2)

{
  bool bVar1;
  
  bVar1 = `UE::AI::GetActorClassDefaultComponents'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 146e85f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBehaviorTreeComponent::SetDynamicSubtree'::__l2::<lambda_1>,void,UBTTaskNode_&,FBehaviorTreeInstance_const_&,int>
::Call(void *param_1,UBTTaskNode *param_2,FBehaviorTreeInstance *param_3,int *param_4)

{
  `UBehaviorTreeComponent::SetDynamicSubtree'::__l2::<lambda_1>::operator()
            (param_1,param_2,param_3,*param_4);
  return;
}

// Call @ 146e85f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UBehaviorTreeComponent::ApplyAllSearchUpdates'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,void,UBTAuxiliaryNode_const_&>
::Call(void *param_1,UBTAuxiliaryNode *param_2)

{
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)param_2);
    FVisualLogger::CategorizedLogfImpl
              (*(UObject **)(*(longlong *)param_1 + 0xa8),(FName *)&LogBehaviorTree.field_0x4,All,
               L"%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 146e85fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBehaviorTreeComponent::StopTree'::__l15::<lambda_1>,void,UBTAuxiliaryNode_const_&>
::Call(void *param_1,UBTAuxiliaryNode *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(*(longlong *)param_1 + 0x30);
  if (*(int *)(*(longlong *)param_1 + 0x38) < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UBTAuxiliaryNode::WrappedOnCeaseRelevant
            (param_2,*(UBehaviorTreeComponent **)((longlong)param_1 + 8),
             (uchar *)((ulonglong)*(ushort *)((longlong)&param_2->_padding_ + 2) + lVar1));
  return;
}

// Call @ 146e86040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBehaviorTreeComponent::StopTree'::__l14::<lambda_2>,void,FBehaviorTreeParallelTask_const_&,int>
::Call(void *param_1,FBehaviorTreeParallelTask *param_2,int *param_3)

{
  `UBehaviorTreeComponent::StopTree'::__l14::<lambda_2>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 146e86050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBehaviorTreeComponent::TickComponent'::__l37::<lambda_3>,void,UBTAuxiliaryNode_const_&>
::Call(void *param_1,UBTAuxiliaryNode *param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FName FStack_18;
  byte bStack_10;
  
  lVar3 = *(longlong *)(*(longlong *)param_1 + 0x30);
  if (*(int *)(*(longlong *)param_1 + 0x38) < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar2 = *(ushort *)((longlong)&param_2->_padding_ + 2);
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&FStack_18,(UObjectBaseUtility *)param_2);
  bVar1 = **(byte **)((longlong)param_1 + 0x10);
  bVar5 = UBTAuxiliaryNode::WrappedTickNode
                    (param_2,*(UBehaviorTreeComponent **)((longlong)param_1 + 8),
                     (uchar *)((ulonglong)uVar2 + lVar3),*(float *)((longlong)param_1 + 0x18),
                     *(float **)((longlong)param_1 + 0x20));
  **(byte **)((longlong)param_1 + 0x10) = bVar5 | bVar1;
  if ((bStack_10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bStack_10 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bStack_10 & 4) != 0) {
    FThreadStats::AddMessage(FStack_18,CycleScopeEnd);
  }
  return;
}

// Call @ 146e86060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBehaviorTreeComponent::TickComponent'::__l63::<lambda_4>,void,FBehaviorTreeParallelTask_const_&,int>
::Call(void *param_1,FBehaviorTreeParallelTask *param_2,int *param_3)

{
  `UBehaviorTreeComponent::TickComponent'::__l63::<lambda_4>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 146ed5620

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`BlueprintNodeHelpers::CollectPropertyDescription'::__l2::<lambda_1>,bool,FProperty_*>
::Call(void *param_1,FProperty **param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)**(longlong **)param_1;
  plVar1 = plVar2 + (int)(*(longlong **)param_1)[1];
  while( true ) {
    if (plVar2 == plVar1) {
      return false;
    }
    if ((FProperty *)*plVar2 == *param_2) break;
    plVar2 = plVar2 + 1;
  }
  return true;
}

// Call @ 146f9bfa0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAIPerceptionComponent::GetHostileActors'::__l2::<lambda_1>,bool,FActorPerceptionInfo_const_&>
::Call(void *param_1,FActorPerceptionInfo *param_2)

{
  bool bVar1;
  
  if (param_2->bIsHostile != 0) {
    bVar1 = FActorPerceptionInfo::HasAnyKnownStimulus(param_2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Call @ 146f9bfd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAIPerceptionComponent::GetHostileActorsBySense'::__l2::<lambda_1>,bool,FActorPerceptionInfo_const_&>
::Call(void *param_1,FActorPerceptionInfo *param_2)

{
  bool bVar1;
  FAINamedID<FAISenseCounter> local_18 [2];
  
  if (param_2->bIsHostile != 0) {
    local_18[0].Index = *(uchar *)param_1;
    local_18[0].Name = *(FName *)((longlong)param_1 + 4);
    bVar1 = FActorPerceptionInfo::HasKnownStimulusOfSense(param_2,local_18);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Call @ 146f9c020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAISense_Sight::OnListenerUpdateImpl'::__l8::<lambda_1>,void,FAISightQuery_const_&>
::Call(void *param_1,FAISightQuery *param_2)

{
  FAIGenericID<FPerceptionListenerCounter> local_res10 [6];
  
  if ((*(byte *)&param_2->field6_0x30 & 1) != 0) {
    TSet<FAIGenericID<FPerceptionListenerCounter>,DefaultKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,0>,FDefaultSetAllocator>
    ::Emplace<FAIGenericID<FPerceptionListenerCounter>_const_&>
              (*(TSet<FAIGenericID<FPerceptionListenerCounter>,DefaultKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,0>,FDefaultSetAllocator>
                 **)param_1,local_res10,(bool *)param_2);
  }
  return;
}

// Call @ 146f9c050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAISense_Sight::OnListenerUpdateImpl'::__l8::<lambda_2>,void,FAISightQuery_&>::
Call(void *param_1,FAISightQuery *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = (param_2->ObserverId).Index;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar4 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar4 = plVar2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar2[9] - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*plVar2 + (longlong)iVar3 * 0xc) == uVar1) goto LAB_146f9c0ac;
        iVar3 = *(int *)(*plVar2 + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146f9c0ac:
  param_2->field6_0x30 = (FAISightQuery_u_48)(param_2->field6_0x30 & 0xfffffffffffffffe);
  param_2->field6_0x30 = (FAISightQuery_u_48)(param_2->field6_0x30 | (ulonglong)(iVar3 != -1));
  return;
}

// Call @ 146f9c0d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAISense_Sight::OnListenerUpdateImpl'::__l13::<lambda_3>,void,FAISightQuery_const_&>
::Call(void *param_1,FAISightQuery *param_2)

{
  uint local_res10 [6];
  
  if ((*(byte *)&param_2->field6_0x30 & 1) != 0) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>
              (*(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> **)param_1,
               local_res10,(bool *)&param_2->TargetId);
  }
  return;
}

// Call @ 146f9c100

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAISense_Sight::OnListenerUpdateImpl'::__l13::<lambda_4>,void,FAISightQuery_&>::
Call(void *param_1,FAISightQuery *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & param_2->TargetId) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == param_2->TargetId) goto LAB_146f9c15c;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_146f9c15c:
  param_2->field6_0x30 = (FAISightQuery_u_48)(param_2->field6_0x30 & 0xfffffffffffffffe);
  param_2->field6_0x30 = (FAISightQuery_u_48)(param_2->field6_0x30 | (ulonglong)(iVar2 != -1));
  return;
}

