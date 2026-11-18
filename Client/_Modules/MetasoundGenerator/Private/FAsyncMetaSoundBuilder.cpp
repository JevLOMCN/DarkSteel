// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 4

// FAsyncMetaSoundBuilder @ 14b2a6200

FAsyncMetaSoundBuilder * __thiscall
Metasound::FAsyncMetaSoundBuilder::FAsyncMetaSoundBuilder
          (FAsyncMetaSoundBuilder *this,FMetasoundConstGraphGenerator *param_1,
          FGeneratorInitParams *param_2,bool param_3)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FAsyncMetaSoundBuilder_Metasound__6B_;
  *(bool *)&this->_padding_ = param_3;
  FGeneratorInitParams::FGeneratorInitParams(&this->InitParams,param_2);
  return this;
}

// ~FAsyncMetaSoundBuilder @ 14b2a7d40

void __thiscall
Metasound::FAsyncMetaSoundBuilder::~FAsyncMetaSoundBuilder(FAsyncMetaSoundBuilder *this)

{
  FGeneratorInitParams::~FGeneratorInitParams(&this->InitParams);
  return;
}

// DoWork @ 14b2afd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Metasound::FAsyncMetaSoundBuilder::DoWork(FAsyncMetaSoundBuilder *this)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 auStackY_138 [32];
  FName local_108;
  FString local_100;
  FString local_f0;
  FOperatorAndInputs local_d8;
  undefined1 local_98 [16];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_108 = (this->InitParams).AssetPath.AssetName;
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  ::FName::ToString(&local_108,&local_f0);
  ::FString::PrintfImpl(&local_100,L"AsyncMetaSoundBuilder::DoWork %s");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar3.Data = local_100.Data.AllocatorInstance.Data;
  }
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,(wchar_t *)FVar3.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  local_108 = (this->InitParams).AssetPath.AssetName;
  ::FName::ToString(&local_108,&local_f0);
  ::FString::PrintfImpl(&local_100,L"AsyncMetaSoundBuilder::DoWork %s");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar3.Data = local_100.Data.AllocatorInstance.Data;
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar3.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGeneratorBuilder.cpp"
               ,0x4c);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  local_5c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_4_ = 0;
  local_98._12_4_ = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  GeneratorBuilder::BuildGraphOperator
            (&local_d8,(FOperatorSettings *)(this->_padding_ + 0x18),&this->InitParams,
             (FBuildResults *)local_98);
  GeneratorBuilder::LogBuildErrors(&(this->InitParams).AssetPath,(FBuildResults *)local_98);
  FAsyncMetaSoundBuilderBase::SetGraphOnGenerator
            ((FAsyncMetaSoundBuilderBase *)this,&local_d8,(FBuildResults *)local_98);
  FGeneratorInitParams::Reset(&this->InitParams);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.RenderCost.SharedReferenceCount.ReferenceController);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.Inputs.SubInterfaces.AllocatorInstance.Data,
             local_d8.Inputs.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.Inputs.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.Inputs.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)local_d8.Inputs.Bindings.AllocatorInstance.Data,
             local_d8.Inputs.Bindings.ArrayNum);
  if ((FInputBinding *)local_d8.Inputs.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0) {
    FMemory::Free(local_d8.Inputs.Bindings.AllocatorInstance.Data);
  }
  if (local_d8.Operator.Ptr != (IOperator *)0x0) {
    (**(code **)*local_d8.Operator.Ptr)();
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  DestructItems<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,int>
            ((TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
              *)local_98._0_8_,local_98._8_4_);
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// GetGeneratorParams @ 14b2b1100

FGeneratorInitParams * __thiscall
Metasound::FAsyncMetaSoundBuilder::GetGeneratorParams(FAsyncMetaSoundBuilder *this)

{
  return &this->InitParams;
}

