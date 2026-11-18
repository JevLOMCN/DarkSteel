// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 15

// TBoundAnalyzerOutput<int> @ 14b3395d0

/* WARNING: Removing unreachable block (ram,0x00014b3397c4) */

TBoundAnalyzerOutput<int> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<int>::TBoundAnalyzerOutput<int>
          (TBoundAnalyzerOutput<int> *this,FAnalyzerAddress *param_1,FOperatorSettings *param_2,
          TDataReadReference<int> *param_3)

{
  TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_> *pTVar1;
  longlong lVar2;
  FTransmissionAddress FVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  FDataTransmissionCenter *this_00;
  FName *pFVar9;
  TBoundAnalyzerOutput<int> *pTVar10;
  undefined8 *puVar11;
  FTransmissionAddress FVar12;
  FTransmissionAddress local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  longlong local_88;
  FTransmissionAddress local_80;
  FName *local_78;
  FString local_70;
  FString local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  this->_padding_ = (longlong)&___7__TBoundAnalyzerOutput_H_Frontend_Metasound__6B_;
  (this->Address)._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  (this->Address).InstanceID = param_1->InstanceID;
  uVar5 = (param_1->NodeID).B;
  uVar6 = (param_1->NodeID).C;
  uVar7 = (param_1->NodeID).D;
  (this->Address).NodeID.A = (param_1->NodeID).A;
  (this->Address).NodeID.B = uVar5;
  (this->Address).NodeID.C = uVar6;
  (this->Address).NodeID.D = uVar7;
  (this->Address).OutputName = param_1->OutputName;
  (this->Address).DataType = param_1->DataType;
  (this->Address).AnalyzerName = param_1->AnalyzerName;
  uVar5 = (param_1->AnalyzerInstanceID).B;
  uVar6 = (param_1->AnalyzerInstanceID).C;
  uVar7 = (param_1->AnalyzerInstanceID).D;
  (this->Address).AnalyzerInstanceID.A = (param_1->AnalyzerInstanceID).A;
  (this->Address).AnalyzerInstanceID.B = uVar5;
  (this->Address).AnalyzerInstanceID.C = uVar6;
  (this->Address).AnalyzerInstanceID.D = uVar7;
  (this->Address).AnalyzerMemberName = param_1->AnalyzerMemberName;
  (this->Address).UseDataTransmissionCenter = param_1->UseDataTransmissionCenter;
  *(undefined ***)&this->DataRef = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->DataRef).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->DataRef).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FVar12 = (FTransmissionAddress)0x0;
  pTVar1 = &this->Sender;
  *(undefined ***)&this->DataRef = &___7__TDataReadReference_H_Metasound__6B_;
  pTVar1->Ptr = (TSender<int> *)0x0;
  this_00 = FDataTransmissionCenter::Get();
  local_50._0_4_ = param_2->SampleRate;
  local_50._4_4_ = param_2->TargetBlockRate;
  uStack_48._0_4_ = param_2->ActualBlockRate;
  uStack_48._4_4_ = param_2->NumFramesPerBlock;
  local_40 = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,&local_res8,(FSenderInitParams *)param_1);
  FVar3 = local_res8;
  if (local_res8 != (FTransmissionAddress)0x0) {
    pFVar9 = GetMetasoundDataTypeName<int>();
    local_res10 = *pFVar9;
    if (*(FName *)((longlong)FVar3 + 8) != local_res10) {
      local_78 = &local_res10;
      local_80 = FVar3;
      bVar8 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<int>_>'::__l2::
              <lambda_1>::operator()(&local_80);
      if (!bVar8) {
        pFVar9 = GetMetasoundDataTypeName<int>();
        local_res18 = *pFVar9;
        ::FName::ToString(&local_res18,&local_60);
        local_res20 = *(FName *)((longlong)local_res8 + 8);
        ::FName::ToString(&local_res20,&local_70);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TBoundAnalyzerOutput<int> *)(*pcVar4)();
          return pTVar10;
        }
      }
    }
    FVar12 = local_res8;
    local_res8 = (FTransmissionAddress)0x0;
  }
  if (pTVar1 == (TUniquePtr<Metasound::TSender<int>,TDefaultDelete<Metasound::TSender<int>_>_> *)
                &local_88) {
    if (FVar12 == (FTransmissionAddress)0x0) goto LAB_14b3397fd;
    puVar11 = *(undefined8 **)FVar12;
  }
  else {
    FVar3 = (FTransmissionAddress)pTVar1->Ptr;
    pTVar1->Ptr = (TSender<int> *)FVar12;
    if (FVar3 == (FTransmissionAddress)0x0) goto LAB_14b3397fd;
    puVar11 = *(undefined8 **)FVar3;
    FVar12 = FVar3;
  }
  (*(code *)*puVar11)(FVar12);
LAB_14b3397fd:
  if ((pTVar1->Ptr == (TSender<int> *)0x0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3169504840166408284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\Analysis\\MetasoundFrontendVertexAnalyzer.h"
                         ,0x5c,"Sender"), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TBoundAnalyzerOutput<int> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TBoundAnalyzerOutput<FString> @ 14b339860

/* WARNING: Removing unreachable block (ram,0x00014b339a54) */

TBoundAnalyzerOutput<FString> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<FString>::TBoundAnalyzerOutput<FString>
          (TBoundAnalyzerOutput<FString> *this,FAnalyzerAddress *param_1,FOperatorSettings *param_2,
          TDataReadReference<FString> *param_3)

{
  TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_> *pTVar1;
  longlong lVar2;
  FTransmissionAddress FVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  FDataTransmissionCenter *this_00;
  FName *pFVar9;
  TBoundAnalyzerOutput<FString> *pTVar10;
  undefined8 *puVar11;
  FTransmissionAddress FVar12;
  FTransmissionAddress local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  longlong local_88;
  FTransmissionAddress local_80;
  FName *local_78;
  FString local_70;
  FString local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  this->_padding_ = (longlong)&___7__TBoundAnalyzerOutput_VFString___Frontend_Metasound__6B_;
  (this->Address)._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  (this->Address).InstanceID = param_1->InstanceID;
  uVar5 = (param_1->NodeID).B;
  uVar6 = (param_1->NodeID).C;
  uVar7 = (param_1->NodeID).D;
  (this->Address).NodeID.A = (param_1->NodeID).A;
  (this->Address).NodeID.B = uVar5;
  (this->Address).NodeID.C = uVar6;
  (this->Address).NodeID.D = uVar7;
  (this->Address).OutputName = param_1->OutputName;
  (this->Address).DataType = param_1->DataType;
  (this->Address).AnalyzerName = param_1->AnalyzerName;
  uVar5 = (param_1->AnalyzerInstanceID).B;
  uVar6 = (param_1->AnalyzerInstanceID).C;
  uVar7 = (param_1->AnalyzerInstanceID).D;
  (this->Address).AnalyzerInstanceID.A = (param_1->AnalyzerInstanceID).A;
  (this->Address).AnalyzerInstanceID.B = uVar5;
  (this->Address).AnalyzerInstanceID.C = uVar6;
  (this->Address).AnalyzerInstanceID.D = uVar7;
  (this->Address).AnalyzerMemberName = param_1->AnalyzerMemberName;
  (this->Address).UseDataTransmissionCenter = param_1->UseDataTransmissionCenter;
  *(undefined ***)&this->DataRef = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->DataRef).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->DataRef).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FVar12 = (FTransmissionAddress)0x0;
  pTVar1 = &this->Sender;
  *(undefined ***)&this->DataRef = &___7__TDataReadReference_VFString___Metasound__6B_;
  pTVar1->Ptr = (TSender<FString> *)0x0;
  this_00 = FDataTransmissionCenter::Get();
  local_50._0_4_ = param_2->SampleRate;
  local_50._4_4_ = param_2->TargetBlockRate;
  uStack_48._0_4_ = param_2->ActualBlockRate;
  uStack_48._4_4_ = param_2->NumFramesPerBlock;
  local_40 = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,&local_res8,(FSenderInitParams *)param_1);
  FVar3 = local_res8;
  if (local_res8 != (FTransmissionAddress)0x0) {
    pFVar9 = GetMetasoundDataTypeName<FString>();
    local_res10 = *pFVar9;
    if (*(FName *)((longlong)FVar3 + 8) != local_res10) {
      local_78 = &local_res10;
      local_80 = FVar3;
      bVar8 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<FString>_>'::__l2::
              <lambda_1>::operator()(&local_80);
      if (!bVar8) {
        pFVar9 = GetMetasoundDataTypeName<FString>();
        local_res18 = *pFVar9;
        ::FName::ToString(&local_res18,&local_60);
        local_res20 = *(FName *)((longlong)local_res8 + 8);
        ::FName::ToString(&local_res20,&local_70);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TBoundAnalyzerOutput<FString> *)(*pcVar4)();
          return pTVar10;
        }
      }
    }
    FVar12 = local_res8;
    local_res8 = (FTransmissionAddress)0x0;
  }
  if (pTVar1 == (TUniquePtr<Metasound::TSender<FString>,TDefaultDelete<Metasound::TSender<FString>_>_>
                 *)&local_88) {
    if (FVar12 == (FTransmissionAddress)0x0) goto LAB_14b339a8d;
    puVar11 = *(undefined8 **)FVar12;
  }
  else {
    FVar3 = (FTransmissionAddress)pTVar1->Ptr;
    pTVar1->Ptr = (TSender<FString> *)FVar12;
    if (FVar3 == (FTransmissionAddress)0x0) goto LAB_14b339a8d;
    puVar11 = *(undefined8 **)FVar3;
    FVar12 = FVar3;
  }
  (*(code *)*puVar11)(FVar12);
LAB_14b339a8d:
  if ((pTVar1->Ptr == (TSender<FString> *)0x0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3169504840166408284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\Analysis\\MetasoundFrontendVertexAnalyzer.h"
                         ,0x5c,"Sender"), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TBoundAnalyzerOutput<FString> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TBoundAnalyzerOutput<bool> @ 14b339af0

/* WARNING: Removing unreachable block (ram,0x00014b339ce4) */

TBoundAnalyzerOutput<bool> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<bool>::TBoundAnalyzerOutput<bool>
          (TBoundAnalyzerOutput<bool> *this,FAnalyzerAddress *param_1,FOperatorSettings *param_2,
          TDataReadReference<bool> *param_3)

{
  TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_> *pTVar1;
  longlong lVar2;
  FTransmissionAddress FVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  FDataTransmissionCenter *this_00;
  FName *pFVar9;
  TBoundAnalyzerOutput<bool> *pTVar10;
  undefined8 *puVar11;
  FTransmissionAddress FVar12;
  FTransmissionAddress local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  longlong local_88;
  FTransmissionAddress local_80;
  FName *local_78;
  FString local_70;
  FString local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  this->_padding_ = (longlong)&___7__TBoundAnalyzerOutput__N_Frontend_Metasound__6B_;
  (this->Address)._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  (this->Address).InstanceID = param_1->InstanceID;
  uVar5 = (param_1->NodeID).B;
  uVar6 = (param_1->NodeID).C;
  uVar7 = (param_1->NodeID).D;
  (this->Address).NodeID.A = (param_1->NodeID).A;
  (this->Address).NodeID.B = uVar5;
  (this->Address).NodeID.C = uVar6;
  (this->Address).NodeID.D = uVar7;
  (this->Address).OutputName = param_1->OutputName;
  (this->Address).DataType = param_1->DataType;
  (this->Address).AnalyzerName = param_1->AnalyzerName;
  uVar5 = (param_1->AnalyzerInstanceID).B;
  uVar6 = (param_1->AnalyzerInstanceID).C;
  uVar7 = (param_1->AnalyzerInstanceID).D;
  (this->Address).AnalyzerInstanceID.A = (param_1->AnalyzerInstanceID).A;
  (this->Address).AnalyzerInstanceID.B = uVar5;
  (this->Address).AnalyzerInstanceID.C = uVar6;
  (this->Address).AnalyzerInstanceID.D = uVar7;
  (this->Address).AnalyzerMemberName = param_1->AnalyzerMemberName;
  (this->Address).UseDataTransmissionCenter = param_1->UseDataTransmissionCenter;
  *(undefined ***)&this->DataRef = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->DataRef).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->DataRef).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FVar12 = (FTransmissionAddress)0x0;
  pTVar1 = &this->Sender;
  *(undefined ***)&this->DataRef = &___7__TDataReadReference__N_Metasound__6B_;
  pTVar1->Ptr = (TSender<bool> *)0x0;
  this_00 = FDataTransmissionCenter::Get();
  local_50._0_4_ = param_2->SampleRate;
  local_50._4_4_ = param_2->TargetBlockRate;
  uStack_48._0_4_ = param_2->ActualBlockRate;
  uStack_48._4_4_ = param_2->NumFramesPerBlock;
  local_40 = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,&local_res8,(FSenderInitParams *)param_1);
  FVar3 = local_res8;
  if (local_res8 != (FTransmissionAddress)0x0) {
    pFVar9 = GetMetasoundDataTypeName<bool>();
    local_res10 = *pFVar9;
    if (*(FName *)((longlong)FVar3 + 8) != local_res10) {
      local_78 = &local_res10;
      local_80 = FVar3;
      bVar8 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<bool>_>'::__l2::
              <lambda_1>::operator()(&local_80);
      if (!bVar8) {
        pFVar9 = GetMetasoundDataTypeName<bool>();
        local_res18 = *pFVar9;
        ::FName::ToString(&local_res18,&local_60);
        local_res20 = *(FName *)((longlong)local_res8 + 8);
        ::FName::ToString(&local_res20,&local_70);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TBoundAnalyzerOutput<bool> *)(*pcVar4)();
          return pTVar10;
        }
      }
    }
    FVar12 = local_res8;
    local_res8 = (FTransmissionAddress)0x0;
  }
  if (pTVar1 == (TUniquePtr<Metasound::TSender<bool>,TDefaultDelete<Metasound::TSender<bool>_>_> *)
                &local_88) {
    if (FVar12 == (FTransmissionAddress)0x0) goto LAB_14b339d1d;
    puVar11 = *(undefined8 **)FVar12;
  }
  else {
    FVar3 = (FTransmissionAddress)pTVar1->Ptr;
    pTVar1->Ptr = (TSender<bool> *)FVar12;
    if (FVar3 == (FTransmissionAddress)0x0) goto LAB_14b339d1d;
    puVar11 = *(undefined8 **)FVar3;
    FVar12 = FVar3;
  }
  (*(code *)*puVar11)(FVar12);
LAB_14b339d1d:
  if ((pTVar1->Ptr == (TSender<bool> *)0x0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3169504840166408284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\Analysis\\MetasoundFrontendVertexAnalyzer.h"
                         ,0x5c,"Sender"), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TBoundAnalyzerOutput<bool> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// ~TBoundAnalyzerOutput<int> @ 14b34df70

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<int>::~TBoundAnalyzerOutput<int>
          (TBoundAnalyzerOutput<int> *this)

{
  TSender<int> *pTVar1;
  FDataTransmissionCenter *this_00;
  
  this->_padding_ = (longlong)&___7__TBoundAnalyzerOutput_H_Frontend_Metasound__6B_;
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<int> *)0x0) {
    (this->Sender).Ptr = (TSender<int> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    this_00 = FDataTransmissionCenter::Get();
    FDataTransmissionCenter::UnregisterDataChannel(this_00,(FTransmissionAddress *)&this->Address);
  }
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<int> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DataRef).field_0x10);
  return;
}

// ~TBoundAnalyzerOutput<FString> @ 14b34dfe0

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<FString>::~TBoundAnalyzerOutput<FString>
          (TBoundAnalyzerOutput<FString> *this)

{
  TSender<FString> *pTVar1;
  FDataTransmissionCenter *this_00;
  
  this->_padding_ = (longlong)&___7__TBoundAnalyzerOutput_VFString___Frontend_Metasound__6B_;
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<FString> *)0x0) {
    (this->Sender).Ptr = (TSender<FString> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    this_00 = FDataTransmissionCenter::Get();
    FDataTransmissionCenter::UnregisterDataChannel(this_00,(FTransmissionAddress *)&this->Address);
  }
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<FString> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DataRef).field_0x10);
  return;
}

// ~TBoundAnalyzerOutput<bool> @ 14b34e050

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<bool>::~TBoundAnalyzerOutput<bool>
          (TBoundAnalyzerOutput<bool> *this)

{
  TSender<bool> *pTVar1;
  FDataTransmissionCenter *this_00;
  
  this->_padding_ = (longlong)&___7__TBoundAnalyzerOutput__N_Frontend_Metasound__6B_;
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<bool> *)0x0) {
    (this->Sender).Ptr = (TSender<bool> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    this_00 = FDataTransmissionCenter::Get();
    FDataTransmissionCenter::UnregisterDataChannel(this_00,(FTransmissionAddress *)&this->Address);
  }
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<bool> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DataRef).field_0x10);
  return;
}

// CreateOutputData @ 14b388b40

TSharedPtr<Metasound::IOutputStorage,1> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<int>::CreateOutputData
          (TBoundAnalyzerOutput<int> *this,
          TSharedPtr<Metasound::IOutputStorage,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<Metasound::IOutputStorage,1> *pTVar5;
  
  paVar1 = *(atomic<int> **)&(this->DataRef).field_0x8;
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IOutputStorage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOutputStorage_H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7__TOutputStorage_H_Metasound__6B_;
    pTVar4[1].SharedReferenceCount = *paVar1;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<Metasound::IOutputStorage,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (IOutputStorage *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// CreateOutputData @ 14b388c10

TSharedPtr<Metasound::IOutputStorage,1> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<FString>::CreateOutputData
          (TBoundAnalyzerOutput<FString> *this,
          TSharedPtr<Metasound::IOutputStorage,1> *__return_storage_ptr__)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<Metasound::IOutputStorage,1> *pTVar5;
  
  pFVar1 = *(FString **)&(this->DataRef).field_0x8;
  pTVar4 = ::operator_new(0x28);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IOutputStorage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOutputStorage_VFString___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7__TOutputStorage_VFString___Metasound__6B_;
    ::FString::FString((FString *)&pTVar4[1].SharedReferenceCount,pFVar1);
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<Metasound::IOutputStorage,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (IOutputStorage *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// CreateOutputData @ 14b388ce0

TSharedPtr<Metasound::IOutputStorage,1> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<bool>::CreateOutputData
          (TBoundAnalyzerOutput<bool> *this,
          TSharedPtr<Metasound::IOutputStorage,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<Metasound::IOutputStorage,1> *pTVar5;
  
  puVar1 = *(undefined1 **)&(this->DataRef).field_0x8;
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IOutputStorage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOutputStorage__N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7__TOutputStorage__N_Metasound__6B_;
    *(undefined1 *)&pTVar4[1].SharedReferenceCount = *puVar1;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<Metasound::IOutputStorage,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (IOutputStorage *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetDataReference @ 14b3ae9e0

FAnyDataReference * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<int>::GetDataReference
          (TBoundAnalyzerOutput<int> *this,FAnyDataReference *__return_storage_ptr__)

{
  FAnyDataReference::FAnyDataReference<int>(__return_storage_ptr__,&this->DataRef);
  return __return_storage_ptr__;
}

// GetDataReference @ 14b3aea10

FAnyDataReference * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<FString>::GetDataReference
          (TBoundAnalyzerOutput<FString> *this,FAnyDataReference *__return_storage_ptr__)

{
  FAnyDataReference::FAnyDataReference<FString>(__return_storage_ptr__,&this->DataRef);
  return __return_storage_ptr__;
}

// GetDataReference @ 14b3aea40

FAnyDataReference * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<bool>::GetDataReference
          (TBoundAnalyzerOutput<bool> *this,FAnyDataReference *__return_storage_ptr__)

{
  FAnyDataReference::FAnyDataReference<bool>(__return_storage_ptr__,&this->DataRef);
  return __return_storage_ptr__;
}

// PushData @ 14b3ce7c0

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<int>::PushData(TBoundAnalyzerOutput<int> *this)

{
  TSender<int> *this_00;
  
  this_00 = (this->Sender).Ptr;
  if (this_00 != (TSender<int> *)0x0) {
    TSender<int>::Push(this_00,*(int **)&(this->DataRef).field_0x8);
    return;
  }
  return;
}

// PushData @ 14b3ce7e0

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<FString>::PushData(TBoundAnalyzerOutput<FString> *this)

{
  int iVar1;
  int iVar2;
  TSender<FString> *this_00;
  uint uVar3;
  
  this_00 = (this->Sender).Ptr;
  if (this_00 != (TSender<FString> *)0x0) {
    iVar1 = (this_00->SenderBuffer).ReadCounter.Counter;
    iVar2 = (this_00->SenderBuffer).WriteCounter.Counter;
    uVar3 = iVar2 - iVar1;
    if (iVar2 < iVar1) {
      uVar3 = uVar3 + (this_00->SenderBuffer).Capacity;
    }
    if (~uVar3 + (this_00->SenderBuffer).Capacity != 0) {
      uVar3 = (this_00->SenderBuffer).WriteCounter.Counter;
      ::FString::operator=
                ((FString *)
                 ((this_00->SenderBuffer).InternalBuffer.AllocatorInstance.Data +
                 (ulonglong)uVar3 * 0x10),*(FString **)&(this->DataRef).field_0x8);
      LOCK();
      (this_00->SenderBuffer).WriteCounter.Counter = (uVar3 + 1) % (this_00->SenderBuffer).Capacity;
      UNLOCK();
    }
    iVar1 = (this_00->SenderBuffer).ReadCounter.Counter;
    iVar2 = (this_00->SenderBuffer).WriteCounter.Counter;
    uVar3 = iVar2 - iVar1;
    if (iVar2 < iVar1) {
      uVar3 = uVar3 + (this_00->SenderBuffer).Capacity;
    }
    if (this_00->NumElementsToDelayBy <= uVar3) {
      TSender<FString>::PushToDataChannel(this_00);
      return;
    }
  }
  return;
}

// PushData @ 14b3ce880

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<bool>::PushData(TBoundAnalyzerOutput<bool> *this)

{
  TSender<bool> *this_00;
  
  this_00 = (this->Sender).Ptr;
  if (this_00 != (TSender<bool> *)0x0) {
    TSender<bool>::Push(this_00,*(bool **)&(this->DataRef).field_0x8);
    return;
  }
  return;
}

