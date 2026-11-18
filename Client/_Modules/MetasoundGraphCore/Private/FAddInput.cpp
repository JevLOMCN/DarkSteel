// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FAddInput @ 14ad37290

FAddInput * __thiscall
Metasound::DynamicGraph::FAddInput::FAddInput
          (FAddInput *this,ulong64 param_1,FName *param_2,FAnyDataReference *param_3)

{
  IDataReference *pIVar1;
  
  this->OperatorID = param_1;
  this->_padding_ = (longlong)&___7FAddInput_DynamicGraph_Metasound__6B_;
  this->VertexName = *param_2;
  FAnyDataReference::FAnyDataReference
            (&this->DataReference,param_3->AccessType,(param_3->DataRefPtr).Ptr);
  (this->DataReference)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  pIVar1 = (param_3->DataRefPtr).Ptr;
  if (pIVar1 != (IDataReference *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  return this;
}

// Transform @ 14ad66670

/* WARNING: Enum "Type": Some values do not have unique names */

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FAddInput::Transform(FAddInput *this,FDynamicGraphOperatorData *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  EDynamicOperatorTransformQueueAction EVar7;
  int iVar8;
  FOperatorInfo *pFVar9;
  FInputDataVertex *pFVar10;
  TTuple<FName,unsigned___int64> *pTVar11;
  undefined8 *puVar12;
  bool bVar13;
  FString local_48;
  FString local_38;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"Metasound::DynamicOperator::AddInput");
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId333,"Metasound::DynamicOperator::AddInput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x14d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId333);
  }
  pFVar9 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                   *)&param_1->_padding_,this->OperatorID);
  if (pFVar9 == (FOperatorInfo *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&this->VertexName,&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14ad66937;
  }
  pFVar10 = FInputVertexInterfaceData::GetVertex
                      (&(pFVar9->VertexData).InputVertexInterfaceData,&this->VertexName);
  cVar2 = (char)param_1->_padding_;
  *(undefined1 *)&param_1->_padding_ = 0;
  if ((int)param_1->_padding_ == 0) {
LAB_14ad66819:
    iVar8 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar8 + 1;
    puVar12 = (undefined8 *)(param_1->_padding_ + (longlong)iVar8 * 0x58);
    *puVar12 = &___7FDataVertex_Metasound__6B_;
    puVar12[1] = pFVar10->_padding_;
    puVar12[2] = pFVar10->_padding_;
    *(int *)(puVar12 + 3) = (int)pFVar10->_padding_;
    *puVar12 = &___7FInputDataVertex_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar12 + 4),&(pFVar10->Literal).Value);
    *(undefined1 *)(puVar12 + 10) = 0;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsVertexInterfaceFrozen || SubInterfaces.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                       ,0x1df,L"Interfaces containing sub interfaces cannot be unfrozen");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    if ((char)param_1->_padding_ == '\0') goto LAB_14ad66819;
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)&pFVar10->_padding_,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  *(char *)&param_1->_padding_ = cVar2;
  if (((cVar2 == '\0') && ((int)param_1->_padding_ != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsVertexInterfaceFrozen || SubInterfaces.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                         ,0x1df,L"Interfaces containing sub interfaces cannot be unfrozen"), bVar6))
  {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  FInputVertexInterfaceData::SetVertex
            ((FInputVertexInterfaceData *)&param_1->_padding_,&this->VertexName,&this->DataReference
            );
  pTVar11 = TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::
            AllocateMemoryForEmplace<FName_const_&>
                      ((TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>
                        *)&param_1->_padding_,&this->VertexName);
  uVar5 = (this->VertexName).Number;
  *(uint *)&pTVar11->field_0x0 = (this->VertexName).ComparisonIndex.Value;
  *(uint *)&pTVar11->field_0x4 = uVar5;
  *(ulong64 *)&pTVar11->field_0x8 = this->OperatorID;
  if (*(longlong *)&(param_1->OperatorUpdateCallbacks).OnInputAdded != 0) {
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName_const_&,Metasound::FInputVertexInterfaceData_const_&)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName_const_&,Metasound::FInputVertexInterfaceData_const_&)>
                  *)&param_1->OperatorUpdateCallbacks,&this->VertexName,
                 (FInputVertexInterfaceData *)&param_1->_padding_);
  }
  PropagateBindUpdate(this->OperatorID,&this->VertexName,&this->DataReference,param_1);
  UpdateOutputVertexData(param_1);
LAB_14ad66937:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

