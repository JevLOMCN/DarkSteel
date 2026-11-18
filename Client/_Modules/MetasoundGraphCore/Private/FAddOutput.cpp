// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FAddOutput @ 14ad37310

FAddOutput * __thiscall
Metasound::DynamicGraph::FAddOutput::FAddOutput(FAddOutput *this,ulong64 param_1,FName *param_2)

{
  this->OperatorID = param_1;
  this->_padding_ = (longlong)&___7FAddOutput_DynamicGraph_Metasound__6B_;
  this->VertexName = *param_2;
  return this;
}

// Transform @ 14ad66980

/* WARNING: Enum "Type": Some values do not have unique names */

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FAddOutput::Transform(FAddOutput *this,FDynamicGraphOperatorData *param_1)

{
  int *piVar1;
  TFunction<void___cdecl(FName_const_&,Metasound::FOutputVertexInterfaceData_const_&)> *this_00;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  EDynamicOperatorTransformQueueAction EVar7;
  int iVar8;
  FOperatorInfo *pFVar9;
  FScriptContainerElement *pFVar10;
  TTuple<FName,unsigned___int64> *pTVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  FAnyDataReference *pFVar15;
  bool bVar16;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"Metasound::DynamicOperator::AddOutput");
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId407,"Metasound::DynamicOperator::AddOutput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x197);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId407);
  }
  pFVar9 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                   *)&param_1->_padding_,this->OperatorID);
  if (pFVar9 == (FOperatorInfo *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&this->VertexName,&local_78);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar13 = (pFVar9->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
    pFVar10 = pFVar13 + (longlong)(pFVar9->VertexData).OutputVertexInterfaceData.Bindings.ArrayNum *
                        0x40;
    if (pFVar13 != pFVar10) {
      do {
        if (*(FName *)(pFVar13 + 8) == this->VertexName) goto LAB_14ad66b26;
        pFVar13 = pFVar13 + 0x40;
      } while (pFVar13 != pFVar10);
    }
    ::FName::ToString(&this->VertexName,&local_68);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != Binding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                       ,0x395,L"Attempt to access vertex \"%s\" which does not exist on interface.")
    ;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pFVar13 = (FScriptContainerElement *)0x0;
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
LAB_14ad66b26:
    pFVar10 = (pFVar9->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
    pFVar12 = pFVar10 + (longlong)(pFVar9->VertexData).OutputVertexInterfaceData.Bindings.ArrayNum *
                        0x40;
    if (pFVar10 != pFVar12) {
      do {
        if (*(FName *)(pFVar10 + 8) == this->VertexName) {
          pFVar15 = (FAnyDataReference *)(pFVar10 + 0x20);
          if (pFVar10[0x38] == (FScriptContainerElement)0x0) {
            pFVar15 = (FAnyDataReference *)0x0;
          }
          if (pFVar15 != (FAnyDataReference *)0x0) {
            cVar2 = (char)param_1->_padding_;
            *(undefined1 *)&param_1->_padding_ = 0;
            if ((int)param_1->_padding_ == 0) {
LAB_14ad66ca0:
              iVar8 = (int)param_1->_padding_;
              piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x840,(ForAnyElementType *)&param_1->_padding_,piVar1);
              }
              *(int *)&param_1->_padding_ = iVar8 + 1;
              puVar14 = (undefined8 *)((longlong)iVar8 * 0x40 + param_1->_padding_);
              *puVar14 = &___7FDataVertex_Metasound__6B_;
              puVar14[1] = *(undefined8 *)(pFVar13 + 8);
              puVar14[2] = *(undefined8 *)(pFVar13 + 0x10);
              *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(pFVar13 + 0x18);
              *puVar14 = &___7FOutputDataVertex_Metasound__6B_;
              *(undefined1 *)(puVar14 + 7) = 0;
            }
            else {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsVertexInterfaceFrozen || SubInterfaces.Num() == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                                 ,0x2d0,L"Interfaces containing sub interfaces cannot be unfrozen");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                EVar7 = (*pcVar4)();
                return EVar7;
              }
              if ((char)param_1->_padding_ == '\0') goto LAB_14ad66ca0;
              if (2 < (byte)LogMetaSound._0_1_) {
                ::FName::ToString((FName *)(pFVar13 + 8),&local_58);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
              }
            }
            *(char *)&param_1->_padding_ = cVar2;
            if (((cVar2 == '\0') && ((int)param_1->_padding_ != 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsVertexInterfaceFrozen || SubInterfaces.Num() == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                                   ,0x2d0,L"Interfaces containing sub interfaces cannot be unfrozen"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              EVar7 = (*pcVar4)();
              return EVar7;
            }
            FOutputVertexInterfaceData::SetVertex
                      ((FOutputVertexInterfaceData *)&param_1->_padding_,&this->VertexName,pFVar15);
            pTVar11 = TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::
                      AllocateMemoryForEmplace<FName_const_&>
                                ((TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>
                                  *)&param_1->_padding_,&this->VertexName);
            uVar5 = (this->VertexName).Number;
            *(uint *)&pTVar11->field_0x0 = (this->VertexName).ComparisonIndex.Value;
            *(uint *)&pTVar11->field_0x4 = uVar5;
            *(ulong64 *)&pTVar11->field_0x8 = this->OperatorID;
            this_00 = &(param_1->OperatorUpdateCallbacks).OnOutputAdded;
            if (*(longlong *)&this_00->field_0x0 != 0) {
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName_const_&,Metasound::FOutputVertexInterfaceData_const_&)>
              ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName_const_&,Metasound::FOutputVertexInterfaceData_const_&)>
                            *)this_00,&this->VertexName,
                           (FOutputVertexInterfaceData *)&param_1->_padding_);
            }
            goto LAB_14ad66ba9;
          }
          break;
        }
        pFVar10 = pFVar10 + 0x40;
      } while (pFVar10 != pFVar12);
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&this->VertexName,&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14ad66ba9:
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

