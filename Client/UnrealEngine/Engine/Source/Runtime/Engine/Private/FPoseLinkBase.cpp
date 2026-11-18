// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 147496cb0

UScriptStruct * __cdecl FPoseLinkBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseLinkBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPoseLinkBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseLinkBase,(UObject *)pUVar1,L"PoseLinkBase");
  }
  return Z_Registration_Info_UScriptStruct_FPoseLinkBase.OuterSingleton;
}

// AttemptRelink @ 1474c0790

void __thiscall FPoseLinkBase::AttemptRelink(FPoseLinkBase *this,FAnimationBaseContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FAnimNode_Base *pFVar5;
  IAnimClassInterface *pIVar6;
  
  if ((this->LinkedNode == (FAnimNode_Base *)0x0) && (this->LinkID != -1)) {
    pIVar6 = (IAnimClassInterface *)0x0;
    if (((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) ||
        (pIVar6 = param_1->AnimInstanceProxy->AnimClassInterface,
        pIVar6 == (IAnimClassInterface *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AnimBlueprintClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeBase.cpp"
                           ,0xbe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x20))(pIVar6);
    iVar1 = this->LinkID;
    if ((iVar1 < 0) || ((int)plVar4[1] <= iVar1)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7342357656071307070>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeBase.cpp"
                         ,0xc2,"AnimNodeProperties.IsValidIndex(LinkID)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (*(FProperty **)(*plVar4 + (longlong)iVar1 * 8),
                          param_1->AnimInstanceProxy->AnimInstanceObject,0);
      this->LinkedNode = pFVar5;
    }
  }
  return;
}

// CacheBones @ 1474c1890

void __thiscall FPoseLinkBase::CacheBones(FPoseLinkBase *this,FAnimationCacheBonesContext *param_1)

{
  FAnimNode_Base *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this_00;
  FString local_28;
  FString local_18;
  
  if (this->bProcessed != false) {
    this_00 = IAnimClassInterface::GetActualAnimClass
                        (*(IAnimClassInterface **)(*(longlong *)param_1 + 0x148));
    if ((this_00 == (UClass *)0x0) || (this_00->_padding_ == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
    }
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)(*(longlong *)param_1 + 0x140),&local_18,(UObject *)0x0,None)
    ;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bProcessed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeBase.cpp"
                       ,0x11a,
                       L"CacheBones already in progress, circular link for AnimInstance [%s] Blueprint [%s]"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = this->bProcessed;
  this->bProcessed = true;
  pFVar1 = this->LinkedNode;
  if (pFVar1 != (FAnimNode_Base *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_1);
  }
  this->bProcessed = bVar3;
  return;
}

// GatherDebugData @ 1474d5ae0

void __thiscall FPoseLinkBase::GatherDebugData(FPoseLinkBase *this,FNodeDebugData *param_1)

{
  if (this->LinkedNode != (FAnimNode_Base *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474d5aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->LinkedNode->_padding_ + 0x28))();
    return;
  }
  return;
}

// GetLinkNode @ 1474da410

FAnimNode_Base * __thiscall FPoseLinkBase::GetLinkNode(FPoseLinkBase *this)

{
  return this->LinkedNode;
}

// Initialize @ 1474e8110

void __thiscall FPoseLinkBase::Initialize(FPoseLinkBase *this,FAnimationInitializeContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *this_00;
  FScopedAnimNodeTrace local_res8;
  FString local_48;
  FString local_38;
  FAnimationInitializeContext local_28;
  
  if (this->bProcessed != false) {
    this_00 = IAnimClassInterface::GetActualAnimClass
                        (*(IAnimClassInterface **)(*(longlong *)param_1 + 0x148));
    if ((this_00 == (UClass *)0x0) || (this_00->_padding_ == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_48,(UObject *)0x0,None);
    }
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)(*(longlong *)param_1 + 0x140),&local_38,(UObject *)0x0,None)
    ;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bProcessed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeBase.cpp"
                       ,0xcf,
                       L"Initialize already in progress, circular link for AnimInstance [%s] Blueprint [%s]"
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = this->bProcessed;
  this->bProcessed = true;
  AttemptRelink(this,(FAnimationBaseContext *)param_1);
  if (this->LinkedNode != (FAnimNode_Base *)0x0) {
    local_28._16_4_ = *(undefined4 *)&param_1->field_0x10;
    local_28._24_4_ = *(undefined4 *)&param_1->field_0x14;
    local_28._28_4_ = *(undefined4 *)&param_1->field_0x1c;
    local_28._0_8_ = *(undefined8 *)param_1;
    local_28._8_8_ = *(undefined8 *)&param_1->field_0x8;
    local_28._20_4_ = this->LinkID;
    FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace(&local_res8,&local_28);
    (**(code **)this->LinkedNode->_padding_)(this->LinkedNode,&local_28);
    FAnimTrace::FScopedAnimNodeTrace::~FScopedAnimNodeTrace(&local_res8);
  }
  this->bProcessed = bVar2;
  return;
}

// SetDynamicLinkNode @ 1474f83d0

void __thiscall FPoseLinkBase::SetDynamicLinkNode(FPoseLinkBase *this,FPoseLinkBase *param_1)

{
  if (param_1 != (FPoseLinkBase *)0x0) {
    this->LinkedNode = param_1->LinkedNode;
    this->LinkID = param_1->LinkID;
    return;
  }
  this->LinkedNode = (FAnimNode_Base *)0x0;
  this->LinkID = -1;
  return;
}

// SetLinkNode @ 1474f8550

void __thiscall FPoseLinkBase::SetLinkNode(FPoseLinkBase *this,FAnimNode_Base *param_1)

{
  this->LinkedNode = param_1;
  return;
}

// Update @ 1474fe8c0

void __thiscall FPoseLinkBase::Update(FPoseLinkBase *this,FAnimationUpdateContext *param_1)

{
  FAnimNode_Base *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  EAnimNodeInitializationStatus EVar6;
  UClass *this_00;
  UPackage *pUVar7;
  FNodeDataId *pFVar8;
  FAnimNodeFunctionRef *pFVar9;
  UAnimInstance *pUVar10;
  FAnimSubsystemInstance_NodeRelevancy *pFVar11;
  UObject *pUVar12;
  UObject *pUVar13;
  FNameEntryId FVar14;
  uint uVar15;
  FAnimNodeRelevancyStatus local_res18;
  FScopedAnimNodeTrace local_res20;
  FString local_e8;
  FAnimationUpdateContext local_d8;
  FNodeDataId local_a8;
  FNodeDataId local_98;
  FNodeDataId local_88;
  FString local_78;
  FNodeDataId local_68;
  FNodeDataId local_5c;
  FNodeDataId local_50 [2];
  
  if (this->bProcessed != false) {
    this_00 = IAnimClassInterface::GetActualAnimClass
                        (*(IAnimClassInterface **)(param_1->_padding_ + 0x148));
    if ((this_00 == (UClass *)0x0) || (this_00->_padding_ == 0)) {
      ::FString::FString(&local_e8,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_e8,(UObject *)0x0,None);
    }
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)(param_1->_padding_ + 0x140),&local_78,(UObject *)0x0,None);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bProcessed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeBase.cpp"
                       ,0x130,
                       L"Update already in progress, circular link for AnimInstance [%s] Blueprint [%s]"
                      );
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar4 = this->bProcessed;
  this->bProcessed = true;
  if (this->LinkedNode != (FAnimNode_Base *)0x0) {
    local_d8._padding_._0_4_ = (undefined4)param_1->_padding_;
    local_d8._padding_._0_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_d8._padding_._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_d8._padding_ = param_1->_padding_;
    local_d8._padding_ = param_1->_padding_;
    local_d8.CurrentWeight = param_1->CurrentWeight;
    local_d8.RootMotionWeightModifier = param_1->RootMotionWeightModifier;
    local_d8.DeltaTime = param_1->DeltaTime;
    local_d8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_d8._padding_._4_4_ = this->LinkID;
    FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace(&local_res20,&local_d8);
    pFVar1 = this->LinkedNode;
    if ((pFVar1->NodeData != (FAnimNodeData *)0x0) &&
       (uVar15 = pFVar1->NodeData->Flags, (uVar15 & 7) != 0)) {
      pUVar13 = (UObject *)0x0;
      if ((uVar15 & 1) != 0) {
        if (CachedId_InitialUpdateFunction.Index == -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
            ::FName::FName(&AnimName_InitialUpdateFunction,"InitialUpdateFunction");
            _Init_thread_footer(&::_TSS1);
          }
          if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar7 = Z_Construct_UPackage__Script_Engine();
            Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base,(UObject *)pUVar7,
                                 L"AnimNode_Base");
          }
          pFVar8 = UE::Anim::FNodeDataId::FNodeDataId
                             (&local_68,AnimName_InitialUpdateFunction,pFVar1,
                              Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton);
          CachedId_InitialUpdateFunction.Id = pFVar8->Id;
          FVar14 = CachedId_InitialUpdateFunction.Id.ComparisonIndex.Value;
          uVar15 = CachedId_InitialUpdateFunction.Id.Number;
          CachedId_InitialUpdateFunction.Index = pFVar8->Index;
        }
        else {
          FVar14 = CachedId_InitialUpdateFunction.Id.ComparisonIndex.Value;
          uVar15 = CachedId_InitialUpdateFunction.Id.Number;
        }
        iVar3 = CachedId_InitialUpdateFunction.Index;
        if ((pFVar1->NodeData == (FAnimNodeData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NodeData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                               ,0x3e1,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_a8.Id.Number = uVar15;
        local_a8.Id.ComparisonIndex.Value = FVar14.Value;
        local_a8.Index = iVar3;
        pFVar9 = FAnimNodeData::GetData(pFVar1->NodeData,&local_a8,pFVar1,(UObject *)0x0);
        if ((pFVar9->Function).field0_0x0.DebugPtr != (UFunction *)0x0) {
          pUVar12 = pUVar13;
          if (local_d8._padding_ != 0) {
            pUVar12 = *(UObject **)(local_d8._padding_ + 0x140);
          }
          pUVar10 = CastChecked<UAnimInstance,UObject>(pUVar12);
          pFVar11 = UAnimInstance::GetSubsystem<FAnimSubsystemInstance_NodeRelevancy>(pUVar10);
          EVar6 = FAnimSubsystemInstance_NodeRelevancy::UpdateNodeInitializationStatus
                            (pFVar11,&local_d8,pFVar1);
          if (EVar6 == InitialUpdate) {
            UE::Anim::CallFunctionHelper<FAnimUpdateContext,FAnimationUpdateContext>
                      (pFVar9,&local_d8,pFVar1);
          }
        }
      }
      pFVar1 = this->LinkedNode;
      if ((pFVar1->NodeData != (FAnimNodeData *)0x0) && ((pFVar1->NodeData->Flags & 2) != 0)) {
        if (CachedId_BecomeRelevantFunction.Index == -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
            ::FName::FName(&AnimName_BecomeRelevantFunction,"BecomeRelevantFunction");
            _Init_thread_footer(&::_TSS1);
          }
          if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar7 = Z_Construct_UPackage__Script_Engine();
            Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base,(UObject *)pUVar7,
                                 L"AnimNode_Base");
          }
          pFVar8 = UE::Anim::FNodeDataId::FNodeDataId
                             (&local_5c,AnimName_BecomeRelevantFunction,pFVar1,
                              Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton);
          CachedId_BecomeRelevantFunction.Id = pFVar8->Id;
          FVar14 = CachedId_BecomeRelevantFunction.Id.ComparisonIndex.Value;
          uVar15 = CachedId_BecomeRelevantFunction.Id.Number;
          CachedId_BecomeRelevantFunction.Index = pFVar8->Index;
        }
        else {
          FVar14 = CachedId_BecomeRelevantFunction.Id.ComparisonIndex.Value;
          uVar15 = CachedId_BecomeRelevantFunction.Id.Number;
        }
        iVar3 = CachedId_BecomeRelevantFunction.Index;
        if ((pFVar1->NodeData == (FAnimNodeData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NodeData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                               ,0x3e1,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_98.Id.Number = uVar15;
        local_98.Id.ComparisonIndex.Value = FVar14.Value;
        local_98.Index = iVar3;
        pFVar9 = FAnimNodeData::GetData(pFVar1->NodeData,&local_98,pFVar1,(UObject *)0x0);
        if ((pFVar9->Function).field0_0x0.DebugPtr != (UFunction *)0x0) {
          if (local_d8._padding_ != 0) {
            pUVar13 = *(UObject **)(local_d8._padding_ + 0x140);
          }
          pUVar10 = CastChecked<UAnimInstance,UObject>(pUVar13);
          pFVar11 = UAnimInstance::GetSubsystem<FAnimSubsystemInstance_NodeRelevancy>(pUVar10);
          FAnimSubsystemInstance_NodeRelevancy::UpdateNodeRelevancy
                    (pFVar11,(FAnimationUpdateContext *)&local_res18,(FAnimNode_Base *)&local_d8);
          bVar5 = FAnimNodeRelevancyStatus::IsStartingBlendingIn(&local_res18);
          if (bVar5) {
            UE::Anim::CallFunctionHelper<FAnimUpdateContext,FAnimationUpdateContext>
                      (pFVar9,&local_d8,pFVar1);
          }
        }
      }
      pFVar1 = this->LinkedNode;
      if ((pFVar1->NodeData != (FAnimNodeData *)0x0) && ((pFVar1->NodeData->Flags & 4) != 0)) {
        if (CachedId_UpdateFunction.Index == -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
            ::FName::FName(&AnimName_UpdateFunction,"UpdateFunction");
            _Init_thread_footer(&::_TSS1);
          }
          if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar7 = Z_Construct_UPackage__Script_Engine();
            Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base,(UObject *)pUVar7,
                                 L"AnimNode_Base");
          }
          pFVar8 = UE::Anim::FNodeDataId::FNodeDataId
                             (local_50,AnimName_UpdateFunction,pFVar1,
                              Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton);
          CachedId_UpdateFunction.Id = pFVar8->Id;
          FVar14 = CachedId_UpdateFunction.Id.ComparisonIndex.Value;
          uVar15 = CachedId_UpdateFunction.Id.Number;
          CachedId_UpdateFunction.Index = pFVar8->Index;
        }
        else {
          FVar14 = CachedId_UpdateFunction.Id.ComparisonIndex.Value;
          uVar15 = CachedId_UpdateFunction.Id.Number;
        }
        iVar3 = CachedId_UpdateFunction.Index;
        if ((pFVar1->NodeData == (FAnimNodeData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NodeData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                               ,0x3e1,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_88.Id.Number = uVar15;
        local_88.Id.ComparisonIndex.Value = FVar14.Value;
        local_88.Index = iVar3;
        pFVar9 = FAnimNodeData::GetData(pFVar1->NodeData,&local_88,pFVar1,(UObject *)0x0);
        UE::Anim::CallFunctionHelper<FAnimUpdateContext,FAnimationUpdateContext>
                  (pFVar9,&local_d8,pFVar1);
      }
    }
    (**(code **)(this->LinkedNode->_padding_ + 0x10))(this->LinkedNode,&local_d8);
    FAnimTrace::FScopedAnimNodeTrace::~FScopedAnimNodeTrace(&local_res20);
  }
  this->bProcessed = bVar4;
  return;
}

