// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FTriggerRepeatOperator @ 14b234760

FTriggerRepeatOperator * __thiscall
Metasound::FTriggerRepeatOperator::FTriggerRepeatOperator
          (FTriggerRepeatOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,
          TDataReadReference<Metasound::FTime> *param_4,TDataReadReference<int> *param_5)

{
  int iVar1;
  longlong lVar2;
  
  this->bEnabled = false;
  this->_padding_ = (longlong)&___7FTriggerRepeatOperator_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOut,NewObject,param_1);
  *(undefined ***)&this->TriggerOut =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerEnable = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerEnable).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerEnable).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->TriggerEnable =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerDisable = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->TriggerDisable).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerDisable).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->TriggerDisable =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->Period = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Period).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar2 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->Period).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Period = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->NumRepeats = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->NumRepeats).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar2 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->NumRepeats).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->NumRepeats = &___7__TDataReadReference_H_Metasound__6B_;
  this->BlockSize = (longlong)param_1->NumFramesPerBlock;
  iVar1 = param_1->SampleRate;
  (this->SampleCounter).NumSamples = 0;
  this->CurrentRepeats = 0;
  (this->SampleCounter).SampleRate = (int)(float)iVar1;
  return this;
}

// operator() @ 14b243120

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FTriggerRepeatOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  ITextData *pIVar3;
  code *pcVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FVertexInterface *pFVar9;
  FText *pFVar10;
  FNodeClassMetadata *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_68;
  FText local_60;
  FText local_50;
  FText local_40;
  FNodeClassName local_30;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_68,L"TriggerRepeat");
  ::FName::FName(&local_res20,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_30,&Metasound::StandardNodes::Namespace,&local_68,&local_res20);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_30.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_30.Name;
  (__return_storage_ptr__->ClassName).Variant = local_30.Variant;
  pFVar8 = FText::FText(&local_60);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar8);
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  pFVar8 = FText::FText(&local_50);
  FText::operator=(&__return_storage_ptr__->Description,pFVar8);
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::FTriggerRepeatOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  iVar7 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar12 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar7 + 1;
  pFVar12 = pFVar12 + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  TVar5 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar12 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res18);
  }
  *(uint *)(pFVar12 + 8) = Metasound::NodeCategories::Trigger.Flags;
  pFVar10 = FText::FText(&local_40);
  pTVar2 = &__return_storage_ptr__->Keywords;
  pFVar8 = (FText *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar8 <= pFVar10) && (pFVar10 < pFVar8 + (__return_storage_ptr__->Keywords).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FNodeClassMetadata *)(*pcVar4)();
      return pFVar11;
    }
  }
  iVar7 = (__return_storage_ptr__->Keywords).ArrayNum;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar7 + 1;
  FText::FText((FText *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10),pFVar10);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b2497b0

void __thiscall
Metasound::FTriggerRepeatOperator::BindInputs
          (FTriggerRepeatOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerRepeatVertexNames::InputStartName);
  local_res18 = &this->TriggerEnable;
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
  FLazyName::Resolve(&TriggerRepeatVertexNames::InputStopName);
  local_res18 = &this->TriggerDisable;
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
  FLazyName::Resolve(&TriggerRepeatVertexNames::InputPeriodName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Period;
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
  FLazyName::Resolve(&TriggerRepeatVertexNames::InputNumRepeatsName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->NumRepeats;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b24a280

void __thiscall
Metasound::FTriggerRepeatOperator::BindOutputs
          (FTriggerRepeatOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerRepeatVertexNames::RepeatOutputOnTriggerName);
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

// CreateOperator @ 14b26bb90

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FTriggerRepeatOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  INode *pIVar3;
  FName local_res8;
  undefined1 local_a8 [16];
  INode local_98;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerRepeatVertexNames::InputStartName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_a8,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerRepeatVertexNames::InputStopName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_88,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerRepeatVertexNames::InputPeriodName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_68,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerRepeatVertexNames::InputNumRepeatsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar3 = ::operator_new(0xd0);
  if (pIVar3 == (INode *)0x0) {
    pIVar3 = (INode *)0x0;
  }
  else {
    *(undefined1 *)(pIVar3 + 1) = 0;
    *pIVar3 = (INode)&___7FTriggerRepeatOperator_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar3 + 2),NewObject,pFVar2);
    pIVar3[2] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar3[6] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar3[7] = (INode)local_a8._8_8_;
    pIVar3[8] = local_98;
    if (local_98 != (INode)0x0) {
      *(int *)((longlong)local_98 + 8) = *(int *)((longlong)local_98 + 8) + 1;
    }
    pIVar3[6] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar3[10] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar3[0xb] = (INode)local_88._8_8_;
    pIVar3[0xc] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar3[10] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar3[0xe] = (INode)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    pIVar3[0xf] = (INode)local_68._8_8_;
    pIVar3[0x10] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar3[0xe] = (INode)&___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    pIVar3[0x12] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar3[0x13] = (INode)local_48._8_8_;
    pIVar3[0x14] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar3[0x12] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pIVar3[0x16] = (INode)(longlong)pFVar2->NumFramesPerBlock;
    iVar1 = pFVar2->SampleRate;
    pIVar3[0x17] = (INode)0x0;
    *(undefined4 *)(pIVar3 + 0x19) = 0;
    *(int *)(pIVar3 + 0x18) = (int)(float)iVar1;
  }
  param_1->Node = pIVar3;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b2736e0

void __thiscall Metasound::FTriggerRepeatOperator::Execute(FTriggerRepeatOperator *this)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  FSampleCounter *pFVar7;
  
  iVar1 = *(int *)(*(longlong *)&(this->TriggerEnable).field_0x8 + 0x1c);
  if (0 < iVar1) {
    uVar3 = iVar1 - 1;
    uVar4 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      do {
        this->bEnabled = true;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    this->bEnabled = true;
    this->CurrentRepeats = 0;
    (this->SampleCounter).NumSamples = 0;
  }
  iVar1 = *(int *)(*(longlong *)&(this->TriggerDisable).field_0x8 + 0x1c);
  if (0 < iVar1) {
    if (0 < iVar1 + -1) {
      this->bEnabled = false;
    }
    this->bEnabled = false;
  }
  pFVar7 = &this->SampleCounter;
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOut).field_0x8);
  if (this->bEnabled != false) {
    uVar4 = (this->SampleCounter).NumSamples;
    uVar5 = this->BlockSize;
    lVar6 = (longlong)
            ((double)(this->SampleCounter).SampleRate * **(double **)&(this->Period).field_0x8);
    if (lVar6 < 1) {
      lVar6 = 1;
    }
    if (uVar4 == uVar5 || (longlong)(uVar4 - uVar5) < 0) {
      do {
        iVar1 = **(int **)&(this->NumRepeats).field_0x8;
        if ((iVar1 != 0) && (iVar1 <= this->CurrentRepeats)) break;
        FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOut).field_0x8,(int)uVar4);
        pFVar7->NumSamples = pFVar7->NumSamples + lVar6;
        uVar2 = pFVar7->NumSamples;
        this->CurrentRepeats = this->CurrentRepeats + 1;
        uVar4 = uVar2 & 0xffffffff;
        uVar5 = this->BlockSize;
      } while (uVar2 == uVar5 || (longlong)(uVar2 - uVar5) < 0);
    }
    (this->SampleCounter).NumSamples = (this->SampleCounter).NumSamples - uVar5;
  }
  return;
}

// GetNodeInfo @ 14b2835c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FTriggerRepeatOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FTriggerRepeatOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FTriggerRepeatOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b286bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FTriggerRepeatOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_1e8 [32];
  int local_1b8;
  float local_1b4;
  FInputVertexInterface local_1b0;
  FOutputVertexInterface local_190;
  FInputVertexInterfaceDeclarationBuilder local_170;
  FOutputVertexInterfaceDeclarationBuilder local_148;
  TOutputDataVertex<Metasound::FTrigger> local_120;
  TInputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<Metasound::FTrigger> local_c8;
  TInputDataVertex<Metasound::FTime> local_90;
  TInputDataVertex<int> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_120,&TriggerRepeatVertexNames::RepeatOutputOnTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_190);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_148,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_190,
               &local_190.SubInterfaces);
    if ((local_148.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_148.Vertices)->AllocatorInstance,(local_148.Vertices)->ArrayNum,
                 &(local_148.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_148,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_148);
    local_1b8 = 0;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_58,&TriggerRepeatVertexNames::InputNumRepeatsName,
                        &FDataVertexMetadata::EmptyBasic,&local_1b8);
    local_1b4 = 0.2;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_90,&TriggerRepeatVertexNames::InputPeriodName,
                        &FDataVertexMetadata::EmptyBasic,&local_1b4);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_c8,&TriggerRepeatVertexNames::InputStopName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_100,&TriggerRepeatVertexNames::InputStartName,
                        &FDataVertexMetadata::EmptyBasic);
    local_1b0._padding_ = 0;
    local_1b0._padding_ = 0;
    local_1b0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.SubInterfaces.ArrayNum = 0;
    local_1b0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_170,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1b0,
               &local_1b0.SubInterfaces);
    if ((local_170.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,4,&(local_170.Vertices)->AllocatorInstance,(local_170.Vertices)->ArrayNum,
                 &(local_170.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_170,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_170,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_170,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_170,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_170);
    FVertexInterface::FVertexInterface(&::Interface,&local_1b0,&local_190);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1b0.SubInterfaces.AllocatorInstance.Data,
               local_1b0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1b0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1b0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1b0._padding_,(int)local_1b0._padding_);
    if ((FInputDataVertex *)local_1b0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1b0._padding_);
    }
    if ((0xc < (byte)local_100._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
    if ((0xc < (byte)local_c8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
    if ((0xc < (byte)local_90._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
    if ((0xc < (byte)local_58._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
               local_190.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_190._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_190._padding_);
    }
    atexit(`Metasound::FTriggerRepeatOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b28b950

void __thiscall
Metasound::FTriggerRepeatOperator::Reset(FTriggerRepeatOperator *this,FResetParams *param_1)

{
  this->bEnabled = false;
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOut).field_0x8);
  (this->SampleCounter).NumSamples = 0;
  this->CurrentRepeats = 0;
  return;
}

