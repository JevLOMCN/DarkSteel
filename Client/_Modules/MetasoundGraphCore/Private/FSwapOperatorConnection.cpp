// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FSwapOperatorConnection @ 14ad3ca80

FSwapOperatorConnection * __thiscall
Metasound::DynamicGraph::FSwapOperatorConnection::FSwapOperatorConnection
          (FSwapOperatorConnection *this,ulong64 param_1,FName *param_2,ulong64 param_3,
          FName *param_4,ulong64 param_5,FName *param_6)

{
  this->_padding_ = (longlong)&___7FSwapOperatorConnection_DynamicGraph_Metasound__6B_;
  (this->ConnectTransform)._padding_ = (longlong)&___7FConnectOperators_DynamicGraph_Metasound__6B_;
  (this->ConnectTransform).FromOpID = param_3;
  (this->ConnectTransform).ToOpID = param_5;
  (this->ConnectTransform).FromVert = *param_4;
  (this->ConnectTransform).ToVert = *param_6;
  this->OriginalFromOpID = param_1;
  this->ToOpID = param_5;
  this->OriginalFromVert = *param_2;
  this->ToVert = *param_6;
  return this;
}

// Transform @ 14ad68600

/* WARNING: Enum "Type": Some values do not have unique names */

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FSwapOperatorConnection::Transform
          (FSwapOperatorConnection *this,FDynamicGraphOperatorData *param_1)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  EDynamicOperatorTransformQueueAction EVar6;
  FOperatorInfo *pFVar7;
  TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
  *pTVar8;
  TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  FScriptContainerElement *pFVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  byte bVar18;
  bool bVar19;
  FString local_68;
  FString local_58;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicOperator::DisconnectOperators");
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId541,"Metasound::DynamicOperator::DisconnectOperators",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x21d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId541);
  }
  cVar4 = (**(code **)((this->ConnectTransform)._padding_ + 8))(&this->ConnectTransform,param_1);
  if ((cVar4 != '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextAction == EDynamicOperatorTransformQueueAction::Continue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
                         ,0x222,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  pFVar7 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                   *)&param_1->_padding_,this->OriginalFromOpID);
  if (pFVar7 == (FOperatorInfo *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&this->ToVert,&local_58);
      ::FName::ToString(&this->OriginalFromVert,&local_68);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pTVar8 = TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(&pFVar7->OutputConnections,this->OriginalFromVert);
    if (pTVar8 == (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      pTVar9 = TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
               ::AllocateMemoryForEmplace<FName_const_&>
                         (&pFVar7->OutputConnections,&this->OriginalFromVert);
      uVar3 = (this->OriginalFromVert).Number;
      pTVar8 = (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
                *)&pTVar9->field_0x8;
      *(uint *)&pTVar9->field_0x0 = (this->OriginalFromVert).ComparisonIndex.Value;
      *(uint *)&pTVar9->field_0x4 = uVar3;
      *(undefined8 *)pTVar8 = 0;
      *(undefined8 *)&pTVar9->field_0x10 = 0;
    }
    lVar12 = (longlong)pTVar8->ArrayNum;
    if (pTVar8->ArrayNum != 0) {
      iVar13 = 0;
      FVar17.Data = (pTVar8->AllocatorInstance).Data;
      if ((*(ulong64 *)FVar17.Data == this->ToOpID) && (*(FName *)(FVar17.Data + 8) == this->ToVert)
         ) {
        bVar18 = 0;
      }
      else {
        bVar18 = 1;
      }
      lVar16 = 0;
      iVar14 = 0;
      local_68.Data.AllocatorInstance.Data = FVar17.Data;
      do {
        lVar16 = lVar16 + 1;
        iVar15 = iVar14 + 1;
        if (lVar16 < lVar12) {
          pFVar10 = FVar17.Data + lVar16 * 0x10;
          do {
            if ((*(ulong64 *)pFVar10 == this->ToOpID) && (*(FName *)(pFVar10 + 8) == this->ToVert))
            {
              bVar11 = 0;
            }
            else {
              bVar11 = 1;
            }
            if (bVar18 != bVar11) break;
            iVar15 = iVar15 + 1;
            lVar16 = lVar16 + 1;
            pFVar10 = pFVar10 + 0x10;
          } while (lVar16 < lVar12);
        }
        if (bVar18 != 0) {
          if (iVar13 != iVar14) {
            memmove(FVar17.Data + (longlong)iVar13 * 0x10,FVar17.Data + (longlong)iVar14 * 0x10,
                    (longlong)(iVar15 - iVar14) << 4);
            FVar17.Data = local_68.Data.AllocatorInstance.Data;
          }
          iVar13 = iVar13 + (iVar15 - iVar14);
        }
        bVar18 = bVar18 ^ 1;
        iVar14 = iVar15;
      } while (lVar16 < lVar12);
      pTVar8->ArrayNum = iVar13;
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

