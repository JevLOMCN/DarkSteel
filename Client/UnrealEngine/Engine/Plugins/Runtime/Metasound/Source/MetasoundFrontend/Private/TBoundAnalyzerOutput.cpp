// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 15

// TBoundAnalyzerOutput<float> @ 14ad92890

/* WARNING: Removing unreachable block (ram,0x00014ad92a84) */

TBoundAnalyzerOutput<float> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<float>::TBoundAnalyzerOutput<float>
          (TBoundAnalyzerOutput<float> *this,FAnalyzerAddress *param_1,FOperatorSettings *param_2,
          TDataReadReference<float> *param_3)

{
  TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_> *pTVar1;
  longlong lVar2;
  FTransmissionAddress FVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  FDataTransmissionCenter *this_00;
  FName *pFVar9;
  TBoundAnalyzerOutput<float> *pTVar10;
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
  
  this->_padding_ = (longlong)&___7__TBoundAnalyzerOutput_M_Frontend_Metasound__6B_;
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
  *(undefined ***)&this->DataRef = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DataRef).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->DataRef).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FVar12 = (FTransmissionAddress)0x0;
  pTVar1 = &this->Sender;
  *(undefined ***)&this->DataRef = &___7__TDataReadReference_M_Metasound__6B_;
  pTVar1->Ptr = (TSender<float> *)0x0;
  this_00 = FDataTransmissionCenter::Get();
  local_50._0_4_ = param_2->SampleRate;
  local_50._4_4_ = param_2->TargetBlockRate;
  uStack_48._0_4_ = param_2->ActualBlockRate;
  uStack_48._4_4_ = param_2->NumFramesPerBlock;
  local_40 = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,&local_res8,(FSenderInitParams *)param_1);
  FVar3 = local_res8;
  if (local_res8 != (FTransmissionAddress)0x0) {
    pFVar9 = GetMetasoundDataTypeName<float>();
    local_res10 = *pFVar9;
    if (*(FName *)((longlong)FVar3 + 8) != local_res10) {
      local_78 = &local_res10;
      local_80 = FVar3;
      bVar8 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<float>_>'::__l2::
              <lambda_1>::operator()(&local_80);
      if (!bVar8) {
        pFVar9 = GetMetasoundDataTypeName<float>();
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
          pTVar10 = (TBoundAnalyzerOutput<float> *)(*pcVar4)();
          return pTVar10;
        }
      }
    }
    FVar12 = local_res8;
    local_res8 = (FTransmissionAddress)0x0;
  }
  if (pTVar1 == (TUniquePtr<Metasound::TSender<float>,TDefaultDelete<Metasound::TSender<float>_>_> *
                )&local_88) {
    if (FVar12 == (FTransmissionAddress)0x0) goto LAB_14ad92abd;
    puVar11 = *(undefined8 **)FVar12;
  }
  else {
    FVar3 = (FTransmissionAddress)pTVar1->Ptr;
    pTVar1->Ptr = (TSender<float> *)FVar12;
    if (FVar3 == (FTransmissionAddress)0x0) goto LAB_14ad92abd;
    puVar11 = *(undefined8 **)FVar3;
    FVar12 = FVar3;
  }
  (*(code *)*puVar11)(FVar12);
LAB_14ad92abd:
  if ((pTVar1->Ptr == (TSender<float> *)0x0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3169504840166408284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\Analysis\\MetasoundFrontendVertexAnalyzer.h"
                         ,0x5c,"Sender"), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TBoundAnalyzerOutput<float> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TBoundAnalyzerOutput<Metasound::FAudioBuffer> @ 14ad92b20

/* WARNING: Removing unreachable block (ram,0x00014ad92d14) */

TBoundAnalyzerOutput<Metasound::FAudioBuffer> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FAudioBuffer>::
TBoundAnalyzerOutput<Metasound::FAudioBuffer>
          (TBoundAnalyzerOutput<Metasound::FAudioBuffer> *this,FAnalyzerAddress *param_1,
          FOperatorSettings *param_2,TDataReadReference<Metasound::FAudioBuffer> *param_3)

{
  TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
  *pTVar1;
  longlong lVar2;
  FTransmissionAddress FVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  FDataTransmissionCenter *this_00;
  FName *pFVar9;
  TBoundAnalyzerOutput<Metasound::FAudioBuffer> *pTVar10;
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
  
  this->_padding_ =
       (longlong)&___7__TBoundAnalyzerOutput_VFAudioBuffer_Metasound___Frontend_Metasound__6B_;
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
  *(undefined ***)&this->DataRef = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DataRef).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->DataRef).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FVar12 = (FTransmissionAddress)0x0;
  pTVar1 = &this->Sender;
  *(undefined ***)&this->DataRef =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar1->Ptr = (TSender<Metasound::FAudioBuffer> *)0x0;
  this_00 = FDataTransmissionCenter::Get();
  local_50._0_4_ = param_2->SampleRate;
  local_50._4_4_ = param_2->TargetBlockRate;
  uStack_48._0_4_ = param_2->ActualBlockRate;
  uStack_48._4_4_ = param_2->NumFramesPerBlock;
  local_40 = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,&local_res8,(FSenderInitParams *)param_1);
  FVar3 = local_res8;
  if (local_res8 != (FTransmissionAddress)0x0) {
    pFVar9 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
    local_res10 = *pFVar9;
    if (*(FName *)((longlong)FVar3 + 8) != local_res10) {
      local_78 = &local_res10;
      local_80 = FVar3;
      bVar8 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>::operator()
                        (&local_80);
      if (!bVar8) {
        pFVar9 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
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
          pTVar10 = (TBoundAnalyzerOutput<Metasound::FAudioBuffer> *)(*pcVar4)();
          return pTVar10;
        }
      }
    }
    FVar12 = local_res8;
    local_res8 = (FTransmissionAddress)0x0;
  }
  if (pTVar1 == (TUniquePtr<Metasound::TSender<Metasound::FAudioBuffer>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBuffer>_>_>
                 *)&local_88) {
    if (FVar12 == (FTransmissionAddress)0x0) goto LAB_14ad92d4d;
    puVar11 = *(undefined8 **)FVar12;
  }
  else {
    FVar3 = (FTransmissionAddress)pTVar1->Ptr;
    pTVar1->Ptr = (TSender<Metasound::FAudioBuffer> *)FVar12;
    if (FVar3 == (FTransmissionAddress)0x0) goto LAB_14ad92d4d;
    puVar11 = *(undefined8 **)FVar3;
    FVar12 = FVar3;
  }
  (*(code *)*puVar11)(FVar12);
LAB_14ad92d4d:
  if ((pTVar1->Ptr == (TSender<Metasound::FAudioBuffer> *)0x0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3169504840166408284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\Analysis\\MetasoundFrontendVertexAnalyzer.h"
                         ,0x5c,"Sender"), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TBoundAnalyzerOutput<Metasound::FAudioBuffer> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TBoundAnalyzerOutput<Metasound::FTime> @ 14ad92db0

/* WARNING: Removing unreachable block (ram,0x00014ad92fa4) */

TBoundAnalyzerOutput<Metasound::FTime> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FTime>::TBoundAnalyzerOutput<Metasound::FTime>
          (TBoundAnalyzerOutput<Metasound::FTime> *this,FAnalyzerAddress *param_1,
          FOperatorSettings *param_2,TDataReadReference<Metasound::FTime> *param_3)

{
  TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
  *pTVar1;
  longlong lVar2;
  FTransmissionAddress FVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  FDataTransmissionCenter *this_00;
  FName *pFVar9;
  TBoundAnalyzerOutput<Metasound::FTime> *pTVar10;
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
  
  this->_padding_ = (longlong)&___7__TBoundAnalyzerOutput_VFTime_Metasound___Frontend_Metasound__6B_
  ;
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
  *(undefined ***)&this->DataRef = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DataRef).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->DataRef).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FVar12 = (FTransmissionAddress)0x0;
  pTVar1 = &this->Sender;
  *(undefined ***)&this->DataRef = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  pTVar1->Ptr = (TSender<Metasound::FTime> *)0x0;
  this_00 = FDataTransmissionCenter::Get();
  local_50._0_4_ = param_2->SampleRate;
  local_50._4_4_ = param_2->TargetBlockRate;
  uStack_48._0_4_ = param_2->ActualBlockRate;
  uStack_48._4_4_ = param_2->NumFramesPerBlock;
  local_40 = 0;
  FDataTransmissionCenter::RegisterNewSender(this_00,&local_res8,(FSenderInitParams *)param_1);
  FVar3 = local_res8;
  if (local_res8 != (FTransmissionAddress)0x0) {
    pFVar9 = GetMetasoundDataTypeName<Metasound::FTime>();
    local_res10 = *pFVar9;
    if (*(FName *)((longlong)FVar3 + 8) != local_res10) {
      local_78 = &local_res10;
      local_80 = FVar3;
      bVar8 = `Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::FTime>_>'::
              __l2::<lambda_1>::operator()(&local_80);
      if (!bVar8) {
        pFVar9 = GetMetasoundDataTypeName<Metasound::FTime>();
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
          pTVar10 = (TBoundAnalyzerOutput<Metasound::FTime> *)(*pcVar4)();
          return pTVar10;
        }
      }
    }
    FVar12 = local_res8;
    local_res8 = (FTransmissionAddress)0x0;
  }
  if (pTVar1 == (TUniquePtr<Metasound::TSender<Metasound::FTime>,TDefaultDelete<Metasound::TSender<Metasound::FTime>_>_>
                 *)&local_88) {
    if (FVar12 == (FTransmissionAddress)0x0) goto LAB_14ad92fdd;
    puVar11 = *(undefined8 **)FVar12;
  }
  else {
    FVar3 = (FTransmissionAddress)pTVar1->Ptr;
    pTVar1->Ptr = (TSender<Metasound::FTime> *)FVar12;
    if (FVar3 == (FTransmissionAddress)0x0) goto LAB_14ad92fdd;
    puVar11 = *(undefined8 **)FVar3;
    FVar12 = FVar3;
  }
  (*(code *)*puVar11)(FVar12);
LAB_14ad92fdd:
  if ((pTVar1->Ptr == (TSender<Metasound::FTime> *)0x0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3169504840166408284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\Analysis\\MetasoundFrontendVertexAnalyzer.h"
                         ,0x5c,"Sender"), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TBoundAnalyzerOutput<Metasound::FTime> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// ~TBoundAnalyzerOutput<float> @ 14ad9c7d0

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<float>::~TBoundAnalyzerOutput<float>
          (TBoundAnalyzerOutput<float> *this)

{
  TSender<float> *pTVar1;
  FDataTransmissionCenter *this_00;
  
  this->_padding_ = (longlong)&___7__TBoundAnalyzerOutput_M_Frontend_Metasound__6B_;
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<float> *)0x0) {
    (this->Sender).Ptr = (TSender<float> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    this_00 = FDataTransmissionCenter::Get();
    FDataTransmissionCenter::UnregisterDataChannel(this_00,(FTransmissionAddress *)&this->Address);
  }
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<float> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DataRef).field_0x10);
  return;
}

// ~TBoundAnalyzerOutput<Metasound::FAudioBuffer> @ 14ad9c840

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FAudioBuffer>::
~TBoundAnalyzerOutput<Metasound::FAudioBuffer>(TBoundAnalyzerOutput<Metasound::FAudioBuffer> *this)

{
  TSender<Metasound::FAudioBuffer> *pTVar1;
  FDataTransmissionCenter *this_00;
  
  this->_padding_ =
       (longlong)&___7__TBoundAnalyzerOutput_VFAudioBuffer_Metasound___Frontend_Metasound__6B_;
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FAudioBuffer> *)0x0) {
    (this->Sender).Ptr = (TSender<Metasound::FAudioBuffer> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    this_00 = FDataTransmissionCenter::Get();
    FDataTransmissionCenter::UnregisterDataChannel(this_00,(FTransmissionAddress *)&this->Address);
  }
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FAudioBuffer> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DataRef).field_0x10);
  return;
}

// ~TBoundAnalyzerOutput<Metasound::FTime> @ 14ad9c8b0

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FTime>::~TBoundAnalyzerOutput<Metasound::FTime>
          (TBoundAnalyzerOutput<Metasound::FTime> *this)

{
  TSender<Metasound::FTime> *pTVar1;
  FDataTransmissionCenter *this_00;
  
  this->_padding_ = (longlong)&___7__TBoundAnalyzerOutput_VFTime_Metasound___Frontend_Metasound__6B_
  ;
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FTime> *)0x0) {
    (this->Sender).Ptr = (TSender<Metasound::FTime> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    this_00 = FDataTransmissionCenter::Get();
    FDataTransmissionCenter::UnregisterDataChannel(this_00,(FTransmissionAddress *)&this->Address);
  }
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FTime> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DataRef).field_0x10);
  return;
}

// CreateOutputData @ 14adb1310

TSharedPtr<Metasound::IOutputStorage,1> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<float>::CreateOutputData
          (TBoundAnalyzerOutput<float> *this,
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
         ___7__TIntrusiveReferenceController_V__TOutputStorage_M_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7__TOutputStorage_M_Metasound__6B_;
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

// CreateOutputData @ 14adb13e0

TSharedPtr<Metasound::IOutputStorage,1> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FAudioBuffer>::CreateOutputData
          (TBoundAnalyzerOutput<Metasound::FAudioBuffer> *this,
          TSharedPtr<Metasound::IOutputStorage,1> *__return_storage_ptr__)

{
  FAudioBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<Metasound::IOutputStorage,1> *pTVar5;
  
  pFVar1 = *(FAudioBuffer **)&(this->DataRef).field_0x8;
  pTVar4 = ::operator_new(0x30);
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
         ___7__TIntrusiveReferenceController_V__TOutputStorage_VFAudioBuffer_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    TOutputStorage<Metasound::FAudioBuffer>::TOutputStorage<Metasound::FAudioBuffer>
              ((TOutputStorage<Metasound::FAudioBuffer> *)(pTVar4 + 1),pFVar1);
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

// CreateOutputData @ 14adb14b0

TSharedPtr<Metasound::IOutputStorage,1> * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FTime>::CreateOutputData
          (TBoundAnalyzerOutput<Metasound::FTime> *this,
          TSharedPtr<Metasound::IOutputStorage,1> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<Metasound::IOutputStorage,1> *pTVar6;
  
  puVar1 = *(undefined8 **)&(this->DataRef).field_0x8;
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IOutputStorage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    uVar2 = *puVar1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOutputStorage_VFTime_Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)&___7__TOutputStorage_VFTime_Metasound___Metasound__6B_;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar5[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<Metasound::IOutputStorage,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->Object = (IOutputStorage *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// GetDataReference @ 14adbd770

FAnyDataReference * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<float>::GetDataReference
          (TBoundAnalyzerOutput<float> *this,FAnyDataReference *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  __return_storage_ptr__->AccessType = Read;
  __return_storage_ptr__->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)&this->DataRef + 0x18))
            (&this->DataRef,&__return_storage_ptr__->DataRefPtr);
  if ((__return_storage_ptr__->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDataReference @ 14adbd7f0

FAnyDataReference * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FAudioBuffer>::GetDataReference
          (TBoundAnalyzerOutput<Metasound::FAudioBuffer> *this,
          FAnyDataReference *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  __return_storage_ptr__->AccessType = Read;
  __return_storage_ptr__->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)&this->DataRef + 0x18))
            (&this->DataRef,&__return_storage_ptr__->DataRefPtr);
  if ((__return_storage_ptr__->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDataReference @ 14adbd870

FAnyDataReference * __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FTime>::GetDataReference
          (TBoundAnalyzerOutput<Metasound::FTime> *this,FAnyDataReference *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  __return_storage_ptr__->AccessType = Read;
  __return_storage_ptr__->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)&this->DataRef + 0x18))
            (&this->DataRef,&__return_storage_ptr__->DataRefPtr);
  if ((__return_storage_ptr__->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return __return_storage_ptr__;
}

// PushData @ 14adcaac0

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<float>::PushData(TBoundAnalyzerOutput<float> *this)

{
  TSender<float> *this_00;
  
  this_00 = (this->Sender).Ptr;
  if (this_00 != (TSender<float> *)0x0) {
    TSender<float>::Push(this_00,*(float **)&(this->DataRef).field_0x8);
    return;
  }
  return;
}

// PushData @ 14adcaae0

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FAudioBuffer>::PushData
          (TBoundAnalyzerOutput<Metasound::FAudioBuffer> *this)

{
  int iVar1;
  int iVar2;
  TSender<Metasound::FAudioBuffer> *this_00;
  uint uVar3;
  
  this_00 = (this->Sender).Ptr;
  if (this_00 != (TSender<Metasound::FAudioBuffer> *)0x0) {
    iVar1 = (this_00->SenderBuffer).ReadCounter.Counter;
    iVar2 = (this_00->SenderBuffer).WriteCounter.Counter;
    uVar3 = iVar2 - iVar1;
    if (iVar2 < iVar1) {
      uVar3 = uVar3 + (this_00->SenderBuffer).Capacity;
    }
    if (~uVar3 + (this_00->SenderBuffer).Capacity != 0) {
      uVar3 = (this_00->SenderBuffer).WriteCounter.Counter;
      FAudioBuffer::operator=
                ((FAudioBuffer *)
                 ((this_00->SenderBuffer).InternalBuffer.AllocatorInstance.Data +
                 (ulonglong)uVar3 * 0x18),*(FAudioBuffer **)&(this->DataRef).field_0x8);
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
      TSender<Metasound::FAudioBuffer>::PushToDataChannel(this_00);
      return;
    }
  }
  return;
}

// PushData @ 14adcab80

void __thiscall
Metasound::Frontend::TBoundAnalyzerOutput<Metasound::FTime>::PushData
          (TBoundAnalyzerOutput<Metasound::FTime> *this)

{
  TSender<Metasound::FTime> *this_00;
  
  this_00 = (this->Sender).Ptr;
  if (this_00 != (TSender<Metasound::FTime> *)0x0) {
    TSender<Metasound::FTime>::Push(this_00,*(FTime **)&(this->DataRef).field_0x8);
    return;
  }
  return;
}

