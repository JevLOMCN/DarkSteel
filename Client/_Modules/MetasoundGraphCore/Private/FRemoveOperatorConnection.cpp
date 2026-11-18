// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FRemoveOperatorConnection @ 14ad3c500

FRemoveOperatorConnection * __thiscall
Metasound::DynamicGraph::FRemoveOperatorConnection::FRemoveOperatorConnection
          (FRemoveOperatorConnection *this,ulong64 param_1,FName *param_2,ulong64 param_3,
          FName *param_4,FAnyDataReference *param_5)

{
  IDataReference *pIVar1;
  FAnyDataReference local_48;
  
  this->_padding_ = (longlong)&___7FRemoveOperatorConnection_DynamicGraph_Metasound__6B_;
  FAnyDataReference::FAnyDataReference(&local_48,param_5->AccessType,(param_5->DataRefPtr).Ptr);
  (this->SetOperatorInputTransform)._padding_ =
       (longlong)&___7FSetOperatorInput_DynamicGraph_Metasound__6B_;
  (this->SetOperatorInputTransform).ToOpID = param_3;
  (this->SetOperatorInputTransform).ToVert = *param_4;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FAnyDataReference::FAnyDataReference
            (&(this->SetOperatorInputTransform).DataRef,local_48.AccessType,local_48.DataRefPtr.Ptr)
  ;
  (this->SetOperatorInputTransform).DataRef._padding_ =
       (longlong)&___7FAnyDataReference_Metasound__6B_;
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  this->FromOpID = param_1;
  this->ToOpID = param_3;
  this->FromVertName = *param_2;
  this->ToVertName = *param_4;
  pIVar1 = (param_5->DataRefPtr).Ptr;
  if (pIVar1 != (IDataReference *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  return this;
}

// Transform @ 14ad67c50

/* WARNING: Enum "Type": Some values do not have unique names */

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FRemoveOperatorConnection::Transform
          (FRemoveOperatorConnection *this,FDynamicGraphOperatorData *param_1)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  EDynamicOperatorTransformQueueAction EVar6;
  FOperatorInfo *pFVar7;
  TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  FScriptContainerElement *pFVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  byte bVar17;
  bool bVar18;
  FString local_68;
  FString local_58;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicOperator::DisconnectOperators");
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId581,"Metasound::DynamicOperator::DisconnectOperators",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x245);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId581);
  }
  pFVar7 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                   *)&param_1->_padding_,this->FromOpID);
  if (pFVar7 == (FOperatorInfo *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&this->ToVertName,&local_68);
      ::FName::ToString(&this->FromVertName,&local_58);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
           *)local_68.Data.AllocatorInstance.Data !=
          (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
           *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_68.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
         ::Find(&pFVar7->OutputConnections,this->FromVertName);
    if ((TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
         *)local_68.Data.AllocatorInstance.Data ==
        (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
         *)0x0) {
      pTVar8 = TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
               ::AllocateMemoryForEmplace<FName_const_&>
                         (&pFVar7->OutputConnections,&this->FromVertName);
      uVar3 = (this->FromVertName).Number;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)&pTVar8->field_0x8;
      *(uint *)&pTVar8->field_0x0 = (this->FromVertName).ComparisonIndex.Value;
      *(uint *)&pTVar8->field_0x4 = uVar3;
      *(undefined8 *)local_68.Data.AllocatorInstance.Data = 0;
      *(undefined8 *)&pTVar8->field_0x10 = 0;
    }
    lVar11 = (longlong)
             ((TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
               *)local_68.Data.AllocatorInstance.Data)->ArrayNum;
    if (((TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
          *)local_68.Data.AllocatorInstance.Data)->ArrayNum != 0) {
      iVar12 = 0;
      FVar16.Data = (((TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
                       *)local_68.Data.AllocatorInstance.Data)->AllocatorInstance).Data;
      if ((*(ulong64 *)FVar16.Data == this->ToOpID) &&
         (*(FName *)(FVar16.Data + 8) == this->ToVertName)) {
        bVar17 = 0;
      }
      else {
        bVar17 = 1;
      }
      lVar15 = 0;
      iVar13 = 0;
      local_58.Data.AllocatorInstance.Data = FVar16.Data;
      do {
        lVar15 = lVar15 + 1;
        iVar14 = iVar13 + 1;
        if (lVar15 < lVar11) {
          pFVar9 = FVar16.Data + lVar15 * 0x10;
          do {
            if ((*(ulong64 *)pFVar9 == this->ToOpID) && (*(FName *)(pFVar9 + 8) == this->ToVertName)
               ) {
              bVar10 = 0;
            }
            else {
              bVar10 = 1;
            }
            if (bVar17 != bVar10) break;
            iVar14 = iVar14 + 1;
            lVar15 = lVar15 + 1;
            pFVar9 = pFVar9 + 0x10;
          } while (lVar15 < lVar11);
        }
        if (bVar17 != 0) {
          if (iVar12 != iVar13) {
            memmove(FVar16.Data + (longlong)iVar12 * 0x10,FVar16.Data + (longlong)iVar13 * 0x10,
                    (longlong)(iVar14 - iVar13) << 4);
            FVar16.Data = local_58.Data.AllocatorInstance.Data;
          }
          iVar12 = iVar12 + (iVar14 - iVar13);
        }
        bVar17 = bVar17 ^ 1;
        iVar13 = iVar14;
      } while (lVar15 < lVar11);
      *(int *)(local_68.Data.AllocatorInstance.Data + 8) = iVar12;
    }
    cVar4 = (**(code **)((this->SetOperatorInputTransform)._padding_ + 8))
                      (&this->SetOperatorInputTransform,param_1);
    if ((cVar4 != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextAction == EDynamicOperatorTransformQueueAction::Continue",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
                           ,0x259,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      EVar6 = (*pcVar2)();
      return EVar6;
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

