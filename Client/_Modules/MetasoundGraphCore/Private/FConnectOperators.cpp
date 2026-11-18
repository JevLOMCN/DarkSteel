// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FConnectOperators @ 14ad37cf0

FConnectOperators * __thiscall
Metasound::DynamicGraph::FConnectOperators::FConnectOperators
          (FConnectOperators *this,ulong64 param_1,FName *param_2,ulong64 param_3,FName *param_4)

{
  this->FromOpID = param_1;
  this->_padding_ = (longlong)&___7FConnectOperators_DynamicGraph_Metasound__6B_;
  this->ToOpID = param_3;
  this->FromVert = *param_2;
  this->ToVert = *param_4;
  return this;
}

// Transform @ 14ad67170

/* WARNING: Enum "Type": Some values do not have unique names */

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FConnectOperators::Transform
          (FConnectOperators *this,FDynamicGraphOperatorData *param_1)

{
  FName *this_00;
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  EDynamicOperatorTransformQueueAction EVar5;
  int iVar6;
  FOperatorInfo *pFVar7;
  FOperatorInfo *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
  *pTVar10;
  TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  FScriptContainerElement *pFVar12;
  FAnyDataReference *pFVar13;
  bool bVar14;
  ulong64 local_a8;
  FName FStack_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicOperator::ConnectOperators");
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId491,"Metasound::DynamicOperator::ConnectOperators",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x1eb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId491);
  }
  pFVar7 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                   *)&param_1->_padding_,this->FromOpID);
  pFVar8 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                   *)&param_1->_padding_,this->ToOpID);
  if (pFVar7 == (FOperatorInfo *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&this->ToVert,&local_88);
      ::FName::ToString(&this->FromVert,&local_98);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (pFVar8 == (FOperatorInfo *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&this->ToVert,&local_68);
      ::FName::ToString(&this->FromVert,&local_78);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar9 = (pFVar7->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
    this_00 = &this->FromVert;
    pFVar12 = pFVar9 + (longlong)(pFVar7->VertexData).OutputVertexInterfaceData.Bindings.ArrayNum *
                       0x40;
    if (pFVar9 != pFVar12) {
      do {
        if (*(FName *)(pFVar9 + 8) == *this_00) {
          pFVar13 = (FAnyDataReference *)(pFVar9 + 0x20);
          if (pFVar9[0x38] == (FScriptContainerElement)0x0) {
            pFVar13 = (FAnyDataReference *)0x0;
          }
          if (pFVar13 != (FAnyDataReference *)0x0) {
            PropagateBindUpdate(this->ToOpID,&this->ToVert,pFVar13,param_1);
            UpdateOutputVertexData(param_1);
            pTVar10 = TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                      ::Find(&pFVar7->OutputConnections,*this_00);
            if (pTVar10 ==
                (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
                 *)0x0) {
              pTVar11 = TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                        ::AllocateMemoryForEmplace<FName_const_&>
                                  (&pFVar7->OutputConnections,this_00);
              uVar3 = this_00->Number;
              *(uint *)&pTVar11->field_0x0 = (this_00->ComparisonIndex).Value;
              *(uint *)&pTVar11->field_0x4 = uVar3;
              pTVar10 = (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
                         *)&pTVar11->field_0x8;
              *(undefined8 *)pTVar10 = 0;
              *(undefined8 *)&pTVar11->field_0x10 = 0;
            }
            local_a8 = this->ToOpID;
            FStack_a0 = this->ToVert;
            pFVar9 = (pTVar10->AllocatorInstance).Data;
            if (((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 < pFVar9 + (longlong)pTVar10->ArrayMax * 0x10)
                ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar4)) {
              pcVar2 = (code *)swi(3);
              EVar5 = (*pcVar2)();
              return EVar5;
            }
            iVar6 = pTVar10->ArrayNum;
            if (iVar6 == pTVar10->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
            }
            pTVar10->ArrayNum = iVar6 + 1;
            pFVar9 = (pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
            *(ulong64 *)pFVar9 = local_a8;
            *(FName *)(pFVar9 + 8) = FStack_a0;
            goto LAB_14ad675a4;
          }
          break;
        }
        pFVar9 = pFVar9 + 0x40;
      } while (pFVar9 != pFVar12);
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&this->ToVert,&local_38);
      ::FName::ToString(this_00,&local_48);
      ::FName::ToString(this_00,&local_58);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14ad675a4:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

