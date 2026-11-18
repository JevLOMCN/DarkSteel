// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// FTriggerCoinOperator @ 14b233ec0

FTriggerCoinOperator * __thiscall
Metasound::FTriggerCoinOperator::FTriggerCoinOperator
          (FTriggerCoinOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<int> *param_4,
          TDataReadReference<float> *param_5)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  
  this->_padding_ = (longlong)&___7FTriggerCoinOperator_Metasound__6B_;
  *(undefined ***)&this->TriggerInput = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->TriggerInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerResetInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerResetInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->TriggerResetInput =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->SeedInput = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->SeedInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar2 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->SeedInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SeedInput = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->ProbabilityInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ProbabilityInput).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar2 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->ProbabilityInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->ProbabilityInput = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerTrueOutput,NewObject,param_1);
  *(undefined ***)&this->TriggerTrueOutput =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerFalseOutput,NewObject,param_1);
  *(undefined ***)&this->TriggerFalseOutput =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  puVar3 = *(uint **)&(this->SeedInput).field_0x8;
  uVar1 = *puVar3;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = uVar1 == 0xffffffff;
  if (*puVar3 == 0xffffffff) {
    this->bIsDefaultSeeded = true;
    this->bIsRandomStreamInitialized = true;
    QueryPerformanceCounter((LARGE_INTEGER *)&param_4);
  }
  else {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    param_4._0_4_ = *puVar3;
  }
  (this->RandomStream).InitialSeed = (uint)param_4;
  (this->RandomStream).Seed = (uint)param_4;
  return this;
}

// operator() @ 14b2426a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FTriggerCoinOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ulonglong *puVar1;
  int *piVar2;
  ITextData *pIVar3;
  TRefCountPtr<ITextData> TVar4;
  int iVar5;
  FText *pFVar6;
  FVertexInterface *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  FName local_98;
  FText local_90;
  FNodeClassName local_80;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_b8;
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName((FName *)&local_90,L"Trigger Filter");
  ::FName::FName(&local_98,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_80,&Metasound::StandardNodes::Namespace,(FName *)&local_90,&local_98);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_80.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_80.Name;
  (__return_storage_ptr__->ClassName).Variant = local_80.Variant;
  pFVar6 = FText::FText(&local_90);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar6);
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  pFVar6 = FText::FText(&local_90);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar4 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_98);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar7 = Metasound::FTriggerCoinOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar7);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar2 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar2);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar8 = pFVar8 + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar4 = Metasound::NodeCategories::Trigger.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Trigger.TextData.Reference;
  if (TVar4.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_98);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Trigger.Flags;
  FText::FText(&local_68);
  FText::FText(&local_58);
  FText::FText(&local_48);
  FText::FText(&local_38);
  FText::FText(&local_28);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  lVar10 = 5;
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,&local_68,5,
             (__return_storage_ptr__->Keywords).ArrayMax);
  puVar9 = local_18;
  do {
    puVar1 = puVar9 + -2;
    puVar9 = puVar9 + -2;
    lVar10 = lVar10 + -1;
    if ((longlong *)*puVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*puVar1 + 0x10))();
    }
  } while (lVar10 != 0);
  return __return_storage_ptr__;
}

// BindInputs @ 14b248d40

void __thiscall
Metasound::FTriggerCoinOperator::BindInputs
          (FTriggerCoinOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerCoinVertexNames::InputTriggerName);
  local_res18 = &this->TriggerInput;
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
  FLazyName::Resolve(&TriggerCoinVertexNames::InputResetName);
  local_res18 = &this->TriggerResetInput;
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
  FLazyName::Resolve(&TriggerCoinVertexNames::InputSeedName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
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
  FLazyName::Resolve(&TriggerCoinVertexNames::InputProbabilityName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->ProbabilityInput;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b249cb0

void __thiscall
Metasound::FTriggerCoinOperator::BindOutputs
          (FTriggerCoinOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&TriggerCoinVertexNames::OutputTrueTriggerName);
  local_res18 = &this->TriggerTrueOutput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&TriggerCoinVertexNames::OutputFalseTriggerName);
  local_res18 = &this->TriggerFalseOutput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// CreateOperator @ 14b26b090

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FTriggerCoinOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FTriggerCoinOperator *this_00;
  FTriggerCoinOperator *pFVar2;
  FName local_res8;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerCoinVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerCoinVertexNames::InputResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerCoinVertexNames::InputSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerCoinVertexNames::InputProbabilityName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0xd8);
  pFVar2 = (FTriggerCoinOperator *)0x0;
  if (this_00 != (FTriggerCoinOperator *)0x0) {
    pFVar2 = FTriggerCoinOperator
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28,
                        (TDataReadReference<Metasound::FTrigger> *)local_48,
                        (TDataReadReference<int> *)local_68,(TDataReadReference<float> *)local_88);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// EvaluateSeedChanges @ 14b26fc30

void __thiscall Metasound::FTriggerCoinOperator::EvaluateSeedChanges(FTriggerCoinOperator *this)

{
  uint uVar1;
  uint *puVar2;
  LARGE_INTEGER local_res8 [4];
  
  puVar2 = *(uint **)&(this->SeedInput).field_0x8;
  uVar1 = *puVar2;
  if (uVar1 == 0xffffffff) {
    if ((this->bIsDefaultSeeded == false) || (this->bIsRandomStreamInitialized == false)) {
      this->bIsDefaultSeeded = true;
      this->bIsRandomStreamInitialized = true;
      QueryPerformanceCounter(local_res8);
      (this->RandomStream).Seed = local_res8[0].s.LowPart;
      (this->RandomStream).InitialSeed = local_res8[0].s.LowPart;
    }
  }
  else if (((this->bIsDefaultSeeded != false) || (this->bIsRandomStreamInitialized == false)) ||
          (uVar1 != (this->RandomStream).InitialSeed)) {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    uVar1 = *puVar2;
    (this->RandomStream).Seed = uVar1;
    (this->RandomStream).InitialSeed = uVar1;
    return;
  }
  return;
}

// Execute @ 14b272d60

void __thiscall Metasound::FTriggerCoinOperator::Execute(FTriggerCoinOperator *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  FTrigger *this_00;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerTrueOutput).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerFalseOutput).field_0x8);
  iVar2 = *(int *)(*(longlong *)&(this->TriggerResetInput).field_0x8 + 0x1c);
  if (0 < iVar2) {
    uVar8 = iVar2 - 1;
    if (0 < (int)uVar8) {
      uVar10 = (ulonglong)uVar8;
      do {
        EvaluateSeedChanges(this);
        (this->RandomStream).Seed = (this->RandomStream).InitialSeed;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    EvaluateSeedChanges(this);
    (this->RandomStream).Seed = (this->RandomStream).InitialSeed;
  }
  fVar13 = __real_00800000;
  fVar7 = __real_3f800000;
  plVar4 = *(longlong **)&(this->TriggerInput).field_0x8;
  iVar2 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar2) {
    lVar1 = (longlong)iVar2 + -1;
    lVar5 = *plVar4;
    if (0 < lVar1) {
      lVar11 = 0;
      do {
        lVar9 = 0xb0;
        iVar3 = *(int *)(lVar5 + lVar11 * 4);
        uVar8 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
        (this->RandomStream).Seed = uVar8;
        pfVar6 = *(float **)&(this->ProbabilityInput).field_0x8;
        fVar12 = ((float)(uVar8 >> 9 | 0x3f800000) - fVar7) + fVar13;
        if (fVar12 < *pfVar6 || fVar12 == *pfVar6) {
          lVar9 = 0x90;
        }
        FTrigger::TriggerFrame(*(FTrigger **)((longlong)&this->_padding_ + lVar9),iVar3);
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar1);
    }
    iVar2 = *(int *)(lVar5 + -4 + (longlong)iVar2 * 4);
    uVar8 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar8;
    pfVar6 = *(float **)&(this->ProbabilityInput).field_0x8;
    fVar13 = ((float)(uVar8 >> 9 | 0x3f800000) - fVar7) + fVar13;
    if (*pfVar6 <= fVar13 && fVar13 != *pfVar6) {
      this_00 = *(FTrigger **)&(this->TriggerFalseOutput).field_0x8;
    }
    else {
      this_00 = *(FTrigger **)&(this->TriggerTrueOutput).field_0x8;
    }
    FTrigger::TriggerFrame(this_00,iVar2);
  }
  return;
}

// GetNodeInfo @ 14b283260

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FTriggerCoinOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FTriggerCoinOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FTriggerCoinOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b2855d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FTriggerCoinOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  FOutputVertexInterface *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_1e8 [32];
  float local_1b8;
  int local_1b4;
  FInputVertexInterface local_1b0;
  FInputVertexInterfaceDeclarationBuilder local_190;
  FOutputVertexInterface local_168;
  TOutputDataVertex<Metasound::FTrigger> local_148;
  TOutputDataVertex<Metasound::FTrigger> local_128;
  TInputDataVertex<Metasound::FTrigger> local_108;
  TInputDataVertex<Metasound::FTrigger> local_d0;
  TInputDataVertex<int> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_148,&TriggerCoinVertexNames::OutputFalseTriggerName,
                        &FDataVertexMetadata::EmptyAdvanced);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_128,&TriggerCoinVertexNames::OutputTrueTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar5 = FOutputVertexInterface::
             FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>_>
                       (&local_168,pTVar4,pTVar3);
    local_1b8 = 1.0;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_60,&TriggerCoinVertexNames::InputProbabilityName,
                        &FDataVertexMetadata::EmptyBasic,&local_1b8);
    local_1b4 = -1;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_98,&TriggerCoinVertexNames::InputSeedName,
                        &FDataVertexMetadata::EmptyAdvanced,&local_1b4);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_d0,&TriggerCoinVertexNames::InputResetName,
                        &FDataVertexMetadata::EmptyAdvanced);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_108,&TriggerCoinVertexNames::InputTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    local_1b0._padding_ = 0;
    local_1b0._padding_ = 0;
    local_1b0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.SubInterfaces.ArrayNum = 0;
    local_1b0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_190,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1b0,
               &local_1b0.SubInterfaces);
    if ((local_190.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,4,&(local_190.Vertices)->AllocatorInstance,(local_190.Vertices)->ArrayNum,
                 &(local_190.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_190,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_190,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_190,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_190,pFVar6);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_190);
    FVertexInterface::FVertexInterface(&::Interface,&local_1b0,pFVar5);
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
    if ((0xc < (byte)local_108._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_108._48_1_])(&local_108.field_0x20);
    if ((0xc < (byte)local_d0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_d0._48_1_])(&local_d0.field_0x20);
    if ((0xc < (byte)local_98._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
    if ((0xc < (byte)local_60._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_168.SubInterfaces.AllocatorInstance.Data,
               local_168.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_168.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_168.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    atexit(`Metasound::FTriggerCoinOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b28b7a0

void __thiscall
Metasound::FTriggerCoinOperator::Reset(FTriggerCoinOperator *this,FResetParams *param_1)

{
  uint *puVar1;
  LARGE_INTEGER local_res8 [4];
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerTrueOutput).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerFalseOutput).field_0x8);
  puVar1 = *(uint **)&(this->SeedInput).field_0x8;
  this->bIsDefaultSeeded = false;
  this->bIsRandomStreamInitialized = false;
  if (*puVar1 == 0xffffffff) {
    this->bIsDefaultSeeded = true;
    this->bIsRandomStreamInitialized = true;
    QueryPerformanceCounter(local_res8);
  }
  else {
    this->bIsRandomStreamInitialized = true;
    local_res8[0]._0_4_ = *puVar1;
  }
  (this->RandomStream).InitialSeed = local_res8[0]._0_4_;
  (this->RandomStream).Seed = local_res8[0]._0_4_;
  return;
}

