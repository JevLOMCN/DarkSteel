// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// BindInputs @ 14b1b2620

void __thiscall
Metasound::FSwitchAndRampOperator::BindInputs
          (FSwitchAndRampOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SwitchAndRampVertexNames::InputTriggerName);
  local_res18 = &this->TriggerIn;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&SwitchAndRampVertexNames::InputAudioName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->AudioIn;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&SwitchAndRampVertexNames::InputSmoothTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SmoothTime;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1b2770

void __thiscall
Metasound::FSwitchAndRampOperator::BindOutputs
          (FSwitchAndRampOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&SwitchAndRampVertexNames::OutputAudioName);
  local_res18[0] = &this->AudioOut;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// operator() @ 14b1d0a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Metasound::FSwitchAndRampOperator::Execute'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  
  lVar12 = (longlong)param_1;
  plVar1 = *(longlong **)(*(longlong *)this + 0x30);
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar2 = *plVar1;
  plVar1 = *(longlong **)(*(longlong *)this + 0x70);
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  fVar4 = __real_3f800000;
  lVar7 = *(longlong *)this;
  lVar3 = *plVar1;
  iVar5 = (*(int *)(lVar7 + 0x94) - *(int *)(lVar7 + 0x98)) + param_1;
  iVar8 = param_2;
  if (iVar5 < param_2) {
    iVar8 = iVar5;
  }
  lVar10 = (longlong)iVar8;
  if (lVar12 < lVar10) {
    if (3 < lVar10 - lVar12) {
      pfVar6 = (float *)(lVar3 + (lVar12 + 1) * 4);
      lVar11 = lVar2 - lVar3;
      lVar9 = ((lVar10 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar9 * 4;
      do {
        fVar13 = 0.0;
        iVar5 = *(int *)(lVar7 + 0x98);
        if (iVar5 < *(int *)(lVar7 + 0x94)) {
          fVar13 = (fVar4 - (float)iVar5 / (float)*(int *)(lVar7 + 0x94)) * *(float *)(lVar7 + 0x90)
          ;
          *(int *)(lVar7 + 0x98) = iVar5 + 1;
        }
        lVar7 = *(longlong *)this;
        fVar14 = 0.0;
        pfVar6[-1] = fVar13 + *(float *)(lVar11 + -4 + (longlong)pfVar6);
        iVar5 = *(int *)(lVar7 + 0x98);
        if (iVar5 < *(int *)(lVar7 + 0x94)) {
          fVar14 = (fVar4 - (float)iVar5 / (float)*(int *)(lVar7 + 0x94)) * *(float *)(lVar7 + 0x90)
          ;
          *(int *)(lVar7 + 0x98) = iVar5 + 1;
        }
        lVar7 = *(longlong *)this;
        fVar13 = 0.0;
        *pfVar6 = fVar14 + *(float *)(lVar11 + (longlong)pfVar6);
        iVar5 = *(int *)(lVar7 + 0x98);
        if (iVar5 < *(int *)(lVar7 + 0x94)) {
          fVar13 = (fVar4 - (float)iVar5 / (float)*(int *)(lVar7 + 0x94)) * *(float *)(lVar7 + 0x90)
          ;
          *(int *)(lVar7 + 0x98) = iVar5 + 1;
        }
        lVar7 = *(longlong *)this;
        pfVar6[1] = fVar13 + *(float *)(lVar11 + 4 + (longlong)pfVar6);
        fVar13 = 0.0;
        iVar5 = *(int *)(lVar7 + 0x98);
        if (iVar5 < *(int *)(lVar7 + 0x94)) {
          fVar13 = (fVar4 - (float)iVar5 / (float)*(int *)(lVar7 + 0x94)) * *(float *)(lVar7 + 0x90)
          ;
          *(int *)(lVar7 + 0x98) = iVar5 + 1;
          lVar7 = *(longlong *)this;
        }
        pfVar6[2] = fVar13 + *(float *)(lVar11 + 8 + (longlong)pfVar6);
        pfVar6 = pfVar6 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      if (lVar10 <= lVar12) goto LAB_14b1d0cbc;
    }
    pfVar6 = (float *)(lVar3 + lVar12 * 4);
    lVar10 = lVar10 - lVar12;
    do {
      fVar13 = 0.0;
      iVar5 = *(int *)(lVar7 + 0x98);
      if (iVar5 < *(int *)(lVar7 + 0x94)) {
        fVar13 = (fVar4 - (float)iVar5 / (float)*(int *)(lVar7 + 0x94)) * *(float *)(lVar7 + 0x90);
        *(int *)(lVar7 + 0x98) = iVar5 + 1;
        lVar7 = *(longlong *)this;
      }
      *pfVar6 = fVar13 + *(float *)((longlong)pfVar6 + (lVar2 - lVar3));
      pfVar6 = pfVar6 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
LAB_14b1d0cbc:
  if (iVar8 < param_1) {
    iVar8 = param_1;
  }
  if (iVar8 < param_2) {
    memcpy((void *)(lVar3 + (longlong)iVar8 * 4),(void *)(lVar2 + (longlong)iVar8 * 4),
           (longlong)(param_2 - iVar8) << 2);
  }
  *(undefined4 *)(*(longlong *)this + 0x8c) = *(undefined4 *)(lVar3 + -4 + (longlong)param_2 * 4);
  return;
}

// operator() @ 14b1d3490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FSwitchAndRampOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FVertexInterface *pFVar3;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_48;
  FText local_30;
  FText local_20;
  
  ::FName::FName(local_res18,L"SwitchAndRamp");
  FText::FText(&local_20);
  FText::FText(&local_30);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_48,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_48.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_48.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_48.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_48.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_48.Variant;
  pIVar1 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar1 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pIVar1 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar1 != local_30.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_30.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  local_48.Namespace = (FName)Metasound::NodeCategories::Filters.TextData.Reference;
  if (Metasound::NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Filters.TextData.Reference + 8))
              (Metasound::NodeCategories::Filters.TextData.Reference,&local_res10);
  }
  local_48.Name.ComparisonIndex.Value = Metasound::NodeCategories::Filters.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_48,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_48.Namespace != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.Namespace + 0x10))();
  }
  TVar2.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar3 = Metasound::FSwitchAndRampOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar3);
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b1daca0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FSwitchAndRampOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  INode *pIVar3;
  FName local_res8;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SwitchAndRampVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_88,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SwitchAndRampVertexNames::InputAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_68,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SwitchAndRampVertexNames::InputSmoothTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_48,&local_res8,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar3 = ::operator_new(0xa0);
  if (pIVar3 != (INode *)0x0) {
    *pIVar3 = (INode)&___7FSwitchAndRampOperator_Metasound__6B_;
    pIVar3[1] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar3[2] = (INode)local_88._8_8_;
    pIVar3[3] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar3[1] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar3[5] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar3[6] = (INode)local_68._8_8_;
    pIVar3[7] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar3[5] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar3[9] = (INode)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    pIVar3[10] = (INode)local_48._8_8_;
    pIVar3[0xb] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar3[9] = (INode)&___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)(pIVar3 + 0xd),NewObject,pFVar2);
    pIVar3[0xd] = (INode)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    iVar1 = pFVar2->SampleRate;
    *(undefined8 *)&pIVar3[0x11].field_0x4 = 0;
    *(undefined8 *)&pIVar3[0x12].field_0x4 = 0;
    *(float *)(pIVar3 + 0x11) = (float)iVar1;
  }
  param_1->Node = pIVar3;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b1dfc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FSwitchAndRampOperator::Execute(FSwitchAndRampOperator *this)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  longlong *plVar8;
  double *pdVar9;
  float fVar10;
  longlong lVar11;
  float fVar12;
  FSwitchAndRampOperator *local_res8;
  FSwitchAndRampOperator *local_res10;
  
  puVar6 = *(undefined8 **)&(this->TriggerIn).field_0x8;
  iVar3 = *(int *)((longlong)puVar6 + 0x1c);
  iVar4 = *(int *)((longlong)puVar6 + 0x14);
  local_res8 = this;
  local_res10 = this;
  if (0 < iVar3) {
    piVar7 = (int *)*puVar6;
    if (0 < *piVar7) {
      `Metasound::FSwitchAndRampOperator::Execute'::__l2::<lambda_1>::operator()
                (&local_res8,0,*piVar7);
    }
    fVar10 = __real_3f800000;
    lVar1 = (longlong)iVar3 + -1;
    if (0 < lVar1) {
      lVar11 = 0;
      do {
        iVar3 = piVar7[lVar11];
        iVar5 = piVar7[lVar11 + 1];
        if (iVar3 < iVar5) {
          fVar12 = this->MostRecentOutputValue;
          plVar8 = *(longlong **)&(this->AudioIn).field_0x8;
          if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar8[2] != (int)plVar8[1])) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          pdVar9 = *(double **)&(this->SmoothTime).field_0x8;
          this->DiscontinuityAmount = fVar12 - *(float *)(*plVar8 + (longlong)iVar3 * 4);
          dVar2 = *pdVar9;
          this->RampSampleIndex = 0;
          fVar12 = (float)dVar2 * this->SampleRate;
          if (fVar12 <= fVar10) {
            fVar12 = fVar10;
          }
          this->NumRampSamples = (int)fVar12;
          `Metasound::FSwitchAndRampOperator::Execute'::__l2::<lambda_1>::operator()
                    (&local_res10,iVar3,iVar5);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar1);
    }
    iVar3 = piVar7[lVar1];
    if (iVar3 < iVar4) {
      fVar12 = this->MostRecentOutputValue;
      plVar8 = *(longlong **)&(this->AudioIn).field_0x8;
      if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar8[2] != (int)plVar8[1])) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      pdVar9 = *(double **)&(this->SmoothTime).field_0x8;
      this->DiscontinuityAmount = fVar12 - *(float *)(*plVar8 + (longlong)iVar3 * 4);
      dVar2 = *pdVar9;
      this->RampSampleIndex = 0;
      fVar12 = (float)dVar2 * this->SampleRate;
      if (fVar12 <= fVar10) {
        fVar12 = fVar10;
      }
      this->NumRampSamples = (int)fVar12;
      `Metasound::FSwitchAndRampOperator::Execute'::__l2::<lambda_1>::operator()
                (&local_res10,iVar3,iVar4);
    }
    return;
  }
  `Metasound::FSwitchAndRampOperator::Execute'::__l2::<lambda_1>::operator()(&local_res8,0,iVar4);
  return;
}

// GetNodeInfo @ 14b1e3f80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FSwitchAndRampOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSwitchAndRampOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSwitchAndRampOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b1e7970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FSwitchAndRampOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_1a8 [32];
  float local_178 [2];
  FInputVertexInterface local_170;
  FOutputVertexInterface local_150;
  FInputVertexInterfaceDeclarationBuilder local_130;
  FOutputVertexInterfaceDeclarationBuilder local_108;
  TOutputDataVertex<Metasound::FAudioBuffer> local_e0;
  TInputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<Metasound::FAudioBuffer> local_88;
  TInputDataVertex<Metasound::FTime> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_e0,&SwitchAndRampVertexNames::OutputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_150);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_108,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_150,
               &local_150.SubInterfaces);
    if ((local_108.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
                 &(local_108.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_108,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_108);
    local_178[0] = 0.01;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_50,&SwitchAndRampVertexNames::InputSmoothTimeName,
                        &FDataVertexMetadata::EmptyBasic,local_178);
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_88,&SwitchAndRampVertexNames::InputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&SwitchAndRampVertexNames::InputTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    local_170._padding_ = 0;
    local_170._padding_ = 0;
    local_170.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.SubInterfaces.ArrayNum = 0;
    local_170.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_130,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_170,
               &local_170.SubInterfaces);
    if ((local_130.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,3,&(local_130.Vertices)->AllocatorInstance,(local_130.Vertices)->ArrayNum,
                 &(local_130.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_130,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_130,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_130,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_130);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetVertexInterface(void)'
                ::__l2::Interface,&local_170,&local_150);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
               local_170.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
    if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_170._padding_);
    }
    if ((0xc < (byte)local_c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c0._48_1_])(&local_c0.field_0x20);
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
               local_150.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_150._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_150._padding_);
    }
    atexit(`Metasound::FSwitchAndRampOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b1ea180

void __thiscall
Metasound::FSwitchAndRampOperator::Reset(FSwitchAndRampOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)&(this->AudioOut).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  this->MostRecentOutputValue = 0.0;
  this->DiscontinuityAmount = 0.0;
  this->NumRampSamples = 0;
  this->RampSampleIndex = 0;
  return;
}

