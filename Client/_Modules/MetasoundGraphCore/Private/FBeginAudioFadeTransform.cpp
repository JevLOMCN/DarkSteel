// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FBeginAudioFadeTransform @ 14ad37720

FBeginAudioFadeTransform * __thiscall
Metasound::DynamicGraph::FBeginAudioFadeTransform::FBeginAudioFadeTransform
          (FBeginAudioFadeTransform *this,ulong64 param_1,EAudioFadeType param_2,
          TArrayView<FName_const_,int> *param_3,TArrayView<FName_const_,int> *param_4)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FName *pFVar4;
  
  iVar3 = param_3->ArrayNum;
  pFVar4 = param_3->DataPtr;
  pTVar1 = &this->InputVerticesToFade;
  this->_padding_ = (longlong)&___7FBeginAudioFadeTransform_DynamicGraph_Metasound__6B_;
  this->OperatorIDToFade = param_1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->InitFadeState = (param_2 == FadeIn) + FadingOut;
  piVar2 = &(this->InputVerticesToFade).ArrayMax;
  (this->InputVerticesToFade).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar1 = &this->OutputVerticesToFade;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_4->ArrayNum;
  pFVar4 = param_4->DataPtr;
  piVar2 = &(this->OutputVerticesToFade).ArrayMax;
  (this->OutputVerticesToFade).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  return this;
}

// Transform @ 14ad66f20

/* WARNING: Enum "Type": Some values do not have unique names */

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FBeginAudioFadeTransform::Transform
          (FBeginAudioFadeTransform *this,FDynamicGraphOperatorData *param_1)

{
  int iVar1;
  int iVar2;
  FName *pFVar3;
  FName *pFVar4;
  IOperator *pIVar5;
  bool bVar6;
  code *pcVar7;
  bool bVar8;
  EDynamicOperatorTransformQueueAction EVar9;
  FOperatorInfo *pFVar10;
  FAudioFadeOperatorWrapper *this_00;
  FAudioFadeOperatorWrapper *pFVar11;
  bool bVar12;
  IOperator *local_res8;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TArrayView<FName_const_,int> local_48;
  TArrayView<FName_const_,int> local_38;
  
  bVar6 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar6) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicOperator::BeginAudioFadeTransform");
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId683,"Metasound::DynamicOperator::BeginAudioFadeTransform",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x2ab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId683);
  }
  pFVar10 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
            ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                    *)&param_1->_padding_,this->OperatorIDToFade);
  if (pFVar10 == (FOperatorInfo *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
  }
  else {
    this_00 = ::operator_new(0x98);
    pFVar11 = (FAudioFadeOperatorWrapper *)0x0;
    if (this_00 != (FAudioFadeOperatorWrapper *)0x0) {
      pFVar3 = (FName *)(this->OutputVerticesToFade).AllocatorInstance.Data;
      iVar1 = (this->OutputVerticesToFade).ArrayNum;
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        EVar9 = (*pcVar7)();
        return EVar9;
      }
      pFVar4 = (FName *)(this->InputVerticesToFade).AllocatorInstance.Data;
      iVar2 = (this->InputVerticesToFade).ArrayNum;
      if ((iVar2 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        EVar9 = (*pcVar7)();
        return EVar9;
      }
      local_res8 = (pFVar10->Operator).Ptr;
      local_48._12_4_ = uStack_5c;
      local_48.ArrayNum = iVar1;
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = iVar2;
      (pFVar10->Operator).Ptr = (IOperator *)0x0;
      local_48.DataPtr = pFVar3;
      local_38.DataPtr = pFVar4;
      pFVar11 = FAudioFadeOperatorWrapper::FAudioFadeOperatorWrapper
                          (this_00,this->InitFadeState,(FOperatorSettings *)param_1,
                           &(pFVar10->VertexData).InputVertexInterfaceData,(IOperator *)&local_res8,
                           &local_38,&local_48);
    }
    pIVar5 = (pFVar10->Operator).Ptr;
    (pFVar10->Operator).Ptr = (IOperator *)pFVar11;
    if (pIVar5 != (IOperator *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
    RebindWrappedOperator(&this->OperatorIDToFade,pFVar10,param_1);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

