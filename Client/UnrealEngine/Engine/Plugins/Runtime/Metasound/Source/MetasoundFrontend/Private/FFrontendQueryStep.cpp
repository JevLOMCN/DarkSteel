// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 23

// FFrontendQueryStep @ 14ae58300

/* WARNING: Removing unreachable block (ram,0x00014ae583b5) */

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TFunction<Metasound::FFrontendQueryKey___cdecl(Metasound::FFrontendQueryEntry_const_&)>
          *param_1)

{
  FMapFunctionFrontendQueryStep *pFVar1;
  FMapFunctionFrontendQueryStep *pFVar2;
  FMapFunctionFrontendQueryStep *pFVar3;
  FMapFunctionFrontendQueryStep *pFVar4;
  TFunction<Metasound::FFrontendQueryKey___cdecl(Metasound::FFrontendQueryEntry_const_&)> local_38;
  
  pFVar4 = (FMapFunctionFrontendQueryStep *)0x0;
  pFVar1 = ::operator_new(0x40);
  pFVar2 = pFVar4;
  if (pFVar1 != (FMapFunctionFrontendQueryStep *)0x0) {
    local_38._0_8_ = *(undefined8 *)param_1;
    local_38._40_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_38._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_38._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_38._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pFVar2 = FrontendQueryPrivate::FMapFunctionFrontendQueryStep::FMapFunctionFrontendQueryStep
                       (pFVar1,&local_38);
  }
  pFVar3 = ::operator_new(0x10);
  pFVar1 = pFVar4;
  if (pFVar3 != (FMapFunctionFrontendQueryStep *)0x0) {
    pFVar3->_padding_ = (longlong)pFVar2;
    pFVar3->_padding_ = (longlong)&___7FMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    pFVar1 = pFVar3;
    pFVar2 = pFVar4;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)pFVar1;
  if (pFVar2 != (FMapFunctionFrontendQueryStep *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  return this;
}

// FFrontendQueryStep @ 14ae58400

/* WARNING: Removing unreachable block (ram,0x00014ae584b5) */

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TFunction<TArray<Metasound::FFrontendQueryKey,TSizedDefaultAllocator<32>_>___cdecl(Metasound::FFrontendQueryEntry_const_&)>
          *param_1)

{
  FMultiMapFunctionFrontendQueryStep *pFVar1;
  FMultiMapFunctionFrontendQueryStep *pFVar2;
  FMultiMapFunctionFrontendQueryStep *pFVar3;
  FMultiMapFunctionFrontendQueryStep *pFVar4;
  TFunction<TArray<Metasound::FFrontendQueryKey,TSizedDefaultAllocator<32>_>___cdecl(Metasound::FFrontendQueryEntry_const_&)>
  local_38;
  
  pFVar4 = (FMultiMapFunctionFrontendQueryStep *)0x0;
  pFVar1 = ::operator_new(0x40);
  pFVar2 = pFVar4;
  if (pFVar1 != (FMultiMapFunctionFrontendQueryStep *)0x0) {
    local_38._0_8_ = *(undefined8 *)param_1;
    local_38._40_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_38._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_38._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_38._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pFVar2 = FrontendQueryPrivate::FMultiMapFunctionFrontendQueryStep::
             FMultiMapFunctionFrontendQueryStep(pFVar1,&local_38);
  }
  pFVar3 = ::operator_new(0x10);
  pFVar1 = pFVar4;
  if (pFVar3 != (FMultiMapFunctionFrontendQueryStep *)0x0) {
    pFVar3->_padding_ = (longlong)pFVar2;
    pFVar3->_padding_ = (longlong)&___7FMultiMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    pFVar1 = pFVar3;
    pFVar2 = pFVar4;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)pFVar1;
  if (pFVar2 != (FMultiMapFunctionFrontendQueryStep *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  return this;
}

// FFrontendQueryStep @ 14ae58500

/* WARNING: Removing unreachable block (ram,0x00014ae585b5) */

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,TFunction<int___cdecl(void)> *param_1)

{
  FLimitFunctionFrontendQueryStep *pFVar1;
  FLimitFunctionFrontendQueryStep *pFVar2;
  FLimitFunctionFrontendQueryStep *pFVar3;
  FLimitFunctionFrontendQueryStep *pFVar4;
  TFunction<int___cdecl(void)> local_38;
  
  pFVar4 = (FLimitFunctionFrontendQueryStep *)0x0;
  pFVar1 = ::operator_new(0x40);
  pFVar2 = pFVar4;
  if (pFVar1 != (FLimitFunctionFrontendQueryStep *)0x0) {
    local_38._0_8_ = *(undefined8 *)param_1;
    local_38._40_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_38._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_38._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_38._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pFVar2 = FrontendQueryPrivate::FLimitFunctionFrontendQueryStep::FLimitFunctionFrontendQueryStep
                       (pFVar1,&local_38);
  }
  pFVar3 = ::operator_new(0x10);
  pFVar1 = pFVar4;
  if (pFVar3 != (FLimitFunctionFrontendQueryStep *)0x0) {
    pFVar3->_padding_ = (longlong)pFVar2;
    pFVar3->_padding_ = (longlong)&___7FLimitStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    pFVar1 = pFVar3;
    pFVar2 = pFVar4;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)pFVar1;
  if (pFVar2 != (FLimitFunctionFrontendQueryStep *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  return this;
}

// FFrontendQueryStep @ 14ae58600

/* WARNING: Removing unreachable block (ram,0x00014ae586b5) */

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TFunction<float___cdecl(Metasound::FFrontendQueryEntry_const_&)> *param_1)

{
  FScoreFunctionFrontendQueryStep *pFVar1;
  FScoreFunctionFrontendQueryStep *pFVar2;
  FScoreFunctionFrontendQueryStep *pFVar3;
  FScoreFunctionFrontendQueryStep *pFVar4;
  TFunction<float___cdecl(Metasound::FFrontendQueryEntry_const_&)> local_38;
  
  pFVar4 = (FScoreFunctionFrontendQueryStep *)0x0;
  pFVar1 = ::operator_new(0x40);
  pFVar2 = pFVar4;
  if (pFVar1 != (FScoreFunctionFrontendQueryStep *)0x0) {
    local_38._0_8_ = *(undefined8 *)param_1;
    local_38._40_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_38._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_38._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_38._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pFVar2 = FrontendQueryPrivate::FScoreFunctionFrontendQueryStep::FScoreFunctionFrontendQueryStep
                       (pFVar1,&local_38);
  }
  pFVar3 = ::operator_new(0x10);
  pFVar1 = pFVar4;
  if (pFVar3 != (FScoreFunctionFrontendQueryStep *)0x0) {
    pFVar3->_padding_ = (longlong)pFVar2;
    pFVar3->_padding_ = (longlong)&___7FScoreStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    pFVar1 = pFVar3;
    pFVar2 = pFVar4;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)pFVar1;
  if (pFVar2 != (FScoreFunctionFrontendQueryStep *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  return this;
}

// FFrontendQueryStep @ 14ae58700

/* WARNING: Removing unreachable block (ram,0x00014ae587b5) */

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TFunction<void___cdecl(TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>_&)>
          *param_1)

{
  FTransformFunctionFrontendQueryStep *pFVar1;
  FTransformFunctionFrontendQueryStep *pFVar2;
  FTransformFunctionFrontendQueryStep *pFVar3;
  FTransformFunctionFrontendQueryStep *pFVar4;
  TFunction<void___cdecl(TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>_&)>
  local_38;
  
  pFVar4 = (FTransformFunctionFrontendQueryStep *)0x0;
  pFVar1 = ::operator_new(0x40);
  pFVar2 = pFVar4;
  if (pFVar1 != (FTransformFunctionFrontendQueryStep *)0x0) {
    local_38._0_8_ = *(undefined8 *)param_1;
    local_38._40_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_38._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_38._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_38._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pFVar2 = FrontendQueryPrivate::FTransformFunctionFrontendQueryStep::
             FTransformFunctionFrontendQueryStep(pFVar1,&local_38);
  }
  pFVar3 = ::operator_new(0x10);
  pFVar1 = pFVar4;
  if (pFVar3 != (FTransformFunctionFrontendQueryStep *)0x0) {
    pFVar3->_padding_ = (longlong)pFVar2;
    pFVar3->_padding_ = (longlong)&___7FTransformStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    pFVar1 = pFVar3;
    pFVar2 = pFVar4;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)pFVar1;
  if (pFVar2 != (FTransformFunctionFrontendQueryStep *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  return this;
}

// FFrontendQueryStep @ 14ae58800

/* WARNING: Removing unreachable block (ram,0x00014ae588b5) */

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TFunction<void___cdecl(Metasound::FFrontendQueryKey_const_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&)>
          *param_1)

{
  FReduceFunctionFrontendQueryStep *pFVar1;
  FReduceFunctionFrontendQueryStep *pFVar2;
  FReduceFunctionFrontendQueryStep *pFVar3;
  FReduceFunctionFrontendQueryStep *pFVar4;
  TFunction<void___cdecl(Metasound::FFrontendQueryKey_const_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&)>
  local_38;
  
  pFVar4 = (FReduceFunctionFrontendQueryStep *)0x0;
  pFVar1 = ::operator_new(0x40);
  pFVar2 = pFVar4;
  if (pFVar1 != (FReduceFunctionFrontendQueryStep *)0x0) {
    local_38._0_8_ = *(undefined8 *)param_1;
    local_38._40_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_38._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_38._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_38._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pFVar2 = FrontendQueryPrivate::FReduceFunctionFrontendQueryStep::
             FReduceFunctionFrontendQueryStep(pFVar1,&local_38);
  }
  pFVar3 = ::operator_new(0x10);
  pFVar1 = pFVar4;
  if (pFVar3 != (FReduceFunctionFrontendQueryStep *)0x0) {
    pFVar3->_padding_ = (longlong)pFVar2;
    pFVar3->_padding_ = (longlong)&___7FReduceStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    pFVar1 = pFVar3;
    pFVar2 = pFVar4;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)pFVar1;
  if (pFVar2 != (FReduceFunctionFrontendQueryStep *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  return this;
}

// FFrontendQueryStep @ 14ae58900

/* WARNING: Removing unreachable block (ram,0x00014ae589b5) */

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TFunction<bool___cdecl(Metasound::FFrontendQueryEntry_const_&,Metasound::FFrontendQueryEntry_const_&)>
          *param_1)

{
  FSortFunctionFrontendQueryStep *pFVar1;
  FSortFunctionFrontendQueryStep *pFVar2;
  FSortFunctionFrontendQueryStep *pFVar3;
  FSortFunctionFrontendQueryStep *pFVar4;
  TFunction<bool___cdecl(Metasound::FFrontendQueryEntry_const_&,Metasound::FFrontendQueryEntry_const_&)>
  local_38;
  
  pFVar4 = (FSortFunctionFrontendQueryStep *)0x0;
  pFVar1 = ::operator_new(0x40);
  pFVar2 = pFVar4;
  if (pFVar1 != (FSortFunctionFrontendQueryStep *)0x0) {
    local_38._0_8_ = *(undefined8 *)param_1;
    local_38._40_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_38._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_38._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_38._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pFVar2 = FrontendQueryPrivate::FSortFunctionFrontendQueryStep::FSortFunctionFrontendQueryStep
                       (pFVar1,&local_38);
  }
  pFVar3 = ::operator_new(0x10);
  pFVar1 = pFVar4;
  if (pFVar3 != (FSortFunctionFrontendQueryStep *)0x0) {
    pFVar3->_padding_ = (longlong)pFVar2;
    pFVar3->_padding_ = (longlong)&___7FSortStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    pFVar1 = pFVar3;
    pFVar2 = pFVar4;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)pFVar1;
  if (pFVar2 != (FSortFunctionFrontendQueryStep *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  return this;
}

// FFrontendQueryStep @ 14ae58a00

/* WARNING: Removing unreachable block (ram,0x00014ae58ab5) */

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TFunction<bool___cdecl(Metasound::FFrontendQueryEntry_const_&)> *param_1)

{
  FFilterFunctionFrontendQueryStep *pFVar1;
  FFilterFunctionFrontendQueryStep *pFVar2;
  FFilterFunctionFrontendQueryStep *pFVar3;
  FFilterFunctionFrontendQueryStep *pFVar4;
  TFunction<bool___cdecl(Metasound::FFrontendQueryEntry_const_&)> local_38;
  
  pFVar4 = (FFilterFunctionFrontendQueryStep *)0x0;
  pFVar1 = ::operator_new(0x40);
  pFVar2 = pFVar4;
  if (pFVar1 != (FFilterFunctionFrontendQueryStep *)0x0) {
    local_38._0_8_ = *(undefined8 *)param_1;
    local_38._40_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_38._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_38._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_38._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pFVar2 = FrontendQueryPrivate::FFilterFunctionFrontendQueryStep::
             FFilterFunctionFrontendQueryStep(pFVar1,&local_38);
  }
  pFVar3 = ::operator_new(0x10);
  pFVar1 = pFVar4;
  if (pFVar3 != (FFilterFunctionFrontendQueryStep *)0x0) {
    pFVar3->_padding_ = (longlong)pFVar2;
    pFVar3->_padding_ = (longlong)&___7FFilterStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    pFVar1 = pFVar3;
    pFVar2 = pFVar4;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)pFVar1;
  if (pFVar2 != (FFilterFunctionFrontendQueryStep *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  return this;
}

// FFrontendQueryStep @ 14ae58b00

/* WARNING: Removing unreachable block (ram,0x00014ae58bb0) */

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TUniqueFunction<void___cdecl(TArray<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,TSizedDefaultAllocator<32>_>_&)>
          *param_1)

{
  undefined8 uVar1;
  IStepExecuter IVar2;
  IStepExecuter *pIVar3;
  IStepExecuter IVar4;
  
  IVar4 = (IStepExecuter)0x0;
  IVar2 = (IStepExecuter)::operator_new(0x40);
  if (IVar2 == (IStepExecuter)0x0) {
    IVar2 = (IStepExecuter)0x0;
  }
  else {
    *(undefined ***)IVar2 =
         &___7FStreamFunctionFrontendQueryStep_FrontendQueryPrivate_Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 0x10) = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)IVar2 + 0x38) = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    uVar1 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)((longlong)IVar2 + 0x20) = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)((longlong)IVar2 + 0x28) = uVar1;
    *(undefined8 *)((longlong)IVar2 + 0x30) = *(undefined8 *)&param_1->field_0x20;
    if (*(longlong *)((longlong)IVar2 + 0x10) != 0) {
      *(undefined8 *)param_1 = 0;
    }
  }
  pIVar3 = ::operator_new(0x10);
  if (pIVar3 != (IStepExecuter *)0x0) {
    pIVar3[1] = IVar2;
    *pIVar3 = (IStepExecuter)&___7FStreamStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    IVar2 = IVar4;
    IVar4 = (IStepExecuter)pIVar3;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)IVar4;
  if (IVar2 != (IStepExecuter)0x0) {
    (*(code *)**(undefined8 **)IVar2)(IVar2,1);
  }
  return this;
}

// FFrontendQueryStep @ 14ae58bf0

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TUniquePtr<Metasound::IFrontendQueryFilterStep,TDefaultDelete<Metasound::IFrontendQueryFilterStep>_>
          *param_1)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IStepExecuter *)0x0) {
    *pIVar1 = (IStepExecuter)
              &
              ___7__TStepExecuterBase_VIFrontendQueryFilterStep_Metasound___FrontendQueryPrivate_Metasound__6B_
    ;
    pIVar1[1] = (IStepExecuter)param_1->Ptr;
    param_1->Ptr = (IFrontendQueryFilterStep *)0x0;
    *pIVar1 = (IStepExecuter)&___7FFilterStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    (this->StepExecuter).Ptr = pIVar1;
    return this;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)0x0;
  return this;
}

// FFrontendQueryStep @ 14ae58c60

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TUniquePtr<Metasound::IFrontendQueryLimitStep,TDefaultDelete<Metasound::IFrontendQueryLimitStep>_>
          *param_1)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IStepExecuter *)0x0) {
    *pIVar1 = (IStepExecuter)
              &
              ___7__TStepExecuterBase_VIFrontendQueryLimitStep_Metasound___FrontendQueryPrivate_Metasound__6B_
    ;
    pIVar1[1] = (IStepExecuter)param_1->Ptr;
    param_1->Ptr = (IFrontendQueryLimitStep *)0x0;
    *pIVar1 = (IStepExecuter)&___7FLimitStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    (this->StepExecuter).Ptr = pIVar1;
    return this;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)0x0;
  return this;
}

// FFrontendQueryStep @ 14ae58cd0

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TUniquePtr<Metasound::IFrontendQueryMapStep,TDefaultDelete<Metasound::IFrontendQueryMapStep>_>
          *param_1)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IStepExecuter *)0x0) {
    *pIVar1 = (IStepExecuter)
              &
              ___7__TStepExecuterBase_VIFrontendQueryMapStep_Metasound___FrontendQueryPrivate_Metasound__6B_
    ;
    pIVar1[1] = (IStepExecuter)param_1->Ptr;
    param_1->Ptr = (IFrontendQueryMapStep *)0x0;
    *pIVar1 = (IStepExecuter)&___7FMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    (this->StepExecuter).Ptr = pIVar1;
    return this;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)0x0;
  return this;
}

// FFrontendQueryStep @ 14ae58d40

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TUniquePtr<Metasound::IFrontendQueryMultiMapStep,TDefaultDelete<Metasound::IFrontendQueryMultiMapStep>_>
          *param_1)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IStepExecuter *)0x0) {
    *pIVar1 = (IStepExecuter)
              &
              ___7__TStepExecuterBase_VIFrontendQueryMultiMapStep_Metasound___FrontendQueryPrivate_Metasound__6B_
    ;
    pIVar1[1] = (IStepExecuter)param_1->Ptr;
    param_1->Ptr = (IFrontendQueryMultiMapStep *)0x0;
    *pIVar1 = (IStepExecuter)&___7FMultiMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    (this->StepExecuter).Ptr = pIVar1;
    return this;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)0x0;
  return this;
}

// FFrontendQueryStep @ 14ae58db0

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TUniquePtr<Metasound::IFrontendQueryReduceStep,TDefaultDelete<Metasound::IFrontendQueryReduceStep>_>
          *param_1)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IStepExecuter *)0x0) {
    *pIVar1 = (IStepExecuter)
              &
              ___7__TStepExecuterBase_VIFrontendQueryReduceStep_Metasound___FrontendQueryPrivate_Metasound__6B_
    ;
    pIVar1[1] = (IStepExecuter)param_1->Ptr;
    param_1->Ptr = (IFrontendQueryReduceStep *)0x0;
    *pIVar1 = (IStepExecuter)&___7FReduceStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    (this->StepExecuter).Ptr = pIVar1;
    return this;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)0x0;
  return this;
}

// FFrontendQueryStep @ 14ae58e20

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TUniquePtr<Metasound::IFrontendQueryScoreStep,TDefaultDelete<Metasound::IFrontendQueryScoreStep>_>
          *param_1)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IStepExecuter *)0x0) {
    *pIVar1 = (IStepExecuter)
              &
              ___7__TStepExecuterBase_VIFrontendQueryScoreStep_Metasound___FrontendQueryPrivate_Metasound__6B_
    ;
    pIVar1[1] = (IStepExecuter)param_1->Ptr;
    param_1->Ptr = (IFrontendQueryScoreStep *)0x0;
    *pIVar1 = (IStepExecuter)&___7FScoreStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    (this->StepExecuter).Ptr = pIVar1;
    return this;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)0x0;
  return this;
}

// FFrontendQueryStep @ 14ae58e90

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TUniquePtr<Metasound::IFrontendQuerySortStep,TDefaultDelete<Metasound::IFrontendQuerySortStep>_>
          *param_1)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IStepExecuter *)0x0) {
    *pIVar1 = (IStepExecuter)
              &
              ___7__TStepExecuterBase_VIFrontendQuerySortStep_Metasound___FrontendQueryPrivate_Metasound__6B_
    ;
    pIVar1[1] = (IStepExecuter)param_1->Ptr;
    param_1->Ptr = (IFrontendQuerySortStep *)0x0;
    *pIVar1 = (IStepExecuter)&___7FSortStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    (this->StepExecuter).Ptr = pIVar1;
    return this;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)0x0;
  return this;
}

// FFrontendQueryStep @ 14ae58f00

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TUniquePtr<Metasound::IFrontendQueryStreamStep,TDefaultDelete<Metasound::IFrontendQueryStreamStep>_>
          *param_1)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IStepExecuter *)0x0) {
    *pIVar1 = (IStepExecuter)
              &
              ___7__TStepExecuterBase_VIFrontendQueryStreamStep_Metasound___FrontendQueryPrivate_Metasound__6B_
    ;
    pIVar1[1] = (IStepExecuter)param_1->Ptr;
    param_1->Ptr = (IFrontendQueryStreamStep *)0x0;
    *pIVar1 = (IStepExecuter)&___7FStreamStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    (this->StepExecuter).Ptr = pIVar1;
    return this;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)0x0;
  return this;
}

// FFrontendQueryStep @ 14ae58f70

FFrontendQueryStep * __thiscall
Metasound::FFrontendQueryStep::FFrontendQueryStep
          (FFrontendQueryStep *this,
          TUniquePtr<Metasound::IFrontendQueryTransformStep,TDefaultDelete<Metasound::IFrontendQueryTransformStep>_>
          *param_1)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IStepExecuter *)0x0) {
    *pIVar1 = (IStepExecuter)
              &
              ___7__TStepExecuterBase_VIFrontendQueryTransformStep_Metasound___FrontendQueryPrivate_Metasound__6B_
    ;
    pIVar1[1] = (IStepExecuter)param_1->Ptr;
    param_1->Ptr = (IFrontendQueryTransformStep *)0x0;
    *pIVar1 = (IStepExecuter)&___7FTransformStepExecuter_FrontendQueryPrivate_Metasound__6B_;
    (this->StepExecuter).Ptr = pIVar1;
    return this;
  }
  (this->StepExecuter).Ptr = (IStepExecuter *)0x0;
  return this;
}

// CanProcessRemovals @ 14ae65da0

bool __thiscall Metasound::FFrontendQueryStep::CanProcessRemovals(FFrontendQueryStep *this)

{
  IStepExecuter *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->StepExecuter).Ptr;
  if (pIVar1 != (IStepExecuter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae65dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x20))();
    return (bool)uVar2;
  }
  return true;
}

// CanProduceEntries @ 14ae65e60

bool __thiscall Metasound::FFrontendQueryStep::CanProduceEntries(FFrontendQueryStep *this)

{
  IStepExecuter *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->StepExecuter).Ptr;
  if (pIVar1 != (IStepExecuter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae65e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x28))();
    return (bool)uVar2;
  }
  return true;
}

// Execute @ 14ae6eb40

void __thiscall
Metasound::FFrontendQueryStep::Execute
          (FFrontendQueryStep *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = (this->StepExecuter).Ptr;
  if (pIVar1 != (IStepExecuter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae6eb4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// IsDependentOnPartitionComposition @ 14ae7a470

bool __thiscall
Metasound::FFrontendQueryStep::IsDependentOnPartitionComposition(FFrontendQueryStep *this)

{
  IStepExecuter *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->StepExecuter).Ptr;
  if (pIVar1 != (IStepExecuter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae7a47b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x18))();
    return (bool)uVar2;
  }
  return false;
}

// Merge @ 14ae7d2d0

void __thiscall
Metasound::FFrontendQueryStep::Merge
          (FFrontendQueryStep *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = (this->StepExecuter).Ptr;
  if (pIVar1 != (IStepExecuter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae7d2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 8))();
    return;
  }
  return;
}

