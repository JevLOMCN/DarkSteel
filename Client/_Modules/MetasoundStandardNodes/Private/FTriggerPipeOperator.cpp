// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// FTriggerPipeOperator @ 14b2345a0

FTriggerPipeOperator * __thiscall
Metasound::FTriggerPipeOperator::FTriggerPipeOperator
          (FTriggerPipeOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,
          TDataReadReference<Metasound::FTime> *param_4)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FTriggerPipeOperator_Metasound__6B_;
  (this->SamplesUntilTrigger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SamplesUntilTrigger).ArrayNum = 0;
  (this->SamplesUntilTrigger).ArrayMax = 0;
  *(undefined ***)&this->TriggerIn = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerIn).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerIn = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerReset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerReset =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOut,NewObject,param_1);
  *(undefined ***)&this->TriggerOut =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->DelayTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DelayTime).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->DelayTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DelayTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  this->FramesPerBlock = (longlong)param_1->NumFramesPerBlock;
  this->SampleRate = (int)(float)param_1->SampleRate;
  return this;
}

// operator() @ 14b242f90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FTriggerPipeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  FName FVar3;
  TRefCountPtr<ITextData> TVar4;
  int iVar5;
  FNodeClassName *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FScriptContainerElement *pFVar9;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,"");
  ::FName::FName(local_res18,"Pipe");
  pFVar6 = Metasound::FNodeClassName::FNodeClassName
                     (&local_28,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  FVar3 = pFVar6->Name;
  (__return_storage_ptr__->ClassName).Namespace = pFVar6->Namespace;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  (__return_storage_ptr__->ClassName).Variant = pFVar6->Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  pFVar7 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar4 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::FTriggerPipeOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar9 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  TVar4 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar9 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar4.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
  }
  *(uint *)(pFVar9 + 8) = Metasound::NodeCategories::Trigger.Flags;
  return __return_storage_ptr__;
}

// operator() @ 14b247790

void __thiscall
`Metasound::FTriggerPipeOperator::Execute'::__l2::<lambda_4>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(*(longlong *)this + 0x10) + -1;
  lVar8 = (longlong)iVar9;
  if (-1 < iVar9) {
    do {
      lVar1 = *(longlong *)this;
      uVar7 = (uint)lVar8;
      uVar6 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar1 + 0x10)) {
        uVar5 = uVar6;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)this;
      if ((longlong)param_1 <=
          *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar7 * 8) -
          *(longlong *)(lVar2 + 0x98)) {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)(lVar2 + 0x10)) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = *(int *)(lVar2 + 0x10) + ~uVar7;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove((void *)((longlong)(int)uVar7 * 8 + *(longlong *)(lVar2 + 8)),
                  (void *)(*(longlong *)(lVar2 + 8) + (longlong)(*(int *)(lVar2 + 0x10) - iVar9) * 8
                          ),(longlong)iVar9 << 3);
        }
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)(lVar2 + 8),*(int *)(lVar2 + 0x10),(int *)(lVar2 + 0x14)
                  );
      }
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  return;
}

// BindInputs @ 14b249660

void __thiscall
Metasound::FTriggerPipeOperator::BindInputs
          (FTriggerPipeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerPipeVertexNames::InputInTriggerName);
  local_res18 = &this->TriggerIn;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerPipeVertexNames::InputResetName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&TriggerPipeVertexNames::InputDelayTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->DelayTime;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b24a1f0

void __thiscall
Metasound::FTriggerPipeOperator::BindOutputs
          (FTriggerPipeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerPipeVertexNames::OutputOutTriggerName);
  local_res18[0] = &this->TriggerOut;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// CreateOperator @ 14b26b9a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FTriggerPipeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerPipeVertexNames::InputInTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerPipeVertexNames::InputResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerPipeVertexNames::InputDelayTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0xa8);
  if (pIVar2 != (INode *)0x0) {
    *pIVar2 = (INode)&___7FTriggerPipeOperator_Metasound__6B_;
    pIVar2[1] = (INode)0x0;
    pIVar2[2] = (INode)0x0;
    pIVar2[3] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[4] = (INode)local_88._8_8_;
    pIVar2[5] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar2[3] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[7] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[8] = (INode)local_68._8_8_;
    pIVar2[9] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar2[7] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 0xb),NewObject,pFVar1);
    pIVar2[0xb] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[0xf] = (INode)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    pIVar2[0x10] = (INode)local_48._8_8_;
    pIVar2[0x11] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar2[0xf] = (INode)&___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    pIVar2[0x13] = (INode)(longlong)pFVar1->NumFramesPerBlock;
    *(int *)(pIVar2 + 0x14) = (int)(float)pFVar1->SampleRate;
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b273430

void __thiscall Metasound::FTriggerPipeOperator::Execute(FTriggerPipeOperator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  FTrigger *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  longlong local_res8;
  longlong local_res10;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOut).field_0x8);
  plVar3 = *(longlong **)&(this->TriggerIn).field_0x8;
  iVar7 = *(int *)((longlong)plVar3 + 0x1c);
  if (0 < iVar7) {
    lVar4 = *plVar3;
    lVar14 = (longlong)iVar7 + -1;
    if (0 < lVar14) {
      lVar13 = 0;
      do {
        dVar15 = **(double **)&(this->DelayTime).field_0x8;
        if (dVar15 <= 0.0) {
          dVar15 = 0.0;
        }
        local_res8 = (longlong)
                     (dVar15 * (double)this->SampleRate + (double)*(int *)(lVar4 + lVar13 * 4));
        TArray<__int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<__int64>
                  (&this->SamplesUntilTrigger,&local_res8);
        lVar13 = lVar13 + 1;
      } while (lVar13 < lVar14);
    }
    dVar15 = **(double **)&(this->DelayTime).field_0x8;
    if (dVar15 <= 0.0) {
      dVar15 = 0.0;
    }
    local_res10 = (longlong)
                  (dVar15 * (double)this->SampleRate + (double)*(int *)(lVar4 + lVar14 * 4));
    TArray<__int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<__int64>
              (&this->SamplesUntilTrigger,&local_res10);
  }
  this_00 = *(FTrigger **)&(this->TriggerReset).field_0x8;
  FTrigger::
  ExecuteFrames<_Metasound::FTriggerPipeOperator::Execute_::__l2::<lambda_3>,_Metasound::FTriggerPipeOperator::Execute_::__l2::<lambda_4>_>
            (this_00,this_00->NumFramesPerBlock,this_00->LastTriggerIndexInBlock,local_res8._0_1_,
             (<lambda_4>)this);
  iVar7 = (this->SamplesUntilTrigger).ArrayNum + -1;
  lVar14 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      uVar12 = (uint)lVar14;
      uVar11 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < (this->SamplesUntilTrigger).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = this->FramesPerBlock;
      lVar10 = (longlong)(int)uVar12;
      lVar13 = *(longlong *)((this->SamplesUntilTrigger).AllocatorInstance.Data + lVar10 * 8) -
               lVar4;
      if (lVar13 < 0) {
        FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOut).field_0x8,(int)lVar4 + (int)lVar13)
        ;
        uVar8 = 0;
        if ((int)uVar12 < (this->SamplesUntilTrigger).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (this->SamplesUntilTrigger).ArrayNum;
        pFVar2 = (this->SamplesUntilTrigger).AllocatorInstance.Data;
        iVar9 = ~uVar12 + iVar7;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar2 + lVar10 * 8,pFVar2 + (longlong)(iVar7 - iVar9) * 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->SamplesUntilTrigger).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->SamplesUntilTrigger).AllocatorInstance,
                   (this->SamplesUntilTrigger).ArrayNum,&(this->SamplesUntilTrigger).ArrayMax);
      }
      else {
        uVar8 = 0;
        if ((int)uVar12 < (this->SamplesUntilTrigger).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->SamplesUntilTrigger).AllocatorInstance.Data + lVar10 * 8;
        *(longlong *)pFVar2 = *(longlong *)pFVar2 - lVar4;
      }
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  return;
}

// GetNodeInfo @ 14b283530

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FTriggerPipeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FTriggerPipeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FTriggerPipeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b2868d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FTriggerPipeOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  TInputDataVertex<Metasound::FTime> *pTVar4;
  TInputDataVertex<Metasound::FTrigger> *pTVar5;
  TInputDataVertex<Metasound::FTrigger> *pTVar6;
  FInputVertexInterface *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_178 [32];
  float local_148 [2];
  FOutputVertexInterface local_140;
  FInputVertexInterface local_120;
  FOutputVertexInterfaceDeclarationBuilder local_100;
  TOutputDataVertex<Metasound::FTrigger> local_d8;
  TInputDataVertex<Metasound::FTrigger> local_b8;
  TInputDataVertex<Metasound::FTrigger> local_80;
  TInputDataVertex<Metasound::FTime> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_d8,&TriggerPipeVertexNames::OutputOutTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_140);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_100,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_140,
               &local_140.SubInterfaces);
    if ((local_100.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_100.Vertices)->AllocatorInstance,(local_100.Vertices)->ArrayNum,
                 &(local_100.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_100,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_100);
    local_148[0] = 1.0;
    pTVar4 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_48,&TriggerPipeVertexNames::InputDelayTimeName,
                        &FDataVertexMetadata::EmptyBasic,local_148);
    pTVar5 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_80,&TriggerPipeVertexNames::InputResetName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_b8,&TriggerPipeVertexNames::InputInTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>_>
                       (&local_120,pTVar6,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface(&::Interface,pFVar7,&local_140);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_120.SubInterfaces.AllocatorInstance.Data,
               local_120.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_120.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_120.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_120._padding_,(int)local_120._padding_);
    if ((FInputDataVertex *)local_120._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_120._padding_);
    }
    if ((0xc < (byte)local_b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_140.SubInterfaces.AllocatorInstance.Data,
               local_140.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_140.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_140.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_140._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_140._padding_);
    }
    atexit(`Metasound::FTriggerPipeOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b28b900

void __thiscall
Metasound::FTriggerPipeOperator::Reset(FTriggerPipeOperator *this,FResetParams *param_1)

{
  (this->SamplesUntilTrigger).ArrayNum = 0;
  if ((this->SamplesUntilTrigger).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SamplesUntilTrigger).AllocatorInstance,0,
               &(this->SamplesUntilTrigger).ArrayMax);
  }
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOut).field_0x8);
  return;
}

