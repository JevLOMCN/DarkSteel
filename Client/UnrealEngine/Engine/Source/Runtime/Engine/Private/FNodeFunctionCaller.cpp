// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// BecomeRelevant @ 1474c08c0

void __cdecl
UE::Anim::FNodeFunctionCaller::BecomeRelevant
          (FAnimationUpdateContext *param_1,FAnimNode_Base *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UPackage *pUVar4;
  FNodeDataId *pFVar5;
  FAnimNodeFunctionRef *pFVar6;
  UAnimInstance *this;
  FAnimSubsystemInstance_NodeRelevancy *this_00;
  UObject *pUVar7;
  FAnimNodeRelevancyStatus local_res10;
  FName local_res18;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if ((param_2->NodeData != (FAnimNodeData *)0x0) && ((param_2->NodeData->Flags & 2) != 0)) {
    if (CachedId_BecomeRelevantFunction.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_BecomeRelevantFunction,"BecomeRelevantFunction");
        _Init_thread_footer(&::_TSS1);
      }
      if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_Engine();
        Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base,(UObject *)pUVar4,
                             L"AnimNode_Base");
      }
      pFVar5 = FNodeDataId::FNodeDataId
                         (&local_18,AnimName_BecomeRelevantFunction,param_2,
                          Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton);
      CachedId_BecomeRelevantFunction.Id = pFVar5->Id;
      CachedId_BecomeRelevantFunction.Index = pFVar5->Index;
    }
    iVar2 = CachedId_BecomeRelevantFunction.Index;
    local_res18 = CachedId_BecomeRelevantFunction.Id;
    if ((param_2->NodeData == (FAnimNodeData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodeData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                           ,0x3e1,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28.Id = local_res18;
    local_28.Index = iVar2;
    pFVar6 = FAnimNodeData::GetData(param_2->NodeData,&local_28,param_2,(UObject *)0x0);
    if ((pFVar6->Function).field0_0x0.DebugPtr != (UFunction *)0x0) {
      pUVar7 = (UObject *)0x0;
      if (param_1->_padding_ != 0) {
        pUVar7 = *(UObject **)(param_1->_padding_ + 0x140);
      }
      this = CastChecked<UAnimInstance,UObject>(pUVar7);
      this_00 = UAnimInstance::GetSubsystem<FAnimSubsystemInstance_NodeRelevancy>(this);
      FAnimSubsystemInstance_NodeRelevancy::UpdateNodeRelevancy
                (this_00,(FAnimationUpdateContext *)&local_res10,(FAnimNode_Base *)param_1);
      bVar3 = FAnimNodeRelevancyStatus::IsStartingBlendingIn(&local_res10);
      if (bVar3) {
        CallFunctionHelper<FAnimUpdateContext,FAnimationUpdateContext>(pFVar6,param_1,param_2);
      }
    }
  }
  return;
}

// CallFunction @ 1474c42b0

void __cdecl
UE::Anim::FNodeFunctionCaller::CallFunction
          (FAnimNodeFunctionRef *param_1,FAnimationBaseContext *param_2,FAnimNode_Base *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  UClass *this;
  code *pcVar3;
  bool bVar4;
  UAnimInstance *pUVar5;
  UObject *pUVar6;
  longlong lVar7;
  UFunction *pUVar8;
  UObject *pUVar9;
  FAnimNodeFunctionRef *pFStackX_8;
  longlong *plStack_48;
  UObject *pUStack_40;
  FAnimNodeReference FStack_38;
  
  pUVar8 = (param_1->Function).field0_0x0.DebugPtr;
  if ((pUVar8 != (UFunction *)0x0) &&
     ((pUVar8->ParmsSize == 0x20 ||
      (pFStackX_8 = param_1,
      bVar4 = `UE::Anim::CallFunctionHelper<FAnimExecutionContext,FAnimationBaseContext>'::__l6::
              <lambda_1>::operator()(&pFStackX_8), bVar4)))) {
    pUVar9 = (UObject *)0x0;
    pUVar6 = pUVar9;
    if (param_2->AnimInstanceProxy != (FAnimInstanceProxy *)0x0) {
      pUVar6 = param_2->AnimInstanceProxy->AnimInstanceObject;
    }
    pUVar5 = CastChecked<UAnimInstance,UObject>(pUVar6);
    pUVar6 = ::operator_new(0x20);
    if (pUVar6 == (UObject *)0x0) {
      plStack_48 = (longlong *)&DAT_00000010;
      pUStack_40 = (UObject *)0x0;
    }
    else {
      *(undefined4 *)&pUVar6->field_0x8 = 1;
      *(undefined4 *)&pUVar6->field_0xc = 1;
      *(undefined ***)pUVar6 =
           &
           ___7__TIntrusiveReferenceController_UFData_FAnimExecutionContext___00_SharedPointerInternals__6B_
      ;
      FAnimExecutionContext::FData::FData((FData *)&pUVar6->field_0x10,param_2);
      plStack_48 = (longlong *)&pUVar6->field_0x10;
      if ((plStack_48 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      LOCK();
      *(int *)&pUVar6->field_0xc = *(int *)&pUVar6->field_0xc + 1;
      UNLOCK();
      LOCK();
      *(int *)&pUVar6->field_0xc = *(int *)&pUVar6->field_0xc + 1;
      UNLOCK();
      LOCK();
      puVar1 = &pUVar6->field_0xc;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      pUVar9 = pUVar6;
      pUStack_40 = pUVar6;
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)pUVar6 + 8))(pUVar6,1);
      }
    }
    FAnimNodeReference::FAnimNodeReference(&FStack_38,pUVar5,param_3);
    pUVar8 = (param_1->Function).field0_0x0.DebugPtr;
    if (pUVar8 != (UFunction *)0x0) {
      this = (param_1->Class).field0_0x0.DebugPtr;
      if (this == (UClass *)0x0) {
        lVar7 = *(longlong *)pUVar5;
      }
      else {
        if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this);
        }
        pUVar5 = (UAnimInstance *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar8 = (param_1->Function).field0_0x0.DebugPtr;
        lVar7 = *(longlong *)pUVar5;
      }
      (**(code **)(lVar7 + 0x260))(pUVar5,pUVar8,&plStack_48);
    }
    if (pUStack_40 != (UObject *)0x0) {
      LOCK();
      puVar1 = &pUStack_40->field_0xc;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)pUStack_40 + 8))(pUStack_40,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar9);
  }
  return;
}

// InitialUpdate @ 1474e7d10

void __cdecl
UE::Anim::FNodeFunctionCaller::InitialUpdate
          (FAnimationUpdateContext *param_1,FAnimNode_Base *param_2)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EAnimNodeInitializationStatus EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  FAnimNodeFunctionRef *pFVar8;
  UAnimInstance *this;
  FAnimSubsystemInstance_NodeRelevancy *this_00;
  UObject *pUVar9;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if ((param_2->NodeData != (FAnimNodeData *)0x0) && ((param_2->NodeData->Flags & 1) != 0)) {
    if (CachedId_InitialUpdateFunction.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_InitialUpdateFunction,"InitialUpdateFunction");
        _Init_thread_footer(&::_TSS1);
      }
      if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_Engine();
        Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base,(UObject *)pUVar6,
                             L"AnimNode_Base");
      }
      pFVar7 = FNodeDataId::FNodeDataId
                         (&local_18,AnimName_InitialUpdateFunction,param_2,
                          Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton);
      CachedId_InitialUpdateFunction.Id = pFVar7->Id;
      CachedId_InitialUpdateFunction.Index = pFVar7->Index;
    }
    iVar3 = CachedId_InitialUpdateFunction.Index;
    FVar2 = CachedId_InitialUpdateFunction.Id;
    if ((param_2->NodeData == (FAnimNodeData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodeData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                           ,0x3e1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28.Id = FVar2;
    local_28.Index = iVar3;
    pFVar8 = FAnimNodeData::GetData(param_2->NodeData,&local_28,param_2,(UObject *)0x0);
    if ((pFVar8->Function).field0_0x0.DebugPtr != (UFunction *)0x0) {
      pUVar9 = (UObject *)0x0;
      if (param_1->_padding_ != 0) {
        pUVar9 = *(UObject **)(param_1->_padding_ + 0x140);
      }
      this = CastChecked<UAnimInstance,UObject>(pUVar9);
      this_00 = UAnimInstance::GetSubsystem<FAnimSubsystemInstance_NodeRelevancy>(this);
      EVar5 = FAnimSubsystemInstance_NodeRelevancy::UpdateNodeInitializationStatus
                        (this_00,param_1,param_2);
      if (EVar5 == InitialUpdate) {
        CallFunctionHelper<FAnimUpdateContext,FAnimationUpdateContext>(pFVar8,param_1,param_2);
      }
    }
  }
  return;
}

// Update @ 1474fe740

void __cdecl
UE::Anim::FNodeFunctionCaller::Update(FAnimationUpdateContext *param_1,FAnimNode_Base *param_2)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if ((param_2->NodeData != (FAnimNodeData *)0x0) && ((param_2->NodeData->Flags & 4) != 0)) {
    if (CachedId_UpdateFunction.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_UpdateFunction,"UpdateFunction");
        _Init_thread_footer(&::_TSS1);
      }
      if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_Engine();
        Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base,(UObject *)pUVar5,
                             L"AnimNode_Base");
      }
      pFVar6 = FNodeDataId::FNodeDataId
                         (&local_18,AnimName_UpdateFunction,param_2,
                          Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton);
      CachedId_UpdateFunction.Id = pFVar6->Id;
      CachedId_UpdateFunction.Index = pFVar6->Index;
    }
    iVar3 = CachedId_UpdateFunction.Index;
    FVar2 = CachedId_UpdateFunction.Id;
    if ((param_2->NodeData == (FAnimNodeData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodeData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                           ,0x3e1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28.Id = FVar2;
    local_28.Index = iVar3;
    pFVar7 = FAnimNodeData::GetData(param_2->NodeData,&local_28,param_2,(UObject *)0x0);
    CallFunctionHelper<FAnimUpdateContext,FAnimationUpdateContext>(pFVar7,param_1,param_2);
  }
  return;
}

