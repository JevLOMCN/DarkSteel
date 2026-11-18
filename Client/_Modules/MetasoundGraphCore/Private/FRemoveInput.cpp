// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FRemoveInput @ 14ad3c480

FRemoveInput * __thiscall
Metasound::DynamicGraph::FRemoveInput::FRemoveInput(FRemoveInput *this,FName *param_1)

{
  this->_padding_ = (longlong)&___7FRemoveInput_DynamicGraph_Metasound__6B_;
  this->VertexName = *param_1;
  return this;
}

// Transform @ 14ad678a0

/* WARNING: Enum "Type": Some values do not have unique names */

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FRemoveInput::Transform
          (FRemoveInput *this,FDynamicGraphOperatorData *param_1)

{
  TFunction<void___cdecl(FName_const_&,Metasound::FInputVertexInterfaceData_const_&)> *this_00;
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  EDynamicOperatorTransformQueueAction EVar6;
  longlong lVar7;
  FName *pFVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  FString local_60 [2];
  
  iVar4 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"Metasound::DynamicOperator::RemoveInput");
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId380,"Metasound::DynamicOperator::RemoveInput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x17c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId380);
  }
  TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::Remove
            ((TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess> *)
             &param_1->_padding_,this->VertexName);
  cVar1 = (char)param_1->_padding_;
  *(undefined1 *)&param_1->_padding_ = 0;
  if (((int)param_1->_padding_ != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsVertexInterfaceFrozen || SubInterfaces.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                         ,0x1df,L"Interfaces containing sub interfaces cannot be unfrozen"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  if ((char)param_1->_padding_ == '\0') {
    iVar9 = (int)param_1->_padding_;
    lVar7 = (longlong)iVar9;
    if (iVar9 != 0) {
      lVar2 = param_1->_padding_;
      iVar12 = 0;
      bVar5 = this->VertexName != *(FName *)(lVar2 + 8);
      lVar11 = 0;
      iVar9 = 0;
      do {
        lVar11 = lVar11 + 1;
        iVar10 = iVar9 + 1;
        if (lVar11 < lVar7) {
          pFVar8 = (FName *)(lVar11 * 0x58 + 8 + lVar2);
          do {
            if (bVar5 != (this->VertexName != *pFVar8)) break;
            iVar10 = iVar10 + 1;
            lVar11 = lVar11 + 1;
            pFVar8 = pFVar8 + 0xb;
          } while (lVar11 < lVar7);
        }
        iVar13 = iVar10 - iVar9;
        if (bVar5 == false) {
          DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
                    ((FInputBinding *)((longlong)iVar9 * 0x58 + lVar2),iVar13);
        }
        else {
          if (iVar12 != iVar9) {
            memmove((void *)((longlong)iVar12 * 0x58 + lVar2),
                    (void *)((longlong)iVar9 * 0x58 + lVar2),(longlong)iVar13 * 0x58);
          }
          iVar12 = iVar12 + iVar13;
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar9 = iVar10;
      } while (lVar11 < lVar7);
      *(int *)&param_1->_padding_ = iVar12;
    }
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&this->VertexName,local_60);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
  }
  *(char *)&param_1->_padding_ = cVar1;
  if (((cVar1 == '\0') && ((int)param_1->_padding_ != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsVertexInterfaceFrozen || SubInterfaces.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                         ,0x1df,L"Interfaces containing sub interfaces cannot be unfrozen"), bVar5))
  {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  this_00 = &(param_1->OperatorUpdateCallbacks).OnInputRemoved;
  if (*(longlong *)&this_00->field_0x0 != 0) {
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName_const_&,Metasound::FInputVertexInterfaceData_const_&)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName_const_&,Metasound::FInputVertexInterfaceData_const_&)>
                  *)this_00,&this->VertexName,(FInputVertexInterfaceData *)&param_1->_padding_);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

