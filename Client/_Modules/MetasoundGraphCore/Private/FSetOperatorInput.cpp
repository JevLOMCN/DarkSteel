// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FSetOperatorInput @ 14ad3c820

FSetOperatorInput * __thiscall
Metasound::DynamicGraph::FSetOperatorInput::FSetOperatorInput
          (FSetOperatorInput *this,ulong64 param_1,FName *param_2,FAnyDataReference *param_3)

{
  IDataReference *pIVar1;
  
  this->ToOpID = param_1;
  this->_padding_ = (longlong)&___7FSetOperatorInput_DynamicGraph_Metasound__6B_;
  this->ToVert = *param_2;
  FAnyDataReference::FAnyDataReference(&this->DataRef,param_3->AccessType,(param_3->DataRefPtr).Ptr)
  ;
  (this->DataRef)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  pIVar1 = (param_3->DataRefPtr).Ptr;
  if (pIVar1 != (IDataReference *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  return this;
}

// Transform @ 14ad682a0

/* WARNING: Enum "Type": Some values do not have unique names */

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FSetOperatorInput::Transform
          (FSetOperatorInput *this,FDynamicGraphOperatorData *param_1)

{
  FName *this_00;
  bool bVar1;
  FOperatorInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FString local_38;
  FString local_28;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicOperator::SetOperatorInput");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId618,"Metasound::DynamicOperator::SetOperatorInput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x26a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId618);
  }
  pFVar2 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                   *)&param_1->_padding_,this->ToOpID);
  if (pFVar2 == (FOperatorInfo *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&this->ToVert,&local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar3 = (pFVar2->VertexData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
    this_00 = &this->ToVert;
    pFVar4 = pFVar3 + (longlong)(pFVar2->VertexData).InputVertexInterfaceData.Bindings.ArrayNum *
                      0x58;
    if (pFVar3 != pFVar4) {
      do {
        if (*(FName *)(pFVar3 + 8) == *this_00) {
          pFVar4 = pFVar3 + 0x38;
          if (pFVar3[0x50] == (FScriptContainerElement)0x0) {
            pFVar4 = (FScriptContainerElement *)0x0;
          }
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            PropagateBindUpdate(this->ToOpID,this_00,&this->DataRef,param_1);
            UpdateOutputVertexData(param_1);
            goto LAB_14ad68492;
          }
          break;
        }
        pFVar3 = pFVar3 + 0x58;
      } while (pFVar3 != pFVar4);
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(this_00,&local_28);
      ::FName::ToString(this_00,&local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14ad68492:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

