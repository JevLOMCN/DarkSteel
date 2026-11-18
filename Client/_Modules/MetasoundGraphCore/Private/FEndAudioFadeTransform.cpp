// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FEndAudioFadeTransform @ 14ad39500

FEndAudioFadeTransform * __thiscall
Metasound::DynamicGraph::FEndAudioFadeTransform::FEndAudioFadeTransform
          (FEndAudioFadeTransform *this,ulong64 param_1)

{
  this->OperatorIDToFade = param_1;
  this->_padding_ = (longlong)&___7FEndAudioFadeTransform_DynamicGraph_Metasound__6B_;
  return this;
}

// Transform @ 14ad67600

/* WARNING: Enum "Type": Some values do not have unique names */

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FEndAudioFadeTransform::Transform
          (FEndAudioFadeTransform *this,FDynamicGraphOperatorData *param_1)

{
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *pTVar1;
  FAudioFadeOperatorWrapper *this_00;
  IOperator *pIVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  EDynamicOperatorTransformQueueAction EVar6;
  FOperatorInfo *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  bool bVar9;
  undefined8 *local_res8;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicOperator::EndAudioFadeTransform");
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId708,"Metasound::DynamicOperator::EndAudioFadeTransform",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x2c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId708);
  }
  pFVar7 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                   *)&param_1->_padding_,this->OperatorIDToFade);
  if (pFVar7 == (FOperatorInfo *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
  }
  else {
    pTVar1 = &pFVar7->Operator;
    this_00 = (FAudioFadeOperatorWrapper *)pTVar1->Ptr;
    if ((this_00 == (FAudioFadeOperatorWrapper *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Wrapper",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
                           ,0x2c9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    TVar8 = FAudioFadeOperatorWrapper::ReleaseOperator(this_00);
    if ((IOperator *)pTVar1 != TVar8.Ptr) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (IOperator *)*TVar8.Ptr;
      *TVar8.Ptr = (IOperator)0x0;
      if (pIVar2 != (IOperator *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    RebindWrappedOperator(&this->OperatorIDToFade,pFVar7,param_1);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

